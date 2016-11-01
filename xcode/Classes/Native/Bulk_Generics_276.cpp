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
extern TypeInfo IList_1_t36603_il2cpp_TypeInfo;

// System.Runtime.InteropServices.GuidAttribute
#include "mscorlib_System_Runtime_InteropServices_GuidAttribute.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo IList_1_get_Item_m270491_MethodInfo;
extern MethodInfo IList_1_set_Item_m270492_MethodInfo;
static PropertyInfo IList_1_t36603____Item_PropertyInfo = 
{
	&IList_1_t36603_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270491_MethodInfo/* get */
	, &IList_1_set_Item_m270492_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36603_PropertyInfos[] =
{
	&IList_1_t36603____Item_PropertyInfo,
	NULL
};
extern Il2CppType GuidAttribute_t6277_0_0_0;
static ParameterInfo IList_1_t36603_IList_1_IndexOf_m270493_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t6277_0_0_0},
};
extern TypeInfo IList_1_t36603_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270493_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36603_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36603_IList_1_IndexOf_m270493_ParameterInfos/* parameters */
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
extern Il2CppType GuidAttribute_t6277_0_0_0;
static ParameterInfo IList_1_t36603_IList_1_Insert_m270494_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t6277_0_0_0},
};
extern TypeInfo IList_1_t36603_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270494_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36603_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36603_IList_1_Insert_m270494_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36603_IList_1_RemoveAt_m270495_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36603_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270495_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36603_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36603_IList_1_RemoveAt_m270495_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36603_IList_1_get_Item_m270491_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36603_il2cpp_TypeInfo;
extern Il2CppType GuidAttribute_t6277_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270491_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36603_il2cpp_TypeInfo/* declaring_type */
	, &GuidAttribute_t6277_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36603_IList_1_get_Item_m270491_ParameterInfos/* parameters */
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
extern Il2CppType GuidAttribute_t6277_0_0_0;
static ParameterInfo IList_1_t36603_IList_1_set_Item_m270492_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t6277_0_0_0},
};
extern TypeInfo IList_1_t36603_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270492_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36603_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36603_IList_1_set_Item_m270492_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36603_MethodInfos[] =
{
	&IList_1_IndexOf_m270493_MethodInfo,
	&IList_1_Insert_m270494_MethodInfo,
	&IList_1_RemoveAt_m270495_MethodInfo,
	&IList_1_get_Item_m270491_MethodInfo,
	&IList_1_set_Item_m270492_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36602_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36604_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36603_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36602_il2cpp_TypeInfo,
	&IEnumerable_1_t36604_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36603_0_0_0;
extern Il2CppType IList_1_t36603_1_0_0;
struct IList_1_t36603;
extern TypeInfo IList_1_t36603_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36603_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36603_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36603_MethodInfos/* methods */
	, IList_1_t36603_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36603_il2cpp_TypeInfo/* element_class */
	, IList_1_t36603_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36603_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36603_0_0_0/* byval_arg */
	, &IList_1_t36603_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36603_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29145_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComImportAttribute
#include "mscorlib_System_Runtime_InteropServices_ComImportAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270496_MethodInfo;
static PropertyInfo IEnumerator_1_t29145____Current_PropertyInfo = 
{
	&IEnumerator_1_t29145_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270496_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29145_PropertyInfos[] =
{
	&IEnumerator_1_t29145____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29145_il2cpp_TypeInfo;
extern Il2CppType ComImportAttribute_t7752_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270496_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29145_il2cpp_TypeInfo/* declaring_type */
	, &ComImportAttribute_t7752_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29145_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270496_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29145_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29145_0_0_0;
extern Il2CppType IEnumerator_1_t29145_1_0_0;
struct IEnumerator_1_t29145;
extern TypeInfo IEnumerator_1_t29145_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29145_GenericClass;
TypeInfo IEnumerator_1_t29145_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29145_MethodInfos/* methods */
	, IEnumerator_1_t29145_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29145_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29145_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29145_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29145_0_0_0/* byval_arg */
	, &IEnumerator_1_t29145_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29145_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2894.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2894MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo;
extern TypeInfo ComImportAttribute_t7752_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m179267_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComImportAttribute_t7752_m221960_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m180549_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m180549(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComImportAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComImportAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisComImportAttribute_t7752_m221960(__this, p0, method) (ComImportAttribute_t7752 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisComImportAttribute_t7752_m221960_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24687____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24687, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24687____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24687, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24687_FieldInfos[] =
{
	&InternalEnumerator_1_t24687____array_FieldInfo,
	&InternalEnumerator_1_t24687____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179264_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24687____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24687_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179264_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179267_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24687____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24687_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179267_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24687_PropertyInfos[] =
{
	&InternalEnumerator_1_t24687____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24687____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24687_InternalEnumerator_1__ctor_m179262_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179262_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24687_InternalEnumerator_1__ctor_m179262_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179263_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179264_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179265_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179266_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo;
extern Il2CppType ComImportAttribute_t7752_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179267_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* declaring_type */
	, &ComImportAttribute_t7752_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24687_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179262_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179263_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179264_MethodInfo,
	&InternalEnumerator_1_Dispose_m179265_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179266_MethodInfo,
	&InternalEnumerator_1_get_Current_m179267_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179264_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179266_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179263_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179265_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179267_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24687_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179264_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179266_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179263_MethodInfo,
	&InternalEnumerator_1_Dispose_m179265_MethodInfo,
	&InternalEnumerator_1_get_Current_m179267_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29145_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24687_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29145_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29145_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24687_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29145_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179267_MethodInfo;
extern TypeInfo ComImportAttribute_t7752_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComImportAttribute_t7752_m221960_MethodInfo;
static void* InternalEnumerator_1_t24687_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179267_MethodInfo,
	&ComImportAttribute_t7752_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisComImportAttribute_t7752_m221960_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24687_0_0_0;
extern Il2CppType InternalEnumerator_1_t24687_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24687_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24687_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24687_MethodInfos/* methods */
	, InternalEnumerator_1_t24687_PropertyInfos/* properties */
	, InternalEnumerator_1_t24687_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24687_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24687_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24687_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24687_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24687_1_0_0/* this_arg */
	, InternalEnumerator_1_t24687_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24687_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24687_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24687)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo ICollection_1_get_Count_m270497_MethodInfo;
static PropertyInfo ICollection_1_t36605____Count_PropertyInfo = 
{
	&ICollection_1_t36605_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270497_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270498_MethodInfo;
static PropertyInfo ICollection_1_t36605____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36605_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270498_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36605_PropertyInfos[] =
{
	&ICollection_1_t36605____Count_PropertyInfo,
	&ICollection_1_t36605____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270497_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36605_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270498_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36605_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ComImportAttribute_t7752_0_0_0;
static ParameterInfo ICollection_1_t36605_ICollection_1_Add_m270499_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t7752_0_0_0},
};
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270499_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36605_ICollection_1_Add_m270499_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270500_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36605_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ComImportAttribute_t7752_0_0_0;
static ParameterInfo ICollection_1_t36605_ICollection_1_Contains_m270501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t7752_0_0_0},
};
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270501_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36605_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36605_ICollection_1_Contains_m270501_ParameterInfos/* parameters */
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
extern Il2CppType ComImportAttributeU5BU5D_t25235_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36605_ICollection_1_CopyTo_m270502_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttributeU5BU5D_t25235_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270502_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36605_ICollection_1_CopyTo_m270502_ParameterInfos/* parameters */
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
extern Il2CppType ComImportAttribute_t7752_0_0_0;
static ParameterInfo ICollection_1_t36605_ICollection_1_Remove_m270503_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t7752_0_0_0},
};
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270503_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36605_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36605_ICollection_1_Remove_m270503_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36605_MethodInfos[] =
{
	&ICollection_1_get_Count_m270497_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270498_MethodInfo,
	&ICollection_1_Add_m270499_MethodInfo,
	&ICollection_1_Clear_m270500_MethodInfo,
	&ICollection_1_Contains_m270501_MethodInfo,
	&ICollection_1_CopyTo_m270502_MethodInfo,
	&ICollection_1_Remove_m270503_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36607_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36605_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36607_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36605_0_0_0;
extern Il2CppType ICollection_1_t36605_1_0_0;
struct ICollection_1_t36605;
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36605_GenericClass;
TypeInfo ICollection_1_t36605_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36605_MethodInfos/* methods */
	, ICollection_1_t36605_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36605_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36605_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36605_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36605_0_0_0/* byval_arg */
	, &ICollection_1_t36605_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36605_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36607_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>
extern TypeInfo IEnumerable_1_t36607_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29145_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270504_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36607_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29145_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36607_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270504_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36607_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36607_0_0_0;
extern Il2CppType IEnumerable_1_t36607_1_0_0;
struct IEnumerable_1_t36607;
extern TypeInfo IEnumerable_1_t36607_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36607_GenericClass;
TypeInfo IEnumerable_1_t36607_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36607_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36607_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36607_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36607_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36607_0_0_0/* byval_arg */
	, &IEnumerable_1_t36607_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36607_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36606_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo IList_1_get_Item_m270505_MethodInfo;
extern MethodInfo IList_1_set_Item_m270506_MethodInfo;
static PropertyInfo IList_1_t36606____Item_PropertyInfo = 
{
	&IList_1_t36606_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270505_MethodInfo/* get */
	, &IList_1_set_Item_m270506_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36606_PropertyInfos[] =
{
	&IList_1_t36606____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComImportAttribute_t7752_0_0_0;
static ParameterInfo IList_1_t36606_IList_1_IndexOf_m270507_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t7752_0_0_0},
};
extern TypeInfo IList_1_t36606_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270507_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36606_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36606_IList_1_IndexOf_m270507_ParameterInfos/* parameters */
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
extern Il2CppType ComImportAttribute_t7752_0_0_0;
static ParameterInfo IList_1_t36606_IList_1_Insert_m270508_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t7752_0_0_0},
};
extern TypeInfo IList_1_t36606_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270508_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36606_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36606_IList_1_Insert_m270508_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36606_IList_1_RemoveAt_m270509_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36606_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270509_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36606_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36606_IList_1_RemoveAt_m270509_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36606_IList_1_get_Item_m270505_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36606_il2cpp_TypeInfo;
extern Il2CppType ComImportAttribute_t7752_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270505_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36606_il2cpp_TypeInfo/* declaring_type */
	, &ComImportAttribute_t7752_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36606_IList_1_get_Item_m270505_ParameterInfos/* parameters */
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
extern Il2CppType ComImportAttribute_t7752_0_0_0;
static ParameterInfo IList_1_t36606_IList_1_set_Item_m270506_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t7752_0_0_0},
};
extern TypeInfo IList_1_t36606_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270506_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36606_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36606_IList_1_set_Item_m270506_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36606_MethodInfos[] =
{
	&IList_1_IndexOf_m270507_MethodInfo,
	&IList_1_Insert_m270508_MethodInfo,
	&IList_1_RemoveAt_m270509_MethodInfo,
	&IList_1_get_Item_m270505_MethodInfo,
	&IList_1_set_Item_m270506_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36605_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36607_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36606_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36605_il2cpp_TypeInfo,
	&IEnumerable_1_t36607_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36606_0_0_0;
extern Il2CppType IList_1_t36606_1_0_0;
struct IList_1_t36606;
extern TypeInfo IList_1_t36606_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36606_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36606_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36606_MethodInfos/* methods */
	, IList_1_t36606_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36606_il2cpp_TypeInfo/* element_class */
	, IList_1_t36606_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36606_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36606_0_0_0/* byval_arg */
	, &IList_1_t36606_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36606_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29146_il2cpp_TypeInfo;

// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270510_MethodInfo;
static PropertyInfo IEnumerator_1_t29146____Current_PropertyInfo = 
{
	&IEnumerator_1_t29146_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270510_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29146_PropertyInfos[] =
{
	&IEnumerator_1_t29146____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29146_il2cpp_TypeInfo;
extern Il2CppType OptionalAttribute_t7753_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270510_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29146_il2cpp_TypeInfo/* declaring_type */
	, &OptionalAttribute_t7753_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29146_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270510_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29146_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29146_0_0_0;
extern Il2CppType IEnumerator_1_t29146_1_0_0;
struct IEnumerator_1_t29146;
extern TypeInfo IEnumerator_1_t29146_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29146_GenericClass;
TypeInfo IEnumerator_1_t29146_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29146_MethodInfos/* methods */
	, IEnumerator_1_t29146_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29146_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29146_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29146_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29146_0_0_0/* byval_arg */
	, &IEnumerator_1_t29146_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29146_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2895.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2895MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo;
extern TypeInfo OptionalAttribute_t7753_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179273_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOptionalAttribute_t7753_m221971_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OptionalAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OptionalAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOptionalAttribute_t7753_m221971(__this, p0, method) (OptionalAttribute_t7753 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisOptionalAttribute_t7753_m221971_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24688____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24688, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24688____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24688, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24688_FieldInfos[] =
{
	&InternalEnumerator_1_t24688____array_FieldInfo,
	&InternalEnumerator_1_t24688____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179270_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24688____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24688_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179270_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179273_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24688____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24688_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179273_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24688_PropertyInfos[] =
{
	&InternalEnumerator_1_t24688____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24688____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24688_InternalEnumerator_1__ctor_m179268_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179268_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24688_InternalEnumerator_1__ctor_m179268_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179269_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179270_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179271_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179272_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo;
extern Il2CppType OptionalAttribute_t7753_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179273_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* declaring_type */
	, &OptionalAttribute_t7753_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24688_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179268_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179269_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179270_MethodInfo,
	&InternalEnumerator_1_Dispose_m179271_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179272_MethodInfo,
	&InternalEnumerator_1_get_Current_m179273_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179270_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179272_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179269_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179271_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179273_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24688_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179270_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179272_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179269_MethodInfo,
	&InternalEnumerator_1_Dispose_m179271_MethodInfo,
	&InternalEnumerator_1_get_Current_m179273_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29146_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24688_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29146_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29146_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24688_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29146_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179273_MethodInfo;
extern TypeInfo OptionalAttribute_t7753_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOptionalAttribute_t7753_m221971_MethodInfo;
static void* InternalEnumerator_1_t24688_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179273_MethodInfo,
	&OptionalAttribute_t7753_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisOptionalAttribute_t7753_m221971_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24688_0_0_0;
extern Il2CppType InternalEnumerator_1_t24688_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24688_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24688_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24688_MethodInfos/* methods */
	, InternalEnumerator_1_t24688_PropertyInfos/* properties */
	, InternalEnumerator_1_t24688_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24688_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24688_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24688_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24688_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24688_1_0_0/* this_arg */
	, InternalEnumerator_1_t24688_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24688_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24688_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24688)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo ICollection_1_get_Count_m270511_MethodInfo;
static PropertyInfo ICollection_1_t36608____Count_PropertyInfo = 
{
	&ICollection_1_t36608_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270511_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270512_MethodInfo;
static PropertyInfo ICollection_1_t36608____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36608_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270512_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36608_PropertyInfos[] =
{
	&ICollection_1_t36608____Count_PropertyInfo,
	&ICollection_1_t36608____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270511_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36608_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270512_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36608_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType OptionalAttribute_t7753_0_0_0;
static ParameterInfo ICollection_1_t36608_ICollection_1_Add_m270513_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t7753_0_0_0},
};
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270513_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36608_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36608_ICollection_1_Add_m270513_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270514_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36608_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType OptionalAttribute_t7753_0_0_0;
static ParameterInfo ICollection_1_t36608_ICollection_1_Contains_m270515_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t7753_0_0_0},
};
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270515_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36608_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36608_ICollection_1_Contains_m270515_ParameterInfos/* parameters */
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
extern Il2CppType OptionalAttributeU5BU5D_t25236_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36608_ICollection_1_CopyTo_m270516_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttributeU5BU5D_t25236_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270516_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36608_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36608_ICollection_1_CopyTo_m270516_ParameterInfos/* parameters */
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
extern Il2CppType OptionalAttribute_t7753_0_0_0;
static ParameterInfo ICollection_1_t36608_ICollection_1_Remove_m270517_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t7753_0_0_0},
};
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270517_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36608_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36608_ICollection_1_Remove_m270517_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36608_MethodInfos[] =
{
	&ICollection_1_get_Count_m270511_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270512_MethodInfo,
	&ICollection_1_Add_m270513_MethodInfo,
	&ICollection_1_Clear_m270514_MethodInfo,
	&ICollection_1_Contains_m270515_MethodInfo,
	&ICollection_1_CopyTo_m270516_MethodInfo,
	&ICollection_1_Remove_m270517_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36610_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36608_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36610_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36608_0_0_0;
extern Il2CppType ICollection_1_t36608_1_0_0;
struct ICollection_1_t36608;
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36608_GenericClass;
TypeInfo ICollection_1_t36608_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36608_MethodInfos/* methods */
	, ICollection_1_t36608_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36608_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36608_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36608_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36608_0_0_0/* byval_arg */
	, &ICollection_1_t36608_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36608_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36610_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>
extern TypeInfo IEnumerable_1_t36610_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29146_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270518_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36610_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29146_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36610_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270518_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36610_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36610_0_0_0;
extern Il2CppType IEnumerable_1_t36610_1_0_0;
struct IEnumerable_1_t36610;
extern TypeInfo IEnumerable_1_t36610_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36610_GenericClass;
TypeInfo IEnumerable_1_t36610_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36610_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36610_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36610_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36610_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36610_0_0_0/* byval_arg */
	, &IEnumerable_1_t36610_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36610_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36609_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo IList_1_get_Item_m270519_MethodInfo;
extern MethodInfo IList_1_set_Item_m270520_MethodInfo;
static PropertyInfo IList_1_t36609____Item_PropertyInfo = 
{
	&IList_1_t36609_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270519_MethodInfo/* get */
	, &IList_1_set_Item_m270520_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36609_PropertyInfos[] =
{
	&IList_1_t36609____Item_PropertyInfo,
	NULL
};
extern Il2CppType OptionalAttribute_t7753_0_0_0;
static ParameterInfo IList_1_t36609_IList_1_IndexOf_m270521_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t7753_0_0_0},
};
extern TypeInfo IList_1_t36609_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270521_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36609_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36609_IList_1_IndexOf_m270521_ParameterInfos/* parameters */
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
extern Il2CppType OptionalAttribute_t7753_0_0_0;
static ParameterInfo IList_1_t36609_IList_1_Insert_m270522_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t7753_0_0_0},
};
extern TypeInfo IList_1_t36609_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270522_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36609_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36609_IList_1_Insert_m270522_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36609_IList_1_RemoveAt_m270523_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36609_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270523_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36609_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36609_IList_1_RemoveAt_m270523_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36609_IList_1_get_Item_m270519_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36609_il2cpp_TypeInfo;
extern Il2CppType OptionalAttribute_t7753_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270519_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36609_il2cpp_TypeInfo/* declaring_type */
	, &OptionalAttribute_t7753_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36609_IList_1_get_Item_m270519_ParameterInfos/* parameters */
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
extern Il2CppType OptionalAttribute_t7753_0_0_0;
static ParameterInfo IList_1_t36609_IList_1_set_Item_m270520_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t7753_0_0_0},
};
extern TypeInfo IList_1_t36609_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270520_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36609_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36609_IList_1_set_Item_m270520_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36609_MethodInfos[] =
{
	&IList_1_IndexOf_m270521_MethodInfo,
	&IList_1_Insert_m270522_MethodInfo,
	&IList_1_RemoveAt_m270523_MethodInfo,
	&IList_1_get_Item_m270519_MethodInfo,
	&IList_1_set_Item_m270520_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36608_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36610_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36609_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36608_il2cpp_TypeInfo,
	&IEnumerable_1_t36610_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36609_0_0_0;
extern Il2CppType IList_1_t36609_1_0_0;
struct IList_1_t36609;
extern TypeInfo IList_1_t36609_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36609_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36609_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36609_MethodInfos/* methods */
	, IList_1_t36609_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36609_il2cpp_TypeInfo/* element_class */
	, IList_1_t36609_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36609_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36609_0_0_0/* byval_arg */
	, &IList_1_t36609_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36609_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29147_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270524_MethodInfo;
static PropertyInfo IEnumerator_1_t29147____Current_PropertyInfo = 
{
	&IEnumerator_1_t29147_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270524_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29147_PropertyInfos[] =
{
	&IEnumerator_1_t29147____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29147_il2cpp_TypeInfo;
extern Il2CppType CompilerGeneratedAttribute_t963_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270524_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29147_il2cpp_TypeInfo/* declaring_type */
	, &CompilerGeneratedAttribute_t963_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29147_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270524_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29147_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29147_0_0_0;
extern Il2CppType IEnumerator_1_t29147_1_0_0;
struct IEnumerator_1_t29147;
extern TypeInfo IEnumerator_1_t29147_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29147_GenericClass;
TypeInfo IEnumerator_1_t29147_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29147_MethodInfos/* methods */
	, IEnumerator_1_t29147_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29147_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29147_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29147_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29147_0_0_0/* byval_arg */
	, &IEnumerator_1_t29147_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29147_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2896.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2896MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo;
extern TypeInfo CompilerGeneratedAttribute_t963_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179279_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t963_m221982_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilerGeneratedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilerGeneratedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t963_m221982(__this, p0, method) (CompilerGeneratedAttribute_t963 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t963_m221982_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24689____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24689, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24689____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24689, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24689_FieldInfos[] =
{
	&InternalEnumerator_1_t24689____array_FieldInfo,
	&InternalEnumerator_1_t24689____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179276_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24689____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24689_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179276_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179279_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24689____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24689_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179279_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24689_PropertyInfos[] =
{
	&InternalEnumerator_1_t24689____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24689____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24689_InternalEnumerator_1__ctor_m179274_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179274_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24689_InternalEnumerator_1__ctor_m179274_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179275_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179276_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179277_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179278_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo;
extern Il2CppType CompilerGeneratedAttribute_t963_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179279_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* declaring_type */
	, &CompilerGeneratedAttribute_t963_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24689_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179274_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179275_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179276_MethodInfo,
	&InternalEnumerator_1_Dispose_m179277_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179278_MethodInfo,
	&InternalEnumerator_1_get_Current_m179279_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179276_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179278_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179275_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179277_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179279_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24689_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179276_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179278_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179275_MethodInfo,
	&InternalEnumerator_1_Dispose_m179277_MethodInfo,
	&InternalEnumerator_1_get_Current_m179279_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29147_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24689_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29147_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29147_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24689_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29147_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179279_MethodInfo;
extern TypeInfo CompilerGeneratedAttribute_t963_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t963_m221982_MethodInfo;
static void* InternalEnumerator_1_t24689_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179279_MethodInfo,
	&CompilerGeneratedAttribute_t963_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t963_m221982_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24689_0_0_0;
extern Il2CppType InternalEnumerator_1_t24689_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24689_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24689_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24689_MethodInfos/* methods */
	, InternalEnumerator_1_t24689_PropertyInfos/* properties */
	, InternalEnumerator_1_t24689_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24689_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24689_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24689_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24689_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24689_1_0_0/* this_arg */
	, InternalEnumerator_1_t24689_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24689_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24689_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24689)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo ICollection_1_get_Count_m270525_MethodInfo;
static PropertyInfo ICollection_1_t36611____Count_PropertyInfo = 
{
	&ICollection_1_t36611_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270525_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270526_MethodInfo;
static PropertyInfo ICollection_1_t36611____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36611_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270526_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36611_PropertyInfos[] =
{
	&ICollection_1_t36611____Count_PropertyInfo,
	&ICollection_1_t36611____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270525_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36611_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270526_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36611_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CompilerGeneratedAttribute_t963_0_0_0;
static ParameterInfo ICollection_1_t36611_ICollection_1_Add_m270527_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t963_0_0_0},
};
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270527_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36611_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36611_ICollection_1_Add_m270527_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270528_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36611_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CompilerGeneratedAttribute_t963_0_0_0;
static ParameterInfo ICollection_1_t36611_ICollection_1_Contains_m270529_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t963_0_0_0},
};
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270529_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36611_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36611_ICollection_1_Contains_m270529_ParameterInfos/* parameters */
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
extern Il2CppType CompilerGeneratedAttributeU5BU5D_t25237_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36611_ICollection_1_CopyTo_m270530_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttributeU5BU5D_t25237_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270530_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36611_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36611_ICollection_1_CopyTo_m270530_ParameterInfos/* parameters */
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
extern Il2CppType CompilerGeneratedAttribute_t963_0_0_0;
static ParameterInfo ICollection_1_t36611_ICollection_1_Remove_m270531_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t963_0_0_0},
};
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270531_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36611_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36611_ICollection_1_Remove_m270531_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36611_MethodInfos[] =
{
	&ICollection_1_get_Count_m270525_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270526_MethodInfo,
	&ICollection_1_Add_m270527_MethodInfo,
	&ICollection_1_Clear_m270528_MethodInfo,
	&ICollection_1_Contains_m270529_MethodInfo,
	&ICollection_1_CopyTo_m270530_MethodInfo,
	&ICollection_1_Remove_m270531_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36613_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36611_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36613_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36611_0_0_0;
extern Il2CppType ICollection_1_t36611_1_0_0;
struct ICollection_1_t36611;
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36611_GenericClass;
TypeInfo ICollection_1_t36611_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36611_MethodInfos/* methods */
	, ICollection_1_t36611_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36611_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36611_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36611_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36611_0_0_0/* byval_arg */
	, &ICollection_1_t36611_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36611_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36613_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern TypeInfo IEnumerable_1_t36613_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29147_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270532_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36613_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29147_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36613_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270532_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36613_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36613_0_0_0;
extern Il2CppType IEnumerable_1_t36613_1_0_0;
struct IEnumerable_1_t36613;
extern TypeInfo IEnumerable_1_t36613_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36613_GenericClass;
TypeInfo IEnumerable_1_t36613_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36613_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36613_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36613_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36613_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36613_0_0_0/* byval_arg */
	, &IEnumerable_1_t36613_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36613_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36612_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo IList_1_get_Item_m270533_MethodInfo;
extern MethodInfo IList_1_set_Item_m270534_MethodInfo;
static PropertyInfo IList_1_t36612____Item_PropertyInfo = 
{
	&IList_1_t36612_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270533_MethodInfo/* get */
	, &IList_1_set_Item_m270534_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36612_PropertyInfos[] =
{
	&IList_1_t36612____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompilerGeneratedAttribute_t963_0_0_0;
static ParameterInfo IList_1_t36612_IList_1_IndexOf_m270535_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t963_0_0_0},
};
extern TypeInfo IList_1_t36612_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270535_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36612_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36612_IList_1_IndexOf_m270535_ParameterInfos/* parameters */
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
extern Il2CppType CompilerGeneratedAttribute_t963_0_0_0;
static ParameterInfo IList_1_t36612_IList_1_Insert_m270536_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t963_0_0_0},
};
extern TypeInfo IList_1_t36612_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270536_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36612_IList_1_Insert_m270536_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36612_IList_1_RemoveAt_m270537_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36612_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270537_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36612_IList_1_RemoveAt_m270537_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36612_IList_1_get_Item_m270533_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36612_il2cpp_TypeInfo;
extern Il2CppType CompilerGeneratedAttribute_t963_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270533_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36612_il2cpp_TypeInfo/* declaring_type */
	, &CompilerGeneratedAttribute_t963_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36612_IList_1_get_Item_m270533_ParameterInfos/* parameters */
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
extern Il2CppType CompilerGeneratedAttribute_t963_0_0_0;
static ParameterInfo IList_1_t36612_IList_1_set_Item_m270534_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t963_0_0_0},
};
extern TypeInfo IList_1_t36612_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270534_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36612_IList_1_set_Item_m270534_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36612_MethodInfos[] =
{
	&IList_1_IndexOf_m270535_MethodInfo,
	&IList_1_Insert_m270536_MethodInfo,
	&IList_1_RemoveAt_m270537_MethodInfo,
	&IList_1_get_Item_m270533_MethodInfo,
	&IList_1_set_Item_m270534_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36611_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36613_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36612_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36611_il2cpp_TypeInfo,
	&IEnumerable_1_t36613_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36612_0_0_0;
extern Il2CppType IList_1_t36612_1_0_0;
struct IList_1_t36612;
extern TypeInfo IList_1_t36612_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36612_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36612_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36612_MethodInfos/* methods */
	, IList_1_t36612_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36612_il2cpp_TypeInfo/* element_class */
	, IList_1_t36612_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36612_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36612_0_0_0/* byval_arg */
	, &IList_1_t36612_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36612_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29148_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270538_MethodInfo;
static PropertyInfo IEnumerator_1_t29148____Current_PropertyInfo = 
{
	&IEnumerator_1_t29148_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270538_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29148_PropertyInfos[] =
{
	&IEnumerator_1_t29148____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29148_il2cpp_TypeInfo;
extern Il2CppType InternalsVisibleToAttribute_t6633_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270538_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29148_il2cpp_TypeInfo/* declaring_type */
	, &InternalsVisibleToAttribute_t6633_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29148_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270538_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29148_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29148_0_0_0;
extern Il2CppType IEnumerator_1_t29148_1_0_0;
struct IEnumerator_1_t29148;
extern TypeInfo IEnumerator_1_t29148_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29148_GenericClass;
TypeInfo IEnumerator_1_t29148_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29148_MethodInfos/* methods */
	, IEnumerator_1_t29148_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29148_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29148_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29148_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29148_0_0_0/* byval_arg */
	, &IEnumerator_1_t29148_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29148_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2897.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2897MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo;
extern TypeInfo InternalsVisibleToAttribute_t6633_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179285_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t6633_m221993_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.InternalsVisibleToAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.InternalsVisibleToAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t6633_m221993(__this, p0, method) (InternalsVisibleToAttribute_t6633 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t6633_m221993_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24690____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24690, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24690____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24690, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24690_FieldInfos[] =
{
	&InternalEnumerator_1_t24690____array_FieldInfo,
	&InternalEnumerator_1_t24690____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179282_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24690____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24690_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179282_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179285_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24690____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24690_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179285_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24690_PropertyInfos[] =
{
	&InternalEnumerator_1_t24690____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24690____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24690_InternalEnumerator_1__ctor_m179280_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179280_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24690_InternalEnumerator_1__ctor_m179280_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179281_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179282_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179283_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179284_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo;
extern Il2CppType InternalsVisibleToAttribute_t6633_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179285_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* declaring_type */
	, &InternalsVisibleToAttribute_t6633_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24690_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179280_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179281_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179282_MethodInfo,
	&InternalEnumerator_1_Dispose_m179283_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179284_MethodInfo,
	&InternalEnumerator_1_get_Current_m179285_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179282_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179284_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179281_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179283_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179285_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24690_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179282_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179284_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179281_MethodInfo,
	&InternalEnumerator_1_Dispose_m179283_MethodInfo,
	&InternalEnumerator_1_get_Current_m179285_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29148_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24690_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29148_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29148_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24690_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29148_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179285_MethodInfo;
extern TypeInfo InternalsVisibleToAttribute_t6633_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t6633_m221993_MethodInfo;
static void* InternalEnumerator_1_t24690_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179285_MethodInfo,
	&InternalsVisibleToAttribute_t6633_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t6633_m221993_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24690_0_0_0;
extern Il2CppType InternalEnumerator_1_t24690_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24690_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24690_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24690_MethodInfos/* methods */
	, InternalEnumerator_1_t24690_PropertyInfos/* properties */
	, InternalEnumerator_1_t24690_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24690_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24690_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24690_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24690_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24690_1_0_0/* this_arg */
	, InternalEnumerator_1_t24690_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24690_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24690_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24690)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo ICollection_1_get_Count_m270539_MethodInfo;
static PropertyInfo ICollection_1_t36614____Count_PropertyInfo = 
{
	&ICollection_1_t36614_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270539_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270540_MethodInfo;
static PropertyInfo ICollection_1_t36614____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36614_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270540_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36614_PropertyInfos[] =
{
	&ICollection_1_t36614____Count_PropertyInfo,
	&ICollection_1_t36614____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270539_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36614_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270540_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36614_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType InternalsVisibleToAttribute_t6633_0_0_0;
static ParameterInfo ICollection_1_t36614_ICollection_1_Add_m270541_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t6633_0_0_0},
};
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270541_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36614_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36614_ICollection_1_Add_m270541_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270542_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36614_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType InternalsVisibleToAttribute_t6633_0_0_0;
static ParameterInfo ICollection_1_t36614_ICollection_1_Contains_m270543_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t6633_0_0_0},
};
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270543_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36614_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36614_ICollection_1_Contains_m270543_ParameterInfos/* parameters */
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
extern Il2CppType InternalsVisibleToAttributeU5BU5D_t25238_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36614_ICollection_1_CopyTo_m270544_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttributeU5BU5D_t25238_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270544_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36614_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36614_ICollection_1_CopyTo_m270544_ParameterInfos/* parameters */
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
extern Il2CppType InternalsVisibleToAttribute_t6633_0_0_0;
static ParameterInfo ICollection_1_t36614_ICollection_1_Remove_m270545_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t6633_0_0_0},
};
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270545_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36614_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36614_ICollection_1_Remove_m270545_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36614_MethodInfos[] =
{
	&ICollection_1_get_Count_m270539_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270540_MethodInfo,
	&ICollection_1_Add_m270541_MethodInfo,
	&ICollection_1_Clear_m270542_MethodInfo,
	&ICollection_1_Contains_m270543_MethodInfo,
	&ICollection_1_CopyTo_m270544_MethodInfo,
	&ICollection_1_Remove_m270545_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36616_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36614_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36616_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36614_0_0_0;
extern Il2CppType ICollection_1_t36614_1_0_0;
struct ICollection_1_t36614;
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36614_GenericClass;
TypeInfo ICollection_1_t36614_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36614_MethodInfos/* methods */
	, ICollection_1_t36614_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36614_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36614_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36614_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36614_0_0_0/* byval_arg */
	, &ICollection_1_t36614_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36614_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36616_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern TypeInfo IEnumerable_1_t36616_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29148_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270546_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36616_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29148_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36616_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270546_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36616_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36616_0_0_0;
extern Il2CppType IEnumerable_1_t36616_1_0_0;
struct IEnumerable_1_t36616;
extern TypeInfo IEnumerable_1_t36616_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36616_GenericClass;
TypeInfo IEnumerable_1_t36616_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36616_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36616_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36616_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36616_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36616_0_0_0/* byval_arg */
	, &IEnumerable_1_t36616_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36616_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36615_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo IList_1_get_Item_m270547_MethodInfo;
extern MethodInfo IList_1_set_Item_m270548_MethodInfo;
static PropertyInfo IList_1_t36615____Item_PropertyInfo = 
{
	&IList_1_t36615_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270547_MethodInfo/* get */
	, &IList_1_set_Item_m270548_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36615_PropertyInfos[] =
{
	&IList_1_t36615____Item_PropertyInfo,
	NULL
};
extern Il2CppType InternalsVisibleToAttribute_t6633_0_0_0;
static ParameterInfo IList_1_t36615_IList_1_IndexOf_m270549_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t6633_0_0_0},
};
extern TypeInfo IList_1_t36615_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270549_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36615_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36615_IList_1_IndexOf_m270549_ParameterInfos/* parameters */
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
extern Il2CppType InternalsVisibleToAttribute_t6633_0_0_0;
static ParameterInfo IList_1_t36615_IList_1_Insert_m270550_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t6633_0_0_0},
};
extern TypeInfo IList_1_t36615_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270550_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36615_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36615_IList_1_Insert_m270550_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36615_IList_1_RemoveAt_m270551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36615_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270551_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36615_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36615_IList_1_RemoveAt_m270551_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36615_IList_1_get_Item_m270547_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36615_il2cpp_TypeInfo;
extern Il2CppType InternalsVisibleToAttribute_t6633_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270547_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36615_il2cpp_TypeInfo/* declaring_type */
	, &InternalsVisibleToAttribute_t6633_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36615_IList_1_get_Item_m270547_ParameterInfos/* parameters */
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
extern Il2CppType InternalsVisibleToAttribute_t6633_0_0_0;
static ParameterInfo IList_1_t36615_IList_1_set_Item_m270548_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t6633_0_0_0},
};
extern TypeInfo IList_1_t36615_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270548_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36615_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36615_IList_1_set_Item_m270548_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36615_MethodInfos[] =
{
	&IList_1_IndexOf_m270549_MethodInfo,
	&IList_1_Insert_m270550_MethodInfo,
	&IList_1_RemoveAt_m270551_MethodInfo,
	&IList_1_get_Item_m270547_MethodInfo,
	&IList_1_set_Item_m270548_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36614_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36616_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36615_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36614_il2cpp_TypeInfo,
	&IEnumerable_1_t36616_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36615_0_0_0;
extern Il2CppType IList_1_t36615_1_0_0;
struct IList_1_t36615;
extern TypeInfo IList_1_t36615_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36615_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36615_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36615_MethodInfos/* methods */
	, IList_1_t36615_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36615_il2cpp_TypeInfo/* element_class */
	, IList_1_t36615_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36615_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36615_0_0_0/* byval_arg */
	, &IList_1_t36615_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36615_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29149_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270552_MethodInfo;
static PropertyInfo IEnumerator_1_t29149____Current_PropertyInfo = 
{
	&IEnumerator_1_t29149_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270552_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29149_PropertyInfos[] =
{
	&IEnumerator_1_t29149____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29149_il2cpp_TypeInfo;
extern Il2CppType RuntimeCompatibilityAttribute_t1044_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270552_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29149_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeCompatibilityAttribute_t1044_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29149_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270552_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29149_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29149_0_0_0;
extern Il2CppType IEnumerator_1_t29149_1_0_0;
struct IEnumerator_1_t29149;
extern TypeInfo IEnumerator_1_t29149_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29149_GenericClass;
TypeInfo IEnumerator_1_t29149_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29149_MethodInfos/* methods */
	, IEnumerator_1_t29149_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29149_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29149_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29149_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29149_0_0_0/* byval_arg */
	, &IEnumerator_1_t29149_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29149_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2898.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2898MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t1044_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179291_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t1044_m222004_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t1044_m222004(__this, p0, method) (RuntimeCompatibilityAttribute_t1044 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t1044_m222004_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24691____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24691, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24691____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24691, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24691_FieldInfos[] =
{
	&InternalEnumerator_1_t24691____array_FieldInfo,
	&InternalEnumerator_1_t24691____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179288_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24691____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24691_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179288_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179291_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24691____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24691_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179291_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24691_PropertyInfos[] =
{
	&InternalEnumerator_1_t24691____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24691____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24691_InternalEnumerator_1__ctor_m179286_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179286_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24691_InternalEnumerator_1__ctor_m179286_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179287_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179288_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179289_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179290_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo;
extern Il2CppType RuntimeCompatibilityAttribute_t1044_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179291_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeCompatibilityAttribute_t1044_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24691_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179286_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179287_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179288_MethodInfo,
	&InternalEnumerator_1_Dispose_m179289_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179290_MethodInfo,
	&InternalEnumerator_1_get_Current_m179291_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179288_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179290_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179287_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179289_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179291_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24691_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179288_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179290_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179287_MethodInfo,
	&InternalEnumerator_1_Dispose_m179289_MethodInfo,
	&InternalEnumerator_1_get_Current_m179291_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29149_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24691_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29149_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29149_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24691_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29149_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179291_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t1044_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t1044_m222004_MethodInfo;
static void* InternalEnumerator_1_t24691_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179291_MethodInfo,
	&RuntimeCompatibilityAttribute_t1044_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t1044_m222004_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24691_0_0_0;
extern Il2CppType InternalEnumerator_1_t24691_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24691_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24691_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24691_MethodInfos/* methods */
	, InternalEnumerator_1_t24691_PropertyInfos/* properties */
	, InternalEnumerator_1_t24691_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24691_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24691_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24691_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24691_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24691_1_0_0/* this_arg */
	, InternalEnumerator_1_t24691_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24691_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24691_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24691)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo ICollection_1_get_Count_m270553_MethodInfo;
static PropertyInfo ICollection_1_t36617____Count_PropertyInfo = 
{
	&ICollection_1_t36617_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270553_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270554_MethodInfo;
static PropertyInfo ICollection_1_t36617____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36617_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270554_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36617_PropertyInfos[] =
{
	&ICollection_1_t36617____Count_PropertyInfo,
	&ICollection_1_t36617____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270553_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36617_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270554_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36617_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RuntimeCompatibilityAttribute_t1044_0_0_0;
static ParameterInfo ICollection_1_t36617_ICollection_1_Add_m270555_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t1044_0_0_0},
};
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270555_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36617_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36617_ICollection_1_Add_m270555_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270556_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36617_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RuntimeCompatibilityAttribute_t1044_0_0_0;
static ParameterInfo ICollection_1_t36617_ICollection_1_Contains_m270557_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t1044_0_0_0},
};
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270557_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36617_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36617_ICollection_1_Contains_m270557_ParameterInfos/* parameters */
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
extern Il2CppType RuntimeCompatibilityAttributeU5BU5D_t25239_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36617_ICollection_1_CopyTo_m270558_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttributeU5BU5D_t25239_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270558_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36617_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36617_ICollection_1_CopyTo_m270558_ParameterInfos/* parameters */
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
extern Il2CppType RuntimeCompatibilityAttribute_t1044_0_0_0;
static ParameterInfo ICollection_1_t36617_ICollection_1_Remove_m270559_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t1044_0_0_0},
};
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270559_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36617_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36617_ICollection_1_Remove_m270559_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36617_MethodInfos[] =
{
	&ICollection_1_get_Count_m270553_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270554_MethodInfo,
	&ICollection_1_Add_m270555_MethodInfo,
	&ICollection_1_Clear_m270556_MethodInfo,
	&ICollection_1_Contains_m270557_MethodInfo,
	&ICollection_1_CopyTo_m270558_MethodInfo,
	&ICollection_1_Remove_m270559_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36619_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36617_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36619_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36617_0_0_0;
extern Il2CppType ICollection_1_t36617_1_0_0;
struct ICollection_1_t36617;
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36617_GenericClass;
TypeInfo ICollection_1_t36617_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36617_MethodInfos/* methods */
	, ICollection_1_t36617_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36617_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36617_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36617_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36617_0_0_0/* byval_arg */
	, &ICollection_1_t36617_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36617_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36619_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern TypeInfo IEnumerable_1_t36619_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29149_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270560_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36619_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29149_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36619_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270560_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36619_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36619_0_0_0;
extern Il2CppType IEnumerable_1_t36619_1_0_0;
struct IEnumerable_1_t36619;
extern TypeInfo IEnumerable_1_t36619_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36619_GenericClass;
TypeInfo IEnumerable_1_t36619_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36619_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36619_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36619_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36619_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36619_0_0_0/* byval_arg */
	, &IEnumerable_1_t36619_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36619_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36618_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo IList_1_get_Item_m270561_MethodInfo;
extern MethodInfo IList_1_set_Item_m270562_MethodInfo;
static PropertyInfo IList_1_t36618____Item_PropertyInfo = 
{
	&IList_1_t36618_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270561_MethodInfo/* get */
	, &IList_1_set_Item_m270562_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36618_PropertyInfos[] =
{
	&IList_1_t36618____Item_PropertyInfo,
	NULL
};
extern Il2CppType RuntimeCompatibilityAttribute_t1044_0_0_0;
static ParameterInfo IList_1_t36618_IList_1_IndexOf_m270563_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t1044_0_0_0},
};
extern TypeInfo IList_1_t36618_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270563_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36618_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36618_IList_1_IndexOf_m270563_ParameterInfos/* parameters */
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
extern Il2CppType RuntimeCompatibilityAttribute_t1044_0_0_0;
static ParameterInfo IList_1_t36618_IList_1_Insert_m270564_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t1044_0_0_0},
};
extern TypeInfo IList_1_t36618_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270564_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36618_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36618_IList_1_Insert_m270564_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36618_IList_1_RemoveAt_m270565_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36618_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270565_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36618_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36618_IList_1_RemoveAt_m270565_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36618_IList_1_get_Item_m270561_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36618_il2cpp_TypeInfo;
extern Il2CppType RuntimeCompatibilityAttribute_t1044_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270561_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36618_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeCompatibilityAttribute_t1044_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36618_IList_1_get_Item_m270561_ParameterInfos/* parameters */
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
extern Il2CppType RuntimeCompatibilityAttribute_t1044_0_0_0;
static ParameterInfo IList_1_t36618_IList_1_set_Item_m270562_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t1044_0_0_0},
};
extern TypeInfo IList_1_t36618_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270562_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36618_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36618_IList_1_set_Item_m270562_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36618_MethodInfos[] =
{
	&IList_1_IndexOf_m270563_MethodInfo,
	&IList_1_Insert_m270564_MethodInfo,
	&IList_1_RemoveAt_m270565_MethodInfo,
	&IList_1_get_Item_m270561_MethodInfo,
	&IList_1_set_Item_m270562_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36617_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36619_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36618_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36617_il2cpp_TypeInfo,
	&IEnumerable_1_t36619_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36618_0_0_0;
extern Il2CppType IList_1_t36618_1_0_0;
struct IList_1_t36618;
extern TypeInfo IList_1_t36618_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36618_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36618_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36618_MethodInfos/* methods */
	, IList_1_t36618_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36618_il2cpp_TypeInfo/* element_class */
	, IList_1_t36618_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36618_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36618_0_0_0/* byval_arg */
	, &IList_1_t36618_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36618_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29150_il2cpp_TypeInfo;

// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270566_MethodInfo;
static PropertyInfo IEnumerator_1_t29150____Current_PropertyInfo = 
{
	&IEnumerator_1_t29150_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270566_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29150_PropertyInfos[] =
{
	&IEnumerator_1_t29150____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29150_il2cpp_TypeInfo;
extern Il2CppType DebuggerHiddenAttribute_t5583_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270566_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29150_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerHiddenAttribute_t5583_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29150_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270566_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29150_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29150_0_0_0;
extern Il2CppType IEnumerator_1_t29150_1_0_0;
struct IEnumerator_1_t29150;
extern TypeInfo IEnumerator_1_t29150_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29150_GenericClass;
TypeInfo IEnumerator_1_t29150_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29150_MethodInfos/* methods */
	, IEnumerator_1_t29150_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29150_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29150_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29150_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29150_0_0_0/* byval_arg */
	, &IEnumerator_1_t29150_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29150_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2899.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2899MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo;
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179297_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t5583_m222015_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerHiddenAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerHiddenAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t5583_m222015(__this, p0, method) (DebuggerHiddenAttribute_t5583 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t5583_m222015_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24692____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24692, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24692____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24692, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24692_FieldInfos[] =
{
	&InternalEnumerator_1_t24692____array_FieldInfo,
	&InternalEnumerator_1_t24692____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179294_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24692____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24692_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179294_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179297_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24692____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24692_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179297_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24692_PropertyInfos[] =
{
	&InternalEnumerator_1_t24692____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24692____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24692_InternalEnumerator_1__ctor_m179292_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179292_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24692_InternalEnumerator_1__ctor_m179292_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179293_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179294_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179295_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179296_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo;
extern Il2CppType DebuggerHiddenAttribute_t5583_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179297_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerHiddenAttribute_t5583_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24692_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179292_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179293_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179294_MethodInfo,
	&InternalEnumerator_1_Dispose_m179295_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179296_MethodInfo,
	&InternalEnumerator_1_get_Current_m179297_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179294_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179296_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179293_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179295_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179297_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24692_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179294_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179296_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179293_MethodInfo,
	&InternalEnumerator_1_Dispose_m179295_MethodInfo,
	&InternalEnumerator_1_get_Current_m179297_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29150_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24692_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29150_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29150_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24692_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29150_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179297_MethodInfo;
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t5583_m222015_MethodInfo;
static void* InternalEnumerator_1_t24692_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179297_MethodInfo,
	&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t5583_m222015_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24692_0_0_0;
extern Il2CppType InternalEnumerator_1_t24692_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24692_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24692_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24692_MethodInfos/* methods */
	, InternalEnumerator_1_t24692_PropertyInfos/* properties */
	, InternalEnumerator_1_t24692_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24692_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24692_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24692_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24692_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24692_1_0_0/* this_arg */
	, InternalEnumerator_1_t24692_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24692_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24692_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24692)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo ICollection_1_get_Count_m270567_MethodInfo;
static PropertyInfo ICollection_1_t36620____Count_PropertyInfo = 
{
	&ICollection_1_t36620_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270567_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270568_MethodInfo;
static PropertyInfo ICollection_1_t36620____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36620_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270568_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36620_PropertyInfos[] =
{
	&ICollection_1_t36620____Count_PropertyInfo,
	&ICollection_1_t36620____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270567_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36620_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270568_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36620_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DebuggerHiddenAttribute_t5583_0_0_0;
static ParameterInfo ICollection_1_t36620_ICollection_1_Add_m270569_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t5583_0_0_0},
};
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270569_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36620_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36620_ICollection_1_Add_m270569_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270570_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36620_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DebuggerHiddenAttribute_t5583_0_0_0;
static ParameterInfo ICollection_1_t36620_ICollection_1_Contains_m270571_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t5583_0_0_0},
};
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270571_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36620_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36620_ICollection_1_Contains_m270571_ParameterInfos/* parameters */
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
extern Il2CppType DebuggerHiddenAttributeU5BU5D_t25240_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36620_ICollection_1_CopyTo_m270572_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttributeU5BU5D_t25240_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270572_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36620_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36620_ICollection_1_CopyTo_m270572_ParameterInfos/* parameters */
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
extern Il2CppType DebuggerHiddenAttribute_t5583_0_0_0;
static ParameterInfo ICollection_1_t36620_ICollection_1_Remove_m270573_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t5583_0_0_0},
};
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270573_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36620_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36620_ICollection_1_Remove_m270573_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36620_MethodInfos[] =
{
	&ICollection_1_get_Count_m270567_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270568_MethodInfo,
	&ICollection_1_Add_m270569_MethodInfo,
	&ICollection_1_Clear_m270570_MethodInfo,
	&ICollection_1_Contains_m270571_MethodInfo,
	&ICollection_1_CopyTo_m270572_MethodInfo,
	&ICollection_1_Remove_m270573_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36622_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36620_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36622_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36620_0_0_0;
extern Il2CppType ICollection_1_t36620_1_0_0;
struct ICollection_1_t36620;
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36620_GenericClass;
TypeInfo ICollection_1_t36620_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36620_MethodInfos/* methods */
	, ICollection_1_t36620_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36620_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36620_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36620_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36620_0_0_0/* byval_arg */
	, &ICollection_1_t36620_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36620_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36622_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>
extern TypeInfo IEnumerable_1_t36622_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29150_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270574_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36622_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29150_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36622_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270574_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36622_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36622_0_0_0;
extern Il2CppType IEnumerable_1_t36622_1_0_0;
struct IEnumerable_1_t36622;
extern TypeInfo IEnumerable_1_t36622_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36622_GenericClass;
TypeInfo IEnumerable_1_t36622_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36622_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36622_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36622_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36622_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36622_0_0_0/* byval_arg */
	, &IEnumerable_1_t36622_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36622_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36621_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo IList_1_get_Item_m270575_MethodInfo;
extern MethodInfo IList_1_set_Item_m270576_MethodInfo;
static PropertyInfo IList_1_t36621____Item_PropertyInfo = 
{
	&IList_1_t36621_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270575_MethodInfo/* get */
	, &IList_1_set_Item_m270576_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36621_PropertyInfos[] =
{
	&IList_1_t36621____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerHiddenAttribute_t5583_0_0_0;
static ParameterInfo IList_1_t36621_IList_1_IndexOf_m270577_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t5583_0_0_0},
};
extern TypeInfo IList_1_t36621_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270577_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36621_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36621_IList_1_IndexOf_m270577_ParameterInfos/* parameters */
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
extern Il2CppType DebuggerHiddenAttribute_t5583_0_0_0;
static ParameterInfo IList_1_t36621_IList_1_Insert_m270578_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t5583_0_0_0},
};
extern TypeInfo IList_1_t36621_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270578_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36621_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36621_IList_1_Insert_m270578_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36621_IList_1_RemoveAt_m270579_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36621_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270579_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36621_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36621_IList_1_RemoveAt_m270579_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36621_IList_1_get_Item_m270575_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36621_il2cpp_TypeInfo;
extern Il2CppType DebuggerHiddenAttribute_t5583_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270575_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36621_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerHiddenAttribute_t5583_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36621_IList_1_get_Item_m270575_ParameterInfos/* parameters */
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
extern Il2CppType DebuggerHiddenAttribute_t5583_0_0_0;
static ParameterInfo IList_1_t36621_IList_1_set_Item_m270576_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t5583_0_0_0},
};
extern TypeInfo IList_1_t36621_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270576_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36621_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36621_IList_1_set_Item_m270576_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36621_MethodInfos[] =
{
	&IList_1_IndexOf_m270577_MethodInfo,
	&IList_1_Insert_m270578_MethodInfo,
	&IList_1_RemoveAt_m270579_MethodInfo,
	&IList_1_get_Item_m270575_MethodInfo,
	&IList_1_set_Item_m270576_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36620_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36622_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36621_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36620_il2cpp_TypeInfo,
	&IEnumerable_1_t36622_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36621_0_0_0;
extern Il2CppType IList_1_t36621_1_0_0;
struct IList_1_t36621;
extern TypeInfo IList_1_t36621_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36621_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36621_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36621_MethodInfos/* methods */
	, IList_1_t36621_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36621_il2cpp_TypeInfo/* element_class */
	, IList_1_t36621_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36621_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36621_0_0_0/* byval_arg */
	, &IList_1_t36621_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36621_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29151_il2cpp_TypeInfo;

// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270580_MethodInfo;
static PropertyInfo IEnumerator_1_t29151____Current_PropertyInfo = 
{
	&IEnumerator_1_t29151_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270580_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29151_PropertyInfos[] =
{
	&IEnumerator_1_t29151____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29151_il2cpp_TypeInfo;
extern Il2CppType DefaultMemberAttribute_t978_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270580_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29151_il2cpp_TypeInfo/* declaring_type */
	, &DefaultMemberAttribute_t978_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29151_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270580_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29151_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29151_0_0_0;
extern Il2CppType IEnumerator_1_t29151_1_0_0;
struct IEnumerator_1_t29151;
extern TypeInfo IEnumerator_1_t29151_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29151_GenericClass;
TypeInfo IEnumerator_1_t29151_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29151_MethodInfos/* methods */
	, IEnumerator_1_t29151_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29151_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29151_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29151_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29151_0_0_0/* byval_arg */
	, &IEnumerator_1_t29151_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29151_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2900.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2900MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo;
extern TypeInfo DefaultMemberAttribute_t978_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179303_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDefaultMemberAttribute_t978_m222026_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.DefaultMemberAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.DefaultMemberAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDefaultMemberAttribute_t978_m222026(__this, p0, method) (DefaultMemberAttribute_t978 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisDefaultMemberAttribute_t978_m222026_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24693____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24693, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24693____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24693, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24693_FieldInfos[] =
{
	&InternalEnumerator_1_t24693____array_FieldInfo,
	&InternalEnumerator_1_t24693____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179300_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24693____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24693_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179300_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179303_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24693____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24693_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179303_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24693_PropertyInfos[] =
{
	&InternalEnumerator_1_t24693____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24693____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24693_InternalEnumerator_1__ctor_m179298_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179298_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24693_InternalEnumerator_1__ctor_m179298_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179299_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179300_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179301_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179302_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo;
extern Il2CppType DefaultMemberAttribute_t978_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179303_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* declaring_type */
	, &DefaultMemberAttribute_t978_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24693_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179298_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179299_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179300_MethodInfo,
	&InternalEnumerator_1_Dispose_m179301_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179302_MethodInfo,
	&InternalEnumerator_1_get_Current_m179303_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179300_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179302_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179299_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179301_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179303_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24693_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179300_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179302_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179299_MethodInfo,
	&InternalEnumerator_1_Dispose_m179301_MethodInfo,
	&InternalEnumerator_1_get_Current_m179303_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29151_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24693_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29151_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29151_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24693_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29151_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179303_MethodInfo;
extern TypeInfo DefaultMemberAttribute_t978_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDefaultMemberAttribute_t978_m222026_MethodInfo;
static void* InternalEnumerator_1_t24693_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179303_MethodInfo,
	&DefaultMemberAttribute_t978_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisDefaultMemberAttribute_t978_m222026_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24693_0_0_0;
extern Il2CppType InternalEnumerator_1_t24693_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24693_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24693_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24693_MethodInfos/* methods */
	, InternalEnumerator_1_t24693_PropertyInfos/* properties */
	, InternalEnumerator_1_t24693_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24693_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24693_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24693_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24693_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24693_1_0_0/* this_arg */
	, InternalEnumerator_1_t24693_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24693_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24693_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24693)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo ICollection_1_get_Count_m270581_MethodInfo;
static PropertyInfo ICollection_1_t36623____Count_PropertyInfo = 
{
	&ICollection_1_t36623_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270581_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270582_MethodInfo;
static PropertyInfo ICollection_1_t36623____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36623_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270582_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36623_PropertyInfos[] =
{
	&ICollection_1_t36623____Count_PropertyInfo,
	&ICollection_1_t36623____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270581_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36623_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270582_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36623_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DefaultMemberAttribute_t978_0_0_0;
static ParameterInfo ICollection_1_t36623_ICollection_1_Add_m270583_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t978_0_0_0},
};
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270583_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36623_ICollection_1_Add_m270583_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270584_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36623_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DefaultMemberAttribute_t978_0_0_0;
static ParameterInfo ICollection_1_t36623_ICollection_1_Contains_m270585_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t978_0_0_0},
};
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270585_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36623_ICollection_1_Contains_m270585_ParameterInfos/* parameters */
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
extern Il2CppType DefaultMemberAttributeU5BU5D_t25241_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36623_ICollection_1_CopyTo_m270586_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttributeU5BU5D_t25241_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270586_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36623_ICollection_1_CopyTo_m270586_ParameterInfos/* parameters */
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
extern Il2CppType DefaultMemberAttribute_t978_0_0_0;
static ParameterInfo ICollection_1_t36623_ICollection_1_Remove_m270587_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t978_0_0_0},
};
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270587_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36623_ICollection_1_Remove_m270587_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36623_MethodInfos[] =
{
	&ICollection_1_get_Count_m270581_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270582_MethodInfo,
	&ICollection_1_Add_m270583_MethodInfo,
	&ICollection_1_Clear_m270584_MethodInfo,
	&ICollection_1_Contains_m270585_MethodInfo,
	&ICollection_1_CopyTo_m270586_MethodInfo,
	&ICollection_1_Remove_m270587_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36625_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36623_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36625_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36623_0_0_0;
extern Il2CppType ICollection_1_t36623_1_0_0;
struct ICollection_1_t36623;
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36623_GenericClass;
TypeInfo ICollection_1_t36623_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36623_MethodInfos/* methods */
	, ICollection_1_t36623_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36623_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36623_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36623_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36623_0_0_0/* byval_arg */
	, &ICollection_1_t36623_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36623_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36625_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>
extern TypeInfo IEnumerable_1_t36625_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29151_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270588_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36625_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29151_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36625_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270588_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36625_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36625_0_0_0;
extern Il2CppType IEnumerable_1_t36625_1_0_0;
struct IEnumerable_1_t36625;
extern TypeInfo IEnumerable_1_t36625_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36625_GenericClass;
TypeInfo IEnumerable_1_t36625_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36625_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36625_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36625_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36625_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36625_0_0_0/* byval_arg */
	, &IEnumerable_1_t36625_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36625_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36624_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo IList_1_get_Item_m270589_MethodInfo;
extern MethodInfo IList_1_set_Item_m270590_MethodInfo;
static PropertyInfo IList_1_t36624____Item_PropertyInfo = 
{
	&IList_1_t36624_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270589_MethodInfo/* get */
	, &IList_1_set_Item_m270590_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36624_PropertyInfos[] =
{
	&IList_1_t36624____Item_PropertyInfo,
	NULL
};
extern Il2CppType DefaultMemberAttribute_t978_0_0_0;
static ParameterInfo IList_1_t36624_IList_1_IndexOf_m270591_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t978_0_0_0},
};
extern TypeInfo IList_1_t36624_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270591_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36624_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36624_IList_1_IndexOf_m270591_ParameterInfos/* parameters */
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
extern Il2CppType DefaultMemberAttribute_t978_0_0_0;
static ParameterInfo IList_1_t36624_IList_1_Insert_m270592_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t978_0_0_0},
};
extern TypeInfo IList_1_t36624_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270592_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36624_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36624_IList_1_Insert_m270592_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36624_IList_1_RemoveAt_m270593_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36624_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270593_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36624_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36624_IList_1_RemoveAt_m270593_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36624_IList_1_get_Item_m270589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36624_il2cpp_TypeInfo;
extern Il2CppType DefaultMemberAttribute_t978_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270589_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36624_il2cpp_TypeInfo/* declaring_type */
	, &DefaultMemberAttribute_t978_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36624_IList_1_get_Item_m270589_ParameterInfos/* parameters */
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
extern Il2CppType DefaultMemberAttribute_t978_0_0_0;
static ParameterInfo IList_1_t36624_IList_1_set_Item_m270590_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t978_0_0_0},
};
extern TypeInfo IList_1_t36624_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270590_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36624_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36624_IList_1_set_Item_m270590_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36624_MethodInfos[] =
{
	&IList_1_IndexOf_m270591_MethodInfo,
	&IList_1_Insert_m270592_MethodInfo,
	&IList_1_RemoveAt_m270593_MethodInfo,
	&IList_1_get_Item_m270589_MethodInfo,
	&IList_1_set_Item_m270590_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36623_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36625_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36624_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36623_il2cpp_TypeInfo,
	&IEnumerable_1_t36625_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36624_0_0_0;
extern Il2CppType IList_1_t36624_1_0_0;
struct IList_1_t36624;
extern TypeInfo IList_1_t36624_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36624_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36624_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36624_MethodInfos/* methods */
	, IList_1_t36624_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36624_il2cpp_TypeInfo/* element_class */
	, IList_1_t36624_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36624_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36624_0_0_0/* byval_arg */
	, &IList_1_t36624_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36624_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29152_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.DecimalConstantAttribute
#include "mscorlib_System_Runtime_CompilerServices_DecimalConstantAttr.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270594_MethodInfo;
static PropertyInfo IEnumerator_1_t29152____Current_PropertyInfo = 
{
	&IEnumerator_1_t29152_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270594_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29152_PropertyInfos[] =
{
	&IEnumerator_1_t29152____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29152_il2cpp_TypeInfo;
extern Il2CppType DecimalConstantAttribute_t7754_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270594_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29152_il2cpp_TypeInfo/* declaring_type */
	, &DecimalConstantAttribute_t7754_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29152_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270594_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29152_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29152_0_0_0;
extern Il2CppType IEnumerator_1_t29152_1_0_0;
struct IEnumerator_1_t29152;
extern TypeInfo IEnumerator_1_t29152_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29152_GenericClass;
TypeInfo IEnumerator_1_t29152_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29152_MethodInfos/* methods */
	, IEnumerator_1_t29152_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29152_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29152_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29152_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29152_0_0_0/* byval_arg */
	, &IEnumerator_1_t29152_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29152_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2901.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2901MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo;
extern TypeInfo DecimalConstantAttribute_t7754_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179309_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDecimalConstantAttribute_t7754_m222037_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DecimalConstantAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DecimalConstantAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDecimalConstantAttribute_t7754_m222037(__this, p0, method) (DecimalConstantAttribute_t7754 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisDecimalConstantAttribute_t7754_m222037_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24694____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24694, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24694____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24694, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24694_FieldInfos[] =
{
	&InternalEnumerator_1_t24694____array_FieldInfo,
	&InternalEnumerator_1_t24694____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179306_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24694____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24694_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179306_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179309_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24694____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24694_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179309_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24694_PropertyInfos[] =
{
	&InternalEnumerator_1_t24694____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24694____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24694_InternalEnumerator_1__ctor_m179304_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179304_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24694_InternalEnumerator_1__ctor_m179304_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179305_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179306_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179307_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179308_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo;
extern Il2CppType DecimalConstantAttribute_t7754_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179309_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* declaring_type */
	, &DecimalConstantAttribute_t7754_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24694_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179304_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179305_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179306_MethodInfo,
	&InternalEnumerator_1_Dispose_m179307_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179308_MethodInfo,
	&InternalEnumerator_1_get_Current_m179309_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179306_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179308_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179305_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179307_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179309_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24694_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179306_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179308_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179305_MethodInfo,
	&InternalEnumerator_1_Dispose_m179307_MethodInfo,
	&InternalEnumerator_1_get_Current_m179309_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29152_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24694_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29152_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29152_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24694_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29152_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179309_MethodInfo;
extern TypeInfo DecimalConstantAttribute_t7754_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDecimalConstantAttribute_t7754_m222037_MethodInfo;
static void* InternalEnumerator_1_t24694_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179309_MethodInfo,
	&DecimalConstantAttribute_t7754_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisDecimalConstantAttribute_t7754_m222037_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24694_0_0_0;
extern Il2CppType InternalEnumerator_1_t24694_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24694_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24694_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24694_MethodInfos/* methods */
	, InternalEnumerator_1_t24694_PropertyInfos/* properties */
	, InternalEnumerator_1_t24694_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24694_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24694_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24694_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24694_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24694_1_0_0/* this_arg */
	, InternalEnumerator_1_t24694_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24694_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24694_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24694)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo ICollection_1_get_Count_m270595_MethodInfo;
static PropertyInfo ICollection_1_t36626____Count_PropertyInfo = 
{
	&ICollection_1_t36626_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270595_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270596_MethodInfo;
static PropertyInfo ICollection_1_t36626____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36626_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270596_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36626_PropertyInfos[] =
{
	&ICollection_1_t36626____Count_PropertyInfo,
	&ICollection_1_t36626____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270595_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36626_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270596_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36626_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DecimalConstantAttribute_t7754_0_0_0;
static ParameterInfo ICollection_1_t36626_ICollection_1_Add_m270597_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t7754_0_0_0},
};
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270597_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36626_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36626_ICollection_1_Add_m270597_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270598_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36626_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DecimalConstantAttribute_t7754_0_0_0;
static ParameterInfo ICollection_1_t36626_ICollection_1_Contains_m270599_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t7754_0_0_0},
};
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270599_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36626_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36626_ICollection_1_Contains_m270599_ParameterInfos/* parameters */
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
extern Il2CppType DecimalConstantAttributeU5BU5D_t25242_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36626_ICollection_1_CopyTo_m270600_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttributeU5BU5D_t25242_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270600_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36626_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36626_ICollection_1_CopyTo_m270600_ParameterInfos/* parameters */
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
extern Il2CppType DecimalConstantAttribute_t7754_0_0_0;
static ParameterInfo ICollection_1_t36626_ICollection_1_Remove_m270601_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t7754_0_0_0},
};
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270601_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36626_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36626_ICollection_1_Remove_m270601_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36626_MethodInfos[] =
{
	&ICollection_1_get_Count_m270595_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270596_MethodInfo,
	&ICollection_1_Add_m270597_MethodInfo,
	&ICollection_1_Clear_m270598_MethodInfo,
	&ICollection_1_Contains_m270599_MethodInfo,
	&ICollection_1_CopyTo_m270600_MethodInfo,
	&ICollection_1_Remove_m270601_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36628_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36626_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36628_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36626_0_0_0;
extern Il2CppType ICollection_1_t36626_1_0_0;
struct ICollection_1_t36626;
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36626_GenericClass;
TypeInfo ICollection_1_t36626_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36626_MethodInfos/* methods */
	, ICollection_1_t36626_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36626_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36626_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36626_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36626_0_0_0/* byval_arg */
	, &ICollection_1_t36626_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36626_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36628_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern TypeInfo IEnumerable_1_t36628_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29152_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270602_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36628_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29152_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36628_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270602_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36628_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36628_0_0_0;
extern Il2CppType IEnumerable_1_t36628_1_0_0;
struct IEnumerable_1_t36628;
extern TypeInfo IEnumerable_1_t36628_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36628_GenericClass;
TypeInfo IEnumerable_1_t36628_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36628_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36628_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36628_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36628_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36628_0_0_0/* byval_arg */
	, &IEnumerable_1_t36628_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36628_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36627_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo IList_1_get_Item_m270603_MethodInfo;
extern MethodInfo IList_1_set_Item_m270604_MethodInfo;
static PropertyInfo IList_1_t36627____Item_PropertyInfo = 
{
	&IList_1_t36627_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270603_MethodInfo/* get */
	, &IList_1_set_Item_m270604_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36627_PropertyInfos[] =
{
	&IList_1_t36627____Item_PropertyInfo,
	NULL
};
extern Il2CppType DecimalConstantAttribute_t7754_0_0_0;
static ParameterInfo IList_1_t36627_IList_1_IndexOf_m270605_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t7754_0_0_0},
};
extern TypeInfo IList_1_t36627_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270605_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36627_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36627_IList_1_IndexOf_m270605_ParameterInfos/* parameters */
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
extern Il2CppType DecimalConstantAttribute_t7754_0_0_0;
static ParameterInfo IList_1_t36627_IList_1_Insert_m270606_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t7754_0_0_0},
};
extern TypeInfo IList_1_t36627_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270606_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36627_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36627_IList_1_Insert_m270606_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36627_IList_1_RemoveAt_m270607_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36627_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270607_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36627_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36627_IList_1_RemoveAt_m270607_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36627_IList_1_get_Item_m270603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36627_il2cpp_TypeInfo;
extern Il2CppType DecimalConstantAttribute_t7754_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270603_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36627_il2cpp_TypeInfo/* declaring_type */
	, &DecimalConstantAttribute_t7754_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36627_IList_1_get_Item_m270603_ParameterInfos/* parameters */
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
extern Il2CppType DecimalConstantAttribute_t7754_0_0_0;
static ParameterInfo IList_1_t36627_IList_1_set_Item_m270604_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t7754_0_0_0},
};
extern TypeInfo IList_1_t36627_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270604_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36627_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36627_IList_1_set_Item_m270604_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36627_MethodInfos[] =
{
	&IList_1_IndexOf_m270605_MethodInfo,
	&IList_1_Insert_m270606_MethodInfo,
	&IList_1_RemoveAt_m270607_MethodInfo,
	&IList_1_get_Item_m270603_MethodInfo,
	&IList_1_set_Item_m270604_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36626_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36628_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36627_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36626_il2cpp_TypeInfo,
	&IEnumerable_1_t36628_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36627_0_0_0;
extern Il2CppType IList_1_t36627_1_0_0;
struct IList_1_t36627;
extern TypeInfo IList_1_t36627_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36627_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36627_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36627_MethodInfos/* methods */
	, IList_1_t36627_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36627_il2cpp_TypeInfo/* element_class */
	, IList_1_t36627_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36627_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36627_0_0_0/* byval_arg */
	, &IList_1_t36627_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36627_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29153_il2cpp_TypeInfo;

// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270608_MethodInfo;
static PropertyInfo IEnumerator_1_t29153____Current_PropertyInfo = 
{
	&IEnumerator_1_t29153_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270608_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29153_PropertyInfos[] =
{
	&IEnumerator_1_t29153____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29153_il2cpp_TypeInfo;
extern Il2CppType FieldOffsetAttribute_t7755_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270608_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29153_il2cpp_TypeInfo/* declaring_type */
	, &FieldOffsetAttribute_t7755_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29153_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270608_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29153_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29153_0_0_0;
extern Il2CppType IEnumerator_1_t29153_1_0_0;
struct IEnumerator_1_t29153;
extern TypeInfo IEnumerator_1_t29153_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29153_GenericClass;
TypeInfo IEnumerator_1_t29153_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29153_MethodInfos/* methods */
	, IEnumerator_1_t29153_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29153_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29153_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29153_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29153_0_0_0/* byval_arg */
	, &IEnumerator_1_t29153_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29153_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2902.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2902MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo;
extern TypeInfo FieldOffsetAttribute_t7755_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179315_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFieldOffsetAttribute_t7755_m222048_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.FieldOffsetAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.FieldOffsetAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisFieldOffsetAttribute_t7755_m222048(__this, p0, method) (FieldOffsetAttribute_t7755 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisFieldOffsetAttribute_t7755_m222048_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24695____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24695, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24695____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24695, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24695_FieldInfos[] =
{
	&InternalEnumerator_1_t24695____array_FieldInfo,
	&InternalEnumerator_1_t24695____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179312_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24695____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24695_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179312_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179315_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24695____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24695_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179315_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24695_PropertyInfos[] =
{
	&InternalEnumerator_1_t24695____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24695____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24695_InternalEnumerator_1__ctor_m179310_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179310_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24695_InternalEnumerator_1__ctor_m179310_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179311_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179312_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179313_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179314_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo;
extern Il2CppType FieldOffsetAttribute_t7755_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179315_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* declaring_type */
	, &FieldOffsetAttribute_t7755_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24695_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179310_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179311_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179312_MethodInfo,
	&InternalEnumerator_1_Dispose_m179313_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179314_MethodInfo,
	&InternalEnumerator_1_get_Current_m179315_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179312_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179314_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179311_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179313_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179315_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24695_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179312_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179314_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179311_MethodInfo,
	&InternalEnumerator_1_Dispose_m179313_MethodInfo,
	&InternalEnumerator_1_get_Current_m179315_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29153_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24695_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29153_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29153_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24695_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29153_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179315_MethodInfo;
extern TypeInfo FieldOffsetAttribute_t7755_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFieldOffsetAttribute_t7755_m222048_MethodInfo;
static void* InternalEnumerator_1_t24695_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179315_MethodInfo,
	&FieldOffsetAttribute_t7755_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisFieldOffsetAttribute_t7755_m222048_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24695_0_0_0;
extern Il2CppType InternalEnumerator_1_t24695_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24695_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24695_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24695_MethodInfos/* methods */
	, InternalEnumerator_1_t24695_PropertyInfos/* properties */
	, InternalEnumerator_1_t24695_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24695_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24695_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24695_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24695_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24695_1_0_0/* this_arg */
	, InternalEnumerator_1_t24695_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24695_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24695_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24695)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern MethodInfo ICollection_1_get_Count_m270609_MethodInfo;
static PropertyInfo ICollection_1_t36629____Count_PropertyInfo = 
{
	&ICollection_1_t36629_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270609_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270610_MethodInfo;
static PropertyInfo ICollection_1_t36629____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36629_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270610_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36629_PropertyInfos[] =
{
	&ICollection_1_t36629____Count_PropertyInfo,
	&ICollection_1_t36629____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270609_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36629_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270610_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36629_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType FieldOffsetAttribute_t7755_0_0_0;
static ParameterInfo ICollection_1_t36629_ICollection_1_Add_m270611_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t7755_0_0_0},
};
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270611_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36629_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36629_ICollection_1_Add_m270611_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270612_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36629_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType FieldOffsetAttribute_t7755_0_0_0;
static ParameterInfo ICollection_1_t36629_ICollection_1_Contains_m270613_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t7755_0_0_0},
};
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270613_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36629_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36629_ICollection_1_Contains_m270613_ParameterInfos/* parameters */
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
extern Il2CppType FieldOffsetAttributeU5BU5D_t25243_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36629_ICollection_1_CopyTo_m270614_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttributeU5BU5D_t25243_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270614_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36629_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36629_ICollection_1_CopyTo_m270614_ParameterInfos/* parameters */
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
extern Il2CppType FieldOffsetAttribute_t7755_0_0_0;
static ParameterInfo ICollection_1_t36629_ICollection_1_Remove_m270615_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t7755_0_0_0},
};
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270615_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36629_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36629_ICollection_1_Remove_m270615_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36629_MethodInfos[] =
{
	&ICollection_1_get_Count_m270609_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270610_MethodInfo,
	&ICollection_1_Add_m270611_MethodInfo,
	&ICollection_1_Clear_m270612_MethodInfo,
	&ICollection_1_Contains_m270613_MethodInfo,
	&ICollection_1_CopyTo_m270614_MethodInfo,
	&ICollection_1_Remove_m270615_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36631_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36629_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36631_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36629_0_0_0;
extern Il2CppType ICollection_1_t36629_1_0_0;
struct ICollection_1_t36629;
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36629_GenericClass;
TypeInfo ICollection_1_t36629_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36629_MethodInfos/* methods */
	, ICollection_1_t36629_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36629_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36629_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36629_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36629_0_0_0/* byval_arg */
	, &ICollection_1_t36629_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36629_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36631_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.FieldOffsetAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern TypeInfo IEnumerable_1_t36631_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29153_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.FieldOffsetAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270616_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36631_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29153_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36631_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270616_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36631_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36631_0_0_0;
extern Il2CppType IEnumerable_1_t36631_1_0_0;
struct IEnumerable_1_t36631;
extern TypeInfo IEnumerable_1_t36631_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36631_GenericClass;
TypeInfo IEnumerable_1_t36631_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36631_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36631_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36631_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36631_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36631_0_0_0/* byval_arg */
	, &IEnumerable_1_t36631_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36631_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36630_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern MethodInfo IList_1_get_Item_m270617_MethodInfo;
extern MethodInfo IList_1_set_Item_m270618_MethodInfo;
static PropertyInfo IList_1_t36630____Item_PropertyInfo = 
{
	&IList_1_t36630_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270617_MethodInfo/* get */
	, &IList_1_set_Item_m270618_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36630_PropertyInfos[] =
{
	&IList_1_t36630____Item_PropertyInfo,
	NULL
};
extern Il2CppType FieldOffsetAttribute_t7755_0_0_0;
static ParameterInfo IList_1_t36630_IList_1_IndexOf_m270619_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t7755_0_0_0},
};
extern TypeInfo IList_1_t36630_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270619_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36630_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36630_IList_1_IndexOf_m270619_ParameterInfos/* parameters */
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
extern Il2CppType FieldOffsetAttribute_t7755_0_0_0;
static ParameterInfo IList_1_t36630_IList_1_Insert_m270620_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t7755_0_0_0},
};
extern TypeInfo IList_1_t36630_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270620_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36630_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36630_IList_1_Insert_m270620_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36630_IList_1_RemoveAt_m270621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36630_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270621_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36630_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36630_IList_1_RemoveAt_m270621_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36630_IList_1_get_Item_m270617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36630_il2cpp_TypeInfo;
extern Il2CppType FieldOffsetAttribute_t7755_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270617_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36630_il2cpp_TypeInfo/* declaring_type */
	, &FieldOffsetAttribute_t7755_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36630_IList_1_get_Item_m270617_ParameterInfos/* parameters */
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
extern Il2CppType FieldOffsetAttribute_t7755_0_0_0;
static ParameterInfo IList_1_t36630_IList_1_set_Item_m270618_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t7755_0_0_0},
};
extern TypeInfo IList_1_t36630_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270618_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36630_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36630_IList_1_set_Item_m270618_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36630_MethodInfos[] =
{
	&IList_1_IndexOf_m270619_MethodInfo,
	&IList_1_Insert_m270620_MethodInfo,
	&IList_1_RemoveAt_m270621_MethodInfo,
	&IList_1_get_Item_m270617_MethodInfo,
	&IList_1_set_Item_m270618_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36629_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36631_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36630_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36629_il2cpp_TypeInfo,
	&IEnumerable_1_t36631_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36630_0_0_0;
extern Il2CppType IList_1_t36630_1_0_0;
struct IList_1_t36630;
extern TypeInfo IList_1_t36630_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36630_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36630_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36630_MethodInfos/* methods */
	, IList_1_t36630_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36630_il2cpp_TypeInfo/* element_class */
	, IList_1_t36630_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36630_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36630_0_0_0/* byval_arg */
	, &IList_1_t36630_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36630_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29154_il2cpp_TypeInfo;

// System.MonoTODOAttribute
#include "mscorlib_System_MonoTODOAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270622_MethodInfo;
static PropertyInfo IEnumerator_1_t29154____Current_PropertyInfo = 
{
	&IEnumerator_1_t29154_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270622_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29154_PropertyInfos[] =
{
	&IEnumerator_1_t29154____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29154_il2cpp_TypeInfo;
extern Il2CppType MonoTODOAttribute_t7762_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270622_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29154_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t7762_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29154_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270622_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29154_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29154_0_0_0;
extern Il2CppType IEnumerator_1_t29154_1_0_0;
struct IEnumerator_1_t29154;
extern TypeInfo IEnumerator_1_t29154_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29154_GenericClass;
TypeInfo IEnumerator_1_t29154_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29154_MethodInfos/* methods */
	, IEnumerator_1_t29154_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29154_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29154_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29154_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29154_0_0_0/* byval_arg */
	, &IEnumerator_1_t29154_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29154_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2903.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2903MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo;
extern TypeInfo MonoTODOAttribute_t7762_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179321_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoTODOAttribute_t7762_m222059_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoTODOAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoTODOAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoTODOAttribute_t7762_m222059(__this, p0, method) (MonoTODOAttribute_t7762 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMonoTODOAttribute_t7762_m222059_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24696____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24696, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24696____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24696, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24696_FieldInfos[] =
{
	&InternalEnumerator_1_t24696____array_FieldInfo,
	&InternalEnumerator_1_t24696____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179318_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24696____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24696_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179318_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179321_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24696____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24696_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179321_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24696_PropertyInfos[] =
{
	&InternalEnumerator_1_t24696____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24696____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24696_InternalEnumerator_1__ctor_m179316_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179316_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24696_InternalEnumerator_1__ctor_m179316_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179317_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179318_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179319_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179320_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo;
extern Il2CppType MonoTODOAttribute_t7762_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179321_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t7762_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24696_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179316_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179317_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179318_MethodInfo,
	&InternalEnumerator_1_Dispose_m179319_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179320_MethodInfo,
	&InternalEnumerator_1_get_Current_m179321_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179318_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179320_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179317_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179319_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179321_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24696_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179318_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179320_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179317_MethodInfo,
	&InternalEnumerator_1_Dispose_m179319_MethodInfo,
	&InternalEnumerator_1_get_Current_m179321_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29154_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24696_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29154_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29154_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24696_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29154_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179321_MethodInfo;
extern TypeInfo MonoTODOAttribute_t7762_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoTODOAttribute_t7762_m222059_MethodInfo;
static void* InternalEnumerator_1_t24696_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179321_MethodInfo,
	&MonoTODOAttribute_t7762_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMonoTODOAttribute_t7762_m222059_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24696_0_0_0;
extern Il2CppType InternalEnumerator_1_t24696_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24696_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24696_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24696_MethodInfos/* methods */
	, InternalEnumerator_1_t24696_PropertyInfos/* properties */
	, InternalEnumerator_1_t24696_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24696_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24696_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24696_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24696_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24696_1_0_0/* this_arg */
	, InternalEnumerator_1_t24696_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24696_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24696_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24696)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>
extern MethodInfo ICollection_1_get_Count_m270623_MethodInfo;
static PropertyInfo ICollection_1_t36632____Count_PropertyInfo = 
{
	&ICollection_1_t36632_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270623_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270624_MethodInfo;
static PropertyInfo ICollection_1_t36632____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36632_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270624_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36632_PropertyInfos[] =
{
	&ICollection_1_t36632____Count_PropertyInfo,
	&ICollection_1_t36632____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270623_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36632_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270624_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36632_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MonoTODOAttribute_t7762_0_0_0;
static ParameterInfo ICollection_1_t36632_ICollection_1_Add_m270625_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t7762_0_0_0},
};
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270625_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36632_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36632_ICollection_1_Add_m270625_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270626_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36632_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MonoTODOAttribute_t7762_0_0_0;
static ParameterInfo ICollection_1_t36632_ICollection_1_Contains_m270627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t7762_0_0_0},
};
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270627_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36632_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36632_ICollection_1_Contains_m270627_ParameterInfos/* parameters */
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
extern Il2CppType MonoTODOAttributeU5BU5D_t25244_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36632_ICollection_1_CopyTo_m270628_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttributeU5BU5D_t25244_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270628_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36632_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36632_ICollection_1_CopyTo_m270628_ParameterInfos/* parameters */
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
extern Il2CppType MonoTODOAttribute_t7762_0_0_0;
static ParameterInfo ICollection_1_t36632_ICollection_1_Remove_m270629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t7762_0_0_0},
};
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270629_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36632_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36632_ICollection_1_Remove_m270629_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36632_MethodInfos[] =
{
	&ICollection_1_get_Count_m270623_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270624_MethodInfo,
	&ICollection_1_Add_m270625_MethodInfo,
	&ICollection_1_Clear_m270626_MethodInfo,
	&ICollection_1_Contains_m270627_MethodInfo,
	&ICollection_1_CopyTo_m270628_MethodInfo,
	&ICollection_1_Remove_m270629_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36634_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36632_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36634_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36632_0_0_0;
extern Il2CppType ICollection_1_t36632_1_0_0;
struct ICollection_1_t36632;
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36632_GenericClass;
TypeInfo ICollection_1_t36632_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36632_MethodInfos/* methods */
	, ICollection_1_t36632_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36632_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36632_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36632_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36632_0_0_0/* byval_arg */
	, &ICollection_1_t36632_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36632_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36634_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>
extern TypeInfo IEnumerable_1_t36634_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29154_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270630_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36634_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29154_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36634_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270630_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36634_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36634_0_0_0;
extern Il2CppType IEnumerable_1_t36634_1_0_0;
struct IEnumerable_1_t36634;
extern TypeInfo IEnumerable_1_t36634_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36634_GenericClass;
TypeInfo IEnumerable_1_t36634_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36634_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36634_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36634_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36634_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36634_0_0_0/* byval_arg */
	, &IEnumerable_1_t36634_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36634_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36633_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoTODOAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoTODOAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoTODOAttribute>
extern MethodInfo IList_1_get_Item_m270631_MethodInfo;
extern MethodInfo IList_1_set_Item_m270632_MethodInfo;
static PropertyInfo IList_1_t36633____Item_PropertyInfo = 
{
	&IList_1_t36633_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270631_MethodInfo/* get */
	, &IList_1_set_Item_m270632_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36633_PropertyInfos[] =
{
	&IList_1_t36633____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoTODOAttribute_t7762_0_0_0;
static ParameterInfo IList_1_t36633_IList_1_IndexOf_m270633_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t7762_0_0_0},
};
extern TypeInfo IList_1_t36633_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.MonoTODOAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270633_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36633_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36633_IList_1_IndexOf_m270633_ParameterInfos/* parameters */
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
extern Il2CppType MonoTODOAttribute_t7762_0_0_0;
static ParameterInfo IList_1_t36633_IList_1_Insert_m270634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t7762_0_0_0},
};
extern TypeInfo IList_1_t36633_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270634_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36633_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36633_IList_1_Insert_m270634_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36633_IList_1_RemoveAt_m270635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36633_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270635_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36633_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36633_IList_1_RemoveAt_m270635_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36633_IList_1_get_Item_m270631_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36633_il2cpp_TypeInfo;
extern Il2CppType MonoTODOAttribute_t7762_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.MonoTODOAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270631_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36633_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t7762_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36633_IList_1_get_Item_m270631_ParameterInfos/* parameters */
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
extern Il2CppType MonoTODOAttribute_t7762_0_0_0;
static ParameterInfo IList_1_t36633_IList_1_set_Item_m270632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t7762_0_0_0},
};
extern TypeInfo IList_1_t36633_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270632_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36633_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36633_IList_1_set_Item_m270632_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36633_MethodInfos[] =
{
	&IList_1_IndexOf_m270633_MethodInfo,
	&IList_1_Insert_m270634_MethodInfo,
	&IList_1_RemoveAt_m270635_MethodInfo,
	&IList_1_get_Item_m270631_MethodInfo,
	&IList_1_set_Item_m270632_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36632_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36634_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36633_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36632_il2cpp_TypeInfo,
	&IEnumerable_1_t36634_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36633_0_0_0;
extern Il2CppType IList_1_t36633_1_0_0;
struct IList_1_t36633;
extern TypeInfo IList_1_t36633_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36633_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36633_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36633_MethodInfos/* methods */
	, IList_1_t36633_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36633_il2cpp_TypeInfo/* element_class */
	, IList_1_t36633_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36633_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36633_0_0_0/* byval_arg */
	, &IList_1_t36633_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36633_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29155_il2cpp_TypeInfo;

// System.MonoDocumentationNoteAttribute
#include "mscorlib_System_MonoDocumentationNoteAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoDocumentationNoteAttribute>
extern MethodInfo IEnumerator_1_get_Current_m270636_MethodInfo;
static PropertyInfo IEnumerator_1_t29155____Current_PropertyInfo = 
{
	&IEnumerator_1_t29155_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270636_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29155_PropertyInfos[] =
{
	&IEnumerator_1_t29155____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29155_il2cpp_TypeInfo;
extern Il2CppType MonoDocumentationNoteAttribute_t7763_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270636_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29155_il2cpp_TypeInfo/* declaring_type */
	, &MonoDocumentationNoteAttribute_t7763_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29155_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270636_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29155_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29155_0_0_0;
extern Il2CppType IEnumerator_1_t29155_1_0_0;
struct IEnumerator_1_t29155;
extern TypeInfo IEnumerator_1_t29155_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29155_GenericClass;
TypeInfo IEnumerator_1_t29155_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29155_MethodInfos/* methods */
	, IEnumerator_1_t29155_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29155_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29155_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29155_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29155_0_0_0/* byval_arg */
	, &IEnumerator_1_t29155_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29155_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2904.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2904MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo;
extern TypeInfo MonoDocumentationNoteAttribute_t7763_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179327_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t7763_m222070_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoDocumentationNoteAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoDocumentationNoteAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t7763_m222070(__this, p0, method) (MonoDocumentationNoteAttribute_t7763 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t7763_m222070_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24697____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24697, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24697____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24697, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24697_FieldInfos[] =
{
	&InternalEnumerator_1_t24697____array_FieldInfo,
	&InternalEnumerator_1_t24697____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179324_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24697____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24697_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179324_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179327_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24697____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24697_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179327_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24697_PropertyInfos[] =
{
	&InternalEnumerator_1_t24697____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24697____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24697_InternalEnumerator_1__ctor_m179322_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179322_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24697_InternalEnumerator_1__ctor_m179322_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179323_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179324_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179325_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179326_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo;
extern Il2CppType MonoDocumentationNoteAttribute_t7763_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179327_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* declaring_type */
	, &MonoDocumentationNoteAttribute_t7763_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24697_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179322_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179323_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179324_MethodInfo,
	&InternalEnumerator_1_Dispose_m179325_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179326_MethodInfo,
	&InternalEnumerator_1_get_Current_m179327_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179324_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179326_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179323_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179325_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179327_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24697_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179324_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179326_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179323_MethodInfo,
	&InternalEnumerator_1_Dispose_m179325_MethodInfo,
	&InternalEnumerator_1_get_Current_m179327_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29155_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24697_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29155_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29155_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24697_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29155_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179327_MethodInfo;
extern TypeInfo MonoDocumentationNoteAttribute_t7763_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t7763_m222070_MethodInfo;
static void* InternalEnumerator_1_t24697_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179327_MethodInfo,
	&MonoDocumentationNoteAttribute_t7763_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t7763_m222070_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24697_0_0_0;
extern Il2CppType InternalEnumerator_1_t24697_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24697_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24697_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24697_MethodInfos/* methods */
	, InternalEnumerator_1_t24697_PropertyInfos/* properties */
	, InternalEnumerator_1_t24697_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24697_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24697_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24697_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24697_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24697_1_0_0/* this_arg */
	, InternalEnumerator_1_t24697_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24697_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24697_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24697)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>
extern MethodInfo ICollection_1_get_Count_m270637_MethodInfo;
static PropertyInfo ICollection_1_t36635____Count_PropertyInfo = 
{
	&ICollection_1_t36635_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270637_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270638_MethodInfo;
static PropertyInfo ICollection_1_t36635____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36635_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270638_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36635_PropertyInfos[] =
{
	&ICollection_1_t36635____Count_PropertyInfo,
	&ICollection_1_t36635____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m270637_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36635_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270638_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36635_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MonoDocumentationNoteAttribute_t7763_0_0_0;
static ParameterInfo ICollection_1_t36635_ICollection_1_Add_m270639_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t7763_0_0_0},
};
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Add(T)
MethodInfo ICollection_1_Add_m270639_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36635_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36635_ICollection_1_Add_m270639_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Clear()
MethodInfo ICollection_1_Clear_m270640_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36635_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MonoDocumentationNoteAttribute_t7763_0_0_0;
static ParameterInfo ICollection_1_t36635_ICollection_1_Contains_m270641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t7763_0_0_0},
};
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m270641_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36635_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36635_ICollection_1_Contains_m270641_ParameterInfos/* parameters */
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
extern Il2CppType MonoDocumentationNoteAttributeU5BU5D_t25245_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36635_ICollection_1_CopyTo_m270642_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttributeU5BU5D_t25245_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270642_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36635_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36635_ICollection_1_CopyTo_m270642_ParameterInfos/* parameters */
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
extern Il2CppType MonoDocumentationNoteAttribute_t7763_0_0_0;
static ParameterInfo ICollection_1_t36635_ICollection_1_Remove_m270643_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t7763_0_0_0},
};
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m270643_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36635_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36635_ICollection_1_Remove_m270643_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36635_MethodInfos[] =
{
	&ICollection_1_get_Count_m270637_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270638_MethodInfo,
	&ICollection_1_Add_m270639_MethodInfo,
	&ICollection_1_Clear_m270640_MethodInfo,
	&ICollection_1_Contains_m270641_MethodInfo,
	&ICollection_1_CopyTo_m270642_MethodInfo,
	&ICollection_1_Remove_m270643_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36637_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36635_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36637_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36635_0_0_0;
extern Il2CppType ICollection_1_t36635_1_0_0;
struct ICollection_1_t36635;
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36635_GenericClass;
TypeInfo ICollection_1_t36635_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36635_MethodInfos/* methods */
	, ICollection_1_t36635_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36635_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36635_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36635_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36635_0_0_0/* byval_arg */
	, &ICollection_1_t36635_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36635_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36637_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoDocumentationNoteAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoDocumentationNoteAttribute>
extern TypeInfo IEnumerable_1_t36637_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29155_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoDocumentationNoteAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270644_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36637_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29155_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36637_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270644_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36637_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36637_0_0_0;
extern Il2CppType IEnumerable_1_t36637_1_0_0;
struct IEnumerable_1_t36637;
extern TypeInfo IEnumerable_1_t36637_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36637_GenericClass;
TypeInfo IEnumerable_1_t36637_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36637_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36637_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36637_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36637_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36637_0_0_0/* byval_arg */
	, &IEnumerable_1_t36637_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36637_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36636_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>
extern MethodInfo IList_1_get_Item_m270645_MethodInfo;
extern MethodInfo IList_1_set_Item_m270646_MethodInfo;
static PropertyInfo IList_1_t36636____Item_PropertyInfo = 
{
	&IList_1_t36636_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270645_MethodInfo/* get */
	, &IList_1_set_Item_m270646_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36636_PropertyInfos[] =
{
	&IList_1_t36636____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoDocumentationNoteAttribute_t7763_0_0_0;
static ParameterInfo IList_1_t36636_IList_1_IndexOf_m270647_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t7763_0_0_0},
};
extern TypeInfo IList_1_t36636_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270647_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36636_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36636_IList_1_IndexOf_m270647_ParameterInfos/* parameters */
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
extern Il2CppType MonoDocumentationNoteAttribute_t7763_0_0_0;
static ParameterInfo IList_1_t36636_IList_1_Insert_m270648_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t7763_0_0_0},
};
extern TypeInfo IList_1_t36636_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270648_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36636_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36636_IList_1_Insert_m270648_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36636_IList_1_RemoveAt_m270649_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36636_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270649_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36636_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36636_IList_1_RemoveAt_m270649_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36636_IList_1_get_Item_m270645_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36636_il2cpp_TypeInfo;
extern Il2CppType MonoDocumentationNoteAttribute_t7763_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270645_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36636_il2cpp_TypeInfo/* declaring_type */
	, &MonoDocumentationNoteAttribute_t7763_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36636_IList_1_get_Item_m270645_ParameterInfos/* parameters */
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
extern Il2CppType MonoDocumentationNoteAttribute_t7763_0_0_0;
static ParameterInfo IList_1_t36636_IList_1_set_Item_m270646_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t7763_0_0_0},
};
extern TypeInfo IList_1_t36636_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270646_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36636_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36636_IList_1_set_Item_m270646_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36636_MethodInfos[] =
{
	&IList_1_IndexOf_m270647_MethodInfo,
	&IList_1_Insert_m270648_MethodInfo,
	&IList_1_RemoveAt_m270649_MethodInfo,
	&IList_1_get_Item_m270645_MethodInfo,
	&IList_1_set_Item_m270646_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36635_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36637_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36636_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36635_il2cpp_TypeInfo,
	&IEnumerable_1_t36637_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36636_0_0_0;
extern Il2CppType IList_1_t36636_1_0_0;
struct IList_1_t36636;
extern TypeInfo IList_1_t36636_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36636_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36636_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36636_MethodInfos/* methods */
	, IList_1_t36636_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36636_il2cpp_TypeInfo/* element_class */
	, IList_1_t36636_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36636_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36636_0_0_0/* byval_arg */
	, &IList_1_t36636_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36636_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29156_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern MethodInfo IEnumerator_1_get_Current_m270650_MethodInfo;
static PropertyInfo IEnumerator_1_t29156____Current_PropertyInfo = 
{
	&IEnumerator_1_t29156_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270650_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29156_PropertyInfos[] =
{
	&IEnumerator_1_t29156____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29156_il2cpp_TypeInfo;
extern Il2CppType TableRange_t7768_0_0_0;
extern void* RuntimeInvoker_TableRange_t7768 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270650_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29156_il2cpp_TypeInfo/* declaring_type */
	, &TableRange_t7768_0_0_0/* return_type */
	, RuntimeInvoker_TableRange_t7768/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29156_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270650_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29156_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29156_0_0_0;
extern Il2CppType IEnumerator_1_t29156_1_0_0;
struct IEnumerator_1_t29156;
extern TypeInfo IEnumerator_1_t29156_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29156_GenericClass;
TypeInfo IEnumerator_1_t29156_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29156_MethodInfos/* methods */
	, IEnumerator_1_t29156_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29156_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29156_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29156_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29156_0_0_0/* byval_arg */
	, &IEnumerator_1_t29156_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29156_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2905.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2905MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo;
extern TypeInfo TableRange_t7768_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179333_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTableRange_t7768_m222081_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
 TableRange_t7768  Array_InternalArray__get_Item_TisTableRange_t7768_m222081 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisTableRange_t7768_m222081_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179328_MethodInfo;
 void InternalEnumerator_1__ctor_m179328 (InternalEnumerator_1_t24698 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179329_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179329 (InternalEnumerator_1_t24698 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179330_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179330 (InternalEnumerator_1_t24698 * __this, MethodInfo* method){
	{
		TableRange_t7768  L_0 = InternalEnumerator_1_get_Current_m179333(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179333_MethodInfo);
		TableRange_t7768  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TableRange_t7768_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179331_MethodInfo;
 void InternalEnumerator_1_Dispose_m179331 (InternalEnumerator_1_t24698 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179332_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179332 (InternalEnumerator_1_t24698 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179333_MethodInfo;
 TableRange_t7768  InternalEnumerator_1_get_Current_m179333 (InternalEnumerator_1_t24698 * __this, MethodInfo* method){
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
		TableRange_t7768  L_8 = Array_InternalArray__get_Item_TisTableRange_t7768_m222081(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTableRange_t7768_m222081_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24698____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24698, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24698____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24698, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24698_FieldInfos[] =
{
	&InternalEnumerator_1_t24698____array_FieldInfo,
	&InternalEnumerator_1_t24698____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179330_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24698____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24698_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179330_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179333_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24698____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24698_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24698_PropertyInfos[] =
{
	&InternalEnumerator_1_t24698____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24698____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24698_InternalEnumerator_1__ctor_m179328_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179328_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179328/* method */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24698_InternalEnumerator_1__ctor_m179328_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179329_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179329/* method */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179330_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179330/* method */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179331_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179331/* method */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179332_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179332/* method */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo;
extern Il2CppType TableRange_t7768_0_0_0;
extern void* RuntimeInvoker_TableRange_t7768 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179333_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179333/* method */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* declaring_type */
	, &TableRange_t7768_0_0_0/* return_type */
	, RuntimeInvoker_TableRange_t7768/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24698_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179328_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179329_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179330_MethodInfo,
	&InternalEnumerator_1_Dispose_m179331_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179332_MethodInfo,
	&InternalEnumerator_1_get_Current_m179333_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179330_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179332_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179329_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179331_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179333_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24698_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179330_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179332_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179329_MethodInfo,
	&InternalEnumerator_1_Dispose_m179331_MethodInfo,
	&InternalEnumerator_1_get_Current_m179333_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29156_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24698_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29156_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29156_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24698_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29156_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24698_0_0_0;
extern Il2CppType InternalEnumerator_1_t24698_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24698_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24698_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24698_MethodInfos/* methods */
	, InternalEnumerator_1_t24698_PropertyInfos/* properties */
	, InternalEnumerator_1_t24698_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24698_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24698_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24698_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24698_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24698_1_0_0/* this_arg */
	, InternalEnumerator_1_t24698_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24698_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24698)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern MethodInfo ICollection_1_get_Count_m270651_MethodInfo;
static PropertyInfo ICollection_1_t36638____Count_PropertyInfo = 
{
	&ICollection_1_t36638_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270651_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270652_MethodInfo;
static PropertyInfo ICollection_1_t36638____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36638_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270652_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36638_PropertyInfos[] =
{
	&ICollection_1_t36638____Count_PropertyInfo,
	&ICollection_1_t36638____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Count()
MethodInfo ICollection_1_get_Count_m270651_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36638_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270652_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36638_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TableRange_t7768_0_0_0;
static ParameterInfo ICollection_1_t36638_ICollection_1_Add_m270653_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t7768_0_0_0},
};
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_TableRange_t7768 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Add(T)
MethodInfo ICollection_1_Add_m270653_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36638_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_TableRange_t7768/* invoker_method */
	, ICollection_1_t36638_ICollection_1_Add_m270653_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Clear()
MethodInfo ICollection_1_Clear_m270654_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36638_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TableRange_t7768_0_0_0;
static ParameterInfo ICollection_1_t36638_ICollection_1_Contains_m270655_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t7768_0_0_0},
};
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_TableRange_t7768 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Contains(T)
MethodInfo ICollection_1_Contains_m270655_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36638_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_TableRange_t7768/* invoker_method */
	, ICollection_1_t36638_ICollection_1_Contains_m270655_ParameterInfos/* parameters */
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
extern Il2CppType TableRangeU5BU5D_t7769_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36638_ICollection_1_CopyTo_m270656_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TableRangeU5BU5D_t7769_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270656_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36638_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36638_ICollection_1_CopyTo_m270656_ParameterInfos/* parameters */
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
extern Il2CppType TableRange_t7768_0_0_0;
static ParameterInfo ICollection_1_t36638_ICollection_1_Remove_m270657_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t7768_0_0_0},
};
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_TableRange_t7768 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Remove(T)
MethodInfo ICollection_1_Remove_m270657_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36638_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_TableRange_t7768/* invoker_method */
	, ICollection_1_t36638_ICollection_1_Remove_m270657_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36638_MethodInfos[] =
{
	&ICollection_1_get_Count_m270651_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270652_MethodInfo,
	&ICollection_1_Add_m270653_MethodInfo,
	&ICollection_1_Clear_m270654_MethodInfo,
	&ICollection_1_Contains_m270655_MethodInfo,
	&ICollection_1_CopyTo_m270656_MethodInfo,
	&ICollection_1_Remove_m270657_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36640_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36638_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36640_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36638_0_0_0;
extern Il2CppType ICollection_1_t36638_1_0_0;
struct ICollection_1_t36638;
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36638_GenericClass;
TypeInfo ICollection_1_t36638_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36638_MethodInfos/* methods */
	, ICollection_1_t36638_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36638_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36638_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36638_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36638_0_0_0/* byval_arg */
	, &ICollection_1_t36638_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36638_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36640_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern TypeInfo IEnumerable_1_t36640_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29156_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270658_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36640_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29156_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36640_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270658_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36640_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36640_0_0_0;
extern Il2CppType IEnumerable_1_t36640_1_0_0;
struct IEnumerable_1_t36640;
extern TypeInfo IEnumerable_1_t36640_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36640_GenericClass;
TypeInfo IEnumerable_1_t36640_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36640_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36640_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36640_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36640_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36640_0_0_0/* byval_arg */
	, &IEnumerable_1_t36640_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36640_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36639_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern MethodInfo IList_1_get_Item_m270659_MethodInfo;
extern MethodInfo IList_1_set_Item_m270660_MethodInfo;
static PropertyInfo IList_1_t36639____Item_PropertyInfo = 
{
	&IList_1_t36639_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270659_MethodInfo/* get */
	, &IList_1_set_Item_m270660_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36639_PropertyInfos[] =
{
	&IList_1_t36639____Item_PropertyInfo,
	NULL
};
extern Il2CppType TableRange_t7768_0_0_0;
static ParameterInfo IList_1_t36639_IList_1_IndexOf_m270661_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t7768_0_0_0},
};
extern TypeInfo IList_1_t36639_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_TableRange_t7768 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270661_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36639_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_TableRange_t7768/* invoker_method */
	, IList_1_t36639_IList_1_IndexOf_m270661_ParameterInfos/* parameters */
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
extern Il2CppType TableRange_t7768_0_0_0;
static ParameterInfo IList_1_t36639_IList_1_Insert_m270662_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TableRange_t7768_0_0_0},
};
extern TypeInfo IList_1_t36639_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_TableRange_t7768 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270662_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36639_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_TableRange_t7768/* invoker_method */
	, IList_1_t36639_IList_1_Insert_m270662_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36639_IList_1_RemoveAt_m270663_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36639_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270663_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36639_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36639_IList_1_RemoveAt_m270663_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36639_IList_1_get_Item_m270659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36639_il2cpp_TypeInfo;
extern Il2CppType TableRange_t7768_0_0_0;
extern void* RuntimeInvoker_TableRange_t7768_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270659_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36639_il2cpp_TypeInfo/* declaring_type */
	, &TableRange_t7768_0_0_0/* return_type */
	, RuntimeInvoker_TableRange_t7768_Int32_t73/* invoker_method */
	, IList_1_t36639_IList_1_get_Item_m270659_ParameterInfos/* parameters */
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
extern Il2CppType TableRange_t7768_0_0_0;
static ParameterInfo IList_1_t36639_IList_1_set_Item_m270660_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TableRange_t7768_0_0_0},
};
extern TypeInfo IList_1_t36639_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_TableRange_t7768 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270660_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36639_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_TableRange_t7768/* invoker_method */
	, IList_1_t36639_IList_1_set_Item_m270660_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36639_MethodInfos[] =
{
	&IList_1_IndexOf_m270661_MethodInfo,
	&IList_1_Insert_m270662_MethodInfo,
	&IList_1_RemoveAt_m270663_MethodInfo,
	&IList_1_get_Item_m270659_MethodInfo,
	&IList_1_set_Item_m270660_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36638_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36640_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36639_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36638_il2cpp_TypeInfo,
	&IEnumerable_1_t36640_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36639_0_0_0;
extern Il2CppType IList_1_t36639_1_0_0;
struct IList_1_t36639;
extern TypeInfo IList_1_t36639_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36639_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36639_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36639_MethodInfos/* methods */
	, IList_1_t36639_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36639_il2cpp_TypeInfo/* element_class */
	, IList_1_t36639_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36639_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36639_0_0_0/* byval_arg */
	, &IList_1_t36639_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36639_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29157_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.TailoringInfo
#include "mscorlib_Mono_Globalization_Unicode_TailoringInfo.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
extern MethodInfo IEnumerator_1_get_Current_m270664_MethodInfo;
static PropertyInfo IEnumerator_1_t29157____Current_PropertyInfo = 
{
	&IEnumerator_1_t29157_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270664_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29157_PropertyInfos[] =
{
	&IEnumerator_1_t29157____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29157_il2cpp_TypeInfo;
extern Il2CppType TailoringInfo_t7771_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270664_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29157_il2cpp_TypeInfo/* declaring_type */
	, &TailoringInfo_t7771_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29157_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270664_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29157_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29157_0_0_0;
extern Il2CppType IEnumerator_1_t29157_1_0_0;
struct IEnumerator_1_t29157;
extern TypeInfo IEnumerator_1_t29157_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29157_GenericClass;
TypeInfo IEnumerator_1_t29157_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29157_MethodInfos/* methods */
	, IEnumerator_1_t29157_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29157_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29157_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29157_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29157_0_0_0/* byval_arg */
	, &IEnumerator_1_t29157_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29157_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2906.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2906MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo;
extern TypeInfo TailoringInfo_t7771_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179339_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTailoringInfo_t7771_m222092_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisTailoringInfo_t7771_m222092(__this, p0, method) (TailoringInfo_t7771 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTailoringInfo_t7771_m222092_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24699____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24699, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24699____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24699, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24699_FieldInfos[] =
{
	&InternalEnumerator_1_t24699____array_FieldInfo,
	&InternalEnumerator_1_t24699____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179336_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24699____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24699_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179336_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179339_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24699____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24699_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179339_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24699_PropertyInfos[] =
{
	&InternalEnumerator_1_t24699____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24699____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24699_InternalEnumerator_1__ctor_m179334_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179334_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24699_InternalEnumerator_1__ctor_m179334_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179335_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179336_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179337_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179338_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo;
extern Il2CppType TailoringInfo_t7771_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179339_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* declaring_type */
	, &TailoringInfo_t7771_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24699_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179334_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179335_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179336_MethodInfo,
	&InternalEnumerator_1_Dispose_m179337_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179338_MethodInfo,
	&InternalEnumerator_1_get_Current_m179339_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179336_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179338_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179335_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179337_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179339_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24699_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179336_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179338_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179335_MethodInfo,
	&InternalEnumerator_1_Dispose_m179337_MethodInfo,
	&InternalEnumerator_1_get_Current_m179339_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29157_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24699_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29157_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29157_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24699_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29157_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179339_MethodInfo;
extern TypeInfo TailoringInfo_t7771_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTailoringInfo_t7771_m222092_MethodInfo;
static void* InternalEnumerator_1_t24699_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179339_MethodInfo,
	&TailoringInfo_t7771_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTailoringInfo_t7771_m222092_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24699_0_0_0;
extern Il2CppType InternalEnumerator_1_t24699_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24699_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24699_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24699_MethodInfos/* methods */
	, InternalEnumerator_1_t24699_PropertyInfos/* properties */
	, InternalEnumerator_1_t24699_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24699_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24699_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24699_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24699_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24699_1_0_0/* this_arg */
	, InternalEnumerator_1_t24699_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24699_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24699_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24699)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>
extern MethodInfo ICollection_1_get_Count_m270665_MethodInfo;
static PropertyInfo ICollection_1_t36641____Count_PropertyInfo = 
{
	&ICollection_1_t36641_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270665_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270666_MethodInfo;
static PropertyInfo ICollection_1_t36641____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36641_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270666_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36641_PropertyInfos[] =
{
	&ICollection_1_t36641____Count_PropertyInfo,
	&ICollection_1_t36641____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m270665_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36641_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270666_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36641_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TailoringInfo_t7771_0_0_0;
static ParameterInfo ICollection_1_t36641_ICollection_1_Add_m270667_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t7771_0_0_0},
};
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Add(T)
MethodInfo ICollection_1_Add_m270667_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36641_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36641_ICollection_1_Add_m270667_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Clear()
MethodInfo ICollection_1_Clear_m270668_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36641_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TailoringInfo_t7771_0_0_0;
static ParameterInfo ICollection_1_t36641_ICollection_1_Contains_m270669_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t7771_0_0_0},
};
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m270669_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36641_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36641_ICollection_1_Contains_m270669_ParameterInfos/* parameters */
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
extern Il2CppType TailoringInfoU5BU5D_t7776_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36641_ICollection_1_CopyTo_m270670_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfoU5BU5D_t7776_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270670_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36641_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36641_ICollection_1_CopyTo_m270670_ParameterInfos/* parameters */
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
extern Il2CppType TailoringInfo_t7771_0_0_0;
static ParameterInfo ICollection_1_t36641_ICollection_1_Remove_m270671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t7771_0_0_0},
};
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m270671_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36641_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36641_ICollection_1_Remove_m270671_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36641_MethodInfos[] =
{
	&ICollection_1_get_Count_m270665_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270666_MethodInfo,
	&ICollection_1_Add_m270667_MethodInfo,
	&ICollection_1_Clear_m270668_MethodInfo,
	&ICollection_1_Contains_m270669_MethodInfo,
	&ICollection_1_CopyTo_m270670_MethodInfo,
	&ICollection_1_Remove_m270671_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36643_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36641_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36643_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36641_0_0_0;
extern Il2CppType ICollection_1_t36641_1_0_0;
struct ICollection_1_t36641;
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36641_GenericClass;
TypeInfo ICollection_1_t36641_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36641_MethodInfos/* methods */
	, ICollection_1_t36641_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36641_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36641_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36641_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36641_0_0_0/* byval_arg */
	, &ICollection_1_t36641_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36641_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36643_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>
extern TypeInfo IEnumerable_1_t36643_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29157_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270672_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36643_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29157_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36643_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270672_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36643_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36643_0_0_0;
extern Il2CppType IEnumerable_1_t36643_1_0_0;
struct IEnumerable_1_t36643;
extern TypeInfo IEnumerable_1_t36643_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36643_GenericClass;
TypeInfo IEnumerable_1_t36643_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36643_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36643_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36643_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36643_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36643_0_0_0/* byval_arg */
	, &IEnumerable_1_t36643_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36643_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36642_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>
extern MethodInfo IList_1_get_Item_m270673_MethodInfo;
extern MethodInfo IList_1_set_Item_m270674_MethodInfo;
static PropertyInfo IList_1_t36642____Item_PropertyInfo = 
{
	&IList_1_t36642_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270673_MethodInfo/* get */
	, &IList_1_set_Item_m270674_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36642_PropertyInfos[] =
{
	&IList_1_t36642____Item_PropertyInfo,
	NULL
};
extern Il2CppType TailoringInfo_t7771_0_0_0;
static ParameterInfo IList_1_t36642_IList_1_IndexOf_m270675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t7771_0_0_0},
};
extern TypeInfo IList_1_t36642_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270675_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36642_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36642_IList_1_IndexOf_m270675_ParameterInfos/* parameters */
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
extern Il2CppType TailoringInfo_t7771_0_0_0;
static ParameterInfo IList_1_t36642_IList_1_Insert_m270676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t7771_0_0_0},
};
extern TypeInfo IList_1_t36642_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270676_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36642_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36642_IList_1_Insert_m270676_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36642_IList_1_RemoveAt_m270677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36642_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270677_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36642_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36642_IList_1_RemoveAt_m270677_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36642_IList_1_get_Item_m270673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36642_il2cpp_TypeInfo;
extern Il2CppType TailoringInfo_t7771_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270673_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36642_il2cpp_TypeInfo/* declaring_type */
	, &TailoringInfo_t7771_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36642_IList_1_get_Item_m270673_ParameterInfos/* parameters */
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
extern Il2CppType TailoringInfo_t7771_0_0_0;
static ParameterInfo IList_1_t36642_IList_1_set_Item_m270674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t7771_0_0_0},
};
extern TypeInfo IList_1_t36642_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270674_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36642_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36642_IList_1_set_Item_m270674_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36642_MethodInfos[] =
{
	&IList_1_IndexOf_m270675_MethodInfo,
	&IList_1_Insert_m270676_MethodInfo,
	&IList_1_RemoveAt_m270677_MethodInfo,
	&IList_1_get_Item_m270673_MethodInfo,
	&IList_1_set_Item_m270674_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36641_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36643_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36642_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36641_il2cpp_TypeInfo,
	&IEnumerable_1_t36643_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36642_0_0_0;
extern Il2CppType IList_1_t36642_1_0_0;
struct IList_1_t36642;
extern TypeInfo IList_1_t36642_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36642_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36642_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36642_MethodInfos/* methods */
	, IList_1_t36642_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36642_il2cpp_TypeInfo/* element_class */
	, IList_1_t36642_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36642_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36642_0_0_0/* byval_arg */
	, &IList_1_t36642_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36642_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29158_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Contraction
#include "mscorlib_Mono_Globalization_Unicode_Contraction.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>
extern MethodInfo IEnumerator_1_get_Current_m270678_MethodInfo;
static PropertyInfo IEnumerator_1_t29158____Current_PropertyInfo = 
{
	&IEnumerator_1_t29158_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270678_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29158_PropertyInfos[] =
{
	&IEnumerator_1_t29158____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29158_il2cpp_TypeInfo;
extern Il2CppType Contraction_t7772_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270678_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29158_il2cpp_TypeInfo/* declaring_type */
	, &Contraction_t7772_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29158_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270678_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29158_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29158_0_0_0;
extern Il2CppType IEnumerator_1_t29158_1_0_0;
struct IEnumerator_1_t29158;
extern TypeInfo IEnumerator_1_t29158_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29158_GenericClass;
TypeInfo IEnumerator_1_t29158_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29158_MethodInfos/* methods */
	, IEnumerator_1_t29158_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29158_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29158_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29158_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29158_0_0_0/* byval_arg */
	, &IEnumerator_1_t29158_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29158_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2907.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2907MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo;
extern TypeInfo Contraction_t7772_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179345_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContraction_t7772_m222103_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
#define Array_InternalArray__get_Item_TisContraction_t7772_m222103(__this, p0, method) (Contraction_t7772 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisContraction_t7772_m222103_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24700____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24700, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24700____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24700, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24700_FieldInfos[] =
{
	&InternalEnumerator_1_t24700____array_FieldInfo,
	&InternalEnumerator_1_t24700____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179342_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24700____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24700_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179342_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179345_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24700____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24700_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179345_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24700_PropertyInfos[] =
{
	&InternalEnumerator_1_t24700____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24700____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24700_InternalEnumerator_1__ctor_m179340_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179340_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24700_InternalEnumerator_1__ctor_m179340_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179341_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179342_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179343_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179344_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo;
extern Il2CppType Contraction_t7772_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179345_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* declaring_type */
	, &Contraction_t7772_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24700_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179340_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179341_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179342_MethodInfo,
	&InternalEnumerator_1_Dispose_m179343_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179344_MethodInfo,
	&InternalEnumerator_1_get_Current_m179345_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179342_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179344_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179341_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179343_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179345_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24700_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179342_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179344_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179341_MethodInfo,
	&InternalEnumerator_1_Dispose_m179343_MethodInfo,
	&InternalEnumerator_1_get_Current_m179345_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29158_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24700_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29158_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29158_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24700_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29158_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179345_MethodInfo;
extern TypeInfo Contraction_t7772_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContraction_t7772_m222103_MethodInfo;
static void* InternalEnumerator_1_t24700_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179345_MethodInfo,
	&Contraction_t7772_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisContraction_t7772_m222103_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24700_0_0_0;
extern Il2CppType InternalEnumerator_1_t24700_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24700_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24700_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24700_MethodInfos/* methods */
	, InternalEnumerator_1_t24700_PropertyInfos/* properties */
	, InternalEnumerator_1_t24700_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24700_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24700_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24700_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24700_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24700_1_0_0/* this_arg */
	, InternalEnumerator_1_t24700_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24700_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24700_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24700)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>
extern MethodInfo ICollection_1_get_Count_m270679_MethodInfo;
static PropertyInfo ICollection_1_t36644____Count_PropertyInfo = 
{
	&ICollection_1_t36644_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270679_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270680_MethodInfo;
static PropertyInfo ICollection_1_t36644____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36644_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270680_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36644_PropertyInfos[] =
{
	&ICollection_1_t36644____Count_PropertyInfo,
	&ICollection_1_t36644____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_Count()
MethodInfo ICollection_1_get_Count_m270679_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36644_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270680_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36644_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Contraction_t7772_0_0_0;
static ParameterInfo ICollection_1_t36644_ICollection_1_Add_m270681_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t7772_0_0_0},
};
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Add(T)
MethodInfo ICollection_1_Add_m270681_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36644_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36644_ICollection_1_Add_m270681_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Clear()
MethodInfo ICollection_1_Clear_m270682_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36644_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Contraction_t7772_0_0_0;
static ParameterInfo ICollection_1_t36644_ICollection_1_Contains_m270683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t7772_0_0_0},
};
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Contains(T)
MethodInfo ICollection_1_Contains_m270683_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36644_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36644_ICollection_1_Contains_m270683_ParameterInfos/* parameters */
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
extern Il2CppType ContractionU5BU5D_t7778_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36644_ICollection_1_CopyTo_m270684_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractionU5BU5D_t7778_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270684_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36644_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36644_ICollection_1_CopyTo_m270684_ParameterInfos/* parameters */
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
extern Il2CppType Contraction_t7772_0_0_0;
static ParameterInfo ICollection_1_t36644_ICollection_1_Remove_m270685_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t7772_0_0_0},
};
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Remove(T)
MethodInfo ICollection_1_Remove_m270685_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36644_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36644_ICollection_1_Remove_m270685_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36644_MethodInfos[] =
{
	&ICollection_1_get_Count_m270679_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270680_MethodInfo,
	&ICollection_1_Add_m270681_MethodInfo,
	&ICollection_1_Clear_m270682_MethodInfo,
	&ICollection_1_Contains_m270683_MethodInfo,
	&ICollection_1_CopyTo_m270684_MethodInfo,
	&ICollection_1_Remove_m270685_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36646_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36644_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36646_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36644_0_0_0;
extern Il2CppType ICollection_1_t36644_1_0_0;
struct ICollection_1_t36644;
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36644_GenericClass;
TypeInfo ICollection_1_t36644_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36644_MethodInfos/* methods */
	, ICollection_1_t36644_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36644_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36644_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36644_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36644_0_0_0/* byval_arg */
	, &ICollection_1_t36644_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36644_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36646_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>
extern TypeInfo IEnumerable_1_t36646_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29158_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270686_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36646_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29158_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36646_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270686_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36646_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36646_0_0_0;
extern Il2CppType IEnumerable_1_t36646_1_0_0;
struct IEnumerable_1_t36646;
extern TypeInfo IEnumerable_1_t36646_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36646_GenericClass;
TypeInfo IEnumerable_1_t36646_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36646_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36646_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36646_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36646_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36646_0_0_0/* byval_arg */
	, &IEnumerable_1_t36646_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36646_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36645_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>
extern MethodInfo IList_1_get_Item_m270687_MethodInfo;
extern MethodInfo IList_1_set_Item_m270688_MethodInfo;
static PropertyInfo IList_1_t36645____Item_PropertyInfo = 
{
	&IList_1_t36645_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270687_MethodInfo/* get */
	, &IList_1_set_Item_m270688_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36645_PropertyInfos[] =
{
	&IList_1_t36645____Item_PropertyInfo,
	NULL
};
extern Il2CppType Contraction_t7772_0_0_0;
static ParameterInfo IList_1_t36645_IList_1_IndexOf_m270689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t7772_0_0_0},
};
extern TypeInfo IList_1_t36645_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270689_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36645_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36645_IList_1_IndexOf_m270689_ParameterInfos/* parameters */
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
extern Il2CppType Contraction_t7772_0_0_0;
static ParameterInfo IList_1_t36645_IList_1_Insert_m270690_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Contraction_t7772_0_0_0},
};
extern TypeInfo IList_1_t36645_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270690_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36645_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36645_IList_1_Insert_m270690_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36645_IList_1_RemoveAt_m270691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36645_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270691_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36645_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36645_IList_1_RemoveAt_m270691_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36645_IList_1_get_Item_m270687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36645_il2cpp_TypeInfo;
extern Il2CppType Contraction_t7772_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270687_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36645_il2cpp_TypeInfo/* declaring_type */
	, &Contraction_t7772_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36645_IList_1_get_Item_m270687_ParameterInfos/* parameters */
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
extern Il2CppType Contraction_t7772_0_0_0;
static ParameterInfo IList_1_t36645_IList_1_set_Item_m270688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Contraction_t7772_0_0_0},
};
extern TypeInfo IList_1_t36645_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270688_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36645_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36645_IList_1_set_Item_m270688_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36645_MethodInfos[] =
{
	&IList_1_IndexOf_m270689_MethodInfo,
	&IList_1_Insert_m270690_MethodInfo,
	&IList_1_RemoveAt_m270691_MethodInfo,
	&IList_1_get_Item_m270687_MethodInfo,
	&IList_1_set_Item_m270688_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36644_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36646_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36645_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36644_il2cpp_TypeInfo,
	&IEnumerable_1_t36646_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36645_0_0_0;
extern Il2CppType IList_1_t36645_1_0_0;
struct IList_1_t36645;
extern TypeInfo IList_1_t36645_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36645_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36645_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36645_MethodInfos/* methods */
	, IList_1_t36645_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36645_il2cpp_TypeInfo/* element_class */
	, IList_1_t36645_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36645_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36645_0_0_0/* byval_arg */
	, &IList_1_t36645_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36645_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29159_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Level2Map
#include "mscorlib_Mono_Globalization_Unicode_Level2Map.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>
extern MethodInfo IEnumerator_1_get_Current_m270692_MethodInfo;
static PropertyInfo IEnumerator_1_t29159____Current_PropertyInfo = 
{
	&IEnumerator_1_t29159_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270692_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29159_PropertyInfos[] =
{
	&IEnumerator_1_t29159____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29159_il2cpp_TypeInfo;
extern Il2CppType Level2Map_t7774_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270692_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29159_il2cpp_TypeInfo/* declaring_type */
	, &Level2Map_t7774_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29159_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270692_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29159_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29159_0_0_0;
extern Il2CppType IEnumerator_1_t29159_1_0_0;
struct IEnumerator_1_t29159;
extern TypeInfo IEnumerator_1_t29159_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29159_GenericClass;
TypeInfo IEnumerator_1_t29159_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29159_MethodInfos/* methods */
	, IEnumerator_1_t29159_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29159_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29159_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29159_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29159_0_0_0/* byval_arg */
	, &IEnumerator_1_t29159_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29159_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2908.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2908MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo;
extern TypeInfo Level2Map_t7774_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179351_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLevel2Map_t7774_m222114_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
#define Array_InternalArray__get_Item_TisLevel2Map_t7774_m222114(__this, p0, method) (Level2Map_t7774 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisLevel2Map_t7774_m222114_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24701____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24701, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24701____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24701, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24701_FieldInfos[] =
{
	&InternalEnumerator_1_t24701____array_FieldInfo,
	&InternalEnumerator_1_t24701____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179348_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24701____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24701_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179351_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24701____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24701_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179351_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24701_PropertyInfos[] =
{
	&InternalEnumerator_1_t24701____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24701____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24701_InternalEnumerator_1__ctor_m179346_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179346_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24701_InternalEnumerator_1__ctor_m179346_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179347_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179348_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179349_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179350_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo;
extern Il2CppType Level2Map_t7774_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179351_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* declaring_type */
	, &Level2Map_t7774_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24701_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179346_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179347_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179348_MethodInfo,
	&InternalEnumerator_1_Dispose_m179349_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179350_MethodInfo,
	&InternalEnumerator_1_get_Current_m179351_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179348_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179350_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179347_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179349_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179351_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24701_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179348_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179350_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179347_MethodInfo,
	&InternalEnumerator_1_Dispose_m179349_MethodInfo,
	&InternalEnumerator_1_get_Current_m179351_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29159_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24701_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29159_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29159_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24701_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29159_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179351_MethodInfo;
extern TypeInfo Level2Map_t7774_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLevel2Map_t7774_m222114_MethodInfo;
static void* InternalEnumerator_1_t24701_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179351_MethodInfo,
	&Level2Map_t7774_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisLevel2Map_t7774_m222114_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24701_0_0_0;
extern Il2CppType InternalEnumerator_1_t24701_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24701_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24701_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24701_MethodInfos/* methods */
	, InternalEnumerator_1_t24701_PropertyInfos/* properties */
	, InternalEnumerator_1_t24701_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24701_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24701_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24701_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24701_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24701_1_0_0/* this_arg */
	, InternalEnumerator_1_t24701_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24701_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24701_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24701)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>
extern MethodInfo ICollection_1_get_Count_m270693_MethodInfo;
static PropertyInfo ICollection_1_t36647____Count_PropertyInfo = 
{
	&ICollection_1_t36647_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270693_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270694_MethodInfo;
static PropertyInfo ICollection_1_t36647____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36647_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270694_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36647_PropertyInfos[] =
{
	&ICollection_1_t36647____Count_PropertyInfo,
	&ICollection_1_t36647____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_Count()
MethodInfo ICollection_1_get_Count_m270693_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36647_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270694_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36647_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Level2Map_t7774_0_0_0;
static ParameterInfo ICollection_1_t36647_ICollection_1_Add_m270695_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t7774_0_0_0},
};
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Add(T)
MethodInfo ICollection_1_Add_m270695_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36647_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36647_ICollection_1_Add_m270695_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Clear()
MethodInfo ICollection_1_Clear_m270696_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36647_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Level2Map_t7774_0_0_0;
static ParameterInfo ICollection_1_t36647_ICollection_1_Contains_m270697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t7774_0_0_0},
};
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Contains(T)
MethodInfo ICollection_1_Contains_m270697_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36647_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36647_ICollection_1_Contains_m270697_ParameterInfos/* parameters */
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
extern Il2CppType Level2MapU5BU5D_t7779_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36647_ICollection_1_CopyTo_m270698_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Level2MapU5BU5D_t7779_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270698_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36647_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36647_ICollection_1_CopyTo_m270698_ParameterInfos/* parameters */
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
extern Il2CppType Level2Map_t7774_0_0_0;
static ParameterInfo ICollection_1_t36647_ICollection_1_Remove_m270699_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t7774_0_0_0},
};
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Remove(T)
MethodInfo ICollection_1_Remove_m270699_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36647_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36647_ICollection_1_Remove_m270699_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36647_MethodInfos[] =
{
	&ICollection_1_get_Count_m270693_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270694_MethodInfo,
	&ICollection_1_Add_m270695_MethodInfo,
	&ICollection_1_Clear_m270696_MethodInfo,
	&ICollection_1_Contains_m270697_MethodInfo,
	&ICollection_1_CopyTo_m270698_MethodInfo,
	&ICollection_1_Remove_m270699_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36649_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36647_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36649_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36647_0_0_0;
extern Il2CppType ICollection_1_t36647_1_0_0;
struct ICollection_1_t36647;
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36647_GenericClass;
TypeInfo ICollection_1_t36647_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36647_MethodInfos/* methods */
	, ICollection_1_t36647_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36647_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36647_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36647_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36647_0_0_0/* byval_arg */
	, &ICollection_1_t36647_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36647_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36649_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>
extern TypeInfo IEnumerable_1_t36649_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29159_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270700_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36649_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29159_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36649_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270700_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36649_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36649_0_0_0;
extern Il2CppType IEnumerable_1_t36649_1_0_0;
struct IEnumerable_1_t36649;
extern TypeInfo IEnumerable_1_t36649_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36649_GenericClass;
TypeInfo IEnumerable_1_t36649_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36649_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36649_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36649_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36649_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36649_0_0_0/* byval_arg */
	, &IEnumerable_1_t36649_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36649_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36648_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>
extern MethodInfo IList_1_get_Item_m270701_MethodInfo;
extern MethodInfo IList_1_set_Item_m270702_MethodInfo;
static PropertyInfo IList_1_t36648____Item_PropertyInfo = 
{
	&IList_1_t36648_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270701_MethodInfo/* get */
	, &IList_1_set_Item_m270702_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36648_PropertyInfos[] =
{
	&IList_1_t36648____Item_PropertyInfo,
	NULL
};
extern Il2CppType Level2Map_t7774_0_0_0;
static ParameterInfo IList_1_t36648_IList_1_IndexOf_m270703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t7774_0_0_0},
};
extern TypeInfo IList_1_t36648_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270703_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36648_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36648_IList_1_IndexOf_m270703_ParameterInfos/* parameters */
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
extern Il2CppType Level2Map_t7774_0_0_0;
static ParameterInfo IList_1_t36648_IList_1_Insert_m270704_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Level2Map_t7774_0_0_0},
};
extern TypeInfo IList_1_t36648_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270704_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36648_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36648_IList_1_Insert_m270704_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36648_IList_1_RemoveAt_m270705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36648_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270705_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36648_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36648_IList_1_RemoveAt_m270705_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36648_IList_1_get_Item_m270701_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36648_il2cpp_TypeInfo;
extern Il2CppType Level2Map_t7774_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270701_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36648_il2cpp_TypeInfo/* declaring_type */
	, &Level2Map_t7774_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36648_IList_1_get_Item_m270701_ParameterInfos/* parameters */
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
extern Il2CppType Level2Map_t7774_0_0_0;
static ParameterInfo IList_1_t36648_IList_1_set_Item_m270702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Level2Map_t7774_0_0_0},
};
extern TypeInfo IList_1_t36648_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270702_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36648_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36648_IList_1_set_Item_m270702_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36648_MethodInfos[] =
{
	&IList_1_IndexOf_m270703_MethodInfo,
	&IList_1_Insert_m270704_MethodInfo,
	&IList_1_RemoveAt_m270705_MethodInfo,
	&IList_1_get_Item_m270701_MethodInfo,
	&IList_1_set_Item_m270702_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36647_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36649_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36648_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36647_il2cpp_TypeInfo,
	&IEnumerable_1_t36649_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36648_0_0_0;
extern Il2CppType IList_1_t36648_1_0_0;
struct IList_1_t36648;
extern TypeInfo IList_1_t36648_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36648_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36648_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36648_MethodInfos/* methods */
	, IList_1_t36648_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36648_il2cpp_TypeInfo/* element_class */
	, IList_1_t36648_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36648_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36648_0_0_0/* byval_arg */
	, &IList_1_t36648_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36648_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29160_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_ExtenderT.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo IEnumerator_1_get_Current_m270706_MethodInfo;
static PropertyInfo IEnumerator_1_t29160____Current_PropertyInfo = 
{
	&IEnumerator_1_t29160_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270706_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29160_PropertyInfos[] =
{
	&IEnumerator_1_t29160____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29160_il2cpp_TypeInfo;
extern Il2CppType ExtenderType_t7784_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t7784 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270706_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29160_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t7784_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t7784/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29160_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270706_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29160_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29160_0_0_0;
extern Il2CppType IEnumerator_1_t29160_1_0_0;
struct IEnumerator_1_t29160;
extern TypeInfo IEnumerator_1_t29160_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29160_GenericClass;
TypeInfo IEnumerator_1_t29160_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29160_MethodInfos/* methods */
	, IEnumerator_1_t29160_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29160_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29160_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29160_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29160_0_0_0/* byval_arg */
	, &IEnumerator_1_t29160_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29160_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2909.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2909MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo;
extern TypeInfo ExtenderType_t7784_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179357_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisExtenderType_t7784_m222125_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisExtenderType_t7784_m222125 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisExtenderType_t7784_m222125_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179352_MethodInfo;
 void InternalEnumerator_1__ctor_m179352 (InternalEnumerator_1_t24702 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179353_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179353 (InternalEnumerator_1_t24702 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179354_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179354 (InternalEnumerator_1_t24702 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179357(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179357_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ExtenderType_t7784_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179355_MethodInfo;
 void InternalEnumerator_1_Dispose_m179355 (InternalEnumerator_1_t24702 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179356_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179356 (InternalEnumerator_1_t24702 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179357_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179357 (InternalEnumerator_1_t24702 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisExtenderType_t7784_m222125(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisExtenderType_t7784_m222125_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24702____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24702, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24702____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24702, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24702_FieldInfos[] =
{
	&InternalEnumerator_1_t24702____array_FieldInfo,
	&InternalEnumerator_1_t24702____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179354_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24702____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24702_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179354_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179357_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24702____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24702_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179357_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24702_PropertyInfos[] =
{
	&InternalEnumerator_1_t24702____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24702____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24702_InternalEnumerator_1__ctor_m179352_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179352_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179352/* method */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24702_InternalEnumerator_1__ctor_m179352_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179353_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179353/* method */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179354_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179354/* method */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179355_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179355/* method */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179356_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179356/* method */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo;
extern Il2CppType ExtenderType_t7784_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t7784 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179357_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179357/* method */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t7784_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t7784/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24702_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179352_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179353_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179354_MethodInfo,
	&InternalEnumerator_1_Dispose_m179355_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179356_MethodInfo,
	&InternalEnumerator_1_get_Current_m179357_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179354_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179356_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179353_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179355_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179357_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24702_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179354_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179356_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179353_MethodInfo,
	&InternalEnumerator_1_Dispose_m179355_MethodInfo,
	&InternalEnumerator_1_get_Current_m179357_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29160_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24702_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29160_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29160_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24702_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29160_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24702_0_0_0;
extern Il2CppType InternalEnumerator_1_t24702_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24702_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24702_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24702_MethodInfos/* methods */
	, InternalEnumerator_1_t24702_PropertyInfos/* properties */
	, InternalEnumerator_1_t24702_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24702_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24702_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24702_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24702_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24702_1_0_0/* this_arg */
	, InternalEnumerator_1_t24702_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24702_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24702)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo ICollection_1_get_Count_m270707_MethodInfo;
static PropertyInfo ICollection_1_t36650____Count_PropertyInfo = 
{
	&ICollection_1_t36650_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270707_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270708_MethodInfo;
static PropertyInfo ICollection_1_t36650____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36650_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270708_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36650_PropertyInfos[] =
{
	&ICollection_1_t36650____Count_PropertyInfo,
	&ICollection_1_t36650____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Count()
MethodInfo ICollection_1_get_Count_m270707_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36650_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270708_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36650_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ExtenderType_t7784_0_0_0;
static ParameterInfo ICollection_1_t36650_ICollection_1_Add_m270709_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t7784_0_0_0},
};
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Add(T)
MethodInfo ICollection_1_Add_m270709_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36650_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36650_ICollection_1_Add_m270709_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Clear()
MethodInfo ICollection_1_Clear_m270710_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36650_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ExtenderType_t7784_0_0_0;
static ParameterInfo ICollection_1_t36650_ICollection_1_Contains_m270711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t7784_0_0_0},
};
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Contains(T)
MethodInfo ICollection_1_Contains_m270711_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36650_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36650_ICollection_1_Contains_m270711_ParameterInfos/* parameters */
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
extern Il2CppType ExtenderTypeU5BU5D_t25246_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36650_ICollection_1_CopyTo_m270712_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderTypeU5BU5D_t25246_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270712_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36650_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36650_ICollection_1_CopyTo_m270712_ParameterInfos/* parameters */
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
extern Il2CppType ExtenderType_t7784_0_0_0;
static ParameterInfo ICollection_1_t36650_ICollection_1_Remove_m270713_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t7784_0_0_0},
};
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Remove(T)
MethodInfo ICollection_1_Remove_m270713_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36650_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36650_ICollection_1_Remove_m270713_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36650_MethodInfos[] =
{
	&ICollection_1_get_Count_m270707_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270708_MethodInfo,
	&ICollection_1_Add_m270709_MethodInfo,
	&ICollection_1_Clear_m270710_MethodInfo,
	&ICollection_1_Contains_m270711_MethodInfo,
	&ICollection_1_CopyTo_m270712_MethodInfo,
	&ICollection_1_Remove_m270713_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36652_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36650_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36652_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36650_0_0_0;
extern Il2CppType ICollection_1_t36650_1_0_0;
struct ICollection_1_t36650;
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36650_GenericClass;
TypeInfo ICollection_1_t36650_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36650_MethodInfos/* methods */
	, ICollection_1_t36650_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36650_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36650_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36650_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36650_0_0_0/* byval_arg */
	, &ICollection_1_t36650_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36650_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36652_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern TypeInfo IEnumerable_1_t36652_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29160_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270714_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36652_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29160_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36652_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270714_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36652_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36652_0_0_0;
extern Il2CppType IEnumerable_1_t36652_1_0_0;
struct IEnumerable_1_t36652;
extern TypeInfo IEnumerable_1_t36652_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36652_GenericClass;
TypeInfo IEnumerable_1_t36652_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36652_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36652_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36652_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36652_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36652_0_0_0/* byval_arg */
	, &IEnumerable_1_t36652_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36652_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36651_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo IList_1_get_Item_m270715_MethodInfo;
extern MethodInfo IList_1_set_Item_m270716_MethodInfo;
static PropertyInfo IList_1_t36651____Item_PropertyInfo = 
{
	&IList_1_t36651_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270715_MethodInfo/* get */
	, &IList_1_set_Item_m270716_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36651_PropertyInfos[] =
{
	&IList_1_t36651____Item_PropertyInfo,
	NULL
};
extern Il2CppType ExtenderType_t7784_0_0_0;
static ParameterInfo IList_1_t36651_IList_1_IndexOf_m270717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t7784_0_0_0},
};
extern TypeInfo IList_1_t36651_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270717_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36651_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36651_IList_1_IndexOf_m270717_ParameterInfos/* parameters */
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
extern Il2CppType ExtenderType_t7784_0_0_0;
static ParameterInfo IList_1_t36651_IList_1_Insert_m270718_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t7784_0_0_0},
};
extern TypeInfo IList_1_t36651_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270718_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36651_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36651_IList_1_Insert_m270718_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36651_IList_1_RemoveAt_m270719_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36651_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270719_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36651_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36651_IList_1_RemoveAt_m270719_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36651_IList_1_get_Item_m270715_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36651_il2cpp_TypeInfo;
extern Il2CppType ExtenderType_t7784_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t7784_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270715_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36651_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t7784_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t7784_Int32_t73/* invoker_method */
	, IList_1_t36651_IList_1_get_Item_m270715_ParameterInfos/* parameters */
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
extern Il2CppType ExtenderType_t7784_0_0_0;
static ParameterInfo IList_1_t36651_IList_1_set_Item_m270716_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t7784_0_0_0},
};
extern TypeInfo IList_1_t36651_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270716_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36651_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36651_IList_1_set_Item_m270716_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36651_MethodInfos[] =
{
	&IList_1_IndexOf_m270717_MethodInfo,
	&IList_1_Insert_m270718_MethodInfo,
	&IList_1_RemoveAt_m270719_MethodInfo,
	&IList_1_get_Item_m270715_MethodInfo,
	&IList_1_set_Item_m270716_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36650_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36652_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36651_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36650_il2cpp_TypeInfo,
	&IEnumerable_1_t36652_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36651_0_0_0;
extern Il2CppType IList_1_t36651_1_0_0;
struct IList_1_t36651;
extern TypeInfo IList_1_t36651_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36651_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36651_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36651_MethodInfos/* methods */
	, IList_1_t36651_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36651_il2cpp_TypeInfo/* element_class */
	, IList_1_t36651_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36651_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36651_0_0_0/* byval_arg */
	, &IList_1_t36651_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36651_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29161_il2cpp_TypeInfo;

// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IEnumerator_1_get_Current_m270720_MethodInfo;
static PropertyInfo IEnumerator_1_t29161____Current_PropertyInfo = 
{
	&IEnumerator_1_t29161_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270720_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29161_PropertyInfos[] =
{
	&IEnumerator_1_t29161____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29161_il2cpp_TypeInfo;
extern Il2CppType ConfidenceFactor_t7793_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t7793 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270720_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29161_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t7793_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t7793/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29161_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270720_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29161_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29161_0_0_0;
extern Il2CppType IEnumerator_1_t29161_1_0_0;
struct IEnumerator_1_t29161;
extern TypeInfo IEnumerator_1_t29161_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29161_GenericClass;
TypeInfo IEnumerator_1_t29161_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29161_MethodInfos/* methods */
	, IEnumerator_1_t29161_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29161_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29161_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29161_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29161_0_0_0/* byval_arg */
	, &IEnumerator_1_t29161_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29161_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2910.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2910MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo;
extern TypeInfo ConfidenceFactor_t7793_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179363_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConfidenceFactor_t7793_m222136_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisConfidenceFactor_t7793_m222136 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisConfidenceFactor_t7793_m222136_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179358_MethodInfo;
 void InternalEnumerator_1__ctor_m179358 (InternalEnumerator_1_t24703 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179359_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179359 (InternalEnumerator_1_t24703 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179360_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179360 (InternalEnumerator_1_t24703 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179363(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179363_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ConfidenceFactor_t7793_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179361_MethodInfo;
 void InternalEnumerator_1_Dispose_m179361 (InternalEnumerator_1_t24703 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179362_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179362 (InternalEnumerator_1_t24703 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179363_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179363 (InternalEnumerator_1_t24703 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisConfidenceFactor_t7793_m222136(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisConfidenceFactor_t7793_m222136_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24703____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24703, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24703____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24703, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24703_FieldInfos[] =
{
	&InternalEnumerator_1_t24703____array_FieldInfo,
	&InternalEnumerator_1_t24703____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179360_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24703____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24703_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179360_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179363_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24703____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24703_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179363_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24703_PropertyInfos[] =
{
	&InternalEnumerator_1_t24703____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24703____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24703_InternalEnumerator_1__ctor_m179358_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179358_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179358/* method */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24703_InternalEnumerator_1__ctor_m179358_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179359_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179359/* method */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179360_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179360/* method */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179361_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179361/* method */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179362_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179362/* method */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo;
extern Il2CppType ConfidenceFactor_t7793_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t7793 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179363_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179363/* method */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t7793_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t7793/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24703_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179358_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179359_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179360_MethodInfo,
	&InternalEnumerator_1_Dispose_m179361_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179362_MethodInfo,
	&InternalEnumerator_1_get_Current_m179363_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179360_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179362_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179359_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179361_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179363_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24703_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179360_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179362_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179359_MethodInfo,
	&InternalEnumerator_1_Dispose_m179361_MethodInfo,
	&InternalEnumerator_1_get_Current_m179363_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29161_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24703_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29161_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29161_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24703_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29161_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24703_0_0_0;
extern Il2CppType InternalEnumerator_1_t24703_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24703_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24703_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24703_MethodInfos/* methods */
	, InternalEnumerator_1_t24703_PropertyInfos/* properties */
	, InternalEnumerator_1_t24703_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24703_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24703_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24703_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24703_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24703_1_0_0/* this_arg */
	, InternalEnumerator_1_t24703_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24703_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24703)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo ICollection_1_get_Count_m270721_MethodInfo;
static PropertyInfo ICollection_1_t36653____Count_PropertyInfo = 
{
	&ICollection_1_t36653_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270721_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270722_MethodInfo;
static PropertyInfo ICollection_1_t36653____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36653_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270722_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36653_PropertyInfos[] =
{
	&ICollection_1_t36653____Count_PropertyInfo,
	&ICollection_1_t36653____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
MethodInfo ICollection_1_get_Count_m270721_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36653_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270722_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36653_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ConfidenceFactor_t7793_0_0_0;
static ParameterInfo ICollection_1_t36653_ICollection_1_Add_m270723_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t7793_0_0_0},
};
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
MethodInfo ICollection_1_Add_m270723_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36653_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36653_ICollection_1_Add_m270723_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
MethodInfo ICollection_1_Clear_m270724_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36653_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ConfidenceFactor_t7793_0_0_0;
static ParameterInfo ICollection_1_t36653_ICollection_1_Contains_m270725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t7793_0_0_0},
};
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
MethodInfo ICollection_1_Contains_m270725_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36653_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36653_ICollection_1_Contains_m270725_ParameterInfos/* parameters */
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
extern Il2CppType ConfidenceFactorU5BU5D_t25247_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36653_ICollection_1_CopyTo_m270726_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactorU5BU5D_t25247_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270726_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36653_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36653_ICollection_1_CopyTo_m270726_ParameterInfos/* parameters */
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
extern Il2CppType ConfidenceFactor_t7793_0_0_0;
static ParameterInfo ICollection_1_t36653_ICollection_1_Remove_m270727_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t7793_0_0_0},
};
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
MethodInfo ICollection_1_Remove_m270727_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36653_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36653_ICollection_1_Remove_m270727_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36653_MethodInfos[] =
{
	&ICollection_1_get_Count_m270721_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270722_MethodInfo,
	&ICollection_1_Add_m270723_MethodInfo,
	&ICollection_1_Clear_m270724_MethodInfo,
	&ICollection_1_Contains_m270725_MethodInfo,
	&ICollection_1_CopyTo_m270726_MethodInfo,
	&ICollection_1_Remove_m270727_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36655_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36653_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36655_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36653_0_0_0;
extern Il2CppType ICollection_1_t36653_1_0_0;
struct ICollection_1_t36653;
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36653_GenericClass;
TypeInfo ICollection_1_t36653_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36653_MethodInfos/* methods */
	, ICollection_1_t36653_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36653_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36653_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36653_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36653_0_0_0/* byval_arg */
	, &ICollection_1_t36653_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36653_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36655_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>
extern TypeInfo IEnumerable_1_t36655_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29161_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270728_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36655_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29161_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36655_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270728_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36655_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36655_0_0_0;
extern Il2CppType IEnumerable_1_t36655_1_0_0;
struct IEnumerable_1_t36655;
extern TypeInfo IEnumerable_1_t36655_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36655_GenericClass;
TypeInfo IEnumerable_1_t36655_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36655_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36655_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36655_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36655_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36655_0_0_0/* byval_arg */
	, &IEnumerable_1_t36655_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36655_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36654_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IList_1_get_Item_m270729_MethodInfo;
extern MethodInfo IList_1_set_Item_m270730_MethodInfo;
static PropertyInfo IList_1_t36654____Item_PropertyInfo = 
{
	&IList_1_t36654_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270729_MethodInfo/* get */
	, &IList_1_set_Item_m270730_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36654_PropertyInfos[] =
{
	&IList_1_t36654____Item_PropertyInfo,
	NULL
};
extern Il2CppType ConfidenceFactor_t7793_0_0_0;
static ParameterInfo IList_1_t36654_IList_1_IndexOf_m270731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t7793_0_0_0},
};
extern TypeInfo IList_1_t36654_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270731_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36654_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36654_IList_1_IndexOf_m270731_ParameterInfos/* parameters */
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
extern Il2CppType ConfidenceFactor_t7793_0_0_0;
static ParameterInfo IList_1_t36654_IList_1_Insert_m270732_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t7793_0_0_0},
};
extern TypeInfo IList_1_t36654_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270732_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36654_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36654_IList_1_Insert_m270732_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36654_IList_1_RemoveAt_m270733_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36654_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270733_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36654_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36654_IList_1_RemoveAt_m270733_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36654_IList_1_get_Item_m270729_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36654_il2cpp_TypeInfo;
extern Il2CppType ConfidenceFactor_t7793_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t7793_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270729_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36654_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t7793_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t7793_Int32_t73/* invoker_method */
	, IList_1_t36654_IList_1_get_Item_m270729_ParameterInfos/* parameters */
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
extern Il2CppType ConfidenceFactor_t7793_0_0_0;
static ParameterInfo IList_1_t36654_IList_1_set_Item_m270730_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t7793_0_0_0},
};
extern TypeInfo IList_1_t36654_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270730_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36654_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36654_IList_1_set_Item_m270730_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36654_MethodInfos[] =
{
	&IList_1_IndexOf_m270731_MethodInfo,
	&IList_1_Insert_m270732_MethodInfo,
	&IList_1_RemoveAt_m270733_MethodInfo,
	&IList_1_get_Item_m270729_MethodInfo,
	&IList_1_set_Item_m270730_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36653_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36655_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36654_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36653_il2cpp_TypeInfo,
	&IEnumerable_1_t36655_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36654_0_0_0;
extern Il2CppType IList_1_t36654_1_0_0;
struct IList_1_t36654;
extern TypeInfo IList_1_t36654_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36654_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36654_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36654_MethodInfos/* methods */
	, IList_1_t36654_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36654_il2cpp_TypeInfo/* element_class */
	, IList_1_t36654_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36654_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36654_0_0_0/* byval_arg */
	, &IList_1_t36654_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36654_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29162_il2cpp_TypeInfo;

// Mono.Math.BigInteger
#include "mscorlib_Mono_Math_BigInteger.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>
extern MethodInfo IEnumerator_1_get_Current_m270734_MethodInfo;
static PropertyInfo IEnumerator_1_t29162____Current_PropertyInfo = 
{
	&IEnumerator_1_t29162_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270734_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29162_PropertyInfos[] =
{
	&IEnumerator_1_t29162____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29162_il2cpp_TypeInfo;
extern Il2CppType BigInteger_t7791_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270734_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29162_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t7791_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29162_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270734_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29162_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29162_0_0_0;
extern Il2CppType IEnumerator_1_t29162_1_0_0;
struct IEnumerator_1_t29162;
extern TypeInfo IEnumerator_1_t29162_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29162_GenericClass;
TypeInfo IEnumerator_1_t29162_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29162_MethodInfos/* methods */
	, IEnumerator_1_t29162_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29162_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29162_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29162_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29162_0_0_0/* byval_arg */
	, &IEnumerator_1_t29162_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29162_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2911.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2911MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo;
extern TypeInfo BigInteger_t7791_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179369_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBigInteger_t7791_m222147_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t7791_m222147(__this, p0, method) (BigInteger_t7791 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisBigInteger_t7791_m222147_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24704____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24704, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24704____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24704, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24704_FieldInfos[] =
{
	&InternalEnumerator_1_t24704____array_FieldInfo,
	&InternalEnumerator_1_t24704____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179366_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24704____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24704_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179369_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24704____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24704_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179369_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24704_PropertyInfos[] =
{
	&InternalEnumerator_1_t24704____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24704____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24704_InternalEnumerator_1__ctor_m179364_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179364_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24704_InternalEnumerator_1__ctor_m179364_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179365_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179366_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179367_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179368_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo;
extern Il2CppType BigInteger_t7791_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179369_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t7791_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24704_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179364_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179365_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179366_MethodInfo,
	&InternalEnumerator_1_Dispose_m179367_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179368_MethodInfo,
	&InternalEnumerator_1_get_Current_m179369_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179366_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179368_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179365_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179367_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179369_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24704_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179366_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179368_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179365_MethodInfo,
	&InternalEnumerator_1_Dispose_m179367_MethodInfo,
	&InternalEnumerator_1_get_Current_m179369_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29162_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24704_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29162_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29162_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24704_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29162_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179369_MethodInfo;
extern TypeInfo BigInteger_t7791_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBigInteger_t7791_m222147_MethodInfo;
static void* InternalEnumerator_1_t24704_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179369_MethodInfo,
	&BigInteger_t7791_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisBigInteger_t7791_m222147_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24704_0_0_0;
extern Il2CppType InternalEnumerator_1_t24704_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24704_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24704_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24704_MethodInfos/* methods */
	, InternalEnumerator_1_t24704_PropertyInfos/* properties */
	, InternalEnumerator_1_t24704_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24704_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24704_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24704_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24704_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24704_1_0_0/* this_arg */
	, InternalEnumerator_1_t24704_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24704_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24704_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24704)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>
extern MethodInfo ICollection_1_get_Count_m270735_MethodInfo;
static PropertyInfo ICollection_1_t36656____Count_PropertyInfo = 
{
	&ICollection_1_t36656_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270735_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270736_MethodInfo;
static PropertyInfo ICollection_1_t36656____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36656_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270736_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36656_PropertyInfos[] =
{
	&ICollection_1_t36656____Count_PropertyInfo,
	&ICollection_1_t36656____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
MethodInfo ICollection_1_get_Count_m270735_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36656_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270736_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36656_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType BigInteger_t7791_0_0_0;
static ParameterInfo ICollection_1_t36656_ICollection_1_Add_m270737_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t7791_0_0_0},
};
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
MethodInfo ICollection_1_Add_m270737_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36656_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36656_ICollection_1_Add_m270737_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
MethodInfo ICollection_1_Clear_m270738_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36656_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType BigInteger_t7791_0_0_0;
static ParameterInfo ICollection_1_t36656_ICollection_1_Contains_m270739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t7791_0_0_0},
};
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
MethodInfo ICollection_1_Contains_m270739_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36656_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36656_ICollection_1_Contains_m270739_ParameterInfos/* parameters */
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
extern Il2CppType BigIntegerU5BU5D_t7798_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36656_ICollection_1_CopyTo_m270740_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BigIntegerU5BU5D_t7798_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270740_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36656_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36656_ICollection_1_CopyTo_m270740_ParameterInfos/* parameters */
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
extern Il2CppType BigInteger_t7791_0_0_0;
static ParameterInfo ICollection_1_t36656_ICollection_1_Remove_m270741_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t7791_0_0_0},
};
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
MethodInfo ICollection_1_Remove_m270741_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36656_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36656_ICollection_1_Remove_m270741_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36656_MethodInfos[] =
{
	&ICollection_1_get_Count_m270735_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270736_MethodInfo,
	&ICollection_1_Add_m270737_MethodInfo,
	&ICollection_1_Clear_m270738_MethodInfo,
	&ICollection_1_Contains_m270739_MethodInfo,
	&ICollection_1_CopyTo_m270740_MethodInfo,
	&ICollection_1_Remove_m270741_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36658_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36656_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36658_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36656_0_0_0;
extern Il2CppType ICollection_1_t36656_1_0_0;
struct ICollection_1_t36656;
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36656_GenericClass;
TypeInfo ICollection_1_t36656_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36656_MethodInfos/* methods */
	, ICollection_1_t36656_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36656_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36656_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36656_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36656_0_0_0/* byval_arg */
	, &ICollection_1_t36656_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36656_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36658_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>
extern TypeInfo IEnumerable_1_t36658_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29162_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270742_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36658_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29162_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36658_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270742_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36658_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36658_0_0_0;
extern Il2CppType IEnumerable_1_t36658_1_0_0;
struct IEnumerable_1_t36658;
extern TypeInfo IEnumerable_1_t36658_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36658_GenericClass;
TypeInfo IEnumerable_1_t36658_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36658_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36658_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36658_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36658_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36658_0_0_0/* byval_arg */
	, &IEnumerable_1_t36658_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36658_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36657_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger>
extern MethodInfo IList_1_get_Item_m270743_MethodInfo;
extern MethodInfo IList_1_set_Item_m270744_MethodInfo;
static PropertyInfo IList_1_t36657____Item_PropertyInfo = 
{
	&IList_1_t36657_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270743_MethodInfo/* get */
	, &IList_1_set_Item_m270744_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36657_PropertyInfos[] =
{
	&IList_1_t36657____Item_PropertyInfo,
	NULL
};
extern Il2CppType BigInteger_t7791_0_0_0;
static ParameterInfo IList_1_t36657_IList_1_IndexOf_m270745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t7791_0_0_0},
};
extern TypeInfo IList_1_t36657_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270745_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36657_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36657_IList_1_IndexOf_m270745_ParameterInfos/* parameters */
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
extern Il2CppType BigInteger_t7791_0_0_0;
static ParameterInfo IList_1_t36657_IList_1_Insert_m270746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t7791_0_0_0},
};
extern TypeInfo IList_1_t36657_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270746_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36657_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36657_IList_1_Insert_m270746_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36657_IList_1_RemoveAt_m270747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36657_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270747_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36657_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36657_IList_1_RemoveAt_m270747_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36657_IList_1_get_Item_m270743_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36657_il2cpp_TypeInfo;
extern Il2CppType BigInteger_t7791_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270743_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36657_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t7791_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36657_IList_1_get_Item_m270743_ParameterInfos/* parameters */
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
extern Il2CppType BigInteger_t7791_0_0_0;
static ParameterInfo IList_1_t36657_IList_1_set_Item_m270744_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t7791_0_0_0},
};
extern TypeInfo IList_1_t36657_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270744_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36657_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36657_IList_1_set_Item_m270744_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36657_MethodInfos[] =
{
	&IList_1_IndexOf_m270745_MethodInfo,
	&IList_1_Insert_m270746_MethodInfo,
	&IList_1_RemoveAt_m270747_MethodInfo,
	&IList_1_get_Item_m270743_MethodInfo,
	&IList_1_set_Item_m270744_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36656_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36658_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36657_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36656_il2cpp_TypeInfo,
	&IEnumerable_1_t36658_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36657_0_0_0;
extern Il2CppType IList_1_t36657_1_0_0;
struct IList_1_t36657;
extern TypeInfo IList_1_t36657_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36657_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36657_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36657_MethodInfos/* methods */
	, IList_1_t36657_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36657_il2cpp_TypeInfo/* element_class */
	, IList_1_t36657_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36657_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36657_0_0_0/* byval_arg */
	, &IList_1_t36657_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36657_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29163_il2cpp_TypeInfo;

// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IEnumerator_1_get_Current_m270748_MethodInfo;
static PropertyInfo IEnumerator_1_t29163____Current_PropertyInfo = 
{
	&IEnumerator_1_t29163_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270748_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29163_PropertyInfos[] =
{
	&IEnumerator_1_t29163____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29163_il2cpp_TypeInfo;
extern Il2CppType Sign_t7795_0_0_0;
extern void* RuntimeInvoker_Sign_t7795 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270748_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29163_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t7795_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t7795/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29163_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270748_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29163_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29163_0_0_0;
extern Il2CppType IEnumerator_1_t29163_1_0_0;
struct IEnumerator_1_t29163;
extern TypeInfo IEnumerator_1_t29163_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29163_GenericClass;
TypeInfo IEnumerator_1_t29163_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29163_MethodInfos/* methods */
	, IEnumerator_1_t29163_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29163_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29163_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29163_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29163_0_0_0/* byval_arg */
	, &IEnumerator_1_t29163_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29163_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2912.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2912MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo;
extern TypeInfo Sign_t7795_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179375_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSign_t7795_m222158_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSign_t7795_m222158 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSign_t7795_m222158_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179370_MethodInfo;
 void InternalEnumerator_1__ctor_m179370 (InternalEnumerator_1_t24705 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179371_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179371 (InternalEnumerator_1_t24705 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179372_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179372 (InternalEnumerator_1_t24705 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179375(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179375_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Sign_t7795_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179373_MethodInfo;
 void InternalEnumerator_1_Dispose_m179373 (InternalEnumerator_1_t24705 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179374_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179374 (InternalEnumerator_1_t24705 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179375_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179375 (InternalEnumerator_1_t24705 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSign_t7795_m222158(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSign_t7795_m222158_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24705____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24705, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24705____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24705, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24705_FieldInfos[] =
{
	&InternalEnumerator_1_t24705____array_FieldInfo,
	&InternalEnumerator_1_t24705____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179372_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24705____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24705_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179372_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179375_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24705____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24705_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179375_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24705_PropertyInfos[] =
{
	&InternalEnumerator_1_t24705____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24705____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24705_InternalEnumerator_1__ctor_m179370_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179370_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179370/* method */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24705_InternalEnumerator_1__ctor_m179370_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179371_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179371/* method */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179372_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179372/* method */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179373_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179373/* method */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179374_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179374/* method */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo;
extern Il2CppType Sign_t7795_0_0_0;
extern void* RuntimeInvoker_Sign_t7795 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179375_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179375/* method */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t7795_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t7795/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24705_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179370_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179371_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179372_MethodInfo,
	&InternalEnumerator_1_Dispose_m179373_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179374_MethodInfo,
	&InternalEnumerator_1_get_Current_m179375_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179372_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179374_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179371_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179373_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179375_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24705_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179372_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179374_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179371_MethodInfo,
	&InternalEnumerator_1_Dispose_m179373_MethodInfo,
	&InternalEnumerator_1_get_Current_m179375_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29163_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24705_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29163_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29163_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24705_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29163_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24705_0_0_0;
extern Il2CppType InternalEnumerator_1_t24705_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24705_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24705_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24705_MethodInfos/* methods */
	, InternalEnumerator_1_t24705_PropertyInfos/* properties */
	, InternalEnumerator_1_t24705_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24705_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24705_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24705_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24705_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24705_1_0_0/* this_arg */
	, InternalEnumerator_1_t24705_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24705_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24705)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>
extern MethodInfo ICollection_1_get_Count_m270749_MethodInfo;
static PropertyInfo ICollection_1_t36659____Count_PropertyInfo = 
{
	&ICollection_1_t36659_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270749_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270750_MethodInfo;
static PropertyInfo ICollection_1_t36659____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36659_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270750_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36659_PropertyInfos[] =
{
	&ICollection_1_t36659____Count_PropertyInfo,
	&ICollection_1_t36659____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
MethodInfo ICollection_1_get_Count_m270749_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36659_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270750_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36659_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Sign_t7795_0_0_0;
static ParameterInfo ICollection_1_t36659_ICollection_1_Add_m270751_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t7795_0_0_0},
};
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
MethodInfo ICollection_1_Add_m270751_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36659_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36659_ICollection_1_Add_m270751_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
MethodInfo ICollection_1_Clear_m270752_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36659_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Sign_t7795_0_0_0;
static ParameterInfo ICollection_1_t36659_ICollection_1_Contains_m270753_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t7795_0_0_0},
};
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
MethodInfo ICollection_1_Contains_m270753_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36659_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36659_ICollection_1_Contains_m270753_ParameterInfos/* parameters */
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
extern Il2CppType SignU5BU5D_t25248_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36659_ICollection_1_CopyTo_m270754_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SignU5BU5D_t25248_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270754_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36659_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36659_ICollection_1_CopyTo_m270754_ParameterInfos/* parameters */
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
extern Il2CppType Sign_t7795_0_0_0;
static ParameterInfo ICollection_1_t36659_ICollection_1_Remove_m270755_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t7795_0_0_0},
};
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
MethodInfo ICollection_1_Remove_m270755_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36659_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36659_ICollection_1_Remove_m270755_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36659_MethodInfos[] =
{
	&ICollection_1_get_Count_m270749_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270750_MethodInfo,
	&ICollection_1_Add_m270751_MethodInfo,
	&ICollection_1_Clear_m270752_MethodInfo,
	&ICollection_1_Contains_m270753_MethodInfo,
	&ICollection_1_CopyTo_m270754_MethodInfo,
	&ICollection_1_Remove_m270755_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36661_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36659_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36661_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36659_0_0_0;
extern Il2CppType ICollection_1_t36659_1_0_0;
struct ICollection_1_t36659;
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36659_GenericClass;
TypeInfo ICollection_1_t36659_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36659_MethodInfos/* methods */
	, ICollection_1_t36659_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36659_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36659_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36659_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36659_0_0_0/* byval_arg */
	, &ICollection_1_t36659_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36659_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36661_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>
extern TypeInfo IEnumerable_1_t36661_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29163_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270756_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36661_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29163_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36661_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270756_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36661_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36661_0_0_0;
extern Il2CppType IEnumerable_1_t36661_1_0_0;
struct IEnumerable_1_t36661;
extern TypeInfo IEnumerable_1_t36661_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36661_GenericClass;
TypeInfo IEnumerable_1_t36661_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36661_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36661_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36661_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36661_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36661_0_0_0/* byval_arg */
	, &IEnumerable_1_t36661_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36661_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36660_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IList_1_get_Item_m270757_MethodInfo;
extern MethodInfo IList_1_set_Item_m270758_MethodInfo;
static PropertyInfo IList_1_t36660____Item_PropertyInfo = 
{
	&IList_1_t36660_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m270757_MethodInfo/* get */
	, &IList_1_set_Item_m270758_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36660_PropertyInfos[] =
{
	&IList_1_t36660____Item_PropertyInfo,
	NULL
};
extern Il2CppType Sign_t7795_0_0_0;
static ParameterInfo IList_1_t36660_IList_1_IndexOf_m270759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t7795_0_0_0},
};
extern TypeInfo IList_1_t36660_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
MethodInfo IList_1_IndexOf_m270759_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36660_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36660_IList_1_IndexOf_m270759_ParameterInfos/* parameters */
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
extern Il2CppType Sign_t7795_0_0_0;
static ParameterInfo IList_1_t36660_IList_1_Insert_m270760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t7795_0_0_0},
};
extern TypeInfo IList_1_t36660_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m270760_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36660_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36660_IList_1_Insert_m270760_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36660_IList_1_RemoveAt_m270761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36660_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m270761_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36660_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36660_IList_1_RemoveAt_m270761_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36660_IList_1_get_Item_m270757_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36660_il2cpp_TypeInfo;
extern Il2CppType Sign_t7795_0_0_0;
extern void* RuntimeInvoker_Sign_t7795_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m270757_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36660_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t7795_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t7795_Int32_t73/* invoker_method */
	, IList_1_t36660_IList_1_get_Item_m270757_ParameterInfos/* parameters */
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
extern Il2CppType Sign_t7795_0_0_0;
static ParameterInfo IList_1_t36660_IList_1_set_Item_m270758_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t7795_0_0_0},
};
extern TypeInfo IList_1_t36660_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m270758_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36660_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36660_IList_1_set_Item_m270758_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36660_MethodInfos[] =
{
	&IList_1_IndexOf_m270759_MethodInfo,
	&IList_1_Insert_m270760_MethodInfo,
	&IList_1_RemoveAt_m270761_MethodInfo,
	&IList_1_get_Item_m270757_MethodInfo,
	&IList_1_set_Item_m270758_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36659_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36661_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36660_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36659_il2cpp_TypeInfo,
	&IEnumerable_1_t36661_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36660_0_0_0;
extern Il2CppType IList_1_t36660_1_0_0;
struct IList_1_t36660;
extern TypeInfo IList_1_t36660_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36660_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36660_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36660_MethodInfos/* methods */
	, IList_1_t36660_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36660_il2cpp_TypeInfo/* element_class */
	, IList_1_t36660_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36660_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36660_0_0_0/* byval_arg */
	, &IList_1_t36660_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36660_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29164_il2cpp_TypeInfo;

// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>
extern MethodInfo IEnumerator_1_get_Current_m270762_MethodInfo;
static PropertyInfo IEnumerator_1_t29164____Current_PropertyInfo = 
{
	&IEnumerator_1_t29164_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m270762_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29164_PropertyInfos[] =
{
	&IEnumerator_1_t29164____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29164_il2cpp_TypeInfo;
extern Il2CppType Slot_t7866_0_0_0;
extern void* RuntimeInvoker_Slot_t7866 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
MethodInfo IEnumerator_1_get_Current_m270762_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29164_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t7866_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t7866/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29164_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m270762_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29164_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29164_0_0_0;
extern Il2CppType IEnumerator_1_t29164_1_0_0;
struct IEnumerator_1_t29164;
extern TypeInfo IEnumerator_1_t29164_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29164_GenericClass;
TypeInfo IEnumerator_1_t29164_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29164_MethodInfos/* methods */
	, IEnumerator_1_t29164_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29164_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29164_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29164_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29164_0_0_0/* byval_arg */
	, &IEnumerator_1_t29164_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29164_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2913.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2913MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo;
extern TypeInfo Slot_t7866_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179381_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t7866_m222169_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
 Slot_t7866  Array_InternalArray__get_Item_TisSlot_t7866_m222169 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t7866_m222169_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179376_MethodInfo;
 void InternalEnumerator_1__ctor_m179376 (InternalEnumerator_1_t24706 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179377_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179377 (InternalEnumerator_1_t24706 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179378_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179378 (InternalEnumerator_1_t24706 * __this, MethodInfo* method){
	{
		Slot_t7866  L_0 = InternalEnumerator_1_get_Current_m179381(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179381_MethodInfo);
		Slot_t7866  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Slot_t7866_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179379_MethodInfo;
 void InternalEnumerator_1_Dispose_m179379 (InternalEnumerator_1_t24706 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179380_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179380 (InternalEnumerator_1_t24706 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179381_MethodInfo;
 Slot_t7866  InternalEnumerator_1_get_Current_m179381 (InternalEnumerator_1_t24706 * __this, MethodInfo* method){
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
		Slot_t7866  L_8 = Array_InternalArray__get_Item_TisSlot_t7866_m222169(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSlot_t7866_m222169_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24706____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24706, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24706____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24706, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24706_FieldInfos[] =
{
	&InternalEnumerator_1_t24706____array_FieldInfo,
	&InternalEnumerator_1_t24706____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179378_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24706____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24706_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179378_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179381_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24706____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24706_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24706_PropertyInfos[] =
{
	&InternalEnumerator_1_t24706____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24706____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24706_InternalEnumerator_1__ctor_m179376_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179376_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179376/* method */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24706_InternalEnumerator_1__ctor_m179376_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179377_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179377/* method */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179378_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179378/* method */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179379_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179379/* method */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179380_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179380/* method */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo;
extern Il2CppType Slot_t7866_0_0_0;
extern void* RuntimeInvoker_Slot_t7866 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179381_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179381/* method */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t7866_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t7866/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24706_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179376_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179377_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179378_MethodInfo,
	&InternalEnumerator_1_Dispose_m179379_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179380_MethodInfo,
	&InternalEnumerator_1_get_Current_m179381_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179378_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179380_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179377_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179379_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179381_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24706_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179378_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179380_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179377_MethodInfo,
	&InternalEnumerator_1_Dispose_m179379_MethodInfo,
	&InternalEnumerator_1_get_Current_m179381_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29164_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24706_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29164_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29164_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24706_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29164_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24706_0_0_0;
extern Il2CppType InternalEnumerator_1_t24706_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24706_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24706_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24706_MethodInfos/* methods */
	, InternalEnumerator_1_t24706_PropertyInfos/* properties */
	, InternalEnumerator_1_t24706_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24706_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24706_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24706_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24706_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24706_1_0_0/* this_arg */
	, InternalEnumerator_1_t24706_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24706_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24706)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36662_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>
extern MethodInfo ICollection_1_get_Count_m270763_MethodInfo;
static PropertyInfo ICollection_1_t36662____Count_PropertyInfo = 
{
	&ICollection_1_t36662_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m270763_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m270764_MethodInfo;
static PropertyInfo ICollection_1_t36662____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36662_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m270764_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36662_PropertyInfos[] =
{
	&ICollection_1_t36662____Count_PropertyInfo,
	&ICollection_1_t36662____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36662_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
MethodInfo ICollection_1_get_Count_m270763_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36662_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36662_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m270764_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36662_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Slot_t7866_0_0_0;
static ParameterInfo ICollection_1_t36662_ICollection_1_Add_m270765_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t7866_0_0_0},
};
extern TypeInfo ICollection_1_t36662_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Slot_t7866 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
MethodInfo ICollection_1_Add_m270765_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36662_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Slot_t7866/* invoker_method */
	, ICollection_1_t36662_ICollection_1_Add_m270765_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36662_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
MethodInfo ICollection_1_Clear_m270766_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36662_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Slot_t7866_0_0_0;
static ParameterInfo ICollection_1_t36662_ICollection_1_Contains_m270767_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t7866_0_0_0},
};
extern TypeInfo ICollection_1_t36662_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Slot_t7866 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
MethodInfo ICollection_1_Contains_m270767_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36662_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Slot_t7866/* invoker_method */
	, ICollection_1_t36662_ICollection_1_Contains_m270767_ParameterInfos/* parameters */
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
extern Il2CppType SlotU5BU5D_t7873_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36662_ICollection_1_CopyTo_m270768_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SlotU5BU5D_t7873_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36662_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m270768_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36662_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36662_ICollection_1_CopyTo_m270768_ParameterInfos/* parameters */
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
extern Il2CppType Slot_t7866_0_0_0;
static ParameterInfo ICollection_1_t36662_ICollection_1_Remove_m270769_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t7866_0_0_0},
};
extern TypeInfo ICollection_1_t36662_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Slot_t7866 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
MethodInfo ICollection_1_Remove_m270769_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36662_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Slot_t7866/* invoker_method */
	, ICollection_1_t36662_ICollection_1_Remove_m270769_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36662_MethodInfos[] =
{
	&ICollection_1_get_Count_m270763_MethodInfo,
	&ICollection_1_get_IsReadOnly_m270764_MethodInfo,
	&ICollection_1_Add_m270765_MethodInfo,
	&ICollection_1_Clear_m270766_MethodInfo,
	&ICollection_1_Contains_m270767_MethodInfo,
	&ICollection_1_CopyTo_m270768_MethodInfo,
	&ICollection_1_Remove_m270769_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36664_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36662_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36664_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36662_0_0_0;
extern Il2CppType ICollection_1_t36662_1_0_0;
struct ICollection_1_t36662;
extern TypeInfo ICollection_1_t36662_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36662_GenericClass;
TypeInfo ICollection_1_t36662_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36662_MethodInfos/* methods */
	, ICollection_1_t36662_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36662_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36662_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36662_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36662_0_0_0/* byval_arg */
	, &ICollection_1_t36662_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36662_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36664_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>
extern TypeInfo IEnumerable_1_t36664_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29164_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m270770_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36664_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29164_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36664_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m270770_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36664_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36664_0_0_0;
extern Il2CppType IEnumerable_1_t36664_1_0_0;
struct IEnumerable_1_t36664;
extern TypeInfo IEnumerable_1_t36664_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36664_GenericClass;
TypeInfo IEnumerable_1_t36664_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36664_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36664_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36664_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36664_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36664_0_0_0/* byval_arg */
	, &IEnumerable_1_t36664_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36664_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
