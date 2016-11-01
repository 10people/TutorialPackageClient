#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<MenuBarLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1308.h"
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
extern TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MenuBarLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1308MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// MenuBarLogic
#include "AssemblyU2DCSharp_MenuBarLogic.h"
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
extern TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo;
extern TypeInfo MenuBarLogic_t1544_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m133190_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMenuBarLogic_t1544_m201029_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m180549_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m180549(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<MenuBarLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MenuBarLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisMenuBarLogic_t1544_m201029(__this, p0, method) (MenuBarLogic_t1544 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMenuBarLogic_t1544_m201029_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MenuBarLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<MenuBarLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<MenuBarLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<MenuBarLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<MenuBarLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<MenuBarLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<MenuBarLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17974____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17974, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17974____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17974, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17974_FieldInfos[] =
{
	&InternalEnumerator_1_t17974____array_FieldInfo,
	&InternalEnumerator_1_t17974____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133187_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17974____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17974_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133187_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133190_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17974____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17974_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133190_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17974_PropertyInfos[] =
{
	&InternalEnumerator_1_t17974____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17974____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17974_InternalEnumerator_1__ctor_m133185_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MenuBarLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133185_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17974_InternalEnumerator_1__ctor_m133185_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MenuBarLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133186_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MenuBarLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133187_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MenuBarLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133188_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MenuBarLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133189_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo;
extern Il2CppType MenuBarLogic_t1544_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MenuBarLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133190_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* declaring_type */
	, &MenuBarLogic_t1544_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t17974_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133185_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133186_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133187_MethodInfo,
	&InternalEnumerator_1_Dispose_m133188_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133189_MethodInfo,
	&InternalEnumerator_1_get_Current_m133190_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133187_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133189_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133186_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133188_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133190_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17974_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133187_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133189_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133186_MethodInfo,
	&InternalEnumerator_1_Dispose_m133188_MethodInfo,
	&InternalEnumerator_1_get_Current_m133190_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27674_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17974_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27674_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27674_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17974_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27674_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133190_MethodInfo;
extern TypeInfo MenuBarLogic_t1544_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMenuBarLogic_t1544_m201029_MethodInfo;
static void* InternalEnumerator_1_t17974_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133190_MethodInfo,
	&MenuBarLogic_t1544_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMenuBarLogic_t1544_m201029_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17974_0_0_0;
extern Il2CppType InternalEnumerator_1_t17974_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17974_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17974_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17974_MethodInfos/* methods */
	, InternalEnumerator_1_t17974_PropertyInfos/* properties */
	, InternalEnumerator_1_t17974_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17974_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17974_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17974_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17974_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17974_1_0_0/* this_arg */
	, InternalEnumerator_1_t17974_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17974_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t17974_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17974)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;

#include "Assembly-CSharp_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<MenuBarLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MenuBarLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MenuBarLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MenuBarLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MenuBarLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MenuBarLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MenuBarLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MenuBarLogic>
extern MethodInfo ICollection_1_get_Count_m246671_MethodInfo;
static PropertyInfo ICollection_1_t32236____Count_PropertyInfo = 
{
	&ICollection_1_t32236_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246671_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246672_MethodInfo;
static PropertyInfo ICollection_1_t32236____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32236_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246672_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32236_PropertyInfos[] =
{
	&ICollection_1_t32236____Count_PropertyInfo,
	&ICollection_1_t32236____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MenuBarLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m246671_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32236_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MenuBarLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246672_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32236_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MenuBarLogic_t1544_0_0_0;
static ParameterInfo ICollection_1_t32236_ICollection_1_Add_m246673_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MenuBarLogic_t1544_0_0_0},
};
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MenuBarLogic>::Add(T)
MethodInfo ICollection_1_Add_m246673_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32236_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32236_ICollection_1_Add_m246673_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MenuBarLogic>::Clear()
MethodInfo ICollection_1_Clear_m246674_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32236_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MenuBarLogic_t1544_0_0_0;
static ParameterInfo ICollection_1_t32236_ICollection_1_Contains_m246675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MenuBarLogic_t1544_0_0_0},
};
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MenuBarLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m246675_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32236_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32236_ICollection_1_Contains_m246675_ParameterInfos/* parameters */
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
extern Il2CppType MenuBarLogicU5BU5D_t25732_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32236_ICollection_1_CopyTo_m246676_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MenuBarLogicU5BU5D_t25732_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MenuBarLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246676_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32236_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32236_ICollection_1_CopyTo_m246676_ParameterInfos/* parameters */
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
extern Il2CppType MenuBarLogic_t1544_0_0_0;
static ParameterInfo ICollection_1_t32236_ICollection_1_Remove_m246677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MenuBarLogic_t1544_0_0_0},
};
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MenuBarLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m246677_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32236_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32236_ICollection_1_Remove_m246677_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32236_MethodInfos[] =
{
	&ICollection_1_get_Count_m246671_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246672_MethodInfo,
	&ICollection_1_Add_m246673_MethodInfo,
	&ICollection_1_Clear_m246674_MethodInfo,
	&ICollection_1_Contains_m246675_MethodInfo,
	&ICollection_1_CopyTo_m246676_MethodInfo,
	&ICollection_1_Remove_m246677_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32238_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32236_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32238_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32236_0_0_0;
extern Il2CppType ICollection_1_t32236_1_0_0;
struct ICollection_1_t32236;
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32236_GenericClass;
TypeInfo ICollection_1_t32236_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32236_MethodInfos/* methods */
	, ICollection_1_t32236_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32236_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32236_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32236_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32236_0_0_0/* byval_arg */
	, &ICollection_1_t32236_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32236_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32238_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MenuBarLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MenuBarLogic>
extern TypeInfo IEnumerable_1_t32238_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27674_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MenuBarLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246678_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32238_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27674_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32238_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246678_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32238_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32238_0_0_0;
extern Il2CppType IEnumerable_1_t32238_1_0_0;
struct IEnumerable_1_t32238;
extern TypeInfo IEnumerable_1_t32238_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32238_GenericClass;
TypeInfo IEnumerable_1_t32238_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32238_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32238_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32238_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32238_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32238_0_0_0/* byval_arg */
	, &IEnumerable_1_t32238_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32238_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32237_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MenuBarLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MenuBarLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MenuBarLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MenuBarLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MenuBarLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MenuBarLogic>
extern MethodInfo IList_1_get_Item_m246679_MethodInfo;
extern MethodInfo IList_1_set_Item_m246680_MethodInfo;
static PropertyInfo IList_1_t32237____Item_PropertyInfo = 
{
	&IList_1_t32237_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246679_MethodInfo/* get */
	, &IList_1_set_Item_m246680_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32237_PropertyInfos[] =
{
	&IList_1_t32237____Item_PropertyInfo,
	NULL
};
extern Il2CppType MenuBarLogic_t1544_0_0_0;
static ParameterInfo IList_1_t32237_IList_1_IndexOf_m246681_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MenuBarLogic_t1544_0_0_0},
};
extern TypeInfo IList_1_t32237_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MenuBarLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246681_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32237_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32237_IList_1_IndexOf_m246681_ParameterInfos/* parameters */
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
extern Il2CppType MenuBarLogic_t1544_0_0_0;
static ParameterInfo IList_1_t32237_IList_1_Insert_m246682_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MenuBarLogic_t1544_0_0_0},
};
extern TypeInfo IList_1_t32237_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MenuBarLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246682_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32237_IList_1_Insert_m246682_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32237_IList_1_RemoveAt_m246683_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32237_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MenuBarLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246683_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32237_IList_1_RemoveAt_m246683_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32237_IList_1_get_Item_m246679_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32237_il2cpp_TypeInfo;
extern Il2CppType MenuBarLogic_t1544_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MenuBarLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246679_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32237_il2cpp_TypeInfo/* declaring_type */
	, &MenuBarLogic_t1544_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32237_IList_1_get_Item_m246679_ParameterInfos/* parameters */
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
extern Il2CppType MenuBarLogic_t1544_0_0_0;
static ParameterInfo IList_1_t32237_IList_1_set_Item_m246680_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MenuBarLogic_t1544_0_0_0},
};
extern TypeInfo IList_1_t32237_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MenuBarLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246680_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32237_IList_1_set_Item_m246680_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32237_MethodInfos[] =
{
	&IList_1_IndexOf_m246681_MethodInfo,
	&IList_1_Insert_m246682_MethodInfo,
	&IList_1_RemoveAt_m246683_MethodInfo,
	&IList_1_get_Item_m246679_MethodInfo,
	&IList_1_set_Item_m246680_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32236_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32238_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32237_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32236_il2cpp_TypeInfo,
	&IEnumerable_1_t32238_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32237_0_0_0;
extern Il2CppType IList_1_t32237_1_0_0;
struct IList_1_t32237;
extern TypeInfo IList_1_t32237_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32237_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32237_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32237_MethodInfos/* methods */
	, IList_1_t32237_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32237_il2cpp_TypeInfo/* element_class */
	, IList_1_t32237_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32237_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32237_0_0_0/* byval_arg */
	, &IList_1_t32237_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32237_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<MenuBarLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_216.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t17975_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<MenuBarLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_216MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.InvokableCall`1<MenuBarLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_212.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t17975_il2cpp_TypeInfo;
extern TypeInfo MenuBarLogic_t1544_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<MenuBarLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_212MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m133193_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133195_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<MenuBarLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<MenuBarLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<MenuBarLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t17975____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t17975_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t17975, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t17975_FieldInfos[] =
{
	&CachedInvokableCall_1_t17975____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType MenuBarLogic_t1544_0_0_0;
static ParameterInfo CachedInvokableCall_1_t17975_CachedInvokableCall_1__ctor_m133191_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MenuBarLogic_t1544_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MenuBarLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m133191_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t17975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17975_CachedInvokableCall_1__ctor_m133191_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t17975_CachedInvokableCall_1_Invoke_m133192_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MenuBarLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m133192_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t17975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17975_CachedInvokableCall_1_Invoke_m133192_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t17975_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m133191_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133192_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m133192_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133196_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t17975_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133192_MethodInfo,
	&InvokableCall_1_Find_m133196_MethodInfo,
};
extern Il2CppType UnityAction_1_t17977_0_0_0;
extern TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMenuBarLogic_t1544_m201039_MethodInfo;
extern TypeInfo MenuBarLogic_t1544_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133198_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m133193_MethodInfo;
extern TypeInfo MenuBarLogic_t1544_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m133195_MethodInfo;
static void* CachedInvokableCall_1_t17975_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t17977_0_0_0,
	&UnityAction_1_t17977_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMenuBarLogic_t1544_m201039_MethodInfo,
	&MenuBarLogic_t1544_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133198_MethodInfo,
	&InvokableCall_1__ctor_m133193_MethodInfo,
	&MenuBarLogic_t1544_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m133195_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t17975_0_0_0;
extern Il2CppType CachedInvokableCall_1_t17975_1_0_0;
extern TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t17975;
extern TypeInfo CachedInvokableCall_1_t17975_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t17975_GenericClass;
TypeInfo CachedInvokableCall_1_t17975_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t17975_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t17975_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t17976_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t17975_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t17975_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t17975_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t17975_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t17975_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t17975_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t17975_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t17975)/* instance_size */
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
extern TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<MenuBarLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_219.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo MenuBarLogic_t1544_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<MenuBarLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_219MethodDeclarations.h"
extern Il2CppType UnityAction_1_t17977_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMenuBarLogic_t1544_m201039_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m133198_MethodInfo;
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
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MenuBarLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MenuBarLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMenuBarLogic_t1544_m201039(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMenuBarLogic_t1544_m201039_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<MenuBarLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<MenuBarLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<MenuBarLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<MenuBarLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<MenuBarLogic>
extern Il2CppType UnityAction_1_t17977_0_0_1;
FieldInfo InvokableCall_1_t17976____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t17977_0_0_1/* type */
	, &InvokableCall_1_t17976_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t17976, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t17976_FieldInfos[] =
{
	&InvokableCall_1_t17976____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t17976_InvokableCall_1__ctor_m133193_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MenuBarLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m133193_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t17976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17976_InvokableCall_1__ctor_m133193_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t17977_0_0_0;
static ParameterInfo InvokableCall_1_t17976_InvokableCall_1__ctor_m133194_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t17977_0_0_0},
};
extern TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MenuBarLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m133194_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t17976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17976_InvokableCall_1__ctor_m133194_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17976_InvokableCall_1_Invoke_m133195_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MenuBarLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m133195_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t17976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17976_InvokableCall_1_Invoke_m133195_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17976_InvokableCall_1_Find_m133196_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<MenuBarLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m133196_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t17976_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17976_InvokableCall_1_Find_m133196_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t17976_MethodInfos[] =
{
	&InvokableCall_1__ctor_m133193_MethodInfo,
	&InvokableCall_1__ctor_m133194_MethodInfo,
	&InvokableCall_1_Invoke_m133195_MethodInfo,
	&InvokableCall_1_Find_m133196_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133195_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133196_MethodInfo;
static MethodInfo* InvokableCall_1_t17976_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m133195_MethodInfo,
	&InvokableCall_1_Find_m133196_MethodInfo,
};
extern Il2CppType UnityAction_1_t17977_0_0_0;
extern TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMenuBarLogic_t1544_m201039_MethodInfo;
extern TypeInfo MenuBarLogic_t1544_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133198_MethodInfo;
static void* InvokableCall_1_t17976_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t17977_0_0_0,
	&UnityAction_1_t17977_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMenuBarLogic_t1544_m201039_MethodInfo,
	&MenuBarLogic_t1544_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133198_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t17976_0_0_0;
extern Il2CppType InvokableCall_1_t17976_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t17976;
extern TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t17976_GenericClass;
TypeInfo InvokableCall_1_t17976_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t17976_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t17976_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t17976_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t17976_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t17976_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t17976_0_0_0/* byval_arg */
	, &InvokableCall_1_t17976_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t17976_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t17976_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t17976)/* instance_size */
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
extern TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo;

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<MenuBarLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<MenuBarLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MenuBarLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<MenuBarLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<MenuBarLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t17977_UnityAction_1__ctor_m133197_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MenuBarLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m133197_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t17977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t17977_UnityAction_1__ctor_m133197_ParameterInfos/* parameters */
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
extern Il2CppType MenuBarLogic_t1544_0_0_0;
static ParameterInfo UnityAction_1_t17977_UnityAction_1_Invoke_m133198_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MenuBarLogic_t1544_0_0_0},
};
extern TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MenuBarLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m133198_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t17977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17977_UnityAction_1_Invoke_m133198_ParameterInfos/* parameters */
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
extern Il2CppType MenuBarLogic_t1544_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t17977_UnityAction_1_BeginInvoke_m133199_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MenuBarLogic_t1544_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MenuBarLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m133199_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t17977_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t17977_UnityAction_1_BeginInvoke_m133199_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t17977_UnityAction_1_EndInvoke_m133200_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MenuBarLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m133200_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t17977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17977_UnityAction_1_EndInvoke_m133200_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t17977_MethodInfos[] =
{
	&UnityAction_1__ctor_m133197_MethodInfo,
	&UnityAction_1_Invoke_m133198_MethodInfo,
	&UnityAction_1_BeginInvoke_m133199_MethodInfo,
	&UnityAction_1_EndInvoke_m133200_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m133198_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m133199_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m133200_MethodInfo;
static MethodInfo* UnityAction_1_t17977_VTable[] =
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
	&UnityAction_1_Invoke_m133198_MethodInfo,
	&UnityAction_1_BeginInvoke_m133199_MethodInfo,
	&UnityAction_1_EndInvoke_m133200_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t17977_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t17977_0_0_0;
extern Il2CppType UnityAction_1_t17977_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t17977;
extern TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t17977_GenericClass;
TypeInfo UnityAction_1_t17977_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t17977_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t17977_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t17977_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t17977_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t17977_0_0_0/* byval_arg */
	, &UnityAction_1_t17977_1_0_0/* this_arg */
	, UnityAction_1_t17977_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t17977_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t17977)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27675_il2cpp_TypeInfo;

// MessageBoxLogic
#include "AssemblyU2DCSharp_MessageBoxLogic.h"


// T System.Collections.Generic.IEnumerator`1<MessageBoxLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MessageBoxLogic>
extern MethodInfo IEnumerator_1_get_Current_m246684_MethodInfo;
static PropertyInfo IEnumerator_1_t27675____Current_PropertyInfo = 
{
	&IEnumerator_1_t27675_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246684_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27675_PropertyInfos[] =
{
	&IEnumerator_1_t27675____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27675_il2cpp_TypeInfo;
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MessageBoxLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246684_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27675_il2cpp_TypeInfo/* declaring_type */
	, &MessageBoxLogic_t1552_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27675_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246684_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27675_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27675_0_0_0;
extern Il2CppType IEnumerator_1_t27675_1_0_0;
struct IEnumerator_1_t27675;
extern TypeInfo IEnumerator_1_t27675_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27675_GenericClass;
TypeInfo IEnumerator_1_t27675_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27675_MethodInfos/* methods */
	, IEnumerator_1_t27675_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27675_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27675_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27675_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27675_0_0_0/* byval_arg */
	, &IEnumerator_1_t27675_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27675_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MessageBoxLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1309.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MessageBoxLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1309MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo;
extern TypeInfo MessageBoxLogic_t1552_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133206_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMessageBoxLogic_t1552_m201041_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MessageBoxLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MessageBoxLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisMessageBoxLogic_t1552_m201041(__this, p0, method) (MessageBoxLogic_t1552 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMessageBoxLogic_t1552_m201041_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<MessageBoxLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<MessageBoxLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<MessageBoxLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<MessageBoxLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17978____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17978, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17978____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17978, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17978_FieldInfos[] =
{
	&InternalEnumerator_1_t17978____array_FieldInfo,
	&InternalEnumerator_1_t17978____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133203_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17978____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17978_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133203_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133206_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17978____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17978_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133206_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17978_PropertyInfos[] =
{
	&InternalEnumerator_1_t17978____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17978____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17978_InternalEnumerator_1__ctor_m133201_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133201_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17978_InternalEnumerator_1__ctor_m133201_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133202_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MessageBoxLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133203_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133204_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MessageBoxLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133205_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo;
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MessageBoxLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133206_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* declaring_type */
	, &MessageBoxLogic_t1552_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t17978_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133201_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133202_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133203_MethodInfo,
	&InternalEnumerator_1_Dispose_m133204_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133205_MethodInfo,
	&InternalEnumerator_1_get_Current_m133206_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133203_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133205_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133202_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133204_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133206_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17978_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133203_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133205_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133202_MethodInfo,
	&InternalEnumerator_1_Dispose_m133204_MethodInfo,
	&InternalEnumerator_1_get_Current_m133206_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27675_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17978_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27675_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27675_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17978_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27675_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133206_MethodInfo;
extern TypeInfo MessageBoxLogic_t1552_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMessageBoxLogic_t1552_m201041_MethodInfo;
static void* InternalEnumerator_1_t17978_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133206_MethodInfo,
	&MessageBoxLogic_t1552_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMessageBoxLogic_t1552_m201041_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17978_0_0_0;
extern Il2CppType InternalEnumerator_1_t17978_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17978_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17978_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17978_MethodInfos/* methods */
	, InternalEnumerator_1_t17978_PropertyInfos/* properties */
	, InternalEnumerator_1_t17978_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17978_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17978_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17978_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17978_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17978_1_0_0/* this_arg */
	, InternalEnumerator_1_t17978_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17978_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t17978_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17978)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MessageBoxLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MessageBoxLogic>
extern MethodInfo ICollection_1_get_Count_m246685_MethodInfo;
static PropertyInfo ICollection_1_t32239____Count_PropertyInfo = 
{
	&ICollection_1_t32239_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246685_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246686_MethodInfo;
static PropertyInfo ICollection_1_t32239____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32239_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246686_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32239_PropertyInfos[] =
{
	&ICollection_1_t32239____Count_PropertyInfo,
	&ICollection_1_t32239____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MessageBoxLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m246685_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32239_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246686_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32239_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
static ParameterInfo ICollection_1_t32239_ICollection_1_Add_m246687_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogic_t1552_0_0_0},
};
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic>::Add(T)
MethodInfo ICollection_1_Add_m246687_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32239_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32239_ICollection_1_Add_m246687_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic>::Clear()
MethodInfo ICollection_1_Clear_m246688_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32239_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
static ParameterInfo ICollection_1_t32239_ICollection_1_Contains_m246689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogic_t1552_0_0_0},
};
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m246689_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32239_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32239_ICollection_1_Contains_m246689_ParameterInfos/* parameters */
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
extern Il2CppType MessageBoxLogicU5BU5D_t25733_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32239_ICollection_1_CopyTo_m246690_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogicU5BU5D_t25733_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246690_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32239_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32239_ICollection_1_CopyTo_m246690_ParameterInfos/* parameters */
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
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
static ParameterInfo ICollection_1_t32239_ICollection_1_Remove_m246691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogic_t1552_0_0_0},
};
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m246691_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32239_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32239_ICollection_1_Remove_m246691_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32239_MethodInfos[] =
{
	&ICollection_1_get_Count_m246685_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246686_MethodInfo,
	&ICollection_1_Add_m246687_MethodInfo,
	&ICollection_1_Clear_m246688_MethodInfo,
	&ICollection_1_Contains_m246689_MethodInfo,
	&ICollection_1_CopyTo_m246690_MethodInfo,
	&ICollection_1_Remove_m246691_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32241_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32239_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32241_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32239_0_0_0;
extern Il2CppType ICollection_1_t32239_1_0_0;
struct ICollection_1_t32239;
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32239_GenericClass;
TypeInfo ICollection_1_t32239_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32239_MethodInfos/* methods */
	, ICollection_1_t32239_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32239_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32239_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32239_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32239_0_0_0/* byval_arg */
	, &ICollection_1_t32239_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32239_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32241_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MessageBoxLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MessageBoxLogic>
extern TypeInfo IEnumerable_1_t32241_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27675_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MessageBoxLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246692_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32241_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27675_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32241_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246692_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32241_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32241_0_0_0;
extern Il2CppType IEnumerable_1_t32241_1_0_0;
struct IEnumerable_1_t32241;
extern TypeInfo IEnumerable_1_t32241_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32241_GenericClass;
TypeInfo IEnumerable_1_t32241_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32241_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32241_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32241_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32241_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32241_0_0_0/* byval_arg */
	, &IEnumerable_1_t32241_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32241_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32240_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MessageBoxLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MessageBoxLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MessageBoxLogic>
extern MethodInfo IList_1_get_Item_m246693_MethodInfo;
extern MethodInfo IList_1_set_Item_m246694_MethodInfo;
static PropertyInfo IList_1_t32240____Item_PropertyInfo = 
{
	&IList_1_t32240_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246693_MethodInfo/* get */
	, &IList_1_set_Item_m246694_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32240_PropertyInfos[] =
{
	&IList_1_t32240____Item_PropertyInfo,
	NULL
};
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
static ParameterInfo IList_1_t32240_IList_1_IndexOf_m246695_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogic_t1552_0_0_0},
};
extern TypeInfo IList_1_t32240_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MessageBoxLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246695_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32240_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32240_IList_1_IndexOf_m246695_ParameterInfos/* parameters */
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
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
static ParameterInfo IList_1_t32240_IList_1_Insert_m246696_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogic_t1552_0_0_0},
};
extern TypeInfo IList_1_t32240_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246696_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32240_IList_1_Insert_m246696_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32240_IList_1_RemoveAt_m246697_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32240_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246697_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32240_IList_1_RemoveAt_m246697_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32240_IList_1_get_Item_m246693_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32240_il2cpp_TypeInfo;
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MessageBoxLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246693_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32240_il2cpp_TypeInfo/* declaring_type */
	, &MessageBoxLogic_t1552_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32240_IList_1_get_Item_m246693_ParameterInfos/* parameters */
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
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
static ParameterInfo IList_1_t32240_IList_1_set_Item_m246694_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogic_t1552_0_0_0},
};
extern TypeInfo IList_1_t32240_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246694_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32240_IList_1_set_Item_m246694_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32240_MethodInfos[] =
{
	&IList_1_IndexOf_m246695_MethodInfo,
	&IList_1_Insert_m246696_MethodInfo,
	&IList_1_RemoveAt_m246697_MethodInfo,
	&IList_1_get_Item_m246693_MethodInfo,
	&IList_1_set_Item_m246694_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32239_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32241_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32240_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32239_il2cpp_TypeInfo,
	&IEnumerable_1_t32241_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32240_0_0_0;
extern Il2CppType IList_1_t32240_1_0_0;
struct IList_1_t32240;
extern TypeInfo IList_1_t32240_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32240_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32240_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32240_MethodInfos/* methods */
	, IList_1_t32240_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32240_il2cpp_TypeInfo/* element_class */
	, IList_1_t32240_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32240_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32240_0_0_0/* byval_arg */
	, &IList_1_t32240_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32240_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;

// UIControllerBase`1<MessageBoxLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_12.h"


// System.Int32 System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>
extern MethodInfo ICollection_1_get_Count_m246698_MethodInfo;
static PropertyInfo ICollection_1_t32242____Count_PropertyInfo = 
{
	&ICollection_1_t32242_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246698_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246699_MethodInfo;
static PropertyInfo ICollection_1_t32242____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32242_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246699_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32242_PropertyInfos[] =
{
	&ICollection_1_t32242____Count_PropertyInfo,
	&ICollection_1_t32242____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::get_Count()
MethodInfo ICollection_1_get_Count_m246698_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32242_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246699_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32242_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UIControllerBase_1_t1553_0_0_0;
static ParameterInfo ICollection_1_t32242_ICollection_1_Add_m246700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIControllerBase_1_t1553_0_0_0},
};
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::Add(T)
MethodInfo ICollection_1_Add_m246700_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32242_ICollection_1_Add_m246700_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::Clear()
MethodInfo ICollection_1_Clear_m246701_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32242_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UIControllerBase_1_t1553_0_0_0;
static ParameterInfo ICollection_1_t32242_ICollection_1_Contains_m246702_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIControllerBase_1_t1553_0_0_0},
};
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::Contains(T)
MethodInfo ICollection_1_Contains_m246702_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32242_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32242_ICollection_1_Contains_m246702_ParameterInfos/* parameters */
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
extern Il2CppType UIControllerBase_1U5BU5D_t25734_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32242_ICollection_1_CopyTo_m246703_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UIControllerBase_1U5BU5D_t25734_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246703_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32242_ICollection_1_CopyTo_m246703_ParameterInfos/* parameters */
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
extern Il2CppType UIControllerBase_1_t1553_0_0_0;
static ParameterInfo ICollection_1_t32242_ICollection_1_Remove_m246704_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIControllerBase_1_t1553_0_0_0},
};
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UIControllerBase`1<MessageBoxLogic>>::Remove(T)
MethodInfo ICollection_1_Remove_m246704_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32242_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32242_ICollection_1_Remove_m246704_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32242_MethodInfos[] =
{
	&ICollection_1_get_Count_m246698_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246699_MethodInfo,
	&ICollection_1_Add_m246700_MethodInfo,
	&ICollection_1_Clear_m246701_MethodInfo,
	&ICollection_1_Contains_m246702_MethodInfo,
	&ICollection_1_CopyTo_m246703_MethodInfo,
	&ICollection_1_Remove_m246704_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32244_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32242_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32244_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32242_0_0_0;
extern Il2CppType ICollection_1_t32242_1_0_0;
struct ICollection_1_t32242;
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32242_GenericClass;
TypeInfo ICollection_1_t32242_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32242_MethodInfos/* methods */
	, ICollection_1_t32242_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32242_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32242_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32242_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32242_0_0_0/* byval_arg */
	, &ICollection_1_t32242_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32242_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32244_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UIControllerBase`1<MessageBoxLogic>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UIControllerBase`1<MessageBoxLogic>>
extern TypeInfo IEnumerable_1_t32244_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27676_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UIControllerBase`1<MessageBoxLogic>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246705_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32244_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27676_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32244_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246705_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32244_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32244_0_0_0;
extern Il2CppType IEnumerable_1_t32244_1_0_0;
struct IEnumerable_1_t32244;
extern TypeInfo IEnumerable_1_t32244_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32244_GenericClass;
TypeInfo IEnumerable_1_t32244_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32244_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32244_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32244_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32244_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32244_0_0_0/* byval_arg */
	, &IEnumerable_1_t32244_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32244_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t27676_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UIControllerBase`1<MessageBoxLogic>>
extern MethodInfo IEnumerator_1_get_Current_m246706_MethodInfo;
static PropertyInfo IEnumerator_1_t27676____Current_PropertyInfo = 
{
	&IEnumerator_1_t27676_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246706_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27676_PropertyInfos[] =
{
	&IEnumerator_1_t27676____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27676_il2cpp_TypeInfo;
extern Il2CppType UIControllerBase_1_t1553_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246706_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27676_il2cpp_TypeInfo/* declaring_type */
	, &UIControllerBase_1_t1553_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27676_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246706_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27676_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27676_0_0_0;
extern Il2CppType IEnumerator_1_t27676_1_0_0;
struct IEnumerator_1_t27676;
extern TypeInfo IEnumerator_1_t27676_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27676_GenericClass;
TypeInfo IEnumerator_1_t27676_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27676_MethodInfos/* methods */
	, IEnumerator_1_t27676_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27676_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27676_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27676_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27676_0_0_0/* byval_arg */
	, &IEnumerator_1_t27676_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27676_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1310.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1310MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo;
extern TypeInfo UIControllerBase_1_t1553_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133212_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUIControllerBase_1_t1553_m201052_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UIControllerBase`1<MessageBoxLogic>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UIControllerBase`1<MessageBoxLogic>>(System.Int32)
#define Array_InternalArray__get_Item_TisUIControllerBase_1_t1553_m201052(__this, p0, method) (UIControllerBase_1_t1553 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisUIControllerBase_1_t1553_m201052_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::MoveNext()
// T System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17979____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17979, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17979____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17979, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17979_FieldInfos[] =
{
	&InternalEnumerator_1_t17979____array_FieldInfo,
	&InternalEnumerator_1_t17979____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133209_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17979____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17979_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133209_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133212_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17979____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17979_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133212_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17979_PropertyInfos[] =
{
	&InternalEnumerator_1_t17979____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17979____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17979_InternalEnumerator_1__ctor_m133207_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133207_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17979_InternalEnumerator_1__ctor_m133207_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133208_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133209_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133210_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133211_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo;
extern Il2CppType UIControllerBase_1_t1553_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UIControllerBase`1<MessageBoxLogic>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133212_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* declaring_type */
	, &UIControllerBase_1_t1553_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t17979_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133207_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133208_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133209_MethodInfo,
	&InternalEnumerator_1_Dispose_m133210_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133211_MethodInfo,
	&InternalEnumerator_1_get_Current_m133212_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133209_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133211_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133208_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133210_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133212_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17979_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133209_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133211_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133208_MethodInfo,
	&InternalEnumerator_1_Dispose_m133210_MethodInfo,
	&InternalEnumerator_1_get_Current_m133212_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27676_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17979_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27676_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27676_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17979_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27676_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133212_MethodInfo;
extern TypeInfo UIControllerBase_1_t1553_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUIControllerBase_1_t1553_m201052_MethodInfo;
static void* InternalEnumerator_1_t17979_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133212_MethodInfo,
	&UIControllerBase_1_t1553_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisUIControllerBase_1_t1553_m201052_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17979_0_0_0;
extern Il2CppType InternalEnumerator_1_t17979_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17979_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17979_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17979_MethodInfos/* methods */
	, InternalEnumerator_1_t17979_PropertyInfos/* properties */
	, InternalEnumerator_1_t17979_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17979_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17979_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17979_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17979_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17979_1_0_0/* this_arg */
	, InternalEnumerator_1_t17979_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17979_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t17979_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17979)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t32243_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>
extern MethodInfo IList_1_get_Item_m246707_MethodInfo;
extern MethodInfo IList_1_set_Item_m246708_MethodInfo;
static PropertyInfo IList_1_t32243____Item_PropertyInfo = 
{
	&IList_1_t32243_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246707_MethodInfo/* get */
	, &IList_1_set_Item_m246708_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32243_PropertyInfos[] =
{
	&IList_1_t32243____Item_PropertyInfo,
	NULL
};
extern Il2CppType UIControllerBase_1_t1553_0_0_0;
static ParameterInfo IList_1_t32243_IList_1_IndexOf_m246709_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIControllerBase_1_t1553_0_0_0},
};
extern TypeInfo IList_1_t32243_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246709_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32243_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32243_IList_1_IndexOf_m246709_ParameterInfos/* parameters */
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
extern Il2CppType UIControllerBase_1_t1553_0_0_0;
static ParameterInfo IList_1_t32243_IList_1_Insert_m246710_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UIControllerBase_1_t1553_0_0_0},
};
extern TypeInfo IList_1_t32243_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246710_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32243_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32243_IList_1_Insert_m246710_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32243_IList_1_RemoveAt_m246711_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32243_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246711_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32243_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32243_IList_1_RemoveAt_m246711_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32243_IList_1_get_Item_m246707_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32243_il2cpp_TypeInfo;
extern Il2CppType UIControllerBase_1_t1553_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246707_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32243_il2cpp_TypeInfo/* declaring_type */
	, &UIControllerBase_1_t1553_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32243_IList_1_get_Item_m246707_ParameterInfos/* parameters */
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
extern Il2CppType UIControllerBase_1_t1553_0_0_0;
static ParameterInfo IList_1_t32243_IList_1_set_Item_m246708_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UIControllerBase_1_t1553_0_0_0},
};
extern TypeInfo IList_1_t32243_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UIControllerBase`1<MessageBoxLogic>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246708_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32243_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32243_IList_1_set_Item_m246708_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32243_MethodInfos[] =
{
	&IList_1_IndexOf_m246709_MethodInfo,
	&IList_1_Insert_m246710_MethodInfo,
	&IList_1_RemoveAt_m246711_MethodInfo,
	&IList_1_get_Item_m246707_MethodInfo,
	&IList_1_set_Item_m246708_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32242_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32244_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32243_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32242_il2cpp_TypeInfo,
	&IEnumerable_1_t32244_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32243_0_0_0;
extern Il2CppType IList_1_t32243_1_0_0;
struct IList_1_t32243;
extern TypeInfo IList_1_t32243_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32243_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32243_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32243_MethodInfos/* methods */
	, IList_1_t32243_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32243_il2cpp_TypeInfo/* element_class */
	, IList_1_t32243_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32243_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32243_0_0_0/* byval_arg */
	, &IList_1_t32243_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32243_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<MessageBoxLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_217.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t17980_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<MessageBoxLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_217MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<MessageBoxLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_213.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t17980_il2cpp_TypeInfo;
extern TypeInfo MessageBoxLogic_t1552_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<MessageBoxLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_213MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m133215_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133217_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<MessageBoxLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<MessageBoxLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<MessageBoxLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t17980____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t17980_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t17980, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t17980_FieldInfos[] =
{
	&CachedInvokableCall_1_t17980____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
static ParameterInfo CachedInvokableCall_1_t17980_CachedInvokableCall_1__ctor_m133213_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogic_t1552_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17980_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MessageBoxLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m133213_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t17980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17980_CachedInvokableCall_1__ctor_m133213_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t17980_CachedInvokableCall_1_Invoke_m133214_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17980_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MessageBoxLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m133214_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t17980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17980_CachedInvokableCall_1_Invoke_m133214_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t17980_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m133213_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133214_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m133214_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133218_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t17980_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133214_MethodInfo,
	&InvokableCall_1_Find_m133218_MethodInfo,
};
extern Il2CppType UnityAction_1_t17982_0_0_0;
extern TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMessageBoxLogic_t1552_m201062_MethodInfo;
extern TypeInfo MessageBoxLogic_t1552_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133220_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m133215_MethodInfo;
extern TypeInfo MessageBoxLogic_t1552_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m133217_MethodInfo;
static void* CachedInvokableCall_1_t17980_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t17982_0_0_0,
	&UnityAction_1_t17982_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMessageBoxLogic_t1552_m201062_MethodInfo,
	&MessageBoxLogic_t1552_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133220_MethodInfo,
	&InvokableCall_1__ctor_m133215_MethodInfo,
	&MessageBoxLogic_t1552_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m133217_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t17980_0_0_0;
extern Il2CppType CachedInvokableCall_1_t17980_1_0_0;
extern TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t17980;
extern TypeInfo CachedInvokableCall_1_t17980_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t17980_GenericClass;
TypeInfo CachedInvokableCall_1_t17980_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t17980_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t17980_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t17981_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t17980_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t17980_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t17980_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t17980_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t17980_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t17980_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t17980_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t17980)/* instance_size */
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
extern TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<MessageBoxLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_220.h"
extern TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo MessageBoxLogic_t1552_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<MessageBoxLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_220MethodDeclarations.h"
extern Il2CppType UnityAction_1_t17982_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMessageBoxLogic_t1552_m201062_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m133220_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MessageBoxLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MessageBoxLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMessageBoxLogic_t1552_m201062(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMessageBoxLogic_t1552_m201062_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<MessageBoxLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<MessageBoxLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<MessageBoxLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<MessageBoxLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<MessageBoxLogic>
extern Il2CppType UnityAction_1_t17982_0_0_1;
FieldInfo InvokableCall_1_t17981____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t17982_0_0_1/* type */
	, &InvokableCall_1_t17981_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t17981, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t17981_FieldInfos[] =
{
	&InvokableCall_1_t17981____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t17981_InvokableCall_1__ctor_m133215_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MessageBoxLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m133215_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t17981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17981_InvokableCall_1__ctor_m133215_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t17982_0_0_0;
static ParameterInfo InvokableCall_1_t17981_InvokableCall_1__ctor_m133216_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t17982_0_0_0},
};
extern TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MessageBoxLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m133216_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t17981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17981_InvokableCall_1__ctor_m133216_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17981_InvokableCall_1_Invoke_m133217_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MessageBoxLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m133217_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t17981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17981_InvokableCall_1_Invoke_m133217_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17981_InvokableCall_1_Find_m133218_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<MessageBoxLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m133218_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t17981_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17981_InvokableCall_1_Find_m133218_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t17981_MethodInfos[] =
{
	&InvokableCall_1__ctor_m133215_MethodInfo,
	&InvokableCall_1__ctor_m133216_MethodInfo,
	&InvokableCall_1_Invoke_m133217_MethodInfo,
	&InvokableCall_1_Find_m133218_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133217_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133218_MethodInfo;
static MethodInfo* InvokableCall_1_t17981_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m133217_MethodInfo,
	&InvokableCall_1_Find_m133218_MethodInfo,
};
extern Il2CppType UnityAction_1_t17982_0_0_0;
extern TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMessageBoxLogic_t1552_m201062_MethodInfo;
extern TypeInfo MessageBoxLogic_t1552_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133220_MethodInfo;
static void* InvokableCall_1_t17981_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t17982_0_0_0,
	&UnityAction_1_t17982_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMessageBoxLogic_t1552_m201062_MethodInfo,
	&MessageBoxLogic_t1552_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133220_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t17981_0_0_0;
extern Il2CppType InvokableCall_1_t17981_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t17981;
extern TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t17981_GenericClass;
TypeInfo InvokableCall_1_t17981_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t17981_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t17981_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t17981_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t17981_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t17981_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t17981_0_0_0/* byval_arg */
	, &InvokableCall_1_t17981_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t17981_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t17981_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t17981)/* instance_size */
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
extern TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<MessageBoxLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<MessageBoxLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MessageBoxLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<MessageBoxLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<MessageBoxLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t17982_UnityAction_1__ctor_m133219_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MessageBoxLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m133219_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t17982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t17982_UnityAction_1__ctor_m133219_ParameterInfos/* parameters */
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
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
static ParameterInfo UnityAction_1_t17982_UnityAction_1_Invoke_m133220_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogic_t1552_0_0_0},
};
extern TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MessageBoxLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m133220_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t17982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17982_UnityAction_1_Invoke_m133220_ParameterInfos/* parameters */
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
extern Il2CppType MessageBoxLogic_t1552_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t17982_UnityAction_1_BeginInvoke_m133221_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MessageBoxLogic_t1552_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MessageBoxLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m133221_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t17982_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t17982_UnityAction_1_BeginInvoke_m133221_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t17982_UnityAction_1_EndInvoke_m133222_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MessageBoxLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m133222_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t17982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17982_UnityAction_1_EndInvoke_m133222_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t17982_MethodInfos[] =
{
	&UnityAction_1__ctor_m133219_MethodInfo,
	&UnityAction_1_Invoke_m133220_MethodInfo,
	&UnityAction_1_BeginInvoke_m133221_MethodInfo,
	&UnityAction_1_EndInvoke_m133222_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m133220_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m133221_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m133222_MethodInfo;
static MethodInfo* UnityAction_1_t17982_VTable[] =
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
	&UnityAction_1_Invoke_m133220_MethodInfo,
	&UnityAction_1_BeginInvoke_m133221_MethodInfo,
	&UnityAction_1_EndInvoke_m133222_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t17982_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t17982_0_0_0;
extern Il2CppType UnityAction_1_t17982_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t17982;
extern TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t17982_GenericClass;
TypeInfo UnityAction_1_t17982_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t17982_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t17982_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t17982_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t17982_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t17982_0_0_0/* byval_arg */
	, &UnityAction_1_t17982_1_0_0/* this_arg */
	, UnityAction_1_t17982_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t17982_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t17982)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27677_il2cpp_TypeInfo;

// MessageBoxLogic/PASSWORD
#include "AssemblyU2DCSharp_MessageBoxLogic_PASSWORD.h"


// T System.Collections.Generic.IEnumerator`1<MessageBoxLogic/PASSWORD>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MessageBoxLogic/PASSWORD>
extern MethodInfo IEnumerator_1_get_Current_m246712_MethodInfo;
static PropertyInfo IEnumerator_1_t27677____Current_PropertyInfo = 
{
	&IEnumerator_1_t27677_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246712_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27677_PropertyInfos[] =
{
	&IEnumerator_1_t27677____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27677_il2cpp_TypeInfo;
extern Il2CppType PASSWORD_t1545_0_0_0;
extern void* RuntimeInvoker_PASSWORD_t1545 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MessageBoxLogic/PASSWORD>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246712_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27677_il2cpp_TypeInfo/* declaring_type */
	, &PASSWORD_t1545_0_0_0/* return_type */
	, RuntimeInvoker_PASSWORD_t1545/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27677_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246712_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27677_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27677_0_0_0;
extern Il2CppType IEnumerator_1_t27677_1_0_0;
struct IEnumerator_1_t27677;
extern TypeInfo IEnumerator_1_t27677_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27677_GenericClass;
TypeInfo IEnumerator_1_t27677_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27677_MethodInfos/* methods */
	, IEnumerator_1_t27677_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27677_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27677_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27677_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27677_0_0_0/* byval_arg */
	, &IEnumerator_1_t27677_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27677_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1311.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1311MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo;
extern TypeInfo PASSWORD_t1545_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133228_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPASSWORD_t1545_m201064_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MessageBoxLogic/PASSWORD>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MessageBoxLogic/PASSWORD>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPASSWORD_t1545_m201064 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisPASSWORD_t1545_m201064_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m133223_MethodInfo;
 void InternalEnumerator_1__ctor_m133223 (InternalEnumerator_1_t17983 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133224_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133224 (InternalEnumerator_1_t17983 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133225_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133225 (InternalEnumerator_1_t17983 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m133228(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m133228_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PASSWORD_t1545_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m133226_MethodInfo;
 void InternalEnumerator_1_Dispose_m133226 (InternalEnumerator_1_t17983 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m133227_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m133227 (InternalEnumerator_1_t17983 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m133228_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m133228 (InternalEnumerator_1_t17983 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPASSWORD_t1545_m201064(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPASSWORD_t1545_m201064_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17983____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17983, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17983____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17983, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17983_FieldInfos[] =
{
	&InternalEnumerator_1_t17983____array_FieldInfo,
	&InternalEnumerator_1_t17983____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133225_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17983____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17983_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133225_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133228_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17983____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17983_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133228_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17983_PropertyInfos[] =
{
	&InternalEnumerator_1_t17983____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17983____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17983_InternalEnumerator_1__ctor_m133223_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133223_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m133223/* method */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17983_InternalEnumerator_1__ctor_m133223_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133224_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133224/* method */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133225_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133225/* method */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133226_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m133226/* method */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133227_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m133227/* method */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo;
extern Il2CppType PASSWORD_t1545_0_0_0;
extern void* RuntimeInvoker_PASSWORD_t1545 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MessageBoxLogic/PASSWORD>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133228_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m133228/* method */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* declaring_type */
	, &PASSWORD_t1545_0_0_0/* return_type */
	, RuntimeInvoker_PASSWORD_t1545/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t17983_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133223_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133224_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133225_MethodInfo,
	&InternalEnumerator_1_Dispose_m133226_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133227_MethodInfo,
	&InternalEnumerator_1_get_Current_m133228_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133225_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133227_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133224_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133226_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133228_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17983_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133225_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133227_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133224_MethodInfo,
	&InternalEnumerator_1_Dispose_m133226_MethodInfo,
	&InternalEnumerator_1_get_Current_m133228_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27677_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17983_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27677_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27677_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17983_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27677_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17983_0_0_0;
extern Il2CppType InternalEnumerator_1_t17983_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17983_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17983_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17983_MethodInfos/* methods */
	, InternalEnumerator_1_t17983_PropertyInfos/* properties */
	, InternalEnumerator_1_t17983_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17983_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17983_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17983_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17983_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17983_1_0_0/* this_arg */
	, InternalEnumerator_1_t17983_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17983_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17983)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>
extern MethodInfo ICollection_1_get_Count_m246713_MethodInfo;
static PropertyInfo ICollection_1_t32245____Count_PropertyInfo = 
{
	&ICollection_1_t32245_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246713_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246714_MethodInfo;
static PropertyInfo ICollection_1_t32245____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32245_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246714_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32245_PropertyInfos[] =
{
	&ICollection_1_t32245____Count_PropertyInfo,
	&ICollection_1_t32245____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::get_Count()
MethodInfo ICollection_1_get_Count_m246713_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32245_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246714_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32245_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PASSWORD_t1545_0_0_0;
static ParameterInfo ICollection_1_t32245_ICollection_1_Add_m246715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PASSWORD_t1545_0_0_0},
};
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::Add(T)
MethodInfo ICollection_1_Add_m246715_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32245_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t32245_ICollection_1_Add_m246715_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::Clear()
MethodInfo ICollection_1_Clear_m246716_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32245_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PASSWORD_t1545_0_0_0;
static ParameterInfo ICollection_1_t32245_ICollection_1_Contains_m246717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PASSWORD_t1545_0_0_0},
};
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::Contains(T)
MethodInfo ICollection_1_Contains_m246717_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32245_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32245_ICollection_1_Contains_m246717_ParameterInfos/* parameters */
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
extern Il2CppType PASSWORDU5BU5D_t25735_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32245_ICollection_1_CopyTo_m246718_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PASSWORDU5BU5D_t25735_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246718_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32245_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32245_ICollection_1_CopyTo_m246718_ParameterInfos/* parameters */
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
extern Il2CppType PASSWORD_t1545_0_0_0;
static ParameterInfo ICollection_1_t32245_ICollection_1_Remove_m246719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PASSWORD_t1545_0_0_0},
};
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MessageBoxLogic/PASSWORD>::Remove(T)
MethodInfo ICollection_1_Remove_m246719_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32245_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32245_ICollection_1_Remove_m246719_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32245_MethodInfos[] =
{
	&ICollection_1_get_Count_m246713_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246714_MethodInfo,
	&ICollection_1_Add_m246715_MethodInfo,
	&ICollection_1_Clear_m246716_MethodInfo,
	&ICollection_1_Contains_m246717_MethodInfo,
	&ICollection_1_CopyTo_m246718_MethodInfo,
	&ICollection_1_Remove_m246719_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32247_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32245_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32247_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32245_0_0_0;
extern Il2CppType ICollection_1_t32245_1_0_0;
struct ICollection_1_t32245;
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32245_GenericClass;
TypeInfo ICollection_1_t32245_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32245_MethodInfos/* methods */
	, ICollection_1_t32245_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32245_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32245_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32245_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32245_0_0_0/* byval_arg */
	, &ICollection_1_t32245_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32245_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32247_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MessageBoxLogic/PASSWORD>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MessageBoxLogic/PASSWORD>
extern TypeInfo IEnumerable_1_t32247_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27677_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MessageBoxLogic/PASSWORD>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246720_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32247_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27677_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32247_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246720_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32247_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32247_0_0_0;
extern Il2CppType IEnumerable_1_t32247_1_0_0;
struct IEnumerable_1_t32247;
extern TypeInfo IEnumerable_1_t32247_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32247_GenericClass;
TypeInfo IEnumerable_1_t32247_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32247_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32247_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32247_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32247_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32247_0_0_0/* byval_arg */
	, &IEnumerable_1_t32247_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32247_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32246_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>
extern MethodInfo IList_1_get_Item_m246721_MethodInfo;
extern MethodInfo IList_1_set_Item_m246722_MethodInfo;
static PropertyInfo IList_1_t32246____Item_PropertyInfo = 
{
	&IList_1_t32246_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246721_MethodInfo/* get */
	, &IList_1_set_Item_m246722_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32246_PropertyInfos[] =
{
	&IList_1_t32246____Item_PropertyInfo,
	NULL
};
extern Il2CppType PASSWORD_t1545_0_0_0;
static ParameterInfo IList_1_t32246_IList_1_IndexOf_m246723_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PASSWORD_t1545_0_0_0},
};
extern TypeInfo IList_1_t32246_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246723_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32246_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32246_IList_1_IndexOf_m246723_ParameterInfos/* parameters */
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
extern Il2CppType PASSWORD_t1545_0_0_0;
static ParameterInfo IList_1_t32246_IList_1_Insert_m246724_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PASSWORD_t1545_0_0_0},
};
extern TypeInfo IList_1_t32246_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246724_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32246_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32246_IList_1_Insert_m246724_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32246_IList_1_RemoveAt_m246725_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32246_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246725_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32246_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32246_IList_1_RemoveAt_m246725_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32246_IList_1_get_Item_m246721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32246_il2cpp_TypeInfo;
extern Il2CppType PASSWORD_t1545_0_0_0;
extern void* RuntimeInvoker_PASSWORD_t1545_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246721_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32246_il2cpp_TypeInfo/* declaring_type */
	, &PASSWORD_t1545_0_0_0/* return_type */
	, RuntimeInvoker_PASSWORD_t1545_Int32_t73/* invoker_method */
	, IList_1_t32246_IList_1_get_Item_m246721_ParameterInfos/* parameters */
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
extern Il2CppType PASSWORD_t1545_0_0_0;
static ParameterInfo IList_1_t32246_IList_1_set_Item_m246722_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PASSWORD_t1545_0_0_0},
};
extern TypeInfo IList_1_t32246_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MessageBoxLogic/PASSWORD>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246722_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32246_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32246_IList_1_set_Item_m246722_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32246_MethodInfos[] =
{
	&IList_1_IndexOf_m246723_MethodInfo,
	&IList_1_Insert_m246724_MethodInfo,
	&IList_1_RemoveAt_m246725_MethodInfo,
	&IList_1_get_Item_m246721_MethodInfo,
	&IList_1_set_Item_m246722_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32245_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32247_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32246_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32245_il2cpp_TypeInfo,
	&IEnumerable_1_t32247_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32246_0_0_0;
extern Il2CppType IList_1_t32246_1_0_0;
struct IList_1_t32246;
extern TypeInfo IList_1_t32246_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32246_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32246_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32246_MethodInfos/* methods */
	, IList_1_t32246_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32246_il2cpp_TypeInfo/* element_class */
	, IList_1_t32246_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32246_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32246_0_0_0/* byval_arg */
	, &IList_1_t32246_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32246_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27678_il2cpp_TypeInfo;

// DailyMissionItem
#include "AssemblyU2DCSharp_DailyMissionItem.h"


// T System.Collections.Generic.IEnumerator`1<DailyMissionItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<DailyMissionItem>
extern MethodInfo IEnumerator_1_get_Current_m246726_MethodInfo;
static PropertyInfo IEnumerator_1_t27678____Current_PropertyInfo = 
{
	&IEnumerator_1_t27678_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246726_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27678_PropertyInfos[] =
{
	&IEnumerator_1_t27678____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27678_il2cpp_TypeInfo;
extern Il2CppType DailyMissionItem_t1557_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<DailyMissionItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246726_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27678_il2cpp_TypeInfo/* declaring_type */
	, &DailyMissionItem_t1557_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27678_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246726_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27678_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27678_0_0_0;
extern Il2CppType IEnumerator_1_t27678_1_0_0;
struct IEnumerator_1_t27678;
extern TypeInfo IEnumerator_1_t27678_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27678_GenericClass;
TypeInfo IEnumerator_1_t27678_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27678_MethodInfos/* methods */
	, IEnumerator_1_t27678_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27678_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27678_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27678_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27678_0_0_0/* byval_arg */
	, &IEnumerator_1_t27678_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27678_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<DailyMissionItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1312.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<DailyMissionItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1312MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo;
extern TypeInfo DailyMissionItem_t1557_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133234_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDailyMissionItem_t1557_m201075_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<DailyMissionItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<DailyMissionItem>(System.Int32)
#define Array_InternalArray__get_Item_TisDailyMissionItem_t1557_m201075(__this, p0, method) (DailyMissionItem_t1557 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisDailyMissionItem_t1557_m201075_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<DailyMissionItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<DailyMissionItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<DailyMissionItem>::MoveNext()
// T System.Array/InternalEnumerator`1<DailyMissionItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<DailyMissionItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17984____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17984, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17984____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17984, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17984_FieldInfos[] =
{
	&InternalEnumerator_1_t17984____array_FieldInfo,
	&InternalEnumerator_1_t17984____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133231_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17984____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17984_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133231_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133234_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17984____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17984_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133234_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17984_PropertyInfos[] =
{
	&InternalEnumerator_1_t17984____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17984____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17984_InternalEnumerator_1__ctor_m133229_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133229_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17984_InternalEnumerator_1__ctor_m133229_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133230_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<DailyMissionItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133231_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133232_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<DailyMissionItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133233_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo;
extern Il2CppType DailyMissionItem_t1557_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<DailyMissionItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133234_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* declaring_type */
	, &DailyMissionItem_t1557_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t17984_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133229_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133230_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133231_MethodInfo,
	&InternalEnumerator_1_Dispose_m133232_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133233_MethodInfo,
	&InternalEnumerator_1_get_Current_m133234_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133231_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133233_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133230_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133232_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133234_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17984_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133231_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133233_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133230_MethodInfo,
	&InternalEnumerator_1_Dispose_m133232_MethodInfo,
	&InternalEnumerator_1_get_Current_m133234_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27678_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17984_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27678_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27678_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17984_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27678_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133234_MethodInfo;
extern TypeInfo DailyMissionItem_t1557_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDailyMissionItem_t1557_m201075_MethodInfo;
static void* InternalEnumerator_1_t17984_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133234_MethodInfo,
	&DailyMissionItem_t1557_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisDailyMissionItem_t1557_m201075_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17984_0_0_0;
extern Il2CppType InternalEnumerator_1_t17984_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17984_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17984_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17984_MethodInfos/* methods */
	, InternalEnumerator_1_t17984_PropertyInfos/* properties */
	, InternalEnumerator_1_t17984_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17984_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17984_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17984_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17984_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17984_1_0_0/* this_arg */
	, InternalEnumerator_1_t17984_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17984_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t17984_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17984)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<DailyMissionItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<DailyMissionItem>
extern MethodInfo ICollection_1_get_Count_m246727_MethodInfo;
static PropertyInfo ICollection_1_t32248____Count_PropertyInfo = 
{
	&ICollection_1_t32248_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246727_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246728_MethodInfo;
static PropertyInfo ICollection_1_t32248____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32248_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246728_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32248_PropertyInfos[] =
{
	&ICollection_1_t32248____Count_PropertyInfo,
	&ICollection_1_t32248____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<DailyMissionItem>::get_Count()
MethodInfo ICollection_1_get_Count_m246727_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32248_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246728_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32248_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DailyMissionItem_t1557_0_0_0;
static ParameterInfo ICollection_1_t32248_ICollection_1_Add_m246729_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DailyMissionItem_t1557_0_0_0},
};
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem>::Add(T)
MethodInfo ICollection_1_Add_m246729_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32248_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32248_ICollection_1_Add_m246729_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem>::Clear()
MethodInfo ICollection_1_Clear_m246730_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32248_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DailyMissionItem_t1557_0_0_0;
static ParameterInfo ICollection_1_t32248_ICollection_1_Contains_m246731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DailyMissionItem_t1557_0_0_0},
};
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem>::Contains(T)
MethodInfo ICollection_1_Contains_m246731_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32248_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32248_ICollection_1_Contains_m246731_ParameterInfos/* parameters */
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
extern Il2CppType DailyMissionItemU5BU5D_t25736_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32248_ICollection_1_CopyTo_m246732_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DailyMissionItemU5BU5D_t25736_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246732_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32248_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32248_ICollection_1_CopyTo_m246732_ParameterInfos/* parameters */
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
extern Il2CppType DailyMissionItem_t1557_0_0_0;
static ParameterInfo ICollection_1_t32248_ICollection_1_Remove_m246733_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DailyMissionItem_t1557_0_0_0},
};
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem>::Remove(T)
MethodInfo ICollection_1_Remove_m246733_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32248_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32248_ICollection_1_Remove_m246733_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32248_MethodInfos[] =
{
	&ICollection_1_get_Count_m246727_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246728_MethodInfo,
	&ICollection_1_Add_m246729_MethodInfo,
	&ICollection_1_Clear_m246730_MethodInfo,
	&ICollection_1_Contains_m246731_MethodInfo,
	&ICollection_1_CopyTo_m246732_MethodInfo,
	&ICollection_1_Remove_m246733_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32250_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32248_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32250_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32248_0_0_0;
extern Il2CppType ICollection_1_t32248_1_0_0;
struct ICollection_1_t32248;
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32248_GenericClass;
TypeInfo ICollection_1_t32248_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32248_MethodInfos/* methods */
	, ICollection_1_t32248_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32248_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32248_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32248_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32248_0_0_0/* byval_arg */
	, &ICollection_1_t32248_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32248_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32250_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<DailyMissionItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<DailyMissionItem>
extern TypeInfo IEnumerable_1_t32250_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27678_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<DailyMissionItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246734_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32250_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27678_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32250_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246734_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32250_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32250_0_0_0;
extern Il2CppType IEnumerable_1_t32250_1_0_0;
struct IEnumerable_1_t32250;
extern TypeInfo IEnumerable_1_t32250_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32250_GenericClass;
TypeInfo IEnumerable_1_t32250_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32250_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32250_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32250_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32250_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32250_0_0_0/* byval_arg */
	, &IEnumerable_1_t32250_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32250_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32249_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<DailyMissionItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<DailyMissionItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<DailyMissionItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<DailyMissionItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<DailyMissionItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<DailyMissionItem>
extern MethodInfo IList_1_get_Item_m246735_MethodInfo;
extern MethodInfo IList_1_set_Item_m246736_MethodInfo;
static PropertyInfo IList_1_t32249____Item_PropertyInfo = 
{
	&IList_1_t32249_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246735_MethodInfo/* get */
	, &IList_1_set_Item_m246736_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32249_PropertyInfos[] =
{
	&IList_1_t32249____Item_PropertyInfo,
	NULL
};
extern Il2CppType DailyMissionItem_t1557_0_0_0;
static ParameterInfo IList_1_t32249_IList_1_IndexOf_m246737_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DailyMissionItem_t1557_0_0_0},
};
extern TypeInfo IList_1_t32249_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<DailyMissionItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246737_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32249_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32249_IList_1_IndexOf_m246737_ParameterInfos/* parameters */
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
extern Il2CppType DailyMissionItem_t1557_0_0_0;
static ParameterInfo IList_1_t32249_IList_1_Insert_m246738_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DailyMissionItem_t1557_0_0_0},
};
extern TypeInfo IList_1_t32249_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<DailyMissionItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246738_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32249_IList_1_Insert_m246738_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32249_IList_1_RemoveAt_m246739_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32249_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<DailyMissionItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246739_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32249_IList_1_RemoveAt_m246739_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32249_IList_1_get_Item_m246735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32249_il2cpp_TypeInfo;
extern Il2CppType DailyMissionItem_t1557_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<DailyMissionItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246735_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32249_il2cpp_TypeInfo/* declaring_type */
	, &DailyMissionItem_t1557_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32249_IList_1_get_Item_m246735_ParameterInfos/* parameters */
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
extern Il2CppType DailyMissionItem_t1557_0_0_0;
static ParameterInfo IList_1_t32249_IList_1_set_Item_m246736_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DailyMissionItem_t1557_0_0_0},
};
extern TypeInfo IList_1_t32249_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<DailyMissionItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246736_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32249_IList_1_set_Item_m246736_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32249_MethodInfos[] =
{
	&IList_1_IndexOf_m246737_MethodInfo,
	&IList_1_Insert_m246738_MethodInfo,
	&IList_1_RemoveAt_m246739_MethodInfo,
	&IList_1_get_Item_m246735_MethodInfo,
	&IList_1_set_Item_m246736_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32248_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32250_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32249_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32248_il2cpp_TypeInfo,
	&IEnumerable_1_t32250_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32249_0_0_0;
extern Il2CppType IList_1_t32249_1_0_0;
struct IList_1_t32249;
extern TypeInfo IList_1_t32249_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32249_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32249_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32249_MethodInfos/* methods */
	, IList_1_t32249_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32249_il2cpp_TypeInfo/* element_class */
	, IList_1_t32249_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32249_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32249_0_0_0/* byval_arg */
	, &IList_1_t32249_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32249_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<DailyMissionItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_218.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t17985_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<DailyMissionItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_218MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<DailyMissionItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_214.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t17985_il2cpp_TypeInfo;
extern TypeInfo DailyMissionItem_t1557_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<DailyMissionItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_214MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m133237_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133239_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<DailyMissionItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<DailyMissionItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<DailyMissionItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t17985____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t17985_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t17985, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t17985_FieldInfos[] =
{
	&CachedInvokableCall_1_t17985____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType DailyMissionItem_t1557_0_0_0;
static ParameterInfo CachedInvokableCall_1_t17985_CachedInvokableCall_1__ctor_m133235_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &DailyMissionItem_t1557_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17985_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<DailyMissionItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m133235_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t17985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17985_CachedInvokableCall_1__ctor_m133235_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t17985_CachedInvokableCall_1_Invoke_m133236_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17985_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<DailyMissionItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m133236_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t17985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17985_CachedInvokableCall_1_Invoke_m133236_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t17985_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m133235_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133236_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m133236_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133240_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t17985_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133236_MethodInfo,
	&InvokableCall_1_Find_m133240_MethodInfo,
};
extern Il2CppType UnityAction_1_t17987_0_0_0;
extern TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisDailyMissionItem_t1557_m201085_MethodInfo;
extern TypeInfo DailyMissionItem_t1557_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133242_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m133237_MethodInfo;
extern TypeInfo DailyMissionItem_t1557_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m133239_MethodInfo;
static void* CachedInvokableCall_1_t17985_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t17987_0_0_0,
	&UnityAction_1_t17987_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisDailyMissionItem_t1557_m201085_MethodInfo,
	&DailyMissionItem_t1557_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133242_MethodInfo,
	&InvokableCall_1__ctor_m133237_MethodInfo,
	&DailyMissionItem_t1557_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m133239_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t17985_0_0_0;
extern Il2CppType CachedInvokableCall_1_t17985_1_0_0;
extern TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t17985;
extern TypeInfo CachedInvokableCall_1_t17985_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t17985_GenericClass;
TypeInfo CachedInvokableCall_1_t17985_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t17985_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t17985_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t17986_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t17985_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t17985_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t17985_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t17985_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t17985_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t17985_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t17985_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t17985)/* instance_size */
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
extern TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<DailyMissionItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_221.h"
extern TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo DailyMissionItem_t1557_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<DailyMissionItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_221MethodDeclarations.h"
extern Il2CppType UnityAction_1_t17987_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisDailyMissionItem_t1557_m201085_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m133242_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<DailyMissionItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<DailyMissionItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisDailyMissionItem_t1557_m201085(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisDailyMissionItem_t1557_m201085_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<DailyMissionItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<DailyMissionItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<DailyMissionItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<DailyMissionItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<DailyMissionItem>
extern Il2CppType UnityAction_1_t17987_0_0_1;
FieldInfo InvokableCall_1_t17986____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t17987_0_0_1/* type */
	, &InvokableCall_1_t17986_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t17986, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t17986_FieldInfos[] =
{
	&InvokableCall_1_t17986____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t17986_InvokableCall_1__ctor_m133237_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<DailyMissionItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m133237_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t17986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17986_InvokableCall_1__ctor_m133237_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t17987_0_0_0;
static ParameterInfo InvokableCall_1_t17986_InvokableCall_1__ctor_m133238_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t17987_0_0_0},
};
extern TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<DailyMissionItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m133238_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t17986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17986_InvokableCall_1__ctor_m133238_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17986_InvokableCall_1_Invoke_m133239_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<DailyMissionItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m133239_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t17986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17986_InvokableCall_1_Invoke_m133239_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17986_InvokableCall_1_Find_m133240_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<DailyMissionItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m133240_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t17986_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17986_InvokableCall_1_Find_m133240_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t17986_MethodInfos[] =
{
	&InvokableCall_1__ctor_m133237_MethodInfo,
	&InvokableCall_1__ctor_m133238_MethodInfo,
	&InvokableCall_1_Invoke_m133239_MethodInfo,
	&InvokableCall_1_Find_m133240_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133239_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133240_MethodInfo;
static MethodInfo* InvokableCall_1_t17986_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m133239_MethodInfo,
	&InvokableCall_1_Find_m133240_MethodInfo,
};
extern Il2CppType UnityAction_1_t17987_0_0_0;
extern TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisDailyMissionItem_t1557_m201085_MethodInfo;
extern TypeInfo DailyMissionItem_t1557_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133242_MethodInfo;
static void* InvokableCall_1_t17986_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t17987_0_0_0,
	&UnityAction_1_t17987_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisDailyMissionItem_t1557_m201085_MethodInfo,
	&DailyMissionItem_t1557_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133242_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t17986_0_0_0;
extern Il2CppType InvokableCall_1_t17986_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t17986;
extern TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t17986_GenericClass;
TypeInfo InvokableCall_1_t17986_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t17986_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t17986_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t17986_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t17986_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t17986_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t17986_0_0_0/* byval_arg */
	, &InvokableCall_1_t17986_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t17986_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t17986_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t17986)/* instance_size */
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
extern TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<DailyMissionItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<DailyMissionItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<DailyMissionItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<DailyMissionItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<DailyMissionItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t17987_UnityAction_1__ctor_m133241_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<DailyMissionItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m133241_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t17987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t17987_UnityAction_1__ctor_m133241_ParameterInfos/* parameters */
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
extern Il2CppType DailyMissionItem_t1557_0_0_0;
static ParameterInfo UnityAction_1_t17987_UnityAction_1_Invoke_m133242_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &DailyMissionItem_t1557_0_0_0},
};
extern TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<DailyMissionItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m133242_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t17987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17987_UnityAction_1_Invoke_m133242_ParameterInfos/* parameters */
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
extern Il2CppType DailyMissionItem_t1557_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t17987_UnityAction_1_BeginInvoke_m133243_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &DailyMissionItem_t1557_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<DailyMissionItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m133243_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t17987_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t17987_UnityAction_1_BeginInvoke_m133243_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t17987_UnityAction_1_EndInvoke_m133244_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<DailyMissionItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m133244_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t17987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17987_UnityAction_1_EndInvoke_m133244_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t17987_MethodInfos[] =
{
	&UnityAction_1__ctor_m133241_MethodInfo,
	&UnityAction_1_Invoke_m133242_MethodInfo,
	&UnityAction_1_BeginInvoke_m133243_MethodInfo,
	&UnityAction_1_EndInvoke_m133244_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m133242_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m133243_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m133244_MethodInfo;
static MethodInfo* UnityAction_1_t17987_VTable[] =
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
	&UnityAction_1_Invoke_m133242_MethodInfo,
	&UnityAction_1_BeginInvoke_m133243_MethodInfo,
	&UnityAction_1_EndInvoke_m133244_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t17987_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t17987_0_0_0;
extern Il2CppType UnityAction_1_t17987_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t17987;
extern TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t17987_GenericClass;
TypeInfo UnityAction_1_t17987_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t17987_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t17987_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t17987_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t17987_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t17987_0_0_0/* byval_arg */
	, &UnityAction_1_t17987_1_0_0/* this_arg */
	, UnityAction_1_t17987_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t17987_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t17987)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27679_il2cpp_TypeInfo;

// MissionRewardItem
#include "AssemblyU2DCSharp_MissionRewardItem.h"


// T System.Collections.Generic.IEnumerator`1<MissionRewardItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MissionRewardItem>
extern MethodInfo IEnumerator_1_get_Current_m246740_MethodInfo;
static PropertyInfo IEnumerator_1_t27679____Current_PropertyInfo = 
{
	&IEnumerator_1_t27679_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246740_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27679_PropertyInfos[] =
{
	&IEnumerator_1_t27679____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27679_il2cpp_TypeInfo;
extern Il2CppType MissionRewardItem_t1556_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MissionRewardItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246740_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27679_il2cpp_TypeInfo/* declaring_type */
	, &MissionRewardItem_t1556_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27679_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246740_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27679_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27679_0_0_0;
extern Il2CppType IEnumerator_1_t27679_1_0_0;
struct IEnumerator_1_t27679;
extern TypeInfo IEnumerator_1_t27679_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27679_GenericClass;
TypeInfo IEnumerator_1_t27679_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27679_MethodInfos/* methods */
	, IEnumerator_1_t27679_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27679_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27679_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27679_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27679_0_0_0/* byval_arg */
	, &IEnumerator_1_t27679_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27679_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MissionRewardItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1313.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MissionRewardItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1313MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo;
extern TypeInfo MissionRewardItem_t1556_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133250_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionRewardItem_t1556_m201087_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MissionRewardItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MissionRewardItem>(System.Int32)
#define Array_InternalArray__get_Item_TisMissionRewardItem_t1556_m201087(__this, p0, method) (MissionRewardItem_t1556 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMissionRewardItem_t1556_m201087_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MissionRewardItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<MissionRewardItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<MissionRewardItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<MissionRewardItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<MissionRewardItem>::MoveNext()
// T System.Array/InternalEnumerator`1<MissionRewardItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<MissionRewardItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17988____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17988, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17988____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17988, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17988_FieldInfos[] =
{
	&InternalEnumerator_1_t17988____array_FieldInfo,
	&InternalEnumerator_1_t17988____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133247_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17988____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17988_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133247_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133250_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17988____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17988_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133250_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17988_PropertyInfos[] =
{
	&InternalEnumerator_1_t17988____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17988____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17988_InternalEnumerator_1__ctor_m133245_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionRewardItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133245_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17988_InternalEnumerator_1__ctor_m133245_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionRewardItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133246_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MissionRewardItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133247_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionRewardItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133248_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MissionRewardItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133249_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo;
extern Il2CppType MissionRewardItem_t1556_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MissionRewardItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133250_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* declaring_type */
	, &MissionRewardItem_t1556_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t17988_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133245_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133246_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133247_MethodInfo,
	&InternalEnumerator_1_Dispose_m133248_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133249_MethodInfo,
	&InternalEnumerator_1_get_Current_m133250_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133247_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133249_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133246_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133248_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133250_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17988_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133247_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133249_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133246_MethodInfo,
	&InternalEnumerator_1_Dispose_m133248_MethodInfo,
	&InternalEnumerator_1_get_Current_m133250_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27679_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17988_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27679_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27679_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17988_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27679_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133250_MethodInfo;
extern TypeInfo MissionRewardItem_t1556_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionRewardItem_t1556_m201087_MethodInfo;
static void* InternalEnumerator_1_t17988_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133250_MethodInfo,
	&MissionRewardItem_t1556_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMissionRewardItem_t1556_m201087_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17988_0_0_0;
extern Il2CppType InternalEnumerator_1_t17988_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17988_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17988_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17988_MethodInfos/* methods */
	, InternalEnumerator_1_t17988_PropertyInfos/* properties */
	, InternalEnumerator_1_t17988_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17988_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17988_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17988_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17988_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17988_1_0_0/* this_arg */
	, InternalEnumerator_1_t17988_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17988_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t17988_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17988)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MissionRewardItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MissionRewardItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MissionRewardItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MissionRewardItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MissionRewardItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MissionRewardItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MissionRewardItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MissionRewardItem>
extern MethodInfo ICollection_1_get_Count_m246741_MethodInfo;
static PropertyInfo ICollection_1_t32251____Count_PropertyInfo = 
{
	&ICollection_1_t32251_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246741_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246742_MethodInfo;
static PropertyInfo ICollection_1_t32251____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32251_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246742_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32251_PropertyInfos[] =
{
	&ICollection_1_t32251____Count_PropertyInfo,
	&ICollection_1_t32251____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MissionRewardItem>::get_Count()
MethodInfo ICollection_1_get_Count_m246741_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32251_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionRewardItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246742_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32251_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionRewardItem_t1556_0_0_0;
static ParameterInfo ICollection_1_t32251_ICollection_1_Add_m246743_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionRewardItem_t1556_0_0_0},
};
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionRewardItem>::Add(T)
MethodInfo ICollection_1_Add_m246743_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32251_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32251_ICollection_1_Add_m246743_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionRewardItem>::Clear()
MethodInfo ICollection_1_Clear_m246744_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32251_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionRewardItem_t1556_0_0_0;
static ParameterInfo ICollection_1_t32251_ICollection_1_Contains_m246745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionRewardItem_t1556_0_0_0},
};
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionRewardItem>::Contains(T)
MethodInfo ICollection_1_Contains_m246745_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32251_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32251_ICollection_1_Contains_m246745_ParameterInfos/* parameters */
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
extern Il2CppType MissionRewardItemU5BU5D_t1555_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32251_ICollection_1_CopyTo_m246746_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MissionRewardItemU5BU5D_t1555_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionRewardItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246746_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32251_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32251_ICollection_1_CopyTo_m246746_ParameterInfos/* parameters */
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
extern Il2CppType MissionRewardItem_t1556_0_0_0;
static ParameterInfo ICollection_1_t32251_ICollection_1_Remove_m246747_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionRewardItem_t1556_0_0_0},
};
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionRewardItem>::Remove(T)
MethodInfo ICollection_1_Remove_m246747_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32251_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32251_ICollection_1_Remove_m246747_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32251_MethodInfos[] =
{
	&ICollection_1_get_Count_m246741_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246742_MethodInfo,
	&ICollection_1_Add_m246743_MethodInfo,
	&ICollection_1_Clear_m246744_MethodInfo,
	&ICollection_1_Contains_m246745_MethodInfo,
	&ICollection_1_CopyTo_m246746_MethodInfo,
	&ICollection_1_Remove_m246747_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32253_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32251_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32253_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32251_0_0_0;
extern Il2CppType ICollection_1_t32251_1_0_0;
struct ICollection_1_t32251;
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32251_GenericClass;
TypeInfo ICollection_1_t32251_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32251_MethodInfos/* methods */
	, ICollection_1_t32251_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32251_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32251_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32251_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32251_0_0_0/* byval_arg */
	, &ICollection_1_t32251_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32251_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32253_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionRewardItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MissionRewardItem>
extern TypeInfo IEnumerable_1_t32253_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27679_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionRewardItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246748_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32253_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27679_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32253_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246748_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32253_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32253_0_0_0;
extern Il2CppType IEnumerable_1_t32253_1_0_0;
struct IEnumerable_1_t32253;
extern TypeInfo IEnumerable_1_t32253_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32253_GenericClass;
TypeInfo IEnumerable_1_t32253_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32253_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32253_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32253_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32253_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32253_0_0_0/* byval_arg */
	, &IEnumerable_1_t32253_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32253_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32252_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MissionRewardItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MissionRewardItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MissionRewardItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MissionRewardItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MissionRewardItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MissionRewardItem>
extern MethodInfo IList_1_get_Item_m246749_MethodInfo;
extern MethodInfo IList_1_set_Item_m246750_MethodInfo;
static PropertyInfo IList_1_t32252____Item_PropertyInfo = 
{
	&IList_1_t32252_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246749_MethodInfo/* get */
	, &IList_1_set_Item_m246750_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32252_PropertyInfos[] =
{
	&IList_1_t32252____Item_PropertyInfo,
	NULL
};
extern Il2CppType MissionRewardItem_t1556_0_0_0;
static ParameterInfo IList_1_t32252_IList_1_IndexOf_m246751_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionRewardItem_t1556_0_0_0},
};
extern TypeInfo IList_1_t32252_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MissionRewardItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246751_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32252_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32252_IList_1_IndexOf_m246751_ParameterInfos/* parameters */
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
extern Il2CppType MissionRewardItem_t1556_0_0_0;
static ParameterInfo IList_1_t32252_IList_1_Insert_m246752_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MissionRewardItem_t1556_0_0_0},
};
extern TypeInfo IList_1_t32252_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionRewardItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246752_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32252_IList_1_Insert_m246752_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32252_IList_1_RemoveAt_m246753_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32252_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionRewardItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246753_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32252_IList_1_RemoveAt_m246753_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32252_IList_1_get_Item_m246749_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32252_il2cpp_TypeInfo;
extern Il2CppType MissionRewardItem_t1556_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MissionRewardItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246749_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32252_il2cpp_TypeInfo/* declaring_type */
	, &MissionRewardItem_t1556_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32252_IList_1_get_Item_m246749_ParameterInfos/* parameters */
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
extern Il2CppType MissionRewardItem_t1556_0_0_0;
static ParameterInfo IList_1_t32252_IList_1_set_Item_m246750_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MissionRewardItem_t1556_0_0_0},
};
extern TypeInfo IList_1_t32252_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionRewardItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246750_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32252_IList_1_set_Item_m246750_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32252_MethodInfos[] =
{
	&IList_1_IndexOf_m246751_MethodInfo,
	&IList_1_Insert_m246752_MethodInfo,
	&IList_1_RemoveAt_m246753_MethodInfo,
	&IList_1_get_Item_m246749_MethodInfo,
	&IList_1_set_Item_m246750_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32251_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32253_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32252_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32251_il2cpp_TypeInfo,
	&IEnumerable_1_t32253_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32252_0_0_0;
extern Il2CppType IList_1_t32252_1_0_0;
struct IList_1_t32252;
extern TypeInfo IList_1_t32252_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32252_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32252_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32252_MethodInfos/* methods */
	, IList_1_t32252_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32252_il2cpp_TypeInfo/* element_class */
	, IList_1_t32252_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32252_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32252_0_0_0/* byval_arg */
	, &IList_1_t32252_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32252_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27680_il2cpp_TypeInfo;

// DailyMissionItem/ItemType
#include "AssemblyU2DCSharp_DailyMissionItem_ItemType.h"


// T System.Collections.Generic.IEnumerator`1<DailyMissionItem/ItemType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<DailyMissionItem/ItemType>
extern MethodInfo IEnumerator_1_get_Current_m246754_MethodInfo;
static PropertyInfo IEnumerator_1_t27680____Current_PropertyInfo = 
{
	&IEnumerator_1_t27680_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246754_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27680_PropertyInfos[] =
{
	&IEnumerator_1_t27680____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27680_il2cpp_TypeInfo;
extern Il2CppType ItemType_t1554_0_0_0;
extern void* RuntimeInvoker_ItemType_t1554 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<DailyMissionItem/ItemType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246754_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27680_il2cpp_TypeInfo/* declaring_type */
	, &ItemType_t1554_0_0_0/* return_type */
	, RuntimeInvoker_ItemType_t1554/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27680_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246754_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27680_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27680_0_0_0;
extern Il2CppType IEnumerator_1_t27680_1_0_0;
struct IEnumerator_1_t27680;
extern TypeInfo IEnumerator_1_t27680_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27680_GenericClass;
TypeInfo IEnumerator_1_t27680_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27680_MethodInfos/* methods */
	, IEnumerator_1_t27680_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27680_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27680_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27680_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27680_0_0_0/* byval_arg */
	, &IEnumerator_1_t27680_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27680_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1314.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1314MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo;
extern TypeInfo ItemType_t1554_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133256_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisItemType_t1554_m201098_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<DailyMissionItem/ItemType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<DailyMissionItem/ItemType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisItemType_t1554_m201098 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisItemType_t1554_m201098_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m133251_MethodInfo;
 void InternalEnumerator_1__ctor_m133251 (InternalEnumerator_1_t17989 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133252_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133252 (InternalEnumerator_1_t17989 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133253_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133253 (InternalEnumerator_1_t17989 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m133256(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m133256_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ItemType_t1554_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m133254_MethodInfo;
 void InternalEnumerator_1_Dispose_m133254 (InternalEnumerator_1_t17989 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m133255_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m133255 (InternalEnumerator_1_t17989 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m133256_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m133256 (InternalEnumerator_1_t17989 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisItemType_t1554_m201098(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisItemType_t1554_m201098_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17989____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17989, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17989____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17989, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17989_FieldInfos[] =
{
	&InternalEnumerator_1_t17989____array_FieldInfo,
	&InternalEnumerator_1_t17989____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133253_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17989____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17989_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133253_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133256_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17989____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17989_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133256_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17989_PropertyInfos[] =
{
	&InternalEnumerator_1_t17989____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17989____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17989_InternalEnumerator_1__ctor_m133251_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133251_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m133251/* method */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17989_InternalEnumerator_1__ctor_m133251_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133252_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133252/* method */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133253_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133253/* method */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133254_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m133254/* method */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133255_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m133255/* method */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo;
extern Il2CppType ItemType_t1554_0_0_0;
extern void* RuntimeInvoker_ItemType_t1554 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<DailyMissionItem/ItemType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133256_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m133256/* method */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* declaring_type */
	, &ItemType_t1554_0_0_0/* return_type */
	, RuntimeInvoker_ItemType_t1554/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t17989_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133251_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133252_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133253_MethodInfo,
	&InternalEnumerator_1_Dispose_m133254_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133255_MethodInfo,
	&InternalEnumerator_1_get_Current_m133256_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133253_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133255_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133252_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133254_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133256_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17989_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133253_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133255_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133252_MethodInfo,
	&InternalEnumerator_1_Dispose_m133254_MethodInfo,
	&InternalEnumerator_1_get_Current_m133256_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27680_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17989_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27680_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27680_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17989_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27680_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17989_0_0_0;
extern Il2CppType InternalEnumerator_1_t17989_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17989_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17989_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17989_MethodInfos/* methods */
	, InternalEnumerator_1_t17989_PropertyInfos/* properties */
	, InternalEnumerator_1_t17989_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17989_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17989_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17989_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17989_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17989_1_0_0/* this_arg */
	, InternalEnumerator_1_t17989_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17989_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17989)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>
extern MethodInfo ICollection_1_get_Count_m246755_MethodInfo;
static PropertyInfo ICollection_1_t32254____Count_PropertyInfo = 
{
	&ICollection_1_t32254_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246755_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246756_MethodInfo;
static PropertyInfo ICollection_1_t32254____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32254_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246756_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32254_PropertyInfos[] =
{
	&ICollection_1_t32254____Count_PropertyInfo,
	&ICollection_1_t32254____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::get_Count()
MethodInfo ICollection_1_get_Count_m246755_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32254_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246756_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32254_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ItemType_t1554_0_0_0;
static ParameterInfo ICollection_1_t32254_ICollection_1_Add_m246757_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1554_0_0_0},
};
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::Add(T)
MethodInfo ICollection_1_Add_m246757_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32254_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t32254_ICollection_1_Add_m246757_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::Clear()
MethodInfo ICollection_1_Clear_m246758_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32254_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ItemType_t1554_0_0_0;
static ParameterInfo ICollection_1_t32254_ICollection_1_Contains_m246759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1554_0_0_0},
};
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::Contains(T)
MethodInfo ICollection_1_Contains_m246759_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32254_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32254_ICollection_1_Contains_m246759_ParameterInfos/* parameters */
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
extern Il2CppType ItemTypeU5BU5D_t25737_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32254_ICollection_1_CopyTo_m246760_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ItemTypeU5BU5D_t25737_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246760_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32254_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32254_ICollection_1_CopyTo_m246760_ParameterInfos/* parameters */
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
extern Il2CppType ItemType_t1554_0_0_0;
static ParameterInfo ICollection_1_t32254_ICollection_1_Remove_m246761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1554_0_0_0},
};
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<DailyMissionItem/ItemType>::Remove(T)
MethodInfo ICollection_1_Remove_m246761_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32254_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32254_ICollection_1_Remove_m246761_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32254_MethodInfos[] =
{
	&ICollection_1_get_Count_m246755_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246756_MethodInfo,
	&ICollection_1_Add_m246757_MethodInfo,
	&ICollection_1_Clear_m246758_MethodInfo,
	&ICollection_1_Contains_m246759_MethodInfo,
	&ICollection_1_CopyTo_m246760_MethodInfo,
	&ICollection_1_Remove_m246761_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32256_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32254_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32256_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32254_0_0_0;
extern Il2CppType ICollection_1_t32254_1_0_0;
struct ICollection_1_t32254;
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32254_GenericClass;
TypeInfo ICollection_1_t32254_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32254_MethodInfos/* methods */
	, ICollection_1_t32254_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32254_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32254_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32254_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32254_0_0_0/* byval_arg */
	, &ICollection_1_t32254_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32254_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32256_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<DailyMissionItem/ItemType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<DailyMissionItem/ItemType>
extern TypeInfo IEnumerable_1_t32256_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27680_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<DailyMissionItem/ItemType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246762_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32256_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27680_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32256_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246762_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32256_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32256_0_0_0;
extern Il2CppType IEnumerable_1_t32256_1_0_0;
struct IEnumerable_1_t32256;
extern TypeInfo IEnumerable_1_t32256_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32256_GenericClass;
TypeInfo IEnumerable_1_t32256_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32256_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32256_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32256_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32256_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32256_0_0_0/* byval_arg */
	, &IEnumerable_1_t32256_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32256_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32255_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<DailyMissionItem/ItemType>
extern MethodInfo IList_1_get_Item_m246763_MethodInfo;
extern MethodInfo IList_1_set_Item_m246764_MethodInfo;
static PropertyInfo IList_1_t32255____Item_PropertyInfo = 
{
	&IList_1_t32255_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246763_MethodInfo/* get */
	, &IList_1_set_Item_m246764_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32255_PropertyInfos[] =
{
	&IList_1_t32255____Item_PropertyInfo,
	NULL
};
extern Il2CppType ItemType_t1554_0_0_0;
static ParameterInfo IList_1_t32255_IList_1_IndexOf_m246765_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1554_0_0_0},
};
extern TypeInfo IList_1_t32255_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246765_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32255_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32255_IList_1_IndexOf_m246765_ParameterInfos/* parameters */
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
extern Il2CppType ItemType_t1554_0_0_0;
static ParameterInfo IList_1_t32255_IList_1_Insert_m246766_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ItemType_t1554_0_0_0},
};
extern TypeInfo IList_1_t32255_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246766_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32255_IList_1_Insert_m246766_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32255_IList_1_RemoveAt_m246767_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32255_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246767_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32255_IList_1_RemoveAt_m246767_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32255_IList_1_get_Item_m246763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32255_il2cpp_TypeInfo;
extern Il2CppType ItemType_t1554_0_0_0;
extern void* RuntimeInvoker_ItemType_t1554_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246763_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32255_il2cpp_TypeInfo/* declaring_type */
	, &ItemType_t1554_0_0_0/* return_type */
	, RuntimeInvoker_ItemType_t1554_Int32_t73/* invoker_method */
	, IList_1_t32255_IList_1_get_Item_m246763_ParameterInfos/* parameters */
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
extern Il2CppType ItemType_t1554_0_0_0;
static ParameterInfo IList_1_t32255_IList_1_set_Item_m246764_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ItemType_t1554_0_0_0},
};
extern TypeInfo IList_1_t32255_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<DailyMissionItem/ItemType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246764_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32255_IList_1_set_Item_m246764_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32255_MethodInfos[] =
{
	&IList_1_IndexOf_m246765_MethodInfo,
	&IList_1_Insert_m246766_MethodInfo,
	&IList_1_RemoveAt_m246767_MethodInfo,
	&IList_1_get_Item_m246763_MethodInfo,
	&IList_1_set_Item_m246764_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32254_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32256_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32255_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32254_il2cpp_TypeInfo,
	&IEnumerable_1_t32256_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32255_0_0_0;
extern Il2CppType IList_1_t32255_1_0_0;
struct IList_1_t32255;
extern TypeInfo IList_1_t32255_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32255_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32255_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32255_MethodInfos/* methods */
	, IList_1_t32255_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32255_il2cpp_TypeInfo/* element_class */
	, IList_1_t32255_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32255_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32255_0_0_0/* byval_arg */
	, &IList_1_t32255_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32255_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27681_il2cpp_TypeInfo;

// MissionLogItem
#include "AssemblyU2DCSharp_MissionLogItem.h"


// T System.Collections.Generic.IEnumerator`1<MissionLogItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MissionLogItem>
extern MethodInfo IEnumerator_1_get_Current_m246768_MethodInfo;
static PropertyInfo IEnumerator_1_t27681____Current_PropertyInfo = 
{
	&IEnumerator_1_t27681_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246768_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27681_PropertyInfos[] =
{
	&IEnumerator_1_t27681____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27681_il2cpp_TypeInfo;
extern Il2CppType MissionLogItem_t1559_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MissionLogItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246768_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27681_il2cpp_TypeInfo/* declaring_type */
	, &MissionLogItem_t1559_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27681_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246768_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27681_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27681_0_0_0;
extern Il2CppType IEnumerator_1_t27681_1_0_0;
struct IEnumerator_1_t27681;
extern TypeInfo IEnumerator_1_t27681_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27681_GenericClass;
TypeInfo IEnumerator_1_t27681_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27681_MethodInfos/* methods */
	, IEnumerator_1_t27681_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27681_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27681_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27681_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27681_0_0_0/* byval_arg */
	, &IEnumerator_1_t27681_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27681_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MissionLogItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1315.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MissionLogItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1315MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo;
extern TypeInfo MissionLogItem_t1559_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133262_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionLogItem_t1559_m201109_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MissionLogItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MissionLogItem>(System.Int32)
#define Array_InternalArray__get_Item_TisMissionLogItem_t1559_m201109(__this, p0, method) (MissionLogItem_t1559 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMissionLogItem_t1559_m201109_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MissionLogItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<MissionLogItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<MissionLogItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<MissionLogItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<MissionLogItem>::MoveNext()
// T System.Array/InternalEnumerator`1<MissionLogItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<MissionLogItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17990____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17990, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17990____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17990, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17990_FieldInfos[] =
{
	&InternalEnumerator_1_t17990____array_FieldInfo,
	&InternalEnumerator_1_t17990____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133259_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17990____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17990_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133259_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133262_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17990____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17990_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133262_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17990_PropertyInfos[] =
{
	&InternalEnumerator_1_t17990____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17990____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17990_InternalEnumerator_1__ctor_m133257_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionLogItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133257_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17990_InternalEnumerator_1__ctor_m133257_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionLogItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133258_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MissionLogItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133259_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionLogItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133260_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MissionLogItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133261_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo;
extern Il2CppType MissionLogItem_t1559_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MissionLogItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133262_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* declaring_type */
	, &MissionLogItem_t1559_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t17990_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133257_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133258_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133259_MethodInfo,
	&InternalEnumerator_1_Dispose_m133260_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133261_MethodInfo,
	&InternalEnumerator_1_get_Current_m133262_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133259_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133261_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133258_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133260_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133262_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17990_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133259_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133261_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133258_MethodInfo,
	&InternalEnumerator_1_Dispose_m133260_MethodInfo,
	&InternalEnumerator_1_get_Current_m133262_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27681_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17990_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27681_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27681_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17990_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27681_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133262_MethodInfo;
extern TypeInfo MissionLogItem_t1559_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionLogItem_t1559_m201109_MethodInfo;
static void* InternalEnumerator_1_t17990_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133262_MethodInfo,
	&MissionLogItem_t1559_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMissionLogItem_t1559_m201109_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17990_0_0_0;
extern Il2CppType InternalEnumerator_1_t17990_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17990_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17990_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17990_MethodInfos/* methods */
	, InternalEnumerator_1_t17990_PropertyInfos/* properties */
	, InternalEnumerator_1_t17990_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17990_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17990_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17990_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17990_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17990_1_0_0/* this_arg */
	, InternalEnumerator_1_t17990_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17990_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t17990_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17990)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MissionLogItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MissionLogItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MissionLogItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MissionLogItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MissionLogItem>
extern MethodInfo ICollection_1_get_Count_m246769_MethodInfo;
static PropertyInfo ICollection_1_t32257____Count_PropertyInfo = 
{
	&ICollection_1_t32257_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246769_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246770_MethodInfo;
static PropertyInfo ICollection_1_t32257____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32257_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246770_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32257_PropertyInfos[] =
{
	&ICollection_1_t32257____Count_PropertyInfo,
	&ICollection_1_t32257____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MissionLogItem>::get_Count()
MethodInfo ICollection_1_get_Count_m246769_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32257_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246770_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32257_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionLogItem_t1559_0_0_0;
static ParameterInfo ICollection_1_t32257_ICollection_1_Add_m246771_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogItem_t1559_0_0_0},
};
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionLogItem>::Add(T)
MethodInfo ICollection_1_Add_m246771_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32257_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32257_ICollection_1_Add_m246771_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionLogItem>::Clear()
MethodInfo ICollection_1_Clear_m246772_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32257_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionLogItem_t1559_0_0_0;
static ParameterInfo ICollection_1_t32257_ICollection_1_Contains_m246773_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogItem_t1559_0_0_0},
};
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogItem>::Contains(T)
MethodInfo ICollection_1_Contains_m246773_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32257_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32257_ICollection_1_Contains_m246773_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogItemU5BU5D_t25738_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32257_ICollection_1_CopyTo_m246774_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogItemU5BU5D_t25738_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionLogItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246774_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32257_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32257_ICollection_1_CopyTo_m246774_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogItem_t1559_0_0_0;
static ParameterInfo ICollection_1_t32257_ICollection_1_Remove_m246775_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogItem_t1559_0_0_0},
};
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogItem>::Remove(T)
MethodInfo ICollection_1_Remove_m246775_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32257_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32257_ICollection_1_Remove_m246775_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32257_MethodInfos[] =
{
	&ICollection_1_get_Count_m246769_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246770_MethodInfo,
	&ICollection_1_Add_m246771_MethodInfo,
	&ICollection_1_Clear_m246772_MethodInfo,
	&ICollection_1_Contains_m246773_MethodInfo,
	&ICollection_1_CopyTo_m246774_MethodInfo,
	&ICollection_1_Remove_m246775_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32259_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32257_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32259_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32257_0_0_0;
extern Il2CppType ICollection_1_t32257_1_0_0;
struct ICollection_1_t32257;
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32257_GenericClass;
TypeInfo ICollection_1_t32257_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32257_MethodInfos/* methods */
	, ICollection_1_t32257_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32257_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32257_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32257_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32257_0_0_0/* byval_arg */
	, &ICollection_1_t32257_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32257_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32259_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionLogItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MissionLogItem>
extern TypeInfo IEnumerable_1_t32259_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27681_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionLogItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246776_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32259_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27681_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32259_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246776_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32259_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32259_0_0_0;
extern Il2CppType IEnumerable_1_t32259_1_0_0;
struct IEnumerable_1_t32259;
extern TypeInfo IEnumerable_1_t32259_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32259_GenericClass;
TypeInfo IEnumerable_1_t32259_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32259_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32259_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32259_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32259_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32259_0_0_0/* byval_arg */
	, &IEnumerable_1_t32259_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32259_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32258_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MissionLogItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MissionLogItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MissionLogItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MissionLogItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MissionLogItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MissionLogItem>
extern MethodInfo IList_1_get_Item_m246777_MethodInfo;
extern MethodInfo IList_1_set_Item_m246778_MethodInfo;
static PropertyInfo IList_1_t32258____Item_PropertyInfo = 
{
	&IList_1_t32258_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246777_MethodInfo/* get */
	, &IList_1_set_Item_m246778_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32258_PropertyInfos[] =
{
	&IList_1_t32258____Item_PropertyInfo,
	NULL
};
extern Il2CppType MissionLogItem_t1559_0_0_0;
static ParameterInfo IList_1_t32258_IList_1_IndexOf_m246779_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogItem_t1559_0_0_0},
};
extern TypeInfo IList_1_t32258_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MissionLogItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246779_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32258_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32258_IList_1_IndexOf_m246779_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogItem_t1559_0_0_0;
static ParameterInfo IList_1_t32258_IList_1_Insert_m246780_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MissionLogItem_t1559_0_0_0},
};
extern TypeInfo IList_1_t32258_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionLogItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246780_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32258_IList_1_Insert_m246780_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32258_IList_1_RemoveAt_m246781_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32258_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionLogItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246781_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32258_IList_1_RemoveAt_m246781_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32258_IList_1_get_Item_m246777_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32258_il2cpp_TypeInfo;
extern Il2CppType MissionLogItem_t1559_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MissionLogItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246777_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32258_il2cpp_TypeInfo/* declaring_type */
	, &MissionLogItem_t1559_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32258_IList_1_get_Item_m246777_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogItem_t1559_0_0_0;
static ParameterInfo IList_1_t32258_IList_1_set_Item_m246778_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MissionLogItem_t1559_0_0_0},
};
extern TypeInfo IList_1_t32258_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionLogItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246778_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32258_IList_1_set_Item_m246778_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32258_MethodInfos[] =
{
	&IList_1_IndexOf_m246779_MethodInfo,
	&IList_1_Insert_m246780_MethodInfo,
	&IList_1_RemoveAt_m246781_MethodInfo,
	&IList_1_get_Item_m246777_MethodInfo,
	&IList_1_set_Item_m246778_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32257_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32259_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32258_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32257_il2cpp_TypeInfo,
	&IEnumerable_1_t32259_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32258_0_0_0;
extern Il2CppType IList_1_t32258_1_0_0;
struct IList_1_t32258;
extern TypeInfo IList_1_t32258_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32258_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32258_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32258_MethodInfos/* methods */
	, IList_1_t32258_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32258_il2cpp_TypeInfo/* element_class */
	, IList_1_t32258_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32258_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32258_0_0_0/* byval_arg */
	, &IList_1_t32258_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32258_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<MissionLogItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_219.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t17991_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<MissionLogItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_219MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<MissionLogItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_215.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t17991_il2cpp_TypeInfo;
extern TypeInfo MissionLogItem_t1559_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<MissionLogItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_215MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m133265_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133267_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionLogItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionLogItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<MissionLogItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t17991____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t17991_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t17991, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t17991_FieldInfos[] =
{
	&CachedInvokableCall_1_t17991____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType MissionLogItem_t1559_0_0_0;
static ParameterInfo CachedInvokableCall_1_t17991_CachedInvokableCall_1__ctor_m133263_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MissionLogItem_t1559_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17991_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionLogItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m133263_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t17991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17991_CachedInvokableCall_1__ctor_m133263_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t17991_CachedInvokableCall_1_Invoke_m133264_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17991_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionLogItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m133264_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t17991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17991_CachedInvokableCall_1_Invoke_m133264_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t17991_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m133263_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133264_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m133264_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133268_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t17991_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133264_MethodInfo,
	&InvokableCall_1_Find_m133268_MethodInfo,
};
extern Il2CppType UnityAction_1_t17993_0_0_0;
extern TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogItem_t1559_m201119_MethodInfo;
extern TypeInfo MissionLogItem_t1559_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133270_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m133265_MethodInfo;
extern TypeInfo MissionLogItem_t1559_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m133267_MethodInfo;
static void* CachedInvokableCall_1_t17991_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t17993_0_0_0,
	&UnityAction_1_t17993_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogItem_t1559_m201119_MethodInfo,
	&MissionLogItem_t1559_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133270_MethodInfo,
	&InvokableCall_1__ctor_m133265_MethodInfo,
	&MissionLogItem_t1559_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m133267_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t17991_0_0_0;
extern Il2CppType CachedInvokableCall_1_t17991_1_0_0;
extern TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t17991;
extern TypeInfo CachedInvokableCall_1_t17991_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t17991_GenericClass;
TypeInfo CachedInvokableCall_1_t17991_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t17991_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t17991_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t17992_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t17991_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t17991_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t17991_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t17991_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t17991_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t17991_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t17991_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t17991)/* instance_size */
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
extern TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<MissionLogItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_222.h"
extern TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo MissionLogItem_t1559_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<MissionLogItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_222MethodDeclarations.h"
extern Il2CppType UnityAction_1_t17993_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogItem_t1559_m201119_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m133270_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionLogItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionLogItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogItem_t1559_m201119(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogItem_t1559_m201119_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<MissionLogItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionLogItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<MissionLogItem>
extern Il2CppType UnityAction_1_t17993_0_0_1;
FieldInfo InvokableCall_1_t17992____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t17993_0_0_1/* type */
	, &InvokableCall_1_t17992_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t17992, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t17992_FieldInfos[] =
{
	&InvokableCall_1_t17992____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t17992_InvokableCall_1__ctor_m133265_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m133265_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t17992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17992_InvokableCall_1__ctor_m133265_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t17993_0_0_0;
static ParameterInfo InvokableCall_1_t17992_InvokableCall_1__ctor_m133266_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t17993_0_0_0},
};
extern TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m133266_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t17992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17992_InvokableCall_1__ctor_m133266_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17992_InvokableCall_1_Invoke_m133267_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m133267_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t17992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17992_InvokableCall_1_Invoke_m133267_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17992_InvokableCall_1_Find_m133268_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionLogItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m133268_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t17992_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17992_InvokableCall_1_Find_m133268_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t17992_MethodInfos[] =
{
	&InvokableCall_1__ctor_m133265_MethodInfo,
	&InvokableCall_1__ctor_m133266_MethodInfo,
	&InvokableCall_1_Invoke_m133267_MethodInfo,
	&InvokableCall_1_Find_m133268_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133267_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133268_MethodInfo;
static MethodInfo* InvokableCall_1_t17992_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m133267_MethodInfo,
	&InvokableCall_1_Find_m133268_MethodInfo,
};
extern Il2CppType UnityAction_1_t17993_0_0_0;
extern TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogItem_t1559_m201119_MethodInfo;
extern TypeInfo MissionLogItem_t1559_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133270_MethodInfo;
static void* InvokableCall_1_t17992_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t17993_0_0_0,
	&UnityAction_1_t17993_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogItem_t1559_m201119_MethodInfo,
	&MissionLogItem_t1559_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133270_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t17992_0_0_0;
extern Il2CppType InvokableCall_1_t17992_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t17992;
extern TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t17992_GenericClass;
TypeInfo InvokableCall_1_t17992_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t17992_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t17992_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t17992_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t17992_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t17992_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t17992_0_0_0/* byval_arg */
	, &InvokableCall_1_t17992_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t17992_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t17992_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t17992)/* instance_size */
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
extern TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<MissionLogItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<MissionLogItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionLogItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<MissionLogItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<MissionLogItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t17993_UnityAction_1__ctor_m133269_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionLogItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m133269_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t17993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t17993_UnityAction_1__ctor_m133269_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogItem_t1559_0_0_0;
static ParameterInfo UnityAction_1_t17993_UnityAction_1_Invoke_m133270_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogItem_t1559_0_0_0},
};
extern TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionLogItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m133270_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t17993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17993_UnityAction_1_Invoke_m133270_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogItem_t1559_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t17993_UnityAction_1_BeginInvoke_m133271_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogItem_t1559_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionLogItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m133271_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t17993_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t17993_UnityAction_1_BeginInvoke_m133271_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t17993_UnityAction_1_EndInvoke_m133272_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionLogItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m133272_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t17993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17993_UnityAction_1_EndInvoke_m133272_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t17993_MethodInfos[] =
{
	&UnityAction_1__ctor_m133269_MethodInfo,
	&UnityAction_1_Invoke_m133270_MethodInfo,
	&UnityAction_1_BeginInvoke_m133271_MethodInfo,
	&UnityAction_1_EndInvoke_m133272_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m133270_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m133271_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m133272_MethodInfo;
static MethodInfo* UnityAction_1_t17993_VTable[] =
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
	&UnityAction_1_Invoke_m133270_MethodInfo,
	&UnityAction_1_BeginInvoke_m133271_MethodInfo,
	&UnityAction_1_EndInvoke_m133272_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t17993_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t17993_0_0_0;
extern Il2CppType UnityAction_1_t17993_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t17993;
extern TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t17993_GenericClass;
TypeInfo UnityAction_1_t17993_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t17993_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t17993_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t17993_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t17993_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t17993_0_0_0/* byval_arg */
	, &UnityAction_1_t17993_1_0_0/* this_arg */
	, UnityAction_1_t17993_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t17993_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t17993)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27682_il2cpp_TypeInfo;

// UITexture
#include "AssemblyU2DCSharp_UITexture.h"


// T System.Collections.Generic.IEnumerator`1<UITexture>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UITexture>
extern MethodInfo IEnumerator_1_get_Current_m246782_MethodInfo;
static PropertyInfo IEnumerator_1_t27682____Current_PropertyInfo = 
{
	&IEnumerator_1_t27682_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246782_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27682_PropertyInfos[] =
{
	&IEnumerator_1_t27682____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27682_il2cpp_TypeInfo;
extern Il2CppType UITexture_t1378_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<UITexture>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246782_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27682_il2cpp_TypeInfo/* declaring_type */
	, &UITexture_t1378_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27682_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246782_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27682_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27682_0_0_0;
extern Il2CppType IEnumerator_1_t27682_1_0_0;
struct IEnumerator_1_t27682;
extern TypeInfo IEnumerator_1_t27682_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27682_GenericClass;
TypeInfo IEnumerator_1_t27682_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27682_MethodInfos/* methods */
	, IEnumerator_1_t27682_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27682_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27682_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27682_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27682_0_0_0/* byval_arg */
	, &IEnumerator_1_t27682_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27682_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UITexture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1316.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UITexture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1316MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo;
extern TypeInfo UITexture_t1378_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133278_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUITexture_t1378_m201121_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UITexture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UITexture>(System.Int32)
#define Array_InternalArray__get_Item_TisUITexture_t1378_m201121(__this, p0, method) (UITexture_t1378 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisUITexture_t1378_m201121_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<UITexture>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<UITexture>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<UITexture>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UITexture>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UITexture>::MoveNext()
// T System.Array/InternalEnumerator`1<UITexture>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UITexture>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17994____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17994, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17994____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17994, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17994_FieldInfos[] =
{
	&InternalEnumerator_1_t17994____array_FieldInfo,
	&InternalEnumerator_1_t17994____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133275_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17994____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17994_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133275_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133278_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17994____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17994_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133278_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17994_PropertyInfos[] =
{
	&InternalEnumerator_1_t17994____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17994____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17994_InternalEnumerator_1__ctor_m133273_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UITexture>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133273_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17994_InternalEnumerator_1__ctor_m133273_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UITexture>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133274_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<UITexture>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133275_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<UITexture>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133276_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<UITexture>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133277_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo;
extern Il2CppType UITexture_t1378_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<UITexture>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133278_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* declaring_type */
	, &UITexture_t1378_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t17994_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133273_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133274_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133275_MethodInfo,
	&InternalEnumerator_1_Dispose_m133276_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133277_MethodInfo,
	&InternalEnumerator_1_get_Current_m133278_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133275_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133277_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133274_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133276_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133278_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17994_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133275_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133277_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133274_MethodInfo,
	&InternalEnumerator_1_Dispose_m133276_MethodInfo,
	&InternalEnumerator_1_get_Current_m133278_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27682_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17994_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27682_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27682_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17994_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27682_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133278_MethodInfo;
extern TypeInfo UITexture_t1378_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUITexture_t1378_m201121_MethodInfo;
static void* InternalEnumerator_1_t17994_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133278_MethodInfo,
	&UITexture_t1378_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisUITexture_t1378_m201121_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17994_0_0_0;
extern Il2CppType InternalEnumerator_1_t17994_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17994_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17994_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17994_MethodInfos/* methods */
	, InternalEnumerator_1_t17994_PropertyInfos/* properties */
	, InternalEnumerator_1_t17994_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17994_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17994_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17994_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17994_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17994_1_0_0/* this_arg */
	, InternalEnumerator_1_t17994_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17994_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t17994_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17994)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UITexture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UITexture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UITexture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UITexture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UITexture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UITexture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UITexture>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UITexture>
extern MethodInfo ICollection_1_get_Count_m246783_MethodInfo;
static PropertyInfo ICollection_1_t32260____Count_PropertyInfo = 
{
	&ICollection_1_t32260_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246783_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246784_MethodInfo;
static PropertyInfo ICollection_1_t32260____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32260_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246784_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32260_PropertyInfos[] =
{
	&ICollection_1_t32260____Count_PropertyInfo,
	&ICollection_1_t32260____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<UITexture>::get_Count()
MethodInfo ICollection_1_get_Count_m246783_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32260_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UITexture>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246784_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32260_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UITexture_t1378_0_0_0;
static ParameterInfo ICollection_1_t32260_ICollection_1_Add_m246785_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UITexture_t1378_0_0_0},
};
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UITexture>::Add(T)
MethodInfo ICollection_1_Add_m246785_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32260_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32260_ICollection_1_Add_m246785_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UITexture>::Clear()
MethodInfo ICollection_1_Clear_m246786_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32260_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UITexture_t1378_0_0_0;
static ParameterInfo ICollection_1_t32260_ICollection_1_Contains_m246787_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UITexture_t1378_0_0_0},
};
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UITexture>::Contains(T)
MethodInfo ICollection_1_Contains_m246787_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32260_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32260_ICollection_1_Contains_m246787_ParameterInfos/* parameters */
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
extern Il2CppType UITextureU5BU5D_t1558_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32260_ICollection_1_CopyTo_m246788_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UITextureU5BU5D_t1558_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<UITexture>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246788_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32260_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32260_ICollection_1_CopyTo_m246788_ParameterInfos/* parameters */
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
extern Il2CppType UITexture_t1378_0_0_0;
static ParameterInfo ICollection_1_t32260_ICollection_1_Remove_m246789_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UITexture_t1378_0_0_0},
};
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<UITexture>::Remove(T)
MethodInfo ICollection_1_Remove_m246789_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32260_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32260_ICollection_1_Remove_m246789_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32260_MethodInfos[] =
{
	&ICollection_1_get_Count_m246783_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246784_MethodInfo,
	&ICollection_1_Add_m246785_MethodInfo,
	&ICollection_1_Clear_m246786_MethodInfo,
	&ICollection_1_Contains_m246787_MethodInfo,
	&ICollection_1_CopyTo_m246788_MethodInfo,
	&ICollection_1_Remove_m246789_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32262_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32260_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32262_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32260_0_0_0;
extern Il2CppType ICollection_1_t32260_1_0_0;
struct ICollection_1_t32260;
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32260_GenericClass;
TypeInfo ICollection_1_t32260_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32260_MethodInfos/* methods */
	, ICollection_1_t32260_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32260_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32260_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32260_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32260_0_0_0/* byval_arg */
	, &ICollection_1_t32260_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32260_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32262_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UITexture>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UITexture>
extern TypeInfo IEnumerable_1_t32262_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27682_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UITexture>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246790_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32262_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27682_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32262_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246790_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32262_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32262_0_0_0;
extern Il2CppType IEnumerable_1_t32262_1_0_0;
struct IEnumerable_1_t32262;
extern TypeInfo IEnumerable_1_t32262_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32262_GenericClass;
TypeInfo IEnumerable_1_t32262_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32262_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32262_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32262_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32262_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32262_0_0_0/* byval_arg */
	, &IEnumerable_1_t32262_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32262_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32261_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UITexture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UITexture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UITexture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UITexture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UITexture>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UITexture>
extern MethodInfo IList_1_get_Item_m246791_MethodInfo;
extern MethodInfo IList_1_set_Item_m246792_MethodInfo;
static PropertyInfo IList_1_t32261____Item_PropertyInfo = 
{
	&IList_1_t32261_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246791_MethodInfo/* get */
	, &IList_1_set_Item_m246792_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32261_PropertyInfos[] =
{
	&IList_1_t32261____Item_PropertyInfo,
	NULL
};
extern Il2CppType UITexture_t1378_0_0_0;
static ParameterInfo IList_1_t32261_IList_1_IndexOf_m246793_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UITexture_t1378_0_0_0},
};
extern TypeInfo IList_1_t32261_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<UITexture>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246793_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32261_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32261_IList_1_IndexOf_m246793_ParameterInfos/* parameters */
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
extern Il2CppType UITexture_t1378_0_0_0;
static ParameterInfo IList_1_t32261_IList_1_Insert_m246794_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UITexture_t1378_0_0_0},
};
extern TypeInfo IList_1_t32261_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UITexture>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246794_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32261_IList_1_Insert_m246794_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32261_IList_1_RemoveAt_m246795_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32261_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UITexture>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246795_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32261_IList_1_RemoveAt_m246795_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32261_IList_1_get_Item_m246791_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32261_il2cpp_TypeInfo;
extern Il2CppType UITexture_t1378_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<UITexture>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246791_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32261_il2cpp_TypeInfo/* declaring_type */
	, &UITexture_t1378_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32261_IList_1_get_Item_m246791_ParameterInfos/* parameters */
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
extern Il2CppType UITexture_t1378_0_0_0;
static ParameterInfo IList_1_t32261_IList_1_set_Item_m246792_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UITexture_t1378_0_0_0},
};
extern TypeInfo IList_1_t32261_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<UITexture>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246792_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32261_IList_1_set_Item_m246792_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32261_MethodInfos[] =
{
	&IList_1_IndexOf_m246793_MethodInfo,
	&IList_1_Insert_m246794_MethodInfo,
	&IList_1_RemoveAt_m246795_MethodInfo,
	&IList_1_get_Item_m246791_MethodInfo,
	&IList_1_set_Item_m246792_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32260_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32262_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32261_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32260_il2cpp_TypeInfo,
	&IEnumerable_1_t32262_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32261_0_0_0;
extern Il2CppType IList_1_t32261_1_0_0;
struct IList_1_t32261;
extern TypeInfo IList_1_t32261_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32261_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32261_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32261_MethodInfos/* methods */
	, IList_1_t32261_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32261_il2cpp_TypeInfo/* element_class */
	, IList_1_t32261_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32261_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32261_0_0_0/* byval_arg */
	, &IList_1_t32261_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32261_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27683_il2cpp_TypeInfo;

// MissionLogLogic
#include "AssemblyU2DCSharp_MissionLogLogic.h"


// T System.Collections.Generic.IEnumerator`1<MissionLogLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MissionLogLogic>
extern MethodInfo IEnumerator_1_get_Current_m246796_MethodInfo;
static PropertyInfo IEnumerator_1_t27683____Current_PropertyInfo = 
{
	&IEnumerator_1_t27683_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246796_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27683_PropertyInfos[] =
{
	&IEnumerator_1_t27683____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27683_il2cpp_TypeInfo;
extern Il2CppType MissionLogLogic_t1563_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MissionLogLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246796_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27683_il2cpp_TypeInfo/* declaring_type */
	, &MissionLogLogic_t1563_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27683_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246796_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27683_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27683_0_0_0;
extern Il2CppType IEnumerator_1_t27683_1_0_0;
struct IEnumerator_1_t27683;
extern TypeInfo IEnumerator_1_t27683_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27683_GenericClass;
TypeInfo IEnumerator_1_t27683_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27683_MethodInfos/* methods */
	, IEnumerator_1_t27683_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27683_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27683_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27683_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27683_0_0_0/* byval_arg */
	, &IEnumerator_1_t27683_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27683_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MissionLogLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1317.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MissionLogLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1317MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo;
extern TypeInfo MissionLogLogic_t1563_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133284_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionLogLogic_t1563_m201132_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MissionLogLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MissionLogLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisMissionLogLogic_t1563_m201132(__this, p0, method) (MissionLogLogic_t1563 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMissionLogLogic_t1563_m201132_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MissionLogLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<MissionLogLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<MissionLogLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<MissionLogLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<MissionLogLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<MissionLogLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<MissionLogLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t17995____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17995, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t17995____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t17995, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t17995_FieldInfos[] =
{
	&InternalEnumerator_1_t17995____array_FieldInfo,
	&InternalEnumerator_1_t17995____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133281_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17995____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17995_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133281_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133284_MethodInfo;
static PropertyInfo InternalEnumerator_1_t17995____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t17995_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133284_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t17995_PropertyInfos[] =
{
	&InternalEnumerator_1_t17995____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t17995____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t17995_InternalEnumerator_1__ctor_m133279_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionLogLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133279_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t17995_InternalEnumerator_1__ctor_m133279_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionLogLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133280_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MissionLogLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133281_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionLogLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133282_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MissionLogLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133283_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo;
extern Il2CppType MissionLogLogic_t1563_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MissionLogLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133284_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* declaring_type */
	, &MissionLogLogic_t1563_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t17995_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133279_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133280_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133281_MethodInfo,
	&InternalEnumerator_1_Dispose_m133282_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133283_MethodInfo,
	&InternalEnumerator_1_get_Current_m133284_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133281_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133283_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133280_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133282_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133284_MethodInfo;
static MethodInfo* InternalEnumerator_1_t17995_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133281_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133283_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133280_MethodInfo,
	&InternalEnumerator_1_Dispose_m133282_MethodInfo,
	&InternalEnumerator_1_get_Current_m133284_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27683_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t17995_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27683_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27683_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t17995_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27683_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133284_MethodInfo;
extern TypeInfo MissionLogLogic_t1563_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionLogLogic_t1563_m201132_MethodInfo;
static void* InternalEnumerator_1_t17995_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133284_MethodInfo,
	&MissionLogLogic_t1563_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMissionLogLogic_t1563_m201132_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t17995_0_0_0;
extern Il2CppType InternalEnumerator_1_t17995_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t17995_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t17995_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t17995_MethodInfos/* methods */
	, InternalEnumerator_1_t17995_PropertyInfos/* properties */
	, InternalEnumerator_1_t17995_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t17995_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t17995_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t17995_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t17995_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t17995_1_0_0/* this_arg */
	, InternalEnumerator_1_t17995_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t17995_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t17995_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t17995)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MissionLogLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MissionLogLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MissionLogLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MissionLogLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MissionLogLogic>
extern MethodInfo ICollection_1_get_Count_m246797_MethodInfo;
static PropertyInfo ICollection_1_t32263____Count_PropertyInfo = 
{
	&ICollection_1_t32263_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246797_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246798_MethodInfo;
static PropertyInfo ICollection_1_t32263____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32263_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246798_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32263_PropertyInfos[] =
{
	&ICollection_1_t32263____Count_PropertyInfo,
	&ICollection_1_t32263____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MissionLogLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m246797_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32263_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246798_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32263_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionLogLogic_t1563_0_0_0;
static ParameterInfo ICollection_1_t32263_ICollection_1_Add_m246799_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogLogic_t1563_0_0_0},
};
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionLogLogic>::Add(T)
MethodInfo ICollection_1_Add_m246799_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32263_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32263_ICollection_1_Add_m246799_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionLogLogic>::Clear()
MethodInfo ICollection_1_Clear_m246800_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32263_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionLogLogic_t1563_0_0_0;
static ParameterInfo ICollection_1_t32263_ICollection_1_Contains_m246801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogLogic_t1563_0_0_0},
};
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m246801_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32263_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32263_ICollection_1_Contains_m246801_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogLogicU5BU5D_t25739_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32263_ICollection_1_CopyTo_m246802_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogLogicU5BU5D_t25739_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionLogLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246802_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32263_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32263_ICollection_1_CopyTo_m246802_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogLogic_t1563_0_0_0;
static ParameterInfo ICollection_1_t32263_ICollection_1_Remove_m246803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogLogic_t1563_0_0_0},
};
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionLogLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m246803_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32263_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32263_ICollection_1_Remove_m246803_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32263_MethodInfos[] =
{
	&ICollection_1_get_Count_m246797_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246798_MethodInfo,
	&ICollection_1_Add_m246799_MethodInfo,
	&ICollection_1_Clear_m246800_MethodInfo,
	&ICollection_1_Contains_m246801_MethodInfo,
	&ICollection_1_CopyTo_m246802_MethodInfo,
	&ICollection_1_Remove_m246803_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32265_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32263_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32265_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32263_0_0_0;
extern Il2CppType ICollection_1_t32263_1_0_0;
struct ICollection_1_t32263;
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32263_GenericClass;
TypeInfo ICollection_1_t32263_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32263_MethodInfos/* methods */
	, ICollection_1_t32263_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32263_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32263_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32263_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32263_0_0_0/* byval_arg */
	, &ICollection_1_t32263_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32263_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32265_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionLogLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MissionLogLogic>
extern TypeInfo IEnumerable_1_t32265_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27683_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionLogLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246804_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32265_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27683_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32265_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246804_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32265_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32265_0_0_0;
extern Il2CppType IEnumerable_1_t32265_1_0_0;
struct IEnumerable_1_t32265;
extern TypeInfo IEnumerable_1_t32265_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32265_GenericClass;
TypeInfo IEnumerable_1_t32265_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32265_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32265_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32265_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32265_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32265_0_0_0/* byval_arg */
	, &IEnumerable_1_t32265_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32265_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32264_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MissionLogLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MissionLogLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MissionLogLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MissionLogLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MissionLogLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MissionLogLogic>
extern MethodInfo IList_1_get_Item_m246805_MethodInfo;
extern MethodInfo IList_1_set_Item_m246806_MethodInfo;
static PropertyInfo IList_1_t32264____Item_PropertyInfo = 
{
	&IList_1_t32264_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246805_MethodInfo/* get */
	, &IList_1_set_Item_m246806_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32264_PropertyInfos[] =
{
	&IList_1_t32264____Item_PropertyInfo,
	NULL
};
extern Il2CppType MissionLogLogic_t1563_0_0_0;
static ParameterInfo IList_1_t32264_IList_1_IndexOf_m246807_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogLogic_t1563_0_0_0},
};
extern TypeInfo IList_1_t32264_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MissionLogLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246807_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32264_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32264_IList_1_IndexOf_m246807_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogLogic_t1563_0_0_0;
static ParameterInfo IList_1_t32264_IList_1_Insert_m246808_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MissionLogLogic_t1563_0_0_0},
};
extern TypeInfo IList_1_t32264_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionLogLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246808_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32264_IList_1_Insert_m246808_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32264_IList_1_RemoveAt_m246809_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32264_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionLogLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246809_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32264_IList_1_RemoveAt_m246809_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32264_IList_1_get_Item_m246805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32264_il2cpp_TypeInfo;
extern Il2CppType MissionLogLogic_t1563_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MissionLogLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246805_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32264_il2cpp_TypeInfo/* declaring_type */
	, &MissionLogLogic_t1563_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32264_IList_1_get_Item_m246805_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogLogic_t1563_0_0_0;
static ParameterInfo IList_1_t32264_IList_1_set_Item_m246806_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MissionLogLogic_t1563_0_0_0},
};
extern TypeInfo IList_1_t32264_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionLogLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246806_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32264_IList_1_set_Item_m246806_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32264_MethodInfos[] =
{
	&IList_1_IndexOf_m246807_MethodInfo,
	&IList_1_Insert_m246808_MethodInfo,
	&IList_1_RemoveAt_m246809_MethodInfo,
	&IList_1_get_Item_m246805_MethodInfo,
	&IList_1_set_Item_m246806_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32263_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32265_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32264_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32263_il2cpp_TypeInfo,
	&IEnumerable_1_t32265_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32264_0_0_0;
extern Il2CppType IList_1_t32264_1_0_0;
struct IList_1_t32264;
extern TypeInfo IList_1_t32264_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32264_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32264_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32264_MethodInfos/* methods */
	, IList_1_t32264_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32264_il2cpp_TypeInfo/* element_class */
	, IList_1_t32264_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32264_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32264_0_0_0/* byval_arg */
	, &IList_1_t32264_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32264_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<MissionLogLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_220.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t17996_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<MissionLogLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_220MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<MissionLogLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_216.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t17996_il2cpp_TypeInfo;
extern TypeInfo MissionLogLogic_t1563_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<MissionLogLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_216MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m133287_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133289_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionLogLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionLogLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<MissionLogLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t17996____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t17996_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t17996, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t17996_FieldInfos[] =
{
	&CachedInvokableCall_1_t17996____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType MissionLogLogic_t1563_0_0_0;
static ParameterInfo CachedInvokableCall_1_t17996_CachedInvokableCall_1__ctor_m133285_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MissionLogLogic_t1563_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17996_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionLogLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m133285_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t17996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17996_CachedInvokableCall_1__ctor_m133285_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t17996_CachedInvokableCall_1_Invoke_m133286_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17996_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionLogLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m133286_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t17996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17996_CachedInvokableCall_1_Invoke_m133286_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t17996_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m133285_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133286_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m133286_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133290_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t17996_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133286_MethodInfo,
	&InvokableCall_1_Find_m133290_MethodInfo,
};
extern Il2CppType UnityAction_1_t17998_0_0_0;
extern TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogLogic_t1563_m201142_MethodInfo;
extern TypeInfo MissionLogLogic_t1563_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133292_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m133287_MethodInfo;
extern TypeInfo MissionLogLogic_t1563_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m133289_MethodInfo;
static void* CachedInvokableCall_1_t17996_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t17998_0_0_0,
	&UnityAction_1_t17998_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogLogic_t1563_m201142_MethodInfo,
	&MissionLogLogic_t1563_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133292_MethodInfo,
	&InvokableCall_1__ctor_m133287_MethodInfo,
	&MissionLogLogic_t1563_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m133289_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t17996_0_0_0;
extern Il2CppType CachedInvokableCall_1_t17996_1_0_0;
extern TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t17996;
extern TypeInfo CachedInvokableCall_1_t17996_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t17996_GenericClass;
TypeInfo CachedInvokableCall_1_t17996_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t17996_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t17996_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t17997_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t17996_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t17996_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t17996_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t17996_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t17996_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t17996_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t17996_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t17996)/* instance_size */
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
extern TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<MissionLogLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_223.h"
extern TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo MissionLogLogic_t1563_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<MissionLogLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_223MethodDeclarations.h"
extern Il2CppType UnityAction_1_t17998_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogLogic_t1563_m201142_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m133292_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionLogLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionLogLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogLogic_t1563_m201142(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogLogic_t1563_m201142_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<MissionLogLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionLogLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<MissionLogLogic>
extern Il2CppType UnityAction_1_t17998_0_0_1;
FieldInfo InvokableCall_1_t17997____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t17998_0_0_1/* type */
	, &InvokableCall_1_t17997_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t17997, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t17997_FieldInfos[] =
{
	&InvokableCall_1_t17997____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t17997_InvokableCall_1__ctor_m133287_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m133287_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t17997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17997_InvokableCall_1__ctor_m133287_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t17998_0_0_0;
static ParameterInfo InvokableCall_1_t17997_InvokableCall_1__ctor_m133288_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t17998_0_0_0},
};
extern TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m133288_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t17997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17997_InvokableCall_1__ctor_m133288_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17997_InvokableCall_1_Invoke_m133289_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionLogLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m133289_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t17997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t17997_InvokableCall_1_Invoke_m133289_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t17997_InvokableCall_1_Find_m133290_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionLogLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m133290_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t17997_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t17997_InvokableCall_1_Find_m133290_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t17997_MethodInfos[] =
{
	&InvokableCall_1__ctor_m133287_MethodInfo,
	&InvokableCall_1__ctor_m133288_MethodInfo,
	&InvokableCall_1_Invoke_m133289_MethodInfo,
	&InvokableCall_1_Find_m133290_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133289_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133290_MethodInfo;
static MethodInfo* InvokableCall_1_t17997_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m133289_MethodInfo,
	&InvokableCall_1_Find_m133290_MethodInfo,
};
extern Il2CppType UnityAction_1_t17998_0_0_0;
extern TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogLogic_t1563_m201142_MethodInfo;
extern TypeInfo MissionLogLogic_t1563_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133292_MethodInfo;
static void* InvokableCall_1_t17997_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t17998_0_0_0,
	&UnityAction_1_t17998_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionLogLogic_t1563_m201142_MethodInfo,
	&MissionLogLogic_t1563_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133292_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t17997_0_0_0;
extern Il2CppType InvokableCall_1_t17997_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t17997;
extern TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t17997_GenericClass;
TypeInfo InvokableCall_1_t17997_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t17997_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t17997_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t17997_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t17997_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t17997_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t17997_0_0_0/* byval_arg */
	, &InvokableCall_1_t17997_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t17997_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t17997_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t17997)/* instance_size */
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
extern TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<MissionLogLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<MissionLogLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionLogLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<MissionLogLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<MissionLogLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t17998_UnityAction_1__ctor_m133291_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionLogLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m133291_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t17998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t17998_UnityAction_1__ctor_m133291_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogLogic_t1563_0_0_0;
static ParameterInfo UnityAction_1_t17998_UnityAction_1_Invoke_m133292_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogLogic_t1563_0_0_0},
};
extern TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionLogLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m133292_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t17998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17998_UnityAction_1_Invoke_m133292_ParameterInfos/* parameters */
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
extern Il2CppType MissionLogLogic_t1563_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t17998_UnityAction_1_BeginInvoke_m133293_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionLogLogic_t1563_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionLogLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m133293_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t17998_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t17998_UnityAction_1_BeginInvoke_m133293_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t17998_UnityAction_1_EndInvoke_m133294_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionLogLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m133294_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t17998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t17998_UnityAction_1_EndInvoke_m133294_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t17998_MethodInfos[] =
{
	&UnityAction_1__ctor_m133291_MethodInfo,
	&UnityAction_1_Invoke_m133292_MethodInfo,
	&UnityAction_1_BeginInvoke_m133293_MethodInfo,
	&UnityAction_1_EndInvoke_m133294_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m133292_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m133293_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m133294_MethodInfo;
static MethodInfo* UnityAction_1_t17998_VTable[] =
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
	&UnityAction_1_Invoke_m133292_MethodInfo,
	&UnityAction_1_BeginInvoke_m133293_MethodInfo,
	&UnityAction_1_EndInvoke_m133294_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t17998_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t17998_0_0_0;
extern Il2CppType UnityAction_1_t17998_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t17998;
extern TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t17998_GenericClass;
TypeInfo UnityAction_1_t17998_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t17998_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t17998_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t17998_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t17998_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t17998_0_0_0/* byval_arg */
	, &UnityAction_1_t17998_1_0_0/* this_arg */
	, UnityAction_1_t17998_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t17998_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t17998)/* instance_size */
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
// UnityEngine.Events.CachedInvokableCall`1<MissionRewardItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_221.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t17999_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<MissionRewardItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_221MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<MissionRewardItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_217.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t17999_il2cpp_TypeInfo;
extern TypeInfo MissionRewardItem_t1556_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<MissionRewardItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_217MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m133297_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133299_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionRewardItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionRewardItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<MissionRewardItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t17999____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t17999_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t17999, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t17999_FieldInfos[] =
{
	&CachedInvokableCall_1_t17999____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType MissionRewardItem_t1556_0_0_0;
static ParameterInfo CachedInvokableCall_1_t17999_CachedInvokableCall_1__ctor_m133295_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MissionRewardItem_t1556_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17999_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionRewardItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m133295_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t17999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17999_CachedInvokableCall_1__ctor_m133295_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t17999_CachedInvokableCall_1_Invoke_m133296_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t17999_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionRewardItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m133296_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t17999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t17999_CachedInvokableCall_1_Invoke_m133296_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t17999_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m133295_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133296_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m133296_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133300_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t17999_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133296_MethodInfo,
	&InvokableCall_1_Find_m133300_MethodInfo,
};
extern Il2CppType UnityAction_1_t18001_0_0_0;
extern TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionRewardItem_t1556_m201143_MethodInfo;
extern TypeInfo MissionRewardItem_t1556_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133302_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m133297_MethodInfo;
extern TypeInfo MissionRewardItem_t1556_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m133299_MethodInfo;
static void* CachedInvokableCall_1_t17999_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18001_0_0_0,
	&UnityAction_1_t18001_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionRewardItem_t1556_m201143_MethodInfo,
	&MissionRewardItem_t1556_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133302_MethodInfo,
	&InvokableCall_1__ctor_m133297_MethodInfo,
	&MissionRewardItem_t1556_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m133299_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t17999_0_0_0;
extern Il2CppType CachedInvokableCall_1_t17999_1_0_0;
extern TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t17999;
extern TypeInfo CachedInvokableCall_1_t17999_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t17999_GenericClass;
TypeInfo CachedInvokableCall_1_t17999_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t17999_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t17999_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18000_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t17999_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t17999_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t17999_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t17999_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t17999_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t17999_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t17999_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t17999)/* instance_size */
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
extern TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<MissionRewardItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_224.h"
extern TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo MissionRewardItem_t1556_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<MissionRewardItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_224MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18001_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionRewardItem_t1556_m201143_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m133302_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionRewardItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionRewardItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMissionRewardItem_t1556_m201143(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionRewardItem_t1556_m201143_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<MissionRewardItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<MissionRewardItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<MissionRewardItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionRewardItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<MissionRewardItem>
extern Il2CppType UnityAction_1_t18001_0_0_1;
FieldInfo InvokableCall_1_t18000____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18001_0_0_1/* type */
	, &InvokableCall_1_t18000_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18000, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18000_FieldInfos[] =
{
	&InvokableCall_1_t18000____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18000_InvokableCall_1__ctor_m133297_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionRewardItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m133297_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18000_InvokableCall_1__ctor_m133297_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t18001_0_0_0;
static ParameterInfo InvokableCall_1_t18000_InvokableCall_1__ctor_m133298_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18001_0_0_0},
};
extern TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionRewardItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m133298_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18000_InvokableCall_1__ctor_m133298_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t18000_InvokableCall_1_Invoke_m133299_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionRewardItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m133299_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18000_InvokableCall_1_Invoke_m133299_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t18000_InvokableCall_1_Find_m133300_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionRewardItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m133300_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18000_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18000_InvokableCall_1_Find_m133300_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t18000_MethodInfos[] =
{
	&InvokableCall_1__ctor_m133297_MethodInfo,
	&InvokableCall_1__ctor_m133298_MethodInfo,
	&InvokableCall_1_Invoke_m133299_MethodInfo,
	&InvokableCall_1_Find_m133300_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133299_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133300_MethodInfo;
static MethodInfo* InvokableCall_1_t18000_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m133299_MethodInfo,
	&InvokableCall_1_Find_m133300_MethodInfo,
};
extern Il2CppType UnityAction_1_t18001_0_0_0;
extern TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionRewardItem_t1556_m201143_MethodInfo;
extern TypeInfo MissionRewardItem_t1556_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133302_MethodInfo;
static void* InvokableCall_1_t18000_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18001_0_0_0,
	&UnityAction_1_t18001_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionRewardItem_t1556_m201143_MethodInfo,
	&MissionRewardItem_t1556_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133302_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18000_0_0_0;
extern Il2CppType InvokableCall_1_t18000_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18000;
extern TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18000_GenericClass;
TypeInfo InvokableCall_1_t18000_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18000_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18000_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18000_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18000_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18000_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18000_0_0_0/* byval_arg */
	, &InvokableCall_1_t18000_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18000_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18000_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18000)/* instance_size */
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
extern TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<MissionRewardItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<MissionRewardItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionRewardItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<MissionRewardItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<MissionRewardItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18001_UnityAction_1__ctor_m133301_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionRewardItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m133301_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18001_UnityAction_1__ctor_m133301_ParameterInfos/* parameters */
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
extern Il2CppType MissionRewardItem_t1556_0_0_0;
static ParameterInfo UnityAction_1_t18001_UnityAction_1_Invoke_m133302_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionRewardItem_t1556_0_0_0},
};
extern TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionRewardItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m133302_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18001_UnityAction_1_Invoke_m133302_ParameterInfos/* parameters */
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
extern Il2CppType MissionRewardItem_t1556_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18001_UnityAction_1_BeginInvoke_m133303_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionRewardItem_t1556_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionRewardItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m133303_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18001_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18001_UnityAction_1_BeginInvoke_m133303_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t18001_UnityAction_1_EndInvoke_m133304_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionRewardItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m133304_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18001_UnityAction_1_EndInvoke_m133304_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t18001_MethodInfos[] =
{
	&UnityAction_1__ctor_m133301_MethodInfo,
	&UnityAction_1_Invoke_m133302_MethodInfo,
	&UnityAction_1_BeginInvoke_m133303_MethodInfo,
	&UnityAction_1_EndInvoke_m133304_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m133302_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m133303_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m133304_MethodInfo;
static MethodInfo* UnityAction_1_t18001_VTable[] =
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
	&UnityAction_1_Invoke_m133302_MethodInfo,
	&UnityAction_1_BeginInvoke_m133303_MethodInfo,
	&UnityAction_1_EndInvoke_m133304_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18001_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18001_0_0_0;
extern Il2CppType UnityAction_1_t18001_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18001;
extern TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18001_GenericClass;
TypeInfo UnityAction_1_t18001_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18001_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18001_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18001_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18001_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18001_0_0_0/* byval_arg */
	, &UnityAction_1_t18001_1_0_0/* this_arg */
	, UnityAction_1_t18001_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18001_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18001)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27684_il2cpp_TypeInfo;

// MissionView_Daily
#include "AssemblyU2DCSharp_MissionView_Daily.h"


// T System.Collections.Generic.IEnumerator`1<MissionView_Daily>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MissionView_Daily>
extern MethodInfo IEnumerator_1_get_Current_m246810_MethodInfo;
static PropertyInfo IEnumerator_1_t27684____Current_PropertyInfo = 
{
	&IEnumerator_1_t27684_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246810_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27684_PropertyInfos[] =
{
	&IEnumerator_1_t27684____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27684_il2cpp_TypeInfo;
extern Il2CppType MissionView_Daily_t1561_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MissionView_Daily>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246810_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27684_il2cpp_TypeInfo/* declaring_type */
	, &MissionView_Daily_t1561_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27684_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246810_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27684_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27684_0_0_0;
extern Il2CppType IEnumerator_1_t27684_1_0_0;
struct IEnumerator_1_t27684;
extern TypeInfo IEnumerator_1_t27684_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27684_GenericClass;
TypeInfo IEnumerator_1_t27684_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27684_MethodInfos/* methods */
	, IEnumerator_1_t27684_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27684_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27684_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27684_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27684_0_0_0/* byval_arg */
	, &IEnumerator_1_t27684_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27684_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MissionView_Daily>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1318.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MissionView_Daily>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1318MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo;
extern TypeInfo MissionView_Daily_t1561_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133310_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionView_Daily_t1561_m201145_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MissionView_Daily>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MissionView_Daily>(System.Int32)
#define Array_InternalArray__get_Item_TisMissionView_Daily_t1561_m201145(__this, p0, method) (MissionView_Daily_t1561 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMissionView_Daily_t1561_m201145_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MissionView_Daily>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<MissionView_Daily>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Daily>::MoveNext()
// T System.Array/InternalEnumerator`1<MissionView_Daily>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<MissionView_Daily>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18002____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18002, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18002____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18002, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18002_FieldInfos[] =
{
	&InternalEnumerator_1_t18002____array_FieldInfo,
	&InternalEnumerator_1_t18002____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133307_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18002____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18002_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133307_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133310_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18002____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18002_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133310_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18002_PropertyInfos[] =
{
	&InternalEnumerator_1_t18002____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18002____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18002_InternalEnumerator_1__ctor_m133305_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133305_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18002_InternalEnumerator_1__ctor_m133305_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133306_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MissionView_Daily>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133307_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133308_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Daily>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133309_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo;
extern Il2CppType MissionView_Daily_t1561_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MissionView_Daily>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133310_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* declaring_type */
	, &MissionView_Daily_t1561_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t18002_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133305_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133306_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133307_MethodInfo,
	&InternalEnumerator_1_Dispose_m133308_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133309_MethodInfo,
	&InternalEnumerator_1_get_Current_m133310_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133307_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133309_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133306_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133308_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133310_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18002_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133307_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133309_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133306_MethodInfo,
	&InternalEnumerator_1_Dispose_m133308_MethodInfo,
	&InternalEnumerator_1_get_Current_m133310_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27684_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18002_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27684_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27684_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18002_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27684_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133310_MethodInfo;
extern TypeInfo MissionView_Daily_t1561_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionView_Daily_t1561_m201145_MethodInfo;
static void* InternalEnumerator_1_t18002_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133310_MethodInfo,
	&MissionView_Daily_t1561_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMissionView_Daily_t1561_m201145_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18002_0_0_0;
extern Il2CppType InternalEnumerator_1_t18002_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18002_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18002_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18002_MethodInfos/* methods */
	, InternalEnumerator_1_t18002_PropertyInfos/* properties */
	, InternalEnumerator_1_t18002_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18002_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18002_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18002_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18002_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18002_1_0_0/* this_arg */
	, InternalEnumerator_1_t18002_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18002_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18002_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18002)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Daily>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MissionView_Daily>
extern MethodInfo ICollection_1_get_Count_m246811_MethodInfo;
static PropertyInfo ICollection_1_t32266____Count_PropertyInfo = 
{
	&ICollection_1_t32266_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246811_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246812_MethodInfo;
static PropertyInfo ICollection_1_t32266____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32266_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246812_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32266_PropertyInfos[] =
{
	&ICollection_1_t32266____Count_PropertyInfo,
	&ICollection_1_t32266____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Daily>::get_Count()
MethodInfo ICollection_1_get_Count_m246811_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32266_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246812_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32266_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionView_Daily_t1561_0_0_0;
static ParameterInfo ICollection_1_t32266_ICollection_1_Add_m246813_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Daily_t1561_0_0_0},
};
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily>::Add(T)
MethodInfo ICollection_1_Add_m246813_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32266_ICollection_1_Add_m246813_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily>::Clear()
MethodInfo ICollection_1_Clear_m246814_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32266_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionView_Daily_t1561_0_0_0;
static ParameterInfo ICollection_1_t32266_ICollection_1_Contains_m246815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Daily_t1561_0_0_0},
};
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily>::Contains(T)
MethodInfo ICollection_1_Contains_m246815_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32266_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32266_ICollection_1_Contains_m246815_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_DailyU5BU5D_t25740_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32266_ICollection_1_CopyTo_m246816_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_DailyU5BU5D_t25740_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246816_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32266_ICollection_1_CopyTo_m246816_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Daily_t1561_0_0_0;
static ParameterInfo ICollection_1_t32266_ICollection_1_Remove_m246817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Daily_t1561_0_0_0},
};
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily>::Remove(T)
MethodInfo ICollection_1_Remove_m246817_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32266_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32266_ICollection_1_Remove_m246817_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32266_MethodInfos[] =
{
	&ICollection_1_get_Count_m246811_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246812_MethodInfo,
	&ICollection_1_Add_m246813_MethodInfo,
	&ICollection_1_Clear_m246814_MethodInfo,
	&ICollection_1_Contains_m246815_MethodInfo,
	&ICollection_1_CopyTo_m246816_MethodInfo,
	&ICollection_1_Remove_m246817_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32268_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32266_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32268_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32266_0_0_0;
extern Il2CppType ICollection_1_t32266_1_0_0;
struct ICollection_1_t32266;
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32266_GenericClass;
TypeInfo ICollection_1_t32266_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32266_MethodInfos/* methods */
	, ICollection_1_t32266_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32266_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32266_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32266_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32266_0_0_0/* byval_arg */
	, &ICollection_1_t32266_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32266_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32268_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Daily>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MissionView_Daily>
extern TypeInfo IEnumerable_1_t32268_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27684_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Daily>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246818_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32268_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27684_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32268_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246818_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32268_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32268_0_0_0;
extern Il2CppType IEnumerable_1_t32268_1_0_0;
struct IEnumerable_1_t32268;
extern TypeInfo IEnumerable_1_t32268_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32268_GenericClass;
TypeInfo IEnumerable_1_t32268_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32268_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32268_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32268_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32268_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32268_0_0_0/* byval_arg */
	, &IEnumerable_1_t32268_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32268_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32267_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MissionView_Daily>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MissionView_Daily>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MissionView_Daily>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MissionView_Daily>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MissionView_Daily>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MissionView_Daily>
extern MethodInfo IList_1_get_Item_m246819_MethodInfo;
extern MethodInfo IList_1_set_Item_m246820_MethodInfo;
static PropertyInfo IList_1_t32267____Item_PropertyInfo = 
{
	&IList_1_t32267_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246819_MethodInfo/* get */
	, &IList_1_set_Item_m246820_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32267_PropertyInfos[] =
{
	&IList_1_t32267____Item_PropertyInfo,
	NULL
};
extern Il2CppType MissionView_Daily_t1561_0_0_0;
static ParameterInfo IList_1_t32267_IList_1_IndexOf_m246821_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Daily_t1561_0_0_0},
};
extern TypeInfo IList_1_t32267_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MissionView_Daily>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246821_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32267_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32267_IList_1_IndexOf_m246821_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Daily_t1561_0_0_0;
static ParameterInfo IList_1_t32267_IList_1_Insert_m246822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MissionView_Daily_t1561_0_0_0},
};
extern TypeInfo IList_1_t32267_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Daily>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246822_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32267_IList_1_Insert_m246822_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32267_IList_1_RemoveAt_m246823_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32267_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Daily>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246823_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32267_IList_1_RemoveAt_m246823_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32267_IList_1_get_Item_m246819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32267_il2cpp_TypeInfo;
extern Il2CppType MissionView_Daily_t1561_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MissionView_Daily>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246819_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32267_il2cpp_TypeInfo/* declaring_type */
	, &MissionView_Daily_t1561_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32267_IList_1_get_Item_m246819_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Daily_t1561_0_0_0;
static ParameterInfo IList_1_t32267_IList_1_set_Item_m246820_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MissionView_Daily_t1561_0_0_0},
};
extern TypeInfo IList_1_t32267_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Daily>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246820_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32267_IList_1_set_Item_m246820_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32267_MethodInfos[] =
{
	&IList_1_IndexOf_m246821_MethodInfo,
	&IList_1_Insert_m246822_MethodInfo,
	&IList_1_RemoveAt_m246823_MethodInfo,
	&IList_1_get_Item_m246819_MethodInfo,
	&IList_1_set_Item_m246820_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32266_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32268_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32267_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32266_il2cpp_TypeInfo,
	&IEnumerable_1_t32268_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32267_0_0_0;
extern Il2CppType IList_1_t32267_1_0_0;
struct IList_1_t32267;
extern TypeInfo IList_1_t32267_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32267_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32267_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32267_MethodInfos/* methods */
	, IList_1_t32267_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32267_il2cpp_TypeInfo/* element_class */
	, IList_1_t32267_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32267_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32267_0_0_0/* byval_arg */
	, &IList_1_t32267_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32267_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<MissionView_Daily>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_222.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18003_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<MissionView_Daily>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_222MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<MissionView_Daily>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_218.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18003_il2cpp_TypeInfo;
extern TypeInfo MissionView_Daily_t1561_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<MissionView_Daily>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_218MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m133313_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133315_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Daily>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Daily>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<MissionView_Daily>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18003____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18003_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18003, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18003_FieldInfos[] =
{
	&CachedInvokableCall_1_t18003____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType MissionView_Daily_t1561_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18003_CachedInvokableCall_1__ctor_m133311_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MissionView_Daily_t1561_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18003_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Daily>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m133311_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18003_CachedInvokableCall_1__ctor_m133311_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t18003_CachedInvokableCall_1_Invoke_m133312_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18003_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Daily>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m133312_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18003_CachedInvokableCall_1_Invoke_m133312_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t18003_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m133311_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133312_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m133312_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133316_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18003_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133312_MethodInfo,
	&InvokableCall_1_Find_m133316_MethodInfo,
};
extern Il2CppType UnityAction_1_t18005_0_0_0;
extern TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Daily_t1561_m201155_MethodInfo;
extern TypeInfo MissionView_Daily_t1561_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133318_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m133313_MethodInfo;
extern TypeInfo MissionView_Daily_t1561_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m133315_MethodInfo;
static void* CachedInvokableCall_1_t18003_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18005_0_0_0,
	&UnityAction_1_t18005_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Daily_t1561_m201155_MethodInfo,
	&MissionView_Daily_t1561_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133318_MethodInfo,
	&InvokableCall_1__ctor_m133313_MethodInfo,
	&MissionView_Daily_t1561_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m133315_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18003_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18003_1_0_0;
extern TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18003;
extern TypeInfo CachedInvokableCall_1_t18003_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18003_GenericClass;
TypeInfo CachedInvokableCall_1_t18003_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18003_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18003_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18004_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18003_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18003_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18003_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18003_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18003_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18003_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18003_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18003)/* instance_size */
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
extern TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<MissionView_Daily>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_225.h"
extern TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo MissionView_Daily_t1561_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<MissionView_Daily>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_225MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18005_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Daily_t1561_m201155_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m133318_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionView_Daily>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionView_Daily>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Daily_t1561_m201155(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Daily_t1561_m201155_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Daily>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Daily>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Daily>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionView_Daily>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<MissionView_Daily>
extern Il2CppType UnityAction_1_t18005_0_0_1;
FieldInfo InvokableCall_1_t18004____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18005_0_0_1/* type */
	, &InvokableCall_1_t18004_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18004, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18004_FieldInfos[] =
{
	&InvokableCall_1_t18004____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18004_InvokableCall_1__ctor_m133313_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Daily>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m133313_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18004_InvokableCall_1__ctor_m133313_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t18005_0_0_0;
static ParameterInfo InvokableCall_1_t18004_InvokableCall_1__ctor_m133314_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18005_0_0_0},
};
extern TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Daily>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m133314_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18004_InvokableCall_1__ctor_m133314_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t18004_InvokableCall_1_Invoke_m133315_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Daily>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m133315_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18004_InvokableCall_1_Invoke_m133315_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t18004_InvokableCall_1_Find_m133316_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionView_Daily>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m133316_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18004_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18004_InvokableCall_1_Find_m133316_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t18004_MethodInfos[] =
{
	&InvokableCall_1__ctor_m133313_MethodInfo,
	&InvokableCall_1__ctor_m133314_MethodInfo,
	&InvokableCall_1_Invoke_m133315_MethodInfo,
	&InvokableCall_1_Find_m133316_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133315_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133316_MethodInfo;
static MethodInfo* InvokableCall_1_t18004_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m133315_MethodInfo,
	&InvokableCall_1_Find_m133316_MethodInfo,
};
extern Il2CppType UnityAction_1_t18005_0_0_0;
extern TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Daily_t1561_m201155_MethodInfo;
extern TypeInfo MissionView_Daily_t1561_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133318_MethodInfo;
static void* InvokableCall_1_t18004_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18005_0_0_0,
	&UnityAction_1_t18005_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Daily_t1561_m201155_MethodInfo,
	&MissionView_Daily_t1561_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133318_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18004_0_0_0;
extern Il2CppType InvokableCall_1_t18004_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18004;
extern TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18004_GenericClass;
TypeInfo InvokableCall_1_t18004_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18004_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18004_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18004_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18004_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18004_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18004_0_0_0/* byval_arg */
	, &InvokableCall_1_t18004_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18004_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18004_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18004)/* instance_size */
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
extern TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<MissionView_Daily>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Daily>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionView_Daily>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Daily>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<MissionView_Daily>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18005_UnityAction_1__ctor_m133317_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Daily>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m133317_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18005_UnityAction_1__ctor_m133317_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Daily_t1561_0_0_0;
static ParameterInfo UnityAction_1_t18005_UnityAction_1_Invoke_m133318_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Daily_t1561_0_0_0},
};
extern TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Daily>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m133318_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18005_UnityAction_1_Invoke_m133318_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Daily_t1561_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18005_UnityAction_1_BeginInvoke_m133319_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Daily_t1561_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionView_Daily>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m133319_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18005_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18005_UnityAction_1_BeginInvoke_m133319_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t18005_UnityAction_1_EndInvoke_m133320_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Daily>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m133320_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18005_UnityAction_1_EndInvoke_m133320_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t18005_MethodInfos[] =
{
	&UnityAction_1__ctor_m133317_MethodInfo,
	&UnityAction_1_Invoke_m133318_MethodInfo,
	&UnityAction_1_BeginInvoke_m133319_MethodInfo,
	&UnityAction_1_EndInvoke_m133320_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m133318_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m133319_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m133320_MethodInfo;
static MethodInfo* UnityAction_1_t18005_VTable[] =
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
	&UnityAction_1_Invoke_m133318_MethodInfo,
	&UnityAction_1_BeginInvoke_m133319_MethodInfo,
	&UnityAction_1_EndInvoke_m133320_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18005_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18005_0_0_0;
extern Il2CppType UnityAction_1_t18005_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18005;
extern TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18005_GenericClass;
TypeInfo UnityAction_1_t18005_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18005_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18005_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18005_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18005_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18005_0_0_0/* byval_arg */
	, &UnityAction_1_t18005_1_0_0/* this_arg */
	, UnityAction_1_t18005_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18005_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18005)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27685_il2cpp_TypeInfo;

// MissionView_Daily/ItemType
#include "AssemblyU2DCSharp_MissionView_Daily_ItemType.h"


// T System.Collections.Generic.IEnumerator`1<MissionView_Daily/ItemType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MissionView_Daily/ItemType>
extern MethodInfo IEnumerator_1_get_Current_m246824_MethodInfo;
static PropertyInfo IEnumerator_1_t27685____Current_PropertyInfo = 
{
	&IEnumerator_1_t27685_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246824_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27685_PropertyInfos[] =
{
	&IEnumerator_1_t27685____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27685_il2cpp_TypeInfo;
extern Il2CppType ItemType_t1564_0_0_0;
extern void* RuntimeInvoker_ItemType_t1564 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MissionView_Daily/ItemType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246824_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27685_il2cpp_TypeInfo/* declaring_type */
	, &ItemType_t1564_0_0_0/* return_type */
	, RuntimeInvoker_ItemType_t1564/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27685_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246824_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27685_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27685_0_0_0;
extern Il2CppType IEnumerator_1_t27685_1_0_0;
struct IEnumerator_1_t27685;
extern TypeInfo IEnumerator_1_t27685_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27685_GenericClass;
TypeInfo IEnumerator_1_t27685_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27685_MethodInfos/* methods */
	, IEnumerator_1_t27685_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27685_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27685_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27685_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27685_0_0_0/* byval_arg */
	, &IEnumerator_1_t27685_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27685_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1319.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1319MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo;
extern TypeInfo ItemType_t1564_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133326_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisItemType_t1564_m201157_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MissionView_Daily/ItemType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MissionView_Daily/ItemType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisItemType_t1564_m201157 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisItemType_t1564_m201157_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m133321_MethodInfo;
 void InternalEnumerator_1__ctor_m133321 (InternalEnumerator_1_t18006 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133322_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133322 (InternalEnumerator_1_t18006 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133323_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133323 (InternalEnumerator_1_t18006 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m133326(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m133326_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ItemType_t1564_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m133324_MethodInfo;
 void InternalEnumerator_1_Dispose_m133324 (InternalEnumerator_1_t18006 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m133325_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m133325 (InternalEnumerator_1_t18006 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m133326_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m133326 (InternalEnumerator_1_t18006 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisItemType_t1564_m201157(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisItemType_t1564_m201157_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18006____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18006, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18006____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18006, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18006_FieldInfos[] =
{
	&InternalEnumerator_1_t18006____array_FieldInfo,
	&InternalEnumerator_1_t18006____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133323_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18006____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18006_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133323_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133326_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18006____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18006_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133326_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18006_PropertyInfos[] =
{
	&InternalEnumerator_1_t18006____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18006____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18006_InternalEnumerator_1__ctor_m133321_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133321_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m133321/* method */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18006_InternalEnumerator_1__ctor_m133321_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133322_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133322/* method */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133323_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133323/* method */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133324_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m133324/* method */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133325_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m133325/* method */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo;
extern Il2CppType ItemType_t1564_0_0_0;
extern void* RuntimeInvoker_ItemType_t1564 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MissionView_Daily/ItemType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133326_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m133326/* method */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* declaring_type */
	, &ItemType_t1564_0_0_0/* return_type */
	, RuntimeInvoker_ItemType_t1564/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t18006_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133321_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133322_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133323_MethodInfo,
	&InternalEnumerator_1_Dispose_m133324_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133325_MethodInfo,
	&InternalEnumerator_1_get_Current_m133326_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133323_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133325_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133322_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133324_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133326_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18006_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133323_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133325_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133322_MethodInfo,
	&InternalEnumerator_1_Dispose_m133324_MethodInfo,
	&InternalEnumerator_1_get_Current_m133326_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27685_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18006_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27685_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27685_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18006_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27685_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18006_0_0_0;
extern Il2CppType InternalEnumerator_1_t18006_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18006_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18006_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18006_MethodInfos/* methods */
	, InternalEnumerator_1_t18006_PropertyInfos/* properties */
	, InternalEnumerator_1_t18006_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18006_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18006_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18006_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18006_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18006_1_0_0/* this_arg */
	, InternalEnumerator_1_t18006_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18006_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18006)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>
extern MethodInfo ICollection_1_get_Count_m246825_MethodInfo;
static PropertyInfo ICollection_1_t32269____Count_PropertyInfo = 
{
	&ICollection_1_t32269_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246825_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246826_MethodInfo;
static PropertyInfo ICollection_1_t32269____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32269_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246826_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32269_PropertyInfos[] =
{
	&ICollection_1_t32269____Count_PropertyInfo,
	&ICollection_1_t32269____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::get_Count()
MethodInfo ICollection_1_get_Count_m246825_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32269_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246826_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32269_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ItemType_t1564_0_0_0;
static ParameterInfo ICollection_1_t32269_ICollection_1_Add_m246827_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1564_0_0_0},
};
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::Add(T)
MethodInfo ICollection_1_Add_m246827_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t32269_ICollection_1_Add_m246827_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::Clear()
MethodInfo ICollection_1_Clear_m246828_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32269_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ItemType_t1564_0_0_0;
static ParameterInfo ICollection_1_t32269_ICollection_1_Contains_m246829_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1564_0_0_0},
};
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::Contains(T)
MethodInfo ICollection_1_Contains_m246829_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32269_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32269_ICollection_1_Contains_m246829_ParameterInfos/* parameters */
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
extern Il2CppType ItemTypeU5BU5D_t25741_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32269_ICollection_1_CopyTo_m246830_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ItemTypeU5BU5D_t25741_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246830_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32269_ICollection_1_CopyTo_m246830_ParameterInfos/* parameters */
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
extern Il2CppType ItemType_t1564_0_0_0;
static ParameterInfo ICollection_1_t32269_ICollection_1_Remove_m246831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1564_0_0_0},
};
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Daily/ItemType>::Remove(T)
MethodInfo ICollection_1_Remove_m246831_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32269_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32269_ICollection_1_Remove_m246831_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32269_MethodInfos[] =
{
	&ICollection_1_get_Count_m246825_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246826_MethodInfo,
	&ICollection_1_Add_m246827_MethodInfo,
	&ICollection_1_Clear_m246828_MethodInfo,
	&ICollection_1_Contains_m246829_MethodInfo,
	&ICollection_1_CopyTo_m246830_MethodInfo,
	&ICollection_1_Remove_m246831_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32271_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32269_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32271_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32269_0_0_0;
extern Il2CppType ICollection_1_t32269_1_0_0;
struct ICollection_1_t32269;
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32269_GenericClass;
TypeInfo ICollection_1_t32269_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32269_MethodInfos/* methods */
	, ICollection_1_t32269_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32269_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32269_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32269_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32269_0_0_0/* byval_arg */
	, &ICollection_1_t32269_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32269_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32271_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Daily/ItemType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MissionView_Daily/ItemType>
extern TypeInfo IEnumerable_1_t32271_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27685_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Daily/ItemType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246832_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32271_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27685_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32271_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246832_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32271_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32271_0_0_0;
extern Il2CppType IEnumerable_1_t32271_1_0_0;
struct IEnumerable_1_t32271;
extern TypeInfo IEnumerable_1_t32271_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32271_GenericClass;
TypeInfo IEnumerable_1_t32271_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32271_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32271_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32271_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32271_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32271_0_0_0/* byval_arg */
	, &IEnumerable_1_t32271_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32271_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32270_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MissionView_Daily/ItemType>
extern MethodInfo IList_1_get_Item_m246833_MethodInfo;
extern MethodInfo IList_1_set_Item_m246834_MethodInfo;
static PropertyInfo IList_1_t32270____Item_PropertyInfo = 
{
	&IList_1_t32270_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246833_MethodInfo/* get */
	, &IList_1_set_Item_m246834_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32270_PropertyInfos[] =
{
	&IList_1_t32270____Item_PropertyInfo,
	NULL
};
extern Il2CppType ItemType_t1564_0_0_0;
static ParameterInfo IList_1_t32270_IList_1_IndexOf_m246835_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1564_0_0_0},
};
extern TypeInfo IList_1_t32270_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246835_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32270_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32270_IList_1_IndexOf_m246835_ParameterInfos/* parameters */
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
extern Il2CppType ItemType_t1564_0_0_0;
static ParameterInfo IList_1_t32270_IList_1_Insert_m246836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ItemType_t1564_0_0_0},
};
extern TypeInfo IList_1_t32270_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246836_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32270_IList_1_Insert_m246836_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32270_IList_1_RemoveAt_m246837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32270_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246837_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32270_IList_1_RemoveAt_m246837_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32270_IList_1_get_Item_m246833_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32270_il2cpp_TypeInfo;
extern Il2CppType ItemType_t1564_0_0_0;
extern void* RuntimeInvoker_ItemType_t1564_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246833_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32270_il2cpp_TypeInfo/* declaring_type */
	, &ItemType_t1564_0_0_0/* return_type */
	, RuntimeInvoker_ItemType_t1564_Int32_t73/* invoker_method */
	, IList_1_t32270_IList_1_get_Item_m246833_ParameterInfos/* parameters */
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
extern Il2CppType ItemType_t1564_0_0_0;
static ParameterInfo IList_1_t32270_IList_1_set_Item_m246834_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ItemType_t1564_0_0_0},
};
extern TypeInfo IList_1_t32270_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Daily/ItemType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246834_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32270_IList_1_set_Item_m246834_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32270_MethodInfos[] =
{
	&IList_1_IndexOf_m246835_MethodInfo,
	&IList_1_Insert_m246836_MethodInfo,
	&IList_1_RemoveAt_m246837_MethodInfo,
	&IList_1_get_Item_m246833_MethodInfo,
	&IList_1_set_Item_m246834_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32269_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32271_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32270_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32269_il2cpp_TypeInfo,
	&IEnumerable_1_t32271_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32270_0_0_0;
extern Il2CppType IList_1_t32270_1_0_0;
struct IList_1_t32270;
extern TypeInfo IList_1_t32270_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32270_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32270_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32270_MethodInfos/* methods */
	, IList_1_t32270_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32270_il2cpp_TypeInfo/* element_class */
	, IList_1_t32270_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32270_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32270_0_0_0/* byval_arg */
	, &IList_1_t32270_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32270_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27686_il2cpp_TypeInfo;

// MissionView_Guild
#include "AssemblyU2DCSharp_MissionView_Guild.h"


// T System.Collections.Generic.IEnumerator`1<MissionView_Guild>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MissionView_Guild>
extern MethodInfo IEnumerator_1_get_Current_m246838_MethodInfo;
static PropertyInfo IEnumerator_1_t27686____Current_PropertyInfo = 
{
	&IEnumerator_1_t27686_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246838_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27686_PropertyInfos[] =
{
	&IEnumerator_1_t27686____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27686_il2cpp_TypeInfo;
extern Il2CppType MissionView_Guild_t1562_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MissionView_Guild>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246838_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27686_il2cpp_TypeInfo/* declaring_type */
	, &MissionView_Guild_t1562_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27686_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246838_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27686_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27686_0_0_0;
extern Il2CppType IEnumerator_1_t27686_1_0_0;
struct IEnumerator_1_t27686;
extern TypeInfo IEnumerator_1_t27686_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27686_GenericClass;
TypeInfo IEnumerator_1_t27686_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27686_MethodInfos/* methods */
	, IEnumerator_1_t27686_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27686_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27686_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27686_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27686_0_0_0/* byval_arg */
	, &IEnumerator_1_t27686_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27686_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MissionView_Guild>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1320.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MissionView_Guild>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1320MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo;
extern TypeInfo MissionView_Guild_t1562_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133332_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionView_Guild_t1562_m201168_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MissionView_Guild>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MissionView_Guild>(System.Int32)
#define Array_InternalArray__get_Item_TisMissionView_Guild_t1562_m201168(__this, p0, method) (MissionView_Guild_t1562 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMissionView_Guild_t1562_m201168_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MissionView_Guild>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<MissionView_Guild>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<MissionView_Guild>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<MissionView_Guild>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Guild>::MoveNext()
// T System.Array/InternalEnumerator`1<MissionView_Guild>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<MissionView_Guild>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18007____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18007, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18007____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18007, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18007_FieldInfos[] =
{
	&InternalEnumerator_1_t18007____array_FieldInfo,
	&InternalEnumerator_1_t18007____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133329_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18007____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18007_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133329_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133332_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18007____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18007_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133332_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18007_PropertyInfos[] =
{
	&InternalEnumerator_1_t18007____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18007____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18007_InternalEnumerator_1__ctor_m133327_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Guild>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133327_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18007_InternalEnumerator_1__ctor_m133327_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Guild>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133328_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MissionView_Guild>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133329_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Guild>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133330_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Guild>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133331_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo;
extern Il2CppType MissionView_Guild_t1562_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MissionView_Guild>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133332_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* declaring_type */
	, &MissionView_Guild_t1562_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t18007_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133327_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133328_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133329_MethodInfo,
	&InternalEnumerator_1_Dispose_m133330_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133331_MethodInfo,
	&InternalEnumerator_1_get_Current_m133332_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133329_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133331_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133328_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133330_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133332_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18007_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133329_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133331_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133328_MethodInfo,
	&InternalEnumerator_1_Dispose_m133330_MethodInfo,
	&InternalEnumerator_1_get_Current_m133332_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27686_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18007_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27686_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27686_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18007_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27686_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133332_MethodInfo;
extern TypeInfo MissionView_Guild_t1562_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionView_Guild_t1562_m201168_MethodInfo;
static void* InternalEnumerator_1_t18007_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133332_MethodInfo,
	&MissionView_Guild_t1562_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMissionView_Guild_t1562_m201168_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18007_0_0_0;
extern Il2CppType InternalEnumerator_1_t18007_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18007_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18007_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18007_MethodInfos/* methods */
	, InternalEnumerator_1_t18007_PropertyInfos/* properties */
	, InternalEnumerator_1_t18007_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18007_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18007_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18007_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18007_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18007_1_0_0/* this_arg */
	, InternalEnumerator_1_t18007_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18007_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18007_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18007)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Guild>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Guild>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MissionView_Guild>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Guild>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Guild>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Guild>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Guild>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MissionView_Guild>
extern MethodInfo ICollection_1_get_Count_m246839_MethodInfo;
static PropertyInfo ICollection_1_t32272____Count_PropertyInfo = 
{
	&ICollection_1_t32272_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246839_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246840_MethodInfo;
static PropertyInfo ICollection_1_t32272____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32272_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246840_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32272_PropertyInfos[] =
{
	&ICollection_1_t32272____Count_PropertyInfo,
	&ICollection_1_t32272____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Guild>::get_Count()
MethodInfo ICollection_1_get_Count_m246839_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32272_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Guild>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246840_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32272_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionView_Guild_t1562_0_0_0;
static ParameterInfo ICollection_1_t32272_ICollection_1_Add_m246841_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Guild_t1562_0_0_0},
};
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Guild>::Add(T)
MethodInfo ICollection_1_Add_m246841_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32272_ICollection_1_Add_m246841_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Guild>::Clear()
MethodInfo ICollection_1_Clear_m246842_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32272_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionView_Guild_t1562_0_0_0;
static ParameterInfo ICollection_1_t32272_ICollection_1_Contains_m246843_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Guild_t1562_0_0_0},
};
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Guild>::Contains(T)
MethodInfo ICollection_1_Contains_m246843_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32272_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32272_ICollection_1_Contains_m246843_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_GuildU5BU5D_t25742_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32272_ICollection_1_CopyTo_m246844_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_GuildU5BU5D_t25742_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Guild>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246844_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32272_ICollection_1_CopyTo_m246844_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Guild_t1562_0_0_0;
static ParameterInfo ICollection_1_t32272_ICollection_1_Remove_m246845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Guild_t1562_0_0_0},
};
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Guild>::Remove(T)
MethodInfo ICollection_1_Remove_m246845_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32272_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32272_ICollection_1_Remove_m246845_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32272_MethodInfos[] =
{
	&ICollection_1_get_Count_m246839_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246840_MethodInfo,
	&ICollection_1_Add_m246841_MethodInfo,
	&ICollection_1_Clear_m246842_MethodInfo,
	&ICollection_1_Contains_m246843_MethodInfo,
	&ICollection_1_CopyTo_m246844_MethodInfo,
	&ICollection_1_Remove_m246845_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32274_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32272_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32274_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32272_0_0_0;
extern Il2CppType ICollection_1_t32272_1_0_0;
struct ICollection_1_t32272;
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32272_GenericClass;
TypeInfo ICollection_1_t32272_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32272_MethodInfos/* methods */
	, ICollection_1_t32272_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32272_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32272_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32272_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32272_0_0_0/* byval_arg */
	, &ICollection_1_t32272_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32272_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32274_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Guild>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MissionView_Guild>
extern TypeInfo IEnumerable_1_t32274_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27686_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Guild>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246846_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32274_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27686_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32274_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246846_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32274_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32274_0_0_0;
extern Il2CppType IEnumerable_1_t32274_1_0_0;
struct IEnumerable_1_t32274;
extern TypeInfo IEnumerable_1_t32274_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32274_GenericClass;
TypeInfo IEnumerable_1_t32274_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32274_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32274_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32274_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32274_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32274_0_0_0/* byval_arg */
	, &IEnumerable_1_t32274_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32274_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32273_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MissionView_Guild>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MissionView_Guild>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MissionView_Guild>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MissionView_Guild>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MissionView_Guild>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MissionView_Guild>
extern MethodInfo IList_1_get_Item_m246847_MethodInfo;
extern MethodInfo IList_1_set_Item_m246848_MethodInfo;
static PropertyInfo IList_1_t32273____Item_PropertyInfo = 
{
	&IList_1_t32273_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246847_MethodInfo/* get */
	, &IList_1_set_Item_m246848_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32273_PropertyInfos[] =
{
	&IList_1_t32273____Item_PropertyInfo,
	NULL
};
extern Il2CppType MissionView_Guild_t1562_0_0_0;
static ParameterInfo IList_1_t32273_IList_1_IndexOf_m246849_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Guild_t1562_0_0_0},
};
extern TypeInfo IList_1_t32273_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MissionView_Guild>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246849_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32273_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32273_IList_1_IndexOf_m246849_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Guild_t1562_0_0_0;
static ParameterInfo IList_1_t32273_IList_1_Insert_m246850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MissionView_Guild_t1562_0_0_0},
};
extern TypeInfo IList_1_t32273_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Guild>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246850_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32273_IList_1_Insert_m246850_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32273_IList_1_RemoveAt_m246851_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32273_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Guild>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246851_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32273_IList_1_RemoveAt_m246851_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32273_IList_1_get_Item_m246847_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32273_il2cpp_TypeInfo;
extern Il2CppType MissionView_Guild_t1562_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MissionView_Guild>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246847_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32273_il2cpp_TypeInfo/* declaring_type */
	, &MissionView_Guild_t1562_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32273_IList_1_get_Item_m246847_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Guild_t1562_0_0_0;
static ParameterInfo IList_1_t32273_IList_1_set_Item_m246848_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MissionView_Guild_t1562_0_0_0},
};
extern TypeInfo IList_1_t32273_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Guild>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246848_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32273_IList_1_set_Item_m246848_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32273_MethodInfos[] =
{
	&IList_1_IndexOf_m246849_MethodInfo,
	&IList_1_Insert_m246850_MethodInfo,
	&IList_1_RemoveAt_m246851_MethodInfo,
	&IList_1_get_Item_m246847_MethodInfo,
	&IList_1_set_Item_m246848_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32272_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32274_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32273_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32272_il2cpp_TypeInfo,
	&IEnumerable_1_t32274_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32273_0_0_0;
extern Il2CppType IList_1_t32273_1_0_0;
struct IList_1_t32273;
extern TypeInfo IList_1_t32273_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32273_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32273_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32273_MethodInfos/* methods */
	, IList_1_t32273_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32273_il2cpp_TypeInfo/* element_class */
	, IList_1_t32273_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32273_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32273_0_0_0/* byval_arg */
	, &IList_1_t32273_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32273_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<MissionView_Guild>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_223.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18008_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<MissionView_Guild>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_223MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<MissionView_Guild>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_219.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18008_il2cpp_TypeInfo;
extern TypeInfo MissionView_Guild_t1562_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<MissionView_Guild>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_219MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m133335_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133337_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Guild>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Guild>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<MissionView_Guild>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18008____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18008_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18008, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18008_FieldInfos[] =
{
	&CachedInvokableCall_1_t18008____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType MissionView_Guild_t1562_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18008_CachedInvokableCall_1__ctor_m133333_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MissionView_Guild_t1562_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18008_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Guild>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m133333_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18008_CachedInvokableCall_1__ctor_m133333_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t18008_CachedInvokableCall_1_Invoke_m133334_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18008_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Guild>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m133334_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18008_CachedInvokableCall_1_Invoke_m133334_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t18008_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m133333_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133334_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m133334_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133338_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18008_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133334_MethodInfo,
	&InvokableCall_1_Find_m133338_MethodInfo,
};
extern Il2CppType UnityAction_1_t18010_0_0_0;
extern TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Guild_t1562_m201178_MethodInfo;
extern TypeInfo MissionView_Guild_t1562_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133340_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m133335_MethodInfo;
extern TypeInfo MissionView_Guild_t1562_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m133337_MethodInfo;
static void* CachedInvokableCall_1_t18008_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18010_0_0_0,
	&UnityAction_1_t18010_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Guild_t1562_m201178_MethodInfo,
	&MissionView_Guild_t1562_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133340_MethodInfo,
	&InvokableCall_1__ctor_m133335_MethodInfo,
	&MissionView_Guild_t1562_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m133337_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18008_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18008_1_0_0;
extern TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18008;
extern TypeInfo CachedInvokableCall_1_t18008_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18008_GenericClass;
TypeInfo CachedInvokableCall_1_t18008_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18008_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18008_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18009_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18008_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18008_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18008_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18008_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18008_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18008_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18008_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18008)/* instance_size */
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
extern TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<MissionView_Guild>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_226.h"
extern TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo MissionView_Guild_t1562_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<MissionView_Guild>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_226MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18010_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Guild_t1562_m201178_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m133340_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionView_Guild>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionView_Guild>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Guild_t1562_m201178(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Guild_t1562_m201178_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Guild>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Guild>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Guild>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionView_Guild>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<MissionView_Guild>
extern Il2CppType UnityAction_1_t18010_0_0_1;
FieldInfo InvokableCall_1_t18009____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18010_0_0_1/* type */
	, &InvokableCall_1_t18009_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18009, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18009_FieldInfos[] =
{
	&InvokableCall_1_t18009____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18009_InvokableCall_1__ctor_m133335_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Guild>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m133335_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18009_InvokableCall_1__ctor_m133335_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t18010_0_0_0;
static ParameterInfo InvokableCall_1_t18009_InvokableCall_1__ctor_m133336_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18010_0_0_0},
};
extern TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Guild>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m133336_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18009_InvokableCall_1__ctor_m133336_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t18009_InvokableCall_1_Invoke_m133337_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Guild>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m133337_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18009_InvokableCall_1_Invoke_m133337_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t18009_InvokableCall_1_Find_m133338_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionView_Guild>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m133338_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18009_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18009_InvokableCall_1_Find_m133338_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t18009_MethodInfos[] =
{
	&InvokableCall_1__ctor_m133335_MethodInfo,
	&InvokableCall_1__ctor_m133336_MethodInfo,
	&InvokableCall_1_Invoke_m133337_MethodInfo,
	&InvokableCall_1_Find_m133338_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133337_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133338_MethodInfo;
static MethodInfo* InvokableCall_1_t18009_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m133337_MethodInfo,
	&InvokableCall_1_Find_m133338_MethodInfo,
};
extern Il2CppType UnityAction_1_t18010_0_0_0;
extern TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Guild_t1562_m201178_MethodInfo;
extern TypeInfo MissionView_Guild_t1562_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133340_MethodInfo;
static void* InvokableCall_1_t18009_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18010_0_0_0,
	&UnityAction_1_t18010_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Guild_t1562_m201178_MethodInfo,
	&MissionView_Guild_t1562_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133340_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18009_0_0_0;
extern Il2CppType InvokableCall_1_t18009_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18009;
extern TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18009_GenericClass;
TypeInfo InvokableCall_1_t18009_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18009_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18009_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18009_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18009_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18009_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18009_0_0_0/* byval_arg */
	, &InvokableCall_1_t18009_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18009_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18009_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18009)/* instance_size */
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
extern TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<MissionView_Guild>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Guild>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionView_Guild>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Guild>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<MissionView_Guild>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18010_UnityAction_1__ctor_m133339_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Guild>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m133339_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18010_UnityAction_1__ctor_m133339_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Guild_t1562_0_0_0;
static ParameterInfo UnityAction_1_t18010_UnityAction_1_Invoke_m133340_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Guild_t1562_0_0_0},
};
extern TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Guild>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m133340_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18010_UnityAction_1_Invoke_m133340_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Guild_t1562_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18010_UnityAction_1_BeginInvoke_m133341_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Guild_t1562_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionView_Guild>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m133341_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18010_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18010_UnityAction_1_BeginInvoke_m133341_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t18010_UnityAction_1_EndInvoke_m133342_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Guild>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m133342_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18010_UnityAction_1_EndInvoke_m133342_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t18010_MethodInfos[] =
{
	&UnityAction_1__ctor_m133339_MethodInfo,
	&UnityAction_1_Invoke_m133340_MethodInfo,
	&UnityAction_1_BeginInvoke_m133341_MethodInfo,
	&UnityAction_1_EndInvoke_m133342_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m133340_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m133341_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m133342_MethodInfo;
static MethodInfo* UnityAction_1_t18010_VTable[] =
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
	&UnityAction_1_Invoke_m133340_MethodInfo,
	&UnityAction_1_BeginInvoke_m133341_MethodInfo,
	&UnityAction_1_EndInvoke_m133342_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18010_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18010_0_0_0;
extern Il2CppType UnityAction_1_t18010_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18010;
extern TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18010_GenericClass;
TypeInfo UnityAction_1_t18010_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18010_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18010_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18010_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18010_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18010_0_0_0/* byval_arg */
	, &UnityAction_1_t18010_1_0_0/* this_arg */
	, UnityAction_1_t18010_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18010_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18010)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27687_il2cpp_TypeInfo;

// MissionView_Main
#include "AssemblyU2DCSharp_MissionView_Main.h"


// T System.Collections.Generic.IEnumerator`1<MissionView_Main>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MissionView_Main>
extern MethodInfo IEnumerator_1_get_Current_m246852_MethodInfo;
static PropertyInfo IEnumerator_1_t27687____Current_PropertyInfo = 
{
	&IEnumerator_1_t27687_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246852_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27687_PropertyInfos[] =
{
	&IEnumerator_1_t27687____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27687_il2cpp_TypeInfo;
extern Il2CppType MissionView_Main_t1560_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MissionView_Main>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246852_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27687_il2cpp_TypeInfo/* declaring_type */
	, &MissionView_Main_t1560_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27687_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246852_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27687_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27687_0_0_0;
extern Il2CppType IEnumerator_1_t27687_1_0_0;
struct IEnumerator_1_t27687;
extern TypeInfo IEnumerator_1_t27687_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27687_GenericClass;
TypeInfo IEnumerator_1_t27687_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27687_MethodInfos/* methods */
	, IEnumerator_1_t27687_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27687_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27687_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27687_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27687_0_0_0/* byval_arg */
	, &IEnumerator_1_t27687_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27687_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MissionView_Main>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1321.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MissionView_Main>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1321MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo;
extern TypeInfo MissionView_Main_t1560_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133348_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionView_Main_t1560_m201180_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MissionView_Main>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MissionView_Main>(System.Int32)
#define Array_InternalArray__get_Item_TisMissionView_Main_t1560_m201180(__this, p0, method) (MissionView_Main_t1560 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisMissionView_Main_t1560_m201180_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MissionView_Main>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<MissionView_Main>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<MissionView_Main>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<MissionView_Main>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Main>::MoveNext()
// T System.Array/InternalEnumerator`1<MissionView_Main>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<MissionView_Main>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18011____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18011, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18011____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18011, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18011_FieldInfos[] =
{
	&InternalEnumerator_1_t18011____array_FieldInfo,
	&InternalEnumerator_1_t18011____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133345_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18011____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18011_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133345_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133348_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18011____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18011_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18011_PropertyInfos[] =
{
	&InternalEnumerator_1_t18011____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18011____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18011_InternalEnumerator_1__ctor_m133343_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Main>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133343_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18011_InternalEnumerator_1__ctor_m133343_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Main>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133344_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MissionView_Main>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133345_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Main>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133346_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Main>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133347_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo;
extern Il2CppType MissionView_Main_t1560_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MissionView_Main>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133348_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* declaring_type */
	, &MissionView_Main_t1560_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t18011_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133344_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133345_MethodInfo,
	&InternalEnumerator_1_Dispose_m133346_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133347_MethodInfo,
	&InternalEnumerator_1_get_Current_m133348_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133345_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133347_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133344_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133346_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133348_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18011_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133345_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133347_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133344_MethodInfo,
	&InternalEnumerator_1_Dispose_m133346_MethodInfo,
	&InternalEnumerator_1_get_Current_m133348_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27687_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18011_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27687_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27687_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18011_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27687_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m133348_MethodInfo;
extern TypeInfo MissionView_Main_t1560_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMissionView_Main_t1560_m201180_MethodInfo;
static void* InternalEnumerator_1_t18011_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m133348_MethodInfo,
	&MissionView_Main_t1560_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisMissionView_Main_t1560_m201180_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18011_0_0_0;
extern Il2CppType InternalEnumerator_1_t18011_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18011_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18011_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18011_MethodInfos/* methods */
	, InternalEnumerator_1_t18011_PropertyInfos/* properties */
	, InternalEnumerator_1_t18011_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18011_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18011_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18011_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18011_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18011_1_0_0/* this_arg */
	, InternalEnumerator_1_t18011_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18011_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18011_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18011)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Main>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MissionView_Main>
extern MethodInfo ICollection_1_get_Count_m246853_MethodInfo;
static PropertyInfo ICollection_1_t32275____Count_PropertyInfo = 
{
	&ICollection_1_t32275_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246853_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246854_MethodInfo;
static PropertyInfo ICollection_1_t32275____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32275_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246854_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32275_PropertyInfos[] =
{
	&ICollection_1_t32275____Count_PropertyInfo,
	&ICollection_1_t32275____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Main>::get_Count()
MethodInfo ICollection_1_get_Count_m246853_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32275_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246854_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32275_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionView_Main_t1560_0_0_0;
static ParameterInfo ICollection_1_t32275_ICollection_1_Add_m246855_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Main_t1560_0_0_0},
};
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main>::Add(T)
MethodInfo ICollection_1_Add_m246855_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32275_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32275_ICollection_1_Add_m246855_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main>::Clear()
MethodInfo ICollection_1_Clear_m246856_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32275_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MissionView_Main_t1560_0_0_0;
static ParameterInfo ICollection_1_t32275_ICollection_1_Contains_m246857_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Main_t1560_0_0_0},
};
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main>::Contains(T)
MethodInfo ICollection_1_Contains_m246857_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32275_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32275_ICollection_1_Contains_m246857_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_MainU5BU5D_t25743_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32275_ICollection_1_CopyTo_m246858_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_MainU5BU5D_t25743_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246858_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32275_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32275_ICollection_1_CopyTo_m246858_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Main_t1560_0_0_0;
static ParameterInfo ICollection_1_t32275_ICollection_1_Remove_m246859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Main_t1560_0_0_0},
};
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main>::Remove(T)
MethodInfo ICollection_1_Remove_m246859_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32275_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32275_ICollection_1_Remove_m246859_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32275_MethodInfos[] =
{
	&ICollection_1_get_Count_m246853_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246854_MethodInfo,
	&ICollection_1_Add_m246855_MethodInfo,
	&ICollection_1_Clear_m246856_MethodInfo,
	&ICollection_1_Contains_m246857_MethodInfo,
	&ICollection_1_CopyTo_m246858_MethodInfo,
	&ICollection_1_Remove_m246859_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32277_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32275_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32277_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32275_0_0_0;
extern Il2CppType ICollection_1_t32275_1_0_0;
struct ICollection_1_t32275;
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32275_GenericClass;
TypeInfo ICollection_1_t32275_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32275_MethodInfos/* methods */
	, ICollection_1_t32275_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32275_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32275_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32275_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32275_0_0_0/* byval_arg */
	, &ICollection_1_t32275_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32275_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32277_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Main>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MissionView_Main>
extern TypeInfo IEnumerable_1_t32277_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27687_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Main>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246860_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32277_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27687_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32277_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246860_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32277_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32277_0_0_0;
extern Il2CppType IEnumerable_1_t32277_1_0_0;
struct IEnumerable_1_t32277;
extern TypeInfo IEnumerable_1_t32277_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32277_GenericClass;
TypeInfo IEnumerable_1_t32277_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32277_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32277_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32277_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32277_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32277_0_0_0/* byval_arg */
	, &IEnumerable_1_t32277_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32277_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t32276_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MissionView_Main>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MissionView_Main>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MissionView_Main>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MissionView_Main>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MissionView_Main>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<MissionView_Main>
extern MethodInfo IList_1_get_Item_m246861_MethodInfo;
extern MethodInfo IList_1_set_Item_m246862_MethodInfo;
static PropertyInfo IList_1_t32276____Item_PropertyInfo = 
{
	&IList_1_t32276_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m246861_MethodInfo/* get */
	, &IList_1_set_Item_m246862_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32276_PropertyInfos[] =
{
	&IList_1_t32276____Item_PropertyInfo,
	NULL
};
extern Il2CppType MissionView_Main_t1560_0_0_0;
static ParameterInfo IList_1_t32276_IList_1_IndexOf_m246863_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Main_t1560_0_0_0},
};
extern TypeInfo IList_1_t32276_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<MissionView_Main>::IndexOf(T)
MethodInfo IList_1_IndexOf_m246863_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32276_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32276_IList_1_IndexOf_m246863_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Main_t1560_0_0_0;
static ParameterInfo IList_1_t32276_IList_1_Insert_m246864_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MissionView_Main_t1560_0_0_0},
};
extern TypeInfo IList_1_t32276_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Main>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m246864_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32276_IList_1_Insert_m246864_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t32276_IList_1_RemoveAt_m246865_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32276_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Main>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m246865_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32276_IList_1_RemoveAt_m246865_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t32276_IList_1_get_Item_m246861_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32276_il2cpp_TypeInfo;
extern Il2CppType MissionView_Main_t1560_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<MissionView_Main>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m246861_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32276_il2cpp_TypeInfo/* declaring_type */
	, &MissionView_Main_t1560_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32276_IList_1_get_Item_m246861_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Main_t1560_0_0_0;
static ParameterInfo IList_1_t32276_IList_1_set_Item_m246862_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MissionView_Main_t1560_0_0_0},
};
extern TypeInfo IList_1_t32276_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<MissionView_Main>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m246862_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32276_IList_1_set_Item_m246862_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t32276_MethodInfos[] =
{
	&IList_1_IndexOf_m246863_MethodInfo,
	&IList_1_Insert_m246864_MethodInfo,
	&IList_1_RemoveAt_m246865_MethodInfo,
	&IList_1_get_Item_m246861_MethodInfo,
	&IList_1_set_Item_m246862_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32275_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32277_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32276_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32275_il2cpp_TypeInfo,
	&IEnumerable_1_t32277_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32276_0_0_0;
extern Il2CppType IList_1_t32276_1_0_0;
struct IList_1_t32276;
extern TypeInfo IList_1_t32276_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32276_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32276_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32276_MethodInfos/* methods */
	, IList_1_t32276_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32276_il2cpp_TypeInfo/* element_class */
	, IList_1_t32276_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32276_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32276_0_0_0/* byval_arg */
	, &IList_1_t32276_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32276_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// UnityEngine.Events.CachedInvokableCall`1<MissionView_Main>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_224.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18012_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<MissionView_Main>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_224MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<MissionView_Main>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_220.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18012_il2cpp_TypeInfo;
extern TypeInfo MissionView_Main_t1560_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<MissionView_Main>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_220MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m133351_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133353_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Main>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Main>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<MissionView_Main>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18012____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18012_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18012, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18012_FieldInfos[] =
{
	&CachedInvokableCall_1_t18012____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType MissionView_Main_t1560_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18012_CachedInvokableCall_1__ctor_m133349_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MissionView_Main_t1560_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18012_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Main>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m133349_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18012_CachedInvokableCall_1__ctor_m133349_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t18012_CachedInvokableCall_1_Invoke_m133350_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18012_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<MissionView_Main>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m133350_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18012_CachedInvokableCall_1_Invoke_m133350_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t18012_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m133349_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133350_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m133350_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133354_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18012_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m133350_MethodInfo,
	&InvokableCall_1_Find_m133354_MethodInfo,
};
extern Il2CppType UnityAction_1_t18014_0_0_0;
extern TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Main_t1560_m201190_MethodInfo;
extern TypeInfo MissionView_Main_t1560_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133356_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m133351_MethodInfo;
extern TypeInfo MissionView_Main_t1560_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m133353_MethodInfo;
static void* CachedInvokableCall_1_t18012_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18014_0_0_0,
	&UnityAction_1_t18014_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Main_t1560_m201190_MethodInfo,
	&MissionView_Main_t1560_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133356_MethodInfo,
	&InvokableCall_1__ctor_m133351_MethodInfo,
	&MissionView_Main_t1560_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m133353_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18012_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18012_1_0_0;
extern TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18012;
extern TypeInfo CachedInvokableCall_1_t18012_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18012_GenericClass;
TypeInfo CachedInvokableCall_1_t18012_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18012_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18012_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18013_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18012_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18012_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18012_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18012_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18012_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18012_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18012_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18012)/* instance_size */
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
extern TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<MissionView_Main>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_227.h"
extern TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo MissionView_Main_t1560_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<MissionView_Main>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_227MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18014_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Main_t1560_m201190_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m133356_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionView_Main>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<MissionView_Main>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Main_t1560_m201190(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Main_t1560_m201190_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Main>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Main>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Main>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionView_Main>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<MissionView_Main>
extern Il2CppType UnityAction_1_t18014_0_0_1;
FieldInfo InvokableCall_1_t18013____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18014_0_0_1/* type */
	, &InvokableCall_1_t18013_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18013, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18013_FieldInfos[] =
{
	&InvokableCall_1_t18013____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18013_InvokableCall_1__ctor_m133351_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Main>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m133351_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18013_InvokableCall_1__ctor_m133351_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t18014_0_0_0;
static ParameterInfo InvokableCall_1_t18013_InvokableCall_1__ctor_m133352_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18014_0_0_0},
};
extern TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Main>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m133352_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18013_InvokableCall_1__ctor_m133352_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t18013_InvokableCall_1_Invoke_m133353_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<MissionView_Main>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m133353_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18013_InvokableCall_1_Invoke_m133353_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t18013_InvokableCall_1_Find_m133354_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<MissionView_Main>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m133354_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18013_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18013_InvokableCall_1_Find_m133354_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t18013_MethodInfos[] =
{
	&InvokableCall_1__ctor_m133351_MethodInfo,
	&InvokableCall_1__ctor_m133352_MethodInfo,
	&InvokableCall_1_Invoke_m133353_MethodInfo,
	&InvokableCall_1_Find_m133354_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m133353_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m133354_MethodInfo;
static MethodInfo* InvokableCall_1_t18013_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m133353_MethodInfo,
	&InvokableCall_1_Find_m133354_MethodInfo,
};
extern Il2CppType UnityAction_1_t18014_0_0_0;
extern TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Main_t1560_m201190_MethodInfo;
extern TypeInfo MissionView_Main_t1560_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m133356_MethodInfo;
static void* InvokableCall_1_t18013_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18014_0_0_0,
	&UnityAction_1_t18014_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMissionView_Main_t1560_m201190_MethodInfo,
	&MissionView_Main_t1560_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m133356_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18013_0_0_0;
extern Il2CppType InvokableCall_1_t18013_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18013;
extern TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18013_GenericClass;
TypeInfo InvokableCall_1_t18013_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18013_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18013_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18013_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18013_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18013_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18013_0_0_0/* byval_arg */
	, &InvokableCall_1_t18013_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18013_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18013_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18013)/* instance_size */
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
extern TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<MissionView_Main>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Main>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionView_Main>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Main>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<MissionView_Main>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18014_UnityAction_1__ctor_m133355_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Main>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m133355_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18014_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18014_UnityAction_1__ctor_m133355_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Main_t1560_0_0_0;
static ParameterInfo UnityAction_1_t18014_UnityAction_1_Invoke_m133356_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Main_t1560_0_0_0},
};
extern TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Main>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m133356_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18014_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18014_UnityAction_1_Invoke_m133356_ParameterInfos/* parameters */
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
extern Il2CppType MissionView_Main_t1560_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18014_UnityAction_1_BeginInvoke_m133357_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MissionView_Main_t1560_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<MissionView_Main>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m133357_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18014_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18014_UnityAction_1_BeginInvoke_m133357_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t18014_UnityAction_1_EndInvoke_m133358_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<MissionView_Main>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m133358_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18014_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18014_UnityAction_1_EndInvoke_m133358_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t18014_MethodInfos[] =
{
	&UnityAction_1__ctor_m133355_MethodInfo,
	&UnityAction_1_Invoke_m133356_MethodInfo,
	&UnityAction_1_BeginInvoke_m133357_MethodInfo,
	&UnityAction_1_EndInvoke_m133358_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m133356_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m133357_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m133358_MethodInfo;
static MethodInfo* UnityAction_1_t18014_VTable[] =
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
	&UnityAction_1_Invoke_m133356_MethodInfo,
	&UnityAction_1_BeginInvoke_m133357_MethodInfo,
	&UnityAction_1_EndInvoke_m133358_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18014_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18014_0_0_0;
extern Il2CppType UnityAction_1_t18014_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18014;
extern TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18014_GenericClass;
TypeInfo UnityAction_1_t18014_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18014_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18014_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18014_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18014_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18014_0_0_0/* byval_arg */
	, &UnityAction_1_t18014_1_0_0/* this_arg */
	, UnityAction_1_t18014_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18014_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18014)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27688_il2cpp_TypeInfo;

// MissionView_Main/ItemType
#include "AssemblyU2DCSharp_MissionView_Main_ItemType.h"


// T System.Collections.Generic.IEnumerator`1<MissionView_Main/ItemType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<MissionView_Main/ItemType>
extern MethodInfo IEnumerator_1_get_Current_m246866_MethodInfo;
static PropertyInfo IEnumerator_1_t27688____Current_PropertyInfo = 
{
	&IEnumerator_1_t27688_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m246866_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27688_PropertyInfos[] =
{
	&IEnumerator_1_t27688____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27688_il2cpp_TypeInfo;
extern Il2CppType ItemType_t1567_0_0_0;
extern void* RuntimeInvoker_ItemType_t1567 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<MissionView_Main/ItemType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m246866_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27688_il2cpp_TypeInfo/* declaring_type */
	, &ItemType_t1567_0_0_0/* return_type */
	, RuntimeInvoker_ItemType_t1567/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27688_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m246866_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27688_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27688_0_0_0;
extern Il2CppType IEnumerator_1_t27688_1_0_0;
struct IEnumerator_1_t27688;
extern TypeInfo IEnumerator_1_t27688_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27688_GenericClass;
TypeInfo IEnumerator_1_t27688_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27688_MethodInfos/* methods */
	, IEnumerator_1_t27688_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27688_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27688_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27688_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27688_0_0_0/* byval_arg */
	, &IEnumerator_1_t27688_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27688_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<MissionView_Main/ItemType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1322.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MissionView_Main/ItemType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1322MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo;
extern TypeInfo ItemType_t1567_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133364_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisItemType_t1567_m201192_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MissionView_Main/ItemType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MissionView_Main/ItemType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisItemType_t1567_m201192 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisItemType_t1567_m201192_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m133359_MethodInfo;
 void InternalEnumerator_1__ctor_m133359 (InternalEnumerator_1_t18015 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133360_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133360 (InternalEnumerator_1_t18015 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133361_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133361 (InternalEnumerator_1_t18015 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m133364(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m133364_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ItemType_t1567_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m133362_MethodInfo;
 void InternalEnumerator_1_Dispose_m133362 (InternalEnumerator_1_t18015 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m133363_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m133363 (InternalEnumerator_1_t18015 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m133364_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m133364 (InternalEnumerator_1_t18015 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisItemType_t1567_m201192(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisItemType_t1567_m201192_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<MissionView_Main/ItemType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18015____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18015, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18015____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18015, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18015_FieldInfos[] =
{
	&InternalEnumerator_1_t18015____array_FieldInfo,
	&InternalEnumerator_1_t18015____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133361_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18015____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18015_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133361_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m133364_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18015____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18015_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m133364_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18015_PropertyInfos[] =
{
	&InternalEnumerator_1_t18015____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18015____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18015_InternalEnumerator_1__ctor_m133359_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m133359_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m133359/* method */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18015_InternalEnumerator_1__ctor_m133359_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133360_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133360/* method */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133361_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133361/* method */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m133362_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m133362/* method */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m133363_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m133363/* method */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo;
extern Il2CppType ItemType_t1567_0_0_0;
extern void* RuntimeInvoker_ItemType_t1567 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<MissionView_Main/ItemType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m133364_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m133364/* method */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* declaring_type */
	, &ItemType_t1567_0_0_0/* return_type */
	, RuntimeInvoker_ItemType_t1567/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t18015_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m133359_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133360_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133361_MethodInfo,
	&InternalEnumerator_1_Dispose_m133362_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133363_MethodInfo,
	&InternalEnumerator_1_get_Current_m133364_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133361_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m133363_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133360_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m133362_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m133364_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18015_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m133361_MethodInfo,
	&InternalEnumerator_1_MoveNext_m133363_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m133360_MethodInfo,
	&InternalEnumerator_1_Dispose_m133362_MethodInfo,
	&InternalEnumerator_1_get_Current_m133364_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27688_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18015_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27688_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27688_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18015_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27688_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18015_0_0_0;
extern Il2CppType InternalEnumerator_1_t18015_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18015_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18015_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18015_MethodInfos/* methods */
	, InternalEnumerator_1_t18015_PropertyInfos/* properties */
	, InternalEnumerator_1_t18015_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18015_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18015_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18015_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18015_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18015_1_0_0/* this_arg */
	, InternalEnumerator_1_t18015_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18015_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18015)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t32278_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>
extern MethodInfo ICollection_1_get_Count_m246867_MethodInfo;
static PropertyInfo ICollection_1_t32278____Count_PropertyInfo = 
{
	&ICollection_1_t32278_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m246867_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m246868_MethodInfo;
static PropertyInfo ICollection_1_t32278____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32278_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m246868_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32278_PropertyInfos[] =
{
	&ICollection_1_t32278____Count_PropertyInfo,
	&ICollection_1_t32278____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32278_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::get_Count()
MethodInfo ICollection_1_get_Count_m246867_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32278_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t32278_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m246868_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32278_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ItemType_t1567_0_0_0;
static ParameterInfo ICollection_1_t32278_ICollection_1_Add_m246869_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1567_0_0_0},
};
extern TypeInfo ICollection_1_t32278_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::Add(T)
MethodInfo ICollection_1_Add_m246869_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32278_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t32278_ICollection_1_Add_m246869_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32278_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::Clear()
MethodInfo ICollection_1_Clear_m246870_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32278_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ItemType_t1567_0_0_0;
static ParameterInfo ICollection_1_t32278_ICollection_1_Contains_m246871_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1567_0_0_0},
};
extern TypeInfo ICollection_1_t32278_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::Contains(T)
MethodInfo ICollection_1_Contains_m246871_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32278_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32278_ICollection_1_Contains_m246871_ParameterInfos/* parameters */
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
extern Il2CppType ItemTypeU5BU5D_t25744_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32278_ICollection_1_CopyTo_m246872_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ItemTypeU5BU5D_t25744_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32278_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m246872_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32278_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32278_ICollection_1_CopyTo_m246872_ParameterInfos/* parameters */
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
extern Il2CppType ItemType_t1567_0_0_0;
static ParameterInfo ICollection_1_t32278_ICollection_1_Remove_m246873_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ItemType_t1567_0_0_0},
};
extern TypeInfo ICollection_1_t32278_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<MissionView_Main/ItemType>::Remove(T)
MethodInfo ICollection_1_Remove_m246873_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32278_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32278_ICollection_1_Remove_m246873_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t32278_MethodInfos[] =
{
	&ICollection_1_get_Count_m246867_MethodInfo,
	&ICollection_1_get_IsReadOnly_m246868_MethodInfo,
	&ICollection_1_Add_m246869_MethodInfo,
	&ICollection_1_Clear_m246870_MethodInfo,
	&ICollection_1_Contains_m246871_MethodInfo,
	&ICollection_1_CopyTo_m246872_MethodInfo,
	&ICollection_1_Remove_m246873_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32280_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32278_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32280_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32278_0_0_0;
extern Il2CppType ICollection_1_t32278_1_0_0;
struct ICollection_1_t32278;
extern TypeInfo ICollection_1_t32278_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32278_GenericClass;
TypeInfo ICollection_1_t32278_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32278_MethodInfos/* methods */
	, ICollection_1_t32278_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32278_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32278_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32278_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32278_0_0_0/* byval_arg */
	, &ICollection_1_t32278_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32278_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t32280_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Main/ItemType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<MissionView_Main/ItemType>
extern TypeInfo IEnumerable_1_t32280_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27688_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MissionView_Main/ItemType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m246874_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32280_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27688_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t32280_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m246874_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32280_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32280_0_0_0;
extern Il2CppType IEnumerable_1_t32280_1_0_0;
struct IEnumerable_1_t32280;
extern TypeInfo IEnumerable_1_t32280_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32280_GenericClass;
TypeInfo IEnumerable_1_t32280_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32280_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32280_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32280_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32280_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32280_0_0_0/* byval_arg */
	, &IEnumerable_1_t32280_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32280_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
