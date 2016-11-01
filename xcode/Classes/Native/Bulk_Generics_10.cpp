#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<TBDragView>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_111.h"
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
extern TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBDragView>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_111MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// TBDragView
#include "AssemblyU2DCSharpU2Dfirstpass_TBDragView.h"
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
extern TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo;
extern TypeInfo TBDragView_t119_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m62099_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBDragView_t119_m182123_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m180549_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m180549(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<TBDragView>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBDragView>(System.Int32)
#define Array_InternalArray__get_Item_TisTBDragView_t119_m182123(__this, p0, method) (TBDragView_t119 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBDragView_t119_m182123_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBDragView>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBDragView>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBDragView>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBDragView>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBDragView>::MoveNext()
// T System.Array/InternalEnumerator`1<TBDragView>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBDragView>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9109____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9109, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9109____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9109, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9109_FieldInfos[] =
{
	&InternalEnumerator_1_t9109____array_FieldInfo,
	&InternalEnumerator_1_t9109____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62096_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9109____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9109_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62096_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62099_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9109____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9109_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62099_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9109_PropertyInfos[] =
{
	&InternalEnumerator_1_t9109____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9109____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9109_InternalEnumerator_1__ctor_m62094_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBDragView>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62094_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9109_InternalEnumerator_1__ctor_m62094_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBDragView>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62095_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBDragView>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62096_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBDragView>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62097_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBDragView>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62098_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo;
extern Il2CppType TBDragView_t119_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBDragView>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62099_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* declaring_type */
	, &TBDragView_t119_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9109_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62094_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62095_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62096_MethodInfo,
	&InternalEnumerator_1_Dispose_m62097_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62098_MethodInfo,
	&InternalEnumerator_1_get_Current_m62099_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62096_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62098_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62095_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62097_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62099_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9109_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62096_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62098_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62095_MethodInfo,
	&InternalEnumerator_1_Dispose_m62097_MethodInfo,
	&InternalEnumerator_1_get_Current_m62099_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26921_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9109_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26921_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26921_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9109_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26921_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62099_MethodInfo;
extern TypeInfo TBDragView_t119_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBDragView_t119_m182123_MethodInfo;
static void* InternalEnumerator_1_t9109_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62099_MethodInfo,
	&TBDragView_t119_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBDragView_t119_m182123_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9109_0_0_0;
extern Il2CppType InternalEnumerator_1_t9109_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9109_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9109_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9109_MethodInfos/* methods */
	, InternalEnumerator_1_t9109_PropertyInfos/* properties */
	, InternalEnumerator_1_t9109_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9109_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9109_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9109_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9109_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9109_1_0_0/* this_arg */
	, InternalEnumerator_1_t9109_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9109_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9109_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9109)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;

#include "Assembly-CSharp-firstpass_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<TBDragView>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBDragView>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBDragView>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBDragView>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBDragView>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBDragView>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBDragView>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBDragView>
extern MethodInfo ICollection_1_get_Count_m225610_MethodInfo;
static PropertyInfo ICollection_1_t29570____Count_PropertyInfo = 
{
	&ICollection_1_t29570_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225610_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225611_MethodInfo;
static PropertyInfo ICollection_1_t29570____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29570_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225611_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29570_PropertyInfos[] =
{
	&ICollection_1_t29570____Count_PropertyInfo,
	&ICollection_1_t29570____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBDragView>::get_Count()
MethodInfo ICollection_1_get_Count_m225610_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29570_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBDragView>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225611_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29570_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBDragView_t119_0_0_0;
static ParameterInfo ICollection_1_t29570_ICollection_1_Add_m225612_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBDragView_t119_0_0_0},
};
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBDragView>::Add(T)
MethodInfo ICollection_1_Add_m225612_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29570_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29570_ICollection_1_Add_m225612_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBDragView>::Clear()
MethodInfo ICollection_1_Clear_m225613_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29570_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBDragView_t119_0_0_0;
static ParameterInfo ICollection_1_t29570_ICollection_1_Contains_m225614_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBDragView_t119_0_0_0},
};
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBDragView>::Contains(T)
MethodInfo ICollection_1_Contains_m225614_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29570_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29570_ICollection_1_Contains_m225614_ParameterInfos/* parameters */
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
extern Il2CppType TBDragViewU5BU5D_t24942_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29570_ICollection_1_CopyTo_m225615_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBDragViewU5BU5D_t24942_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBDragView>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225615_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29570_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29570_ICollection_1_CopyTo_m225615_ParameterInfos/* parameters */
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
extern Il2CppType TBDragView_t119_0_0_0;
static ParameterInfo ICollection_1_t29570_ICollection_1_Remove_m225616_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBDragView_t119_0_0_0},
};
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBDragView>::Remove(T)
MethodInfo ICollection_1_Remove_m225616_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29570_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29570_ICollection_1_Remove_m225616_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29570_MethodInfos[] =
{
	&ICollection_1_get_Count_m225610_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225611_MethodInfo,
	&ICollection_1_Add_m225612_MethodInfo,
	&ICollection_1_Clear_m225613_MethodInfo,
	&ICollection_1_Contains_m225614_MethodInfo,
	&ICollection_1_CopyTo_m225615_MethodInfo,
	&ICollection_1_Remove_m225616_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29572_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29570_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29572_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29570_0_0_0;
extern Il2CppType ICollection_1_t29570_1_0_0;
struct ICollection_1_t29570;
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29570_GenericClass;
TypeInfo ICollection_1_t29570_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29570_MethodInfos/* methods */
	, ICollection_1_t29570_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29570_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29570_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29570_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29570_0_0_0/* byval_arg */
	, &ICollection_1_t29570_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29570_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29572_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBDragView>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBDragView>
extern TypeInfo IEnumerable_1_t29572_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26921_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBDragView>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225617_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29572_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26921_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29572_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225617_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29572_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29572_0_0_0;
extern Il2CppType IEnumerable_1_t29572_1_0_0;
struct IEnumerable_1_t29572;
extern TypeInfo IEnumerable_1_t29572_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29572_GenericClass;
TypeInfo IEnumerable_1_t29572_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29572_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29572_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29572_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29572_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29572_0_0_0/* byval_arg */
	, &IEnumerable_1_t29572_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29572_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29571_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBDragView>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBDragView>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBDragView>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBDragView>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBDragView>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBDragView>
extern MethodInfo IList_1_get_Item_m225618_MethodInfo;
extern MethodInfo IList_1_set_Item_m225619_MethodInfo;
static PropertyInfo IList_1_t29571____Item_PropertyInfo = 
{
	&IList_1_t29571_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225618_MethodInfo/* get */
	, &IList_1_set_Item_m225619_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29571_PropertyInfos[] =
{
	&IList_1_t29571____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBDragView_t119_0_0_0;
static ParameterInfo IList_1_t29571_IList_1_IndexOf_m225620_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBDragView_t119_0_0_0},
};
extern TypeInfo IList_1_t29571_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBDragView>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225620_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29571_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29571_IList_1_IndexOf_m225620_ParameterInfos/* parameters */
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
extern Il2CppType TBDragView_t119_0_0_0;
static ParameterInfo IList_1_t29571_IList_1_Insert_m225621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBDragView_t119_0_0_0},
};
extern TypeInfo IList_1_t29571_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBDragView>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225621_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29571_IList_1_Insert_m225621_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29571_IList_1_RemoveAt_m225622_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29571_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBDragView>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225622_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29571_IList_1_RemoveAt_m225622_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29571_IList_1_get_Item_m225618_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29571_il2cpp_TypeInfo;
extern Il2CppType TBDragView_t119_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBDragView>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225618_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29571_il2cpp_TypeInfo/* declaring_type */
	, &TBDragView_t119_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29571_IList_1_get_Item_m225618_ParameterInfos/* parameters */
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
extern Il2CppType TBDragView_t119_0_0_0;
static ParameterInfo IList_1_t29571_IList_1_set_Item_m225619_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBDragView_t119_0_0_0},
};
extern TypeInfo IList_1_t29571_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBDragView>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225619_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29571_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29571_IList_1_set_Item_m225619_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29571_MethodInfos[] =
{
	&IList_1_IndexOf_m225620_MethodInfo,
	&IList_1_Insert_m225621_MethodInfo,
	&IList_1_RemoveAt_m225622_MethodInfo,
	&IList_1_get_Item_m225618_MethodInfo,
	&IList_1_set_Item_m225619_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29570_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29572_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29571_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29570_il2cpp_TypeInfo,
	&IEnumerable_1_t29572_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29571_0_0_0;
extern Il2CppType IList_1_t29571_1_0_0;
struct IList_1_t29571;
extern TypeInfo IList_1_t29571_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29571_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29571_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29571_MethodInfos/* methods */
	, IList_1_t29571_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29571_il2cpp_TypeInfo/* element_class */
	, IList_1_t29571_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29571_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29571_0_0_0/* byval_arg */
	, &IList_1_t29571_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29571_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBDragView>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_29.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9110_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBDragView>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_29MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.InvokableCall`1<TBDragView>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_25.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9110_il2cpp_TypeInfo;
extern TypeInfo TBDragView_t119_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBDragView>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_25MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62102_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62104_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBDragView>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBDragView>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBDragView>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9110____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9110_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9110, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9110_FieldInfos[] =
{
	&CachedInvokableCall_1_t9110____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBDragView_t119_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9110_CachedInvokableCall_1__ctor_m62100_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBDragView_t119_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9110_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBDragView>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62100_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9110_CachedInvokableCall_1__ctor_m62100_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9110_CachedInvokableCall_1_Invoke_m62101_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9110_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBDragView>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62101_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9110_CachedInvokableCall_1_Invoke_m62101_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9110_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62100_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62101_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62101_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62105_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9110_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62101_MethodInfo,
	&InvokableCall_1_Find_m62105_MethodInfo,
};
extern Il2CppType UnityAction_1_t9112_0_0_0;
extern TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBDragView_t119_m182133_MethodInfo;
extern TypeInfo TBDragView_t119_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62107_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62102_MethodInfo;
extern TypeInfo TBDragView_t119_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62104_MethodInfo;
static void* CachedInvokableCall_1_t9110_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9112_0_0_0,
	&UnityAction_1_t9112_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBDragView_t119_m182133_MethodInfo,
	&TBDragView_t119_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62107_MethodInfo,
	&InvokableCall_1__ctor_m62102_MethodInfo,
	&TBDragView_t119_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62104_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9110_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9110_1_0_0;
extern TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9110;
extern TypeInfo CachedInvokableCall_1_t9110_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9110_GenericClass;
TypeInfo CachedInvokableCall_1_t9110_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9110_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9110_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9111_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9110_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9110_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9110_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9110_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9110_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9110_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9110_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9110)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBDragView>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_32.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBDragView_t119_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<TBDragView>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_32MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9112_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBDragView_t119_m182133_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62107_MethodInfo;
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
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBDragView>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBDragView>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBDragView_t119_m182133(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBDragView_t119_m182133_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBDragView>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBDragView>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBDragView>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBDragView>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBDragView>
extern Il2CppType UnityAction_1_t9112_0_0_1;
FieldInfo InvokableCall_1_t9111____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9112_0_0_1/* type */
	, &InvokableCall_1_t9111_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9111, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9111_FieldInfos[] =
{
	&InvokableCall_1_t9111____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9111_InvokableCall_1__ctor_m62102_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBDragView>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62102_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9111_InvokableCall_1__ctor_m62102_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9112_0_0_0;
static ParameterInfo InvokableCall_1_t9111_InvokableCall_1__ctor_m62103_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9112_0_0_0},
};
extern TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBDragView>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62103_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9111_InvokableCall_1__ctor_m62103_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9111_InvokableCall_1_Invoke_m62104_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBDragView>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62104_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9111_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9111_InvokableCall_1_Invoke_m62104_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9111_InvokableCall_1_Find_m62105_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBDragView>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62105_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9111_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9111_InvokableCall_1_Find_m62105_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9111_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62102_MethodInfo,
	&InvokableCall_1__ctor_m62103_MethodInfo,
	&InvokableCall_1_Invoke_m62104_MethodInfo,
	&InvokableCall_1_Find_m62105_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62104_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62105_MethodInfo;
static MethodInfo* InvokableCall_1_t9111_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62104_MethodInfo,
	&InvokableCall_1_Find_m62105_MethodInfo,
};
extern Il2CppType UnityAction_1_t9112_0_0_0;
extern TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBDragView_t119_m182133_MethodInfo;
extern TypeInfo TBDragView_t119_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62107_MethodInfo;
static void* InvokableCall_1_t9111_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9112_0_0_0,
	&UnityAction_1_t9112_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBDragView_t119_m182133_MethodInfo,
	&TBDragView_t119_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62107_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9111_0_0_0;
extern Il2CppType InvokableCall_1_t9111_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9111;
extern TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9111_GenericClass;
TypeInfo InvokableCall_1_t9111_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9111_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9111_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9111_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9111_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9111_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9111_0_0_0/* byval_arg */
	, &InvokableCall_1_t9111_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9111_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9111_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9111)/* instance_size */
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
extern TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo;

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<TBDragView>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBDragView>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBDragView>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBDragView>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBDragView>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9112_UnityAction_1__ctor_m62106_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBDragView>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62106_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9112_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9112_UnityAction_1__ctor_m62106_ParameterInfos/* parameters */
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
extern Il2CppType TBDragView_t119_0_0_0;
static ParameterInfo UnityAction_1_t9112_UnityAction_1_Invoke_m62107_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBDragView_t119_0_0_0},
};
extern TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBDragView>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62107_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9112_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9112_UnityAction_1_Invoke_m62107_ParameterInfos/* parameters */
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
extern Il2CppType TBDragView_t119_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9112_UnityAction_1_BeginInvoke_m62108_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBDragView_t119_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBDragView>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62108_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9112_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9112_UnityAction_1_BeginInvoke_m62108_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9112_UnityAction_1_EndInvoke_m62109_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBDragView>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62109_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9112_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9112_UnityAction_1_EndInvoke_m62109_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9112_MethodInfos[] =
{
	&UnityAction_1__ctor_m62106_MethodInfo,
	&UnityAction_1_Invoke_m62107_MethodInfo,
	&UnityAction_1_BeginInvoke_m62108_MethodInfo,
	&UnityAction_1_EndInvoke_m62109_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62107_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62108_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62109_MethodInfo;
static MethodInfo* UnityAction_1_t9112_VTable[] =
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
	&UnityAction_1_Invoke_m62107_MethodInfo,
	&UnityAction_1_BeginInvoke_m62108_MethodInfo,
	&UnityAction_1_EndInvoke_m62109_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9112_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9112_0_0_0;
extern Il2CppType UnityAction_1_t9112_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9112;
extern TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9112_GenericClass;
TypeInfo UnityAction_1_t9112_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9112_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9112_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9112_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9112_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9112_0_0_0/* byval_arg */
	, &UnityAction_1_t9112_1_0_0/* this_arg */
	, UnityAction_1_t9112_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9112_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9112)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26922_il2cpp_TypeInfo;

// TBLookAtTap
#include "AssemblyU2DCSharpU2Dfirstpass_TBLookAtTap.h"


// T System.Collections.Generic.IEnumerator`1<TBLookAtTap>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBLookAtTap>
extern MethodInfo IEnumerator_1_get_Current_m225623_MethodInfo;
static PropertyInfo IEnumerator_1_t26922____Current_PropertyInfo = 
{
	&IEnumerator_1_t26922_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225623_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26922_PropertyInfos[] =
{
	&IEnumerator_1_t26922____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26922_il2cpp_TypeInfo;
extern Il2CppType TBLookAtTap_t122_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBLookAtTap>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225623_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26922_il2cpp_TypeInfo/* declaring_type */
	, &TBLookAtTap_t122_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26922_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225623_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26922_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26922_0_0_0;
extern Il2CppType IEnumerator_1_t26922_1_0_0;
struct IEnumerator_1_t26922;
extern TypeInfo IEnumerator_1_t26922_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26922_GenericClass;
TypeInfo IEnumerator_1_t26922_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26922_MethodInfos/* methods */
	, IEnumerator_1_t26922_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26922_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26922_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26922_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26922_0_0_0/* byval_arg */
	, &IEnumerator_1_t26922_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26922_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBLookAtTap>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_112.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBLookAtTap>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_112MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo;
extern TypeInfo TBLookAtTap_t122_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62115_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBLookAtTap_t122_m182135_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBLookAtTap>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBLookAtTap>(System.Int32)
#define Array_InternalArray__get_Item_TisTBLookAtTap_t122_m182135(__this, p0, method) (TBLookAtTap_t122 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBLookAtTap_t122_m182135_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBLookAtTap>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBLookAtTap>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBLookAtTap>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBLookAtTap>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBLookAtTap>::MoveNext()
// T System.Array/InternalEnumerator`1<TBLookAtTap>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBLookAtTap>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9113____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9113, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9113____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9113, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9113_FieldInfos[] =
{
	&InternalEnumerator_1_t9113____array_FieldInfo,
	&InternalEnumerator_1_t9113____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62112_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9113____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9113_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62112_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62115_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9113____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9113_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9113_PropertyInfos[] =
{
	&InternalEnumerator_1_t9113____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9113____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9113_InternalEnumerator_1__ctor_m62110_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBLookAtTap>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62110_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9113_InternalEnumerator_1__ctor_m62110_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBLookAtTap>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62111_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBLookAtTap>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62112_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBLookAtTap>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62113_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBLookAtTap>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62114_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo;
extern Il2CppType TBLookAtTap_t122_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBLookAtTap>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62115_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* declaring_type */
	, &TBLookAtTap_t122_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9113_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62110_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62111_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62112_MethodInfo,
	&InternalEnumerator_1_Dispose_m62113_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62114_MethodInfo,
	&InternalEnumerator_1_get_Current_m62115_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62112_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62114_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62111_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62113_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62115_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9113_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62112_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62114_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62111_MethodInfo,
	&InternalEnumerator_1_Dispose_m62113_MethodInfo,
	&InternalEnumerator_1_get_Current_m62115_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26922_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9113_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26922_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26922_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9113_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26922_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62115_MethodInfo;
extern TypeInfo TBLookAtTap_t122_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBLookAtTap_t122_m182135_MethodInfo;
static void* InternalEnumerator_1_t9113_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62115_MethodInfo,
	&TBLookAtTap_t122_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBLookAtTap_t122_m182135_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9113_0_0_0;
extern Il2CppType InternalEnumerator_1_t9113_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9113_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9113_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9113_MethodInfos/* methods */
	, InternalEnumerator_1_t9113_PropertyInfos/* properties */
	, InternalEnumerator_1_t9113_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9113_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9113_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9113_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9113_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9113_1_0_0/* this_arg */
	, InternalEnumerator_1_t9113_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9113_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9113_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9113)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBLookAtTap>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBLookAtTap>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBLookAtTap>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBLookAtTap>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBLookAtTap>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBLookAtTap>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBLookAtTap>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBLookAtTap>
extern MethodInfo ICollection_1_get_Count_m225624_MethodInfo;
static PropertyInfo ICollection_1_t29573____Count_PropertyInfo = 
{
	&ICollection_1_t29573_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225624_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225625_MethodInfo;
static PropertyInfo ICollection_1_t29573____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29573_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225625_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29573_PropertyInfos[] =
{
	&ICollection_1_t29573____Count_PropertyInfo,
	&ICollection_1_t29573____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBLookAtTap>::get_Count()
MethodInfo ICollection_1_get_Count_m225624_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29573_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBLookAtTap>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225625_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29573_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBLookAtTap_t122_0_0_0;
static ParameterInfo ICollection_1_t29573_ICollection_1_Add_m225626_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBLookAtTap_t122_0_0_0},
};
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBLookAtTap>::Add(T)
MethodInfo ICollection_1_Add_m225626_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29573_ICollection_1_Add_m225626_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBLookAtTap>::Clear()
MethodInfo ICollection_1_Clear_m225627_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29573_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBLookAtTap_t122_0_0_0;
static ParameterInfo ICollection_1_t29573_ICollection_1_Contains_m225628_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBLookAtTap_t122_0_0_0},
};
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBLookAtTap>::Contains(T)
MethodInfo ICollection_1_Contains_m225628_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29573_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29573_ICollection_1_Contains_m225628_ParameterInfos/* parameters */
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
extern Il2CppType TBLookAtTapU5BU5D_t24943_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29573_ICollection_1_CopyTo_m225629_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBLookAtTapU5BU5D_t24943_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBLookAtTap>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225629_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29573_ICollection_1_CopyTo_m225629_ParameterInfos/* parameters */
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
extern Il2CppType TBLookAtTap_t122_0_0_0;
static ParameterInfo ICollection_1_t29573_ICollection_1_Remove_m225630_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBLookAtTap_t122_0_0_0},
};
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBLookAtTap>::Remove(T)
MethodInfo ICollection_1_Remove_m225630_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29573_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29573_ICollection_1_Remove_m225630_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29573_MethodInfos[] =
{
	&ICollection_1_get_Count_m225624_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225625_MethodInfo,
	&ICollection_1_Add_m225626_MethodInfo,
	&ICollection_1_Clear_m225627_MethodInfo,
	&ICollection_1_Contains_m225628_MethodInfo,
	&ICollection_1_CopyTo_m225629_MethodInfo,
	&ICollection_1_Remove_m225630_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29575_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29573_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29575_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29573_0_0_0;
extern Il2CppType ICollection_1_t29573_1_0_0;
struct ICollection_1_t29573;
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29573_GenericClass;
TypeInfo ICollection_1_t29573_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29573_MethodInfos/* methods */
	, ICollection_1_t29573_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29573_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29573_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29573_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29573_0_0_0/* byval_arg */
	, &ICollection_1_t29573_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29573_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29575_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBLookAtTap>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBLookAtTap>
extern TypeInfo IEnumerable_1_t29575_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26922_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBLookAtTap>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225631_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29575_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26922_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29575_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225631_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29575_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29575_0_0_0;
extern Il2CppType IEnumerable_1_t29575_1_0_0;
struct IEnumerable_1_t29575;
extern TypeInfo IEnumerable_1_t29575_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29575_GenericClass;
TypeInfo IEnumerable_1_t29575_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29575_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29575_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29575_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29575_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29575_0_0_0/* byval_arg */
	, &IEnumerable_1_t29575_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29575_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29574_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBLookAtTap>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBLookAtTap>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBLookAtTap>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBLookAtTap>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBLookAtTap>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBLookAtTap>
extern MethodInfo IList_1_get_Item_m225632_MethodInfo;
extern MethodInfo IList_1_set_Item_m225633_MethodInfo;
static PropertyInfo IList_1_t29574____Item_PropertyInfo = 
{
	&IList_1_t29574_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225632_MethodInfo/* get */
	, &IList_1_set_Item_m225633_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29574_PropertyInfos[] =
{
	&IList_1_t29574____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBLookAtTap_t122_0_0_0;
static ParameterInfo IList_1_t29574_IList_1_IndexOf_m225634_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBLookAtTap_t122_0_0_0},
};
extern TypeInfo IList_1_t29574_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBLookAtTap>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225634_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29574_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29574_IList_1_IndexOf_m225634_ParameterInfos/* parameters */
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
extern Il2CppType TBLookAtTap_t122_0_0_0;
static ParameterInfo IList_1_t29574_IList_1_Insert_m225635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBLookAtTap_t122_0_0_0},
};
extern TypeInfo IList_1_t29574_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBLookAtTap>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225635_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29574_IList_1_Insert_m225635_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29574_IList_1_RemoveAt_m225636_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29574_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBLookAtTap>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225636_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29574_IList_1_RemoveAt_m225636_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29574_IList_1_get_Item_m225632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29574_il2cpp_TypeInfo;
extern Il2CppType TBLookAtTap_t122_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBLookAtTap>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225632_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29574_il2cpp_TypeInfo/* declaring_type */
	, &TBLookAtTap_t122_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29574_IList_1_get_Item_m225632_ParameterInfos/* parameters */
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
extern Il2CppType TBLookAtTap_t122_0_0_0;
static ParameterInfo IList_1_t29574_IList_1_set_Item_m225633_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBLookAtTap_t122_0_0_0},
};
extern TypeInfo IList_1_t29574_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBLookAtTap>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225633_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29574_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29574_IList_1_set_Item_m225633_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29574_MethodInfos[] =
{
	&IList_1_IndexOf_m225634_MethodInfo,
	&IList_1_Insert_m225635_MethodInfo,
	&IList_1_RemoveAt_m225636_MethodInfo,
	&IList_1_get_Item_m225632_MethodInfo,
	&IList_1_set_Item_m225633_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29573_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29575_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29574_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29573_il2cpp_TypeInfo,
	&IEnumerable_1_t29575_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29574_0_0_0;
extern Il2CppType IList_1_t29574_1_0_0;
struct IList_1_t29574;
extern TypeInfo IList_1_t29574_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29574_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29574_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29574_MethodInfos/* methods */
	, IList_1_t29574_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29574_il2cpp_TypeInfo/* element_class */
	, IList_1_t29574_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29574_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29574_0_0_0/* byval_arg */
	, &IList_1_t29574_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29574_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBLookAtTap>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_30.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9114_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBLookAtTap>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_30MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBLookAtTap>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_26.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9114_il2cpp_TypeInfo;
extern TypeInfo TBLookAtTap_t122_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBLookAtTap>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_26MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62118_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62120_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBLookAtTap>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBLookAtTap>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBLookAtTap>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9114____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9114_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9114, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9114_FieldInfos[] =
{
	&CachedInvokableCall_1_t9114____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBLookAtTap_t122_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9114_CachedInvokableCall_1__ctor_m62116_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBLookAtTap_t122_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9114_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBLookAtTap>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62116_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9114_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9114_CachedInvokableCall_1__ctor_m62116_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9114_CachedInvokableCall_1_Invoke_m62117_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9114_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBLookAtTap>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62117_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9114_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9114_CachedInvokableCall_1_Invoke_m62117_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9114_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62116_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62117_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62117_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62121_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9114_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62117_MethodInfo,
	&InvokableCall_1_Find_m62121_MethodInfo,
};
extern Il2CppType UnityAction_1_t9116_0_0_0;
extern TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBLookAtTap_t122_m182145_MethodInfo;
extern TypeInfo TBLookAtTap_t122_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62123_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62118_MethodInfo;
extern TypeInfo TBLookAtTap_t122_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62120_MethodInfo;
static void* CachedInvokableCall_1_t9114_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9116_0_0_0,
	&UnityAction_1_t9116_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBLookAtTap_t122_m182145_MethodInfo,
	&TBLookAtTap_t122_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62123_MethodInfo,
	&InvokableCall_1__ctor_m62118_MethodInfo,
	&TBLookAtTap_t122_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62120_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9114_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9114_1_0_0;
extern TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9114;
extern TypeInfo CachedInvokableCall_1_t9114_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9114_GenericClass;
TypeInfo CachedInvokableCall_1_t9114_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9114_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9114_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9115_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9114_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9114_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9114_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9114_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9114_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9114_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9114_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9114)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBLookAtTap>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_33.h"
extern TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBLookAtTap_t122_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TBLookAtTap>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_33MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9116_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBLookAtTap_t122_m182145_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62123_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBLookAtTap>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBLookAtTap>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBLookAtTap_t122_m182145(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBLookAtTap_t122_m182145_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBLookAtTap>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBLookAtTap>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBLookAtTap>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBLookAtTap>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBLookAtTap>
extern Il2CppType UnityAction_1_t9116_0_0_1;
FieldInfo InvokableCall_1_t9115____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9116_0_0_1/* type */
	, &InvokableCall_1_t9115_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9115, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9115_FieldInfos[] =
{
	&InvokableCall_1_t9115____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9115_InvokableCall_1__ctor_m62118_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBLookAtTap>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62118_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9115_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9115_InvokableCall_1__ctor_m62118_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9116_0_0_0;
static ParameterInfo InvokableCall_1_t9115_InvokableCall_1__ctor_m62119_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9116_0_0_0},
};
extern TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBLookAtTap>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62119_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9115_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9115_InvokableCall_1__ctor_m62119_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9115_InvokableCall_1_Invoke_m62120_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBLookAtTap>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62120_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9115_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9115_InvokableCall_1_Invoke_m62120_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9115_InvokableCall_1_Find_m62121_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBLookAtTap>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62121_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9115_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9115_InvokableCall_1_Find_m62121_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9115_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62118_MethodInfo,
	&InvokableCall_1__ctor_m62119_MethodInfo,
	&InvokableCall_1_Invoke_m62120_MethodInfo,
	&InvokableCall_1_Find_m62121_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62120_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62121_MethodInfo;
static MethodInfo* InvokableCall_1_t9115_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62120_MethodInfo,
	&InvokableCall_1_Find_m62121_MethodInfo,
};
extern Il2CppType UnityAction_1_t9116_0_0_0;
extern TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBLookAtTap_t122_m182145_MethodInfo;
extern TypeInfo TBLookAtTap_t122_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62123_MethodInfo;
static void* InvokableCall_1_t9115_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9116_0_0_0,
	&UnityAction_1_t9116_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBLookAtTap_t122_m182145_MethodInfo,
	&TBLookAtTap_t122_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62123_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9115_0_0_0;
extern Il2CppType InvokableCall_1_t9115_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9115;
extern TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9115_GenericClass;
TypeInfo InvokableCall_1_t9115_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9115_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9115_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9115_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9115_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9115_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9115_0_0_0/* byval_arg */
	, &InvokableCall_1_t9115_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9115_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9115_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9115)/* instance_size */
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
extern TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TBLookAtTap>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBLookAtTap>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBLookAtTap>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBLookAtTap>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBLookAtTap>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9116_UnityAction_1__ctor_m62122_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBLookAtTap>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62122_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9116_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9116_UnityAction_1__ctor_m62122_ParameterInfos/* parameters */
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
extern Il2CppType TBLookAtTap_t122_0_0_0;
static ParameterInfo UnityAction_1_t9116_UnityAction_1_Invoke_m62123_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBLookAtTap_t122_0_0_0},
};
extern TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBLookAtTap>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62123_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9116_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9116_UnityAction_1_Invoke_m62123_ParameterInfos/* parameters */
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
extern Il2CppType TBLookAtTap_t122_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9116_UnityAction_1_BeginInvoke_m62124_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBLookAtTap_t122_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBLookAtTap>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62124_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9116_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9116_UnityAction_1_BeginInvoke_m62124_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9116_UnityAction_1_EndInvoke_m62125_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBLookAtTap>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62125_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9116_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9116_UnityAction_1_EndInvoke_m62125_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9116_MethodInfos[] =
{
	&UnityAction_1__ctor_m62122_MethodInfo,
	&UnityAction_1_Invoke_m62123_MethodInfo,
	&UnityAction_1_BeginInvoke_m62124_MethodInfo,
	&UnityAction_1_EndInvoke_m62125_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62123_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62124_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62125_MethodInfo;
static MethodInfo* UnityAction_1_t9116_VTable[] =
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
	&UnityAction_1_Invoke_m62123_MethodInfo,
	&UnityAction_1_BeginInvoke_m62124_MethodInfo,
	&UnityAction_1_EndInvoke_m62125_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9116_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9116_0_0_0;
extern Il2CppType UnityAction_1_t9116_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9116;
extern TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9116_GenericClass;
TypeInfo UnityAction_1_t9116_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9116_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9116_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9116_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9116_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9116_0_0_0/* byval_arg */
	, &UnityAction_1_t9116_1_0_0/* this_arg */
	, UnityAction_1_t9116_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9116_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9116)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26923_il2cpp_TypeInfo;

// TBOrbit
#include "AssemblyU2DCSharpU2Dfirstpass_TBOrbit.h"


// T System.Collections.Generic.IEnumerator`1<TBOrbit>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBOrbit>
extern MethodInfo IEnumerator_1_get_Current_m225637_MethodInfo;
static PropertyInfo IEnumerator_1_t26923____Current_PropertyInfo = 
{
	&IEnumerator_1_t26923_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225637_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26923_PropertyInfos[] =
{
	&IEnumerator_1_t26923____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26923_il2cpp_TypeInfo;
extern Il2CppType TBOrbit_t125_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBOrbit>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225637_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26923_il2cpp_TypeInfo/* declaring_type */
	, &TBOrbit_t125_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26923_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225637_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26923_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26923_0_0_0;
extern Il2CppType IEnumerator_1_t26923_1_0_0;
struct IEnumerator_1_t26923;
extern TypeInfo IEnumerator_1_t26923_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26923_GenericClass;
TypeInfo IEnumerator_1_t26923_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26923_MethodInfos/* methods */
	, IEnumerator_1_t26923_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26923_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26923_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26923_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26923_0_0_0/* byval_arg */
	, &IEnumerator_1_t26923_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26923_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBOrbit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_113.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBOrbit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_113MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo;
extern TypeInfo TBOrbit_t125_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62131_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBOrbit_t125_m182147_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBOrbit>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBOrbit>(System.Int32)
#define Array_InternalArray__get_Item_TisTBOrbit_t125_m182147(__this, p0, method) (TBOrbit_t125 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBOrbit_t125_m182147_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBOrbit>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBOrbit>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBOrbit>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBOrbit>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBOrbit>::MoveNext()
// T System.Array/InternalEnumerator`1<TBOrbit>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBOrbit>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9117____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9117, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9117____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9117, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9117_FieldInfos[] =
{
	&InternalEnumerator_1_t9117____array_FieldInfo,
	&InternalEnumerator_1_t9117____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62128_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9117____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9117_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62128_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62131_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9117____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9117_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62131_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9117_PropertyInfos[] =
{
	&InternalEnumerator_1_t9117____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9117____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9117_InternalEnumerator_1__ctor_m62126_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBOrbit>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62126_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9117_InternalEnumerator_1__ctor_m62126_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBOrbit>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62127_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBOrbit>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62128_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBOrbit>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62129_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBOrbit>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62130_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo;
extern Il2CppType TBOrbit_t125_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBOrbit>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62131_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* declaring_type */
	, &TBOrbit_t125_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9117_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62126_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62127_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62128_MethodInfo,
	&InternalEnumerator_1_Dispose_m62129_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62130_MethodInfo,
	&InternalEnumerator_1_get_Current_m62131_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62128_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62130_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62127_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62129_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62131_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9117_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62128_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62130_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62127_MethodInfo,
	&InternalEnumerator_1_Dispose_m62129_MethodInfo,
	&InternalEnumerator_1_get_Current_m62131_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26923_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9117_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26923_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26923_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9117_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26923_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62131_MethodInfo;
extern TypeInfo TBOrbit_t125_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBOrbit_t125_m182147_MethodInfo;
static void* InternalEnumerator_1_t9117_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62131_MethodInfo,
	&TBOrbit_t125_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBOrbit_t125_m182147_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9117_0_0_0;
extern Il2CppType InternalEnumerator_1_t9117_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9117_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9117_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9117_MethodInfos/* methods */
	, InternalEnumerator_1_t9117_PropertyInfos/* properties */
	, InternalEnumerator_1_t9117_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9117_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9117_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9117_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9117_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9117_1_0_0/* this_arg */
	, InternalEnumerator_1_t9117_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9117_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9117_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9117)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBOrbit>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBOrbit>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBOrbit>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBOrbit>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBOrbit>
extern MethodInfo ICollection_1_get_Count_m225638_MethodInfo;
static PropertyInfo ICollection_1_t29576____Count_PropertyInfo = 
{
	&ICollection_1_t29576_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225638_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225639_MethodInfo;
static PropertyInfo ICollection_1_t29576____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29576_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225639_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29576_PropertyInfos[] =
{
	&ICollection_1_t29576____Count_PropertyInfo,
	&ICollection_1_t29576____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBOrbit>::get_Count()
MethodInfo ICollection_1_get_Count_m225638_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29576_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225639_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29576_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBOrbit_t125_0_0_0;
static ParameterInfo ICollection_1_t29576_ICollection_1_Add_m225640_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBOrbit_t125_0_0_0},
};
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBOrbit>::Add(T)
MethodInfo ICollection_1_Add_m225640_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29576_ICollection_1_Add_m225640_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBOrbit>::Clear()
MethodInfo ICollection_1_Clear_m225641_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29576_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBOrbit_t125_0_0_0;
static ParameterInfo ICollection_1_t29576_ICollection_1_Contains_m225642_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBOrbit_t125_0_0_0},
};
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit>::Contains(T)
MethodInfo ICollection_1_Contains_m225642_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29576_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29576_ICollection_1_Contains_m225642_ParameterInfos/* parameters */
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
extern Il2CppType TBOrbitU5BU5D_t24944_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29576_ICollection_1_CopyTo_m225643_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBOrbitU5BU5D_t24944_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBOrbit>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225643_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29576_ICollection_1_CopyTo_m225643_ParameterInfos/* parameters */
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
extern Il2CppType TBOrbit_t125_0_0_0;
static ParameterInfo ICollection_1_t29576_ICollection_1_Remove_m225644_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBOrbit_t125_0_0_0},
};
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit>::Remove(T)
MethodInfo ICollection_1_Remove_m225644_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29576_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29576_ICollection_1_Remove_m225644_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29576_MethodInfos[] =
{
	&ICollection_1_get_Count_m225638_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225639_MethodInfo,
	&ICollection_1_Add_m225640_MethodInfo,
	&ICollection_1_Clear_m225641_MethodInfo,
	&ICollection_1_Contains_m225642_MethodInfo,
	&ICollection_1_CopyTo_m225643_MethodInfo,
	&ICollection_1_Remove_m225644_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29578_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29576_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29578_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29576_0_0_0;
extern Il2CppType ICollection_1_t29576_1_0_0;
struct ICollection_1_t29576;
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29576_GenericClass;
TypeInfo ICollection_1_t29576_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29576_MethodInfos/* methods */
	, ICollection_1_t29576_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29576_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29576_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29576_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29576_0_0_0/* byval_arg */
	, &ICollection_1_t29576_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29576_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29578_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBOrbit>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBOrbit>
extern TypeInfo IEnumerable_1_t29578_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26923_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBOrbit>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225645_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29578_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26923_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29578_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225645_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29578_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29578_0_0_0;
extern Il2CppType IEnumerable_1_t29578_1_0_0;
struct IEnumerable_1_t29578;
extern TypeInfo IEnumerable_1_t29578_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29578_GenericClass;
TypeInfo IEnumerable_1_t29578_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29578_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29578_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29578_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29578_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29578_0_0_0/* byval_arg */
	, &IEnumerable_1_t29578_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29578_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29577_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBOrbit>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBOrbit>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBOrbit>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBOrbit>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBOrbit>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBOrbit>
extern MethodInfo IList_1_get_Item_m225646_MethodInfo;
extern MethodInfo IList_1_set_Item_m225647_MethodInfo;
static PropertyInfo IList_1_t29577____Item_PropertyInfo = 
{
	&IList_1_t29577_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225646_MethodInfo/* get */
	, &IList_1_set_Item_m225647_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29577_PropertyInfos[] =
{
	&IList_1_t29577____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBOrbit_t125_0_0_0;
static ParameterInfo IList_1_t29577_IList_1_IndexOf_m225648_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBOrbit_t125_0_0_0},
};
extern TypeInfo IList_1_t29577_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBOrbit>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225648_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29577_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29577_IList_1_IndexOf_m225648_ParameterInfos/* parameters */
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
extern Il2CppType TBOrbit_t125_0_0_0;
static ParameterInfo IList_1_t29577_IList_1_Insert_m225649_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBOrbit_t125_0_0_0},
};
extern TypeInfo IList_1_t29577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBOrbit>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225649_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29577_IList_1_Insert_m225649_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29577_IList_1_RemoveAt_m225650_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBOrbit>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225650_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29577_IList_1_RemoveAt_m225650_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29577_IList_1_get_Item_m225646_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29577_il2cpp_TypeInfo;
extern Il2CppType TBOrbit_t125_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBOrbit>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225646_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29577_il2cpp_TypeInfo/* declaring_type */
	, &TBOrbit_t125_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29577_IList_1_get_Item_m225646_ParameterInfos/* parameters */
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
extern Il2CppType TBOrbit_t125_0_0_0;
static ParameterInfo IList_1_t29577_IList_1_set_Item_m225647_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBOrbit_t125_0_0_0},
};
extern TypeInfo IList_1_t29577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBOrbit>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225647_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29577_IList_1_set_Item_m225647_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29577_MethodInfos[] =
{
	&IList_1_IndexOf_m225648_MethodInfo,
	&IList_1_Insert_m225649_MethodInfo,
	&IList_1_RemoveAt_m225650_MethodInfo,
	&IList_1_get_Item_m225646_MethodInfo,
	&IList_1_set_Item_m225647_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29576_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29578_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29577_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29576_il2cpp_TypeInfo,
	&IEnumerable_1_t29578_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29577_0_0_0;
extern Il2CppType IList_1_t29577_1_0_0;
struct IList_1_t29577;
extern TypeInfo IList_1_t29577_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29577_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29577_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29577_MethodInfos/* methods */
	, IList_1_t29577_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29577_il2cpp_TypeInfo/* element_class */
	, IList_1_t29577_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29577_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29577_0_0_0/* byval_arg */
	, &IList_1_t29577_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29577_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBOrbit>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_31.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9118_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBOrbit>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_31MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBOrbit>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_27.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9118_il2cpp_TypeInfo;
extern TypeInfo TBOrbit_t125_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBOrbit>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_27MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62134_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62136_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBOrbit>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBOrbit>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBOrbit>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9118____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9118_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9118, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9118_FieldInfos[] =
{
	&CachedInvokableCall_1_t9118____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBOrbit_t125_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9118_CachedInvokableCall_1__ctor_m62132_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBOrbit_t125_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9118_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBOrbit>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62132_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9118_CachedInvokableCall_1__ctor_m62132_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9118_CachedInvokableCall_1_Invoke_m62133_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9118_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBOrbit>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62133_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9118_CachedInvokableCall_1_Invoke_m62133_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9118_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62132_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62133_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62133_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62137_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9118_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62133_MethodInfo,
	&InvokableCall_1_Find_m62137_MethodInfo,
};
extern Il2CppType UnityAction_1_t9120_0_0_0;
extern TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBOrbit_t125_m182157_MethodInfo;
extern TypeInfo TBOrbit_t125_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62139_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62134_MethodInfo;
extern TypeInfo TBOrbit_t125_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62136_MethodInfo;
static void* CachedInvokableCall_1_t9118_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9120_0_0_0,
	&UnityAction_1_t9120_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBOrbit_t125_m182157_MethodInfo,
	&TBOrbit_t125_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62139_MethodInfo,
	&InvokableCall_1__ctor_m62134_MethodInfo,
	&TBOrbit_t125_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62136_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9118_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9118_1_0_0;
extern TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9118;
extern TypeInfo CachedInvokableCall_1_t9118_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9118_GenericClass;
TypeInfo CachedInvokableCall_1_t9118_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9118_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9118_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9119_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9118_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9118_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9118_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9118_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9118_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9118_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9118_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9118)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBOrbit>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_34.h"
extern TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBOrbit_t125_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TBOrbit>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_34MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9120_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBOrbit_t125_m182157_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62139_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBOrbit>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBOrbit>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBOrbit_t125_m182157(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBOrbit_t125_m182157_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBOrbit>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBOrbit>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBOrbit>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBOrbit>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBOrbit>
extern Il2CppType UnityAction_1_t9120_0_0_1;
FieldInfo InvokableCall_1_t9119____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9120_0_0_1/* type */
	, &InvokableCall_1_t9119_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9119, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9119_FieldInfos[] =
{
	&InvokableCall_1_t9119____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9119_InvokableCall_1__ctor_m62134_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBOrbit>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62134_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9119_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9119_InvokableCall_1__ctor_m62134_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9120_0_0_0;
static ParameterInfo InvokableCall_1_t9119_InvokableCall_1__ctor_m62135_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9120_0_0_0},
};
extern TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBOrbit>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62135_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9119_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9119_InvokableCall_1__ctor_m62135_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9119_InvokableCall_1_Invoke_m62136_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBOrbit>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62136_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9119_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9119_InvokableCall_1_Invoke_m62136_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9119_InvokableCall_1_Find_m62137_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBOrbit>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62137_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9119_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9119_InvokableCall_1_Find_m62137_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9119_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62134_MethodInfo,
	&InvokableCall_1__ctor_m62135_MethodInfo,
	&InvokableCall_1_Invoke_m62136_MethodInfo,
	&InvokableCall_1_Find_m62137_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62136_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62137_MethodInfo;
static MethodInfo* InvokableCall_1_t9119_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62136_MethodInfo,
	&InvokableCall_1_Find_m62137_MethodInfo,
};
extern Il2CppType UnityAction_1_t9120_0_0_0;
extern TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBOrbit_t125_m182157_MethodInfo;
extern TypeInfo TBOrbit_t125_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62139_MethodInfo;
static void* InvokableCall_1_t9119_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9120_0_0_0,
	&UnityAction_1_t9120_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBOrbit_t125_m182157_MethodInfo,
	&TBOrbit_t125_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62139_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9119_0_0_0;
extern Il2CppType InvokableCall_1_t9119_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9119;
extern TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9119_GenericClass;
TypeInfo InvokableCall_1_t9119_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9119_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9119_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9119_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9119_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9119_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9119_0_0_0/* byval_arg */
	, &InvokableCall_1_t9119_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9119_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9119_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9119)/* instance_size */
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
extern TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TBOrbit>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBOrbit>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBOrbit>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBOrbit>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBOrbit>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9120_UnityAction_1__ctor_m62138_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBOrbit>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62138_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9120_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9120_UnityAction_1__ctor_m62138_ParameterInfos/* parameters */
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
extern Il2CppType TBOrbit_t125_0_0_0;
static ParameterInfo UnityAction_1_t9120_UnityAction_1_Invoke_m62139_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBOrbit_t125_0_0_0},
};
extern TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBOrbit>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62139_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9120_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9120_UnityAction_1_Invoke_m62139_ParameterInfos/* parameters */
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
extern Il2CppType TBOrbit_t125_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9120_UnityAction_1_BeginInvoke_m62140_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBOrbit_t125_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBOrbit>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62140_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9120_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9120_UnityAction_1_BeginInvoke_m62140_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9120_UnityAction_1_EndInvoke_m62141_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBOrbit>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62141_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9120_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9120_UnityAction_1_EndInvoke_m62141_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9120_MethodInfos[] =
{
	&UnityAction_1__ctor_m62138_MethodInfo,
	&UnityAction_1_Invoke_m62139_MethodInfo,
	&UnityAction_1_BeginInvoke_m62140_MethodInfo,
	&UnityAction_1_EndInvoke_m62141_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62139_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62140_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62141_MethodInfo;
static MethodInfo* UnityAction_1_t9120_VTable[] =
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
	&UnityAction_1_Invoke_m62139_MethodInfo,
	&UnityAction_1_BeginInvoke_m62140_MethodInfo,
	&UnityAction_1_EndInvoke_m62141_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9120_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9120_0_0_0;
extern Il2CppType UnityAction_1_t9120_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9120;
extern TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9120_GenericClass;
TypeInfo UnityAction_1_t9120_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9120_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9120_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9120_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9120_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9120_0_0_0/* byval_arg */
	, &UnityAction_1_t9120_1_0_0/* this_arg */
	, UnityAction_1_t9120_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9120_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9120)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26924_il2cpp_TypeInfo;

// TBOrbit/PanMode
#include "AssemblyU2DCSharpU2Dfirstpass_TBOrbit_PanMode.h"


// T System.Collections.Generic.IEnumerator`1<TBOrbit/PanMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBOrbit/PanMode>
extern MethodInfo IEnumerator_1_get_Current_m225651_MethodInfo;
static PropertyInfo IEnumerator_1_t26924____Current_PropertyInfo = 
{
	&IEnumerator_1_t26924_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225651_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26924_PropertyInfos[] =
{
	&IEnumerator_1_t26924____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26924_il2cpp_TypeInfo;
extern Il2CppType PanMode_t123_0_0_0;
extern void* RuntimeInvoker_PanMode_t123 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBOrbit/PanMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225651_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26924_il2cpp_TypeInfo/* declaring_type */
	, &PanMode_t123_0_0_0/* return_type */
	, RuntimeInvoker_PanMode_t123/* invoker_method */
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
static MethodInfo* IEnumerator_1_t26924_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225651_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26924_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26924_0_0_0;
extern Il2CppType IEnumerator_1_t26924_1_0_0;
struct IEnumerator_1_t26924;
extern TypeInfo IEnumerator_1_t26924_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26924_GenericClass;
TypeInfo IEnumerator_1_t26924_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26924_MethodInfos/* methods */
	, IEnumerator_1_t26924_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26924_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26924_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26924_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26924_0_0_0/* byval_arg */
	, &IEnumerator_1_t26924_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26924_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBOrbit/PanMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_114.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBOrbit/PanMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_114MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo;
extern TypeInfo PanMode_t123_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62147_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPanMode_t123_m182159_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBOrbit/PanMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBOrbit/PanMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPanMode_t123_m182159 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisPanMode_t123_m182159_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBOrbit/PanMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m62142_MethodInfo;
 void InternalEnumerator_1__ctor_m62142 (InternalEnumerator_1_t9121 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<TBOrbit/PanMode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62143_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62143 (InternalEnumerator_1_t9121 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<TBOrbit/PanMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62144_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62144 (InternalEnumerator_1_t9121 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m62147(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m62147_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PanMode_t123_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<TBOrbit/PanMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m62145_MethodInfo;
 void InternalEnumerator_1_Dispose_m62145 (InternalEnumerator_1_t9121 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<TBOrbit/PanMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m62146_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m62146 (InternalEnumerator_1_t9121 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<TBOrbit/PanMode>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m62147_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m62147 (InternalEnumerator_1_t9121 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPanMode_t123_m182159(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPanMode_t123_m182159_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<TBOrbit/PanMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9121____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9121, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9121____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9121, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9121_FieldInfos[] =
{
	&InternalEnumerator_1_t9121____array_FieldInfo,
	&InternalEnumerator_1_t9121____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62144_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9121____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9121_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62144_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62147_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9121____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9121_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62147_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9121_PropertyInfos[] =
{
	&InternalEnumerator_1_t9121____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9121____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9121_InternalEnumerator_1__ctor_m62142_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBOrbit/PanMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62142_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m62142/* method */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9121_InternalEnumerator_1__ctor_m62142_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBOrbit/PanMode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62143_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62143/* method */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBOrbit/PanMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62144_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62144/* method */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBOrbit/PanMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62145_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m62145/* method */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBOrbit/PanMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62146_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m62146/* method */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo;
extern Il2CppType PanMode_t123_0_0_0;
extern void* RuntimeInvoker_PanMode_t123 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBOrbit/PanMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62147_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m62147/* method */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* declaring_type */
	, &PanMode_t123_0_0_0/* return_type */
	, RuntimeInvoker_PanMode_t123/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t9121_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62142_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62143_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62144_MethodInfo,
	&InternalEnumerator_1_Dispose_m62145_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62146_MethodInfo,
	&InternalEnumerator_1_get_Current_m62147_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62144_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62146_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62143_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62145_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62147_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9121_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62144_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62146_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62143_MethodInfo,
	&InternalEnumerator_1_Dispose_m62145_MethodInfo,
	&InternalEnumerator_1_get_Current_m62147_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26924_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9121_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26924_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26924_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9121_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26924_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9121_0_0_0;
extern Il2CppType InternalEnumerator_1_t9121_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9121_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9121_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9121_MethodInfos/* methods */
	, InternalEnumerator_1_t9121_PropertyInfos/* properties */
	, InternalEnumerator_1_t9121_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9121_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9121_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9121_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9121_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9121_1_0_0/* this_arg */
	, InternalEnumerator_1_t9121_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9121_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9121)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBOrbit/PanMode>
extern MethodInfo ICollection_1_get_Count_m225652_MethodInfo;
static PropertyInfo ICollection_1_t29579____Count_PropertyInfo = 
{
	&ICollection_1_t29579_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225652_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225653_MethodInfo;
static PropertyInfo ICollection_1_t29579____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29579_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225653_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29579_PropertyInfos[] =
{
	&ICollection_1_t29579____Count_PropertyInfo,
	&ICollection_1_t29579____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::get_Count()
MethodInfo ICollection_1_get_Count_m225652_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29579_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225653_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29579_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PanMode_t123_0_0_0;
static ParameterInfo ICollection_1_t29579_ICollection_1_Add_m225654_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PanMode_t123_0_0_0},
};
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::Add(T)
MethodInfo ICollection_1_Add_m225654_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t29579_ICollection_1_Add_m225654_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::Clear()
MethodInfo ICollection_1_Clear_m225655_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29579_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PanMode_t123_0_0_0;
static ParameterInfo ICollection_1_t29579_ICollection_1_Contains_m225656_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PanMode_t123_0_0_0},
};
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::Contains(T)
MethodInfo ICollection_1_Contains_m225656_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29579_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t29579_ICollection_1_Contains_m225656_ParameterInfos/* parameters */
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
extern Il2CppType PanModeU5BU5D_t24945_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29579_ICollection_1_CopyTo_m225657_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PanModeU5BU5D_t24945_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225657_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29579_ICollection_1_CopyTo_m225657_ParameterInfos/* parameters */
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
extern Il2CppType PanMode_t123_0_0_0;
static ParameterInfo ICollection_1_t29579_ICollection_1_Remove_m225658_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PanMode_t123_0_0_0},
};
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBOrbit/PanMode>::Remove(T)
MethodInfo ICollection_1_Remove_m225658_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29579_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t29579_ICollection_1_Remove_m225658_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29579_MethodInfos[] =
{
	&ICollection_1_get_Count_m225652_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225653_MethodInfo,
	&ICollection_1_Add_m225654_MethodInfo,
	&ICollection_1_Clear_m225655_MethodInfo,
	&ICollection_1_Contains_m225656_MethodInfo,
	&ICollection_1_CopyTo_m225657_MethodInfo,
	&ICollection_1_Remove_m225658_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29581_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29579_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29581_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29579_0_0_0;
extern Il2CppType ICollection_1_t29579_1_0_0;
struct ICollection_1_t29579;
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29579_GenericClass;
TypeInfo ICollection_1_t29579_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29579_MethodInfos/* methods */
	, ICollection_1_t29579_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29579_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29579_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29579_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29579_0_0_0/* byval_arg */
	, &ICollection_1_t29579_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29579_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29581_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBOrbit/PanMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBOrbit/PanMode>
extern TypeInfo IEnumerable_1_t29581_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26924_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBOrbit/PanMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225659_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29581_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26924_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29581_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225659_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29581_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29581_0_0_0;
extern Il2CppType IEnumerable_1_t29581_1_0_0;
struct IEnumerable_1_t29581;
extern TypeInfo IEnumerable_1_t29581_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29581_GenericClass;
TypeInfo IEnumerable_1_t29581_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29581_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29581_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29581_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29581_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29581_0_0_0/* byval_arg */
	, &IEnumerable_1_t29581_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29581_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29580_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBOrbit/PanMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBOrbit/PanMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBOrbit/PanMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBOrbit/PanMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBOrbit/PanMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBOrbit/PanMode>
extern MethodInfo IList_1_get_Item_m225660_MethodInfo;
extern MethodInfo IList_1_set_Item_m225661_MethodInfo;
static PropertyInfo IList_1_t29580____Item_PropertyInfo = 
{
	&IList_1_t29580_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225660_MethodInfo/* get */
	, &IList_1_set_Item_m225661_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29580_PropertyInfos[] =
{
	&IList_1_t29580____Item_PropertyInfo,
	NULL
};
extern Il2CppType PanMode_t123_0_0_0;
static ParameterInfo IList_1_t29580_IList_1_IndexOf_m225662_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PanMode_t123_0_0_0},
};
extern TypeInfo IList_1_t29580_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBOrbit/PanMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225662_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29580_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t29580_IList_1_IndexOf_m225662_ParameterInfos/* parameters */
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
extern Il2CppType PanMode_t123_0_0_0;
static ParameterInfo IList_1_t29580_IList_1_Insert_m225663_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PanMode_t123_0_0_0},
};
extern TypeInfo IList_1_t29580_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBOrbit/PanMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225663_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t29580_IList_1_Insert_m225663_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29580_IList_1_RemoveAt_m225664_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29580_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBOrbit/PanMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225664_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29580_IList_1_RemoveAt_m225664_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29580_IList_1_get_Item_m225660_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29580_il2cpp_TypeInfo;
extern Il2CppType PanMode_t123_0_0_0;
extern void* RuntimeInvoker_PanMode_t123_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBOrbit/PanMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225660_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29580_il2cpp_TypeInfo/* declaring_type */
	, &PanMode_t123_0_0_0/* return_type */
	, RuntimeInvoker_PanMode_t123_Int32_t73/* invoker_method */
	, IList_1_t29580_IList_1_get_Item_m225660_ParameterInfos/* parameters */
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
extern Il2CppType PanMode_t123_0_0_0;
static ParameterInfo IList_1_t29580_IList_1_set_Item_m225661_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PanMode_t123_0_0_0},
};
extern TypeInfo IList_1_t29580_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBOrbit/PanMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225661_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t29580_IList_1_set_Item_m225661_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29580_MethodInfos[] =
{
	&IList_1_IndexOf_m225662_MethodInfo,
	&IList_1_Insert_m225663_MethodInfo,
	&IList_1_RemoveAt_m225664_MethodInfo,
	&IList_1_get_Item_m225660_MethodInfo,
	&IList_1_set_Item_m225661_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29579_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29581_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29580_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29579_il2cpp_TypeInfo,
	&IEnumerable_1_t29581_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29580_0_0_0;
extern Il2CppType IList_1_t29580_1_0_0;
struct IList_1_t29580;
extern TypeInfo IList_1_t29580_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29580_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29580_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29580_MethodInfos/* methods */
	, IList_1_t29580_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29580_il2cpp_TypeInfo/* element_class */
	, IList_1_t29580_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29580_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29580_0_0_0/* byval_arg */
	, &IList_1_t29580_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29580_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t26925_il2cpp_TypeInfo;

// TBPan
#include "AssemblyU2DCSharpU2Dfirstpass_TBPan.h"


// T System.Collections.Generic.IEnumerator`1<TBPan>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBPan>
extern MethodInfo IEnumerator_1_get_Current_m225665_MethodInfo;
static PropertyInfo IEnumerator_1_t26925____Current_PropertyInfo = 
{
	&IEnumerator_1_t26925_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225665_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26925_PropertyInfos[] =
{
	&IEnumerator_1_t26925____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26925_il2cpp_TypeInfo;
extern Il2CppType TBPan_t126_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBPan>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225665_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26925_il2cpp_TypeInfo/* declaring_type */
	, &TBPan_t126_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26925_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225665_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26925_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26925_0_0_0;
extern Il2CppType IEnumerator_1_t26925_1_0_0;
struct IEnumerator_1_t26925;
extern TypeInfo IEnumerator_1_t26925_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26925_GenericClass;
TypeInfo IEnumerator_1_t26925_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26925_MethodInfos/* methods */
	, IEnumerator_1_t26925_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26925_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26925_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26925_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26925_0_0_0/* byval_arg */
	, &IEnumerator_1_t26925_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26925_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBPan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_115.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBPan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_115MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo;
extern TypeInfo TBPan_t126_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62153_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBPan_t126_m182170_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBPan>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBPan>(System.Int32)
#define Array_InternalArray__get_Item_TisTBPan_t126_m182170(__this, p0, method) (TBPan_t126 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBPan_t126_m182170_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBPan>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBPan>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBPan>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBPan>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBPan>::MoveNext()
// T System.Array/InternalEnumerator`1<TBPan>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBPan>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9122____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9122, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9122____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9122, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9122_FieldInfos[] =
{
	&InternalEnumerator_1_t9122____array_FieldInfo,
	&InternalEnumerator_1_t9122____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62150_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9122____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9122_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62150_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62153_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9122____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9122_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62153_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9122_PropertyInfos[] =
{
	&InternalEnumerator_1_t9122____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9122____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9122_InternalEnumerator_1__ctor_m62148_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPan>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62148_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9122_InternalEnumerator_1__ctor_m62148_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPan>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62149_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBPan>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62150_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPan>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62151_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBPan>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62152_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo;
extern Il2CppType TBPan_t126_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBPan>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62153_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* declaring_type */
	, &TBPan_t126_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9122_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62148_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62149_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62150_MethodInfo,
	&InternalEnumerator_1_Dispose_m62151_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62152_MethodInfo,
	&InternalEnumerator_1_get_Current_m62153_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62150_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62152_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62149_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62151_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62153_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9122_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62150_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62152_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62149_MethodInfo,
	&InternalEnumerator_1_Dispose_m62151_MethodInfo,
	&InternalEnumerator_1_get_Current_m62153_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26925_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9122_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26925_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26925_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9122_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26925_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62153_MethodInfo;
extern TypeInfo TBPan_t126_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBPan_t126_m182170_MethodInfo;
static void* InternalEnumerator_1_t9122_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62153_MethodInfo,
	&TBPan_t126_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBPan_t126_m182170_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9122_0_0_0;
extern Il2CppType InternalEnumerator_1_t9122_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9122_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9122_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9122_MethodInfos/* methods */
	, InternalEnumerator_1_t9122_PropertyInfos/* properties */
	, InternalEnumerator_1_t9122_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9122_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9122_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9122_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9122_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9122_1_0_0/* this_arg */
	, InternalEnumerator_1_t9122_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9122_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9122_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9122)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBPan>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBPan>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBPan>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBPan>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBPan>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBPan>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBPan>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBPan>
extern MethodInfo ICollection_1_get_Count_m225666_MethodInfo;
static PropertyInfo ICollection_1_t29582____Count_PropertyInfo = 
{
	&ICollection_1_t29582_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225666_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225667_MethodInfo;
static PropertyInfo ICollection_1_t29582____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29582_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225667_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29582_PropertyInfos[] =
{
	&ICollection_1_t29582____Count_PropertyInfo,
	&ICollection_1_t29582____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBPan>::get_Count()
MethodInfo ICollection_1_get_Count_m225666_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29582_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPan>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225667_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29582_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBPan_t126_0_0_0;
static ParameterInfo ICollection_1_t29582_ICollection_1_Add_m225668_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPan_t126_0_0_0},
};
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPan>::Add(T)
MethodInfo ICollection_1_Add_m225668_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29582_ICollection_1_Add_m225668_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPan>::Clear()
MethodInfo ICollection_1_Clear_m225669_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29582_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBPan_t126_0_0_0;
static ParameterInfo ICollection_1_t29582_ICollection_1_Contains_m225670_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPan_t126_0_0_0},
};
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPan>::Contains(T)
MethodInfo ICollection_1_Contains_m225670_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29582_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29582_ICollection_1_Contains_m225670_ParameterInfos/* parameters */
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
extern Il2CppType TBPanU5BU5D_t24946_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29582_ICollection_1_CopyTo_m225671_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBPanU5BU5D_t24946_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPan>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225671_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29582_ICollection_1_CopyTo_m225671_ParameterInfos/* parameters */
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
extern Il2CppType TBPan_t126_0_0_0;
static ParameterInfo ICollection_1_t29582_ICollection_1_Remove_m225672_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPan_t126_0_0_0},
};
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPan>::Remove(T)
MethodInfo ICollection_1_Remove_m225672_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29582_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29582_ICollection_1_Remove_m225672_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29582_MethodInfos[] =
{
	&ICollection_1_get_Count_m225666_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225667_MethodInfo,
	&ICollection_1_Add_m225668_MethodInfo,
	&ICollection_1_Clear_m225669_MethodInfo,
	&ICollection_1_Contains_m225670_MethodInfo,
	&ICollection_1_CopyTo_m225671_MethodInfo,
	&ICollection_1_Remove_m225672_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29584_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29582_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29584_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29582_0_0_0;
extern Il2CppType ICollection_1_t29582_1_0_0;
struct ICollection_1_t29582;
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29582_GenericClass;
TypeInfo ICollection_1_t29582_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29582_MethodInfos/* methods */
	, ICollection_1_t29582_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29582_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29582_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29582_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29582_0_0_0/* byval_arg */
	, &ICollection_1_t29582_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29582_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29584_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBPan>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBPan>
extern TypeInfo IEnumerable_1_t29584_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26925_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBPan>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225673_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29584_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26925_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29584_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225673_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29584_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29584_0_0_0;
extern Il2CppType IEnumerable_1_t29584_1_0_0;
struct IEnumerable_1_t29584;
extern TypeInfo IEnumerable_1_t29584_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29584_GenericClass;
TypeInfo IEnumerable_1_t29584_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29584_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29584_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29584_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29584_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29584_0_0_0/* byval_arg */
	, &IEnumerable_1_t29584_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29584_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29583_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBPan>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBPan>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBPan>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBPan>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBPan>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBPan>
extern MethodInfo IList_1_get_Item_m225674_MethodInfo;
extern MethodInfo IList_1_set_Item_m225675_MethodInfo;
static PropertyInfo IList_1_t29583____Item_PropertyInfo = 
{
	&IList_1_t29583_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225674_MethodInfo/* get */
	, &IList_1_set_Item_m225675_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29583_PropertyInfos[] =
{
	&IList_1_t29583____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBPan_t126_0_0_0;
static ParameterInfo IList_1_t29583_IList_1_IndexOf_m225676_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPan_t126_0_0_0},
};
extern TypeInfo IList_1_t29583_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBPan>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225676_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29583_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29583_IList_1_IndexOf_m225676_ParameterInfos/* parameters */
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
extern Il2CppType TBPan_t126_0_0_0;
static ParameterInfo IList_1_t29583_IList_1_Insert_m225677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBPan_t126_0_0_0},
};
extern TypeInfo IList_1_t29583_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPan>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225677_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29583_IList_1_Insert_m225677_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29583_IList_1_RemoveAt_m225678_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29583_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPan>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225678_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29583_IList_1_RemoveAt_m225678_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29583_IList_1_get_Item_m225674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29583_il2cpp_TypeInfo;
extern Il2CppType TBPan_t126_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBPan>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225674_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29583_il2cpp_TypeInfo/* declaring_type */
	, &TBPan_t126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29583_IList_1_get_Item_m225674_ParameterInfos/* parameters */
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
extern Il2CppType TBPan_t126_0_0_0;
static ParameterInfo IList_1_t29583_IList_1_set_Item_m225675_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBPan_t126_0_0_0},
};
extern TypeInfo IList_1_t29583_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPan>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225675_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29583_IList_1_set_Item_m225675_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29583_MethodInfos[] =
{
	&IList_1_IndexOf_m225676_MethodInfo,
	&IList_1_Insert_m225677_MethodInfo,
	&IList_1_RemoveAt_m225678_MethodInfo,
	&IList_1_get_Item_m225674_MethodInfo,
	&IList_1_set_Item_m225675_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29582_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29584_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29583_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29582_il2cpp_TypeInfo,
	&IEnumerable_1_t29584_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29583_0_0_0;
extern Il2CppType IList_1_t29583_1_0_0;
struct IList_1_t29583;
extern TypeInfo IList_1_t29583_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29583_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29583_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29583_MethodInfos/* methods */
	, IList_1_t29583_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29583_il2cpp_TypeInfo/* element_class */
	, IList_1_t29583_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29583_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29583_0_0_0/* byval_arg */
	, &IList_1_t29583_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29583_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBPan>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9123_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBPan>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_32MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBPan>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_28.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9123_il2cpp_TypeInfo;
extern TypeInfo TBPan_t126_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBPan>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_28MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62156_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62158_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPan>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPan>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBPan>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9123____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9123_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9123, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9123_FieldInfos[] =
{
	&CachedInvokableCall_1_t9123____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBPan_t126_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9123_CachedInvokableCall_1__ctor_m62154_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBPan_t126_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9123_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPan>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62154_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9123_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9123_CachedInvokableCall_1__ctor_m62154_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9123_CachedInvokableCall_1_Invoke_m62155_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9123_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPan>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62155_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9123_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9123_CachedInvokableCall_1_Invoke_m62155_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9123_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62154_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62155_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62155_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62159_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9123_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62155_MethodInfo,
	&InvokableCall_1_Find_m62159_MethodInfo,
};
extern Il2CppType UnityAction_1_t9125_0_0_0;
extern TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPan_t126_m182180_MethodInfo;
extern TypeInfo TBPan_t126_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62161_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62156_MethodInfo;
extern TypeInfo TBPan_t126_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62158_MethodInfo;
static void* CachedInvokableCall_1_t9123_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9125_0_0_0,
	&UnityAction_1_t9125_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBPan_t126_m182180_MethodInfo,
	&TBPan_t126_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62161_MethodInfo,
	&InvokableCall_1__ctor_m62156_MethodInfo,
	&TBPan_t126_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62158_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9123_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9123_1_0_0;
extern TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9123;
extern TypeInfo CachedInvokableCall_1_t9123_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9123_GenericClass;
TypeInfo CachedInvokableCall_1_t9123_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9123_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9123_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9124_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9123_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9123_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9123_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9123_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9123_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9123_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9123_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9123)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBPan>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_35.h"
extern TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBPan_t126_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TBPan>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_35MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9125_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPan_t126_m182180_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62161_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBPan>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBPan>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBPan_t126_m182180(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPan_t126_m182180_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBPan>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBPan>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBPan>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBPan>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBPan>
extern Il2CppType UnityAction_1_t9125_0_0_1;
FieldInfo InvokableCall_1_t9124____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9125_0_0_1/* type */
	, &InvokableCall_1_t9124_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9124, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9124_FieldInfos[] =
{
	&InvokableCall_1_t9124____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9124_InvokableCall_1__ctor_m62156_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBPan>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62156_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9124_InvokableCall_1__ctor_m62156_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9125_0_0_0;
static ParameterInfo InvokableCall_1_t9124_InvokableCall_1__ctor_m62157_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9125_0_0_0},
};
extern TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBPan>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62157_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9124_InvokableCall_1__ctor_m62157_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9124_InvokableCall_1_Invoke_m62158_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBPan>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62158_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9124_InvokableCall_1_Invoke_m62158_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9124_InvokableCall_1_Find_m62159_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBPan>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62159_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9124_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9124_InvokableCall_1_Find_m62159_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9124_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62156_MethodInfo,
	&InvokableCall_1__ctor_m62157_MethodInfo,
	&InvokableCall_1_Invoke_m62158_MethodInfo,
	&InvokableCall_1_Find_m62159_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62158_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62159_MethodInfo;
static MethodInfo* InvokableCall_1_t9124_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62158_MethodInfo,
	&InvokableCall_1_Find_m62159_MethodInfo,
};
extern Il2CppType UnityAction_1_t9125_0_0_0;
extern TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPan_t126_m182180_MethodInfo;
extern TypeInfo TBPan_t126_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62161_MethodInfo;
static void* InvokableCall_1_t9124_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9125_0_0_0,
	&UnityAction_1_t9125_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBPan_t126_m182180_MethodInfo,
	&TBPan_t126_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62161_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9124_0_0_0;
extern Il2CppType InvokableCall_1_t9124_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9124;
extern TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9124_GenericClass;
TypeInfo InvokableCall_1_t9124_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9124_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9124_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9124_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9124_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9124_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9124_0_0_0/* byval_arg */
	, &InvokableCall_1_t9124_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9124_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9124_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9124)/* instance_size */
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
extern TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TBPan>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBPan>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBPan>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBPan>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBPan>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9125_UnityAction_1__ctor_m62160_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBPan>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62160_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9125_UnityAction_1__ctor_m62160_ParameterInfos/* parameters */
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
extern Il2CppType TBPan_t126_0_0_0;
static ParameterInfo UnityAction_1_t9125_UnityAction_1_Invoke_m62161_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBPan_t126_0_0_0},
};
extern TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBPan>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62161_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9125_UnityAction_1_Invoke_m62161_ParameterInfos/* parameters */
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
extern Il2CppType TBPan_t126_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9125_UnityAction_1_BeginInvoke_m62162_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBPan_t126_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBPan>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62162_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9125_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9125_UnityAction_1_BeginInvoke_m62162_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9125_UnityAction_1_EndInvoke_m62163_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBPan>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62163_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9125_UnityAction_1_EndInvoke_m62163_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9125_MethodInfos[] =
{
	&UnityAction_1__ctor_m62160_MethodInfo,
	&UnityAction_1_Invoke_m62161_MethodInfo,
	&UnityAction_1_BeginInvoke_m62162_MethodInfo,
	&UnityAction_1_EndInvoke_m62163_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62161_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62162_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62163_MethodInfo;
static MethodInfo* UnityAction_1_t9125_VTable[] =
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
	&UnityAction_1_Invoke_m62161_MethodInfo,
	&UnityAction_1_BeginInvoke_m62162_MethodInfo,
	&UnityAction_1_EndInvoke_m62163_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9125_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9125_0_0_0;
extern Il2CppType UnityAction_1_t9125_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9125;
extern TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9125_GenericClass;
TypeInfo UnityAction_1_t9125_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9125_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9125_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9125_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9125_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9125_0_0_0/* byval_arg */
	, &UnityAction_1_t9125_1_0_0/* this_arg */
	, UnityAction_1_t9125_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9125_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9125)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26926_il2cpp_TypeInfo;

// TBPinchZoom
#include "AssemblyU2DCSharpU2Dfirstpass_TBPinchZoom.h"


// T System.Collections.Generic.IEnumerator`1<TBPinchZoom>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBPinchZoom>
extern MethodInfo IEnumerator_1_get_Current_m225679_MethodInfo;
static PropertyInfo IEnumerator_1_t26926____Current_PropertyInfo = 
{
	&IEnumerator_1_t26926_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225679_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26926_PropertyInfos[] =
{
	&IEnumerator_1_t26926____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26926_il2cpp_TypeInfo;
extern Il2CppType TBPinchZoom_t130_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBPinchZoom>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225679_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26926_il2cpp_TypeInfo/* declaring_type */
	, &TBPinchZoom_t130_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26926_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225679_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26926_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26926_0_0_0;
extern Il2CppType IEnumerator_1_t26926_1_0_0;
struct IEnumerator_1_t26926;
extern TypeInfo IEnumerator_1_t26926_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26926_GenericClass;
TypeInfo IEnumerator_1_t26926_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26926_MethodInfos/* methods */
	, IEnumerator_1_t26926_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26926_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26926_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26926_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26926_0_0_0/* byval_arg */
	, &IEnumerator_1_t26926_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26926_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBPinchZoom>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_116.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBPinchZoom>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_116MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo;
extern TypeInfo TBPinchZoom_t130_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62169_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBPinchZoom_t130_m182182_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBPinchZoom>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBPinchZoom>(System.Int32)
#define Array_InternalArray__get_Item_TisTBPinchZoom_t130_m182182(__this, p0, method) (TBPinchZoom_t130 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBPinchZoom_t130_m182182_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBPinchZoom>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBPinchZoom>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBPinchZoom>::MoveNext()
// T System.Array/InternalEnumerator`1<TBPinchZoom>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBPinchZoom>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9126____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9126, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9126____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9126, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9126_FieldInfos[] =
{
	&InternalEnumerator_1_t9126____array_FieldInfo,
	&InternalEnumerator_1_t9126____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62166_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9126____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9126_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62166_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62169_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9126____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9126_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62169_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9126_PropertyInfos[] =
{
	&InternalEnumerator_1_t9126____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9126____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9126_InternalEnumerator_1__ctor_m62164_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62164_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9126_InternalEnumerator_1__ctor_m62164_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62165_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBPinchZoom>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62166_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62167_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBPinchZoom>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62168_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo;
extern Il2CppType TBPinchZoom_t130_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBPinchZoom>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62169_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* declaring_type */
	, &TBPinchZoom_t130_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9126_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62164_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62165_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62166_MethodInfo,
	&InternalEnumerator_1_Dispose_m62167_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62168_MethodInfo,
	&InternalEnumerator_1_get_Current_m62169_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62166_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62168_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62165_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62167_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62169_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9126_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62166_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62168_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62165_MethodInfo,
	&InternalEnumerator_1_Dispose_m62167_MethodInfo,
	&InternalEnumerator_1_get_Current_m62169_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26926_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9126_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26926_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26926_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9126_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26926_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62169_MethodInfo;
extern TypeInfo TBPinchZoom_t130_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBPinchZoom_t130_m182182_MethodInfo;
static void* InternalEnumerator_1_t9126_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62169_MethodInfo,
	&TBPinchZoom_t130_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBPinchZoom_t130_m182182_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9126_0_0_0;
extern Il2CppType InternalEnumerator_1_t9126_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9126_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9126_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9126_MethodInfos/* methods */
	, InternalEnumerator_1_t9126_PropertyInfos/* properties */
	, InternalEnumerator_1_t9126_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9126_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9126_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9126_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9126_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9126_1_0_0/* this_arg */
	, InternalEnumerator_1_t9126_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9126_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9126_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9126)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBPinchZoom>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBPinchZoom>
extern MethodInfo ICollection_1_get_Count_m225680_MethodInfo;
static PropertyInfo ICollection_1_t29585____Count_PropertyInfo = 
{
	&ICollection_1_t29585_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225680_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225681_MethodInfo;
static PropertyInfo ICollection_1_t29585____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29585_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225681_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29585_PropertyInfos[] =
{
	&ICollection_1_t29585____Count_PropertyInfo,
	&ICollection_1_t29585____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBPinchZoom>::get_Count()
MethodInfo ICollection_1_get_Count_m225680_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29585_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225681_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29585_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBPinchZoom_t130_0_0_0;
static ParameterInfo ICollection_1_t29585_ICollection_1_Add_m225682_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchZoom_t130_0_0_0},
};
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom>::Add(T)
MethodInfo ICollection_1_Add_m225682_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29585_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29585_ICollection_1_Add_m225682_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom>::Clear()
MethodInfo ICollection_1_Clear_m225683_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29585_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBPinchZoom_t130_0_0_0;
static ParameterInfo ICollection_1_t29585_ICollection_1_Contains_m225684_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchZoom_t130_0_0_0},
};
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom>::Contains(T)
MethodInfo ICollection_1_Contains_m225684_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29585_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29585_ICollection_1_Contains_m225684_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchZoomU5BU5D_t24947_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29585_ICollection_1_CopyTo_m225685_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchZoomU5BU5D_t24947_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225685_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29585_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29585_ICollection_1_CopyTo_m225685_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchZoom_t130_0_0_0;
static ParameterInfo ICollection_1_t29585_ICollection_1_Remove_m225686_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchZoom_t130_0_0_0},
};
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom>::Remove(T)
MethodInfo ICollection_1_Remove_m225686_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29585_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29585_ICollection_1_Remove_m225686_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29585_MethodInfos[] =
{
	&ICollection_1_get_Count_m225680_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225681_MethodInfo,
	&ICollection_1_Add_m225682_MethodInfo,
	&ICollection_1_Clear_m225683_MethodInfo,
	&ICollection_1_Contains_m225684_MethodInfo,
	&ICollection_1_CopyTo_m225685_MethodInfo,
	&ICollection_1_Remove_m225686_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29587_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29585_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29587_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29585_0_0_0;
extern Il2CppType ICollection_1_t29585_1_0_0;
struct ICollection_1_t29585;
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29585_GenericClass;
TypeInfo ICollection_1_t29585_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29585_MethodInfos/* methods */
	, ICollection_1_t29585_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29585_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29585_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29585_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29585_0_0_0/* byval_arg */
	, &ICollection_1_t29585_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29585_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29587_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBPinchZoom>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBPinchZoom>
extern TypeInfo IEnumerable_1_t29587_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26926_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBPinchZoom>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225687_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29587_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26926_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29587_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225687_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29587_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29587_0_0_0;
extern Il2CppType IEnumerable_1_t29587_1_0_0;
struct IEnumerable_1_t29587;
extern TypeInfo IEnumerable_1_t29587_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29587_GenericClass;
TypeInfo IEnumerable_1_t29587_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29587_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29587_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29587_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29587_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29587_0_0_0/* byval_arg */
	, &IEnumerable_1_t29587_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29587_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29586_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBPinchZoom>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBPinchZoom>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBPinchZoom>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBPinchZoom>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBPinchZoom>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBPinchZoom>
extern MethodInfo IList_1_get_Item_m225688_MethodInfo;
extern MethodInfo IList_1_set_Item_m225689_MethodInfo;
static PropertyInfo IList_1_t29586____Item_PropertyInfo = 
{
	&IList_1_t29586_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225688_MethodInfo/* get */
	, &IList_1_set_Item_m225689_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29586_PropertyInfos[] =
{
	&IList_1_t29586____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBPinchZoom_t130_0_0_0;
static ParameterInfo IList_1_t29586_IList_1_IndexOf_m225690_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchZoom_t130_0_0_0},
};
extern TypeInfo IList_1_t29586_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBPinchZoom>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225690_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29586_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29586_IList_1_IndexOf_m225690_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchZoom_t130_0_0_0;
static ParameterInfo IList_1_t29586_IList_1_Insert_m225691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBPinchZoom_t130_0_0_0},
};
extern TypeInfo IList_1_t29586_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPinchZoom>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225691_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29586_IList_1_Insert_m225691_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29586_IList_1_RemoveAt_m225692_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29586_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPinchZoom>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225692_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29586_IList_1_RemoveAt_m225692_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29586_IList_1_get_Item_m225688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29586_il2cpp_TypeInfo;
extern Il2CppType TBPinchZoom_t130_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBPinchZoom>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225688_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29586_il2cpp_TypeInfo/* declaring_type */
	, &TBPinchZoom_t130_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29586_IList_1_get_Item_m225688_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchZoom_t130_0_0_0;
static ParameterInfo IList_1_t29586_IList_1_set_Item_m225689_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBPinchZoom_t130_0_0_0},
};
extern TypeInfo IList_1_t29586_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPinchZoom>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225689_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29586_IList_1_set_Item_m225689_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29586_MethodInfos[] =
{
	&IList_1_IndexOf_m225690_MethodInfo,
	&IList_1_Insert_m225691_MethodInfo,
	&IList_1_RemoveAt_m225692_MethodInfo,
	&IList_1_get_Item_m225688_MethodInfo,
	&IList_1_set_Item_m225689_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29585_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29587_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29586_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29585_il2cpp_TypeInfo,
	&IEnumerable_1_t29587_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29586_0_0_0;
extern Il2CppType IList_1_t29586_1_0_0;
struct IList_1_t29586;
extern TypeInfo IList_1_t29586_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29586_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29586_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29586_MethodInfos/* methods */
	, IList_1_t29586_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29586_il2cpp_TypeInfo/* element_class */
	, IList_1_t29586_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29586_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29586_0_0_0/* byval_arg */
	, &IList_1_t29586_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29586_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBPinchZoom>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9127_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBPinchZoom>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_33MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBPinchZoom>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_29.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9127_il2cpp_TypeInfo;
extern TypeInfo TBPinchZoom_t130_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBPinchZoom>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_29MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62172_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62174_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPinchZoom>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPinchZoom>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBPinchZoom>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9127____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9127_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9127, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9127_FieldInfos[] =
{
	&CachedInvokableCall_1_t9127____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBPinchZoom_t130_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9127_CachedInvokableCall_1__ctor_m62170_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBPinchZoom_t130_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9127_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPinchZoom>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62170_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9127_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9127_CachedInvokableCall_1__ctor_m62170_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9127_CachedInvokableCall_1_Invoke_m62171_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9127_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPinchZoom>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62171_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9127_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9127_CachedInvokableCall_1_Invoke_m62171_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9127_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62170_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62171_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62171_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62175_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9127_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62171_MethodInfo,
	&InvokableCall_1_Find_m62175_MethodInfo,
};
extern Il2CppType UnityAction_1_t9129_0_0_0;
extern TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchZoom_t130_m182192_MethodInfo;
extern TypeInfo TBPinchZoom_t130_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62177_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62172_MethodInfo;
extern TypeInfo TBPinchZoom_t130_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62174_MethodInfo;
static void* CachedInvokableCall_1_t9127_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9129_0_0_0,
	&UnityAction_1_t9129_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchZoom_t130_m182192_MethodInfo,
	&TBPinchZoom_t130_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62177_MethodInfo,
	&InvokableCall_1__ctor_m62172_MethodInfo,
	&TBPinchZoom_t130_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62174_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9127_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9127_1_0_0;
extern TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9127;
extern TypeInfo CachedInvokableCall_1_t9127_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9127_GenericClass;
TypeInfo CachedInvokableCall_1_t9127_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9127_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9127_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9128_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9127_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9127_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9127_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9127_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9127_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9127_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9127_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9127)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBPinchZoom>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_36.h"
extern TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBPinchZoom_t130_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TBPinchZoom>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_36MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9129_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchZoom_t130_m182192_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62177_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBPinchZoom>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBPinchZoom>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchZoom_t130_m182192(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchZoom_t130_m182192_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBPinchZoom>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchZoom>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchZoom>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBPinchZoom>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBPinchZoom>
extern Il2CppType UnityAction_1_t9129_0_0_1;
FieldInfo InvokableCall_1_t9128____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9129_0_0_1/* type */
	, &InvokableCall_1_t9128_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9128, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9128_FieldInfos[] =
{
	&InvokableCall_1_t9128____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9128_InvokableCall_1__ctor_m62172_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchZoom>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62172_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9128_InvokableCall_1__ctor_m62172_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9129_0_0_0;
static ParameterInfo InvokableCall_1_t9128_InvokableCall_1__ctor_m62173_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9129_0_0_0},
};
extern TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchZoom>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62173_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9128_InvokableCall_1__ctor_m62173_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9128_InvokableCall_1_Invoke_m62174_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchZoom>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62174_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9128_InvokableCall_1_Invoke_m62174_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9128_InvokableCall_1_Find_m62175_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBPinchZoom>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62175_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9128_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9128_InvokableCall_1_Find_m62175_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9128_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62172_MethodInfo,
	&InvokableCall_1__ctor_m62173_MethodInfo,
	&InvokableCall_1_Invoke_m62174_MethodInfo,
	&InvokableCall_1_Find_m62175_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62174_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62175_MethodInfo;
static MethodInfo* InvokableCall_1_t9128_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62174_MethodInfo,
	&InvokableCall_1_Find_m62175_MethodInfo,
};
extern Il2CppType UnityAction_1_t9129_0_0_0;
extern TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchZoom_t130_m182192_MethodInfo;
extern TypeInfo TBPinchZoom_t130_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62177_MethodInfo;
static void* InvokableCall_1_t9128_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9129_0_0_0,
	&UnityAction_1_t9129_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchZoom_t130_m182192_MethodInfo,
	&TBPinchZoom_t130_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62177_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9128_0_0_0;
extern Il2CppType InvokableCall_1_t9128_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9128;
extern TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9128_GenericClass;
TypeInfo InvokableCall_1_t9128_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9128_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9128_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9128_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9128_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9128_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9128_0_0_0/* byval_arg */
	, &InvokableCall_1_t9128_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9128_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9128_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9128)/* instance_size */
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
extern TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TBPinchZoom>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBPinchZoom>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBPinchZoom>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBPinchZoom>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBPinchZoom>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9129_UnityAction_1__ctor_m62176_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBPinchZoom>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62176_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9129_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9129_UnityAction_1__ctor_m62176_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchZoom_t130_0_0_0;
static ParameterInfo UnityAction_1_t9129_UnityAction_1_Invoke_m62177_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchZoom_t130_0_0_0},
};
extern TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBPinchZoom>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62177_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9129_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9129_UnityAction_1_Invoke_m62177_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchZoom_t130_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9129_UnityAction_1_BeginInvoke_m62178_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchZoom_t130_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBPinchZoom>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62178_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9129_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9129_UnityAction_1_BeginInvoke_m62178_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9129_UnityAction_1_EndInvoke_m62179_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBPinchZoom>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62179_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9129_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9129_UnityAction_1_EndInvoke_m62179_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9129_MethodInfos[] =
{
	&UnityAction_1__ctor_m62176_MethodInfo,
	&UnityAction_1_Invoke_m62177_MethodInfo,
	&UnityAction_1_BeginInvoke_m62178_MethodInfo,
	&UnityAction_1_EndInvoke_m62179_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62177_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62178_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62179_MethodInfo;
static MethodInfo* UnityAction_1_t9129_VTable[] =
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
	&UnityAction_1_Invoke_m62177_MethodInfo,
	&UnityAction_1_BeginInvoke_m62178_MethodInfo,
	&UnityAction_1_EndInvoke_m62179_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9129_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9129_0_0_0;
extern Il2CppType UnityAction_1_t9129_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9129;
extern TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9129_GenericClass;
TypeInfo UnityAction_1_t9129_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9129_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9129_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9129_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9129_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9129_0_0_0/* byval_arg */
	, &UnityAction_1_t9129_1_0_0/* this_arg */
	, UnityAction_1_t9129_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9129_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9129)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26927_il2cpp_TypeInfo;

// TBPinchZoom/ZoomMethod
#include "AssemblyU2DCSharpU2Dfirstpass_TBPinchZoom_ZoomMethod.h"


// T System.Collections.Generic.IEnumerator`1<TBPinchZoom/ZoomMethod>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBPinchZoom/ZoomMethod>
extern MethodInfo IEnumerator_1_get_Current_m225693_MethodInfo;
static PropertyInfo IEnumerator_1_t26927____Current_PropertyInfo = 
{
	&IEnumerator_1_t26927_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225693_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26927_PropertyInfos[] =
{
	&IEnumerator_1_t26927____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26927_il2cpp_TypeInfo;
extern Il2CppType ZoomMethod_t129_0_0_0;
extern void* RuntimeInvoker_ZoomMethod_t129 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBPinchZoom/ZoomMethod>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225693_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26927_il2cpp_TypeInfo/* declaring_type */
	, &ZoomMethod_t129_0_0_0/* return_type */
	, RuntimeInvoker_ZoomMethod_t129/* invoker_method */
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
static MethodInfo* IEnumerator_1_t26927_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225693_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26927_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26927_0_0_0;
extern Il2CppType IEnumerator_1_t26927_1_0_0;
struct IEnumerator_1_t26927;
extern TypeInfo IEnumerator_1_t26927_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26927_GenericClass;
TypeInfo IEnumerator_1_t26927_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26927_MethodInfos/* methods */
	, IEnumerator_1_t26927_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26927_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26927_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26927_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26927_0_0_0/* byval_arg */
	, &IEnumerator_1_t26927_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26927_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_117.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_117MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo;
extern TypeInfo ZoomMethod_t129_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62185_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisZoomMethod_t129_m182194_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBPinchZoom/ZoomMethod>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBPinchZoom/ZoomMethod>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisZoomMethod_t129_m182194 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisZoomMethod_t129_m182194_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m62180_MethodInfo;
 void InternalEnumerator_1__ctor_m62180 (InternalEnumerator_1_t9130 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62181_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62181 (InternalEnumerator_1_t9130 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62182_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62182 (InternalEnumerator_1_t9130 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m62185(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m62185_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ZoomMethod_t129_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m62183_MethodInfo;
 void InternalEnumerator_1_Dispose_m62183 (InternalEnumerator_1_t9130 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m62184_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m62184 (InternalEnumerator_1_t9130 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m62185_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m62185 (InternalEnumerator_1_t9130 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisZoomMethod_t129_m182194(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisZoomMethod_t129_m182194_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9130____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9130, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9130____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9130, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9130_FieldInfos[] =
{
	&InternalEnumerator_1_t9130____array_FieldInfo,
	&InternalEnumerator_1_t9130____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62182_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9130____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9130_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62182_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62185_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9130____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9130_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62185_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9130_PropertyInfos[] =
{
	&InternalEnumerator_1_t9130____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9130____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9130_InternalEnumerator_1__ctor_m62180_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62180_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m62180/* method */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9130_InternalEnumerator_1__ctor_m62180_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62181_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62181/* method */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62182_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62182/* method */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62183_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m62183/* method */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62184_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m62184/* method */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo;
extern Il2CppType ZoomMethod_t129_0_0_0;
extern void* RuntimeInvoker_ZoomMethod_t129 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBPinchZoom/ZoomMethod>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62185_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m62185/* method */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* declaring_type */
	, &ZoomMethod_t129_0_0_0/* return_type */
	, RuntimeInvoker_ZoomMethod_t129/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t9130_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62180_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62181_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62182_MethodInfo,
	&InternalEnumerator_1_Dispose_m62183_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62184_MethodInfo,
	&InternalEnumerator_1_get_Current_m62185_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62182_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62184_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62181_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62183_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62185_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9130_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62182_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62184_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62181_MethodInfo,
	&InternalEnumerator_1_Dispose_m62183_MethodInfo,
	&InternalEnumerator_1_get_Current_m62185_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26927_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9130_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26927_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26927_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9130_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26927_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9130_0_0_0;
extern Il2CppType InternalEnumerator_1_t9130_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9130_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9130_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9130_MethodInfos/* methods */
	, InternalEnumerator_1_t9130_PropertyInfos/* properties */
	, InternalEnumerator_1_t9130_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9130_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9130_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9130_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9130_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9130_1_0_0/* this_arg */
	, InternalEnumerator_1_t9130_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9130_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9130)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>
extern MethodInfo ICollection_1_get_Count_m225694_MethodInfo;
static PropertyInfo ICollection_1_t29588____Count_PropertyInfo = 
{
	&ICollection_1_t29588_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225694_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225695_MethodInfo;
static PropertyInfo ICollection_1_t29588____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29588_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225695_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29588_PropertyInfos[] =
{
	&ICollection_1_t29588____Count_PropertyInfo,
	&ICollection_1_t29588____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::get_Count()
MethodInfo ICollection_1_get_Count_m225694_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29588_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225695_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29588_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ZoomMethod_t129_0_0_0;
static ParameterInfo ICollection_1_t29588_ICollection_1_Add_m225696_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ZoomMethod_t129_0_0_0},
};
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::Add(T)
MethodInfo ICollection_1_Add_m225696_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29588_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t29588_ICollection_1_Add_m225696_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::Clear()
MethodInfo ICollection_1_Clear_m225697_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29588_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ZoomMethod_t129_0_0_0;
static ParameterInfo ICollection_1_t29588_ICollection_1_Contains_m225698_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ZoomMethod_t129_0_0_0},
};
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::Contains(T)
MethodInfo ICollection_1_Contains_m225698_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29588_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t29588_ICollection_1_Contains_m225698_ParameterInfos/* parameters */
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
extern Il2CppType ZoomMethodU5BU5D_t24948_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29588_ICollection_1_CopyTo_m225699_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ZoomMethodU5BU5D_t24948_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225699_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29588_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29588_ICollection_1_CopyTo_m225699_ParameterInfos/* parameters */
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
extern Il2CppType ZoomMethod_t129_0_0_0;
static ParameterInfo ICollection_1_t29588_ICollection_1_Remove_m225700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ZoomMethod_t129_0_0_0},
};
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchZoom/ZoomMethod>::Remove(T)
MethodInfo ICollection_1_Remove_m225700_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29588_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t29588_ICollection_1_Remove_m225700_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29588_MethodInfos[] =
{
	&ICollection_1_get_Count_m225694_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225695_MethodInfo,
	&ICollection_1_Add_m225696_MethodInfo,
	&ICollection_1_Clear_m225697_MethodInfo,
	&ICollection_1_Contains_m225698_MethodInfo,
	&ICollection_1_CopyTo_m225699_MethodInfo,
	&ICollection_1_Remove_m225700_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29590_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29588_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29590_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29588_0_0_0;
extern Il2CppType ICollection_1_t29588_1_0_0;
struct ICollection_1_t29588;
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29588_GenericClass;
TypeInfo ICollection_1_t29588_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29588_MethodInfos/* methods */
	, ICollection_1_t29588_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29588_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29588_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29588_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29588_0_0_0/* byval_arg */
	, &ICollection_1_t29588_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29588_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29590_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBPinchZoom/ZoomMethod>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBPinchZoom/ZoomMethod>
extern TypeInfo IEnumerable_1_t29590_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26927_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBPinchZoom/ZoomMethod>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225701_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29590_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26927_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29590_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225701_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29590_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29590_0_0_0;
extern Il2CppType IEnumerable_1_t29590_1_0_0;
struct IEnumerable_1_t29590;
extern TypeInfo IEnumerable_1_t29590_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29590_GenericClass;
TypeInfo IEnumerable_1_t29590_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29590_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29590_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29590_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29590_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29590_0_0_0/* byval_arg */
	, &IEnumerable_1_t29590_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29590_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29589_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>
extern MethodInfo IList_1_get_Item_m225702_MethodInfo;
extern MethodInfo IList_1_set_Item_m225703_MethodInfo;
static PropertyInfo IList_1_t29589____Item_PropertyInfo = 
{
	&IList_1_t29589_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225702_MethodInfo/* get */
	, &IList_1_set_Item_m225703_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29589_PropertyInfos[] =
{
	&IList_1_t29589____Item_PropertyInfo,
	NULL
};
extern Il2CppType ZoomMethod_t129_0_0_0;
static ParameterInfo IList_1_t29589_IList_1_IndexOf_m225704_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ZoomMethod_t129_0_0_0},
};
extern TypeInfo IList_1_t29589_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225704_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29589_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t29589_IList_1_IndexOf_m225704_ParameterInfos/* parameters */
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
extern Il2CppType ZoomMethod_t129_0_0_0;
static ParameterInfo IList_1_t29589_IList_1_Insert_m225705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ZoomMethod_t129_0_0_0},
};
extern TypeInfo IList_1_t29589_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225705_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29589_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t29589_IList_1_Insert_m225705_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29589_IList_1_RemoveAt_m225706_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29589_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225706_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29589_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29589_IList_1_RemoveAt_m225706_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29589_IList_1_get_Item_m225702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29589_il2cpp_TypeInfo;
extern Il2CppType ZoomMethod_t129_0_0_0;
extern void* RuntimeInvoker_ZoomMethod_t129_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225702_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29589_il2cpp_TypeInfo/* declaring_type */
	, &ZoomMethod_t129_0_0_0/* return_type */
	, RuntimeInvoker_ZoomMethod_t129_Int32_t73/* invoker_method */
	, IList_1_t29589_IList_1_get_Item_m225702_ParameterInfos/* parameters */
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
extern Il2CppType ZoomMethod_t129_0_0_0;
static ParameterInfo IList_1_t29589_IList_1_set_Item_m225703_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ZoomMethod_t129_0_0_0},
};
extern TypeInfo IList_1_t29589_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPinchZoom/ZoomMethod>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225703_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29589_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t29589_IList_1_set_Item_m225703_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29589_MethodInfos[] =
{
	&IList_1_IndexOf_m225704_MethodInfo,
	&IList_1_Insert_m225705_MethodInfo,
	&IList_1_RemoveAt_m225706_MethodInfo,
	&IList_1_get_Item_m225702_MethodInfo,
	&IList_1_set_Item_m225703_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29588_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29590_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29589_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29588_il2cpp_TypeInfo,
	&IEnumerable_1_t29590_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29589_0_0_0;
extern Il2CppType IList_1_t29589_1_0_0;
struct IList_1_t29589;
extern TypeInfo IList_1_t29589_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29589_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29589_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29589_MethodInfos/* methods */
	, IList_1_t29589_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29589_il2cpp_TypeInfo/* element_class */
	, IList_1_t29589_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29589_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29589_0_0_0/* byval_arg */
	, &IList_1_t29589_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29589_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t26928_il2cpp_TypeInfo;

// TBDragToMove
#include "AssemblyU2DCSharpU2Dfirstpass_TBDragToMove.h"


// T System.Collections.Generic.IEnumerator`1<TBDragToMove>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBDragToMove>
extern MethodInfo IEnumerator_1_get_Current_m225707_MethodInfo;
static PropertyInfo IEnumerator_1_t26928____Current_PropertyInfo = 
{
	&IEnumerator_1_t26928_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225707_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26928_PropertyInfos[] =
{
	&IEnumerator_1_t26928____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26928_il2cpp_TypeInfo;
extern Il2CppType TBDragToMove_t132_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBDragToMove>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225707_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26928_il2cpp_TypeInfo/* declaring_type */
	, &TBDragToMove_t132_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26928_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225707_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26928_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26928_0_0_0;
extern Il2CppType IEnumerator_1_t26928_1_0_0;
struct IEnumerator_1_t26928;
extern TypeInfo IEnumerator_1_t26928_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26928_GenericClass;
TypeInfo IEnumerator_1_t26928_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26928_MethodInfos/* methods */
	, IEnumerator_1_t26928_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26928_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26928_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26928_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26928_0_0_0/* byval_arg */
	, &IEnumerator_1_t26928_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26928_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBDragToMove>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_118.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBDragToMove>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_118MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo;
extern TypeInfo TBDragToMove_t132_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62191_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBDragToMove_t132_m182205_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBDragToMove>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBDragToMove>(System.Int32)
#define Array_InternalArray__get_Item_TisTBDragToMove_t132_m182205(__this, p0, method) (TBDragToMove_t132 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBDragToMove_t132_m182205_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBDragToMove>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBDragToMove>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBDragToMove>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBDragToMove>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBDragToMove>::MoveNext()
// T System.Array/InternalEnumerator`1<TBDragToMove>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBDragToMove>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9131____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9131, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9131____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9131, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9131_FieldInfos[] =
{
	&InternalEnumerator_1_t9131____array_FieldInfo,
	&InternalEnumerator_1_t9131____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62188_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9131____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9131_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62188_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62191_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9131____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9131_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62191_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9131_PropertyInfos[] =
{
	&InternalEnumerator_1_t9131____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9131____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9131_InternalEnumerator_1__ctor_m62186_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBDragToMove>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62186_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9131_InternalEnumerator_1__ctor_m62186_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBDragToMove>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62187_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBDragToMove>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62188_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBDragToMove>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62189_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBDragToMove>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62190_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo;
extern Il2CppType TBDragToMove_t132_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBDragToMove>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62191_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* declaring_type */
	, &TBDragToMove_t132_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9131_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62186_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62187_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62188_MethodInfo,
	&InternalEnumerator_1_Dispose_m62189_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62190_MethodInfo,
	&InternalEnumerator_1_get_Current_m62191_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62188_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62190_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62187_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62189_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62191_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9131_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62188_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62190_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62187_MethodInfo,
	&InternalEnumerator_1_Dispose_m62189_MethodInfo,
	&InternalEnumerator_1_get_Current_m62191_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26928_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9131_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26928_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26928_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9131_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26928_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62191_MethodInfo;
extern TypeInfo TBDragToMove_t132_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBDragToMove_t132_m182205_MethodInfo;
static void* InternalEnumerator_1_t9131_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62191_MethodInfo,
	&TBDragToMove_t132_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBDragToMove_t132_m182205_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9131_0_0_0;
extern Il2CppType InternalEnumerator_1_t9131_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9131_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9131_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9131_MethodInfos/* methods */
	, InternalEnumerator_1_t9131_PropertyInfos/* properties */
	, InternalEnumerator_1_t9131_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9131_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9131_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9131_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9131_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9131_1_0_0/* this_arg */
	, InternalEnumerator_1_t9131_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9131_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9131_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9131)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBDragToMove>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBDragToMove>
extern MethodInfo ICollection_1_get_Count_m225708_MethodInfo;
static PropertyInfo ICollection_1_t29591____Count_PropertyInfo = 
{
	&ICollection_1_t29591_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225708_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225709_MethodInfo;
static PropertyInfo ICollection_1_t29591____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29591_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225709_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29591_PropertyInfos[] =
{
	&ICollection_1_t29591____Count_PropertyInfo,
	&ICollection_1_t29591____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBDragToMove>::get_Count()
MethodInfo ICollection_1_get_Count_m225708_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29591_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225709_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29591_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBDragToMove_t132_0_0_0;
static ParameterInfo ICollection_1_t29591_ICollection_1_Add_m225710_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBDragToMove_t132_0_0_0},
};
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove>::Add(T)
MethodInfo ICollection_1_Add_m225710_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29591_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29591_ICollection_1_Add_m225710_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove>::Clear()
MethodInfo ICollection_1_Clear_m225711_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29591_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBDragToMove_t132_0_0_0;
static ParameterInfo ICollection_1_t29591_ICollection_1_Contains_m225712_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBDragToMove_t132_0_0_0},
};
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove>::Contains(T)
MethodInfo ICollection_1_Contains_m225712_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29591_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29591_ICollection_1_Contains_m225712_ParameterInfos/* parameters */
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
extern Il2CppType TBDragToMoveU5BU5D_t24949_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29591_ICollection_1_CopyTo_m225713_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBDragToMoveU5BU5D_t24949_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225713_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29591_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29591_ICollection_1_CopyTo_m225713_ParameterInfos/* parameters */
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
extern Il2CppType TBDragToMove_t132_0_0_0;
static ParameterInfo ICollection_1_t29591_ICollection_1_Remove_m225714_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBDragToMove_t132_0_0_0},
};
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove>::Remove(T)
MethodInfo ICollection_1_Remove_m225714_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29591_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29591_ICollection_1_Remove_m225714_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29591_MethodInfos[] =
{
	&ICollection_1_get_Count_m225708_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225709_MethodInfo,
	&ICollection_1_Add_m225710_MethodInfo,
	&ICollection_1_Clear_m225711_MethodInfo,
	&ICollection_1_Contains_m225712_MethodInfo,
	&ICollection_1_CopyTo_m225713_MethodInfo,
	&ICollection_1_Remove_m225714_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29593_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29591_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29593_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29591_0_0_0;
extern Il2CppType ICollection_1_t29591_1_0_0;
struct ICollection_1_t29591;
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29591_GenericClass;
TypeInfo ICollection_1_t29591_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29591_MethodInfos/* methods */
	, ICollection_1_t29591_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29591_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29591_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29591_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29591_0_0_0/* byval_arg */
	, &ICollection_1_t29591_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29591_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29593_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBDragToMove>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBDragToMove>
extern TypeInfo IEnumerable_1_t29593_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26928_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBDragToMove>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225715_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29593_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26928_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29593_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225715_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29593_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29593_0_0_0;
extern Il2CppType IEnumerable_1_t29593_1_0_0;
struct IEnumerable_1_t29593;
extern TypeInfo IEnumerable_1_t29593_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29593_GenericClass;
TypeInfo IEnumerable_1_t29593_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29593_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29593_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29593_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29593_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29593_0_0_0/* byval_arg */
	, &IEnumerable_1_t29593_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29593_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29592_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBDragToMove>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBDragToMove>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBDragToMove>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBDragToMove>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBDragToMove>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBDragToMove>
extern MethodInfo IList_1_get_Item_m225716_MethodInfo;
extern MethodInfo IList_1_set_Item_m225717_MethodInfo;
static PropertyInfo IList_1_t29592____Item_PropertyInfo = 
{
	&IList_1_t29592_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225716_MethodInfo/* get */
	, &IList_1_set_Item_m225717_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29592_PropertyInfos[] =
{
	&IList_1_t29592____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBDragToMove_t132_0_0_0;
static ParameterInfo IList_1_t29592_IList_1_IndexOf_m225718_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBDragToMove_t132_0_0_0},
};
extern TypeInfo IList_1_t29592_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBDragToMove>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225718_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29592_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29592_IList_1_IndexOf_m225718_ParameterInfos/* parameters */
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
extern Il2CppType TBDragToMove_t132_0_0_0;
static ParameterInfo IList_1_t29592_IList_1_Insert_m225719_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBDragToMove_t132_0_0_0},
};
extern TypeInfo IList_1_t29592_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBDragToMove>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225719_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29592_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29592_IList_1_Insert_m225719_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29592_IList_1_RemoveAt_m225720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29592_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBDragToMove>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225720_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29592_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29592_IList_1_RemoveAt_m225720_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29592_IList_1_get_Item_m225716_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29592_il2cpp_TypeInfo;
extern Il2CppType TBDragToMove_t132_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBDragToMove>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225716_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29592_il2cpp_TypeInfo/* declaring_type */
	, &TBDragToMove_t132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29592_IList_1_get_Item_m225716_ParameterInfos/* parameters */
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
extern Il2CppType TBDragToMove_t132_0_0_0;
static ParameterInfo IList_1_t29592_IList_1_set_Item_m225717_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBDragToMove_t132_0_0_0},
};
extern TypeInfo IList_1_t29592_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBDragToMove>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225717_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29592_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29592_IList_1_set_Item_m225717_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29592_MethodInfos[] =
{
	&IList_1_IndexOf_m225718_MethodInfo,
	&IList_1_Insert_m225719_MethodInfo,
	&IList_1_RemoveAt_m225720_MethodInfo,
	&IList_1_get_Item_m225716_MethodInfo,
	&IList_1_set_Item_m225717_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29591_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29593_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29592_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29591_il2cpp_TypeInfo,
	&IEnumerable_1_t29593_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29592_0_0_0;
extern Il2CppType IList_1_t29592_1_0_0;
struct IList_1_t29592;
extern TypeInfo IList_1_t29592_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29592_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29592_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29592_MethodInfos/* methods */
	, IList_1_t29592_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29592_il2cpp_TypeInfo/* element_class */
	, IList_1_t29592_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29592_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29592_0_0_0/* byval_arg */
	, &IList_1_t29592_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29592_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBDragToMove>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9132_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBDragToMove>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_34MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBDragToMove>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_30.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9132_il2cpp_TypeInfo;
extern TypeInfo TBDragToMove_t132_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBDragToMove>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_30MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62194_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62196_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBDragToMove>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBDragToMove>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBDragToMove>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9132____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9132_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9132, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9132_FieldInfos[] =
{
	&CachedInvokableCall_1_t9132____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBDragToMove_t132_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9132_CachedInvokableCall_1__ctor_m62192_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBDragToMove_t132_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9132_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBDragToMove>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62192_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9132_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9132_CachedInvokableCall_1__ctor_m62192_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9132_CachedInvokableCall_1_Invoke_m62193_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9132_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBDragToMove>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62193_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9132_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9132_CachedInvokableCall_1_Invoke_m62193_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9132_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62192_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62193_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62193_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62197_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9132_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62193_MethodInfo,
	&InvokableCall_1_Find_m62197_MethodInfo,
};
extern Il2CppType UnityAction_1_t9134_0_0_0;
extern TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBDragToMove_t132_m182215_MethodInfo;
extern TypeInfo TBDragToMove_t132_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62199_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62194_MethodInfo;
extern TypeInfo TBDragToMove_t132_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62196_MethodInfo;
static void* CachedInvokableCall_1_t9132_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9134_0_0_0,
	&UnityAction_1_t9134_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBDragToMove_t132_m182215_MethodInfo,
	&TBDragToMove_t132_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62199_MethodInfo,
	&InvokableCall_1__ctor_m62194_MethodInfo,
	&TBDragToMove_t132_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62196_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9132_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9132_1_0_0;
extern TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9132;
extern TypeInfo CachedInvokableCall_1_t9132_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9132_GenericClass;
TypeInfo CachedInvokableCall_1_t9132_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9132_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9132_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9133_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9132_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9132_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9132_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9132_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9132_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9132_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9132_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9132)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBDragToMove>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_37.h"
extern TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBDragToMove_t132_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TBDragToMove>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_37MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9134_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBDragToMove_t132_m182215_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62199_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBDragToMove>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBDragToMove>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBDragToMove_t132_m182215(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBDragToMove_t132_m182215_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBDragToMove>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBDragToMove>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBDragToMove>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBDragToMove>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBDragToMove>
extern Il2CppType UnityAction_1_t9134_0_0_1;
FieldInfo InvokableCall_1_t9133____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9134_0_0_1/* type */
	, &InvokableCall_1_t9133_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9133, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9133_FieldInfos[] =
{
	&InvokableCall_1_t9133____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9133_InvokableCall_1__ctor_m62194_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBDragToMove>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62194_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9133_InvokableCall_1__ctor_m62194_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9134_0_0_0;
static ParameterInfo InvokableCall_1_t9133_InvokableCall_1__ctor_m62195_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9134_0_0_0},
};
extern TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBDragToMove>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62195_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9133_InvokableCall_1__ctor_m62195_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9133_InvokableCall_1_Invoke_m62196_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBDragToMove>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62196_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9133_InvokableCall_1_Invoke_m62196_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9133_InvokableCall_1_Find_m62197_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBDragToMove>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62197_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9133_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9133_InvokableCall_1_Find_m62197_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9133_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62194_MethodInfo,
	&InvokableCall_1__ctor_m62195_MethodInfo,
	&InvokableCall_1_Invoke_m62196_MethodInfo,
	&InvokableCall_1_Find_m62197_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62196_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62197_MethodInfo;
static MethodInfo* InvokableCall_1_t9133_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62196_MethodInfo,
	&InvokableCall_1_Find_m62197_MethodInfo,
};
extern Il2CppType UnityAction_1_t9134_0_0_0;
extern TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBDragToMove_t132_m182215_MethodInfo;
extern TypeInfo TBDragToMove_t132_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62199_MethodInfo;
static void* InvokableCall_1_t9133_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9134_0_0_0,
	&UnityAction_1_t9134_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBDragToMove_t132_m182215_MethodInfo,
	&TBDragToMove_t132_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62199_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9133_0_0_0;
extern Il2CppType InvokableCall_1_t9133_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9133;
extern TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9133_GenericClass;
TypeInfo InvokableCall_1_t9133_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9133_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9133_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9133_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9133_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9133_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9133_0_0_0/* byval_arg */
	, &InvokableCall_1_t9133_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9133_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9133_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9133)/* instance_size */
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
extern TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TBDragToMove>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBDragToMove>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBDragToMove>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBDragToMove>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBDragToMove>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9134_UnityAction_1__ctor_m62198_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBDragToMove>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62198_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9134_UnityAction_1__ctor_m62198_ParameterInfos/* parameters */
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
extern Il2CppType TBDragToMove_t132_0_0_0;
static ParameterInfo UnityAction_1_t9134_UnityAction_1_Invoke_m62199_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBDragToMove_t132_0_0_0},
};
extern TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBDragToMove>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62199_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9134_UnityAction_1_Invoke_m62199_ParameterInfos/* parameters */
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
extern Il2CppType TBDragToMove_t132_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9134_UnityAction_1_BeginInvoke_m62200_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBDragToMove_t132_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBDragToMove>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62200_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9134_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9134_UnityAction_1_BeginInvoke_m62200_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9134_UnityAction_1_EndInvoke_m62201_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBDragToMove>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62201_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9134_UnityAction_1_EndInvoke_m62201_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9134_MethodInfos[] =
{
	&UnityAction_1__ctor_m62198_MethodInfo,
	&UnityAction_1_Invoke_m62199_MethodInfo,
	&UnityAction_1_BeginInvoke_m62200_MethodInfo,
	&UnityAction_1_EndInvoke_m62201_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62199_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62200_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62201_MethodInfo;
static MethodInfo* UnityAction_1_t9134_VTable[] =
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
	&UnityAction_1_Invoke_m62199_MethodInfo,
	&UnityAction_1_BeginInvoke_m62200_MethodInfo,
	&UnityAction_1_EndInvoke_m62201_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9134_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9134_0_0_0;
extern Il2CppType UnityAction_1_t9134_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9134;
extern TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9134_GenericClass;
TypeInfo UnityAction_1_t9134_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9134_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9134_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9134_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9134_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9134_0_0_0/* byval_arg */
	, &UnityAction_1_t9134_1_0_0/* this_arg */
	, UnityAction_1_t9134_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9134_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9134)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26929_il2cpp_TypeInfo;

// TBDragToMove/DragPlaneType
#include "AssemblyU2DCSharpU2Dfirstpass_TBDragToMove_DragPlaneType.h"


// T System.Collections.Generic.IEnumerator`1<TBDragToMove/DragPlaneType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBDragToMove/DragPlaneType>
extern MethodInfo IEnumerator_1_get_Current_m225721_MethodInfo;
static PropertyInfo IEnumerator_1_t26929____Current_PropertyInfo = 
{
	&IEnumerator_1_t26929_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225721_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26929_PropertyInfos[] =
{
	&IEnumerator_1_t26929____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26929_il2cpp_TypeInfo;
extern Il2CppType DragPlaneType_t131_0_0_0;
extern void* RuntimeInvoker_DragPlaneType_t131 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBDragToMove/DragPlaneType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225721_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26929_il2cpp_TypeInfo/* declaring_type */
	, &DragPlaneType_t131_0_0_0/* return_type */
	, RuntimeInvoker_DragPlaneType_t131/* invoker_method */
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
static MethodInfo* IEnumerator_1_t26929_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225721_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26929_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26929_0_0_0;
extern Il2CppType IEnumerator_1_t26929_1_0_0;
struct IEnumerator_1_t26929;
extern TypeInfo IEnumerator_1_t26929_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26929_GenericClass;
TypeInfo IEnumerator_1_t26929_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26929_MethodInfos/* methods */
	, IEnumerator_1_t26929_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26929_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26929_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26929_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26929_0_0_0/* byval_arg */
	, &IEnumerator_1_t26929_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26929_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_119.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_119MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo;
extern TypeInfo DragPlaneType_t131_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62207_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDragPlaneType_t131_m182217_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBDragToMove/DragPlaneType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBDragToMove/DragPlaneType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDragPlaneType_t131_m182217 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisDragPlaneType_t131_m182217_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m62202_MethodInfo;
 void InternalEnumerator_1__ctor_m62202 (InternalEnumerator_1_t9135 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62203_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62203 (InternalEnumerator_1_t9135 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62204_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62204 (InternalEnumerator_1_t9135 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m62207(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m62207_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DragPlaneType_t131_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m62205_MethodInfo;
 void InternalEnumerator_1_Dispose_m62205 (InternalEnumerator_1_t9135 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m62206_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m62206 (InternalEnumerator_1_t9135 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m62207_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m62207 (InternalEnumerator_1_t9135 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDragPlaneType_t131_m182217(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDragPlaneType_t131_m182217_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9135____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9135, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9135____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9135, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9135_FieldInfos[] =
{
	&InternalEnumerator_1_t9135____array_FieldInfo,
	&InternalEnumerator_1_t9135____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62204_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9135____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9135_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62204_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62207_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9135____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9135_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62207_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9135_PropertyInfos[] =
{
	&InternalEnumerator_1_t9135____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9135____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9135_InternalEnumerator_1__ctor_m62202_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62202_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m62202/* method */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9135_InternalEnumerator_1__ctor_m62202_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62203_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62203/* method */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62204_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62204/* method */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62205_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m62205/* method */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62206_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m62206/* method */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo;
extern Il2CppType DragPlaneType_t131_0_0_0;
extern void* RuntimeInvoker_DragPlaneType_t131 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBDragToMove/DragPlaneType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62207_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m62207/* method */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* declaring_type */
	, &DragPlaneType_t131_0_0_0/* return_type */
	, RuntimeInvoker_DragPlaneType_t131/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t9135_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62202_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62203_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62204_MethodInfo,
	&InternalEnumerator_1_Dispose_m62205_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62206_MethodInfo,
	&InternalEnumerator_1_get_Current_m62207_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62204_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62206_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62203_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62205_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62207_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9135_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62204_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62206_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62203_MethodInfo,
	&InternalEnumerator_1_Dispose_m62205_MethodInfo,
	&InternalEnumerator_1_get_Current_m62207_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26929_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9135_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26929_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26929_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9135_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26929_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9135_0_0_0;
extern Il2CppType InternalEnumerator_1_t9135_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9135_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9135_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9135_MethodInfos/* methods */
	, InternalEnumerator_1_t9135_PropertyInfos/* properties */
	, InternalEnumerator_1_t9135_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9135_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9135_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9135_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9135_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9135_1_0_0/* this_arg */
	, InternalEnumerator_1_t9135_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9135_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9135)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>
extern MethodInfo ICollection_1_get_Count_m225722_MethodInfo;
static PropertyInfo ICollection_1_t29594____Count_PropertyInfo = 
{
	&ICollection_1_t29594_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225722_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225723_MethodInfo;
static PropertyInfo ICollection_1_t29594____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29594_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225723_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29594_PropertyInfos[] =
{
	&ICollection_1_t29594____Count_PropertyInfo,
	&ICollection_1_t29594____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::get_Count()
MethodInfo ICollection_1_get_Count_m225722_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29594_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225723_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29594_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DragPlaneType_t131_0_0_0;
static ParameterInfo ICollection_1_t29594_ICollection_1_Add_m225724_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DragPlaneType_t131_0_0_0},
};
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::Add(T)
MethodInfo ICollection_1_Add_m225724_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29594_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t29594_ICollection_1_Add_m225724_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::Clear()
MethodInfo ICollection_1_Clear_m225725_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29594_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DragPlaneType_t131_0_0_0;
static ParameterInfo ICollection_1_t29594_ICollection_1_Contains_m225726_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DragPlaneType_t131_0_0_0},
};
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::Contains(T)
MethodInfo ICollection_1_Contains_m225726_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29594_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t29594_ICollection_1_Contains_m225726_ParameterInfos/* parameters */
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
extern Il2CppType DragPlaneTypeU5BU5D_t24950_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29594_ICollection_1_CopyTo_m225727_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DragPlaneTypeU5BU5D_t24950_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225727_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29594_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29594_ICollection_1_CopyTo_m225727_ParameterInfos/* parameters */
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
extern Il2CppType DragPlaneType_t131_0_0_0;
static ParameterInfo ICollection_1_t29594_ICollection_1_Remove_m225728_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DragPlaneType_t131_0_0_0},
};
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBDragToMove/DragPlaneType>::Remove(T)
MethodInfo ICollection_1_Remove_m225728_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29594_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t29594_ICollection_1_Remove_m225728_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29594_MethodInfos[] =
{
	&ICollection_1_get_Count_m225722_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225723_MethodInfo,
	&ICollection_1_Add_m225724_MethodInfo,
	&ICollection_1_Clear_m225725_MethodInfo,
	&ICollection_1_Contains_m225726_MethodInfo,
	&ICollection_1_CopyTo_m225727_MethodInfo,
	&ICollection_1_Remove_m225728_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29596_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29594_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29596_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29594_0_0_0;
extern Il2CppType ICollection_1_t29594_1_0_0;
struct ICollection_1_t29594;
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29594_GenericClass;
TypeInfo ICollection_1_t29594_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29594_MethodInfos/* methods */
	, ICollection_1_t29594_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29594_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29594_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29594_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29594_0_0_0/* byval_arg */
	, &ICollection_1_t29594_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29594_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29596_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBDragToMove/DragPlaneType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBDragToMove/DragPlaneType>
extern TypeInfo IEnumerable_1_t29596_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26929_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBDragToMove/DragPlaneType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225729_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29596_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26929_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29596_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225729_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29596_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29596_0_0_0;
extern Il2CppType IEnumerable_1_t29596_1_0_0;
struct IEnumerable_1_t29596;
extern TypeInfo IEnumerable_1_t29596_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29596_GenericClass;
TypeInfo IEnumerable_1_t29596_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29596_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29596_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29596_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29596_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29596_0_0_0/* byval_arg */
	, &IEnumerable_1_t29596_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29596_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29595_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>
extern MethodInfo IList_1_get_Item_m225730_MethodInfo;
extern MethodInfo IList_1_set_Item_m225731_MethodInfo;
static PropertyInfo IList_1_t29595____Item_PropertyInfo = 
{
	&IList_1_t29595_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225730_MethodInfo/* get */
	, &IList_1_set_Item_m225731_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29595_PropertyInfos[] =
{
	&IList_1_t29595____Item_PropertyInfo,
	NULL
};
extern Il2CppType DragPlaneType_t131_0_0_0;
static ParameterInfo IList_1_t29595_IList_1_IndexOf_m225732_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DragPlaneType_t131_0_0_0},
};
extern TypeInfo IList_1_t29595_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225732_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29595_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t29595_IList_1_IndexOf_m225732_ParameterInfos/* parameters */
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
extern Il2CppType DragPlaneType_t131_0_0_0;
static ParameterInfo IList_1_t29595_IList_1_Insert_m225733_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DragPlaneType_t131_0_0_0},
};
extern TypeInfo IList_1_t29595_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225733_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29595_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t29595_IList_1_Insert_m225733_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29595_IList_1_RemoveAt_m225734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29595_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225734_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29595_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29595_IList_1_RemoveAt_m225734_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29595_IList_1_get_Item_m225730_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29595_il2cpp_TypeInfo;
extern Il2CppType DragPlaneType_t131_0_0_0;
extern void* RuntimeInvoker_DragPlaneType_t131_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225730_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29595_il2cpp_TypeInfo/* declaring_type */
	, &DragPlaneType_t131_0_0_0/* return_type */
	, RuntimeInvoker_DragPlaneType_t131_Int32_t73/* invoker_method */
	, IList_1_t29595_IList_1_get_Item_m225730_ParameterInfos/* parameters */
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
extern Il2CppType DragPlaneType_t131_0_0_0;
static ParameterInfo IList_1_t29595_IList_1_set_Item_m225731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DragPlaneType_t131_0_0_0},
};
extern TypeInfo IList_1_t29595_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBDragToMove/DragPlaneType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225731_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29595_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t29595_IList_1_set_Item_m225731_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29595_MethodInfos[] =
{
	&IList_1_IndexOf_m225732_MethodInfo,
	&IList_1_Insert_m225733_MethodInfo,
	&IList_1_RemoveAt_m225734_MethodInfo,
	&IList_1_get_Item_m225730_MethodInfo,
	&IList_1_set_Item_m225731_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29594_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29596_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29595_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29594_il2cpp_TypeInfo,
	&IEnumerable_1_t29596_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29595_0_0_0;
extern Il2CppType IList_1_t29595_1_0_0;
struct IList_1_t29595;
extern TypeInfo IList_1_t29595_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29595_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29595_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29595_MethodInfos/* methods */
	, IList_1_t29595_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29595_il2cpp_TypeInfo/* element_class */
	, IList_1_t29595_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29595_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29595_0_0_0/* byval_arg */
	, &IList_1_t29595_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29595_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t26930_il2cpp_TypeInfo;

// TBHoverChangeMaterial
#include "AssemblyU2DCSharpU2Dfirstpass_TBHoverChangeMaterial.h"


// T System.Collections.Generic.IEnumerator`1<TBHoverChangeMaterial>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBHoverChangeMaterial>
extern MethodInfo IEnumerator_1_get_Current_m225735_MethodInfo;
static PropertyInfo IEnumerator_1_t26930____Current_PropertyInfo = 
{
	&IEnumerator_1_t26930_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225735_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26930_PropertyInfos[] =
{
	&IEnumerator_1_t26930____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26930_il2cpp_TypeInfo;
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBHoverChangeMaterial>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225735_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26930_il2cpp_TypeInfo/* declaring_type */
	, &TBHoverChangeMaterial_t134_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26930_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225735_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26930_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26930_0_0_0;
extern Il2CppType IEnumerator_1_t26930_1_0_0;
struct IEnumerator_1_t26930;
extern TypeInfo IEnumerator_1_t26930_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26930_GenericClass;
TypeInfo IEnumerator_1_t26930_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26930_MethodInfos/* methods */
	, IEnumerator_1_t26930_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26930_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26930_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26930_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26930_0_0_0/* byval_arg */
	, &IEnumerator_1_t26930_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26930_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBHoverChangeMaterial>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_120.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBHoverChangeMaterial>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_120MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo;
extern TypeInfo TBHoverChangeMaterial_t134_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62213_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBHoverChangeMaterial_t134_m182228_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBHoverChangeMaterial>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBHoverChangeMaterial>(System.Int32)
#define Array_InternalArray__get_Item_TisTBHoverChangeMaterial_t134_m182228(__this, p0, method) (TBHoverChangeMaterial_t134 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBHoverChangeMaterial_t134_m182228_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::MoveNext()
// T System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBHoverChangeMaterial>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9136____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9136, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9136____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9136, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9136_FieldInfos[] =
{
	&InternalEnumerator_1_t9136____array_FieldInfo,
	&InternalEnumerator_1_t9136____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62210_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9136____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9136_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62210_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62213_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9136____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9136_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9136_PropertyInfos[] =
{
	&InternalEnumerator_1_t9136____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9136____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9136_InternalEnumerator_1__ctor_m62208_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62208_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9136_InternalEnumerator_1__ctor_m62208_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62209_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62210_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62211_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62212_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo;
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBHoverChangeMaterial>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62213_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* declaring_type */
	, &TBHoverChangeMaterial_t134_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9136_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62208_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62209_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62210_MethodInfo,
	&InternalEnumerator_1_Dispose_m62211_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62212_MethodInfo,
	&InternalEnumerator_1_get_Current_m62213_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62210_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62212_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62209_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62211_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62213_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9136_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62210_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62212_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62209_MethodInfo,
	&InternalEnumerator_1_Dispose_m62211_MethodInfo,
	&InternalEnumerator_1_get_Current_m62213_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26930_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9136_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26930_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26930_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9136_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26930_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62213_MethodInfo;
extern TypeInfo TBHoverChangeMaterial_t134_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBHoverChangeMaterial_t134_m182228_MethodInfo;
static void* InternalEnumerator_1_t9136_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62213_MethodInfo,
	&TBHoverChangeMaterial_t134_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBHoverChangeMaterial_t134_m182228_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9136_0_0_0;
extern Il2CppType InternalEnumerator_1_t9136_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9136_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9136_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9136_MethodInfos/* methods */
	, InternalEnumerator_1_t9136_PropertyInfos/* properties */
	, InternalEnumerator_1_t9136_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9136_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9136_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9136_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9136_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9136_1_0_0/* this_arg */
	, InternalEnumerator_1_t9136_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9136_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9136_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9136)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>
extern MethodInfo ICollection_1_get_Count_m225736_MethodInfo;
static PropertyInfo ICollection_1_t29597____Count_PropertyInfo = 
{
	&ICollection_1_t29597_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225736_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225737_MethodInfo;
static PropertyInfo ICollection_1_t29597____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29597_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225737_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29597_PropertyInfos[] =
{
	&ICollection_1_t29597____Count_PropertyInfo,
	&ICollection_1_t29597____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::get_Count()
MethodInfo ICollection_1_get_Count_m225736_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29597_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225737_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29597_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
static ParameterInfo ICollection_1_t29597_ICollection_1_Add_m225738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterial_t134_0_0_0},
};
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::Add(T)
MethodInfo ICollection_1_Add_m225738_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29597_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29597_ICollection_1_Add_m225738_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::Clear()
MethodInfo ICollection_1_Clear_m225739_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29597_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
static ParameterInfo ICollection_1_t29597_ICollection_1_Contains_m225740_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterial_t134_0_0_0},
};
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::Contains(T)
MethodInfo ICollection_1_Contains_m225740_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29597_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29597_ICollection_1_Contains_m225740_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeMaterialU5BU5D_t24951_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29597_ICollection_1_CopyTo_m225741_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterialU5BU5D_t24951_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225741_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29597_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29597_ICollection_1_CopyTo_m225741_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
static ParameterInfo ICollection_1_t29597_ICollection_1_Remove_m225742_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterial_t134_0_0_0},
};
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeMaterial>::Remove(T)
MethodInfo ICollection_1_Remove_m225742_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29597_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29597_ICollection_1_Remove_m225742_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29597_MethodInfos[] =
{
	&ICollection_1_get_Count_m225736_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225737_MethodInfo,
	&ICollection_1_Add_m225738_MethodInfo,
	&ICollection_1_Clear_m225739_MethodInfo,
	&ICollection_1_Contains_m225740_MethodInfo,
	&ICollection_1_CopyTo_m225741_MethodInfo,
	&ICollection_1_Remove_m225742_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29599_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29597_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29599_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29597_0_0_0;
extern Il2CppType ICollection_1_t29597_1_0_0;
struct ICollection_1_t29597;
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29597_GenericClass;
TypeInfo ICollection_1_t29597_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29597_MethodInfos/* methods */
	, ICollection_1_t29597_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29597_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29597_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29597_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29597_0_0_0/* byval_arg */
	, &ICollection_1_t29597_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29597_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29599_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBHoverChangeMaterial>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBHoverChangeMaterial>
extern TypeInfo IEnumerable_1_t29599_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26930_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBHoverChangeMaterial>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225743_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29599_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26930_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29599_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225743_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29599_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29599_0_0_0;
extern Il2CppType IEnumerable_1_t29599_1_0_0;
struct IEnumerable_1_t29599;
extern TypeInfo IEnumerable_1_t29599_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29599_GenericClass;
TypeInfo IEnumerable_1_t29599_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29599_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29599_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29599_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29599_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29599_0_0_0/* byval_arg */
	, &IEnumerable_1_t29599_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29599_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29598_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBHoverChangeMaterial>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBHoverChangeMaterial>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBHoverChangeMaterial>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBHoverChangeMaterial>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBHoverChangeMaterial>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBHoverChangeMaterial>
extern MethodInfo IList_1_get_Item_m225744_MethodInfo;
extern MethodInfo IList_1_set_Item_m225745_MethodInfo;
static PropertyInfo IList_1_t29598____Item_PropertyInfo = 
{
	&IList_1_t29598_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225744_MethodInfo/* get */
	, &IList_1_set_Item_m225745_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29598_PropertyInfos[] =
{
	&IList_1_t29598____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
static ParameterInfo IList_1_t29598_IList_1_IndexOf_m225746_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterial_t134_0_0_0},
};
extern TypeInfo IList_1_t29598_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBHoverChangeMaterial>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225746_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29598_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29598_IList_1_IndexOf_m225746_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
static ParameterInfo IList_1_t29598_IList_1_Insert_m225747_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterial_t134_0_0_0},
};
extern TypeInfo IList_1_t29598_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBHoverChangeMaterial>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225747_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29598_IList_1_Insert_m225747_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29598_IList_1_RemoveAt_m225748_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29598_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBHoverChangeMaterial>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225748_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29598_IList_1_RemoveAt_m225748_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29598_IList_1_get_Item_m225744_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29598_il2cpp_TypeInfo;
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBHoverChangeMaterial>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225744_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29598_il2cpp_TypeInfo/* declaring_type */
	, &TBHoverChangeMaterial_t134_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29598_IList_1_get_Item_m225744_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
static ParameterInfo IList_1_t29598_IList_1_set_Item_m225745_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterial_t134_0_0_0},
};
extern TypeInfo IList_1_t29598_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBHoverChangeMaterial>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225745_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29598_IList_1_set_Item_m225745_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29598_MethodInfos[] =
{
	&IList_1_IndexOf_m225746_MethodInfo,
	&IList_1_Insert_m225747_MethodInfo,
	&IList_1_RemoveAt_m225748_MethodInfo,
	&IList_1_get_Item_m225744_MethodInfo,
	&IList_1_set_Item_m225745_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29597_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29599_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29598_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29597_il2cpp_TypeInfo,
	&IEnumerable_1_t29599_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29598_0_0_0;
extern Il2CppType IList_1_t29598_1_0_0;
struct IList_1_t29598;
extern TypeInfo IList_1_t29598_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29598_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29598_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29598_MethodInfos/* methods */
	, IList_1_t29598_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29598_il2cpp_TypeInfo/* element_class */
	, IList_1_t29598_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29598_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29598_0_0_0/* byval_arg */
	, &IList_1_t29598_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29598_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeMaterial>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_35.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9137_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeMaterial>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_35MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_31.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9137_il2cpp_TypeInfo;
extern TypeInfo TBHoverChangeMaterial_t134_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_31MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62216_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62218_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeMaterial>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeMaterial>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeMaterial>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9137____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9137_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9137, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9137_FieldInfos[] =
{
	&CachedInvokableCall_1_t9137____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9137_CachedInvokableCall_1__ctor_m62214_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterial_t134_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9137_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeMaterial>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62214_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9137_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9137_CachedInvokableCall_1__ctor_m62214_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9137_CachedInvokableCall_1_Invoke_m62215_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9137_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeMaterial>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62215_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9137_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9137_CachedInvokableCall_1_Invoke_m62215_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9137_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62214_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62215_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62215_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62219_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9137_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62215_MethodInfo,
	&InvokableCall_1_Find_m62219_MethodInfo,
};
extern Il2CppType UnityAction_1_t9139_0_0_0;
extern TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeMaterial_t134_m182238_MethodInfo;
extern TypeInfo TBHoverChangeMaterial_t134_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62221_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62216_MethodInfo;
extern TypeInfo TBHoverChangeMaterial_t134_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62218_MethodInfo;
static void* CachedInvokableCall_1_t9137_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9139_0_0_0,
	&UnityAction_1_t9139_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeMaterial_t134_m182238_MethodInfo,
	&TBHoverChangeMaterial_t134_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62221_MethodInfo,
	&InvokableCall_1__ctor_m62216_MethodInfo,
	&TBHoverChangeMaterial_t134_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62218_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9137_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9137_1_0_0;
extern TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9137;
extern TypeInfo CachedInvokableCall_1_t9137_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9137_GenericClass;
TypeInfo CachedInvokableCall_1_t9137_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9137_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9137_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9138_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9137_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9137_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9137_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9137_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9137_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9137_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9137_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9137)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_38.h"
extern TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBHoverChangeMaterial_t134_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_38MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9139_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeMaterial_t134_m182238_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62221_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBHoverChangeMaterial>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBHoverChangeMaterial>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeMaterial_t134_m182238(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeMaterial_t134_m182238_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>
extern Il2CppType UnityAction_1_t9139_0_0_1;
FieldInfo InvokableCall_1_t9138____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9139_0_0_1/* type */
	, &InvokableCall_1_t9138_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9138, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9138_FieldInfos[] =
{
	&InvokableCall_1_t9138____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9138_InvokableCall_1__ctor_m62216_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62216_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9138_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9138_InvokableCall_1__ctor_m62216_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9139_0_0_0;
static ParameterInfo InvokableCall_1_t9138_InvokableCall_1__ctor_m62217_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9139_0_0_0},
};
extern TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62217_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9138_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9138_InvokableCall_1__ctor_m62217_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9138_InvokableCall_1_Invoke_m62218_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62218_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9138_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9138_InvokableCall_1_Invoke_m62218_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9138_InvokableCall_1_Find_m62219_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBHoverChangeMaterial>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62219_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9138_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9138_InvokableCall_1_Find_m62219_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9138_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62216_MethodInfo,
	&InvokableCall_1__ctor_m62217_MethodInfo,
	&InvokableCall_1_Invoke_m62218_MethodInfo,
	&InvokableCall_1_Find_m62219_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62218_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62219_MethodInfo;
static MethodInfo* InvokableCall_1_t9138_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62218_MethodInfo,
	&InvokableCall_1_Find_m62219_MethodInfo,
};
extern Il2CppType UnityAction_1_t9139_0_0_0;
extern TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeMaterial_t134_m182238_MethodInfo;
extern TypeInfo TBHoverChangeMaterial_t134_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62221_MethodInfo;
static void* InvokableCall_1_t9138_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9139_0_0_0,
	&UnityAction_1_t9139_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeMaterial_t134_m182238_MethodInfo,
	&TBHoverChangeMaterial_t134_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62221_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9138_0_0_0;
extern Il2CppType InvokableCall_1_t9138_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9138;
extern TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9138_GenericClass;
TypeInfo InvokableCall_1_t9138_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9138_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9138_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9138_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9138_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9138_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9138_0_0_0/* byval_arg */
	, &InvokableCall_1_t9138_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9138_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9138_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9138)/* instance_size */
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
extern TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9139_UnityAction_1__ctor_m62220_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62220_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9139_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9139_UnityAction_1__ctor_m62220_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
static ParameterInfo UnityAction_1_t9139_UnityAction_1_Invoke_m62221_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterial_t134_0_0_0},
};
extern TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62221_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9139_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9139_UnityAction_1_Invoke_m62221_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeMaterial_t134_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9139_UnityAction_1_BeginInvoke_m62222_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeMaterial_t134_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62222_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9139_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9139_UnityAction_1_BeginInvoke_m62222_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9139_UnityAction_1_EndInvoke_m62223_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeMaterial>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62223_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9139_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9139_UnityAction_1_EndInvoke_m62223_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9139_MethodInfos[] =
{
	&UnityAction_1__ctor_m62220_MethodInfo,
	&UnityAction_1_Invoke_m62221_MethodInfo,
	&UnityAction_1_BeginInvoke_m62222_MethodInfo,
	&UnityAction_1_EndInvoke_m62223_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62221_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62222_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62223_MethodInfo;
static MethodInfo* UnityAction_1_t9139_VTable[] =
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
	&UnityAction_1_Invoke_m62221_MethodInfo,
	&UnityAction_1_BeginInvoke_m62222_MethodInfo,
	&UnityAction_1_EndInvoke_m62223_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9139_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9139_0_0_0;
extern Il2CppType UnityAction_1_t9139_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9139;
extern TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9139_GenericClass;
TypeInfo UnityAction_1_t9139_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9139_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9139_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9139_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9139_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9139_0_0_0/* byval_arg */
	, &UnityAction_1_t9139_1_0_0/* this_arg */
	, UnityAction_1_t9139_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9139_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9139)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26931_il2cpp_TypeInfo;

// TBHoverChangeScale
#include "AssemblyU2DCSharpU2Dfirstpass_TBHoverChangeScale.h"


// T System.Collections.Generic.IEnumerator`1<TBHoverChangeScale>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBHoverChangeScale>
extern MethodInfo IEnumerator_1_get_Current_m225749_MethodInfo;
static PropertyInfo IEnumerator_1_t26931____Current_PropertyInfo = 
{
	&IEnumerator_1_t26931_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225749_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26931_PropertyInfos[] =
{
	&IEnumerator_1_t26931____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26931_il2cpp_TypeInfo;
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBHoverChangeScale>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225749_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26931_il2cpp_TypeInfo/* declaring_type */
	, &TBHoverChangeScale_t135_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26931_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225749_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26931_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26931_0_0_0;
extern Il2CppType IEnumerator_1_t26931_1_0_0;
struct IEnumerator_1_t26931;
extern TypeInfo IEnumerator_1_t26931_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26931_GenericClass;
TypeInfo IEnumerator_1_t26931_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26931_MethodInfos/* methods */
	, IEnumerator_1_t26931_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26931_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26931_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26931_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26931_0_0_0/* byval_arg */
	, &IEnumerator_1_t26931_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26931_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBHoverChangeScale>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_121.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBHoverChangeScale>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_121MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo;
extern TypeInfo TBHoverChangeScale_t135_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62229_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBHoverChangeScale_t135_m182240_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBHoverChangeScale>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBHoverChangeScale>(System.Int32)
#define Array_InternalArray__get_Item_TisTBHoverChangeScale_t135_m182240(__this, p0, method) (TBHoverChangeScale_t135 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBHoverChangeScale_t135_m182240_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBHoverChangeScale>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeScale>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBHoverChangeScale>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeScale>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBHoverChangeScale>::MoveNext()
// T System.Array/InternalEnumerator`1<TBHoverChangeScale>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBHoverChangeScale>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9140____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9140, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9140____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9140, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9140_FieldInfos[] =
{
	&InternalEnumerator_1_t9140____array_FieldInfo,
	&InternalEnumerator_1_t9140____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62226_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9140____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9140_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62226_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62229_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9140____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9140_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62229_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9140_PropertyInfos[] =
{
	&InternalEnumerator_1_t9140____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9140____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9140_InternalEnumerator_1__ctor_m62224_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeScale>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62224_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9140_InternalEnumerator_1__ctor_m62224_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeScale>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62225_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBHoverChangeScale>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62226_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBHoverChangeScale>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62227_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBHoverChangeScale>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62228_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo;
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBHoverChangeScale>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62229_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* declaring_type */
	, &TBHoverChangeScale_t135_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9140_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62224_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62225_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62226_MethodInfo,
	&InternalEnumerator_1_Dispose_m62227_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62228_MethodInfo,
	&InternalEnumerator_1_get_Current_m62229_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62226_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62228_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62225_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62227_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62229_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9140_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62226_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62228_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62225_MethodInfo,
	&InternalEnumerator_1_Dispose_m62227_MethodInfo,
	&InternalEnumerator_1_get_Current_m62229_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26931_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9140_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26931_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26931_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9140_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26931_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62229_MethodInfo;
extern TypeInfo TBHoverChangeScale_t135_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBHoverChangeScale_t135_m182240_MethodInfo;
static void* InternalEnumerator_1_t9140_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62229_MethodInfo,
	&TBHoverChangeScale_t135_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBHoverChangeScale_t135_m182240_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9140_0_0_0;
extern Il2CppType InternalEnumerator_1_t9140_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9140_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9140_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9140_MethodInfos/* methods */
	, InternalEnumerator_1_t9140_PropertyInfos/* properties */
	, InternalEnumerator_1_t9140_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9140_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9140_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9140_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9140_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9140_1_0_0/* this_arg */
	, InternalEnumerator_1_t9140_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9140_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9140_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9140)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBHoverChangeScale>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeScale>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeScale>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeScale>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeScale>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeScale>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeScale>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBHoverChangeScale>
extern MethodInfo ICollection_1_get_Count_m225750_MethodInfo;
static PropertyInfo ICollection_1_t29600____Count_PropertyInfo = 
{
	&ICollection_1_t29600_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225750_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225751_MethodInfo;
static PropertyInfo ICollection_1_t29600____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29600_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225751_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29600_PropertyInfos[] =
{
	&ICollection_1_t29600____Count_PropertyInfo,
	&ICollection_1_t29600____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBHoverChangeScale>::get_Count()
MethodInfo ICollection_1_get_Count_m225750_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29600_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeScale>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225751_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29600_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
static ParameterInfo ICollection_1_t29600_ICollection_1_Add_m225752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScale_t135_0_0_0},
};
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeScale>::Add(T)
MethodInfo ICollection_1_Add_m225752_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29600_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29600_ICollection_1_Add_m225752_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeScale>::Clear()
MethodInfo ICollection_1_Clear_m225753_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29600_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
static ParameterInfo ICollection_1_t29600_ICollection_1_Contains_m225754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScale_t135_0_0_0},
};
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeScale>::Contains(T)
MethodInfo ICollection_1_Contains_m225754_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29600_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29600_ICollection_1_Contains_m225754_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeScaleU5BU5D_t24952_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29600_ICollection_1_CopyTo_m225755_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScaleU5BU5D_t24952_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBHoverChangeScale>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225755_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29600_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29600_ICollection_1_CopyTo_m225755_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
static ParameterInfo ICollection_1_t29600_ICollection_1_Remove_m225756_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScale_t135_0_0_0},
};
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBHoverChangeScale>::Remove(T)
MethodInfo ICollection_1_Remove_m225756_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29600_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29600_ICollection_1_Remove_m225756_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29600_MethodInfos[] =
{
	&ICollection_1_get_Count_m225750_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225751_MethodInfo,
	&ICollection_1_Add_m225752_MethodInfo,
	&ICollection_1_Clear_m225753_MethodInfo,
	&ICollection_1_Contains_m225754_MethodInfo,
	&ICollection_1_CopyTo_m225755_MethodInfo,
	&ICollection_1_Remove_m225756_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29602_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29600_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29602_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29600_0_0_0;
extern Il2CppType ICollection_1_t29600_1_0_0;
struct ICollection_1_t29600;
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29600_GenericClass;
TypeInfo ICollection_1_t29600_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29600_MethodInfos/* methods */
	, ICollection_1_t29600_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29600_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29600_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29600_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29600_0_0_0/* byval_arg */
	, &ICollection_1_t29600_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29600_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29602_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBHoverChangeScale>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBHoverChangeScale>
extern TypeInfo IEnumerable_1_t29602_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26931_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBHoverChangeScale>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225757_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29602_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26931_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29602_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225757_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29602_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29602_0_0_0;
extern Il2CppType IEnumerable_1_t29602_1_0_0;
struct IEnumerable_1_t29602;
extern TypeInfo IEnumerable_1_t29602_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29602_GenericClass;
TypeInfo IEnumerable_1_t29602_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29602_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29602_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29602_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29602_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29602_0_0_0/* byval_arg */
	, &IEnumerable_1_t29602_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29602_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29601_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBHoverChangeScale>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBHoverChangeScale>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBHoverChangeScale>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBHoverChangeScale>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBHoverChangeScale>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBHoverChangeScale>
extern MethodInfo IList_1_get_Item_m225758_MethodInfo;
extern MethodInfo IList_1_set_Item_m225759_MethodInfo;
static PropertyInfo IList_1_t29601____Item_PropertyInfo = 
{
	&IList_1_t29601_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225758_MethodInfo/* get */
	, &IList_1_set_Item_m225759_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29601_PropertyInfos[] =
{
	&IList_1_t29601____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
static ParameterInfo IList_1_t29601_IList_1_IndexOf_m225760_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScale_t135_0_0_0},
};
extern TypeInfo IList_1_t29601_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBHoverChangeScale>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225760_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29601_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29601_IList_1_IndexOf_m225760_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
static ParameterInfo IList_1_t29601_IList_1_Insert_m225761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScale_t135_0_0_0},
};
extern TypeInfo IList_1_t29601_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBHoverChangeScale>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225761_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29601_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29601_IList_1_Insert_m225761_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29601_IList_1_RemoveAt_m225762_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29601_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBHoverChangeScale>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225762_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29601_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29601_IList_1_RemoveAt_m225762_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29601_IList_1_get_Item_m225758_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29601_il2cpp_TypeInfo;
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBHoverChangeScale>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225758_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29601_il2cpp_TypeInfo/* declaring_type */
	, &TBHoverChangeScale_t135_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29601_IList_1_get_Item_m225758_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
static ParameterInfo IList_1_t29601_IList_1_set_Item_m225759_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScale_t135_0_0_0},
};
extern TypeInfo IList_1_t29601_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBHoverChangeScale>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225759_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29601_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29601_IList_1_set_Item_m225759_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29601_MethodInfos[] =
{
	&IList_1_IndexOf_m225760_MethodInfo,
	&IList_1_Insert_m225761_MethodInfo,
	&IList_1_RemoveAt_m225762_MethodInfo,
	&IList_1_get_Item_m225758_MethodInfo,
	&IList_1_set_Item_m225759_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29600_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29602_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29601_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29600_il2cpp_TypeInfo,
	&IEnumerable_1_t29602_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29601_0_0_0;
extern Il2CppType IList_1_t29601_1_0_0;
struct IList_1_t29601;
extern TypeInfo IList_1_t29601_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29601_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29601_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29601_MethodInfos/* methods */
	, IList_1_t29601_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29601_il2cpp_TypeInfo/* element_class */
	, IList_1_t29601_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29601_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29601_0_0_0/* byval_arg */
	, &IList_1_t29601_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29601_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeScale>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_36.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9141_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeScale>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_36MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_32.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9141_il2cpp_TypeInfo;
extern TypeInfo TBHoverChangeScale_t135_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_32MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62232_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62234_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeScale>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeScale>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeScale>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9141____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9141_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9141, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9141_FieldInfos[] =
{
	&CachedInvokableCall_1_t9141____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9141_CachedInvokableCall_1__ctor_m62230_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScale_t135_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9141_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeScale>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62230_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9141_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9141_CachedInvokableCall_1__ctor_m62230_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9141_CachedInvokableCall_1_Invoke_m62231_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9141_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBHoverChangeScale>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62231_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9141_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9141_CachedInvokableCall_1_Invoke_m62231_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9141_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62230_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62231_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62231_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62235_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9141_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62231_MethodInfo,
	&InvokableCall_1_Find_m62235_MethodInfo,
};
extern Il2CppType UnityAction_1_t9143_0_0_0;
extern TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeScale_t135_m182250_MethodInfo;
extern TypeInfo TBHoverChangeScale_t135_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62237_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62232_MethodInfo;
extern TypeInfo TBHoverChangeScale_t135_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62234_MethodInfo;
static void* CachedInvokableCall_1_t9141_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9143_0_0_0,
	&UnityAction_1_t9143_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeScale_t135_m182250_MethodInfo,
	&TBHoverChangeScale_t135_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62237_MethodInfo,
	&InvokableCall_1__ctor_m62232_MethodInfo,
	&TBHoverChangeScale_t135_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62234_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9141_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9141_1_0_0;
extern TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9141;
extern TypeInfo CachedInvokableCall_1_t9141_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9141_GenericClass;
TypeInfo CachedInvokableCall_1_t9141_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9141_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9141_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9142_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9141_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9141_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9141_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9141_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9141_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9141_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9141_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9141)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBHoverChangeScale>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_39.h"
extern TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBHoverChangeScale_t135_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TBHoverChangeScale>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_39MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9143_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeScale_t135_m182250_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62237_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBHoverChangeScale>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBHoverChangeScale>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeScale_t135_m182250(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeScale_t135_m182250_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>
extern Il2CppType UnityAction_1_t9143_0_0_1;
FieldInfo InvokableCall_1_t9142____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9143_0_0_1/* type */
	, &InvokableCall_1_t9142_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9142, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9142_FieldInfos[] =
{
	&InvokableCall_1_t9142____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9142_InvokableCall_1__ctor_m62232_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62232_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9142_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9142_InvokableCall_1__ctor_m62232_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9143_0_0_0;
static ParameterInfo InvokableCall_1_t9142_InvokableCall_1__ctor_m62233_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9143_0_0_0},
};
extern TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62233_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9142_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9142_InvokableCall_1__ctor_m62233_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9142_InvokableCall_1_Invoke_m62234_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62234_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9142_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9142_InvokableCall_1_Invoke_m62234_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9142_InvokableCall_1_Find_m62235_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBHoverChangeScale>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62235_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9142_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9142_InvokableCall_1_Find_m62235_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9142_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62232_MethodInfo,
	&InvokableCall_1__ctor_m62233_MethodInfo,
	&InvokableCall_1_Invoke_m62234_MethodInfo,
	&InvokableCall_1_Find_m62235_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62234_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62235_MethodInfo;
static MethodInfo* InvokableCall_1_t9142_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62234_MethodInfo,
	&InvokableCall_1_Find_m62235_MethodInfo,
};
extern Il2CppType UnityAction_1_t9143_0_0_0;
extern TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeScale_t135_m182250_MethodInfo;
extern TypeInfo TBHoverChangeScale_t135_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62237_MethodInfo;
static void* InvokableCall_1_t9142_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9143_0_0_0,
	&UnityAction_1_t9143_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBHoverChangeScale_t135_m182250_MethodInfo,
	&TBHoverChangeScale_t135_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62237_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9142_0_0_0;
extern Il2CppType InvokableCall_1_t9142_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9142;
extern TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9142_GenericClass;
TypeInfo InvokableCall_1_t9142_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9142_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9142_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9142_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9142_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9142_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9142_0_0_0/* byval_arg */
	, &InvokableCall_1_t9142_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9142_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9142_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9142)/* instance_size */
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
extern TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeScale>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeScale>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBHoverChangeScale>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeScale>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBHoverChangeScale>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9143_UnityAction_1__ctor_m62236_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeScale>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62236_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9143_UnityAction_1__ctor_m62236_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
static ParameterInfo UnityAction_1_t9143_UnityAction_1_Invoke_m62237_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScale_t135_0_0_0},
};
extern TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeScale>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62237_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9143_UnityAction_1_Invoke_m62237_ParameterInfos/* parameters */
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
extern Il2CppType TBHoverChangeScale_t135_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9143_UnityAction_1_BeginInvoke_m62238_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBHoverChangeScale_t135_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBHoverChangeScale>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62238_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9143_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9143_UnityAction_1_BeginInvoke_m62238_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9143_UnityAction_1_EndInvoke_m62239_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBHoverChangeScale>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62239_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9143_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9143_UnityAction_1_EndInvoke_m62239_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9143_MethodInfos[] =
{
	&UnityAction_1__ctor_m62236_MethodInfo,
	&UnityAction_1_Invoke_m62237_MethodInfo,
	&UnityAction_1_BeginInvoke_m62238_MethodInfo,
	&UnityAction_1_EndInvoke_m62239_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62237_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62238_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62239_MethodInfo;
static MethodInfo* UnityAction_1_t9143_VTable[] =
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
	&UnityAction_1_Invoke_m62237_MethodInfo,
	&UnityAction_1_BeginInvoke_m62238_MethodInfo,
	&UnityAction_1_EndInvoke_m62239_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9143_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9143_0_0_0;
extern Il2CppType UnityAction_1_t9143_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9143;
extern TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9143_GenericClass;
TypeInfo UnityAction_1_t9143_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9143_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9143_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9143_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9143_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9143_0_0_0/* byval_arg */
	, &UnityAction_1_t9143_1_0_0/* this_arg */
	, UnityAction_1_t9143_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9143_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9143)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26932_il2cpp_TypeInfo;

// TBPinchToScale
#include "AssemblyU2DCSharpU2Dfirstpass_TBPinchToScale.h"


// T System.Collections.Generic.IEnumerator`1<TBPinchToScale>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBPinchToScale>
extern MethodInfo IEnumerator_1_get_Current_m225763_MethodInfo;
static PropertyInfo IEnumerator_1_t26932____Current_PropertyInfo = 
{
	&IEnumerator_1_t26932_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225763_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26932_PropertyInfos[] =
{
	&IEnumerator_1_t26932____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26932_il2cpp_TypeInfo;
extern Il2CppType TBPinchToScale_t136_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBPinchToScale>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225763_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26932_il2cpp_TypeInfo/* declaring_type */
	, &TBPinchToScale_t136_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26932_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225763_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26932_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26932_0_0_0;
extern Il2CppType IEnumerator_1_t26932_1_0_0;
struct IEnumerator_1_t26932;
extern TypeInfo IEnumerator_1_t26932_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26932_GenericClass;
TypeInfo IEnumerator_1_t26932_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26932_MethodInfos/* methods */
	, IEnumerator_1_t26932_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26932_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26932_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26932_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26932_0_0_0/* byval_arg */
	, &IEnumerator_1_t26932_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26932_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBPinchToScale>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_122.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBPinchToScale>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_122MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo;
extern TypeInfo TBPinchToScale_t136_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62245_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBPinchToScale_t136_m182252_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBPinchToScale>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBPinchToScale>(System.Int32)
#define Array_InternalArray__get_Item_TisTBPinchToScale_t136_m182252(__this, p0, method) (TBPinchToScale_t136 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBPinchToScale_t136_m182252_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBPinchToScale>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBPinchToScale>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBPinchToScale>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBPinchToScale>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBPinchToScale>::MoveNext()
// T System.Array/InternalEnumerator`1<TBPinchToScale>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBPinchToScale>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9144____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9144, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9144____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9144, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9144_FieldInfos[] =
{
	&InternalEnumerator_1_t9144____array_FieldInfo,
	&InternalEnumerator_1_t9144____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62242_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9144____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9144_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62242_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62245_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9144____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9144_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62245_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9144_PropertyInfos[] =
{
	&InternalEnumerator_1_t9144____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9144____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9144_InternalEnumerator_1__ctor_m62240_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPinchToScale>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62240_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9144_InternalEnumerator_1__ctor_m62240_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPinchToScale>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62241_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBPinchToScale>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62242_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBPinchToScale>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62243_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBPinchToScale>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62244_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo;
extern Il2CppType TBPinchToScale_t136_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBPinchToScale>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62245_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* declaring_type */
	, &TBPinchToScale_t136_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9144_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62240_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62241_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62242_MethodInfo,
	&InternalEnumerator_1_Dispose_m62243_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62244_MethodInfo,
	&InternalEnumerator_1_get_Current_m62245_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62242_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62244_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62241_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62243_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62245_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9144_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62242_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62244_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62241_MethodInfo,
	&InternalEnumerator_1_Dispose_m62243_MethodInfo,
	&InternalEnumerator_1_get_Current_m62245_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26932_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9144_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26932_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26932_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9144_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26932_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62245_MethodInfo;
extern TypeInfo TBPinchToScale_t136_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBPinchToScale_t136_m182252_MethodInfo;
static void* InternalEnumerator_1_t9144_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62245_MethodInfo,
	&TBPinchToScale_t136_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBPinchToScale_t136_m182252_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9144_0_0_0;
extern Il2CppType InternalEnumerator_1_t9144_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9144_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9144_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9144_MethodInfos/* methods */
	, InternalEnumerator_1_t9144_PropertyInfos/* properties */
	, InternalEnumerator_1_t9144_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9144_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9144_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9144_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9144_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9144_1_0_0/* this_arg */
	, InternalEnumerator_1_t9144_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9144_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9144_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9144)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBPinchToScale>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchToScale>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBPinchToScale>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBPinchToScale>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchToScale>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBPinchToScale>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchToScale>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBPinchToScale>
extern MethodInfo ICollection_1_get_Count_m225764_MethodInfo;
static PropertyInfo ICollection_1_t29603____Count_PropertyInfo = 
{
	&ICollection_1_t29603_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225764_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225765_MethodInfo;
static PropertyInfo ICollection_1_t29603____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29603_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225765_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29603_PropertyInfos[] =
{
	&ICollection_1_t29603____Count_PropertyInfo,
	&ICollection_1_t29603____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBPinchToScale>::get_Count()
MethodInfo ICollection_1_get_Count_m225764_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29603_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchToScale>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225765_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29603_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBPinchToScale_t136_0_0_0;
static ParameterInfo ICollection_1_t29603_ICollection_1_Add_m225766_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchToScale_t136_0_0_0},
};
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPinchToScale>::Add(T)
MethodInfo ICollection_1_Add_m225766_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29603_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29603_ICollection_1_Add_m225766_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPinchToScale>::Clear()
MethodInfo ICollection_1_Clear_m225767_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29603_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBPinchToScale_t136_0_0_0;
static ParameterInfo ICollection_1_t29603_ICollection_1_Contains_m225768_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchToScale_t136_0_0_0},
};
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchToScale>::Contains(T)
MethodInfo ICollection_1_Contains_m225768_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29603_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29603_ICollection_1_Contains_m225768_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchToScaleU5BU5D_t24953_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29603_ICollection_1_CopyTo_m225769_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchToScaleU5BU5D_t24953_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBPinchToScale>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225769_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29603_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29603_ICollection_1_CopyTo_m225769_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchToScale_t136_0_0_0;
static ParameterInfo ICollection_1_t29603_ICollection_1_Remove_m225770_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchToScale_t136_0_0_0},
};
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBPinchToScale>::Remove(T)
MethodInfo ICollection_1_Remove_m225770_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29603_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29603_ICollection_1_Remove_m225770_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29603_MethodInfos[] =
{
	&ICollection_1_get_Count_m225764_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225765_MethodInfo,
	&ICollection_1_Add_m225766_MethodInfo,
	&ICollection_1_Clear_m225767_MethodInfo,
	&ICollection_1_Contains_m225768_MethodInfo,
	&ICollection_1_CopyTo_m225769_MethodInfo,
	&ICollection_1_Remove_m225770_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29605_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29603_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29605_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29603_0_0_0;
extern Il2CppType ICollection_1_t29603_1_0_0;
struct ICollection_1_t29603;
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29603_GenericClass;
TypeInfo ICollection_1_t29603_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29603_MethodInfos/* methods */
	, ICollection_1_t29603_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29603_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29603_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29603_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29603_0_0_0/* byval_arg */
	, &ICollection_1_t29603_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29603_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29605_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBPinchToScale>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBPinchToScale>
extern TypeInfo IEnumerable_1_t29605_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26932_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBPinchToScale>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225771_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29605_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26932_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29605_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225771_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29605_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29605_0_0_0;
extern Il2CppType IEnumerable_1_t29605_1_0_0;
struct IEnumerable_1_t29605;
extern TypeInfo IEnumerable_1_t29605_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29605_GenericClass;
TypeInfo IEnumerable_1_t29605_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29605_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29605_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29605_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29605_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29605_0_0_0/* byval_arg */
	, &IEnumerable_1_t29605_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29605_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29604_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBPinchToScale>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBPinchToScale>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBPinchToScale>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBPinchToScale>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBPinchToScale>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBPinchToScale>
extern MethodInfo IList_1_get_Item_m225772_MethodInfo;
extern MethodInfo IList_1_set_Item_m225773_MethodInfo;
static PropertyInfo IList_1_t29604____Item_PropertyInfo = 
{
	&IList_1_t29604_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225772_MethodInfo/* get */
	, &IList_1_set_Item_m225773_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29604_PropertyInfos[] =
{
	&IList_1_t29604____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBPinchToScale_t136_0_0_0;
static ParameterInfo IList_1_t29604_IList_1_IndexOf_m225774_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchToScale_t136_0_0_0},
};
extern TypeInfo IList_1_t29604_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBPinchToScale>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225774_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29604_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29604_IList_1_IndexOf_m225774_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchToScale_t136_0_0_0;
static ParameterInfo IList_1_t29604_IList_1_Insert_m225775_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBPinchToScale_t136_0_0_0},
};
extern TypeInfo IList_1_t29604_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPinchToScale>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225775_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29604_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29604_IList_1_Insert_m225775_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29604_IList_1_RemoveAt_m225776_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29604_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPinchToScale>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225776_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29604_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29604_IList_1_RemoveAt_m225776_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29604_IList_1_get_Item_m225772_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29604_il2cpp_TypeInfo;
extern Il2CppType TBPinchToScale_t136_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBPinchToScale>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225772_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29604_il2cpp_TypeInfo/* declaring_type */
	, &TBPinchToScale_t136_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29604_IList_1_get_Item_m225772_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchToScale_t136_0_0_0;
static ParameterInfo IList_1_t29604_IList_1_set_Item_m225773_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBPinchToScale_t136_0_0_0},
};
extern TypeInfo IList_1_t29604_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBPinchToScale>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225773_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29604_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29604_IList_1_set_Item_m225773_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29604_MethodInfos[] =
{
	&IList_1_IndexOf_m225774_MethodInfo,
	&IList_1_Insert_m225775_MethodInfo,
	&IList_1_RemoveAt_m225776_MethodInfo,
	&IList_1_get_Item_m225772_MethodInfo,
	&IList_1_set_Item_m225773_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29603_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29605_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29604_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29603_il2cpp_TypeInfo,
	&IEnumerable_1_t29605_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29604_0_0_0;
extern Il2CppType IList_1_t29604_1_0_0;
struct IList_1_t29604;
extern TypeInfo IList_1_t29604_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29604_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29604_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29604_MethodInfos/* methods */
	, IList_1_t29604_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29604_il2cpp_TypeInfo/* element_class */
	, IList_1_t29604_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29604_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29604_0_0_0/* byval_arg */
	, &IList_1_t29604_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29604_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBPinchToScale>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_37.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9145_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBPinchToScale>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_37MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBPinchToScale>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_33.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9145_il2cpp_TypeInfo;
extern TypeInfo TBPinchToScale_t136_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBPinchToScale>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_33MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62248_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62250_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPinchToScale>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPinchToScale>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBPinchToScale>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9145____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9145_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9145, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9145_FieldInfos[] =
{
	&CachedInvokableCall_1_t9145____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBPinchToScale_t136_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9145_CachedInvokableCall_1__ctor_m62246_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBPinchToScale_t136_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9145_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPinchToScale>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62246_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9145_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9145_CachedInvokableCall_1__ctor_m62246_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9145_CachedInvokableCall_1_Invoke_m62247_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9145_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBPinchToScale>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62247_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9145_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9145_CachedInvokableCall_1_Invoke_m62247_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9145_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62246_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62247_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62247_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62251_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9145_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62247_MethodInfo,
	&InvokableCall_1_Find_m62251_MethodInfo,
};
extern Il2CppType UnityAction_1_t9147_0_0_0;
extern TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchToScale_t136_m182262_MethodInfo;
extern TypeInfo TBPinchToScale_t136_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62253_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62248_MethodInfo;
extern TypeInfo TBPinchToScale_t136_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62250_MethodInfo;
static void* CachedInvokableCall_1_t9145_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9147_0_0_0,
	&UnityAction_1_t9147_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchToScale_t136_m182262_MethodInfo,
	&TBPinchToScale_t136_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62253_MethodInfo,
	&InvokableCall_1__ctor_m62248_MethodInfo,
	&TBPinchToScale_t136_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62250_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9145_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9145_1_0_0;
extern TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9145;
extern TypeInfo CachedInvokableCall_1_t9145_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9145_GenericClass;
TypeInfo CachedInvokableCall_1_t9145_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9145_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9145_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9146_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9145_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9145_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9145_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9145_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9145_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9145_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9145_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9145)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBPinchToScale>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_40.h"
extern TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBPinchToScale_t136_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TBPinchToScale>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_40MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9147_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchToScale_t136_m182262_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62253_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBPinchToScale>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBPinchToScale>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchToScale_t136_m182262(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchToScale_t136_m182262_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBPinchToScale>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchToScale>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchToScale>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBPinchToScale>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBPinchToScale>
extern Il2CppType UnityAction_1_t9147_0_0_1;
FieldInfo InvokableCall_1_t9146____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9147_0_0_1/* type */
	, &InvokableCall_1_t9146_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9146, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9146_FieldInfos[] =
{
	&InvokableCall_1_t9146____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9146_InvokableCall_1__ctor_m62248_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchToScale>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62248_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9146_InvokableCall_1__ctor_m62248_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9147_0_0_0;
static ParameterInfo InvokableCall_1_t9146_InvokableCall_1__ctor_m62249_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9147_0_0_0},
};
extern TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchToScale>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62249_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9146_InvokableCall_1__ctor_m62249_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9146_InvokableCall_1_Invoke_m62250_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBPinchToScale>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62250_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9146_InvokableCall_1_Invoke_m62250_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9146_InvokableCall_1_Find_m62251_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBPinchToScale>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62251_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9146_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9146_InvokableCall_1_Find_m62251_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9146_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62248_MethodInfo,
	&InvokableCall_1__ctor_m62249_MethodInfo,
	&InvokableCall_1_Invoke_m62250_MethodInfo,
	&InvokableCall_1_Find_m62251_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62250_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62251_MethodInfo;
static MethodInfo* InvokableCall_1_t9146_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62250_MethodInfo,
	&InvokableCall_1_Find_m62251_MethodInfo,
};
extern Il2CppType UnityAction_1_t9147_0_0_0;
extern TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchToScale_t136_m182262_MethodInfo;
extern TypeInfo TBPinchToScale_t136_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62253_MethodInfo;
static void* InvokableCall_1_t9146_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9147_0_0_0,
	&UnityAction_1_t9147_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBPinchToScale_t136_m182262_MethodInfo,
	&TBPinchToScale_t136_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62253_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9146_0_0_0;
extern Il2CppType InvokableCall_1_t9146_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9146;
extern TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9146_GenericClass;
TypeInfo InvokableCall_1_t9146_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9146_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9146_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9146_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9146_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9146_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9146_0_0_0/* byval_arg */
	, &InvokableCall_1_t9146_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9146_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9146_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9146)/* instance_size */
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
extern TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TBPinchToScale>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBPinchToScale>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBPinchToScale>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBPinchToScale>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBPinchToScale>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9147_UnityAction_1__ctor_m62252_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBPinchToScale>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62252_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9147_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9147_UnityAction_1__ctor_m62252_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchToScale_t136_0_0_0;
static ParameterInfo UnityAction_1_t9147_UnityAction_1_Invoke_m62253_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchToScale_t136_0_0_0},
};
extern TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBPinchToScale>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62253_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9147_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9147_UnityAction_1_Invoke_m62253_ParameterInfos/* parameters */
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
extern Il2CppType TBPinchToScale_t136_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9147_UnityAction_1_BeginInvoke_m62254_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBPinchToScale_t136_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBPinchToScale>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62254_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9147_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9147_UnityAction_1_BeginInvoke_m62254_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9147_UnityAction_1_EndInvoke_m62255_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBPinchToScale>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62255_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9147_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9147_UnityAction_1_EndInvoke_m62255_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9147_MethodInfos[] =
{
	&UnityAction_1__ctor_m62252_MethodInfo,
	&UnityAction_1_Invoke_m62253_MethodInfo,
	&UnityAction_1_BeginInvoke_m62254_MethodInfo,
	&UnityAction_1_EndInvoke_m62255_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62253_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62254_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62255_MethodInfo;
static MethodInfo* UnityAction_1_t9147_VTable[] =
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
	&UnityAction_1_Invoke_m62253_MethodInfo,
	&UnityAction_1_BeginInvoke_m62254_MethodInfo,
	&UnityAction_1_EndInvoke_m62255_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9147_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9147_0_0_0;
extern Il2CppType UnityAction_1_t9147_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9147;
extern TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9147_GenericClass;
TypeInfo UnityAction_1_t9147_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9147_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9147_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9147_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9147_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9147_0_0_0/* byval_arg */
	, &UnityAction_1_t9147_1_0_0/* this_arg */
	, UnityAction_1_t9147_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9147_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9147)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26933_il2cpp_TypeInfo;

// TBQuickSetup
#include "AssemblyU2DCSharpU2Dfirstpass_TBQuickSetup.h"


// T System.Collections.Generic.IEnumerator`1<TBQuickSetup>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBQuickSetup>
extern MethodInfo IEnumerator_1_get_Current_m225777_MethodInfo;
static PropertyInfo IEnumerator_1_t26933____Current_PropertyInfo = 
{
	&IEnumerator_1_t26933_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225777_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26933_PropertyInfos[] =
{
	&IEnumerator_1_t26933____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26933_il2cpp_TypeInfo;
extern Il2CppType TBQuickSetup_t137_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBQuickSetup>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225777_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26933_il2cpp_TypeInfo/* declaring_type */
	, &TBQuickSetup_t137_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26933_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225777_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26933_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26933_0_0_0;
extern Il2CppType IEnumerator_1_t26933_1_0_0;
struct IEnumerator_1_t26933;
extern TypeInfo IEnumerator_1_t26933_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26933_GenericClass;
TypeInfo IEnumerator_1_t26933_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26933_MethodInfos/* methods */
	, IEnumerator_1_t26933_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26933_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26933_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26933_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26933_0_0_0/* byval_arg */
	, &IEnumerator_1_t26933_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26933_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBQuickSetup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_123.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBQuickSetup>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_123MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo;
extern TypeInfo TBQuickSetup_t137_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62261_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBQuickSetup_t137_m182264_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBQuickSetup>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBQuickSetup>(System.Int32)
#define Array_InternalArray__get_Item_TisTBQuickSetup_t137_m182264(__this, p0, method) (TBQuickSetup_t137 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBQuickSetup_t137_m182264_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBQuickSetup>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBQuickSetup>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBQuickSetup>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBQuickSetup>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBQuickSetup>::MoveNext()
// T System.Array/InternalEnumerator`1<TBQuickSetup>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBQuickSetup>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9148____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9148, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9148____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9148, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9148_FieldInfos[] =
{
	&InternalEnumerator_1_t9148____array_FieldInfo,
	&InternalEnumerator_1_t9148____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62258_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9148____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9148_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62258_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62261_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9148____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9148_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62261_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9148_PropertyInfos[] =
{
	&InternalEnumerator_1_t9148____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9148____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9148_InternalEnumerator_1__ctor_m62256_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBQuickSetup>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62256_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9148_InternalEnumerator_1__ctor_m62256_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBQuickSetup>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62257_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBQuickSetup>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62258_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBQuickSetup>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62259_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBQuickSetup>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62260_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo;
extern Il2CppType TBQuickSetup_t137_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBQuickSetup>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62261_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* declaring_type */
	, &TBQuickSetup_t137_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9148_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62256_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62257_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62258_MethodInfo,
	&InternalEnumerator_1_Dispose_m62259_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62260_MethodInfo,
	&InternalEnumerator_1_get_Current_m62261_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62258_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62260_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62257_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62259_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62261_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9148_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62258_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62260_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62257_MethodInfo,
	&InternalEnumerator_1_Dispose_m62259_MethodInfo,
	&InternalEnumerator_1_get_Current_m62261_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26933_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9148_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26933_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26933_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9148_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26933_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62261_MethodInfo;
extern TypeInfo TBQuickSetup_t137_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBQuickSetup_t137_m182264_MethodInfo;
static void* InternalEnumerator_1_t9148_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62261_MethodInfo,
	&TBQuickSetup_t137_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBQuickSetup_t137_m182264_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9148_0_0_0;
extern Il2CppType InternalEnumerator_1_t9148_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9148_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9148_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9148_MethodInfos/* methods */
	, InternalEnumerator_1_t9148_PropertyInfos/* properties */
	, InternalEnumerator_1_t9148_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9148_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9148_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9148_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9148_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9148_1_0_0/* this_arg */
	, InternalEnumerator_1_t9148_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9148_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9148_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9148)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBQuickSetup>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBQuickSetup>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBQuickSetup>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBQuickSetup>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBQuickSetup>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBQuickSetup>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBQuickSetup>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBQuickSetup>
extern MethodInfo ICollection_1_get_Count_m225778_MethodInfo;
static PropertyInfo ICollection_1_t29606____Count_PropertyInfo = 
{
	&ICollection_1_t29606_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225778_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225779_MethodInfo;
static PropertyInfo ICollection_1_t29606____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29606_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225779_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29606_PropertyInfos[] =
{
	&ICollection_1_t29606____Count_PropertyInfo,
	&ICollection_1_t29606____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBQuickSetup>::get_Count()
MethodInfo ICollection_1_get_Count_m225778_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29606_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBQuickSetup>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225779_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29606_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBQuickSetup_t137_0_0_0;
static ParameterInfo ICollection_1_t29606_ICollection_1_Add_m225780_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBQuickSetup_t137_0_0_0},
};
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBQuickSetup>::Add(T)
MethodInfo ICollection_1_Add_m225780_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29606_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29606_ICollection_1_Add_m225780_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBQuickSetup>::Clear()
MethodInfo ICollection_1_Clear_m225781_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29606_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBQuickSetup_t137_0_0_0;
static ParameterInfo ICollection_1_t29606_ICollection_1_Contains_m225782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBQuickSetup_t137_0_0_0},
};
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBQuickSetup>::Contains(T)
MethodInfo ICollection_1_Contains_m225782_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29606_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29606_ICollection_1_Contains_m225782_ParameterInfos/* parameters */
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
extern Il2CppType TBQuickSetupU5BU5D_t24954_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29606_ICollection_1_CopyTo_m225783_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBQuickSetupU5BU5D_t24954_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBQuickSetup>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225783_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29606_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29606_ICollection_1_CopyTo_m225783_ParameterInfos/* parameters */
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
extern Il2CppType TBQuickSetup_t137_0_0_0;
static ParameterInfo ICollection_1_t29606_ICollection_1_Remove_m225784_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBQuickSetup_t137_0_0_0},
};
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBQuickSetup>::Remove(T)
MethodInfo ICollection_1_Remove_m225784_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29606_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29606_ICollection_1_Remove_m225784_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29606_MethodInfos[] =
{
	&ICollection_1_get_Count_m225778_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225779_MethodInfo,
	&ICollection_1_Add_m225780_MethodInfo,
	&ICollection_1_Clear_m225781_MethodInfo,
	&ICollection_1_Contains_m225782_MethodInfo,
	&ICollection_1_CopyTo_m225783_MethodInfo,
	&ICollection_1_Remove_m225784_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29608_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29606_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29608_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29606_0_0_0;
extern Il2CppType ICollection_1_t29606_1_0_0;
struct ICollection_1_t29606;
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29606_GenericClass;
TypeInfo ICollection_1_t29606_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29606_MethodInfos/* methods */
	, ICollection_1_t29606_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29606_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29606_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29606_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29606_0_0_0/* byval_arg */
	, &ICollection_1_t29606_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29606_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29608_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBQuickSetup>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBQuickSetup>
extern TypeInfo IEnumerable_1_t29608_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26933_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBQuickSetup>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225785_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29608_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26933_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29608_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225785_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29608_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29608_0_0_0;
extern Il2CppType IEnumerable_1_t29608_1_0_0;
struct IEnumerable_1_t29608;
extern TypeInfo IEnumerable_1_t29608_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29608_GenericClass;
TypeInfo IEnumerable_1_t29608_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29608_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29608_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29608_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29608_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29608_0_0_0/* byval_arg */
	, &IEnumerable_1_t29608_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29608_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29607_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBQuickSetup>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBQuickSetup>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBQuickSetup>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBQuickSetup>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBQuickSetup>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBQuickSetup>
extern MethodInfo IList_1_get_Item_m225786_MethodInfo;
extern MethodInfo IList_1_set_Item_m225787_MethodInfo;
static PropertyInfo IList_1_t29607____Item_PropertyInfo = 
{
	&IList_1_t29607_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225786_MethodInfo/* get */
	, &IList_1_set_Item_m225787_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29607_PropertyInfos[] =
{
	&IList_1_t29607____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBQuickSetup_t137_0_0_0;
static ParameterInfo IList_1_t29607_IList_1_IndexOf_m225788_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBQuickSetup_t137_0_0_0},
};
extern TypeInfo IList_1_t29607_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBQuickSetup>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225788_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29607_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29607_IList_1_IndexOf_m225788_ParameterInfos/* parameters */
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
extern Il2CppType TBQuickSetup_t137_0_0_0;
static ParameterInfo IList_1_t29607_IList_1_Insert_m225789_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBQuickSetup_t137_0_0_0},
};
extern TypeInfo IList_1_t29607_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBQuickSetup>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225789_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29607_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29607_IList_1_Insert_m225789_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29607_IList_1_RemoveAt_m225790_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29607_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBQuickSetup>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225790_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29607_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29607_IList_1_RemoveAt_m225790_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29607_IList_1_get_Item_m225786_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29607_il2cpp_TypeInfo;
extern Il2CppType TBQuickSetup_t137_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBQuickSetup>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225786_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29607_il2cpp_TypeInfo/* declaring_type */
	, &TBQuickSetup_t137_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29607_IList_1_get_Item_m225786_ParameterInfos/* parameters */
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
extern Il2CppType TBQuickSetup_t137_0_0_0;
static ParameterInfo IList_1_t29607_IList_1_set_Item_m225787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBQuickSetup_t137_0_0_0},
};
extern TypeInfo IList_1_t29607_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBQuickSetup>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225787_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29607_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29607_IList_1_set_Item_m225787_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29607_MethodInfos[] =
{
	&IList_1_IndexOf_m225788_MethodInfo,
	&IList_1_Insert_m225789_MethodInfo,
	&IList_1_RemoveAt_m225790_MethodInfo,
	&IList_1_get_Item_m225786_MethodInfo,
	&IList_1_set_Item_m225787_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29606_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29608_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29607_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29606_il2cpp_TypeInfo,
	&IEnumerable_1_t29608_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29607_0_0_0;
extern Il2CppType IList_1_t29607_1_0_0;
struct IList_1_t29607;
extern TypeInfo IList_1_t29607_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29607_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29607_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29607_MethodInfos/* methods */
	, IList_1_t29607_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29607_il2cpp_TypeInfo/* element_class */
	, IList_1_t29607_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29607_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29607_0_0_0/* byval_arg */
	, &IList_1_t29607_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29607_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBQuickSetup>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_38.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9149_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBQuickSetup>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_38MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBQuickSetup>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_34.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9149_il2cpp_TypeInfo;
extern TypeInfo TBQuickSetup_t137_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBQuickSetup>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_34MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62264_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62266_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBQuickSetup>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBQuickSetup>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBQuickSetup>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9149____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9149_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9149, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9149_FieldInfos[] =
{
	&CachedInvokableCall_1_t9149____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBQuickSetup_t137_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9149_CachedInvokableCall_1__ctor_m62262_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBQuickSetup_t137_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9149_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBQuickSetup>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62262_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9149_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9149_CachedInvokableCall_1__ctor_m62262_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9149_CachedInvokableCall_1_Invoke_m62263_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9149_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBQuickSetup>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62263_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9149_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9149_CachedInvokableCall_1_Invoke_m62263_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9149_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62262_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62263_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62263_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62267_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9149_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62263_MethodInfo,
	&InvokableCall_1_Find_m62267_MethodInfo,
};
extern Il2CppType UnityAction_1_t9151_0_0_0;
extern TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBQuickSetup_t137_m182274_MethodInfo;
extern TypeInfo TBQuickSetup_t137_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62269_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62264_MethodInfo;
extern TypeInfo TBQuickSetup_t137_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62266_MethodInfo;
static void* CachedInvokableCall_1_t9149_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9151_0_0_0,
	&UnityAction_1_t9151_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBQuickSetup_t137_m182274_MethodInfo,
	&TBQuickSetup_t137_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62269_MethodInfo,
	&InvokableCall_1__ctor_m62264_MethodInfo,
	&TBQuickSetup_t137_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62266_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9149_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9149_1_0_0;
extern TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9149;
extern TypeInfo CachedInvokableCall_1_t9149_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9149_GenericClass;
TypeInfo CachedInvokableCall_1_t9149_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9149_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9149_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9150_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9149_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9149_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9149_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9149_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9149_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9149_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9149_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9149)/* instance_size */
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
extern TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TBQuickSetup>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_41.h"
extern TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TBQuickSetup_t137_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TBQuickSetup>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_41MethodDeclarations.h"
extern Il2CppType UnityAction_1_t9151_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBQuickSetup_t137_m182274_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m62269_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBQuickSetup>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TBQuickSetup>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTBQuickSetup_t137_m182274(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBQuickSetup_t137_m182274_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TBQuickSetup>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TBQuickSetup>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TBQuickSetup>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TBQuickSetup>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TBQuickSetup>
extern Il2CppType UnityAction_1_t9151_0_0_1;
FieldInfo InvokableCall_1_t9150____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t9151_0_0_1/* type */
	, &InvokableCall_1_t9150_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t9150, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t9150_FieldInfos[] =
{
	&InvokableCall_1_t9150____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t9150_InvokableCall_1__ctor_m62264_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBQuickSetup>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m62264_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t9150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9150_InvokableCall_1__ctor_m62264_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t9151_0_0_0;
static ParameterInfo InvokableCall_1_t9150_InvokableCall_1__ctor_m62265_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t9151_0_0_0},
};
extern TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBQuickSetup>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m62265_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t9150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9150_InvokableCall_1__ctor_m62265_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9150_InvokableCall_1_Invoke_m62266_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TBQuickSetup>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m62266_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t9150_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t9150_InvokableCall_1_Invoke_m62266_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t9150_InvokableCall_1_Find_m62267_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TBQuickSetup>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m62267_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t9150_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t9150_InvokableCall_1_Find_m62267_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t9150_MethodInfos[] =
{
	&InvokableCall_1__ctor_m62264_MethodInfo,
	&InvokableCall_1__ctor_m62265_MethodInfo,
	&InvokableCall_1_Invoke_m62266_MethodInfo,
	&InvokableCall_1_Find_m62267_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62266_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62267_MethodInfo;
static MethodInfo* InvokableCall_1_t9150_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m62266_MethodInfo,
	&InvokableCall_1_Find_m62267_MethodInfo,
};
extern Il2CppType UnityAction_1_t9151_0_0_0;
extern TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBQuickSetup_t137_m182274_MethodInfo;
extern TypeInfo TBQuickSetup_t137_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62269_MethodInfo;
static void* InvokableCall_1_t9150_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t9151_0_0_0,
	&UnityAction_1_t9151_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBQuickSetup_t137_m182274_MethodInfo,
	&TBQuickSetup_t137_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62269_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t9150_0_0_0;
extern Il2CppType InvokableCall_1_t9150_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t9150;
extern TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t9150_GenericClass;
TypeInfo InvokableCall_1_t9150_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t9150_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t9150_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t9150_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t9150_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t9150_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t9150_0_0_0/* byval_arg */
	, &InvokableCall_1_t9150_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t9150_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t9150_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t9150)/* instance_size */
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
extern TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TBQuickSetup>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TBQuickSetup>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBQuickSetup>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TBQuickSetup>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TBQuickSetup>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t9151_UnityAction_1__ctor_m62268_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBQuickSetup>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m62268_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t9151_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t9151_UnityAction_1__ctor_m62268_ParameterInfos/* parameters */
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
extern Il2CppType TBQuickSetup_t137_0_0_0;
static ParameterInfo UnityAction_1_t9151_UnityAction_1_Invoke_m62269_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBQuickSetup_t137_0_0_0},
};
extern TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBQuickSetup>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m62269_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t9151_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9151_UnityAction_1_Invoke_m62269_ParameterInfos/* parameters */
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
extern Il2CppType TBQuickSetup_t137_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t9151_UnityAction_1_BeginInvoke_m62270_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TBQuickSetup_t137_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TBQuickSetup>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m62270_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t9151_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t9151_UnityAction_1_BeginInvoke_m62270_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t9151_UnityAction_1_EndInvoke_m62271_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TBQuickSetup>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m62271_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t9151_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t9151_UnityAction_1_EndInvoke_m62271_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t9151_MethodInfos[] =
{
	&UnityAction_1__ctor_m62268_MethodInfo,
	&UnityAction_1_Invoke_m62269_MethodInfo,
	&UnityAction_1_BeginInvoke_m62270_MethodInfo,
	&UnityAction_1_EndInvoke_m62271_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m62269_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m62270_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m62271_MethodInfo;
static MethodInfo* UnityAction_1_t9151_VTable[] =
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
	&UnityAction_1_Invoke_m62269_MethodInfo,
	&UnityAction_1_BeginInvoke_m62270_MethodInfo,
	&UnityAction_1_EndInvoke_m62271_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t9151_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t9151_0_0_0;
extern Il2CppType UnityAction_1_t9151_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t9151;
extern TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t9151_GenericClass;
TypeInfo UnityAction_1_t9151_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t9151_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t9151_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t9151_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t9151_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t9151_0_0_0/* byval_arg */
	, &UnityAction_1_t9151_1_0_0/* this_arg */
	, UnityAction_1_t9151_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t9151_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t9151)/* instance_size */
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
extern TypeInfo IEnumerator_1_t26934_il2cpp_TypeInfo;

// TBTwistToRotate
#include "AssemblyU2DCSharpU2Dfirstpass_TBTwistToRotate.h"


// T System.Collections.Generic.IEnumerator`1<TBTwistToRotate>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TBTwistToRotate>
extern MethodInfo IEnumerator_1_get_Current_m225791_MethodInfo;
static PropertyInfo IEnumerator_1_t26934____Current_PropertyInfo = 
{
	&IEnumerator_1_t26934_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m225791_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t26934_PropertyInfos[] =
{
	&IEnumerator_1_t26934____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t26934_il2cpp_TypeInfo;
extern Il2CppType TBTwistToRotate_t139_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TBTwistToRotate>::get_Current()
MethodInfo IEnumerator_1_get_Current_m225791_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t26934_il2cpp_TypeInfo/* declaring_type */
	, &TBTwistToRotate_t139_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t26934_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m225791_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t26934_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t26934_0_0_0;
extern Il2CppType IEnumerator_1_t26934_1_0_0;
struct IEnumerator_1_t26934;
extern TypeInfo IEnumerator_1_t26934_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t26934_GenericClass;
TypeInfo IEnumerator_1_t26934_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t26934_MethodInfos/* methods */
	, IEnumerator_1_t26934_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t26934_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t26934_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t26934_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t26934_0_0_0/* byval_arg */
	, &IEnumerator_1_t26934_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t26934_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<TBTwistToRotate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_124.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TBTwistToRotate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_124MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo;
extern TypeInfo TBTwistToRotate_t139_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62277_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBTwistToRotate_t139_m182294_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TBTwistToRotate>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TBTwistToRotate>(System.Int32)
#define Array_InternalArray__get_Item_TisTBTwistToRotate_t139_m182294(__this, p0, method) (TBTwistToRotate_t139 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTBTwistToRotate_t139_m182294_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TBTwistToRotate>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TBTwistToRotate>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TBTwistToRotate>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TBTwistToRotate>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TBTwistToRotate>::MoveNext()
// T System.Array/InternalEnumerator`1<TBTwistToRotate>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TBTwistToRotate>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t9152____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9152, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t9152____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t9152, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t9152_FieldInfos[] =
{
	&InternalEnumerator_1_t9152____array_FieldInfo,
	&InternalEnumerator_1_t9152____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62274_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9152____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9152_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62274_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m62277_MethodInfo;
static PropertyInfo InternalEnumerator_1_t9152____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t9152_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m62277_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t9152_PropertyInfos[] =
{
	&InternalEnumerator_1_t9152____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t9152____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t9152_InternalEnumerator_1__ctor_m62272_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBTwistToRotate>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m62272_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t9152_InternalEnumerator_1__ctor_m62272_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBTwistToRotate>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62273_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TBTwistToRotate>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62274_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TBTwistToRotate>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m62275_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TBTwistToRotate>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m62276_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo;
extern Il2CppType TBTwistToRotate_t139_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TBTwistToRotate>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m62277_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* declaring_type */
	, &TBTwistToRotate_t139_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t9152_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m62272_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62273_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62274_MethodInfo,
	&InternalEnumerator_1_Dispose_m62275_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62276_MethodInfo,
	&InternalEnumerator_1_get_Current_m62277_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62274_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m62276_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62273_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m62275_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m62277_MethodInfo;
static MethodInfo* InternalEnumerator_1_t9152_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m62274_MethodInfo,
	&InternalEnumerator_1_MoveNext_m62276_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m62273_MethodInfo,
	&InternalEnumerator_1_Dispose_m62275_MethodInfo,
	&InternalEnumerator_1_get_Current_m62277_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26934_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t9152_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t26934_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t26934_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t9152_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t26934_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m62277_MethodInfo;
extern TypeInfo TBTwistToRotate_t139_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTBTwistToRotate_t139_m182294_MethodInfo;
static void* InternalEnumerator_1_t9152_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m62277_MethodInfo,
	&TBTwistToRotate_t139_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTBTwistToRotate_t139_m182294_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t9152_0_0_0;
extern Il2CppType InternalEnumerator_1_t9152_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t9152_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t9152_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t9152_MethodInfos/* methods */
	, InternalEnumerator_1_t9152_PropertyInfos/* properties */
	, InternalEnumerator_1_t9152_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t9152_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t9152_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t9152_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t9152_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t9152_1_0_0/* this_arg */
	, InternalEnumerator_1_t9152_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t9152_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t9152_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t9152)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TBTwistToRotate>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TBTwistToRotate>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TBTwistToRotate>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TBTwistToRotate>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TBTwistToRotate>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TBTwistToRotate>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TBTwistToRotate>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TBTwistToRotate>
extern MethodInfo ICollection_1_get_Count_m225792_MethodInfo;
static PropertyInfo ICollection_1_t29609____Count_PropertyInfo = 
{
	&ICollection_1_t29609_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m225792_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m225793_MethodInfo;
static PropertyInfo ICollection_1_t29609____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t29609_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m225793_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t29609_PropertyInfos[] =
{
	&ICollection_1_t29609____Count_PropertyInfo,
	&ICollection_1_t29609____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TBTwistToRotate>::get_Count()
MethodInfo ICollection_1_get_Count_m225792_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t29609_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBTwistToRotate>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m225793_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t29609_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBTwistToRotate_t139_0_0_0;
static ParameterInfo ICollection_1_t29609_ICollection_1_Add_m225794_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBTwistToRotate_t139_0_0_0},
};
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBTwistToRotate>::Add(T)
MethodInfo ICollection_1_Add_m225794_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t29609_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t29609_ICollection_1_Add_m225794_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBTwistToRotate>::Clear()
MethodInfo ICollection_1_Clear_m225795_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t29609_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TBTwistToRotate_t139_0_0_0;
static ParameterInfo ICollection_1_t29609_ICollection_1_Contains_m225796_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBTwistToRotate_t139_0_0_0},
};
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBTwistToRotate>::Contains(T)
MethodInfo ICollection_1_Contains_m225796_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t29609_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29609_ICollection_1_Contains_m225796_ParameterInfos/* parameters */
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
extern Il2CppType TBTwistToRotateU5BU5D_t24955_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t29609_ICollection_1_CopyTo_m225797_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TBTwistToRotateU5BU5D_t24955_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TBTwistToRotate>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m225797_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t29609_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t29609_ICollection_1_CopyTo_m225797_ParameterInfos/* parameters */
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
extern Il2CppType TBTwistToRotate_t139_0_0_0;
static ParameterInfo ICollection_1_t29609_ICollection_1_Remove_m225798_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBTwistToRotate_t139_0_0_0},
};
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TBTwistToRotate>::Remove(T)
MethodInfo ICollection_1_Remove_m225798_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t29609_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t29609_ICollection_1_Remove_m225798_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t29609_MethodInfos[] =
{
	&ICollection_1_get_Count_m225792_MethodInfo,
	&ICollection_1_get_IsReadOnly_m225793_MethodInfo,
	&ICollection_1_Add_m225794_MethodInfo,
	&ICollection_1_Clear_m225795_MethodInfo,
	&ICollection_1_Contains_m225796_MethodInfo,
	&ICollection_1_CopyTo_m225797_MethodInfo,
	&ICollection_1_Remove_m225798_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29611_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t29609_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t29611_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t29609_0_0_0;
extern Il2CppType ICollection_1_t29609_1_0_0;
struct ICollection_1_t29609;
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t29609_GenericClass;
TypeInfo ICollection_1_t29609_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t29609_MethodInfos/* methods */
	, ICollection_1_t29609_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t29609_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t29609_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t29609_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t29609_0_0_0/* byval_arg */
	, &ICollection_1_t29609_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t29609_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t29611_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBTwistToRotate>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TBTwistToRotate>
extern TypeInfo IEnumerable_1_t29611_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t26934_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TBTwistToRotate>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m225799_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t29611_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t26934_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t29611_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m225799_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t29611_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t29611_0_0_0;
extern Il2CppType IEnumerable_1_t29611_1_0_0;
struct IEnumerable_1_t29611;
extern TypeInfo IEnumerable_1_t29611_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t29611_GenericClass;
TypeInfo IEnumerable_1_t29611_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t29611_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t29611_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t29611_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t29611_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t29611_0_0_0/* byval_arg */
	, &IEnumerable_1_t29611_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t29611_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t29610_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TBTwistToRotate>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TBTwistToRotate>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TBTwistToRotate>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TBTwistToRotate>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TBTwistToRotate>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TBTwistToRotate>
extern MethodInfo IList_1_get_Item_m225800_MethodInfo;
extern MethodInfo IList_1_set_Item_m225801_MethodInfo;
static PropertyInfo IList_1_t29610____Item_PropertyInfo = 
{
	&IList_1_t29610_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m225800_MethodInfo/* get */
	, &IList_1_set_Item_m225801_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t29610_PropertyInfos[] =
{
	&IList_1_t29610____Item_PropertyInfo,
	NULL
};
extern Il2CppType TBTwistToRotate_t139_0_0_0;
static ParameterInfo IList_1_t29610_IList_1_IndexOf_m225802_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TBTwistToRotate_t139_0_0_0},
};
extern TypeInfo IList_1_t29610_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TBTwistToRotate>::IndexOf(T)
MethodInfo IList_1_IndexOf_m225802_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t29610_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29610_IList_1_IndexOf_m225802_ParameterInfos/* parameters */
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
extern Il2CppType TBTwistToRotate_t139_0_0_0;
static ParameterInfo IList_1_t29610_IList_1_Insert_m225803_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TBTwistToRotate_t139_0_0_0},
};
extern TypeInfo IList_1_t29610_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBTwistToRotate>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m225803_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t29610_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29610_IList_1_Insert_m225803_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29610_IList_1_RemoveAt_m225804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29610_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBTwistToRotate>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m225804_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t29610_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t29610_IList_1_RemoveAt_m225804_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t29610_IList_1_get_Item_m225800_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t29610_il2cpp_TypeInfo;
extern Il2CppType TBTwistToRotate_t139_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TBTwistToRotate>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m225800_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t29610_il2cpp_TypeInfo/* declaring_type */
	, &TBTwistToRotate_t139_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t29610_IList_1_get_Item_m225800_ParameterInfos/* parameters */
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
extern Il2CppType TBTwistToRotate_t139_0_0_0;
static ParameterInfo IList_1_t29610_IList_1_set_Item_m225801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TBTwistToRotate_t139_0_0_0},
};
extern TypeInfo IList_1_t29610_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TBTwistToRotate>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m225801_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t29610_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t29610_IList_1_set_Item_m225801_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t29610_MethodInfos[] =
{
	&IList_1_IndexOf_m225802_MethodInfo,
	&IList_1_Insert_m225803_MethodInfo,
	&IList_1_RemoveAt_m225804_MethodInfo,
	&IList_1_get_Item_m225800_MethodInfo,
	&IList_1_set_Item_m225801_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t29609_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t29611_il2cpp_TypeInfo;
static TypeInfo* IList_1_t29610_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t29609_il2cpp_TypeInfo,
	&IEnumerable_1_t29611_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t29610_0_0_0;
extern Il2CppType IList_1_t29610_1_0_0;
struct IList_1_t29610;
extern TypeInfo IList_1_t29610_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t29610_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t29610_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t29610_MethodInfos/* methods */
	, IList_1_t29610_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t29610_il2cpp_TypeInfo/* element_class */
	, IList_1_t29610_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t29610_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t29610_0_0_0/* byval_arg */
	, &IList_1_t29610_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t29610_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<TBTwistToRotate>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_39.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t9153_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TBTwistToRotate>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_39MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TBTwistToRotate>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_35.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t9153_il2cpp_TypeInfo;
extern TypeInfo TBTwistToRotate_t139_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t9154_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TBTwistToRotate>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_35MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m62280_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m62282_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TBTwistToRotate>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBTwistToRotate>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TBTwistToRotate>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t9153____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t9153_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t9153, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t9153_FieldInfos[] =
{
	&CachedInvokableCall_1_t9153____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TBTwistToRotate_t139_0_0_0;
static ParameterInfo CachedInvokableCall_1_t9153_CachedInvokableCall_1__ctor_m62278_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TBTwistToRotate_t139_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9153_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBTwistToRotate>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m62278_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t9153_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9153_CachedInvokableCall_1__ctor_m62278_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t9153_CachedInvokableCall_1_Invoke_m62279_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t9153_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TBTwistToRotate>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m62279_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t9153_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t9153_CachedInvokableCall_1_Invoke_m62279_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t9153_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m62278_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62279_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m62279_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m62283_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t9153_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m62279_MethodInfo,
	&InvokableCall_1_Find_m62283_MethodInfo,
};
extern Il2CppType UnityAction_1_t9155_0_0_0;
extern TypeInfo UnityAction_1_t9155_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTBTwistToRotate_t139_m182304_MethodInfo;
extern TypeInfo TBTwistToRotate_t139_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m62285_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m62280_MethodInfo;
extern TypeInfo TBTwistToRotate_t139_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m62282_MethodInfo;
static void* CachedInvokableCall_1_t9153_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t9155_0_0_0,
	&UnityAction_1_t9155_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTBTwistToRotate_t139_m182304_MethodInfo,
	&TBTwistToRotate_t139_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m62285_MethodInfo,
	&InvokableCall_1__ctor_m62280_MethodInfo,
	&TBTwistToRotate_t139_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m62282_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t9153_0_0_0;
extern Il2CppType CachedInvokableCall_1_t9153_1_0_0;
extern TypeInfo InvokableCall_1_t9154_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t9153;
extern TypeInfo CachedInvokableCall_1_t9153_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t9153_GenericClass;
TypeInfo CachedInvokableCall_1_t9153_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t9153_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t9153_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t9154_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t9153_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t9153_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t9153_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t9153_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t9153_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t9153_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t9153_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t9153)/* instance_size */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
