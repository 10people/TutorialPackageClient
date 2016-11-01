#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_990.h"
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
extern TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_990MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// Games.GlobeDefine.CharacterDefine/MixAttr
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_MixAttr.h"
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
extern TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo;
extern TypeInfo MixAttr_t1114_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m123897_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMixAttr_t1114_m196805_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.CharacterDefine/MixAttr>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.CharacterDefine/MixAttr>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMixAttr_t1114_m196805 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMixAttr_t1114_m196805_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123892_MethodInfo;
 void InternalEnumerator_1__ctor_m123892 (InternalEnumerator_1_t16576 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123893_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123893 (InternalEnumerator_1_t16576 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123894_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123894 (InternalEnumerator_1_t16576 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123897(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123897_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MixAttr_t1114_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123895_MethodInfo;
 void InternalEnumerator_1_Dispose_m123895 (InternalEnumerator_1_t16576 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123896_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123896 (InternalEnumerator_1_t16576 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123897_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123897 (InternalEnumerator_1_t16576 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMixAttr_t1114_m196805(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMixAttr_t1114_m196805_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16576____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16576, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16576____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16576, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16576_FieldInfos[] =
{
	&InternalEnumerator_1_t16576____array_FieldInfo,
	&InternalEnumerator_1_t16576____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123894_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16576____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16576_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123894_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123897_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16576____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16576_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123897_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16576_PropertyInfos[] =
{
	&InternalEnumerator_1_t16576____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16576____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16576_InternalEnumerator_1__ctor_m123892_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123892_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123892/* method */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16576_InternalEnumerator_1__ctor_m123892_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123893_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123893/* method */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123894_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123894/* method */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123895_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123895/* method */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123896_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123896/* method */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo;
extern Il2CppType MixAttr_t1114_0_0_0;
extern void* RuntimeInvoker_MixAttr_t1114 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MixAttr>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123897_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123897/* method */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* declaring_type */
	, &MixAttr_t1114_0_0_0/* return_type */
	, RuntimeInvoker_MixAttr_t1114/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16576_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123892_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123893_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123894_MethodInfo,
	&InternalEnumerator_1_Dispose_m123895_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123896_MethodInfo,
	&InternalEnumerator_1_get_Current_m123897_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123894_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123896_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123893_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123895_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123897_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16576_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123894_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123896_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123893_MethodInfo,
	&InternalEnumerator_1_Dispose_m123895_MethodInfo,
	&InternalEnumerator_1_get_Current_m123897_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27384_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16576_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27384_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27384_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16576_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27384_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16576_0_0_0;
extern Il2CppType InternalEnumerator_1_t16576_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16576_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16576_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16576_MethodInfos/* methods */
	, InternalEnumerator_1_t16576_PropertyInfos/* properties */
	, InternalEnumerator_1_t16576_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16576_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16576_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16576_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16576_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16576_1_0_0/* this_arg */
	, InternalEnumerator_1_t16576_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16576_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16576)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;

#include "Assembly-CSharp_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>
extern MethodInfo ICollection_1_get_Count_m241905_MethodInfo;
static PropertyInfo ICollection_1_t31397____Count_PropertyInfo = 
{
	&ICollection_1_t31397_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m241905_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m241906_MethodInfo;
static PropertyInfo ICollection_1_t31397____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31397_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m241906_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31397_PropertyInfos[] =
{
	&ICollection_1_t31397____Count_PropertyInfo,
	&ICollection_1_t31397____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::get_Count()
MethodInfo ICollection_1_get_Count_m241905_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31397_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m241906_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31397_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MixAttr_t1114_0_0_0;
static ParameterInfo ICollection_1_t31397_ICollection_1_Add_m241907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MixAttr_t1114_0_0_0},
};
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Add(T)
MethodInfo ICollection_1_Add_m241907_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31397_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31397_ICollection_1_Add_m241907_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Clear()
MethodInfo ICollection_1_Clear_m241908_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31397_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MixAttr_t1114_0_0_0;
static ParameterInfo ICollection_1_t31397_ICollection_1_Contains_m241909_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MixAttr_t1114_0_0_0},
};
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Contains(T)
MethodInfo ICollection_1_Contains_m241909_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31397_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31397_ICollection_1_Contains_m241909_ParameterInfos/* parameters */
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
extern Il2CppType MixAttrU5BU5D_t25509_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31397_ICollection_1_CopyTo_m241910_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MixAttrU5BU5D_t25509_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m241910_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31397_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31397_ICollection_1_CopyTo_m241910_ParameterInfos/* parameters */
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
extern Il2CppType MixAttr_t1114_0_0_0;
static ParameterInfo ICollection_1_t31397_ICollection_1_Remove_m241911_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MixAttr_t1114_0_0_0},
};
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Remove(T)
MethodInfo ICollection_1_Remove_m241911_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31397_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31397_ICollection_1_Remove_m241911_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31397_MethodInfos[] =
{
	&ICollection_1_get_Count_m241905_MethodInfo,
	&ICollection_1_get_IsReadOnly_m241906_MethodInfo,
	&ICollection_1_Add_m241907_MethodInfo,
	&ICollection_1_Clear_m241908_MethodInfo,
	&ICollection_1_Contains_m241909_MethodInfo,
	&ICollection_1_CopyTo_m241910_MethodInfo,
	&ICollection_1_Remove_m241911_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31399_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31397_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31399_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31397_0_0_0;
extern Il2CppType ICollection_1_t31397_1_0_0;
struct ICollection_1_t31397;
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31397_GenericClass;
TypeInfo ICollection_1_t31397_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31397_MethodInfos/* methods */
	, ICollection_1_t31397_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31397_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31397_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31397_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31397_0_0_0/* byval_arg */
	, &ICollection_1_t31397_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31397_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31399_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.CharacterDefine/MixAttr>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.CharacterDefine/MixAttr>
extern TypeInfo IEnumerable_1_t31399_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27384_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.CharacterDefine/MixAttr>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m241912_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31399_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27384_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31399_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m241912_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31399_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31399_0_0_0;
extern Il2CppType IEnumerable_1_t31399_1_0_0;
struct IEnumerable_1_t31399;
extern TypeInfo IEnumerable_1_t31399_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31399_GenericClass;
TypeInfo IEnumerable_1_t31399_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31399_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31399_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31399_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31399_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31399_0_0_0/* byval_arg */
	, &IEnumerable_1_t31399_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31399_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31398_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>
extern MethodInfo IList_1_get_Item_m241913_MethodInfo;
extern MethodInfo IList_1_set_Item_m241914_MethodInfo;
static PropertyInfo IList_1_t31398____Item_PropertyInfo = 
{
	&IList_1_t31398_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m241913_MethodInfo/* get */
	, &IList_1_set_Item_m241914_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31398_PropertyInfos[] =
{
	&IList_1_t31398____Item_PropertyInfo,
	NULL
};
extern Il2CppType MixAttr_t1114_0_0_0;
static ParameterInfo IList_1_t31398_IList_1_IndexOf_m241915_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MixAttr_t1114_0_0_0},
};
extern TypeInfo IList_1_t31398_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::IndexOf(T)
MethodInfo IList_1_IndexOf_m241915_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31398_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31398_IList_1_IndexOf_m241915_ParameterInfos/* parameters */
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
extern Il2CppType MixAttr_t1114_0_0_0;
static ParameterInfo IList_1_t31398_IList_1_Insert_m241916_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MixAttr_t1114_0_0_0},
};
extern TypeInfo IList_1_t31398_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m241916_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31398_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31398_IList_1_Insert_m241916_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31398_IList_1_RemoveAt_m241917_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31398_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m241917_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31398_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31398_IList_1_RemoveAt_m241917_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31398_IList_1_get_Item_m241913_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31398_il2cpp_TypeInfo;
extern Il2CppType MixAttr_t1114_0_0_0;
extern void* RuntimeInvoker_MixAttr_t1114_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m241913_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31398_il2cpp_TypeInfo/* declaring_type */
	, &MixAttr_t1114_0_0_0/* return_type */
	, RuntimeInvoker_MixAttr_t1114_Int32_t73/* invoker_method */
	, IList_1_t31398_IList_1_get_Item_m241913_ParameterInfos/* parameters */
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
extern Il2CppType MixAttr_t1114_0_0_0;
static ParameterInfo IList_1_t31398_IList_1_set_Item_m241914_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MixAttr_t1114_0_0_0},
};
extern TypeInfo IList_1_t31398_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MixAttr>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m241914_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31398_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31398_IList_1_set_Item_m241914_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31398_MethodInfos[] =
{
	&IList_1_IndexOf_m241915_MethodInfo,
	&IList_1_Insert_m241916_MethodInfo,
	&IList_1_RemoveAt_m241917_MethodInfo,
	&IList_1_get_Item_m241913_MethodInfo,
	&IList_1_set_Item_m241914_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31397_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31399_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31398_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31397_il2cpp_TypeInfo,
	&IEnumerable_1_t31399_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31398_0_0_0;
extern Il2CppType IList_1_t31398_1_0_0;
struct IList_1_t31398;
extern TypeInfo IList_1_t31398_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31398_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31398_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31398_MethodInfos/* methods */
	, IList_1_t31398_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31398_il2cpp_TypeInfo/* element_class */
	, IList_1_t31398_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31398_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31398_0_0_0/* byval_arg */
	, &IList_1_t31398_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31398_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27385_il2cpp_TypeInfo;

// Games.GlobeDefine.CharacterDefine/MountAction
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_MountAct.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>
extern MethodInfo IEnumerator_1_get_Current_m241918_MethodInfo;
static PropertyInfo IEnumerator_1_t27385____Current_PropertyInfo = 
{
	&IEnumerator_1_t27385_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m241918_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27385_PropertyInfos[] =
{
	&IEnumerator_1_t27385____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27385_il2cpp_TypeInfo;
extern Il2CppType MountAction_t1115_0_0_0;
extern void* RuntimeInvoker_MountAction_t1115 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_Current()
MethodInfo IEnumerator_1_get_Current_m241918_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27385_il2cpp_TypeInfo/* declaring_type */
	, &MountAction_t1115_0_0_0/* return_type */
	, RuntimeInvoker_MountAction_t1115/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27385_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m241918_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27385_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27385_0_0_0;
extern Il2CppType IEnumerator_1_t27385_1_0_0;
struct IEnumerator_1_t27385;
extern TypeInfo IEnumerator_1_t27385_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27385_GenericClass;
TypeInfo IEnumerator_1_t27385_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27385_MethodInfos/* methods */
	, IEnumerator_1_t27385_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27385_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27385_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27385_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27385_0_0_0/* byval_arg */
	, &IEnumerator_1_t27385_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27385_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_991.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_991MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo;
extern TypeInfo MountAction_t1115_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123903_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMountAction_t1115_m196816_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.CharacterDefine/MountAction>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.CharacterDefine/MountAction>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMountAction_t1115_m196816 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMountAction_t1115_m196816_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123898_MethodInfo;
 void InternalEnumerator_1__ctor_m123898 (InternalEnumerator_1_t16577 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123899_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123899 (InternalEnumerator_1_t16577 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123900_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123900 (InternalEnumerator_1_t16577 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123903(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123903_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MountAction_t1115_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123901_MethodInfo;
 void InternalEnumerator_1_Dispose_m123901 (InternalEnumerator_1_t16577 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123902_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123902 (InternalEnumerator_1_t16577 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123903_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123903 (InternalEnumerator_1_t16577 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMountAction_t1115_m196816(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMountAction_t1115_m196816_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16577____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16577, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16577____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16577, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16577_FieldInfos[] =
{
	&InternalEnumerator_1_t16577____array_FieldInfo,
	&InternalEnumerator_1_t16577____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123900_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16577____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16577_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123903_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16577____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16577_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123903_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16577_PropertyInfos[] =
{
	&InternalEnumerator_1_t16577____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16577____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16577_InternalEnumerator_1__ctor_m123898_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123898_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123898/* method */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16577_InternalEnumerator_1__ctor_m123898_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123899_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123899/* method */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123900_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123900/* method */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123901_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123901/* method */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123902_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123902/* method */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo;
extern Il2CppType MountAction_t1115_0_0_0;
extern void* RuntimeInvoker_MountAction_t1115 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123903_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123903/* method */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* declaring_type */
	, &MountAction_t1115_0_0_0/* return_type */
	, RuntimeInvoker_MountAction_t1115/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16577_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123898_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123899_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123900_MethodInfo,
	&InternalEnumerator_1_Dispose_m123901_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123902_MethodInfo,
	&InternalEnumerator_1_get_Current_m123903_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123900_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123902_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123899_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123901_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123903_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16577_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123900_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123902_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123899_MethodInfo,
	&InternalEnumerator_1_Dispose_m123901_MethodInfo,
	&InternalEnumerator_1_get_Current_m123903_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27385_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16577_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27385_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27385_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16577_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27385_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16577_0_0_0;
extern Il2CppType InternalEnumerator_1_t16577_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16577_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16577_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16577_MethodInfos/* methods */
	, InternalEnumerator_1_t16577_PropertyInfos/* properties */
	, InternalEnumerator_1_t16577_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16577_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16577_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16577_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16577_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16577_1_0_0/* this_arg */
	, InternalEnumerator_1_t16577_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16577_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16577)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>
extern MethodInfo ICollection_1_get_Count_m241919_MethodInfo;
static PropertyInfo ICollection_1_t31400____Count_PropertyInfo = 
{
	&ICollection_1_t31400_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m241919_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m241920_MethodInfo;
static PropertyInfo ICollection_1_t31400____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31400_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m241920_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31400_PropertyInfos[] =
{
	&ICollection_1_t31400____Count_PropertyInfo,
	&ICollection_1_t31400____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_Count()
MethodInfo ICollection_1_get_Count_m241919_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31400_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m241920_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31400_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MountAction_t1115_0_0_0;
static ParameterInfo ICollection_1_t31400_ICollection_1_Add_m241921_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MountAction_t1115_0_0_0},
};
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::Add(T)
MethodInfo ICollection_1_Add_m241921_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31400_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31400_ICollection_1_Add_m241921_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::Clear()
MethodInfo ICollection_1_Clear_m241922_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31400_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MountAction_t1115_0_0_0;
static ParameterInfo ICollection_1_t31400_ICollection_1_Contains_m241923_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MountAction_t1115_0_0_0},
};
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::Contains(T)
MethodInfo ICollection_1_Contains_m241923_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31400_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31400_ICollection_1_Contains_m241923_ParameterInfos/* parameters */
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
extern Il2CppType MountActionU5BU5D_t25510_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31400_ICollection_1_CopyTo_m241924_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MountActionU5BU5D_t25510_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m241924_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31400_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31400_ICollection_1_CopyTo_m241924_ParameterInfos/* parameters */
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
extern Il2CppType MountAction_t1115_0_0_0;
static ParameterInfo ICollection_1_t31400_ICollection_1_Remove_m241925_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MountAction_t1115_0_0_0},
};
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.CharacterDefine/MountAction>::Remove(T)
MethodInfo ICollection_1_Remove_m241925_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31400_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31400_ICollection_1_Remove_m241925_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31400_MethodInfos[] =
{
	&ICollection_1_get_Count_m241919_MethodInfo,
	&ICollection_1_get_IsReadOnly_m241920_MethodInfo,
	&ICollection_1_Add_m241921_MethodInfo,
	&ICollection_1_Clear_m241922_MethodInfo,
	&ICollection_1_Contains_m241923_MethodInfo,
	&ICollection_1_CopyTo_m241924_MethodInfo,
	&ICollection_1_Remove_m241925_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31402_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31400_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31402_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31400_0_0_0;
extern Il2CppType ICollection_1_t31400_1_0_0;
struct ICollection_1_t31400;
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31400_GenericClass;
TypeInfo ICollection_1_t31400_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31400_MethodInfos/* methods */
	, ICollection_1_t31400_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31400_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31400_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31400_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31400_0_0_0/* byval_arg */
	, &ICollection_1_t31400_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31400_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31402_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.CharacterDefine/MountAction>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.CharacterDefine/MountAction>
extern TypeInfo IEnumerable_1_t31402_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27385_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.CharacterDefine/MountAction>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m241926_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31402_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27385_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31402_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m241926_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31402_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31402_0_0_0;
extern Il2CppType IEnumerable_1_t31402_1_0_0;
struct IEnumerable_1_t31402;
extern TypeInfo IEnumerable_1_t31402_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31402_GenericClass;
TypeInfo IEnumerable_1_t31402_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31402_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31402_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31402_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31402_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31402_0_0_0/* byval_arg */
	, &IEnumerable_1_t31402_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31402_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31401_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>
extern MethodInfo IList_1_get_Item_m241927_MethodInfo;
extern MethodInfo IList_1_set_Item_m241928_MethodInfo;
static PropertyInfo IList_1_t31401____Item_PropertyInfo = 
{
	&IList_1_t31401_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m241927_MethodInfo/* get */
	, &IList_1_set_Item_m241928_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31401_PropertyInfos[] =
{
	&IList_1_t31401____Item_PropertyInfo,
	NULL
};
extern Il2CppType MountAction_t1115_0_0_0;
static ParameterInfo IList_1_t31401_IList_1_IndexOf_m241929_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MountAction_t1115_0_0_0},
};
extern TypeInfo IList_1_t31401_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::IndexOf(T)
MethodInfo IList_1_IndexOf_m241929_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31401_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31401_IList_1_IndexOf_m241929_ParameterInfos/* parameters */
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
extern Il2CppType MountAction_t1115_0_0_0;
static ParameterInfo IList_1_t31401_IList_1_Insert_m241930_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MountAction_t1115_0_0_0},
};
extern TypeInfo IList_1_t31401_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m241930_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31401_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31401_IList_1_Insert_m241930_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31401_IList_1_RemoveAt_m241931_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31401_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m241931_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31401_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31401_IList_1_RemoveAt_m241931_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31401_IList_1_get_Item_m241927_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31401_il2cpp_TypeInfo;
extern Il2CppType MountAction_t1115_0_0_0;
extern void* RuntimeInvoker_MountAction_t1115_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m241927_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31401_il2cpp_TypeInfo/* declaring_type */
	, &MountAction_t1115_0_0_0/* return_type */
	, RuntimeInvoker_MountAction_t1115_Int32_t73/* invoker_method */
	, IList_1_t31401_IList_1_get_Item_m241927_ParameterInfos/* parameters */
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
extern Il2CppType MountAction_t1115_0_0_0;
static ParameterInfo IList_1_t31401_IList_1_set_Item_m241928_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MountAction_t1115_0_0_0},
};
extern TypeInfo IList_1_t31401_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.CharacterDefine/MountAction>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m241928_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31401_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31401_IList_1_set_Item_m241928_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31401_MethodInfos[] =
{
	&IList_1_IndexOf_m241929_MethodInfo,
	&IList_1_Insert_m241930_MethodInfo,
	&IList_1_RemoveAt_m241931_MethodInfo,
	&IList_1_get_Item_m241927_MethodInfo,
	&IList_1_set_Item_m241928_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31400_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31402_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31401_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31400_il2cpp_TypeInfo,
	&IEnumerable_1_t31402_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31401_0_0_0;
extern Il2CppType IList_1_t31401_1_0_0;
struct IList_1_t31401;
extern TypeInfo IList_1_t31401_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31401_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31401_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31401_MethodInfos/* methods */
	, IList_1_t31401_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31401_il2cpp_TypeInfo/* element_class */
	, IList_1_t31401_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31401_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31401_0_0_0/* byval_arg */
	, &IList_1_t31401_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31401_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27386_il2cpp_TypeInfo;

// OutputVersionDefs
#include "AssemblyU2DCSharp_OutputVersionDefs.h"


// T System.Collections.Generic.IEnumerator`1<OutputVersionDefs>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<OutputVersionDefs>
extern MethodInfo IEnumerator_1_get_Current_m241932_MethodInfo;
static PropertyInfo IEnumerator_1_t27386____Current_PropertyInfo = 
{
	&IEnumerator_1_t27386_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m241932_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27386_PropertyInfos[] =
{
	&IEnumerator_1_t27386____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27386_il2cpp_TypeInfo;
extern Il2CppType OutputVersionDefs_t1118_0_0_0;
extern void* RuntimeInvoker_OutputVersionDefs_t1118 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<OutputVersionDefs>::get_Current()
MethodInfo IEnumerator_1_get_Current_m241932_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27386_il2cpp_TypeInfo/* declaring_type */
	, &OutputVersionDefs_t1118_0_0_0/* return_type */
	, RuntimeInvoker_OutputVersionDefs_t1118/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27386_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m241932_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27386_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27386_0_0_0;
extern Il2CppType IEnumerator_1_t27386_1_0_0;
struct IEnumerator_1_t27386;
extern TypeInfo IEnumerator_1_t27386_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27386_GenericClass;
TypeInfo IEnumerator_1_t27386_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27386_MethodInfos/* methods */
	, IEnumerator_1_t27386_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27386_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27386_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27386_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27386_0_0_0/* byval_arg */
	, &IEnumerator_1_t27386_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27386_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<OutputVersionDefs>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_992.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<OutputVersionDefs>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_992MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo;
extern TypeInfo OutputVersionDefs_t1118_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123909_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOutputVersionDefs_t1118_m196827_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<OutputVersionDefs>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<OutputVersionDefs>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOutputVersionDefs_t1118_m196827 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOutputVersionDefs_t1118_m196827_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<OutputVersionDefs>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123904_MethodInfo;
 void InternalEnumerator_1__ctor_m123904 (InternalEnumerator_1_t16578 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<OutputVersionDefs>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123905_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123905 (InternalEnumerator_1_t16578 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<OutputVersionDefs>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123906_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123906 (InternalEnumerator_1_t16578 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123909(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123909_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OutputVersionDefs_t1118_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<OutputVersionDefs>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123907_MethodInfo;
 void InternalEnumerator_1_Dispose_m123907 (InternalEnumerator_1_t16578 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<OutputVersionDefs>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123908_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123908 (InternalEnumerator_1_t16578 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<OutputVersionDefs>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123909_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123909 (InternalEnumerator_1_t16578 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisOutputVersionDefs_t1118_m196827(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOutputVersionDefs_t1118_m196827_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<OutputVersionDefs>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16578____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16578, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16578____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16578, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16578_FieldInfos[] =
{
	&InternalEnumerator_1_t16578____array_FieldInfo,
	&InternalEnumerator_1_t16578____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123906_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16578____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16578_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123906_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123909_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16578____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16578_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123909_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16578_PropertyInfos[] =
{
	&InternalEnumerator_1_t16578____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16578____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16578_InternalEnumerator_1__ctor_m123904_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<OutputVersionDefs>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123904_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123904/* method */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16578_InternalEnumerator_1__ctor_m123904_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<OutputVersionDefs>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123905_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123905/* method */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<OutputVersionDefs>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123906_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123906/* method */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<OutputVersionDefs>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123907_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123907/* method */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<OutputVersionDefs>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123908_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123908/* method */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo;
extern Il2CppType OutputVersionDefs_t1118_0_0_0;
extern void* RuntimeInvoker_OutputVersionDefs_t1118 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<OutputVersionDefs>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123909_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123909/* method */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* declaring_type */
	, &OutputVersionDefs_t1118_0_0_0/* return_type */
	, RuntimeInvoker_OutputVersionDefs_t1118/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16578_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123904_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123905_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123906_MethodInfo,
	&InternalEnumerator_1_Dispose_m123907_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123908_MethodInfo,
	&InternalEnumerator_1_get_Current_m123909_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123906_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123908_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123905_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123907_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123909_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16578_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123906_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123908_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123905_MethodInfo,
	&InternalEnumerator_1_Dispose_m123907_MethodInfo,
	&InternalEnumerator_1_get_Current_m123909_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27386_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16578_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27386_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27386_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16578_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27386_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16578_0_0_0;
extern Il2CppType InternalEnumerator_1_t16578_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16578_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16578_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16578_MethodInfos/* methods */
	, InternalEnumerator_1_t16578_PropertyInfos/* properties */
	, InternalEnumerator_1_t16578_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16578_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16578_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16578_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16578_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16578_1_0_0/* this_arg */
	, InternalEnumerator_1_t16578_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16578_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16578)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<OutputVersionDefs>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<OutputVersionDefs>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<OutputVersionDefs>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<OutputVersionDefs>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<OutputVersionDefs>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<OutputVersionDefs>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<OutputVersionDefs>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<OutputVersionDefs>
extern MethodInfo ICollection_1_get_Count_m241933_MethodInfo;
static PropertyInfo ICollection_1_t31403____Count_PropertyInfo = 
{
	&ICollection_1_t31403_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m241933_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m241934_MethodInfo;
static PropertyInfo ICollection_1_t31403____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31403_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m241934_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31403_PropertyInfos[] =
{
	&ICollection_1_t31403____Count_PropertyInfo,
	&ICollection_1_t31403____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<OutputVersionDefs>::get_Count()
MethodInfo ICollection_1_get_Count_m241933_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31403_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<OutputVersionDefs>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m241934_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31403_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType OutputVersionDefs_t1118_0_0_0;
static ParameterInfo ICollection_1_t31403_ICollection_1_Add_m241935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutputVersionDefs_t1118_0_0_0},
};
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<OutputVersionDefs>::Add(T)
MethodInfo ICollection_1_Add_m241935_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31403_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31403_ICollection_1_Add_m241935_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<OutputVersionDefs>::Clear()
MethodInfo ICollection_1_Clear_m241936_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31403_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType OutputVersionDefs_t1118_0_0_0;
static ParameterInfo ICollection_1_t31403_ICollection_1_Contains_m241937_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutputVersionDefs_t1118_0_0_0},
};
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<OutputVersionDefs>::Contains(T)
MethodInfo ICollection_1_Contains_m241937_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31403_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31403_ICollection_1_Contains_m241937_ParameterInfos/* parameters */
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
extern Il2CppType OutputVersionDefsU5BU5D_t25511_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31403_ICollection_1_CopyTo_m241938_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OutputVersionDefsU5BU5D_t25511_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<OutputVersionDefs>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m241938_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31403_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31403_ICollection_1_CopyTo_m241938_ParameterInfos/* parameters */
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
extern Il2CppType OutputVersionDefs_t1118_0_0_0;
static ParameterInfo ICollection_1_t31403_ICollection_1_Remove_m241939_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutputVersionDefs_t1118_0_0_0},
};
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<OutputVersionDefs>::Remove(T)
MethodInfo ICollection_1_Remove_m241939_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31403_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31403_ICollection_1_Remove_m241939_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31403_MethodInfos[] =
{
	&ICollection_1_get_Count_m241933_MethodInfo,
	&ICollection_1_get_IsReadOnly_m241934_MethodInfo,
	&ICollection_1_Add_m241935_MethodInfo,
	&ICollection_1_Clear_m241936_MethodInfo,
	&ICollection_1_Contains_m241937_MethodInfo,
	&ICollection_1_CopyTo_m241938_MethodInfo,
	&ICollection_1_Remove_m241939_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31405_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31403_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31405_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31403_0_0_0;
extern Il2CppType ICollection_1_t31403_1_0_0;
struct ICollection_1_t31403;
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31403_GenericClass;
TypeInfo ICollection_1_t31403_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31403_MethodInfos/* methods */
	, ICollection_1_t31403_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31403_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31403_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31403_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31403_0_0_0/* byval_arg */
	, &ICollection_1_t31403_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31403_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31405_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<OutputVersionDefs>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<OutputVersionDefs>
extern TypeInfo IEnumerable_1_t31405_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27386_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<OutputVersionDefs>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m241940_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31405_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27386_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31405_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m241940_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31405_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31405_0_0_0;
extern Il2CppType IEnumerable_1_t31405_1_0_0;
struct IEnumerable_1_t31405;
extern TypeInfo IEnumerable_1_t31405_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31405_GenericClass;
TypeInfo IEnumerable_1_t31405_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31405_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31405_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31405_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31405_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31405_0_0_0/* byval_arg */
	, &IEnumerable_1_t31405_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31405_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31404_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<OutputVersionDefs>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<OutputVersionDefs>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<OutputVersionDefs>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<OutputVersionDefs>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<OutputVersionDefs>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<OutputVersionDefs>
extern MethodInfo IList_1_get_Item_m241941_MethodInfo;
extern MethodInfo IList_1_set_Item_m241942_MethodInfo;
static PropertyInfo IList_1_t31404____Item_PropertyInfo = 
{
	&IList_1_t31404_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m241941_MethodInfo/* get */
	, &IList_1_set_Item_m241942_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31404_PropertyInfos[] =
{
	&IList_1_t31404____Item_PropertyInfo,
	NULL
};
extern Il2CppType OutputVersionDefs_t1118_0_0_0;
static ParameterInfo IList_1_t31404_IList_1_IndexOf_m241943_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutputVersionDefs_t1118_0_0_0},
};
extern TypeInfo IList_1_t31404_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<OutputVersionDefs>::IndexOf(T)
MethodInfo IList_1_IndexOf_m241943_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31404_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31404_IList_1_IndexOf_m241943_ParameterInfos/* parameters */
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
extern Il2CppType OutputVersionDefs_t1118_0_0_0;
static ParameterInfo IList_1_t31404_IList_1_Insert_m241944_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OutputVersionDefs_t1118_0_0_0},
};
extern TypeInfo IList_1_t31404_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<OutputVersionDefs>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m241944_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31404_IList_1_Insert_m241944_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31404_IList_1_RemoveAt_m241945_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31404_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<OutputVersionDefs>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m241945_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31404_IList_1_RemoveAt_m241945_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31404_IList_1_get_Item_m241941_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31404_il2cpp_TypeInfo;
extern Il2CppType OutputVersionDefs_t1118_0_0_0;
extern void* RuntimeInvoker_OutputVersionDefs_t1118_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<OutputVersionDefs>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m241941_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31404_il2cpp_TypeInfo/* declaring_type */
	, &OutputVersionDefs_t1118_0_0_0/* return_type */
	, RuntimeInvoker_OutputVersionDefs_t1118_Int32_t73/* invoker_method */
	, IList_1_t31404_IList_1_get_Item_m241941_ParameterInfos/* parameters */
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
extern Il2CppType OutputVersionDefs_t1118_0_0_0;
static ParameterInfo IList_1_t31404_IList_1_set_Item_m241942_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OutputVersionDefs_t1118_0_0_0},
};
extern TypeInfo IList_1_t31404_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<OutputVersionDefs>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m241942_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31404_IList_1_set_Item_m241942_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31404_MethodInfos[] =
{
	&IList_1_IndexOf_m241943_MethodInfo,
	&IList_1_Insert_m241944_MethodInfo,
	&IList_1_RemoveAt_m241945_MethodInfo,
	&IList_1_get_Item_m241941_MethodInfo,
	&IList_1_set_Item_m241942_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31403_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31405_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31404_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31403_il2cpp_TypeInfo,
	&IEnumerable_1_t31405_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31404_0_0_0;
extern Il2CppType IList_1_t31404_1_0_0;
struct IList_1_t31404;
extern TypeInfo IList_1_t31404_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31404_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31404_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31404_MethodInfos/* methods */
	, IList_1_t31404_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31404_il2cpp_TypeInfo/* element_class */
	, IList_1_t31404_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31404_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31404_0_0_0/* byval_arg */
	, &IList_1_t31404_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31404_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27387_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/GAMESTATUS
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_GAMESTA.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>
extern MethodInfo IEnumerator_1_get_Current_m241946_MethodInfo;
static PropertyInfo IEnumerator_1_t27387____Current_PropertyInfo = 
{
	&IEnumerator_1_t27387_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m241946_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27387_PropertyInfos[] =
{
	&IEnumerator_1_t27387____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27387_il2cpp_TypeInfo;
extern Il2CppType GAMESTATUS_t1120_0_0_0;
extern void* RuntimeInvoker_GAMESTATUS_t1120 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_Current()
MethodInfo IEnumerator_1_get_Current_m241946_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27387_il2cpp_TypeInfo/* declaring_type */
	, &GAMESTATUS_t1120_0_0_0/* return_type */
	, RuntimeInvoker_GAMESTATUS_t1120/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27387_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m241946_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27387_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27387_0_0_0;
extern Il2CppType IEnumerator_1_t27387_1_0_0;
struct IEnumerator_1_t27387;
extern TypeInfo IEnumerator_1_t27387_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27387_GenericClass;
TypeInfo IEnumerator_1_t27387_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27387_MethodInfos/* methods */
	, IEnumerator_1_t27387_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27387_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27387_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27387_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27387_0_0_0/* byval_arg */
	, &IEnumerator_1_t27387_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27387_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_993.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_993MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo;
extern TypeInfo GAMESTATUS_t1120_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123915_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGAMESTATUS_t1120_m196838_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisGAMESTATUS_t1120_m196838 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisGAMESTATUS_t1120_m196838_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123910_MethodInfo;
 void InternalEnumerator_1__ctor_m123910 (InternalEnumerator_1_t16579 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123911_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123911 (InternalEnumerator_1_t16579 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123912_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123912 (InternalEnumerator_1_t16579 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123915(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123915_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&GAMESTATUS_t1120_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123913_MethodInfo;
 void InternalEnumerator_1_Dispose_m123913 (InternalEnumerator_1_t16579 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123914_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123914 (InternalEnumerator_1_t16579 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123915_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123915 (InternalEnumerator_1_t16579 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisGAMESTATUS_t1120_m196838(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisGAMESTATUS_t1120_m196838_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16579____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16579, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16579____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16579, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16579_FieldInfos[] =
{
	&InternalEnumerator_1_t16579____array_FieldInfo,
	&InternalEnumerator_1_t16579____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123912_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16579____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16579_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123912_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123915_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16579____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16579_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123915_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16579_PropertyInfos[] =
{
	&InternalEnumerator_1_t16579____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16579____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16579_InternalEnumerator_1__ctor_m123910_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123910_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123910/* method */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16579_InternalEnumerator_1__ctor_m123910_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123911_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123911/* method */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123912_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123912/* method */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123913_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123913/* method */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123914_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123914/* method */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo;
extern Il2CppType GAMESTATUS_t1120_0_0_0;
extern void* RuntimeInvoker_GAMESTATUS_t1120 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123915_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123915/* method */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* declaring_type */
	, &GAMESTATUS_t1120_0_0_0/* return_type */
	, RuntimeInvoker_GAMESTATUS_t1120/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16579_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123910_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123911_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123912_MethodInfo,
	&InternalEnumerator_1_Dispose_m123913_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123914_MethodInfo,
	&InternalEnumerator_1_get_Current_m123915_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123912_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123914_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123911_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123913_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123915_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16579_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123912_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123914_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123911_MethodInfo,
	&InternalEnumerator_1_Dispose_m123913_MethodInfo,
	&InternalEnumerator_1_get_Current_m123915_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27387_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16579_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27387_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27387_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16579_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27387_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16579_0_0_0;
extern Il2CppType InternalEnumerator_1_t16579_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16579_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16579_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16579_MethodInfos/* methods */
	, InternalEnumerator_1_t16579_PropertyInfos/* properties */
	, InternalEnumerator_1_t16579_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16579_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16579_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16579_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16579_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16579_1_0_0/* this_arg */
	, InternalEnumerator_1_t16579_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16579_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16579)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>
extern MethodInfo ICollection_1_get_Count_m241947_MethodInfo;
static PropertyInfo ICollection_1_t31406____Count_PropertyInfo = 
{
	&ICollection_1_t31406_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m241947_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m241948_MethodInfo;
static PropertyInfo ICollection_1_t31406____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31406_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m241948_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31406_PropertyInfos[] =
{
	&ICollection_1_t31406____Count_PropertyInfo,
	&ICollection_1_t31406____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_Count()
MethodInfo ICollection_1_get_Count_m241947_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31406_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m241948_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31406_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GAMESTATUS_t1120_0_0_0;
static ParameterInfo ICollection_1_t31406_ICollection_1_Add_m241949_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GAMESTATUS_t1120_0_0_0},
};
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Add(T)
MethodInfo ICollection_1_Add_m241949_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31406_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31406_ICollection_1_Add_m241949_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Clear()
MethodInfo ICollection_1_Clear_m241950_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31406_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GAMESTATUS_t1120_0_0_0;
static ParameterInfo ICollection_1_t31406_ICollection_1_Contains_m241951_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GAMESTATUS_t1120_0_0_0},
};
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Contains(T)
MethodInfo ICollection_1_Contains_m241951_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31406_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31406_ICollection_1_Contains_m241951_ParameterInfos/* parameters */
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
extern Il2CppType GAMESTATUSU5BU5D_t25512_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31406_ICollection_1_CopyTo_m241952_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GAMESTATUSU5BU5D_t25512_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m241952_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31406_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31406_ICollection_1_CopyTo_m241952_ParameterInfos/* parameters */
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
extern Il2CppType GAMESTATUS_t1120_0_0_0;
static ParameterInfo ICollection_1_t31406_ICollection_1_Remove_m241953_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GAMESTATUS_t1120_0_0_0},
};
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Remove(T)
MethodInfo ICollection_1_Remove_m241953_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31406_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31406_ICollection_1_Remove_m241953_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31406_MethodInfos[] =
{
	&ICollection_1_get_Count_m241947_MethodInfo,
	&ICollection_1_get_IsReadOnly_m241948_MethodInfo,
	&ICollection_1_Add_m241949_MethodInfo,
	&ICollection_1_Clear_m241950_MethodInfo,
	&ICollection_1_Contains_m241951_MethodInfo,
	&ICollection_1_CopyTo_m241952_MethodInfo,
	&ICollection_1_Remove_m241953_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31408_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31406_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31408_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31406_0_0_0;
extern Il2CppType ICollection_1_t31406_1_0_0;
struct ICollection_1_t31406;
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31406_GenericClass;
TypeInfo ICollection_1_t31406_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31406_MethodInfos/* methods */
	, ICollection_1_t31406_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31406_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31406_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31406_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31406_0_0_0/* byval_arg */
	, &ICollection_1_t31406_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31406_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31408_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>
extern TypeInfo IEnumerable_1_t31408_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27387_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m241954_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31408_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27387_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31408_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m241954_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31408_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31408_0_0_0;
extern Il2CppType IEnumerable_1_t31408_1_0_0;
struct IEnumerable_1_t31408;
extern TypeInfo IEnumerable_1_t31408_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31408_GenericClass;
TypeInfo IEnumerable_1_t31408_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31408_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31408_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31408_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31408_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31408_0_0_0/* byval_arg */
	, &IEnumerable_1_t31408_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31408_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31407_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>
extern MethodInfo IList_1_get_Item_m241955_MethodInfo;
extern MethodInfo IList_1_set_Item_m241956_MethodInfo;
static PropertyInfo IList_1_t31407____Item_PropertyInfo = 
{
	&IList_1_t31407_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m241955_MethodInfo/* get */
	, &IList_1_set_Item_m241956_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31407_PropertyInfos[] =
{
	&IList_1_t31407____Item_PropertyInfo,
	NULL
};
extern Il2CppType GAMESTATUS_t1120_0_0_0;
static ParameterInfo IList_1_t31407_IList_1_IndexOf_m241957_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GAMESTATUS_t1120_0_0_0},
};
extern TypeInfo IList_1_t31407_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::IndexOf(T)
MethodInfo IList_1_IndexOf_m241957_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31407_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31407_IList_1_IndexOf_m241957_ParameterInfos/* parameters */
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
extern Il2CppType GAMESTATUS_t1120_0_0_0;
static ParameterInfo IList_1_t31407_IList_1_Insert_m241958_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GAMESTATUS_t1120_0_0_0},
};
extern TypeInfo IList_1_t31407_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m241958_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31407_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31407_IList_1_Insert_m241958_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31407_IList_1_RemoveAt_m241959_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31407_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m241959_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31407_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31407_IList_1_RemoveAt_m241959_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31407_IList_1_get_Item_m241955_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31407_il2cpp_TypeInfo;
extern Il2CppType GAMESTATUS_t1120_0_0_0;
extern void* RuntimeInvoker_GAMESTATUS_t1120_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m241955_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31407_il2cpp_TypeInfo/* declaring_type */
	, &GAMESTATUS_t1120_0_0_0/* return_type */
	, RuntimeInvoker_GAMESTATUS_t1120_Int32_t73/* invoker_method */
	, IList_1_t31407_IList_1_get_Item_m241955_ParameterInfos/* parameters */
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
extern Il2CppType GAMESTATUS_t1120_0_0_0;
static ParameterInfo IList_1_t31407_IList_1_set_Item_m241956_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GAMESTATUS_t1120_0_0_0},
};
extern TypeInfo IList_1_t31407_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GAMESTATUS>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m241956_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31407_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31407_IList_1_set_Item_m241956_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31407_MethodInfos[] =
{
	&IList_1_IndexOf_m241957_MethodInfo,
	&IList_1_Insert_m241958_MethodInfo,
	&IList_1_RemoveAt_m241959_MethodInfo,
	&IList_1_get_Item_m241955_MethodInfo,
	&IList_1_set_Item_m241956_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31406_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31408_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31407_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31406_il2cpp_TypeInfo,
	&IEnumerable_1_t31408_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31407_0_0_0;
extern Il2CppType IList_1_t31407_1_0_0;
struct IList_1_t31407;
extern TypeInfo IList_1_t31407_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31407_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31407_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31407_MethodInfos/* methods */
	, IList_1_t31407_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31407_il2cpp_TypeInfo/* element_class */
	, IList_1_t31407_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31407_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31407_0_0_0/* byval_arg */
	, &IList_1_t31407_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31407_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27388_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_TYP.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m241960_MethodInfo;
static PropertyInfo IEnumerator_1_t27388____Current_PropertyInfo = 
{
	&IEnumerator_1_t27388_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m241960_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27388_PropertyInfos[] =
{
	&IEnumerator_1_t27388____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27388_il2cpp_TypeInfo;
extern Il2CppType OBJ_TYPE_t1121_0_0_0;
extern void* RuntimeInvoker_OBJ_TYPE_t1121 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m241960_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27388_il2cpp_TypeInfo/* declaring_type */
	, &OBJ_TYPE_t1121_0_0_0/* return_type */
	, RuntimeInvoker_OBJ_TYPE_t1121/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27388_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m241960_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27388_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27388_0_0_0;
extern Il2CppType IEnumerator_1_t27388_1_0_0;
struct IEnumerator_1_t27388;
extern TypeInfo IEnumerator_1_t27388_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27388_GenericClass;
TypeInfo IEnumerator_1_t27388_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27388_MethodInfos/* methods */
	, IEnumerator_1_t27388_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27388_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27388_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27388_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27388_0_0_0/* byval_arg */
	, &IEnumerator_1_t27388_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27388_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_994.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_994MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo;
extern TypeInfo OBJ_TYPE_t1121_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123921_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOBJ_TYPE_t1121_m196849_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOBJ_TYPE_t1121_m196849 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOBJ_TYPE_t1121_m196849_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123916_MethodInfo;
 void InternalEnumerator_1__ctor_m123916 (InternalEnumerator_1_t16580 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123917_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123917 (InternalEnumerator_1_t16580 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123918_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123918 (InternalEnumerator_1_t16580 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123921(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123921_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OBJ_TYPE_t1121_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123919_MethodInfo;
 void InternalEnumerator_1_Dispose_m123919 (InternalEnumerator_1_t16580 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123920_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123920 (InternalEnumerator_1_t16580 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123921_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123921 (InternalEnumerator_1_t16580 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisOBJ_TYPE_t1121_m196849(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOBJ_TYPE_t1121_m196849_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16580____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16580, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16580____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16580, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16580_FieldInfos[] =
{
	&InternalEnumerator_1_t16580____array_FieldInfo,
	&InternalEnumerator_1_t16580____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123918_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16580____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16580_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123918_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123921_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16580____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16580_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123921_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16580_PropertyInfos[] =
{
	&InternalEnumerator_1_t16580____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16580____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16580_InternalEnumerator_1__ctor_m123916_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123916_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123916/* method */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16580_InternalEnumerator_1__ctor_m123916_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123917_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123917/* method */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123918_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123918/* method */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123919_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123919/* method */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123920_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123920/* method */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo;
extern Il2CppType OBJ_TYPE_t1121_0_0_0;
extern void* RuntimeInvoker_OBJ_TYPE_t1121 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123921_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123921/* method */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* declaring_type */
	, &OBJ_TYPE_t1121_0_0_0/* return_type */
	, RuntimeInvoker_OBJ_TYPE_t1121/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16580_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123916_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123917_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123918_MethodInfo,
	&InternalEnumerator_1_Dispose_m123919_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123920_MethodInfo,
	&InternalEnumerator_1_get_Current_m123921_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123918_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123920_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123917_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123919_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123921_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16580_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123918_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123920_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123917_MethodInfo,
	&InternalEnumerator_1_Dispose_m123919_MethodInfo,
	&InternalEnumerator_1_get_Current_m123921_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27388_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16580_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27388_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27388_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16580_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27388_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16580_0_0_0;
extern Il2CppType InternalEnumerator_1_t16580_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16580_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16580_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16580_MethodInfos/* methods */
	, InternalEnumerator_1_t16580_PropertyInfos/* properties */
	, InternalEnumerator_1_t16580_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16580_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16580_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16580_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16580_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16580_1_0_0/* this_arg */
	, InternalEnumerator_1_t16580_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16580_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16580)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>
extern MethodInfo ICollection_1_get_Count_m241961_MethodInfo;
static PropertyInfo ICollection_1_t31409____Count_PropertyInfo = 
{
	&ICollection_1_t31409_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m241961_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m241962_MethodInfo;
static PropertyInfo ICollection_1_t31409____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31409_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m241962_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31409_PropertyInfos[] =
{
	&ICollection_1_t31409____Count_PropertyInfo,
	&ICollection_1_t31409____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m241961_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31409_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m241962_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31409_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType OBJ_TYPE_t1121_0_0_0;
static ParameterInfo ICollection_1_t31409_ICollection_1_Add_m241963_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_TYPE_t1121_0_0_0},
};
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m241963_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31409_ICollection_1_Add_m241963_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m241964_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31409_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType OBJ_TYPE_t1121_0_0_0;
static ParameterInfo ICollection_1_t31409_ICollection_1_Contains_m241965_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_TYPE_t1121_0_0_0},
};
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m241965_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31409_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31409_ICollection_1_Contains_m241965_ParameterInfos/* parameters */
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
extern Il2CppType OBJ_TYPEU5BU5D_t25513_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31409_ICollection_1_CopyTo_m241966_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_TYPEU5BU5D_t25513_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m241966_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31409_ICollection_1_CopyTo_m241966_ParameterInfos/* parameters */
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
extern Il2CppType OBJ_TYPE_t1121_0_0_0;
static ParameterInfo ICollection_1_t31409_ICollection_1_Remove_m241967_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_TYPE_t1121_0_0_0},
};
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m241967_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31409_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31409_ICollection_1_Remove_m241967_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31409_MethodInfos[] =
{
	&ICollection_1_get_Count_m241961_MethodInfo,
	&ICollection_1_get_IsReadOnly_m241962_MethodInfo,
	&ICollection_1_Add_m241963_MethodInfo,
	&ICollection_1_Clear_m241964_MethodInfo,
	&ICollection_1_Contains_m241965_MethodInfo,
	&ICollection_1_CopyTo_m241966_MethodInfo,
	&ICollection_1_Remove_m241967_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31411_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31409_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31411_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31409_0_0_0;
extern Il2CppType ICollection_1_t31409_1_0_0;
struct ICollection_1_t31409;
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31409_GenericClass;
TypeInfo ICollection_1_t31409_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31409_MethodInfos/* methods */
	, ICollection_1_t31409_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31409_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31409_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31409_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31409_0_0_0/* byval_arg */
	, &ICollection_1_t31409_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31409_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31411_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>
extern TypeInfo IEnumerable_1_t31411_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27388_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m241968_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31411_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27388_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31411_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m241968_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31411_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31411_0_0_0;
extern Il2CppType IEnumerable_1_t31411_1_0_0;
struct IEnumerable_1_t31411;
extern TypeInfo IEnumerable_1_t31411_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31411_GenericClass;
TypeInfo IEnumerable_1_t31411_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31411_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31411_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31411_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31411_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31411_0_0_0/* byval_arg */
	, &IEnumerable_1_t31411_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31411_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31410_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>
extern MethodInfo IList_1_get_Item_m241969_MethodInfo;
extern MethodInfo IList_1_set_Item_m241970_MethodInfo;
static PropertyInfo IList_1_t31410____Item_PropertyInfo = 
{
	&IList_1_t31410_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m241969_MethodInfo/* get */
	, &IList_1_set_Item_m241970_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31410_PropertyInfos[] =
{
	&IList_1_t31410____Item_PropertyInfo,
	NULL
};
extern Il2CppType OBJ_TYPE_t1121_0_0_0;
static ParameterInfo IList_1_t31410_IList_1_IndexOf_m241971_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_TYPE_t1121_0_0_0},
};
extern TypeInfo IList_1_t31410_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m241971_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31410_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31410_IList_1_IndexOf_m241971_ParameterInfos/* parameters */
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
extern Il2CppType OBJ_TYPE_t1121_0_0_0;
static ParameterInfo IList_1_t31410_IList_1_Insert_m241972_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OBJ_TYPE_t1121_0_0_0},
};
extern TypeInfo IList_1_t31410_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m241972_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31410_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31410_IList_1_Insert_m241972_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31410_IList_1_RemoveAt_m241973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31410_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m241973_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31410_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31410_IList_1_RemoveAt_m241973_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31410_IList_1_get_Item_m241969_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31410_il2cpp_TypeInfo;
extern Il2CppType OBJ_TYPE_t1121_0_0_0;
extern void* RuntimeInvoker_OBJ_TYPE_t1121_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m241969_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31410_il2cpp_TypeInfo/* declaring_type */
	, &OBJ_TYPE_t1121_0_0_0/* return_type */
	, RuntimeInvoker_OBJ_TYPE_t1121_Int32_t73/* invoker_method */
	, IList_1_t31410_IList_1_get_Item_m241969_ParameterInfos/* parameters */
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
extern Il2CppType OBJ_TYPE_t1121_0_0_0;
static ParameterInfo IList_1_t31410_IList_1_set_Item_m241970_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OBJ_TYPE_t1121_0_0_0},
};
extern TypeInfo IList_1_t31410_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m241970_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31410_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31410_IList_1_set_Item_m241970_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31410_MethodInfos[] =
{
	&IList_1_IndexOf_m241971_MethodInfo,
	&IList_1_Insert_m241972_MethodInfo,
	&IList_1_RemoveAt_m241973_MethodInfo,
	&IList_1_get_Item_m241969_MethodInfo,
	&IList_1_set_Item_m241970_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31409_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31411_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31410_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31409_il2cpp_TypeInfo,
	&IEnumerable_1_t31411_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31410_0_0_0;
extern Il2CppType IList_1_t31410_1_0_0;
struct IList_1_t31410;
extern TypeInfo IList_1_t31410_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31410_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31410_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31410_MethodInfos/* methods */
	, IList_1_t31410_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31410_il2cpp_TypeInfo/* element_class */
	, IList_1_t31410_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31410_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31410_0_0_0/* byval_arg */
	, &IList_1_t31410_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31410_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27389_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/NPC_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_NPC_TYP.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m241974_MethodInfo;
static PropertyInfo IEnumerator_1_t27389____Current_PropertyInfo = 
{
	&IEnumerator_1_t27389_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m241974_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27389_PropertyInfos[] =
{
	&IEnumerator_1_t27389____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27389_il2cpp_TypeInfo;
extern Il2CppType NPC_TYPE_t1122_0_0_0;
extern void* RuntimeInvoker_NPC_TYPE_t1122 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m241974_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27389_il2cpp_TypeInfo/* declaring_type */
	, &NPC_TYPE_t1122_0_0_0/* return_type */
	, RuntimeInvoker_NPC_TYPE_t1122/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27389_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m241974_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27389_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27389_0_0_0;
extern Il2CppType IEnumerator_1_t27389_1_0_0;
struct IEnumerator_1_t27389;
extern TypeInfo IEnumerator_1_t27389_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27389_GenericClass;
TypeInfo IEnumerator_1_t27389_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27389_MethodInfos/* methods */
	, IEnumerator_1_t27389_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27389_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27389_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27389_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27389_0_0_0/* byval_arg */
	, &IEnumerator_1_t27389_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27389_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_995.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_995MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo;
extern TypeInfo NPC_TYPE_t1122_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123927_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNPC_TYPE_t1122_m196860_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisNPC_TYPE_t1122_m196860 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisNPC_TYPE_t1122_m196860_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123922_MethodInfo;
 void InternalEnumerator_1__ctor_m123922 (InternalEnumerator_1_t16581 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123923_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123923 (InternalEnumerator_1_t16581 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123924_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123924 (InternalEnumerator_1_t16581 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123927(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123927_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NPC_TYPE_t1122_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123925_MethodInfo;
 void InternalEnumerator_1_Dispose_m123925 (InternalEnumerator_1_t16581 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123926_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123926 (InternalEnumerator_1_t16581 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123927_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123927 (InternalEnumerator_1_t16581 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisNPC_TYPE_t1122_m196860(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNPC_TYPE_t1122_m196860_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16581____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16581, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16581____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16581, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16581_FieldInfos[] =
{
	&InternalEnumerator_1_t16581____array_FieldInfo,
	&InternalEnumerator_1_t16581____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123924_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16581____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16581_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123924_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123927_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16581____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16581_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123927_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16581_PropertyInfos[] =
{
	&InternalEnumerator_1_t16581____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16581____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16581_InternalEnumerator_1__ctor_m123922_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123922_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123922/* method */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16581_InternalEnumerator_1__ctor_m123922_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123923_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123923/* method */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123924_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123924/* method */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123925_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123925/* method */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123926_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123926/* method */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo;
extern Il2CppType NPC_TYPE_t1122_0_0_0;
extern void* RuntimeInvoker_NPC_TYPE_t1122 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123927_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123927/* method */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* declaring_type */
	, &NPC_TYPE_t1122_0_0_0/* return_type */
	, RuntimeInvoker_NPC_TYPE_t1122/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16581_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123922_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123923_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123924_MethodInfo,
	&InternalEnumerator_1_Dispose_m123925_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123926_MethodInfo,
	&InternalEnumerator_1_get_Current_m123927_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123924_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123926_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123923_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123925_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123927_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16581_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123924_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123926_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123923_MethodInfo,
	&InternalEnumerator_1_Dispose_m123925_MethodInfo,
	&InternalEnumerator_1_get_Current_m123927_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27389_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16581_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27389_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27389_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16581_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27389_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16581_0_0_0;
extern Il2CppType InternalEnumerator_1_t16581_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16581_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16581_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16581_MethodInfos/* methods */
	, InternalEnumerator_1_t16581_PropertyInfos/* properties */
	, InternalEnumerator_1_t16581_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16581_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16581_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16581_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16581_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16581_1_0_0/* this_arg */
	, InternalEnumerator_1_t16581_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16581_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16581)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>
extern MethodInfo ICollection_1_get_Count_m241975_MethodInfo;
static PropertyInfo ICollection_1_t31412____Count_PropertyInfo = 
{
	&ICollection_1_t31412_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m241975_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m241976_MethodInfo;
static PropertyInfo ICollection_1_t31412____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31412_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m241976_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31412_PropertyInfos[] =
{
	&ICollection_1_t31412____Count_PropertyInfo,
	&ICollection_1_t31412____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m241975_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31412_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m241976_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31412_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NPC_TYPE_t1122_0_0_0;
static ParameterInfo ICollection_1_t31412_ICollection_1_Add_m241977_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NPC_TYPE_t1122_0_0_0},
};
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m241977_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31412_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31412_ICollection_1_Add_m241977_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m241978_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31412_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NPC_TYPE_t1122_0_0_0;
static ParameterInfo ICollection_1_t31412_ICollection_1_Contains_m241979_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NPC_TYPE_t1122_0_0_0},
};
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m241979_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31412_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31412_ICollection_1_Contains_m241979_ParameterInfos/* parameters */
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
extern Il2CppType NPC_TYPEU5BU5D_t25514_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31412_ICollection_1_CopyTo_m241980_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NPC_TYPEU5BU5D_t25514_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m241980_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31412_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31412_ICollection_1_CopyTo_m241980_ParameterInfos/* parameters */
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
extern Il2CppType NPC_TYPE_t1122_0_0_0;
static ParameterInfo ICollection_1_t31412_ICollection_1_Remove_m241981_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NPC_TYPE_t1122_0_0_0},
};
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m241981_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31412_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31412_ICollection_1_Remove_m241981_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31412_MethodInfos[] =
{
	&ICollection_1_get_Count_m241975_MethodInfo,
	&ICollection_1_get_IsReadOnly_m241976_MethodInfo,
	&ICollection_1_Add_m241977_MethodInfo,
	&ICollection_1_Clear_m241978_MethodInfo,
	&ICollection_1_Contains_m241979_MethodInfo,
	&ICollection_1_CopyTo_m241980_MethodInfo,
	&ICollection_1_Remove_m241981_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31414_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31412_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31414_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31412_0_0_0;
extern Il2CppType ICollection_1_t31412_1_0_0;
struct ICollection_1_t31412;
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31412_GenericClass;
TypeInfo ICollection_1_t31412_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31412_MethodInfos/* methods */
	, ICollection_1_t31412_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31412_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31412_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31412_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31412_0_0_0/* byval_arg */
	, &ICollection_1_t31412_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31412_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31414_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>
extern TypeInfo IEnumerable_1_t31414_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27389_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m241982_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31414_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27389_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31414_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m241982_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31414_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31414_0_0_0;
extern Il2CppType IEnumerable_1_t31414_1_0_0;
struct IEnumerable_1_t31414;
extern TypeInfo IEnumerable_1_t31414_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31414_GenericClass;
TypeInfo IEnumerable_1_t31414_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31414_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31414_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31414_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31414_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31414_0_0_0/* byval_arg */
	, &IEnumerable_1_t31414_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31414_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31413_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>
extern MethodInfo IList_1_get_Item_m241983_MethodInfo;
extern MethodInfo IList_1_set_Item_m241984_MethodInfo;
static PropertyInfo IList_1_t31413____Item_PropertyInfo = 
{
	&IList_1_t31413_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m241983_MethodInfo/* get */
	, &IList_1_set_Item_m241984_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31413_PropertyInfos[] =
{
	&IList_1_t31413____Item_PropertyInfo,
	NULL
};
extern Il2CppType NPC_TYPE_t1122_0_0_0;
static ParameterInfo IList_1_t31413_IList_1_IndexOf_m241985_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NPC_TYPE_t1122_0_0_0},
};
extern TypeInfo IList_1_t31413_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m241985_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31413_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31413_IList_1_IndexOf_m241985_ParameterInfos/* parameters */
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
extern Il2CppType NPC_TYPE_t1122_0_0_0;
static ParameterInfo IList_1_t31413_IList_1_Insert_m241986_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NPC_TYPE_t1122_0_0_0},
};
extern TypeInfo IList_1_t31413_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m241986_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31413_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31413_IList_1_Insert_m241986_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31413_IList_1_RemoveAt_m241987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31413_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m241987_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31413_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31413_IList_1_RemoveAt_m241987_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31413_IList_1_get_Item_m241983_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31413_il2cpp_TypeInfo;
extern Il2CppType NPC_TYPE_t1122_0_0_0;
extern void* RuntimeInvoker_NPC_TYPE_t1122_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m241983_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31413_il2cpp_TypeInfo/* declaring_type */
	, &NPC_TYPE_t1122_0_0_0/* return_type */
	, RuntimeInvoker_NPC_TYPE_t1122_Int32_t73/* invoker_method */
	, IList_1_t31413_IList_1_get_Item_m241983_ParameterInfos/* parameters */
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
extern Il2CppType NPC_TYPE_t1122_0_0_0;
static ParameterInfo IList_1_t31413_IList_1_set_Item_m241984_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NPC_TYPE_t1122_0_0_0},
};
extern TypeInfo IList_1_t31413_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NPC_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m241984_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31413_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31413_IList_1_set_Item_m241984_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31413_MethodInfos[] =
{
	&IList_1_IndexOf_m241985_MethodInfo,
	&IList_1_Insert_m241986_MethodInfo,
	&IList_1_RemoveAt_m241987_MethodInfo,
	&IList_1_get_Item_m241983_MethodInfo,
	&IList_1_set_Item_m241984_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31412_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31414_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31413_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31412_il2cpp_TypeInfo,
	&IEnumerable_1_t31414_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31413_0_0_0;
extern Il2CppType IList_1_t31413_1_0_0;
struct IList_1_t31413;
extern TypeInfo IList_1_t31413_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31413_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31413_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31413_MethodInfos/* methods */
	, IList_1_t31413_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31413_il2cpp_TypeInfo/* element_class */
	, IList_1_t31413_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31413_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31413_0_0_0/* byval_arg */
	, &IList_1_t31413_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31413_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27390_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_ANI.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>
extern MethodInfo IEnumerator_1_get_Current_m241988_MethodInfo;
static PropertyInfo IEnumerator_1_t27390____Current_PropertyInfo = 
{
	&IEnumerator_1_t27390_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m241988_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27390_PropertyInfos[] =
{
	&IEnumerator_1_t27390____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27390_il2cpp_TypeInfo;
extern Il2CppType OBJ_ANIMSTATE_t1123_0_0_0;
extern void* RuntimeInvoker_OBJ_ANIMSTATE_t1123 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m241988_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27390_il2cpp_TypeInfo/* declaring_type */
	, &OBJ_ANIMSTATE_t1123_0_0_0/* return_type */
	, RuntimeInvoker_OBJ_ANIMSTATE_t1123/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27390_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m241988_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27390_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27390_0_0_0;
extern Il2CppType IEnumerator_1_t27390_1_0_0;
struct IEnumerator_1_t27390;
extern TypeInfo IEnumerator_1_t27390_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27390_GenericClass;
TypeInfo IEnumerator_1_t27390_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27390_MethodInfos/* methods */
	, IEnumerator_1_t27390_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27390_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27390_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27390_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27390_0_0_0/* byval_arg */
	, &IEnumerator_1_t27390_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27390_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_996.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_996MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo;
extern TypeInfo OBJ_ANIMSTATE_t1123_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123933_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOBJ_ANIMSTATE_t1123_m196871_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisOBJ_ANIMSTATE_t1123_m196871 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisOBJ_ANIMSTATE_t1123_m196871_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123928_MethodInfo;
 void InternalEnumerator_1__ctor_m123928 (InternalEnumerator_1_t16582 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123929_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123929 (InternalEnumerator_1_t16582 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123930_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123930 (InternalEnumerator_1_t16582 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123933(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123933_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OBJ_ANIMSTATE_t1123_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123931_MethodInfo;
 void InternalEnumerator_1_Dispose_m123931 (InternalEnumerator_1_t16582 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123932_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123932 (InternalEnumerator_1_t16582 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123933_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123933 (InternalEnumerator_1_t16582 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisOBJ_ANIMSTATE_t1123_m196871(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOBJ_ANIMSTATE_t1123_m196871_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16582____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16582, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16582____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16582, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16582_FieldInfos[] =
{
	&InternalEnumerator_1_t16582____array_FieldInfo,
	&InternalEnumerator_1_t16582____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123930_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16582____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16582_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123930_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123933_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16582____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16582_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123933_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16582_PropertyInfos[] =
{
	&InternalEnumerator_1_t16582____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16582____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16582_InternalEnumerator_1__ctor_m123928_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123928_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123928/* method */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16582_InternalEnumerator_1__ctor_m123928_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123929_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123929/* method */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123930_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123930/* method */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123931_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123931/* method */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123932_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123932/* method */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo;
extern Il2CppType OBJ_ANIMSTATE_t1123_0_0_0;
extern void* RuntimeInvoker_OBJ_ANIMSTATE_t1123 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123933_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123933/* method */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* declaring_type */
	, &OBJ_ANIMSTATE_t1123_0_0_0/* return_type */
	, RuntimeInvoker_OBJ_ANIMSTATE_t1123/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16582_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123928_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123929_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123930_MethodInfo,
	&InternalEnumerator_1_Dispose_m123931_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123932_MethodInfo,
	&InternalEnumerator_1_get_Current_m123933_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123930_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123932_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123929_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123931_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123933_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16582_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123930_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123932_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123929_MethodInfo,
	&InternalEnumerator_1_Dispose_m123931_MethodInfo,
	&InternalEnumerator_1_get_Current_m123933_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27390_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16582_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27390_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27390_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16582_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27390_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16582_0_0_0;
extern Il2CppType InternalEnumerator_1_t16582_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16582_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16582_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16582_MethodInfos/* methods */
	, InternalEnumerator_1_t16582_PropertyInfos/* properties */
	, InternalEnumerator_1_t16582_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16582_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16582_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16582_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16582_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16582_1_0_0/* this_arg */
	, InternalEnumerator_1_t16582_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16582_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16582)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>
extern MethodInfo ICollection_1_get_Count_m241989_MethodInfo;
static PropertyInfo ICollection_1_t31415____Count_PropertyInfo = 
{
	&ICollection_1_t31415_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m241989_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m241990_MethodInfo;
static PropertyInfo ICollection_1_t31415____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31415_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m241990_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31415_PropertyInfos[] =
{
	&ICollection_1_t31415____Count_PropertyInfo,
	&ICollection_1_t31415____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_Count()
MethodInfo ICollection_1_get_Count_m241989_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31415_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m241990_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31415_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType OBJ_ANIMSTATE_t1123_0_0_0;
static ParameterInfo ICollection_1_t31415_ICollection_1_Add_m241991_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_ANIMSTATE_t1123_0_0_0},
};
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Add(T)
MethodInfo ICollection_1_Add_m241991_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31415_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31415_ICollection_1_Add_m241991_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Clear()
MethodInfo ICollection_1_Clear_m241992_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31415_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType OBJ_ANIMSTATE_t1123_0_0_0;
static ParameterInfo ICollection_1_t31415_ICollection_1_Contains_m241993_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_ANIMSTATE_t1123_0_0_0},
};
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Contains(T)
MethodInfo ICollection_1_Contains_m241993_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31415_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31415_ICollection_1_Contains_m241993_ParameterInfos/* parameters */
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
extern Il2CppType OBJ_ANIMSTATEU5BU5D_t25515_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31415_ICollection_1_CopyTo_m241994_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_ANIMSTATEU5BU5D_t25515_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m241994_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31415_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31415_ICollection_1_CopyTo_m241994_ParameterInfos/* parameters */
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
extern Il2CppType OBJ_ANIMSTATE_t1123_0_0_0;
static ParameterInfo ICollection_1_t31415_ICollection_1_Remove_m241995_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_ANIMSTATE_t1123_0_0_0},
};
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Remove(T)
MethodInfo ICollection_1_Remove_m241995_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31415_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31415_ICollection_1_Remove_m241995_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31415_MethodInfos[] =
{
	&ICollection_1_get_Count_m241989_MethodInfo,
	&ICollection_1_get_IsReadOnly_m241990_MethodInfo,
	&ICollection_1_Add_m241991_MethodInfo,
	&ICollection_1_Clear_m241992_MethodInfo,
	&ICollection_1_Contains_m241993_MethodInfo,
	&ICollection_1_CopyTo_m241994_MethodInfo,
	&ICollection_1_Remove_m241995_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31417_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31415_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31417_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31415_0_0_0;
extern Il2CppType ICollection_1_t31415_1_0_0;
struct ICollection_1_t31415;
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31415_GenericClass;
TypeInfo ICollection_1_t31415_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31415_MethodInfos/* methods */
	, ICollection_1_t31415_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31415_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31415_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31415_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31415_0_0_0/* byval_arg */
	, &ICollection_1_t31415_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31415_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31417_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>
extern TypeInfo IEnumerable_1_t31417_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27390_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m241996_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31417_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27390_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31417_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m241996_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31417_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31417_0_0_0;
extern Il2CppType IEnumerable_1_t31417_1_0_0;
struct IEnumerable_1_t31417;
extern TypeInfo IEnumerable_1_t31417_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31417_GenericClass;
TypeInfo IEnumerable_1_t31417_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31417_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31417_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31417_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31417_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31417_0_0_0/* byval_arg */
	, &IEnumerable_1_t31417_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31417_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31416_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>
extern MethodInfo IList_1_get_Item_m241997_MethodInfo;
extern MethodInfo IList_1_set_Item_m241998_MethodInfo;
static PropertyInfo IList_1_t31416____Item_PropertyInfo = 
{
	&IList_1_t31416_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m241997_MethodInfo/* get */
	, &IList_1_set_Item_m241998_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31416_PropertyInfos[] =
{
	&IList_1_t31416____Item_PropertyInfo,
	NULL
};
extern Il2CppType OBJ_ANIMSTATE_t1123_0_0_0;
static ParameterInfo IList_1_t31416_IList_1_IndexOf_m241999_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OBJ_ANIMSTATE_t1123_0_0_0},
};
extern TypeInfo IList_1_t31416_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m241999_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31416_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31416_IList_1_IndexOf_m241999_ParameterInfos/* parameters */
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
extern Il2CppType OBJ_ANIMSTATE_t1123_0_0_0;
static ParameterInfo IList_1_t31416_IList_1_Insert_m242000_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OBJ_ANIMSTATE_t1123_0_0_0},
};
extern TypeInfo IList_1_t31416_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242000_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31416_IList_1_Insert_m242000_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31416_IList_1_RemoveAt_m242001_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31416_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242001_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31416_IList_1_RemoveAt_m242001_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31416_IList_1_get_Item_m241997_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31416_il2cpp_TypeInfo;
extern Il2CppType OBJ_ANIMSTATE_t1123_0_0_0;
extern void* RuntimeInvoker_OBJ_ANIMSTATE_t1123_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m241997_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31416_il2cpp_TypeInfo/* declaring_type */
	, &OBJ_ANIMSTATE_t1123_0_0_0/* return_type */
	, RuntimeInvoker_OBJ_ANIMSTATE_t1123_Int32_t73/* invoker_method */
	, IList_1_t31416_IList_1_get_Item_m241997_ParameterInfos/* parameters */
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
extern Il2CppType OBJ_ANIMSTATE_t1123_0_0_0;
static ParameterInfo IList_1_t31416_IList_1_set_Item_m241998_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OBJ_ANIMSTATE_t1123_0_0_0},
};
extern TypeInfo IList_1_t31416_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m241998_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31416_IList_1_set_Item_m241998_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31416_MethodInfos[] =
{
	&IList_1_IndexOf_m241999_MethodInfo,
	&IList_1_Insert_m242000_MethodInfo,
	&IList_1_RemoveAt_m242001_MethodInfo,
	&IList_1_get_Item_m241997_MethodInfo,
	&IList_1_set_Item_m241998_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31415_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31417_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31416_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31415_il2cpp_TypeInfo,
	&IEnumerable_1_t31417_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31416_0_0_0;
extern Il2CppType IList_1_t31416_1_0_0;
struct IList_1_t31416;
extern TypeInfo IList_1_t31416_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31416_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31416_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31416_MethodInfos/* methods */
	, IList_1_t31416_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31416_il2cpp_TypeInfo/* element_class */
	, IList_1_t31416_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31416_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31416_0_0_0/* byval_arg */
	, &IList_1_t31416_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31416_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27391_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_PACKET_.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>
extern MethodInfo IEnumerator_1_get_Current_m242002_MethodInfo;
static PropertyInfo IEnumerator_1_t27391____Current_PropertyInfo = 
{
	&IEnumerator_1_t27391_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242002_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27391_PropertyInfos[] =
{
	&IEnumerator_1_t27391____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27391_il2cpp_TypeInfo;
extern Il2CppType PACKET_DEFINE_t1124_0_0_0;
extern void* RuntimeInvoker_PACKET_DEFINE_t1124 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242002_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27391_il2cpp_TypeInfo/* declaring_type */
	, &PACKET_DEFINE_t1124_0_0_0/* return_type */
	, RuntimeInvoker_PACKET_DEFINE_t1124/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27391_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242002_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27391_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27391_0_0_0;
extern Il2CppType IEnumerator_1_t27391_1_0_0;
struct IEnumerator_1_t27391;
extern TypeInfo IEnumerator_1_t27391_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27391_GenericClass;
TypeInfo IEnumerator_1_t27391_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27391_MethodInfos/* methods */
	, IEnumerator_1_t27391_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27391_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27391_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27391_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27391_0_0_0/* byval_arg */
	, &IEnumerator_1_t27391_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27391_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_997.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_997MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo;
extern TypeInfo PACKET_DEFINE_t1124_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123939_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPACKET_DEFINE_t1124_m196882_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPACKET_DEFINE_t1124_m196882 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisPACKET_DEFINE_t1124_m196882_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123934_MethodInfo;
 void InternalEnumerator_1__ctor_m123934 (InternalEnumerator_1_t16583 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123935_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123935 (InternalEnumerator_1_t16583 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123936_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123936 (InternalEnumerator_1_t16583 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123939(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123939_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PACKET_DEFINE_t1124_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123937_MethodInfo;
 void InternalEnumerator_1_Dispose_m123937 (InternalEnumerator_1_t16583 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123938_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123938 (InternalEnumerator_1_t16583 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123939_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123939 (InternalEnumerator_1_t16583 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPACKET_DEFINE_t1124_m196882(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPACKET_DEFINE_t1124_m196882_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16583____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16583, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16583____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16583, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16583_FieldInfos[] =
{
	&InternalEnumerator_1_t16583____array_FieldInfo,
	&InternalEnumerator_1_t16583____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123936_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16583____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16583_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123936_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123939_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16583____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16583_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123939_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16583_PropertyInfos[] =
{
	&InternalEnumerator_1_t16583____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16583____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16583_InternalEnumerator_1__ctor_m123934_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123934_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123934/* method */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16583_InternalEnumerator_1__ctor_m123934_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123935_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123935/* method */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123936_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123936/* method */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123937_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123937/* method */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123938_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123938/* method */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo;
extern Il2CppType PACKET_DEFINE_t1124_0_0_0;
extern void* RuntimeInvoker_PACKET_DEFINE_t1124 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123939_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123939/* method */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* declaring_type */
	, &PACKET_DEFINE_t1124_0_0_0/* return_type */
	, RuntimeInvoker_PACKET_DEFINE_t1124/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16583_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123934_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123935_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123936_MethodInfo,
	&InternalEnumerator_1_Dispose_m123937_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123938_MethodInfo,
	&InternalEnumerator_1_get_Current_m123939_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123936_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123938_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123935_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123937_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123939_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16583_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123936_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123938_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123935_MethodInfo,
	&InternalEnumerator_1_Dispose_m123937_MethodInfo,
	&InternalEnumerator_1_get_Current_m123939_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27391_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16583_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27391_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27391_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16583_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27391_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16583_0_0_0;
extern Il2CppType InternalEnumerator_1_t16583_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16583_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16583_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16583_MethodInfos/* methods */
	, InternalEnumerator_1_t16583_PropertyInfos/* properties */
	, InternalEnumerator_1_t16583_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16583_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16583_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16583_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16583_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16583_1_0_0/* this_arg */
	, InternalEnumerator_1_t16583_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16583_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16583)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>
extern MethodInfo ICollection_1_get_Count_m242003_MethodInfo;
static PropertyInfo ICollection_1_t31418____Count_PropertyInfo = 
{
	&ICollection_1_t31418_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242003_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242004_MethodInfo;
static PropertyInfo ICollection_1_t31418____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31418_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242004_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31418_PropertyInfos[] =
{
	&ICollection_1_t31418____Count_PropertyInfo,
	&ICollection_1_t31418____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_Count()
MethodInfo ICollection_1_get_Count_m242003_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31418_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242004_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31418_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PACKET_DEFINE_t1124_0_0_0;
static ParameterInfo ICollection_1_t31418_ICollection_1_Add_m242005_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PACKET_DEFINE_t1124_0_0_0},
};
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Add(T)
MethodInfo ICollection_1_Add_m242005_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31418_ICollection_1_Add_m242005_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Clear()
MethodInfo ICollection_1_Clear_m242006_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31418_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PACKET_DEFINE_t1124_0_0_0;
static ParameterInfo ICollection_1_t31418_ICollection_1_Contains_m242007_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PACKET_DEFINE_t1124_0_0_0},
};
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Contains(T)
MethodInfo ICollection_1_Contains_m242007_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31418_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31418_ICollection_1_Contains_m242007_ParameterInfos/* parameters */
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
extern Il2CppType PACKET_DEFINEU5BU5D_t25516_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31418_ICollection_1_CopyTo_m242008_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PACKET_DEFINEU5BU5D_t25516_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242008_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31418_ICollection_1_CopyTo_m242008_ParameterInfos/* parameters */
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
extern Il2CppType PACKET_DEFINE_t1124_0_0_0;
static ParameterInfo ICollection_1_t31418_ICollection_1_Remove_m242009_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PACKET_DEFINE_t1124_0_0_0},
};
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Remove(T)
MethodInfo ICollection_1_Remove_m242009_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31418_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31418_ICollection_1_Remove_m242009_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31418_MethodInfos[] =
{
	&ICollection_1_get_Count_m242003_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242004_MethodInfo,
	&ICollection_1_Add_m242005_MethodInfo,
	&ICollection_1_Clear_m242006_MethodInfo,
	&ICollection_1_Contains_m242007_MethodInfo,
	&ICollection_1_CopyTo_m242008_MethodInfo,
	&ICollection_1_Remove_m242009_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31420_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31418_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31420_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31418_0_0_0;
extern Il2CppType ICollection_1_t31418_1_0_0;
struct ICollection_1_t31418;
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31418_GenericClass;
TypeInfo ICollection_1_t31418_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31418_MethodInfos/* methods */
	, ICollection_1_t31418_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31418_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31418_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31418_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31418_0_0_0/* byval_arg */
	, &ICollection_1_t31418_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31418_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31420_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>
extern TypeInfo IEnumerable_1_t31420_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27391_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242010_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31420_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27391_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31420_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242010_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31420_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31420_0_0_0;
extern Il2CppType IEnumerable_1_t31420_1_0_0;
struct IEnumerable_1_t31420;
extern TypeInfo IEnumerable_1_t31420_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31420_GenericClass;
TypeInfo IEnumerable_1_t31420_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31420_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31420_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31420_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31420_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31420_0_0_0/* byval_arg */
	, &IEnumerable_1_t31420_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31420_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31419_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>
extern MethodInfo IList_1_get_Item_m242011_MethodInfo;
extern MethodInfo IList_1_set_Item_m242012_MethodInfo;
static PropertyInfo IList_1_t31419____Item_PropertyInfo = 
{
	&IList_1_t31419_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242011_MethodInfo/* get */
	, &IList_1_set_Item_m242012_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31419_PropertyInfos[] =
{
	&IList_1_t31419____Item_PropertyInfo,
	NULL
};
extern Il2CppType PACKET_DEFINE_t1124_0_0_0;
static ParameterInfo IList_1_t31419_IList_1_IndexOf_m242013_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PACKET_DEFINE_t1124_0_0_0},
};
extern TypeInfo IList_1_t31419_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242013_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31419_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31419_IList_1_IndexOf_m242013_ParameterInfos/* parameters */
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
extern Il2CppType PACKET_DEFINE_t1124_0_0_0;
static ParameterInfo IList_1_t31419_IList_1_Insert_m242014_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PACKET_DEFINE_t1124_0_0_0},
};
extern TypeInfo IList_1_t31419_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242014_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31419_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31419_IList_1_Insert_m242014_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31419_IList_1_RemoveAt_m242015_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31419_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242015_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31419_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31419_IList_1_RemoveAt_m242015_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31419_IList_1_get_Item_m242011_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31419_il2cpp_TypeInfo;
extern Il2CppType PACKET_DEFINE_t1124_0_0_0;
extern void* RuntimeInvoker_PACKET_DEFINE_t1124_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242011_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31419_il2cpp_TypeInfo/* declaring_type */
	, &PACKET_DEFINE_t1124_0_0_0/* return_type */
	, RuntimeInvoker_PACKET_DEFINE_t1124_Int32_t73/* invoker_method */
	, IList_1_t31419_IList_1_get_Item_m242011_ParameterInfos/* parameters */
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
extern Il2CppType PACKET_DEFINE_t1124_0_0_0;
static ParameterInfo IList_1_t31419_IList_1_set_Item_m242012_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PACKET_DEFINE_t1124_0_0_0},
};
extern TypeInfo IList_1_t31419_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/PACKET_DEFINE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242012_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31419_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31419_IList_1_set_Item_m242012_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31419_MethodInfos[] =
{
	&IList_1_IndexOf_m242013_MethodInfo,
	&IList_1_Insert_m242014_MethodInfo,
	&IList_1_RemoveAt_m242015_MethodInfo,
	&IList_1_get_Item_m242011_MethodInfo,
	&IList_1_set_Item_m242012_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31418_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31420_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31419_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31418_il2cpp_TypeInfo,
	&IEnumerable_1_t31420_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31419_0_0_0;
extern Il2CppType IList_1_t31419_1_0_0;
struct IList_1_t31419;
extern TypeInfo IList_1_t31419_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31419_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31419_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31419_MethodInfos/* methods */
	, IList_1_t31419_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31419_il2cpp_TypeInfo/* element_class */
	, IList_1_t31419_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31419_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31419_0_0_0/* byval_arg */
	, &IList_1_t31419_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31419_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27392_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_EVENT_D.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>
extern MethodInfo IEnumerator_1_get_Current_m242016_MethodInfo;
static PropertyInfo IEnumerator_1_t27392____Current_PropertyInfo = 
{
	&IEnumerator_1_t27392_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242016_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27392_PropertyInfos[] =
{
	&IEnumerator_1_t27392____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27392_il2cpp_TypeInfo;
extern Il2CppType EVENT_DEFINE_t1125_0_0_0;
extern void* RuntimeInvoker_EVENT_DEFINE_t1125 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242016_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27392_il2cpp_TypeInfo/* declaring_type */
	, &EVENT_DEFINE_t1125_0_0_0/* return_type */
	, RuntimeInvoker_EVENT_DEFINE_t1125/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27392_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242016_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27392_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27392_0_0_0;
extern Il2CppType IEnumerator_1_t27392_1_0_0;
struct IEnumerator_1_t27392;
extern TypeInfo IEnumerator_1_t27392_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27392_GenericClass;
TypeInfo IEnumerator_1_t27392_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27392_MethodInfos/* methods */
	, IEnumerator_1_t27392_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27392_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27392_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27392_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27392_0_0_0/* byval_arg */
	, &IEnumerator_1_t27392_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27392_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_998.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_998MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo;
extern TypeInfo EVENT_DEFINE_t1125_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123945_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEVENT_DEFINE_t1125_m196893_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEVENT_DEFINE_t1125_m196893 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisEVENT_DEFINE_t1125_m196893_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123940_MethodInfo;
 void InternalEnumerator_1__ctor_m123940 (InternalEnumerator_1_t16584 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123941_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123941 (InternalEnumerator_1_t16584 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123942_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123942 (InternalEnumerator_1_t16584 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123945(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123945_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EVENT_DEFINE_t1125_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123943_MethodInfo;
 void InternalEnumerator_1_Dispose_m123943 (InternalEnumerator_1_t16584 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123944_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123944 (InternalEnumerator_1_t16584 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123945_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123945 (InternalEnumerator_1_t16584 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEVENT_DEFINE_t1125_m196893(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEVENT_DEFINE_t1125_m196893_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16584____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16584, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16584____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16584, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16584_FieldInfos[] =
{
	&InternalEnumerator_1_t16584____array_FieldInfo,
	&InternalEnumerator_1_t16584____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123942_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16584____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16584_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123942_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123945_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16584____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16584_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123945_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16584_PropertyInfos[] =
{
	&InternalEnumerator_1_t16584____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16584____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16584_InternalEnumerator_1__ctor_m123940_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123940_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123940/* method */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16584_InternalEnumerator_1__ctor_m123940_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123941_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123941/* method */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123942_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123942/* method */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123943_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123943/* method */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123944_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123944/* method */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo;
extern Il2CppType EVENT_DEFINE_t1125_0_0_0;
extern void* RuntimeInvoker_EVENT_DEFINE_t1125 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123945_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123945/* method */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* declaring_type */
	, &EVENT_DEFINE_t1125_0_0_0/* return_type */
	, RuntimeInvoker_EVENT_DEFINE_t1125/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16584_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123940_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123941_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123942_MethodInfo,
	&InternalEnumerator_1_Dispose_m123943_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123944_MethodInfo,
	&InternalEnumerator_1_get_Current_m123945_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123942_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123944_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123941_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123943_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123945_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16584_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123942_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123944_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123941_MethodInfo,
	&InternalEnumerator_1_Dispose_m123943_MethodInfo,
	&InternalEnumerator_1_get_Current_m123945_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27392_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16584_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27392_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27392_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16584_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27392_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16584_0_0_0;
extern Il2CppType InternalEnumerator_1_t16584_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16584_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16584_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16584_MethodInfos/* methods */
	, InternalEnumerator_1_t16584_PropertyInfos/* properties */
	, InternalEnumerator_1_t16584_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16584_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16584_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16584_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16584_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16584_1_0_0/* this_arg */
	, InternalEnumerator_1_t16584_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16584_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16584)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>
extern MethodInfo ICollection_1_get_Count_m242017_MethodInfo;
static PropertyInfo ICollection_1_t31421____Count_PropertyInfo = 
{
	&ICollection_1_t31421_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242017_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242018_MethodInfo;
static PropertyInfo ICollection_1_t31421____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31421_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242018_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31421_PropertyInfos[] =
{
	&ICollection_1_t31421____Count_PropertyInfo,
	&ICollection_1_t31421____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_Count()
MethodInfo ICollection_1_get_Count_m242017_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31421_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242018_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31421_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType EVENT_DEFINE_t1125_0_0_0;
static ParameterInfo ICollection_1_t31421_ICollection_1_Add_m242019_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EVENT_DEFINE_t1125_0_0_0},
};
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Add(T)
MethodInfo ICollection_1_Add_m242019_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31421_ICollection_1_Add_m242019_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Clear()
MethodInfo ICollection_1_Clear_m242020_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31421_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType EVENT_DEFINE_t1125_0_0_0;
static ParameterInfo ICollection_1_t31421_ICollection_1_Contains_m242021_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EVENT_DEFINE_t1125_0_0_0},
};
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Contains(T)
MethodInfo ICollection_1_Contains_m242021_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31421_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31421_ICollection_1_Contains_m242021_ParameterInfos/* parameters */
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
extern Il2CppType EVENT_DEFINEU5BU5D_t25517_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31421_ICollection_1_CopyTo_m242022_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EVENT_DEFINEU5BU5D_t25517_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242022_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31421_ICollection_1_CopyTo_m242022_ParameterInfos/* parameters */
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
extern Il2CppType EVENT_DEFINE_t1125_0_0_0;
static ParameterInfo ICollection_1_t31421_ICollection_1_Remove_m242023_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EVENT_DEFINE_t1125_0_0_0},
};
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Remove(T)
MethodInfo ICollection_1_Remove_m242023_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31421_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31421_ICollection_1_Remove_m242023_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31421_MethodInfos[] =
{
	&ICollection_1_get_Count_m242017_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242018_MethodInfo,
	&ICollection_1_Add_m242019_MethodInfo,
	&ICollection_1_Clear_m242020_MethodInfo,
	&ICollection_1_Contains_m242021_MethodInfo,
	&ICollection_1_CopyTo_m242022_MethodInfo,
	&ICollection_1_Remove_m242023_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31423_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31421_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31423_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31421_0_0_0;
extern Il2CppType ICollection_1_t31421_1_0_0;
struct ICollection_1_t31421;
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31421_GenericClass;
TypeInfo ICollection_1_t31421_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31421_MethodInfos/* methods */
	, ICollection_1_t31421_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31421_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31421_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31421_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31421_0_0_0/* byval_arg */
	, &ICollection_1_t31421_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31421_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31423_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>
extern TypeInfo IEnumerable_1_t31423_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27392_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242024_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31423_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27392_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31423_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242024_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31423_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31423_0_0_0;
extern Il2CppType IEnumerable_1_t31423_1_0_0;
struct IEnumerable_1_t31423;
extern TypeInfo IEnumerable_1_t31423_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31423_GenericClass;
TypeInfo IEnumerable_1_t31423_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31423_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31423_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31423_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31423_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31423_0_0_0/* byval_arg */
	, &IEnumerable_1_t31423_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31423_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31422_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>
extern MethodInfo IList_1_get_Item_m242025_MethodInfo;
extern MethodInfo IList_1_set_Item_m242026_MethodInfo;
static PropertyInfo IList_1_t31422____Item_PropertyInfo = 
{
	&IList_1_t31422_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242025_MethodInfo/* get */
	, &IList_1_set_Item_m242026_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31422_PropertyInfos[] =
{
	&IList_1_t31422____Item_PropertyInfo,
	NULL
};
extern Il2CppType EVENT_DEFINE_t1125_0_0_0;
static ParameterInfo IList_1_t31422_IList_1_IndexOf_m242027_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EVENT_DEFINE_t1125_0_0_0},
};
extern TypeInfo IList_1_t31422_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242027_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31422_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31422_IList_1_IndexOf_m242027_ParameterInfos/* parameters */
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
extern Il2CppType EVENT_DEFINE_t1125_0_0_0;
static ParameterInfo IList_1_t31422_IList_1_Insert_m242028_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EVENT_DEFINE_t1125_0_0_0},
};
extern TypeInfo IList_1_t31422_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242028_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31422_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31422_IList_1_Insert_m242028_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31422_IList_1_RemoveAt_m242029_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31422_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242029_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31422_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31422_IList_1_RemoveAt_m242029_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31422_IList_1_get_Item_m242025_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31422_il2cpp_TypeInfo;
extern Il2CppType EVENT_DEFINE_t1125_0_0_0;
extern void* RuntimeInvoker_EVENT_DEFINE_t1125_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242025_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31422_il2cpp_TypeInfo/* declaring_type */
	, &EVENT_DEFINE_t1125_0_0_0/* return_type */
	, RuntimeInvoker_EVENT_DEFINE_t1125_Int32_t73/* invoker_method */
	, IList_1_t31422_IList_1_get_Item_m242025_ParameterInfos/* parameters */
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
extern Il2CppType EVENT_DEFINE_t1125_0_0_0;
static ParameterInfo IList_1_t31422_IList_1_set_Item_m242026_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EVENT_DEFINE_t1125_0_0_0},
};
extern TypeInfo IList_1_t31422_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/EVENT_DEFINE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242026_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31422_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31422_IList_1_set_Item_m242026_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31422_MethodInfos[] =
{
	&IList_1_IndexOf_m242027_MethodInfo,
	&IList_1_Insert_m242028_MethodInfo,
	&IList_1_RemoveAt_m242029_MethodInfo,
	&IList_1_get_Item_m242025_MethodInfo,
	&IList_1_set_Item_m242026_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31421_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31423_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31422_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31421_il2cpp_TypeInfo,
	&IEnumerable_1_t31423_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31422_0_0_0;
extern Il2CppType IList_1_t31422_1_0_0;
struct IList_1_t31422;
extern TypeInfo IList_1_t31422_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31422_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31422_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31422_MethodInfos/* methods */
	, IList_1_t31422_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31422_il2cpp_TypeInfo/* element_class */
	, IList_1_t31422_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31422_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31422_0_0_0/* byval_arg */
	, &IList_1_t31422_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31422_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27393_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_SCENE_D.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>
extern MethodInfo IEnumerator_1_get_Current_m242030_MethodInfo;
static PropertyInfo IEnumerator_1_t27393____Current_PropertyInfo = 
{
	&IEnumerator_1_t27393_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242030_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27393_PropertyInfos[] =
{
	&IEnumerator_1_t27393____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27393_il2cpp_TypeInfo;
extern Il2CppType SCENE_DEFINE_t1126_0_0_0;
extern void* RuntimeInvoker_SCENE_DEFINE_t1126 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242030_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27393_il2cpp_TypeInfo/* declaring_type */
	, &SCENE_DEFINE_t1126_0_0_0/* return_type */
	, RuntimeInvoker_SCENE_DEFINE_t1126/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27393_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242030_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27393_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27393_0_0_0;
extern Il2CppType IEnumerator_1_t27393_1_0_0;
struct IEnumerator_1_t27393;
extern TypeInfo IEnumerator_1_t27393_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27393_GenericClass;
TypeInfo IEnumerator_1_t27393_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27393_MethodInfos/* methods */
	, IEnumerator_1_t27393_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27393_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27393_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27393_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27393_0_0_0/* byval_arg */
	, &IEnumerator_1_t27393_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27393_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_999.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_999MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo;
extern TypeInfo SCENE_DEFINE_t1126_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123951_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSCENE_DEFINE_t1126_m196904_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSCENE_DEFINE_t1126_m196904 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSCENE_DEFINE_t1126_m196904_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123946_MethodInfo;
 void InternalEnumerator_1__ctor_m123946 (InternalEnumerator_1_t16585 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123947_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123947 (InternalEnumerator_1_t16585 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123948_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123948 (InternalEnumerator_1_t16585 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123951(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123951_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SCENE_DEFINE_t1126_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123949_MethodInfo;
 void InternalEnumerator_1_Dispose_m123949 (InternalEnumerator_1_t16585 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123950_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123950 (InternalEnumerator_1_t16585 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123951_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123951 (InternalEnumerator_1_t16585 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSCENE_DEFINE_t1126_m196904(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSCENE_DEFINE_t1126_m196904_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16585____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16585, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16585____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16585, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16585_FieldInfos[] =
{
	&InternalEnumerator_1_t16585____array_FieldInfo,
	&InternalEnumerator_1_t16585____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123948_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16585____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16585_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123948_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123951_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16585____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16585_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123951_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16585_PropertyInfos[] =
{
	&InternalEnumerator_1_t16585____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16585____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16585_InternalEnumerator_1__ctor_m123946_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123946_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123946/* method */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16585_InternalEnumerator_1__ctor_m123946_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123947_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123947/* method */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123948_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123948/* method */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123949_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123949/* method */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123950_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123950/* method */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo;
extern Il2CppType SCENE_DEFINE_t1126_0_0_0;
extern void* RuntimeInvoker_SCENE_DEFINE_t1126 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123951_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123951/* method */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* declaring_type */
	, &SCENE_DEFINE_t1126_0_0_0/* return_type */
	, RuntimeInvoker_SCENE_DEFINE_t1126/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16585_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123946_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123947_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123948_MethodInfo,
	&InternalEnumerator_1_Dispose_m123949_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123950_MethodInfo,
	&InternalEnumerator_1_get_Current_m123951_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123948_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123950_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123947_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123949_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123951_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16585_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123948_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123950_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123947_MethodInfo,
	&InternalEnumerator_1_Dispose_m123949_MethodInfo,
	&InternalEnumerator_1_get_Current_m123951_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27393_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16585_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27393_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27393_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16585_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27393_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16585_0_0_0;
extern Il2CppType InternalEnumerator_1_t16585_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16585_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16585_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16585_MethodInfos/* methods */
	, InternalEnumerator_1_t16585_PropertyInfos/* properties */
	, InternalEnumerator_1_t16585_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16585_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16585_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16585_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16585_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16585_1_0_0/* this_arg */
	, InternalEnumerator_1_t16585_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16585_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16585)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>
extern MethodInfo ICollection_1_get_Count_m242031_MethodInfo;
static PropertyInfo ICollection_1_t31424____Count_PropertyInfo = 
{
	&ICollection_1_t31424_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242031_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242032_MethodInfo;
static PropertyInfo ICollection_1_t31424____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31424_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242032_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31424_PropertyInfos[] =
{
	&ICollection_1_t31424____Count_PropertyInfo,
	&ICollection_1_t31424____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_Count()
MethodInfo ICollection_1_get_Count_m242031_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31424_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242032_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31424_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SCENE_DEFINE_t1126_0_0_0;
static ParameterInfo ICollection_1_t31424_ICollection_1_Add_m242033_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_DEFINE_t1126_0_0_0},
};
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Add(T)
MethodInfo ICollection_1_Add_m242033_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31424_ICollection_1_Add_m242033_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Clear()
MethodInfo ICollection_1_Clear_m242034_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31424_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SCENE_DEFINE_t1126_0_0_0;
static ParameterInfo ICollection_1_t31424_ICollection_1_Contains_m242035_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_DEFINE_t1126_0_0_0},
};
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Contains(T)
MethodInfo ICollection_1_Contains_m242035_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31424_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31424_ICollection_1_Contains_m242035_ParameterInfos/* parameters */
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
extern Il2CppType SCENE_DEFINEU5BU5D_t25518_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31424_ICollection_1_CopyTo_m242036_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_DEFINEU5BU5D_t25518_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242036_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31424_ICollection_1_CopyTo_m242036_ParameterInfos/* parameters */
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
extern Il2CppType SCENE_DEFINE_t1126_0_0_0;
static ParameterInfo ICollection_1_t31424_ICollection_1_Remove_m242037_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_DEFINE_t1126_0_0_0},
};
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Remove(T)
MethodInfo ICollection_1_Remove_m242037_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31424_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31424_ICollection_1_Remove_m242037_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31424_MethodInfos[] =
{
	&ICollection_1_get_Count_m242031_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242032_MethodInfo,
	&ICollection_1_Add_m242033_MethodInfo,
	&ICollection_1_Clear_m242034_MethodInfo,
	&ICollection_1_Contains_m242035_MethodInfo,
	&ICollection_1_CopyTo_m242036_MethodInfo,
	&ICollection_1_Remove_m242037_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31426_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31424_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31426_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31424_0_0_0;
extern Il2CppType ICollection_1_t31424_1_0_0;
struct ICollection_1_t31424;
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31424_GenericClass;
TypeInfo ICollection_1_t31424_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31424_MethodInfos/* methods */
	, ICollection_1_t31424_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31424_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31424_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31424_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31424_0_0_0/* byval_arg */
	, &ICollection_1_t31424_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31424_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31426_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>
extern TypeInfo IEnumerable_1_t31426_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27393_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242038_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31426_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27393_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31426_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242038_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31426_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31426_0_0_0;
extern Il2CppType IEnumerable_1_t31426_1_0_0;
struct IEnumerable_1_t31426;
extern TypeInfo IEnumerable_1_t31426_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31426_GenericClass;
TypeInfo IEnumerable_1_t31426_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31426_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31426_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31426_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31426_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31426_0_0_0/* byval_arg */
	, &IEnumerable_1_t31426_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31426_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31425_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>
extern MethodInfo IList_1_get_Item_m242039_MethodInfo;
extern MethodInfo IList_1_set_Item_m242040_MethodInfo;
static PropertyInfo IList_1_t31425____Item_PropertyInfo = 
{
	&IList_1_t31425_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242039_MethodInfo/* get */
	, &IList_1_set_Item_m242040_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31425_PropertyInfos[] =
{
	&IList_1_t31425____Item_PropertyInfo,
	NULL
};
extern Il2CppType SCENE_DEFINE_t1126_0_0_0;
static ParameterInfo IList_1_t31425_IList_1_IndexOf_m242041_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_DEFINE_t1126_0_0_0},
};
extern TypeInfo IList_1_t31425_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242041_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31425_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31425_IList_1_IndexOf_m242041_ParameterInfos/* parameters */
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
extern Il2CppType SCENE_DEFINE_t1126_0_0_0;
static ParameterInfo IList_1_t31425_IList_1_Insert_m242042_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SCENE_DEFINE_t1126_0_0_0},
};
extern TypeInfo IList_1_t31425_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242042_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31425_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31425_IList_1_Insert_m242042_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31425_IList_1_RemoveAt_m242043_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31425_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242043_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31425_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31425_IList_1_RemoveAt_m242043_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31425_IList_1_get_Item_m242039_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31425_il2cpp_TypeInfo;
extern Il2CppType SCENE_DEFINE_t1126_0_0_0;
extern void* RuntimeInvoker_SCENE_DEFINE_t1126_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242039_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31425_il2cpp_TypeInfo/* declaring_type */
	, &SCENE_DEFINE_t1126_0_0_0/* return_type */
	, RuntimeInvoker_SCENE_DEFINE_t1126_Int32_t73/* invoker_method */
	, IList_1_t31425_IList_1_get_Item_m242039_ParameterInfos/* parameters */
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
extern Il2CppType SCENE_DEFINE_t1126_0_0_0;
static ParameterInfo IList_1_t31425_IList_1_set_Item_m242040_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SCENE_DEFINE_t1126_0_0_0},
};
extern TypeInfo IList_1_t31425_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_DEFINE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242040_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31425_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31425_IList_1_set_Item_m242040_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31425_MethodInfos[] =
{
	&IList_1_IndexOf_m242041_MethodInfo,
	&IList_1_Insert_m242042_MethodInfo,
	&IList_1_RemoveAt_m242043_MethodInfo,
	&IList_1_get_Item_m242039_MethodInfo,
	&IList_1_set_Item_m242040_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31424_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31426_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31425_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31424_il2cpp_TypeInfo,
	&IEnumerable_1_t31426_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31425_0_0_0;
extern Il2CppType IList_1_t31425_1_0_0;
struct IList_1_t31425;
extern TypeInfo IList_1_t31425_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31425_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31425_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31425_MethodInfos/* methods */
	, IList_1_t31425_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31425_il2cpp_TypeInfo/* element_class */
	, IList_1_t31425_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31425_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31425_0_0_0/* byval_arg */
	, &IList_1_t31425_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31425_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27394_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_SCENCE_.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>
extern MethodInfo IEnumerator_1_get_Current_m242044_MethodInfo;
static PropertyInfo IEnumerator_1_t27394____Current_PropertyInfo = 
{
	&IEnumerator_1_t27394_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242044_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27394_PropertyInfos[] =
{
	&IEnumerator_1_t27394____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27394_il2cpp_TypeInfo;
extern Il2CppType SCENCE_DEFINE_EX_t1127_0_0_0;
extern void* RuntimeInvoker_SCENCE_DEFINE_EX_t1127 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242044_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27394_il2cpp_TypeInfo/* declaring_type */
	, &SCENCE_DEFINE_EX_t1127_0_0_0/* return_type */
	, RuntimeInvoker_SCENCE_DEFINE_EX_t1127/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27394_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242044_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27394_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27394_0_0_0;
extern Il2CppType IEnumerator_1_t27394_1_0_0;
struct IEnumerator_1_t27394;
extern TypeInfo IEnumerator_1_t27394_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27394_GenericClass;
TypeInfo IEnumerator_1_t27394_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27394_MethodInfos/* methods */
	, IEnumerator_1_t27394_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27394_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27394_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27394_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27394_0_0_0/* byval_arg */
	, &IEnumerator_1_t27394_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27394_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1000.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1000MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo;
extern TypeInfo SCENCE_DEFINE_EX_t1127_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123957_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSCENCE_DEFINE_EX_t1127_m196915_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSCENCE_DEFINE_EX_t1127_m196915 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSCENCE_DEFINE_EX_t1127_m196915_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123952_MethodInfo;
 void InternalEnumerator_1__ctor_m123952 (InternalEnumerator_1_t16586 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123953_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123953 (InternalEnumerator_1_t16586 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123954_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123954 (InternalEnumerator_1_t16586 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123957(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123957_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SCENCE_DEFINE_EX_t1127_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123955_MethodInfo;
 void InternalEnumerator_1_Dispose_m123955 (InternalEnumerator_1_t16586 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123956_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123956 (InternalEnumerator_1_t16586 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123957_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123957 (InternalEnumerator_1_t16586 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSCENCE_DEFINE_EX_t1127_m196915(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSCENCE_DEFINE_EX_t1127_m196915_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16586____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16586, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16586____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16586, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16586_FieldInfos[] =
{
	&InternalEnumerator_1_t16586____array_FieldInfo,
	&InternalEnumerator_1_t16586____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123954_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16586____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16586_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123954_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123957_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16586____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16586_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123957_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16586_PropertyInfos[] =
{
	&InternalEnumerator_1_t16586____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16586____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16586_InternalEnumerator_1__ctor_m123952_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123952_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123952/* method */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16586_InternalEnumerator_1__ctor_m123952_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123953_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123953/* method */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123954_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123954/* method */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123955_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123955/* method */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123956_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123956/* method */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo;
extern Il2CppType SCENCE_DEFINE_EX_t1127_0_0_0;
extern void* RuntimeInvoker_SCENCE_DEFINE_EX_t1127 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123957_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123957/* method */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* declaring_type */
	, &SCENCE_DEFINE_EX_t1127_0_0_0/* return_type */
	, RuntimeInvoker_SCENCE_DEFINE_EX_t1127/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16586_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123952_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123953_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123954_MethodInfo,
	&InternalEnumerator_1_Dispose_m123955_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123956_MethodInfo,
	&InternalEnumerator_1_get_Current_m123957_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123954_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123956_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123953_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123955_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123957_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16586_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123954_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123956_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123953_MethodInfo,
	&InternalEnumerator_1_Dispose_m123955_MethodInfo,
	&InternalEnumerator_1_get_Current_m123957_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27394_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16586_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27394_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27394_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16586_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27394_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16586_0_0_0;
extern Il2CppType InternalEnumerator_1_t16586_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16586_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16586_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16586_MethodInfos/* methods */
	, InternalEnumerator_1_t16586_PropertyInfos/* properties */
	, InternalEnumerator_1_t16586_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16586_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16586_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16586_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16586_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16586_1_0_0/* this_arg */
	, InternalEnumerator_1_t16586_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16586_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16586)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>
extern MethodInfo ICollection_1_get_Count_m242045_MethodInfo;
static PropertyInfo ICollection_1_t31427____Count_PropertyInfo = 
{
	&ICollection_1_t31427_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242045_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242046_MethodInfo;
static PropertyInfo ICollection_1_t31427____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31427_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242046_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31427_PropertyInfos[] =
{
	&ICollection_1_t31427____Count_PropertyInfo,
	&ICollection_1_t31427____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_Count()
MethodInfo ICollection_1_get_Count_m242045_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31427_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242046_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31427_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SCENCE_DEFINE_EX_t1127_0_0_0;
static ParameterInfo ICollection_1_t31427_ICollection_1_Add_m242047_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENCE_DEFINE_EX_t1127_0_0_0},
};
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Add(T)
MethodInfo ICollection_1_Add_m242047_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31427_ICollection_1_Add_m242047_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Clear()
MethodInfo ICollection_1_Clear_m242048_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31427_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SCENCE_DEFINE_EX_t1127_0_0_0;
static ParameterInfo ICollection_1_t31427_ICollection_1_Contains_m242049_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENCE_DEFINE_EX_t1127_0_0_0},
};
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Contains(T)
MethodInfo ICollection_1_Contains_m242049_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31427_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31427_ICollection_1_Contains_m242049_ParameterInfos/* parameters */
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
extern Il2CppType SCENCE_DEFINE_EXU5BU5D_t25519_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31427_ICollection_1_CopyTo_m242050_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SCENCE_DEFINE_EXU5BU5D_t25519_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242050_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31427_ICollection_1_CopyTo_m242050_ParameterInfos/* parameters */
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
extern Il2CppType SCENCE_DEFINE_EX_t1127_0_0_0;
static ParameterInfo ICollection_1_t31427_ICollection_1_Remove_m242051_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENCE_DEFINE_EX_t1127_0_0_0},
};
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Remove(T)
MethodInfo ICollection_1_Remove_m242051_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31427_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31427_ICollection_1_Remove_m242051_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31427_MethodInfos[] =
{
	&ICollection_1_get_Count_m242045_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242046_MethodInfo,
	&ICollection_1_Add_m242047_MethodInfo,
	&ICollection_1_Clear_m242048_MethodInfo,
	&ICollection_1_Contains_m242049_MethodInfo,
	&ICollection_1_CopyTo_m242050_MethodInfo,
	&ICollection_1_Remove_m242051_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31429_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31427_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31429_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31427_0_0_0;
extern Il2CppType ICollection_1_t31427_1_0_0;
struct ICollection_1_t31427;
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31427_GenericClass;
TypeInfo ICollection_1_t31427_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31427_MethodInfos/* methods */
	, ICollection_1_t31427_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31427_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31427_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31427_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31427_0_0_0/* byval_arg */
	, &ICollection_1_t31427_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31427_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31429_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>
extern TypeInfo IEnumerable_1_t31429_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27394_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242052_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31429_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27394_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31429_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242052_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31429_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31429_0_0_0;
extern Il2CppType IEnumerable_1_t31429_1_0_0;
struct IEnumerable_1_t31429;
extern TypeInfo IEnumerable_1_t31429_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31429_GenericClass;
TypeInfo IEnumerable_1_t31429_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31429_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31429_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31429_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31429_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31429_0_0_0/* byval_arg */
	, &IEnumerable_1_t31429_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31429_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31428_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>
extern MethodInfo IList_1_get_Item_m242053_MethodInfo;
extern MethodInfo IList_1_set_Item_m242054_MethodInfo;
static PropertyInfo IList_1_t31428____Item_PropertyInfo = 
{
	&IList_1_t31428_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242053_MethodInfo/* get */
	, &IList_1_set_Item_m242054_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31428_PropertyInfos[] =
{
	&IList_1_t31428____Item_PropertyInfo,
	NULL
};
extern Il2CppType SCENCE_DEFINE_EX_t1127_0_0_0;
static ParameterInfo IList_1_t31428_IList_1_IndexOf_m242055_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENCE_DEFINE_EX_t1127_0_0_0},
};
extern TypeInfo IList_1_t31428_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242055_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31428_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31428_IList_1_IndexOf_m242055_ParameterInfos/* parameters */
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
extern Il2CppType SCENCE_DEFINE_EX_t1127_0_0_0;
static ParameterInfo IList_1_t31428_IList_1_Insert_m242056_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SCENCE_DEFINE_EX_t1127_0_0_0},
};
extern TypeInfo IList_1_t31428_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242056_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31428_IList_1_Insert_m242056_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31428_IList_1_RemoveAt_m242057_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31428_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242057_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31428_IList_1_RemoveAt_m242057_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31428_IList_1_get_Item_m242053_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31428_il2cpp_TypeInfo;
extern Il2CppType SCENCE_DEFINE_EX_t1127_0_0_0;
extern void* RuntimeInvoker_SCENCE_DEFINE_EX_t1127_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242053_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31428_il2cpp_TypeInfo/* declaring_type */
	, &SCENCE_DEFINE_EX_t1127_0_0_0/* return_type */
	, RuntimeInvoker_SCENCE_DEFINE_EX_t1127_Int32_t73/* invoker_method */
	, IList_1_t31428_IList_1_get_Item_m242053_ParameterInfos/* parameters */
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
extern Il2CppType SCENCE_DEFINE_EX_t1127_0_0_0;
static ParameterInfo IList_1_t31428_IList_1_set_Item_m242054_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SCENCE_DEFINE_EX_t1127_0_0_0},
};
extern TypeInfo IList_1_t31428_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENCE_DEFINE_EX>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242054_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31428_IList_1_set_Item_m242054_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31428_MethodInfos[] =
{
	&IList_1_IndexOf_m242055_MethodInfo,
	&IList_1_Insert_m242056_MethodInfo,
	&IList_1_RemoveAt_m242057_MethodInfo,
	&IList_1_get_Item_m242053_MethodInfo,
	&IList_1_set_Item_m242054_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31427_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31429_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31428_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31427_il2cpp_TypeInfo,
	&IEnumerable_1_t31429_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31428_0_0_0;
extern Il2CppType IList_1_t31428_1_0_0;
struct IList_1_t31428;
extern TypeInfo IList_1_t31428_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31428_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31428_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31428_MethodInfos/* methods */
	, IList_1_t31428_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31428_il2cpp_TypeInfo/* element_class */
	, IList_1_t31428_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31428_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31428_0_0_0/* byval_arg */
	, &IList_1_t31428_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31428_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27395_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_SCENE_T.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242058_MethodInfo;
static PropertyInfo IEnumerator_1_t27395____Current_PropertyInfo = 
{
	&IEnumerator_1_t27395_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242058_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27395_PropertyInfos[] =
{
	&IEnumerator_1_t27395____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27395_il2cpp_TypeInfo;
extern Il2CppType SCENE_TYPE_t1128_0_0_0;
extern void* RuntimeInvoker_SCENE_TYPE_t1128 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242058_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27395_il2cpp_TypeInfo/* declaring_type */
	, &SCENE_TYPE_t1128_0_0_0/* return_type */
	, RuntimeInvoker_SCENE_TYPE_t1128/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27395_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242058_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27395_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27395_0_0_0;
extern Il2CppType IEnumerator_1_t27395_1_0_0;
struct IEnumerator_1_t27395;
extern TypeInfo IEnumerator_1_t27395_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27395_GenericClass;
TypeInfo IEnumerator_1_t27395_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27395_MethodInfos/* methods */
	, IEnumerator_1_t27395_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27395_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27395_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27395_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27395_0_0_0/* byval_arg */
	, &IEnumerator_1_t27395_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27395_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1001.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1001MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo;
extern TypeInfo SCENE_TYPE_t1128_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123963_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSCENE_TYPE_t1128_m196926_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSCENE_TYPE_t1128_m196926 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSCENE_TYPE_t1128_m196926_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123958_MethodInfo;
 void InternalEnumerator_1__ctor_m123958 (InternalEnumerator_1_t16587 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123959_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123959 (InternalEnumerator_1_t16587 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123960_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123960 (InternalEnumerator_1_t16587 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123963(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123963_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SCENE_TYPE_t1128_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123961_MethodInfo;
 void InternalEnumerator_1_Dispose_m123961 (InternalEnumerator_1_t16587 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123962_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123962 (InternalEnumerator_1_t16587 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123963_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123963 (InternalEnumerator_1_t16587 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSCENE_TYPE_t1128_m196926(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSCENE_TYPE_t1128_m196926_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16587____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16587, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16587____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16587, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16587_FieldInfos[] =
{
	&InternalEnumerator_1_t16587____array_FieldInfo,
	&InternalEnumerator_1_t16587____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123960_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16587____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16587_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123960_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123963_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16587____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16587_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123963_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16587_PropertyInfos[] =
{
	&InternalEnumerator_1_t16587____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16587____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16587_InternalEnumerator_1__ctor_m123958_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123958_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123958/* method */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16587_InternalEnumerator_1__ctor_m123958_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123959_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123959/* method */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123960_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123960/* method */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123961_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123961/* method */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123962_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123962/* method */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo;
extern Il2CppType SCENE_TYPE_t1128_0_0_0;
extern void* RuntimeInvoker_SCENE_TYPE_t1128 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123963_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123963/* method */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* declaring_type */
	, &SCENE_TYPE_t1128_0_0_0/* return_type */
	, RuntimeInvoker_SCENE_TYPE_t1128/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16587_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123958_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123959_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123960_MethodInfo,
	&InternalEnumerator_1_Dispose_m123961_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123962_MethodInfo,
	&InternalEnumerator_1_get_Current_m123963_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123960_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123962_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123959_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123961_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123963_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16587_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123960_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123962_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123959_MethodInfo,
	&InternalEnumerator_1_Dispose_m123961_MethodInfo,
	&InternalEnumerator_1_get_Current_m123963_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27395_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16587_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27395_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27395_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16587_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27395_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16587_0_0_0;
extern Il2CppType InternalEnumerator_1_t16587_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16587_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16587_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16587_MethodInfos/* methods */
	, InternalEnumerator_1_t16587_PropertyInfos/* properties */
	, InternalEnumerator_1_t16587_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16587_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16587_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16587_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16587_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16587_1_0_0/* this_arg */
	, InternalEnumerator_1_t16587_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16587_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16587)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>
extern MethodInfo ICollection_1_get_Count_m242059_MethodInfo;
static PropertyInfo ICollection_1_t31430____Count_PropertyInfo = 
{
	&ICollection_1_t31430_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242059_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242060_MethodInfo;
static PropertyInfo ICollection_1_t31430____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31430_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242060_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31430_PropertyInfos[] =
{
	&ICollection_1_t31430____Count_PropertyInfo,
	&ICollection_1_t31430____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242059_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31430_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242060_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31430_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SCENE_TYPE_t1128_0_0_0;
static ParameterInfo ICollection_1_t31430_ICollection_1_Add_m242061_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_TYPE_t1128_0_0_0},
};
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242061_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31430_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31430_ICollection_1_Add_m242061_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242062_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31430_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SCENE_TYPE_t1128_0_0_0;
static ParameterInfo ICollection_1_t31430_ICollection_1_Contains_m242063_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_TYPE_t1128_0_0_0},
};
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242063_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31430_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31430_ICollection_1_Contains_m242063_ParameterInfos/* parameters */
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
extern Il2CppType SCENE_TYPEU5BU5D_t25520_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31430_ICollection_1_CopyTo_m242064_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_TYPEU5BU5D_t25520_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242064_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31430_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31430_ICollection_1_CopyTo_m242064_ParameterInfos/* parameters */
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
extern Il2CppType SCENE_TYPE_t1128_0_0_0;
static ParameterInfo ICollection_1_t31430_ICollection_1_Remove_m242065_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_TYPE_t1128_0_0_0},
};
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242065_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31430_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31430_ICollection_1_Remove_m242065_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31430_MethodInfos[] =
{
	&ICollection_1_get_Count_m242059_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242060_MethodInfo,
	&ICollection_1_Add_m242061_MethodInfo,
	&ICollection_1_Clear_m242062_MethodInfo,
	&ICollection_1_Contains_m242063_MethodInfo,
	&ICollection_1_CopyTo_m242064_MethodInfo,
	&ICollection_1_Remove_m242065_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31432_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31430_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31432_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31430_0_0_0;
extern Il2CppType ICollection_1_t31430_1_0_0;
struct ICollection_1_t31430;
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31430_GenericClass;
TypeInfo ICollection_1_t31430_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31430_MethodInfos/* methods */
	, ICollection_1_t31430_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31430_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31430_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31430_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31430_0_0_0/* byval_arg */
	, &ICollection_1_t31430_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31430_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31432_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>
extern TypeInfo IEnumerable_1_t31432_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27395_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242066_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31432_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27395_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31432_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242066_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31432_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31432_0_0_0;
extern Il2CppType IEnumerable_1_t31432_1_0_0;
struct IEnumerable_1_t31432;
extern TypeInfo IEnumerable_1_t31432_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31432_GenericClass;
TypeInfo IEnumerable_1_t31432_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31432_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31432_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31432_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31432_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31432_0_0_0/* byval_arg */
	, &IEnumerable_1_t31432_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31432_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31431_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>
extern MethodInfo IList_1_get_Item_m242067_MethodInfo;
extern MethodInfo IList_1_set_Item_m242068_MethodInfo;
static PropertyInfo IList_1_t31431____Item_PropertyInfo = 
{
	&IList_1_t31431_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242067_MethodInfo/* get */
	, &IList_1_set_Item_m242068_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31431_PropertyInfos[] =
{
	&IList_1_t31431____Item_PropertyInfo,
	NULL
};
extern Il2CppType SCENE_TYPE_t1128_0_0_0;
static ParameterInfo IList_1_t31431_IList_1_IndexOf_m242069_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SCENE_TYPE_t1128_0_0_0},
};
extern TypeInfo IList_1_t31431_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242069_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31431_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31431_IList_1_IndexOf_m242069_ParameterInfos/* parameters */
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
extern Il2CppType SCENE_TYPE_t1128_0_0_0;
static ParameterInfo IList_1_t31431_IList_1_Insert_m242070_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SCENE_TYPE_t1128_0_0_0},
};
extern TypeInfo IList_1_t31431_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242070_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31431_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31431_IList_1_Insert_m242070_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31431_IList_1_RemoveAt_m242071_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31431_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242071_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31431_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31431_IList_1_RemoveAt_m242071_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31431_IList_1_get_Item_m242067_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31431_il2cpp_TypeInfo;
extern Il2CppType SCENE_TYPE_t1128_0_0_0;
extern void* RuntimeInvoker_SCENE_TYPE_t1128_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242067_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31431_il2cpp_TypeInfo/* declaring_type */
	, &SCENE_TYPE_t1128_0_0_0/* return_type */
	, RuntimeInvoker_SCENE_TYPE_t1128_Int32_t73/* invoker_method */
	, IList_1_t31431_IList_1_get_Item_m242067_ParameterInfos/* parameters */
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
extern Il2CppType SCENE_TYPE_t1128_0_0_0;
static ParameterInfo IList_1_t31431_IList_1_set_Item_m242068_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SCENE_TYPE_t1128_0_0_0},
};
extern TypeInfo IList_1_t31431_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/SCENE_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242068_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31431_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31431_IList_1_set_Item_m242068_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31431_MethodInfos[] =
{
	&IList_1_IndexOf_m242069_MethodInfo,
	&IList_1_Insert_m242070_MethodInfo,
	&IList_1_RemoveAt_m242071_MethodInfo,
	&IList_1_get_Item_m242067_MethodInfo,
	&IList_1_set_Item_m242068_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31430_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31432_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31431_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31430_il2cpp_TypeInfo,
	&IEnumerable_1_t31432_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31431_0_0_0;
extern Il2CppType IList_1_t31431_1_0_0;
struct IList_1_t31431;
extern TypeInfo IList_1_t31431_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31431_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31431_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31431_MethodInfos/* methods */
	, IList_1_t31431_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31431_il2cpp_TypeInfo/* element_class */
	, IList_1_t31431_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31431_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31431_0_0_0/* byval_arg */
	, &IList_1_t31431_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31431_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27396_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_CopySce.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>
extern MethodInfo IEnumerator_1_get_Current_m242072_MethodInfo;
static PropertyInfo IEnumerator_1_t27396____Current_PropertyInfo = 
{
	&IEnumerator_1_t27396_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242072_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27396_PropertyInfos[] =
{
	&IEnumerator_1_t27396____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27396_il2cpp_TypeInfo;
extern Il2CppType CopyScene_PlayType_t1129_0_0_0;
extern void* RuntimeInvoker_CopyScene_PlayType_t1129 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242072_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27396_il2cpp_TypeInfo/* declaring_type */
	, &CopyScene_PlayType_t1129_0_0_0/* return_type */
	, RuntimeInvoker_CopyScene_PlayType_t1129/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27396_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242072_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27396_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27396_0_0_0;
extern Il2CppType IEnumerator_1_t27396_1_0_0;
struct IEnumerator_1_t27396;
extern TypeInfo IEnumerator_1_t27396_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27396_GenericClass;
TypeInfo IEnumerator_1_t27396_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27396_MethodInfos/* methods */
	, IEnumerator_1_t27396_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27396_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27396_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27396_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27396_0_0_0/* byval_arg */
	, &IEnumerator_1_t27396_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27396_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1002.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1002MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo;
extern TypeInfo CopyScene_PlayType_t1129_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123969_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCopyScene_PlayType_t1129_m196937_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCopyScene_PlayType_t1129_m196937 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisCopyScene_PlayType_t1129_m196937_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123964_MethodInfo;
 void InternalEnumerator_1__ctor_m123964 (InternalEnumerator_1_t16588 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123965_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123965 (InternalEnumerator_1_t16588 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123966_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123966 (InternalEnumerator_1_t16588 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123969(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123969_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CopyScene_PlayType_t1129_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123967_MethodInfo;
 void InternalEnumerator_1_Dispose_m123967 (InternalEnumerator_1_t16588 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123968_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123968 (InternalEnumerator_1_t16588 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123969_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123969 (InternalEnumerator_1_t16588 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCopyScene_PlayType_t1129_m196937(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCopyScene_PlayType_t1129_m196937_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16588____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16588, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16588____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16588, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16588_FieldInfos[] =
{
	&InternalEnumerator_1_t16588____array_FieldInfo,
	&InternalEnumerator_1_t16588____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123966_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16588____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16588_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123966_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123969_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16588____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16588_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123969_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16588_PropertyInfos[] =
{
	&InternalEnumerator_1_t16588____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16588____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16588_InternalEnumerator_1__ctor_m123964_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123964_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123964/* method */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16588_InternalEnumerator_1__ctor_m123964_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123965_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123965/* method */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123966_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123966/* method */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123967_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123967/* method */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123968_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123968/* method */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo;
extern Il2CppType CopyScene_PlayType_t1129_0_0_0;
extern void* RuntimeInvoker_CopyScene_PlayType_t1129 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123969_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123969/* method */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* declaring_type */
	, &CopyScene_PlayType_t1129_0_0_0/* return_type */
	, RuntimeInvoker_CopyScene_PlayType_t1129/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16588_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123964_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123965_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123966_MethodInfo,
	&InternalEnumerator_1_Dispose_m123967_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123968_MethodInfo,
	&InternalEnumerator_1_get_Current_m123969_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123966_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123968_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123965_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123967_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123969_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16588_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123966_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123968_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123965_MethodInfo,
	&InternalEnumerator_1_Dispose_m123967_MethodInfo,
	&InternalEnumerator_1_get_Current_m123969_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27396_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16588_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27396_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27396_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16588_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27396_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16588_0_0_0;
extern Il2CppType InternalEnumerator_1_t16588_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16588_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16588_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16588_MethodInfos/* methods */
	, InternalEnumerator_1_t16588_PropertyInfos/* properties */
	, InternalEnumerator_1_t16588_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16588_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16588_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16588_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16588_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16588_1_0_0/* this_arg */
	, InternalEnumerator_1_t16588_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16588_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16588)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>
extern MethodInfo ICollection_1_get_Count_m242073_MethodInfo;
static PropertyInfo ICollection_1_t31433____Count_PropertyInfo = 
{
	&ICollection_1_t31433_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242073_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242074_MethodInfo;
static PropertyInfo ICollection_1_t31433____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31433_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242074_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31433_PropertyInfos[] =
{
	&ICollection_1_t31433____Count_PropertyInfo,
	&ICollection_1_t31433____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_Count()
MethodInfo ICollection_1_get_Count_m242073_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31433_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242074_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31433_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CopyScene_PlayType_t1129_0_0_0;
static ParameterInfo ICollection_1_t31433_ICollection_1_Add_m242075_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CopyScene_PlayType_t1129_0_0_0},
};
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Add(T)
MethodInfo ICollection_1_Add_m242075_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31433_ICollection_1_Add_m242075_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Clear()
MethodInfo ICollection_1_Clear_m242076_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31433_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CopyScene_PlayType_t1129_0_0_0;
static ParameterInfo ICollection_1_t31433_ICollection_1_Contains_m242077_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CopyScene_PlayType_t1129_0_0_0},
};
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Contains(T)
MethodInfo ICollection_1_Contains_m242077_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31433_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31433_ICollection_1_Contains_m242077_ParameterInfos/* parameters */
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
extern Il2CppType CopyScene_PlayTypeU5BU5D_t25521_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31433_ICollection_1_CopyTo_m242078_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CopyScene_PlayTypeU5BU5D_t25521_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242078_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31433_ICollection_1_CopyTo_m242078_ParameterInfos/* parameters */
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
extern Il2CppType CopyScene_PlayType_t1129_0_0_0;
static ParameterInfo ICollection_1_t31433_ICollection_1_Remove_m242079_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CopyScene_PlayType_t1129_0_0_0},
};
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Remove(T)
MethodInfo ICollection_1_Remove_m242079_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31433_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31433_ICollection_1_Remove_m242079_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31433_MethodInfos[] =
{
	&ICollection_1_get_Count_m242073_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242074_MethodInfo,
	&ICollection_1_Add_m242075_MethodInfo,
	&ICollection_1_Clear_m242076_MethodInfo,
	&ICollection_1_Contains_m242077_MethodInfo,
	&ICollection_1_CopyTo_m242078_MethodInfo,
	&ICollection_1_Remove_m242079_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31435_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31433_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31435_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31433_0_0_0;
extern Il2CppType ICollection_1_t31433_1_0_0;
struct ICollection_1_t31433;
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31433_GenericClass;
TypeInfo ICollection_1_t31433_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31433_MethodInfos/* methods */
	, ICollection_1_t31433_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31433_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31433_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31433_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31433_0_0_0/* byval_arg */
	, &ICollection_1_t31433_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31433_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31435_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>
extern TypeInfo IEnumerable_1_t31435_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27396_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242080_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31435_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27396_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31435_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242080_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31435_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31435_0_0_0;
extern Il2CppType IEnumerable_1_t31435_1_0_0;
struct IEnumerable_1_t31435;
extern TypeInfo IEnumerable_1_t31435_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31435_GenericClass;
TypeInfo IEnumerable_1_t31435_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31435_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31435_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31435_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31435_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31435_0_0_0/* byval_arg */
	, &IEnumerable_1_t31435_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31435_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31434_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>
extern MethodInfo IList_1_get_Item_m242081_MethodInfo;
extern MethodInfo IList_1_set_Item_m242082_MethodInfo;
static PropertyInfo IList_1_t31434____Item_PropertyInfo = 
{
	&IList_1_t31434_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242081_MethodInfo/* get */
	, &IList_1_set_Item_m242082_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31434_PropertyInfos[] =
{
	&IList_1_t31434____Item_PropertyInfo,
	NULL
};
extern Il2CppType CopyScene_PlayType_t1129_0_0_0;
static ParameterInfo IList_1_t31434_IList_1_IndexOf_m242083_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CopyScene_PlayType_t1129_0_0_0},
};
extern TypeInfo IList_1_t31434_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242083_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31434_IList_1_IndexOf_m242083_ParameterInfos/* parameters */
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
extern Il2CppType CopyScene_PlayType_t1129_0_0_0;
static ParameterInfo IList_1_t31434_IList_1_Insert_m242084_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CopyScene_PlayType_t1129_0_0_0},
};
extern TypeInfo IList_1_t31434_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242084_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31434_IList_1_Insert_m242084_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31434_IList_1_RemoveAt_m242085_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31434_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242085_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31434_IList_1_RemoveAt_m242085_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31434_IList_1_get_Item_m242081_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31434_il2cpp_TypeInfo;
extern Il2CppType CopyScene_PlayType_t1129_0_0_0;
extern void* RuntimeInvoker_CopyScene_PlayType_t1129_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242081_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31434_il2cpp_TypeInfo/* declaring_type */
	, &CopyScene_PlayType_t1129_0_0_0/* return_type */
	, RuntimeInvoker_CopyScene_PlayType_t1129_Int32_t73/* invoker_method */
	, IList_1_t31434_IList_1_get_Item_m242081_ParameterInfos/* parameters */
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
extern Il2CppType CopyScene_PlayType_t1129_0_0_0;
static ParameterInfo IList_1_t31434_IList_1_set_Item_m242082_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CopyScene_PlayType_t1129_0_0_0},
};
extern TypeInfo IList_1_t31434_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CopyScene_PlayType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242082_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31434_IList_1_set_Item_m242082_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31434_MethodInfos[] =
{
	&IList_1_IndexOf_m242083_MethodInfo,
	&IList_1_Insert_m242084_MethodInfo,
	&IList_1_RemoveAt_m242085_MethodInfo,
	&IList_1_get_Item_m242081_MethodInfo,
	&IList_1_set_Item_m242082_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31433_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31435_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31434_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31433_il2cpp_TypeInfo,
	&IEnumerable_1_t31435_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31434_0_0_0;
extern Il2CppType IList_1_t31434_1_0_0;
struct IList_1_t31434;
extern TypeInfo IList_1_t31434_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31434_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31434_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31434_MethodInfos/* methods */
	, IList_1_t31434_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31434_il2cpp_TypeInfo/* element_class */
	, IList_1_t31434_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31434_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31434_0_0_0/* byval_arg */
	, &IList_1_t31434_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31434_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27397_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_DAMAGEB.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242086_MethodInfo;
static PropertyInfo IEnumerator_1_t27397____Current_PropertyInfo = 
{
	&IEnumerator_1_t27397_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242086_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27397_PropertyInfos[] =
{
	&IEnumerator_1_t27397____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27397_il2cpp_TypeInfo;
extern Il2CppType DAMAGEBOARD_TYPE_t1130_0_0_0;
extern void* RuntimeInvoker_DAMAGEBOARD_TYPE_t1130 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242086_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27397_il2cpp_TypeInfo/* declaring_type */
	, &DAMAGEBOARD_TYPE_t1130_0_0_0/* return_type */
	, RuntimeInvoker_DAMAGEBOARD_TYPE_t1130/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27397_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242086_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27397_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27397_0_0_0;
extern Il2CppType IEnumerator_1_t27397_1_0_0;
struct IEnumerator_1_t27397;
extern TypeInfo IEnumerator_1_t27397_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27397_GenericClass;
TypeInfo IEnumerator_1_t27397_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27397_MethodInfos/* methods */
	, IEnumerator_1_t27397_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27397_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27397_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27397_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27397_0_0_0/* byval_arg */
	, &IEnumerator_1_t27397_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27397_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1003.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1003MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo;
extern TypeInfo DAMAGEBOARD_TYPE_t1130_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123975_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDAMAGEBOARD_TYPE_t1130_m196948_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDAMAGEBOARD_TYPE_t1130_m196948 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisDAMAGEBOARD_TYPE_t1130_m196948_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123970_MethodInfo;
 void InternalEnumerator_1__ctor_m123970 (InternalEnumerator_1_t16589 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123971_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123971 (InternalEnumerator_1_t16589 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123972_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123972 (InternalEnumerator_1_t16589 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123975(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123975_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DAMAGEBOARD_TYPE_t1130_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123973_MethodInfo;
 void InternalEnumerator_1_Dispose_m123973 (InternalEnumerator_1_t16589 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123974_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123974 (InternalEnumerator_1_t16589 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123975_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123975 (InternalEnumerator_1_t16589 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDAMAGEBOARD_TYPE_t1130_m196948(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDAMAGEBOARD_TYPE_t1130_m196948_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16589____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16589, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16589____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16589, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16589_FieldInfos[] =
{
	&InternalEnumerator_1_t16589____array_FieldInfo,
	&InternalEnumerator_1_t16589____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123972_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16589____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16589_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123972_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123975_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16589____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16589_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123975_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16589_PropertyInfos[] =
{
	&InternalEnumerator_1_t16589____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16589____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16589_InternalEnumerator_1__ctor_m123970_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123970_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123970/* method */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16589_InternalEnumerator_1__ctor_m123970_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123971_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123971/* method */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123972_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123972/* method */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123973_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123973/* method */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123974_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123974/* method */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo;
extern Il2CppType DAMAGEBOARD_TYPE_t1130_0_0_0;
extern void* RuntimeInvoker_DAMAGEBOARD_TYPE_t1130 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123975_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123975/* method */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* declaring_type */
	, &DAMAGEBOARD_TYPE_t1130_0_0_0/* return_type */
	, RuntimeInvoker_DAMAGEBOARD_TYPE_t1130/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16589_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123970_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123971_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123972_MethodInfo,
	&InternalEnumerator_1_Dispose_m123973_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123974_MethodInfo,
	&InternalEnumerator_1_get_Current_m123975_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123972_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123974_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123971_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123973_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123975_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16589_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123972_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123974_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123971_MethodInfo,
	&InternalEnumerator_1_Dispose_m123973_MethodInfo,
	&InternalEnumerator_1_get_Current_m123975_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27397_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16589_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27397_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27397_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16589_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27397_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16589_0_0_0;
extern Il2CppType InternalEnumerator_1_t16589_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16589_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16589_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16589_MethodInfos/* methods */
	, InternalEnumerator_1_t16589_PropertyInfos/* properties */
	, InternalEnumerator_1_t16589_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16589_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16589_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16589_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16589_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16589_1_0_0/* this_arg */
	, InternalEnumerator_1_t16589_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16589_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16589)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>
extern MethodInfo ICollection_1_get_Count_m242087_MethodInfo;
static PropertyInfo ICollection_1_t31436____Count_PropertyInfo = 
{
	&ICollection_1_t31436_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242087_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242088_MethodInfo;
static PropertyInfo ICollection_1_t31436____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31436_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242088_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31436_PropertyInfos[] =
{
	&ICollection_1_t31436____Count_PropertyInfo,
	&ICollection_1_t31436____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242087_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31436_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242088_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31436_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DAMAGEBOARD_TYPE_t1130_0_0_0;
static ParameterInfo ICollection_1_t31436_ICollection_1_Add_m242089_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DAMAGEBOARD_TYPE_t1130_0_0_0},
};
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242089_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31436_ICollection_1_Add_m242089_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242090_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31436_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DAMAGEBOARD_TYPE_t1130_0_0_0;
static ParameterInfo ICollection_1_t31436_ICollection_1_Contains_m242091_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DAMAGEBOARD_TYPE_t1130_0_0_0},
};
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242091_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31436_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31436_ICollection_1_Contains_m242091_ParameterInfos/* parameters */
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
extern Il2CppType DAMAGEBOARD_TYPEU5BU5D_t25522_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31436_ICollection_1_CopyTo_m242092_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DAMAGEBOARD_TYPEU5BU5D_t25522_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242092_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31436_ICollection_1_CopyTo_m242092_ParameterInfos/* parameters */
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
extern Il2CppType DAMAGEBOARD_TYPE_t1130_0_0_0;
static ParameterInfo ICollection_1_t31436_ICollection_1_Remove_m242093_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DAMAGEBOARD_TYPE_t1130_0_0_0},
};
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242093_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31436_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31436_ICollection_1_Remove_m242093_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31436_MethodInfos[] =
{
	&ICollection_1_get_Count_m242087_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242088_MethodInfo,
	&ICollection_1_Add_m242089_MethodInfo,
	&ICollection_1_Clear_m242090_MethodInfo,
	&ICollection_1_Contains_m242091_MethodInfo,
	&ICollection_1_CopyTo_m242092_MethodInfo,
	&ICollection_1_Remove_m242093_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31438_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31436_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31438_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31436_0_0_0;
extern Il2CppType ICollection_1_t31436_1_0_0;
struct ICollection_1_t31436;
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31436_GenericClass;
TypeInfo ICollection_1_t31436_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31436_MethodInfos/* methods */
	, ICollection_1_t31436_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31436_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31436_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31436_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31436_0_0_0/* byval_arg */
	, &ICollection_1_t31436_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31436_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31438_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>
extern TypeInfo IEnumerable_1_t31438_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27397_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242094_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31438_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27397_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31438_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242094_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31438_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31438_0_0_0;
extern Il2CppType IEnumerable_1_t31438_1_0_0;
struct IEnumerable_1_t31438;
extern TypeInfo IEnumerable_1_t31438_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31438_GenericClass;
TypeInfo IEnumerable_1_t31438_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31438_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31438_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31438_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31438_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31438_0_0_0/* byval_arg */
	, &IEnumerable_1_t31438_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31438_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31437_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>
extern MethodInfo IList_1_get_Item_m242095_MethodInfo;
extern MethodInfo IList_1_set_Item_m242096_MethodInfo;
static PropertyInfo IList_1_t31437____Item_PropertyInfo = 
{
	&IList_1_t31437_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242095_MethodInfo/* get */
	, &IList_1_set_Item_m242096_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31437_PropertyInfos[] =
{
	&IList_1_t31437____Item_PropertyInfo,
	NULL
};
extern Il2CppType DAMAGEBOARD_TYPE_t1130_0_0_0;
static ParameterInfo IList_1_t31437_IList_1_IndexOf_m242097_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DAMAGEBOARD_TYPE_t1130_0_0_0},
};
extern TypeInfo IList_1_t31437_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242097_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31437_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31437_IList_1_IndexOf_m242097_ParameterInfos/* parameters */
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
extern Il2CppType DAMAGEBOARD_TYPE_t1130_0_0_0;
static ParameterInfo IList_1_t31437_IList_1_Insert_m242098_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DAMAGEBOARD_TYPE_t1130_0_0_0},
};
extern TypeInfo IList_1_t31437_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242098_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31437_IList_1_Insert_m242098_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31437_IList_1_RemoveAt_m242099_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31437_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242099_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31437_IList_1_RemoveAt_m242099_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31437_IList_1_get_Item_m242095_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31437_il2cpp_TypeInfo;
extern Il2CppType DAMAGEBOARD_TYPE_t1130_0_0_0;
extern void* RuntimeInvoker_DAMAGEBOARD_TYPE_t1130_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242095_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31437_il2cpp_TypeInfo/* declaring_type */
	, &DAMAGEBOARD_TYPE_t1130_0_0_0/* return_type */
	, RuntimeInvoker_DAMAGEBOARD_TYPE_t1130_Int32_t73/* invoker_method */
	, IList_1_t31437_IList_1_get_Item_m242095_ParameterInfos/* parameters */
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
extern Il2CppType DAMAGEBOARD_TYPE_t1130_0_0_0;
static ParameterInfo IList_1_t31437_IList_1_set_Item_m242096_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DAMAGEBOARD_TYPE_t1130_0_0_0},
};
extern TypeInfo IList_1_t31437_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242096_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31437_IList_1_set_Item_m242096_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31437_MethodInfos[] =
{
	&IList_1_IndexOf_m242097_MethodInfo,
	&IList_1_Insert_m242098_MethodInfo,
	&IList_1_RemoveAt_m242099_MethodInfo,
	&IList_1_get_Item_m242095_MethodInfo,
	&IList_1_set_Item_m242096_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31436_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31438_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31437_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31436_il2cpp_TypeInfo,
	&IEnumerable_1_t31438_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31437_0_0_0;
extern Il2CppType IList_1_t31437_1_0_0;
struct IList_1_t31437;
extern TypeInfo IList_1_t31437_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31437_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31437_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31437_MethodInfos/* methods */
	, IList_1_t31437_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31437_il2cpp_TypeInfo/* element_class */
	, IList_1_t31437_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31437_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31437_0_0_0/* byval_arg */
	, &IList_1_t31437_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31437_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27398_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_CAMP_DE.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>
extern MethodInfo IEnumerator_1_get_Current_m242100_MethodInfo;
static PropertyInfo IEnumerator_1_t27398____Current_PropertyInfo = 
{
	&IEnumerator_1_t27398_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242100_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27398_PropertyInfos[] =
{
	&IEnumerator_1_t27398____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27398_il2cpp_TypeInfo;
extern Il2CppType CAMP_DEFINE_t1131_0_0_0;
extern void* RuntimeInvoker_CAMP_DEFINE_t1131 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242100_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27398_il2cpp_TypeInfo/* declaring_type */
	, &CAMP_DEFINE_t1131_0_0_0/* return_type */
	, RuntimeInvoker_CAMP_DEFINE_t1131/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27398_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242100_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27398_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27398_0_0_0;
extern Il2CppType IEnumerator_1_t27398_1_0_0;
struct IEnumerator_1_t27398;
extern TypeInfo IEnumerator_1_t27398_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27398_GenericClass;
TypeInfo IEnumerator_1_t27398_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27398_MethodInfos/* methods */
	, IEnumerator_1_t27398_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27398_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27398_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27398_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27398_0_0_0/* byval_arg */
	, &IEnumerator_1_t27398_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27398_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1004.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1004MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo;
extern TypeInfo CAMP_DEFINE_t1131_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123981_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCAMP_DEFINE_t1131_m196959_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCAMP_DEFINE_t1131_m196959 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisCAMP_DEFINE_t1131_m196959_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123976_MethodInfo;
 void InternalEnumerator_1__ctor_m123976 (InternalEnumerator_1_t16590 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123977_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123977 (InternalEnumerator_1_t16590 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123978_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123978 (InternalEnumerator_1_t16590 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123981(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123981_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CAMP_DEFINE_t1131_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123979_MethodInfo;
 void InternalEnumerator_1_Dispose_m123979 (InternalEnumerator_1_t16590 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123980_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123980 (InternalEnumerator_1_t16590 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123981_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123981 (InternalEnumerator_1_t16590 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCAMP_DEFINE_t1131_m196959(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCAMP_DEFINE_t1131_m196959_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16590____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16590, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16590____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16590, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16590_FieldInfos[] =
{
	&InternalEnumerator_1_t16590____array_FieldInfo,
	&InternalEnumerator_1_t16590____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123978_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16590____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16590_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123978_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123981_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16590____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16590_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123981_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16590_PropertyInfos[] =
{
	&InternalEnumerator_1_t16590____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16590____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16590_InternalEnumerator_1__ctor_m123976_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123976_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123976/* method */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16590_InternalEnumerator_1__ctor_m123976_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123977_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123977/* method */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123978_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123978/* method */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123979_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123979/* method */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123980_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123980/* method */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo;
extern Il2CppType CAMP_DEFINE_t1131_0_0_0;
extern void* RuntimeInvoker_CAMP_DEFINE_t1131 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123981_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123981/* method */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* declaring_type */
	, &CAMP_DEFINE_t1131_0_0_0/* return_type */
	, RuntimeInvoker_CAMP_DEFINE_t1131/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16590_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123976_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123977_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123978_MethodInfo,
	&InternalEnumerator_1_Dispose_m123979_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123980_MethodInfo,
	&InternalEnumerator_1_get_Current_m123981_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123978_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123980_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123977_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123979_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123981_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16590_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123978_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123980_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123977_MethodInfo,
	&InternalEnumerator_1_Dispose_m123979_MethodInfo,
	&InternalEnumerator_1_get_Current_m123981_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27398_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16590_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27398_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27398_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16590_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27398_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16590_0_0_0;
extern Il2CppType InternalEnumerator_1_t16590_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16590_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16590_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16590_MethodInfos/* methods */
	, InternalEnumerator_1_t16590_PropertyInfos/* properties */
	, InternalEnumerator_1_t16590_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16590_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16590_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16590_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16590_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16590_1_0_0/* this_arg */
	, InternalEnumerator_1_t16590_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16590_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16590)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>
extern MethodInfo ICollection_1_get_Count_m242101_MethodInfo;
static PropertyInfo ICollection_1_t31439____Count_PropertyInfo = 
{
	&ICollection_1_t31439_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242101_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242102_MethodInfo;
static PropertyInfo ICollection_1_t31439____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31439_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242102_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31439_PropertyInfos[] =
{
	&ICollection_1_t31439____Count_PropertyInfo,
	&ICollection_1_t31439____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_Count()
MethodInfo ICollection_1_get_Count_m242101_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31439_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242102_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31439_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CAMP_DEFINE_t1131_0_0_0;
static ParameterInfo ICollection_1_t31439_ICollection_1_Add_m242103_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CAMP_DEFINE_t1131_0_0_0},
};
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Add(T)
MethodInfo ICollection_1_Add_m242103_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31439_ICollection_1_Add_m242103_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Clear()
MethodInfo ICollection_1_Clear_m242104_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31439_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CAMP_DEFINE_t1131_0_0_0;
static ParameterInfo ICollection_1_t31439_ICollection_1_Contains_m242105_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CAMP_DEFINE_t1131_0_0_0},
};
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Contains(T)
MethodInfo ICollection_1_Contains_m242105_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31439_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31439_ICollection_1_Contains_m242105_ParameterInfos/* parameters */
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
extern Il2CppType CAMP_DEFINEU5BU5D_t25523_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31439_ICollection_1_CopyTo_m242106_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CAMP_DEFINEU5BU5D_t25523_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242106_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31439_ICollection_1_CopyTo_m242106_ParameterInfos/* parameters */
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
extern Il2CppType CAMP_DEFINE_t1131_0_0_0;
static ParameterInfo ICollection_1_t31439_ICollection_1_Remove_m242107_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CAMP_DEFINE_t1131_0_0_0},
};
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Remove(T)
MethodInfo ICollection_1_Remove_m242107_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31439_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31439_ICollection_1_Remove_m242107_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31439_MethodInfos[] =
{
	&ICollection_1_get_Count_m242101_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242102_MethodInfo,
	&ICollection_1_Add_m242103_MethodInfo,
	&ICollection_1_Clear_m242104_MethodInfo,
	&ICollection_1_Contains_m242105_MethodInfo,
	&ICollection_1_CopyTo_m242106_MethodInfo,
	&ICollection_1_Remove_m242107_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31441_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31439_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31441_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31439_0_0_0;
extern Il2CppType ICollection_1_t31439_1_0_0;
struct ICollection_1_t31439;
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31439_GenericClass;
TypeInfo ICollection_1_t31439_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31439_MethodInfos/* methods */
	, ICollection_1_t31439_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31439_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31439_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31439_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31439_0_0_0/* byval_arg */
	, &ICollection_1_t31439_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31439_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31441_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>
extern TypeInfo IEnumerable_1_t31441_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27398_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242108_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31441_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27398_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31441_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242108_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31441_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31441_0_0_0;
extern Il2CppType IEnumerable_1_t31441_1_0_0;
struct IEnumerable_1_t31441;
extern TypeInfo IEnumerable_1_t31441_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31441_GenericClass;
TypeInfo IEnumerable_1_t31441_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31441_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31441_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31441_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31441_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31441_0_0_0/* byval_arg */
	, &IEnumerable_1_t31441_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31441_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31440_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>
extern MethodInfo IList_1_get_Item_m242109_MethodInfo;
extern MethodInfo IList_1_set_Item_m242110_MethodInfo;
static PropertyInfo IList_1_t31440____Item_PropertyInfo = 
{
	&IList_1_t31440_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242109_MethodInfo/* get */
	, &IList_1_set_Item_m242110_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31440_PropertyInfos[] =
{
	&IList_1_t31440____Item_PropertyInfo,
	NULL
};
extern Il2CppType CAMP_DEFINE_t1131_0_0_0;
static ParameterInfo IList_1_t31440_IList_1_IndexOf_m242111_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CAMP_DEFINE_t1131_0_0_0},
};
extern TypeInfo IList_1_t31440_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242111_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31440_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31440_IList_1_IndexOf_m242111_ParameterInfos/* parameters */
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
extern Il2CppType CAMP_DEFINE_t1131_0_0_0;
static ParameterInfo IList_1_t31440_IList_1_Insert_m242112_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CAMP_DEFINE_t1131_0_0_0},
};
extern TypeInfo IList_1_t31440_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242112_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31440_IList_1_Insert_m242112_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31440_IList_1_RemoveAt_m242113_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31440_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242113_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31440_IList_1_RemoveAt_m242113_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31440_IList_1_get_Item_m242109_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31440_il2cpp_TypeInfo;
extern Il2CppType CAMP_DEFINE_t1131_0_0_0;
extern void* RuntimeInvoker_CAMP_DEFINE_t1131_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242109_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31440_il2cpp_TypeInfo/* declaring_type */
	, &CAMP_DEFINE_t1131_0_0_0/* return_type */
	, RuntimeInvoker_CAMP_DEFINE_t1131_Int32_t73/* invoker_method */
	, IList_1_t31440_IList_1_get_Item_m242109_ParameterInfos/* parameters */
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
extern Il2CppType CAMP_DEFINE_t1131_0_0_0;
static ParameterInfo IList_1_t31440_IList_1_set_Item_m242110_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CAMP_DEFINE_t1131_0_0_0},
};
extern TypeInfo IList_1_t31440_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/CAMP_DEFINE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242110_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31440_IList_1_set_Item_m242110_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31440_MethodInfos[] =
{
	&IList_1_IndexOf_m242111_MethodInfo,
	&IList_1_Insert_m242112_MethodInfo,
	&IList_1_RemoveAt_m242113_MethodInfo,
	&IList_1_get_Item_m242109_MethodInfo,
	&IList_1_set_Item_m242110_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31439_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31441_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31440_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31439_il2cpp_TypeInfo,
	&IEnumerable_1_t31441_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31440_0_0_0;
extern Il2CppType IList_1_t31440_1_0_0;
struct IList_1_t31440;
extern TypeInfo IList_1_t31440_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31440_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31440_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31440_MethodInfos/* methods */
	, IList_1_t31440_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31440_il2cpp_TypeInfo/* element_class */
	, IList_1_t31440_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31440_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31440_0_0_0/* byval_arg */
	, &IList_1_t31440_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31440_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27399_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_ITEM_CL.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>
extern MethodInfo IEnumerator_1_get_Current_m242114_MethodInfo;
static PropertyInfo IEnumerator_1_t27399____Current_PropertyInfo = 
{
	&IEnumerator_1_t27399_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242114_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27399_PropertyInfos[] =
{
	&IEnumerator_1_t27399____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27399_il2cpp_TypeInfo;
extern Il2CppType ITEM_CLASS_t1132_0_0_0;
extern void* RuntimeInvoker_ITEM_CLASS_t1132 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242114_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27399_il2cpp_TypeInfo/* declaring_type */
	, &ITEM_CLASS_t1132_0_0_0/* return_type */
	, RuntimeInvoker_ITEM_CLASS_t1132/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27399_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242114_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27399_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27399_0_0_0;
extern Il2CppType IEnumerator_1_t27399_1_0_0;
struct IEnumerator_1_t27399;
extern TypeInfo IEnumerator_1_t27399_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27399_GenericClass;
TypeInfo IEnumerator_1_t27399_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27399_MethodInfos/* methods */
	, IEnumerator_1_t27399_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27399_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27399_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27399_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27399_0_0_0/* byval_arg */
	, &IEnumerator_1_t27399_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27399_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1005.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1005MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo;
extern TypeInfo ITEM_CLASS_t1132_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123987_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisITEM_CLASS_t1132_m196970_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisITEM_CLASS_t1132_m196970 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisITEM_CLASS_t1132_m196970_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123982_MethodInfo;
 void InternalEnumerator_1__ctor_m123982 (InternalEnumerator_1_t16591 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123983_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123983 (InternalEnumerator_1_t16591 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123984_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123984 (InternalEnumerator_1_t16591 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123987(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123987_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ITEM_CLASS_t1132_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123985_MethodInfo;
 void InternalEnumerator_1_Dispose_m123985 (InternalEnumerator_1_t16591 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123986_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123986 (InternalEnumerator_1_t16591 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123987_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123987 (InternalEnumerator_1_t16591 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisITEM_CLASS_t1132_m196970(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisITEM_CLASS_t1132_m196970_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16591____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16591, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16591____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16591, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16591_FieldInfos[] =
{
	&InternalEnumerator_1_t16591____array_FieldInfo,
	&InternalEnumerator_1_t16591____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123984_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16591____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16591_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123984_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123987_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16591____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16591_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123987_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16591_PropertyInfos[] =
{
	&InternalEnumerator_1_t16591____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16591____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16591_InternalEnumerator_1__ctor_m123982_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123982_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123982/* method */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16591_InternalEnumerator_1__ctor_m123982_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123983_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123983/* method */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123984_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123984/* method */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123985_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123985/* method */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123986_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123986/* method */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo;
extern Il2CppType ITEM_CLASS_t1132_0_0_0;
extern void* RuntimeInvoker_ITEM_CLASS_t1132 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123987_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123987/* method */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* declaring_type */
	, &ITEM_CLASS_t1132_0_0_0/* return_type */
	, RuntimeInvoker_ITEM_CLASS_t1132/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16591_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123982_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123983_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123984_MethodInfo,
	&InternalEnumerator_1_Dispose_m123985_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123986_MethodInfo,
	&InternalEnumerator_1_get_Current_m123987_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123984_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123986_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123983_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123985_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123987_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16591_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123984_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123986_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123983_MethodInfo,
	&InternalEnumerator_1_Dispose_m123985_MethodInfo,
	&InternalEnumerator_1_get_Current_m123987_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27399_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16591_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27399_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27399_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16591_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27399_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16591_0_0_0;
extern Il2CppType InternalEnumerator_1_t16591_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16591_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16591_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16591_MethodInfos/* methods */
	, InternalEnumerator_1_t16591_PropertyInfos/* properties */
	, InternalEnumerator_1_t16591_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16591_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16591_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16591_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16591_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16591_1_0_0/* this_arg */
	, InternalEnumerator_1_t16591_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16591_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16591)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>
extern MethodInfo ICollection_1_get_Count_m242115_MethodInfo;
static PropertyInfo ICollection_1_t31442____Count_PropertyInfo = 
{
	&ICollection_1_t31442_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242116_MethodInfo;
static PropertyInfo ICollection_1_t31442____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31442_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242116_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31442_PropertyInfos[] =
{
	&ICollection_1_t31442____Count_PropertyInfo,
	&ICollection_1_t31442____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_Count()
MethodInfo ICollection_1_get_Count_m242115_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31442_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242116_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31442_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ITEM_CLASS_t1132_0_0_0;
static ParameterInfo ICollection_1_t31442_ICollection_1_Add_m242117_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_CLASS_t1132_0_0_0},
};
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Add(T)
MethodInfo ICollection_1_Add_m242117_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31442_ICollection_1_Add_m242117_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Clear()
MethodInfo ICollection_1_Clear_m242118_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31442_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ITEM_CLASS_t1132_0_0_0;
static ParameterInfo ICollection_1_t31442_ICollection_1_Contains_m242119_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_CLASS_t1132_0_0_0},
};
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Contains(T)
MethodInfo ICollection_1_Contains_m242119_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31442_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31442_ICollection_1_Contains_m242119_ParameterInfos/* parameters */
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
extern Il2CppType ITEM_CLASSU5BU5D_t25524_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31442_ICollection_1_CopyTo_m242120_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_CLASSU5BU5D_t25524_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242120_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31442_ICollection_1_CopyTo_m242120_ParameterInfos/* parameters */
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
extern Il2CppType ITEM_CLASS_t1132_0_0_0;
static ParameterInfo ICollection_1_t31442_ICollection_1_Remove_m242121_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_CLASS_t1132_0_0_0},
};
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Remove(T)
MethodInfo ICollection_1_Remove_m242121_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31442_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31442_ICollection_1_Remove_m242121_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31442_MethodInfos[] =
{
	&ICollection_1_get_Count_m242115_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242116_MethodInfo,
	&ICollection_1_Add_m242117_MethodInfo,
	&ICollection_1_Clear_m242118_MethodInfo,
	&ICollection_1_Contains_m242119_MethodInfo,
	&ICollection_1_CopyTo_m242120_MethodInfo,
	&ICollection_1_Remove_m242121_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31444_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31442_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31442_0_0_0;
extern Il2CppType ICollection_1_t31442_1_0_0;
struct ICollection_1_t31442;
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31442_GenericClass;
TypeInfo ICollection_1_t31442_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31442_MethodInfos/* methods */
	, ICollection_1_t31442_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31442_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31442_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31442_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31442_0_0_0/* byval_arg */
	, &ICollection_1_t31442_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31442_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31444_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>
extern TypeInfo IEnumerable_1_t31444_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27399_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242122_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31444_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27399_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31444_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242122_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31444_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31444_0_0_0;
extern Il2CppType IEnumerable_1_t31444_1_0_0;
struct IEnumerable_1_t31444;
extern TypeInfo IEnumerable_1_t31444_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31444_GenericClass;
TypeInfo IEnumerable_1_t31444_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31444_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31444_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31444_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31444_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31444_0_0_0/* byval_arg */
	, &IEnumerable_1_t31444_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31444_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31443_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>
extern MethodInfo IList_1_get_Item_m242123_MethodInfo;
extern MethodInfo IList_1_set_Item_m242124_MethodInfo;
static PropertyInfo IList_1_t31443____Item_PropertyInfo = 
{
	&IList_1_t31443_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242123_MethodInfo/* get */
	, &IList_1_set_Item_m242124_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31443_PropertyInfos[] =
{
	&IList_1_t31443____Item_PropertyInfo,
	NULL
};
extern Il2CppType ITEM_CLASS_t1132_0_0_0;
static ParameterInfo IList_1_t31443_IList_1_IndexOf_m242125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_CLASS_t1132_0_0_0},
};
extern TypeInfo IList_1_t31443_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242125_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31443_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31443_IList_1_IndexOf_m242125_ParameterInfos/* parameters */
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
extern Il2CppType ITEM_CLASS_t1132_0_0_0;
static ParameterInfo IList_1_t31443_IList_1_Insert_m242126_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ITEM_CLASS_t1132_0_0_0},
};
extern TypeInfo IList_1_t31443_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242126_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31443_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31443_IList_1_Insert_m242126_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31443_IList_1_RemoveAt_m242127_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31443_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242127_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31443_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31443_IList_1_RemoveAt_m242127_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31443_IList_1_get_Item_m242123_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31443_il2cpp_TypeInfo;
extern Il2CppType ITEM_CLASS_t1132_0_0_0;
extern void* RuntimeInvoker_ITEM_CLASS_t1132_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242123_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31443_il2cpp_TypeInfo/* declaring_type */
	, &ITEM_CLASS_t1132_0_0_0/* return_type */
	, RuntimeInvoker_ITEM_CLASS_t1132_Int32_t73/* invoker_method */
	, IList_1_t31443_IList_1_get_Item_m242123_ParameterInfos/* parameters */
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
extern Il2CppType ITEM_CLASS_t1132_0_0_0;
static ParameterInfo IList_1_t31443_IList_1_set_Item_m242124_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ITEM_CLASS_t1132_0_0_0},
};
extern TypeInfo IList_1_t31443_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_CLASS>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242124_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31443_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31443_IList_1_set_Item_m242124_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31443_MethodInfos[] =
{
	&IList_1_IndexOf_m242125_MethodInfo,
	&IList_1_Insert_m242126_MethodInfo,
	&IList_1_RemoveAt_m242127_MethodInfo,
	&IList_1_get_Item_m242123_MethodInfo,
	&IList_1_set_Item_m242124_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31442_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31444_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31443_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31442_il2cpp_TypeInfo,
	&IEnumerable_1_t31444_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31443_0_0_0;
extern Il2CppType IList_1_t31443_1_0_0;
struct IList_1_t31443;
extern TypeInfo IList_1_t31443_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31443_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31443_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31443_MethodInfos/* methods */
	, IList_1_t31443_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31443_il2cpp_TypeInfo/* element_class */
	, IList_1_t31443_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31443_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31443_0_0_0/* byval_arg */
	, &IList_1_t31443_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31443_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27400_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_ITEM_SU.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>
extern MethodInfo IEnumerator_1_get_Current_m242128_MethodInfo;
static PropertyInfo IEnumerator_1_t27400____Current_PropertyInfo = 
{
	&IEnumerator_1_t27400_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242128_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27400_PropertyInfos[] =
{
	&IEnumerator_1_t27400____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27400_il2cpp_TypeInfo;
extern Il2CppType ITEM_SUBCLASS_t1133_0_0_0;
extern void* RuntimeInvoker_ITEM_SUBCLASS_t1133 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242128_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27400_il2cpp_TypeInfo/* declaring_type */
	, &ITEM_SUBCLASS_t1133_0_0_0/* return_type */
	, RuntimeInvoker_ITEM_SUBCLASS_t1133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27400_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242128_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27400_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27400_0_0_0;
extern Il2CppType IEnumerator_1_t27400_1_0_0;
struct IEnumerator_1_t27400;
extern TypeInfo IEnumerator_1_t27400_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27400_GenericClass;
TypeInfo IEnumerator_1_t27400_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27400_MethodInfos/* methods */
	, IEnumerator_1_t27400_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27400_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27400_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27400_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27400_0_0_0/* byval_arg */
	, &IEnumerator_1_t27400_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27400_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1006.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1006MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo;
extern TypeInfo ITEM_SUBCLASS_t1133_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123993_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisITEM_SUBCLASS_t1133_m196981_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisITEM_SUBCLASS_t1133_m196981 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisITEM_SUBCLASS_t1133_m196981_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123988_MethodInfo;
 void InternalEnumerator_1__ctor_m123988 (InternalEnumerator_1_t16592 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123989_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123989 (InternalEnumerator_1_t16592 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123990_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123990 (InternalEnumerator_1_t16592 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123993(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123993_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ITEM_SUBCLASS_t1133_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123991_MethodInfo;
 void InternalEnumerator_1_Dispose_m123991 (InternalEnumerator_1_t16592 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123992_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123992 (InternalEnumerator_1_t16592 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123993_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123993 (InternalEnumerator_1_t16592 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisITEM_SUBCLASS_t1133_m196981(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisITEM_SUBCLASS_t1133_m196981_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16592____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16592, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16592____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16592, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16592_FieldInfos[] =
{
	&InternalEnumerator_1_t16592____array_FieldInfo,
	&InternalEnumerator_1_t16592____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123990_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16592____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16592_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123990_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123993_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16592____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16592_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123993_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16592_PropertyInfos[] =
{
	&InternalEnumerator_1_t16592____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16592____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16592_InternalEnumerator_1__ctor_m123988_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123988_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123988/* method */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16592_InternalEnumerator_1__ctor_m123988_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123989_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123989/* method */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123990_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123990/* method */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123991_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123991/* method */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123992_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123992/* method */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo;
extern Il2CppType ITEM_SUBCLASS_t1133_0_0_0;
extern void* RuntimeInvoker_ITEM_SUBCLASS_t1133 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123993_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123993/* method */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* declaring_type */
	, &ITEM_SUBCLASS_t1133_0_0_0/* return_type */
	, RuntimeInvoker_ITEM_SUBCLASS_t1133/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16592_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123988_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123989_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123990_MethodInfo,
	&InternalEnumerator_1_Dispose_m123991_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123992_MethodInfo,
	&InternalEnumerator_1_get_Current_m123993_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123990_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123992_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123989_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123991_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123993_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16592_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123990_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123992_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123989_MethodInfo,
	&InternalEnumerator_1_Dispose_m123991_MethodInfo,
	&InternalEnumerator_1_get_Current_m123993_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27400_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16592_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27400_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27400_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16592_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27400_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16592_0_0_0;
extern Il2CppType InternalEnumerator_1_t16592_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16592_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16592_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16592_MethodInfos/* methods */
	, InternalEnumerator_1_t16592_PropertyInfos/* properties */
	, InternalEnumerator_1_t16592_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16592_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16592_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16592_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16592_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16592_1_0_0/* this_arg */
	, InternalEnumerator_1_t16592_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16592_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16592)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>
extern MethodInfo ICollection_1_get_Count_m242129_MethodInfo;
static PropertyInfo ICollection_1_t31445____Count_PropertyInfo = 
{
	&ICollection_1_t31445_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242129_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242130_MethodInfo;
static PropertyInfo ICollection_1_t31445____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31445_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242130_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31445_PropertyInfos[] =
{
	&ICollection_1_t31445____Count_PropertyInfo,
	&ICollection_1_t31445____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_Count()
MethodInfo ICollection_1_get_Count_m242129_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31445_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242130_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31445_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ITEM_SUBCLASS_t1133_0_0_0;
static ParameterInfo ICollection_1_t31445_ICollection_1_Add_m242131_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_SUBCLASS_t1133_0_0_0},
};
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Add(T)
MethodInfo ICollection_1_Add_m242131_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31445_ICollection_1_Add_m242131_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Clear()
MethodInfo ICollection_1_Clear_m242132_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31445_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ITEM_SUBCLASS_t1133_0_0_0;
static ParameterInfo ICollection_1_t31445_ICollection_1_Contains_m242133_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_SUBCLASS_t1133_0_0_0},
};
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Contains(T)
MethodInfo ICollection_1_Contains_m242133_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31445_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31445_ICollection_1_Contains_m242133_ParameterInfos/* parameters */
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
extern Il2CppType ITEM_SUBCLASSU5BU5D_t25525_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31445_ICollection_1_CopyTo_m242134_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_SUBCLASSU5BU5D_t25525_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242134_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31445_ICollection_1_CopyTo_m242134_ParameterInfos/* parameters */
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
extern Il2CppType ITEM_SUBCLASS_t1133_0_0_0;
static ParameterInfo ICollection_1_t31445_ICollection_1_Remove_m242135_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_SUBCLASS_t1133_0_0_0},
};
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Remove(T)
MethodInfo ICollection_1_Remove_m242135_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31445_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31445_ICollection_1_Remove_m242135_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31445_MethodInfos[] =
{
	&ICollection_1_get_Count_m242129_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242130_MethodInfo,
	&ICollection_1_Add_m242131_MethodInfo,
	&ICollection_1_Clear_m242132_MethodInfo,
	&ICollection_1_Contains_m242133_MethodInfo,
	&ICollection_1_CopyTo_m242134_MethodInfo,
	&ICollection_1_Remove_m242135_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31447_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31445_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31447_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31445_0_0_0;
extern Il2CppType ICollection_1_t31445_1_0_0;
struct ICollection_1_t31445;
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31445_GenericClass;
TypeInfo ICollection_1_t31445_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31445_MethodInfos/* methods */
	, ICollection_1_t31445_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31445_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31445_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31445_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31445_0_0_0/* byval_arg */
	, &ICollection_1_t31445_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31445_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31447_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>
extern TypeInfo IEnumerable_1_t31447_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27400_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242136_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31447_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27400_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31447_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242136_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31447_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31447_0_0_0;
extern Il2CppType IEnumerable_1_t31447_1_0_0;
struct IEnumerable_1_t31447;
extern TypeInfo IEnumerable_1_t31447_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31447_GenericClass;
TypeInfo IEnumerable_1_t31447_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31447_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31447_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31447_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31447_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31447_0_0_0/* byval_arg */
	, &IEnumerable_1_t31447_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31447_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31446_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>
extern MethodInfo IList_1_get_Item_m242137_MethodInfo;
extern MethodInfo IList_1_set_Item_m242138_MethodInfo;
static PropertyInfo IList_1_t31446____Item_PropertyInfo = 
{
	&IList_1_t31446_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242137_MethodInfo/* get */
	, &IList_1_set_Item_m242138_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31446_PropertyInfos[] =
{
	&IList_1_t31446____Item_PropertyInfo,
	NULL
};
extern Il2CppType ITEM_SUBCLASS_t1133_0_0_0;
static ParameterInfo IList_1_t31446_IList_1_IndexOf_m242139_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITEM_SUBCLASS_t1133_0_0_0},
};
extern TypeInfo IList_1_t31446_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242139_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31446_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31446_IList_1_IndexOf_m242139_ParameterInfos/* parameters */
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
extern Il2CppType ITEM_SUBCLASS_t1133_0_0_0;
static ParameterInfo IList_1_t31446_IList_1_Insert_m242140_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ITEM_SUBCLASS_t1133_0_0_0},
};
extern TypeInfo IList_1_t31446_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242140_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31446_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31446_IList_1_Insert_m242140_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31446_IList_1_RemoveAt_m242141_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31446_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242141_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31446_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31446_IList_1_RemoveAt_m242141_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31446_IList_1_get_Item_m242137_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31446_il2cpp_TypeInfo;
extern Il2CppType ITEM_SUBCLASS_t1133_0_0_0;
extern void* RuntimeInvoker_ITEM_SUBCLASS_t1133_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242137_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31446_il2cpp_TypeInfo/* declaring_type */
	, &ITEM_SUBCLASS_t1133_0_0_0/* return_type */
	, RuntimeInvoker_ITEM_SUBCLASS_t1133_Int32_t73/* invoker_method */
	, IList_1_t31446_IList_1_get_Item_m242137_ParameterInfos/* parameters */
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
extern Il2CppType ITEM_SUBCLASS_t1133_0_0_0;
static ParameterInfo IList_1_t31446_IList_1_set_Item_m242138_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ITEM_SUBCLASS_t1133_0_0_0},
};
extern TypeInfo IList_1_t31446_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ITEM_SUBCLASS>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242138_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31446_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31446_IList_1_set_Item_m242138_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31446_MethodInfos[] =
{
	&IList_1_IndexOf_m242139_MethodInfo,
	&IList_1_Insert_m242140_MethodInfo,
	&IList_1_RemoveAt_m242141_MethodInfo,
	&IList_1_get_Item_m242137_MethodInfo,
	&IList_1_set_Item_m242138_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31445_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31447_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31446_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31445_il2cpp_TypeInfo,
	&IEnumerable_1_t31447_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31446_0_0_0;
extern Il2CppType IList_1_t31446_1_0_0;
struct IList_1_t31446;
extern TypeInfo IList_1_t31446_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31446_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31446_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31446_MethodInfos/* methods */
	, IList_1_t31446_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31446_il2cpp_TypeInfo/* element_class */
	, IList_1_t31446_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31446_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31446_0_0_0/* byval_arg */
	, &IList_1_t31446_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31446_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27401_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_MESSAGE.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242142_MethodInfo;
static PropertyInfo IEnumerator_1_t27401____Current_PropertyInfo = 
{
	&IEnumerator_1_t27401_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242142_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27401_PropertyInfos[] =
{
	&IEnumerator_1_t27401____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27401_il2cpp_TypeInfo;
extern Il2CppType MESSAGEBOX_TYPE_t1134_0_0_0;
extern void* RuntimeInvoker_MESSAGEBOX_TYPE_t1134 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242142_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27401_il2cpp_TypeInfo/* declaring_type */
	, &MESSAGEBOX_TYPE_t1134_0_0_0/* return_type */
	, RuntimeInvoker_MESSAGEBOX_TYPE_t1134/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27401_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242142_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27401_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27401_0_0_0;
extern Il2CppType IEnumerator_1_t27401_1_0_0;
struct IEnumerator_1_t27401;
extern TypeInfo IEnumerator_1_t27401_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27401_GenericClass;
TypeInfo IEnumerator_1_t27401_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27401_MethodInfos/* methods */
	, IEnumerator_1_t27401_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27401_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27401_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27401_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27401_0_0_0/* byval_arg */
	, &IEnumerator_1_t27401_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27401_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1007.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1007MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo;
extern TypeInfo MESSAGEBOX_TYPE_t1134_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123999_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMESSAGEBOX_TYPE_t1134_m196992_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMESSAGEBOX_TYPE_t1134_m196992 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMESSAGEBOX_TYPE_t1134_m196992_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m123994_MethodInfo;
 void InternalEnumerator_1__ctor_m123994 (InternalEnumerator_1_t16593 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123995_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123995 (InternalEnumerator_1_t16593 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123996_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123996 (InternalEnumerator_1_t16593 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m123999(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m123999_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MESSAGEBOX_TYPE_t1134_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m123997_MethodInfo;
 void InternalEnumerator_1_Dispose_m123997 (InternalEnumerator_1_t16593 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m123998_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m123998 (InternalEnumerator_1_t16593 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m123999_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m123999 (InternalEnumerator_1_t16593 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMESSAGEBOX_TYPE_t1134_m196992(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMESSAGEBOX_TYPE_t1134_m196992_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16593____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16593, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16593____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16593, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16593_FieldInfos[] =
{
	&InternalEnumerator_1_t16593____array_FieldInfo,
	&InternalEnumerator_1_t16593____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123996_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16593____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16593_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123996_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m123999_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16593____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16593_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m123999_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16593_PropertyInfos[] =
{
	&InternalEnumerator_1_t16593____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16593____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16593_InternalEnumerator_1__ctor_m123994_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m123994_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m123994/* method */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16593_InternalEnumerator_1__ctor_m123994_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123995_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123995/* method */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123996_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123996/* method */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m123997_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m123997/* method */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m123998_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m123998/* method */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo;
extern Il2CppType MESSAGEBOX_TYPE_t1134_0_0_0;
extern void* RuntimeInvoker_MESSAGEBOX_TYPE_t1134 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m123999_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m123999/* method */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* declaring_type */
	, &MESSAGEBOX_TYPE_t1134_0_0_0/* return_type */
	, RuntimeInvoker_MESSAGEBOX_TYPE_t1134/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16593_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m123994_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123995_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123996_MethodInfo,
	&InternalEnumerator_1_Dispose_m123997_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123998_MethodInfo,
	&InternalEnumerator_1_get_Current_m123999_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123996_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m123998_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123995_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m123997_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m123999_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16593_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m123996_MethodInfo,
	&InternalEnumerator_1_MoveNext_m123998_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m123995_MethodInfo,
	&InternalEnumerator_1_Dispose_m123997_MethodInfo,
	&InternalEnumerator_1_get_Current_m123999_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27401_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16593_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27401_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27401_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16593_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27401_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16593_0_0_0;
extern Il2CppType InternalEnumerator_1_t16593_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16593_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16593_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16593_MethodInfos/* methods */
	, InternalEnumerator_1_t16593_PropertyInfos/* properties */
	, InternalEnumerator_1_t16593_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16593_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16593_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16593_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16593_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16593_1_0_0/* this_arg */
	, InternalEnumerator_1_t16593_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16593_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16593)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>
extern MethodInfo ICollection_1_get_Count_m242143_MethodInfo;
static PropertyInfo ICollection_1_t31448____Count_PropertyInfo = 
{
	&ICollection_1_t31448_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242143_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242144_MethodInfo;
static PropertyInfo ICollection_1_t31448____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31448_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242144_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31448_PropertyInfos[] =
{
	&ICollection_1_t31448____Count_PropertyInfo,
	&ICollection_1_t31448____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242143_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31448_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242144_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31448_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MESSAGEBOX_TYPE_t1134_0_0_0;
static ParameterInfo ICollection_1_t31448_ICollection_1_Add_m242145_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGEBOX_TYPE_t1134_0_0_0},
};
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242145_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31448_ICollection_1_Add_m242145_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242146_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31448_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MESSAGEBOX_TYPE_t1134_0_0_0;
static ParameterInfo ICollection_1_t31448_ICollection_1_Contains_m242147_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGEBOX_TYPE_t1134_0_0_0},
};
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242147_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31448_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31448_ICollection_1_Contains_m242147_ParameterInfos/* parameters */
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
extern Il2CppType MESSAGEBOX_TYPEU5BU5D_t25526_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31448_ICollection_1_CopyTo_m242148_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGEBOX_TYPEU5BU5D_t25526_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242148_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31448_ICollection_1_CopyTo_m242148_ParameterInfos/* parameters */
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
extern Il2CppType MESSAGEBOX_TYPE_t1134_0_0_0;
static ParameterInfo ICollection_1_t31448_ICollection_1_Remove_m242149_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGEBOX_TYPE_t1134_0_0_0},
};
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242149_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31448_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31448_ICollection_1_Remove_m242149_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31448_MethodInfos[] =
{
	&ICollection_1_get_Count_m242143_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242144_MethodInfo,
	&ICollection_1_Add_m242145_MethodInfo,
	&ICollection_1_Clear_m242146_MethodInfo,
	&ICollection_1_Contains_m242147_MethodInfo,
	&ICollection_1_CopyTo_m242148_MethodInfo,
	&ICollection_1_Remove_m242149_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31450_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31448_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31450_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31448_0_0_0;
extern Il2CppType ICollection_1_t31448_1_0_0;
struct ICollection_1_t31448;
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31448_GenericClass;
TypeInfo ICollection_1_t31448_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31448_MethodInfos/* methods */
	, ICollection_1_t31448_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31448_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31448_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31448_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31448_0_0_0/* byval_arg */
	, &ICollection_1_t31448_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31448_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31450_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>
extern TypeInfo IEnumerable_1_t31450_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27401_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242150_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31450_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27401_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31450_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242150_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31450_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31450_0_0_0;
extern Il2CppType IEnumerable_1_t31450_1_0_0;
struct IEnumerable_1_t31450;
extern TypeInfo IEnumerable_1_t31450_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31450_GenericClass;
TypeInfo IEnumerable_1_t31450_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31450_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31450_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31450_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31450_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31450_0_0_0/* byval_arg */
	, &IEnumerable_1_t31450_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31450_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31449_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>
extern MethodInfo IList_1_get_Item_m242151_MethodInfo;
extern MethodInfo IList_1_set_Item_m242152_MethodInfo;
static PropertyInfo IList_1_t31449____Item_PropertyInfo = 
{
	&IList_1_t31449_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242151_MethodInfo/* get */
	, &IList_1_set_Item_m242152_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31449_PropertyInfos[] =
{
	&IList_1_t31449____Item_PropertyInfo,
	NULL
};
extern Il2CppType MESSAGEBOX_TYPE_t1134_0_0_0;
static ParameterInfo IList_1_t31449_IList_1_IndexOf_m242153_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGEBOX_TYPE_t1134_0_0_0},
};
extern TypeInfo IList_1_t31449_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242153_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31449_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31449_IList_1_IndexOf_m242153_ParameterInfos/* parameters */
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
extern Il2CppType MESSAGEBOX_TYPE_t1134_0_0_0;
static ParameterInfo IList_1_t31449_IList_1_Insert_m242154_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MESSAGEBOX_TYPE_t1134_0_0_0},
};
extern TypeInfo IList_1_t31449_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242154_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31449_IList_1_Insert_m242154_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31449_IList_1_RemoveAt_m242155_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31449_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242155_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31449_IList_1_RemoveAt_m242155_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31449_IList_1_get_Item_m242151_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31449_il2cpp_TypeInfo;
extern Il2CppType MESSAGEBOX_TYPE_t1134_0_0_0;
extern void* RuntimeInvoker_MESSAGEBOX_TYPE_t1134_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242151_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31449_il2cpp_TypeInfo/* declaring_type */
	, &MESSAGEBOX_TYPE_t1134_0_0_0/* return_type */
	, RuntimeInvoker_MESSAGEBOX_TYPE_t1134_Int32_t73/* invoker_method */
	, IList_1_t31449_IList_1_get_Item_m242151_ParameterInfos/* parameters */
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
extern Il2CppType MESSAGEBOX_TYPE_t1134_0_0_0;
static ParameterInfo IList_1_t31449_IList_1_set_Item_m242152_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MESSAGEBOX_TYPE_t1134_0_0_0},
};
extern TypeInfo IList_1_t31449_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MESSAGEBOX_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242152_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31449_IList_1_set_Item_m242152_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31449_MethodInfos[] =
{
	&IList_1_IndexOf_m242153_MethodInfo,
	&IList_1_Insert_m242154_MethodInfo,
	&IList_1_RemoveAt_m242155_MethodInfo,
	&IList_1_get_Item_m242151_MethodInfo,
	&IList_1_set_Item_m242152_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31448_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31450_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31449_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31448_il2cpp_TypeInfo,
	&IEnumerable_1_t31450_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31449_0_0_0;
extern Il2CppType IList_1_t31449_1_0_0;
struct IList_1_t31449;
extern TypeInfo IList_1_t31449_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31449_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31449_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31449_MethodInfos/* methods */
	, IList_1_t31449_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31449_il2cpp_TypeInfo/* element_class */
	, IList_1_t31449_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31449_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31449_0_0_0/* byval_arg */
	, &IList_1_t31449_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31449_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27402_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_RELATIO.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242156_MethodInfo;
static PropertyInfo IEnumerator_1_t27402____Current_PropertyInfo = 
{
	&IEnumerator_1_t27402_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242156_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27402_PropertyInfos[] =
{
	&IEnumerator_1_t27402____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27402_il2cpp_TypeInfo;
extern Il2CppType RELATION_TAB_TYPE_t1135_0_0_0;
extern void* RuntimeInvoker_RELATION_TAB_TYPE_t1135 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242156_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27402_il2cpp_TypeInfo/* declaring_type */
	, &RELATION_TAB_TYPE_t1135_0_0_0/* return_type */
	, RuntimeInvoker_RELATION_TAB_TYPE_t1135/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27402_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242156_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27402_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27402_0_0_0;
extern Il2CppType IEnumerator_1_t27402_1_0_0;
struct IEnumerator_1_t27402;
extern TypeInfo IEnumerator_1_t27402_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27402_GenericClass;
TypeInfo IEnumerator_1_t27402_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27402_MethodInfos/* methods */
	, IEnumerator_1_t27402_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27402_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27402_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27402_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27402_0_0_0/* byval_arg */
	, &IEnumerator_1_t27402_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27402_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1008.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1008MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo;
extern TypeInfo RELATION_TAB_TYPE_t1135_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124005_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRELATION_TAB_TYPE_t1135_m197003_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisRELATION_TAB_TYPE_t1135_m197003 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisRELATION_TAB_TYPE_t1135_m197003_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124000_MethodInfo;
 void InternalEnumerator_1__ctor_m124000 (InternalEnumerator_1_t16594 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124001_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124001 (InternalEnumerator_1_t16594 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124002_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124002 (InternalEnumerator_1_t16594 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124005(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124005_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&RELATION_TAB_TYPE_t1135_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124003_MethodInfo;
 void InternalEnumerator_1_Dispose_m124003 (InternalEnumerator_1_t16594 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124004_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124004 (InternalEnumerator_1_t16594 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124005_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124005 (InternalEnumerator_1_t16594 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisRELATION_TAB_TYPE_t1135_m197003(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisRELATION_TAB_TYPE_t1135_m197003_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16594____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16594, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16594____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16594, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16594_FieldInfos[] =
{
	&InternalEnumerator_1_t16594____array_FieldInfo,
	&InternalEnumerator_1_t16594____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124002_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16594____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16594_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124002_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124005_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16594____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16594_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124005_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16594_PropertyInfos[] =
{
	&InternalEnumerator_1_t16594____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16594____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16594_InternalEnumerator_1__ctor_m124000_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124000_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124000/* method */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16594_InternalEnumerator_1__ctor_m124000_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124001_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124001/* method */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124002_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124002/* method */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124003_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124003/* method */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124004_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124004/* method */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo;
extern Il2CppType RELATION_TAB_TYPE_t1135_0_0_0;
extern void* RuntimeInvoker_RELATION_TAB_TYPE_t1135 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124005_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124005/* method */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* declaring_type */
	, &RELATION_TAB_TYPE_t1135_0_0_0/* return_type */
	, RuntimeInvoker_RELATION_TAB_TYPE_t1135/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16594_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124000_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124001_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124002_MethodInfo,
	&InternalEnumerator_1_Dispose_m124003_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124004_MethodInfo,
	&InternalEnumerator_1_get_Current_m124005_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124002_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124004_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124001_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124003_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124005_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16594_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124002_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124004_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124001_MethodInfo,
	&InternalEnumerator_1_Dispose_m124003_MethodInfo,
	&InternalEnumerator_1_get_Current_m124005_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27402_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16594_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27402_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27402_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16594_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27402_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16594_0_0_0;
extern Il2CppType InternalEnumerator_1_t16594_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16594_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16594_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16594_MethodInfos/* methods */
	, InternalEnumerator_1_t16594_PropertyInfos/* properties */
	, InternalEnumerator_1_t16594_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16594_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16594_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16594_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16594_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16594_1_0_0/* this_arg */
	, InternalEnumerator_1_t16594_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16594_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16594)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>
extern MethodInfo ICollection_1_get_Count_m242157_MethodInfo;
static PropertyInfo ICollection_1_t31451____Count_PropertyInfo = 
{
	&ICollection_1_t31451_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242157_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242158_MethodInfo;
static PropertyInfo ICollection_1_t31451____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31451_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242158_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31451_PropertyInfos[] =
{
	&ICollection_1_t31451____Count_PropertyInfo,
	&ICollection_1_t31451____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242157_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31451_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242158_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31451_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RELATION_TAB_TYPE_t1135_0_0_0;
static ParameterInfo ICollection_1_t31451_ICollection_1_Add_m242159_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RELATION_TAB_TYPE_t1135_0_0_0},
};
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242159_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31451_ICollection_1_Add_m242159_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242160_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31451_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RELATION_TAB_TYPE_t1135_0_0_0;
static ParameterInfo ICollection_1_t31451_ICollection_1_Contains_m242161_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RELATION_TAB_TYPE_t1135_0_0_0},
};
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242161_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31451_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31451_ICollection_1_Contains_m242161_ParameterInfos/* parameters */
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
extern Il2CppType RELATION_TAB_TYPEU5BU5D_t25527_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31451_ICollection_1_CopyTo_m242162_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RELATION_TAB_TYPEU5BU5D_t25527_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242162_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31451_ICollection_1_CopyTo_m242162_ParameterInfos/* parameters */
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
extern Il2CppType RELATION_TAB_TYPE_t1135_0_0_0;
static ParameterInfo ICollection_1_t31451_ICollection_1_Remove_m242163_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RELATION_TAB_TYPE_t1135_0_0_0},
};
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242163_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31451_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31451_ICollection_1_Remove_m242163_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31451_MethodInfos[] =
{
	&ICollection_1_get_Count_m242157_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242158_MethodInfo,
	&ICollection_1_Add_m242159_MethodInfo,
	&ICollection_1_Clear_m242160_MethodInfo,
	&ICollection_1_Contains_m242161_MethodInfo,
	&ICollection_1_CopyTo_m242162_MethodInfo,
	&ICollection_1_Remove_m242163_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31453_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31451_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31453_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31451_0_0_0;
extern Il2CppType ICollection_1_t31451_1_0_0;
struct ICollection_1_t31451;
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31451_GenericClass;
TypeInfo ICollection_1_t31451_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31451_MethodInfos/* methods */
	, ICollection_1_t31451_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31451_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31451_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31451_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31451_0_0_0/* byval_arg */
	, &ICollection_1_t31451_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31451_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31453_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>
extern TypeInfo IEnumerable_1_t31453_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27402_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242164_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31453_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27402_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31453_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242164_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31453_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31453_0_0_0;
extern Il2CppType IEnumerable_1_t31453_1_0_0;
struct IEnumerable_1_t31453;
extern TypeInfo IEnumerable_1_t31453_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31453_GenericClass;
TypeInfo IEnumerable_1_t31453_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31453_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31453_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31453_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31453_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31453_0_0_0/* byval_arg */
	, &IEnumerable_1_t31453_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31453_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31452_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>
extern MethodInfo IList_1_get_Item_m242165_MethodInfo;
extern MethodInfo IList_1_set_Item_m242166_MethodInfo;
static PropertyInfo IList_1_t31452____Item_PropertyInfo = 
{
	&IList_1_t31452_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242165_MethodInfo/* get */
	, &IList_1_set_Item_m242166_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31452_PropertyInfos[] =
{
	&IList_1_t31452____Item_PropertyInfo,
	NULL
};
extern Il2CppType RELATION_TAB_TYPE_t1135_0_0_0;
static ParameterInfo IList_1_t31452_IList_1_IndexOf_m242167_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RELATION_TAB_TYPE_t1135_0_0_0},
};
extern TypeInfo IList_1_t31452_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242167_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31452_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31452_IList_1_IndexOf_m242167_ParameterInfos/* parameters */
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
extern Il2CppType RELATION_TAB_TYPE_t1135_0_0_0;
static ParameterInfo IList_1_t31452_IList_1_Insert_m242168_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RELATION_TAB_TYPE_t1135_0_0_0},
};
extern TypeInfo IList_1_t31452_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242168_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31452_IList_1_Insert_m242168_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31452_IList_1_RemoveAt_m242169_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31452_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242169_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31452_IList_1_RemoveAt_m242169_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31452_IList_1_get_Item_m242165_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31452_il2cpp_TypeInfo;
extern Il2CppType RELATION_TAB_TYPE_t1135_0_0_0;
extern void* RuntimeInvoker_RELATION_TAB_TYPE_t1135_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242165_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31452_il2cpp_TypeInfo/* declaring_type */
	, &RELATION_TAB_TYPE_t1135_0_0_0/* return_type */
	, RuntimeInvoker_RELATION_TAB_TYPE_t1135_Int32_t73/* invoker_method */
	, IList_1_t31452_IList_1_get_Item_m242165_ParameterInfos/* parameters */
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
extern Il2CppType RELATION_TAB_TYPE_t1135_0_0_0;
static ParameterInfo IList_1_t31452_IList_1_set_Item_m242166_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RELATION_TAB_TYPE_t1135_0_0_0},
};
extern TypeInfo IList_1_t31452_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELATION_TAB_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242166_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31452_IList_1_set_Item_m242166_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31452_MethodInfos[] =
{
	&IList_1_IndexOf_m242167_MethodInfo,
	&IList_1_Insert_m242168_MethodInfo,
	&IList_1_RemoveAt_m242169_MethodInfo,
	&IList_1_get_Item_m242165_MethodInfo,
	&IList_1_set_Item_m242166_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31451_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31453_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31452_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31451_il2cpp_TypeInfo,
	&IEnumerable_1_t31453_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31452_0_0_0;
extern Il2CppType IList_1_t31452_1_0_0;
struct IList_1_t31452;
extern TypeInfo IList_1_t31452_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31452_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31452_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31452_MethodInfos/* methods */
	, IList_1_t31452_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31452_il2cpp_TypeInfo/* element_class */
	, IList_1_t31452_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31452_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31452_0_0_0/* byval_arg */
	, &IList_1_t31452_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31452_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27403_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_STRFILT.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242170_MethodInfo;
static PropertyInfo IEnumerator_1_t27403____Current_PropertyInfo = 
{
	&IEnumerator_1_t27403_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242170_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27403_PropertyInfos[] =
{
	&IEnumerator_1_t27403____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27403_il2cpp_TypeInfo;
extern Il2CppType STRFILTER_TYPE_t1136_0_0_0;
extern void* RuntimeInvoker_STRFILTER_TYPE_t1136 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242170_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27403_il2cpp_TypeInfo/* declaring_type */
	, &STRFILTER_TYPE_t1136_0_0_0/* return_type */
	, RuntimeInvoker_STRFILTER_TYPE_t1136/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27403_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242170_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27403_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27403_0_0_0;
extern Il2CppType IEnumerator_1_t27403_1_0_0;
struct IEnumerator_1_t27403;
extern TypeInfo IEnumerator_1_t27403_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27403_GenericClass;
TypeInfo IEnumerator_1_t27403_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27403_MethodInfos/* methods */
	, IEnumerator_1_t27403_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27403_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27403_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27403_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27403_0_0_0/* byval_arg */
	, &IEnumerator_1_t27403_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27403_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1009.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1009MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo;
extern TypeInfo STRFILTER_TYPE_t1136_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124011_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSTRFILTER_TYPE_t1136_m197014_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSTRFILTER_TYPE_t1136_m197014 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSTRFILTER_TYPE_t1136_m197014_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124006_MethodInfo;
 void InternalEnumerator_1__ctor_m124006 (InternalEnumerator_1_t16595 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124007_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124007 (InternalEnumerator_1_t16595 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124008_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124008 (InternalEnumerator_1_t16595 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124011(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124011_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&STRFILTER_TYPE_t1136_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124009_MethodInfo;
 void InternalEnumerator_1_Dispose_m124009 (InternalEnumerator_1_t16595 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124010_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124010 (InternalEnumerator_1_t16595 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124011_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124011 (InternalEnumerator_1_t16595 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSTRFILTER_TYPE_t1136_m197014(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSTRFILTER_TYPE_t1136_m197014_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16595____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16595, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16595____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16595, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16595_FieldInfos[] =
{
	&InternalEnumerator_1_t16595____array_FieldInfo,
	&InternalEnumerator_1_t16595____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124008_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16595____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16595_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124008_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124011_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16595____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16595_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124011_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16595_PropertyInfos[] =
{
	&InternalEnumerator_1_t16595____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16595____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16595_InternalEnumerator_1__ctor_m124006_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124006_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124006/* method */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16595_InternalEnumerator_1__ctor_m124006_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124007_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124007/* method */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124008_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124008/* method */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124009_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124009/* method */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124010_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124010/* method */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo;
extern Il2CppType STRFILTER_TYPE_t1136_0_0_0;
extern void* RuntimeInvoker_STRFILTER_TYPE_t1136 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124011_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124011/* method */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* declaring_type */
	, &STRFILTER_TYPE_t1136_0_0_0/* return_type */
	, RuntimeInvoker_STRFILTER_TYPE_t1136/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16595_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124006_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124007_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124008_MethodInfo,
	&InternalEnumerator_1_Dispose_m124009_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124010_MethodInfo,
	&InternalEnumerator_1_get_Current_m124011_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124008_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124010_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124007_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124009_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124011_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16595_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124008_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124010_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124007_MethodInfo,
	&InternalEnumerator_1_Dispose_m124009_MethodInfo,
	&InternalEnumerator_1_get_Current_m124011_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27403_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16595_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27403_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27403_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16595_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27403_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16595_0_0_0;
extern Il2CppType InternalEnumerator_1_t16595_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16595_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16595_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16595_MethodInfos/* methods */
	, InternalEnumerator_1_t16595_PropertyInfos/* properties */
	, InternalEnumerator_1_t16595_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16595_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16595_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16595_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16595_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16595_1_0_0/* this_arg */
	, InternalEnumerator_1_t16595_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16595_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16595)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>
extern MethodInfo ICollection_1_get_Count_m242171_MethodInfo;
static PropertyInfo ICollection_1_t31454____Count_PropertyInfo = 
{
	&ICollection_1_t31454_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242171_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242172_MethodInfo;
static PropertyInfo ICollection_1_t31454____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31454_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242172_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31454_PropertyInfos[] =
{
	&ICollection_1_t31454____Count_PropertyInfo,
	&ICollection_1_t31454____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242171_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31454_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242172_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31454_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType STRFILTER_TYPE_t1136_0_0_0;
static ParameterInfo ICollection_1_t31454_ICollection_1_Add_m242173_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &STRFILTER_TYPE_t1136_0_0_0},
};
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242173_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31454_ICollection_1_Add_m242173_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242174_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31454_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType STRFILTER_TYPE_t1136_0_0_0;
static ParameterInfo ICollection_1_t31454_ICollection_1_Contains_m242175_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &STRFILTER_TYPE_t1136_0_0_0},
};
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242175_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31454_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31454_ICollection_1_Contains_m242175_ParameterInfos/* parameters */
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
extern Il2CppType STRFILTER_TYPEU5BU5D_t25528_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31454_ICollection_1_CopyTo_m242176_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &STRFILTER_TYPEU5BU5D_t25528_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242176_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31454_ICollection_1_CopyTo_m242176_ParameterInfos/* parameters */
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
extern Il2CppType STRFILTER_TYPE_t1136_0_0_0;
static ParameterInfo ICollection_1_t31454_ICollection_1_Remove_m242177_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &STRFILTER_TYPE_t1136_0_0_0},
};
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242177_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31454_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31454_ICollection_1_Remove_m242177_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31454_MethodInfos[] =
{
	&ICollection_1_get_Count_m242171_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242172_MethodInfo,
	&ICollection_1_Add_m242173_MethodInfo,
	&ICollection_1_Clear_m242174_MethodInfo,
	&ICollection_1_Contains_m242175_MethodInfo,
	&ICollection_1_CopyTo_m242176_MethodInfo,
	&ICollection_1_Remove_m242177_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31456_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31454_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31456_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31454_0_0_0;
extern Il2CppType ICollection_1_t31454_1_0_0;
struct ICollection_1_t31454;
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31454_GenericClass;
TypeInfo ICollection_1_t31454_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31454_MethodInfos/* methods */
	, ICollection_1_t31454_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31454_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31454_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31454_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31454_0_0_0/* byval_arg */
	, &ICollection_1_t31454_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31454_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t31456_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>
extern TypeInfo IEnumerable_1_t31456_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27403_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242178_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31456_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27403_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31456_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242178_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31456_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31456_0_0_0;
extern Il2CppType IEnumerable_1_t31456_1_0_0;
struct IEnumerable_1_t31456;
extern TypeInfo IEnumerable_1_t31456_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31456_GenericClass;
TypeInfo IEnumerable_1_t31456_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31456_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31456_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31456_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31456_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31456_0_0_0/* byval_arg */
	, &IEnumerable_1_t31456_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31456_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t31455_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>
extern MethodInfo IList_1_get_Item_m242179_MethodInfo;
extern MethodInfo IList_1_set_Item_m242180_MethodInfo;
static PropertyInfo IList_1_t31455____Item_PropertyInfo = 
{
	&IList_1_t31455_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242179_MethodInfo/* get */
	, &IList_1_set_Item_m242180_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31455_PropertyInfos[] =
{
	&IList_1_t31455____Item_PropertyInfo,
	NULL
};
extern Il2CppType STRFILTER_TYPE_t1136_0_0_0;
static ParameterInfo IList_1_t31455_IList_1_IndexOf_m242181_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &STRFILTER_TYPE_t1136_0_0_0},
};
extern TypeInfo IList_1_t31455_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242181_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31455_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31455_IList_1_IndexOf_m242181_ParameterInfos/* parameters */
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
extern Il2CppType STRFILTER_TYPE_t1136_0_0_0;
static ParameterInfo IList_1_t31455_IList_1_Insert_m242182_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &STRFILTER_TYPE_t1136_0_0_0},
};
extern TypeInfo IList_1_t31455_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242182_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31455_IList_1_Insert_m242182_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31455_IList_1_RemoveAt_m242183_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31455_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242183_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31455_IList_1_RemoveAt_m242183_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t31455_IList_1_get_Item_m242179_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31455_il2cpp_TypeInfo;
extern Il2CppType STRFILTER_TYPE_t1136_0_0_0;
extern void* RuntimeInvoker_STRFILTER_TYPE_t1136_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242179_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31455_il2cpp_TypeInfo/* declaring_type */
	, &STRFILTER_TYPE_t1136_0_0_0/* return_type */
	, RuntimeInvoker_STRFILTER_TYPE_t1136_Int32_t73/* invoker_method */
	, IList_1_t31455_IList_1_get_Item_m242179_ParameterInfos/* parameters */
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
extern Il2CppType STRFILTER_TYPE_t1136_0_0_0;
static ParameterInfo IList_1_t31455_IList_1_set_Item_m242180_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &STRFILTER_TYPE_t1136_0_0_0},
};
extern TypeInfo IList_1_t31455_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/STRFILTER_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242180_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31455_IList_1_set_Item_m242180_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31455_MethodInfos[] =
{
	&IList_1_IndexOf_m242181_MethodInfo,
	&IList_1_Insert_m242182_MethodInfo,
	&IList_1_RemoveAt_m242183_MethodInfo,
	&IList_1_get_Item_m242179_MethodInfo,
	&IList_1_set_Item_m242180_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31454_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31456_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31455_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31454_il2cpp_TypeInfo,
	&IEnumerable_1_t31456_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31455_0_0_0;
extern Il2CppType IList_1_t31455_1_0_0;
struct IList_1_t31455;
extern TypeInfo IList_1_t31455_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31455_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31455_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31455_MethodInfos/* methods */
	, IList_1_t31455_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31455_il2cpp_TypeInfo/* element_class */
	, IList_1_t31455_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31455_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31455_0_0_0/* byval_arg */
	, &IList_1_t31455_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31455_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t27404_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_RELIVE_.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242184_MethodInfo;
static PropertyInfo IEnumerator_1_t27404____Current_PropertyInfo = 
{
	&IEnumerator_1_t27404_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242184_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27404_PropertyInfos[] =
{
	&IEnumerator_1_t27404____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27404_il2cpp_TypeInfo;
extern Il2CppType RELIVE_TYPE_t1137_0_0_0;
extern void* RuntimeInvoker_RELIVE_TYPE_t1137 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242184_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27404_il2cpp_TypeInfo/* declaring_type */
	, &RELIVE_TYPE_t1137_0_0_0/* return_type */
	, RuntimeInvoker_RELIVE_TYPE_t1137/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27404_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242184_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27404_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27404_0_0_0;
extern Il2CppType IEnumerator_1_t27404_1_0_0;
struct IEnumerator_1_t27404;
extern TypeInfo IEnumerator_1_t27404_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27404_GenericClass;
TypeInfo IEnumerator_1_t27404_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27404_MethodInfos/* methods */
	, IEnumerator_1_t27404_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27404_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27404_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27404_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27404_0_0_0/* byval_arg */
	, &IEnumerator_1_t27404_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27404_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
