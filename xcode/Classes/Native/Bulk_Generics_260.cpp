#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_632.h"
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
extern TypeInfo DefaultComparer_t24010_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_632MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_62.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo KeyValuePair_2_t6946_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_631MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo EqualityComparer_1__ctor_m174625_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_Equals_m4063_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor()
extern MethodInfo DefaultComparer__ctor_m174630_MethodInfo;
 void DefaultComparer__ctor_m174630 (DefaultComparer_t24010 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m174625(__this, /*hidden argument*/&EqualityComparer_1__ctor_m174625_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m174631_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m174631 (DefaultComparer_t24010 * __this, KeyValuePair_2_t6946  ___obj, MethodInfo* method){
	{
		KeyValuePair_2_t6946  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_0);
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
		NullCheck(Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m4064_MethodInfo, Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m174632_MethodInfo;
 bool DefaultComparer_Equals_m174632 (DefaultComparer_t24010 * __this, KeyValuePair_2_t6946  ___x, KeyValuePair_2_t6946  ___y, MethodInfo* method){
	{
		KeyValuePair_2_t6946  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		KeyValuePair_2_t6946  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		KeyValuePair_2_t6946  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m4063_MethodInfo, Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
extern TypeInfo DefaultComparer_t24010_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor()
MethodInfo DefaultComparer__ctor_m174630_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m174630/* method */
	, &DefaultComparer_t24010_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
static ParameterInfo DefaultComparer_t24010_DefaultComparer_GetHashCode_m174631_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
};
extern TypeInfo DefaultComparer_t24010_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m174631_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m174631/* method */
	, &DefaultComparer_t24010_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946/* invoker_method */
	, DefaultComparer_t24010_DefaultComparer_GetHashCode_m174631_ParameterInfos/* parameters */
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
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
static ParameterInfo DefaultComparer_t24010_DefaultComparer_Equals_m174632_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
};
extern TypeInfo DefaultComparer_t24010_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_KeyValuePair_2_t6946_KeyValuePair_2_t6946 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m174632_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m174632/* method */
	, &DefaultComparer_t24010_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_KeyValuePair_2_t6946_KeyValuePair_2_t6946/* invoker_method */
	, DefaultComparer_t24010_DefaultComparer_Equals_m174632_ParameterInfos/* parameters */
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
static MethodInfo* DefaultComparer_t24010_MethodInfos[] =
{
	&DefaultComparer__ctor_m174630_MethodInfo,
	&DefaultComparer_GetHashCode_m174631_MethodInfo,
	&DefaultComparer_Equals_m174632_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo DefaultComparer_Equals_m174632_MethodInfo;
extern MethodInfo DefaultComparer_GetHashCode_m174631_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m174628_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m174627_MethodInfo;
extern MethodInfo DefaultComparer_GetHashCode_m174631_MethodInfo;
extern MethodInfo DefaultComparer_Equals_m174632_MethodInfo;
static MethodInfo* DefaultComparer_t24010_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&DefaultComparer_Equals_m174632_MethodInfo,
	&DefaultComparer_GetHashCode_m174631_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m174628_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m174627_MethodInfo,
	&DefaultComparer_GetHashCode_m174631_MethodInfo,
	&DefaultComparer_Equals_m174632_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t38915_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DefaultComparer_t24010_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38915_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t24010_0_0_0;
extern Il2CppType DefaultComparer_t24010_1_0_0;
extern TypeInfo EqualityComparer_1_t24009_il2cpp_TypeInfo;
struct DefaultComparer_t24010;
extern TypeInfo DefaultComparer_t24010_il2cpp_TypeInfo;
extern Il2CppGenericClass DefaultComparer_t24010_GenericClass;
extern TypeInfo EqualityComparer_1_t7851_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t24010_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t24010_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t24009_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t7851_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t24010_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t24010_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t24010_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t24010_0_0_0/* byval_arg */
	, &DefaultComparer_t24010_1_0_0/* this_arg */
	, DefaultComparer_t24010_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t24010_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t24010)/* instance_size */
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
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Predicate_1_gen_361.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Predicate_1_t24004_il2cpp_TypeInfo;
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Predicate_1_gen_361MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Predicate_1__ctor_m174633_MethodInfo;
 void Predicate_1__ctor_m174633 (Predicate_1_t24004 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Invoke(T)
extern MethodInfo Predicate_1_Invoke_m174634_MethodInfo;
 bool Predicate_1_Invoke_m174634 (Predicate_1_t24004 * __this, KeyValuePair_2_t6946  ___obj, MethodInfo* method){
	// runtime
	typedef  bool (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t6946  ___obj, MethodInfo* method);
	if (__this->___prev)
		Predicate_1_Invoke_m174634((Predicate_1_t24004 *)__this->___prev,  ___obj, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___obj, (MethodInfo*)(__this->___method.___m_value));
}
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern MethodInfo Predicate_1_BeginInvoke_m174635_MethodInfo;
 Object_t * Predicate_1_BeginInvoke_m174635 (Predicate_1_t24004 * __this, KeyValuePair_2_t6946  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::EndInvoke(System.IAsyncResult)
extern MethodInfo Predicate_1_EndInvoke_m174636_MethodInfo;
 bool Predicate_1_EndInvoke_m174636 (Predicate_1_t24004 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo Predicate_1_t24004_Predicate_1__ctor_m174633_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo Predicate_1_t24004_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor(System.Object,System.IntPtr)
MethodInfo Predicate_1__ctor_m174633_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Predicate_1__ctor_m174633/* method */
	, &Predicate_1_t24004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, Predicate_1_t24004_Predicate_1__ctor_m174633_ParameterInfos/* parameters */
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
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
static ParameterInfo Predicate_1_t24004_Predicate_1_Invoke_m174634_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
};
extern TypeInfo Predicate_1_t24004_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_KeyValuePair_2_t6946 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Invoke(T)
MethodInfo Predicate_1_Invoke_m174634_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Predicate_1_Invoke_m174634/* method */
	, &Predicate_1_t24004_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_KeyValuePair_2_t6946/* invoker_method */
	, Predicate_1_t24004_Predicate_1_Invoke_m174634_ParameterInfos/* parameters */
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
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Predicate_1_t24004_Predicate_1_BeginInvoke_m174635_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Predicate_1_t24004_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_KeyValuePair_2_t6946_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::BeginInvoke(T,System.AsyncCallback,System.Object)
MethodInfo Predicate_1_BeginInvoke_m174635_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Predicate_1_BeginInvoke_m174635/* method */
	, &Predicate_1_t24004_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_KeyValuePair_2_t6946_Object_t_Object_t/* invoker_method */
	, Predicate_1_t24004_Predicate_1_BeginInvoke_m174635_ParameterInfos/* parameters */
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
static ParameterInfo Predicate_1_t24004_Predicate_1_EndInvoke_m174636_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo Predicate_1_t24004_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::EndInvoke(System.IAsyncResult)
MethodInfo Predicate_1_EndInvoke_m174636_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Predicate_1_EndInvoke_m174636/* method */
	, &Predicate_1_t24004_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, Predicate_1_t24004_Predicate_1_EndInvoke_m174636_ParameterInfos/* parameters */
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
static MethodInfo* Predicate_1_t24004_MethodInfos[] =
{
	&Predicate_1__ctor_m174633_MethodInfo,
	&Predicate_1_Invoke_m174634_MethodInfo,
	&Predicate_1_BeginInvoke_m174635_MethodInfo,
	&Predicate_1_EndInvoke_m174636_MethodInfo,
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
extern MethodInfo Predicate_1_Invoke_m174634_MethodInfo;
extern MethodInfo Predicate_1_BeginInvoke_m174635_MethodInfo;
extern MethodInfo Predicate_1_EndInvoke_m174636_MethodInfo;
static MethodInfo* Predicate_1_t24004_VTable[] =
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
	&Predicate_1_Invoke_m174634_MethodInfo,
	&Predicate_1_BeginInvoke_m174635_MethodInfo,
	&Predicate_1_EndInvoke_m174636_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Predicate_1_t24004_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Predicate_1_t24004_0_0_0;
extern Il2CppType Predicate_1_t24004_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct Predicate_1_t24004;
extern TypeInfo Predicate_1_t24004_il2cpp_TypeInfo;
extern Il2CppGenericClass Predicate_1_t24004_GenericClass;
TypeInfo Predicate_1_t24004_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Predicate`1"/* name */
	, "System"/* namespaze */
	, Predicate_1_t24004_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Predicate_1_t24004_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Predicate_1_t24004_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Predicate_1_t24004_il2cpp_TypeInfo/* cast_class */
	, &Predicate_1_t24004_0_0_0/* byval_arg */
	, &Predicate_1_t24004_1_0_0/* this_arg */
	, Predicate_1_t24004_InterfacesOffsets/* interface_offsets */
	, &Predicate_1_t24004_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Predicate_1_t24004)/* instance_size */
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
// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_360.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t24011_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_360MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.GenericComparer`1
#include "mscorlib_System_Collections_Generic_GenericComparer_1.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_361.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Comparer_1_t24011_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t28925_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t6946_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t7840_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t1042_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t24012_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_361MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType IComparable_1_t28925_0_0_0;
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
extern Il2CppType GenericComparer_1_t7840_0_0_0;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m38812_MethodInfo;
extern MethodInfo Type_MakeGenericType_m52718_MethodInfo;
extern MethodInfo Activator_CreateInstance_m38822_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m174641_MethodInfo;
extern MethodInfo Comparer_1_Compare_m267212_MethodInfo;
extern MethodInfo ArgumentException__ctor_m49269_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor()
extern MethodInfo Comparer_1__ctor_m174637_MethodInfo;
 void Comparer_1__ctor_m174637 (Comparer_1_t24011 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.cctor()
extern MethodInfo Comparer_1__cctor_m174638_MethodInfo;
 void Comparer_1__cctor_m174638 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t24012 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t24012 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t24012_il2cpp_TypeInfo));
	DefaultComparer__ctor_m174641(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m174641_MethodInfo);
	((Comparer_1_t24011_StaticFields*)InitializedTypeInfo(&Comparer_1_t24011_il2cpp_TypeInfo)->static_fields)->____default = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m174639_MethodInfo;
 int32_t Comparer_1_System_Collections_IComparer_Compare_m174639 (Comparer_1_t24011 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
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
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, KeyValuePair_2_t6946 , KeyValuePair_2_t6946  >::Invoke(&Comparer_1_Compare_m267212_MethodInfo, __this, ((*(KeyValuePair_2_t6946 *)((KeyValuePair_2_t6946 *)UnBox (___x, InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo))))), ((*(KeyValuePair_2_t6946 *)((KeyValuePair_2_t6946 *)UnBox (___y, InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t5466 * L_1 = (ArgumentException_t5466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t5466_il2cpp_TypeInfo));
		ArgumentException__ctor_m49269(L_1, /*hidden argument*/&ArgumentException__ctor_m49269_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::get_Default()
extern MethodInfo Comparer_1_get_Default_m174640_MethodInfo;
 Comparer_1_t24011 * Comparer_1_get_Default_m174640 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t24011_il2cpp_TypeInfo));
		return (((Comparer_1_t24011_StaticFields*)InitializedTypeInfo(&Comparer_1_t24011_il2cpp_TypeInfo)->static_fields)->____default);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
extern Il2CppType Comparer_1_t24011_0_0_49;
FieldInfo Comparer_1_t24011_____default_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t24011_0_0_49/* type */
	, &Comparer_1_t24011_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t24011_StaticFields, ____default)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t24011_FieldInfos[] =
{
	&Comparer_1_t24011_____default_FieldInfo,
	NULL
};
extern MethodInfo Comparer_1_get_Default_m174640_MethodInfo;
static PropertyInfo Comparer_1_t24011____Default_PropertyInfo = 
{
	&Comparer_1_t24011_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m174640_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t24011_PropertyInfos[] =
{
	&Comparer_1_t24011____Default_PropertyInfo,
	NULL
};
extern TypeInfo Comparer_1_t24011_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor()
MethodInfo Comparer_1__ctor_m174637_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m174637/* method */
	, &Comparer_1_t24011_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo Comparer_1_t24011_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.cctor()
MethodInfo Comparer_1__cctor_m174638_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m174638/* method */
	, &Comparer_1_t24011_il2cpp_TypeInfo/* declaring_type */
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
static ParameterInfo Comparer_1_t24011_Comparer_1_System_Collections_IComparer_Compare_m174639_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Comparer_1_t24011_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m174639_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m174639/* method */
	, &Comparer_1_t24011_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t_Object_t/* invoker_method */
	, Comparer_1_t24011_Comparer_1_System_Collections_IComparer_Compare_m174639_ParameterInfos/* parameters */
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
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
static ParameterInfo Comparer_1_t24011_Comparer_1_Compare_m267212_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
};
extern TypeInfo Comparer_1_t24011_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946_KeyValuePair_2_t6946 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Compare(T,T)
MethodInfo Comparer_1_Compare_m267212_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t24011_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946_KeyValuePair_2_t6946/* invoker_method */
	, Comparer_1_t24011_Comparer_1_Compare_m267212_ParameterInfos/* parameters */
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
extern TypeInfo Comparer_1_t24011_il2cpp_TypeInfo;
extern Il2CppType Comparer_1_t24011_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::get_Default()
MethodInfo Comparer_1_get_Default_m174640_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m174640/* method */
	, &Comparer_1_t24011_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t24011_0_0_0/* return_type */
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
static MethodInfo* Comparer_1_t24011_MethodInfos[] =
{
	&Comparer_1__ctor_m174637_MethodInfo,
	&Comparer_1__cctor_m174638_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m174639_MethodInfo,
	&Comparer_1_Compare_m267212_MethodInfo,
	&Comparer_1_get_Default_m174640_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Comparer_1_Compare_m267212_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m174639_MethodInfo;
static MethodInfo* Comparer_1_t24011_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Comparer_1_Compare_m267212_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m174639_MethodInfo,
	NULL,
};
extern TypeInfo IComparer_1_t24005_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static TypeInfo* Comparer_1_t24011_InterfacesTypeInfos[] = 
{
	&IComparer_1_t24005_il2cpp_TypeInfo,
	&IComparer_t7107_il2cpp_TypeInfo,
};
extern TypeInfo IComparer_1_t24005_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Comparer_1_t24011_InterfacesOffsets[] = 
{
	{ &IComparer_1_t24005_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t24011_0_0_0;
extern Il2CppType Comparer_1_t24011_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Comparer_1_t24011;
extern TypeInfo Comparer_1_t24011_il2cpp_TypeInfo;
extern Il2CppGenericClass Comparer_1_t24011_GenericClass;
TypeInfo Comparer_1_t24011_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t24011_MethodInfos/* methods */
	, Comparer_1_t24011_PropertyInfos/* properties */
	, Comparer_1_t24011_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t24011_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t24011_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t24011_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t24011_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t24011_0_0_0/* byval_arg */
	, &Comparer_1_t24011_1_0_0/* this_arg */
	, Comparer_1_t24011_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t24011_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t24011)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t24011_StaticFields)/* static_fields_size */
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
extern TypeInfo IComparer_1_t24005_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
static ParameterInfo IComparer_1_t24005_IComparer_1_Compare_m219169_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
};
extern TypeInfo IComparer_1_t24005_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946_KeyValuePair_2_t6946 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IComparer`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Compare(T,T)
MethodInfo IComparer_1_Compare_m219169_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t24005_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946_KeyValuePair_2_t6946/* invoker_method */
	, IComparer_1_t24005_IComparer_1_Compare_m219169_ParameterInfos/* parameters */
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
static MethodInfo* IComparer_1_t24005_MethodInfos[] =
{
	&IComparer_1_Compare_m219169_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t24005_0_0_0;
extern Il2CppType IComparer_1_t24005_1_0_0;
struct IComparer_1_t24005;
extern TypeInfo IComparer_1_t24005_il2cpp_TypeInfo;
extern Il2CppGenericClass IComparer_1_t24005_GenericClass;
TypeInfo IComparer_1_t24005_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t24005_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t24005_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t24005_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t24005_0_0_0/* byval_arg */
	, &IComparer_1_t24005_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t24005_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IComparable_1_t28925_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
static ParameterInfo IComparable_1_t28925_IComparable_1_CompareTo_m219170_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
};
extern TypeInfo IComparable_1_t28925_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.IComparable`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m219170_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t28925_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946/* invoker_method */
	, IComparable_1_t28925_IComparable_1_CompareTo_m219170_ParameterInfos/* parameters */
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
static MethodInfo* IComparable_1_t28925_MethodInfos[] =
{
	&IComparable_1_CompareTo_m219170_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t28925_0_0_0;
extern Il2CppType IComparable_1_t28925_1_0_0;
struct IComparable_1_t28925;
extern TypeInfo IComparable_1_t28925_il2cpp_TypeInfo;
extern Il2CppGenericClass IComparable_1_t28925_GenericClass;
TypeInfo IComparable_1_t28925_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t28925_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t28925_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t28925_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t28925_0_0_0/* byval_arg */
	, &IComparable_1_t28925_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t28925_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo DefaultComparer_t24012_il2cpp_TypeInfo;

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo KeyValuePair_2_t6946_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t28925_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo IComparable_t948_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern MethodInfo Comparer_1__ctor_m174637_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m219170_MethodInfo;
extern MethodInfo IComparable_CompareTo_m57234_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor()
extern MethodInfo DefaultComparer__ctor_m174641_MethodInfo;
 void DefaultComparer__ctor_m174641 (DefaultComparer_t24012 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m174637(__this, /*hidden argument*/&Comparer_1__ctor_m174637_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m174642_MethodInfo;
 int32_t DefaultComparer_Compare_m174642 (DefaultComparer_t24012 * __this, KeyValuePair_2_t6946  ___x, KeyValuePair_2_t6946  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		KeyValuePair_2_t6946  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		KeyValuePair_2_t6946  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_2);
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
		KeyValuePair_2_t6946  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_4);
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
		KeyValuePair_2_t6946  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t28925_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		KeyValuePair_2_t6946  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t28925_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t6946  >::Invoke(&IComparable_1_CompareTo_m219170_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t28925_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		KeyValuePair_2_t6946  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		KeyValuePair_2_t6946  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_13);
		KeyValuePair_2_t6946  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &L_15);
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
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
extern TypeInfo DefaultComparer_t24012_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor()
MethodInfo DefaultComparer__ctor_m174641_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m174641/* method */
	, &DefaultComparer_t24012_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
static ParameterInfo DefaultComparer_t24012_DefaultComparer_Compare_m174642_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
};
extern TypeInfo DefaultComparer_t24012_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946_KeyValuePair_2_t6946 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m174642_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m174642/* method */
	, &DefaultComparer_t24012_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946_KeyValuePair_2_t6946/* invoker_method */
	, DefaultComparer_t24012_DefaultComparer_Compare_m174642_ParameterInfos/* parameters */
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
static MethodInfo* DefaultComparer_t24012_MethodInfos[] =
{
	&DefaultComparer__ctor_m174641_MethodInfo,
	&DefaultComparer_Compare_m174642_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m174642_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m174639_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m174642_MethodInfo;
static MethodInfo* DefaultComparer_t24012_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&DefaultComparer_Compare_m174642_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m174639_MethodInfo,
	&DefaultComparer_Compare_m174642_MethodInfo,
};
extern TypeInfo IComparer_1_t24005_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DefaultComparer_t24012_InterfacesOffsets[] = 
{
	{ &IComparer_1_t24005_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t24012_0_0_0;
extern Il2CppType DefaultComparer_t24012_1_0_0;
extern TypeInfo Comparer_1_t24011_il2cpp_TypeInfo;
struct DefaultComparer_t24012;
extern TypeInfo DefaultComparer_t24012_il2cpp_TypeInfo;
extern Il2CppGenericClass DefaultComparer_t24012_GenericClass;
extern TypeInfo Comparer_1_t7839_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t24012_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t24012_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t24011_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t7839_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t24012_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t24012_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t24012_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t24012_0_0_0/* byval_arg */
	, &DefaultComparer_t24012_1_0_0/* this_arg */
	, DefaultComparer_t24012_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t24012_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t24012)/* instance_size */
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
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Comparison_1_gen_366.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t24006_il2cpp_TypeInfo;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
#include "mscorlib_System_Comparison_1_gen_366MethodDeclarations.h"



// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Comparison_1__ctor_m174643_MethodInfo;
 void Comparison_1__ctor_m174643 (Comparison_1_t24006 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Invoke(T,T)
extern MethodInfo Comparison_1_Invoke_m174644_MethodInfo;
 int32_t Comparison_1_Invoke_m174644 (Comparison_1_t24006 * __this, KeyValuePair_2_t6946  ___x, KeyValuePair_2_t6946  ___y, MethodInfo* method){
	// runtime
	typedef  int32_t (*FunctionPointerType) (Object_t * __this, KeyValuePair_2_t6946  ___x, KeyValuePair_2_t6946  ___y, MethodInfo* method);
	if (__this->___prev)
		Comparison_1_Invoke_m174644((Comparison_1_t24006 *)__this->___prev,  ___x, ___y, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___x, ___y, (MethodInfo*)(__this->___method.___m_value));
}
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern MethodInfo Comparison_1_BeginInvoke_m174645_MethodInfo;
 Object_t * Comparison_1_BeginInvoke_m174645 (Comparison_1_t24006 * __this, KeyValuePair_2_t6946  ___x, KeyValuePair_2_t6946  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&KeyValuePair_2_t6946_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::EndInvoke(System.IAsyncResult)
extern MethodInfo Comparison_1_EndInvoke_m174646_MethodInfo;
 int32_t Comparison_1_EndInvoke_m174646 (Comparison_1_t24006 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo Comparison_1_t24006_Comparison_1__ctor_m174643_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo Comparison_1_t24006_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::.ctor(System.Object,System.IntPtr)
MethodInfo Comparison_1__ctor_m174643_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparison_1__ctor_m174643/* method */
	, &Comparison_1_t24006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, Comparison_1_t24006_Comparison_1__ctor_m174643_ParameterInfos/* parameters */
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
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
static ParameterInfo Comparison_1_t24006_Comparison_1_Invoke_m174644_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
};
extern TypeInfo Comparison_1_t24006_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946_KeyValuePair_2_t6946 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::Invoke(T,T)
MethodInfo Comparison_1_Invoke_m174644_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Comparison_1_Invoke_m174644/* method */
	, &Comparison_1_t24006_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_KeyValuePair_2_t6946_KeyValuePair_2_t6946/* invoker_method */
	, Comparison_1_t24006_Comparison_1_Invoke_m174644_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
extern Il2CppType KeyValuePair_2_t6946_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparison_1_t24006_Comparison_1_BeginInvoke_m174645_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &KeyValuePair_2_t6946_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Comparison_1_t24006_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_KeyValuePair_2_t6946_KeyValuePair_2_t6946_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
MethodInfo Comparison_1_BeginInvoke_m174645_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Comparison_1_BeginInvoke_m174645/* method */
	, &Comparison_1_t24006_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_KeyValuePair_2_t6946_KeyValuePair_2_t6946_Object_t_Object_t/* invoker_method */
	, Comparison_1_t24006_Comparison_1_BeginInvoke_m174645_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo Comparison_1_t24006_Comparison_1_EndInvoke_m174646_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo Comparison_1_t24006_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>::EndInvoke(System.IAsyncResult)
MethodInfo Comparison_1_EndInvoke_m174646_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Comparison_1_EndInvoke_m174646/* method */
	, &Comparison_1_t24006_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, Comparison_1_t24006_Comparison_1_EndInvoke_m174646_ParameterInfos/* parameters */
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
static MethodInfo* Comparison_1_t24006_MethodInfos[] =
{
	&Comparison_1__ctor_m174643_MethodInfo,
	&Comparison_1_Invoke_m174644_MethodInfo,
	&Comparison_1_BeginInvoke_m174645_MethodInfo,
	&Comparison_1_EndInvoke_m174646_MethodInfo,
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
extern MethodInfo Comparison_1_Invoke_m174644_MethodInfo;
extern MethodInfo Comparison_1_BeginInvoke_m174645_MethodInfo;
extern MethodInfo Comparison_1_EndInvoke_m174646_MethodInfo;
static MethodInfo* Comparison_1_t24006_VTable[] =
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
	&Comparison_1_Invoke_m174644_MethodInfo,
	&Comparison_1_BeginInvoke_m174645_MethodInfo,
	&Comparison_1_EndInvoke_m174646_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Comparison_1_t24006_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparison_1_t24006_0_0_0;
extern Il2CppType Comparison_1_t24006_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct Comparison_1_t24006;
extern TypeInfo Comparison_1_t24006_il2cpp_TypeInfo;
extern Il2CppGenericClass Comparison_1_t24006_GenericClass;
TypeInfo Comparison_1_t24006_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparison`1"/* name */
	, "System"/* namespaze */
	, Comparison_1_t24006_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparison_1_t24006_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Comparison_1_t24006_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparison_1_t24006_il2cpp_TypeInfo/* cast_class */
	, &Comparison_1_t24006_0_0_0/* byval_arg */
	, &Comparison_1_t24006_1_0_0/* this_arg */
	, Comparison_1_t24006_InterfacesOffsets/* interface_offsets */
	, &Comparison_1_t24006_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparison_1_t24006)/* instance_size */
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
extern TypeInfo IEnumerable_1_t6949_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDNode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDNode>
extern TypeInfo IEnumerable_1_t6949_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t6947_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDNode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m49201_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6949_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6947_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t6949_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m49201_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t6949_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6949_0_0_0;
extern Il2CppType IEnumerable_1_t6949_1_0_0;
struct IEnumerable_1_t6949;
extern TypeInfo IEnumerable_1_t6949_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t6949_GenericClass;
TypeInfo IEnumerable_1_t6949_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6949_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6949_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6949_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6949_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6949_0_0_0/* byval_arg */
	, &IEnumerable_1_t6949_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6949_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6947_il2cpp_TypeInfo;

// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDNode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDNode>
extern MethodInfo IEnumerator_1_get_Current_m49202_MethodInfo;
static PropertyInfo IEnumerator_1_t6947____Current_PropertyInfo = 
{
	&IEnumerator_1_t6947_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m49202_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6947_PropertyInfos[] =
{
	&IEnumerator_1_t6947____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t6947_il2cpp_TypeInfo;
extern Il2CppType DTDNode_t6942_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDNode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m49202_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6947_il2cpp_TypeInfo/* declaring_type */
	, &DTDNode_t6942_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t6947_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m49202_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t6947_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6947_0_0_0;
extern Il2CppType IEnumerator_1_t6947_1_0_0;
struct IEnumerator_1_t6947;
extern TypeInfo IEnumerator_1_t6947_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t6947_GenericClass;
TypeInfo IEnumerator_1_t6947_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6947_MethodInfos/* methods */
	, IEnumerator_1_t6947_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6947_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6947_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6947_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6947_0_0_0/* byval_arg */
	, &IEnumerator_1_t6947_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6947_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t28926_il2cpp_TypeInfo;

// Mono.Xml.DTDContentOrderType
#include "System_Xml_Mono_Xml_DTDContentOrderType.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDContentOrderType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDContentOrderType>
extern MethodInfo IEnumerator_1_get_Current_m267213_MethodInfo;
static PropertyInfo IEnumerator_1_t28926____Current_PropertyInfo = 
{
	&IEnumerator_1_t28926_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28926_PropertyInfos[] =
{
	&IEnumerator_1_t28926____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28926_il2cpp_TypeInfo;
extern Il2CppType DTDContentOrderType_t6960_0_0_0;
extern void* RuntimeInvoker_DTDContentOrderType_t6960 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDContentOrderType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267213_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28926_il2cpp_TypeInfo/* declaring_type */
	, &DTDContentOrderType_t6960_0_0_0/* return_type */
	, RuntimeInvoker_DTDContentOrderType_t6960/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28926_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267213_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28926_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28926_0_0_0;
extern Il2CppType IEnumerator_1_t28926_1_0_0;
struct IEnumerator_1_t28926;
extern TypeInfo IEnumerator_1_t28926_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28926_GenericClass;
TypeInfo IEnumerator_1_t28926_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28926_MethodInfos/* methods */
	, IEnumerator_1_t28926_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28926_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28926_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28926_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28926_0_0_0/* byval_arg */
	, &IEnumerator_1_t28926_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28926_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2669.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2669MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo;
extern TypeInfo DTDContentOrderType_t6960_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m174652_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDTDContentOrderType_t6960_m219175_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Xml.DTDContentOrderType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Xml.DTDContentOrderType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDTDContentOrderType_t6960_m219175 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisDTDContentOrderType_t6960_m219175_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174647_MethodInfo;
 void InternalEnumerator_1__ctor_m174647 (InternalEnumerator_1_t24013 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174648_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174648 (InternalEnumerator_1_t24013 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174649_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174649 (InternalEnumerator_1_t24013 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174652(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174652_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DTDContentOrderType_t6960_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174650_MethodInfo;
 void InternalEnumerator_1_Dispose_m174650 (InternalEnumerator_1_t24013 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174651_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174651 (InternalEnumerator_1_t24013 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174652_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174652 (InternalEnumerator_1_t24013 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDTDContentOrderType_t6960_m219175(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDTDContentOrderType_t6960_m219175_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24013____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24013, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24013____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24013, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24013_FieldInfos[] =
{
	&InternalEnumerator_1_t24013____array_FieldInfo,
	&InternalEnumerator_1_t24013____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174649_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24013____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24013_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174649_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174652_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24013____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24013_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174652_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24013_PropertyInfos[] =
{
	&InternalEnumerator_1_t24013____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24013____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24013_InternalEnumerator_1__ctor_m174647_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174647_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174647/* method */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24013_InternalEnumerator_1__ctor_m174647_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174648_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174648/* method */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174649_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174649/* method */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174650_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174650/* method */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174651_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174651/* method */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo;
extern Il2CppType DTDContentOrderType_t6960_0_0_0;
extern void* RuntimeInvoker_DTDContentOrderType_t6960 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Xml.DTDContentOrderType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174652_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174652/* method */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* declaring_type */
	, &DTDContentOrderType_t6960_0_0_0/* return_type */
	, RuntimeInvoker_DTDContentOrderType_t6960/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24013_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174647_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174648_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174649_MethodInfo,
	&InternalEnumerator_1_Dispose_m174650_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174651_MethodInfo,
	&InternalEnumerator_1_get_Current_m174652_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174649_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174651_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174648_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174650_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174652_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24013_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174649_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174651_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174648_MethodInfo,
	&InternalEnumerator_1_Dispose_m174650_MethodInfo,
	&InternalEnumerator_1_get_Current_m174652_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28926_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24013_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28926_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28926_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24013_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28926_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24013_0_0_0;
extern Il2CppType InternalEnumerator_1_t24013_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24013_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24013_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24013_MethodInfos/* methods */
	, InternalEnumerator_1_t24013_PropertyInfos/* properties */
	, InternalEnumerator_1_t24013_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24013_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24013_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24013_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24013_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24013_1_0_0/* this_arg */
	, InternalEnumerator_1_t24013_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24013_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24013)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;

#include "System.Xml_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>
extern MethodInfo ICollection_1_get_Count_m267214_MethodInfo;
static PropertyInfo ICollection_1_t35963____Count_PropertyInfo = 
{
	&ICollection_1_t35963_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267214_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267215_MethodInfo;
static PropertyInfo ICollection_1_t35963____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35963_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267215_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35963_PropertyInfos[] =
{
	&ICollection_1_t35963____Count_PropertyInfo,
	&ICollection_1_t35963____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::get_Count()
MethodInfo ICollection_1_get_Count_m267214_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35963_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267215_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35963_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DTDContentOrderType_t6960_0_0_0;
static ParameterInfo ICollection_1_t35963_ICollection_1_Add_m267216_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDContentOrderType_t6960_0_0_0},
};
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::Add(T)
MethodInfo ICollection_1_Add_m267216_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35963_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35963_ICollection_1_Add_m267216_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::Clear()
MethodInfo ICollection_1_Clear_m267217_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35963_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DTDContentOrderType_t6960_0_0_0;
static ParameterInfo ICollection_1_t35963_ICollection_1_Contains_m267218_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDContentOrderType_t6960_0_0_0},
};
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::Contains(T)
MethodInfo ICollection_1_Contains_m267218_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35963_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35963_ICollection_1_Contains_m267218_ParameterInfos/* parameters */
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
extern Il2CppType DTDContentOrderTypeU5BU5D_t26804_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35963_ICollection_1_CopyTo_m267219_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DTDContentOrderTypeU5BU5D_t26804_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267219_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35963_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35963_ICollection_1_CopyTo_m267219_ParameterInfos/* parameters */
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
extern Il2CppType DTDContentOrderType_t6960_0_0_0;
static ParameterInfo ICollection_1_t35963_ICollection_1_Remove_m267220_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDContentOrderType_t6960_0_0_0},
};
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDContentOrderType>::Remove(T)
MethodInfo ICollection_1_Remove_m267220_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35963_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35963_ICollection_1_Remove_m267220_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35963_MethodInfos[] =
{
	&ICollection_1_get_Count_m267214_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267215_MethodInfo,
	&ICollection_1_Add_m267216_MethodInfo,
	&ICollection_1_Clear_m267217_MethodInfo,
	&ICollection_1_Contains_m267218_MethodInfo,
	&ICollection_1_CopyTo_m267219_MethodInfo,
	&ICollection_1_Remove_m267220_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35965_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35963_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35965_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35963_0_0_0;
extern Il2CppType ICollection_1_t35963_1_0_0;
struct ICollection_1_t35963;
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35963_GenericClass;
TypeInfo ICollection_1_t35963_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35963_MethodInfos/* methods */
	, ICollection_1_t35963_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35963_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35963_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35963_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35963_0_0_0/* byval_arg */
	, &ICollection_1_t35963_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35963_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35965_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDContentOrderType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDContentOrderType>
extern TypeInfo IEnumerable_1_t35965_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28926_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDContentOrderType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267221_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35965_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28926_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35965_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267221_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35965_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35965_0_0_0;
extern Il2CppType IEnumerable_1_t35965_1_0_0;
struct IEnumerable_1_t35965;
extern TypeInfo IEnumerable_1_t35965_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35965_GenericClass;
TypeInfo IEnumerable_1_t35965_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35965_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35965_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35965_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35965_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35965_0_0_0/* byval_arg */
	, &IEnumerable_1_t35965_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35965_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35964_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>
extern MethodInfo IList_1_get_Item_m267222_MethodInfo;
extern MethodInfo IList_1_set_Item_m267223_MethodInfo;
static PropertyInfo IList_1_t35964____Item_PropertyInfo = 
{
	&IList_1_t35964_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267222_MethodInfo/* get */
	, &IList_1_set_Item_m267223_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35964_PropertyInfos[] =
{
	&IList_1_t35964____Item_PropertyInfo,
	NULL
};
extern Il2CppType DTDContentOrderType_t6960_0_0_0;
static ParameterInfo IList_1_t35964_IList_1_IndexOf_m267224_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDContentOrderType_t6960_0_0_0},
};
extern TypeInfo IList_1_t35964_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267224_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35964_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35964_IList_1_IndexOf_m267224_ParameterInfos/* parameters */
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
extern Il2CppType DTDContentOrderType_t6960_0_0_0;
static ParameterInfo IList_1_t35964_IList_1_Insert_m267225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DTDContentOrderType_t6960_0_0_0},
};
extern TypeInfo IList_1_t35964_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267225_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35964_IList_1_Insert_m267225_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35964_IList_1_RemoveAt_m267226_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35964_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267226_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35964_IList_1_RemoveAt_m267226_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35964_IList_1_get_Item_m267222_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35964_il2cpp_TypeInfo;
extern Il2CppType DTDContentOrderType_t6960_0_0_0;
extern void* RuntimeInvoker_DTDContentOrderType_t6960_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267222_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35964_il2cpp_TypeInfo/* declaring_type */
	, &DTDContentOrderType_t6960_0_0_0/* return_type */
	, RuntimeInvoker_DTDContentOrderType_t6960_Int32_t73/* invoker_method */
	, IList_1_t35964_IList_1_get_Item_m267222_ParameterInfos/* parameters */
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
extern Il2CppType DTDContentOrderType_t6960_0_0_0;
static ParameterInfo IList_1_t35964_IList_1_set_Item_m267223_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DTDContentOrderType_t6960_0_0_0},
};
extern TypeInfo IList_1_t35964_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDContentOrderType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267223_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35964_IList_1_set_Item_m267223_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35964_MethodInfos[] =
{
	&IList_1_IndexOf_m267224_MethodInfo,
	&IList_1_Insert_m267225_MethodInfo,
	&IList_1_RemoveAt_m267226_MethodInfo,
	&IList_1_get_Item_m267222_MethodInfo,
	&IList_1_set_Item_m267223_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35963_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35965_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35964_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35963_il2cpp_TypeInfo,
	&IEnumerable_1_t35965_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35964_0_0_0;
extern Il2CppType IList_1_t35964_1_0_0;
struct IList_1_t35964;
extern TypeInfo IList_1_t35964_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35964_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35964_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35964_MethodInfos/* methods */
	, IList_1_t35964_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35964_il2cpp_TypeInfo/* element_class */
	, IList_1_t35964_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35964_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35964_0_0_0/* byval_arg */
	, &IList_1_t35964_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35964_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28927_il2cpp_TypeInfo;

// Mono.Xml.DTDAttributeOccurenceType
#include "System_Xml_Mono_Xml_DTDAttributeOccurenceType.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>
extern MethodInfo IEnumerator_1_get_Current_m267227_MethodInfo;
static PropertyInfo IEnumerator_1_t28927____Current_PropertyInfo = 
{
	&IEnumerator_1_t28927_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267227_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28927_PropertyInfos[] =
{
	&IEnumerator_1_t28927____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28927_il2cpp_TypeInfo;
extern Il2CppType DTDAttributeOccurenceType_t6961_0_0_0;
extern void* RuntimeInvoker_DTDAttributeOccurenceType_t6961 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267227_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28927_il2cpp_TypeInfo/* declaring_type */
	, &DTDAttributeOccurenceType_t6961_0_0_0/* return_type */
	, RuntimeInvoker_DTDAttributeOccurenceType_t6961/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28927_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267227_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28927_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28927_0_0_0;
extern Il2CppType IEnumerator_1_t28927_1_0_0;
struct IEnumerator_1_t28927;
extern TypeInfo IEnumerator_1_t28927_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28927_GenericClass;
TypeInfo IEnumerator_1_t28927_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28927_MethodInfos/* methods */
	, IEnumerator_1_t28927_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28927_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28927_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28927_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28927_0_0_0/* byval_arg */
	, &IEnumerator_1_t28927_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28927_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2670.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2670MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo;
extern TypeInfo DTDAttributeOccurenceType_t6961_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174658_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDTDAttributeOccurenceType_t6961_m219186_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Xml.DTDAttributeOccurenceType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Xml.DTDAttributeOccurenceType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDTDAttributeOccurenceType_t6961_m219186 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisDTDAttributeOccurenceType_t6961_m219186_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174653_MethodInfo;
 void InternalEnumerator_1__ctor_m174653 (InternalEnumerator_1_t24014 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174654_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174654 (InternalEnumerator_1_t24014 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174655_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174655 (InternalEnumerator_1_t24014 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174658(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174658_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DTDAttributeOccurenceType_t6961_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174656_MethodInfo;
 void InternalEnumerator_1_Dispose_m174656 (InternalEnumerator_1_t24014 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174657_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174657 (InternalEnumerator_1_t24014 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174658_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174658 (InternalEnumerator_1_t24014 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDTDAttributeOccurenceType_t6961_m219186(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDTDAttributeOccurenceType_t6961_m219186_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24014____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24014, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24014____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24014, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24014_FieldInfos[] =
{
	&InternalEnumerator_1_t24014____array_FieldInfo,
	&InternalEnumerator_1_t24014____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174655_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24014____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24014_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174655_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174658_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24014____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24014_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174658_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24014_PropertyInfos[] =
{
	&InternalEnumerator_1_t24014____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24014____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24014_InternalEnumerator_1__ctor_m174653_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174653_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174653/* method */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24014_InternalEnumerator_1__ctor_m174653_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174654_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174654/* method */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174655_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174655/* method */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174656_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174656/* method */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174657_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174657/* method */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo;
extern Il2CppType DTDAttributeOccurenceType_t6961_0_0_0;
extern void* RuntimeInvoker_DTDAttributeOccurenceType_t6961 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Xml.DTDAttributeOccurenceType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174658_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174658/* method */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* declaring_type */
	, &DTDAttributeOccurenceType_t6961_0_0_0/* return_type */
	, RuntimeInvoker_DTDAttributeOccurenceType_t6961/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24014_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174653_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174654_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174655_MethodInfo,
	&InternalEnumerator_1_Dispose_m174656_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174657_MethodInfo,
	&InternalEnumerator_1_get_Current_m174658_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174655_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174657_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174654_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174656_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174658_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24014_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174655_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174657_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174654_MethodInfo,
	&InternalEnumerator_1_Dispose_m174656_MethodInfo,
	&InternalEnumerator_1_get_Current_m174658_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28927_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24014_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28927_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28927_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24014_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28927_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24014_0_0_0;
extern Il2CppType InternalEnumerator_1_t24014_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24014_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24014_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24014_MethodInfos/* methods */
	, InternalEnumerator_1_t24014_PropertyInfos/* properties */
	, InternalEnumerator_1_t24014_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24014_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24014_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24014_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24014_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24014_1_0_0/* this_arg */
	, InternalEnumerator_1_t24014_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24014_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24014)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>
extern MethodInfo ICollection_1_get_Count_m267228_MethodInfo;
static PropertyInfo ICollection_1_t35966____Count_PropertyInfo = 
{
	&ICollection_1_t35966_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267228_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267229_MethodInfo;
static PropertyInfo ICollection_1_t35966____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35966_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267229_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35966_PropertyInfos[] =
{
	&ICollection_1_t35966____Count_PropertyInfo,
	&ICollection_1_t35966____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::get_Count()
MethodInfo ICollection_1_get_Count_m267228_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35966_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267229_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35966_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DTDAttributeOccurenceType_t6961_0_0_0;
static ParameterInfo ICollection_1_t35966_ICollection_1_Add_m267230_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDAttributeOccurenceType_t6961_0_0_0},
};
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::Add(T)
MethodInfo ICollection_1_Add_m267230_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35966_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35966_ICollection_1_Add_m267230_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::Clear()
MethodInfo ICollection_1_Clear_m267231_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35966_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DTDAttributeOccurenceType_t6961_0_0_0;
static ParameterInfo ICollection_1_t35966_ICollection_1_Contains_m267232_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDAttributeOccurenceType_t6961_0_0_0},
};
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::Contains(T)
MethodInfo ICollection_1_Contains_m267232_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35966_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35966_ICollection_1_Contains_m267232_ParameterInfos/* parameters */
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
extern Il2CppType DTDAttributeOccurenceTypeU5BU5D_t26805_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35966_ICollection_1_CopyTo_m267233_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DTDAttributeOccurenceTypeU5BU5D_t26805_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267233_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35966_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35966_ICollection_1_CopyTo_m267233_ParameterInfos/* parameters */
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
extern Il2CppType DTDAttributeOccurenceType_t6961_0_0_0;
static ParameterInfo ICollection_1_t35966_ICollection_1_Remove_m267234_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDAttributeOccurenceType_t6961_0_0_0},
};
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDAttributeOccurenceType>::Remove(T)
MethodInfo ICollection_1_Remove_m267234_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35966_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35966_ICollection_1_Remove_m267234_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35966_MethodInfos[] =
{
	&ICollection_1_get_Count_m267228_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267229_MethodInfo,
	&ICollection_1_Add_m267230_MethodInfo,
	&ICollection_1_Clear_m267231_MethodInfo,
	&ICollection_1_Contains_m267232_MethodInfo,
	&ICollection_1_CopyTo_m267233_MethodInfo,
	&ICollection_1_Remove_m267234_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35968_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35966_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35968_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35966_0_0_0;
extern Il2CppType ICollection_1_t35966_1_0_0;
struct ICollection_1_t35966;
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35966_GenericClass;
TypeInfo ICollection_1_t35966_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35966_MethodInfos/* methods */
	, ICollection_1_t35966_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35966_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35966_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35966_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35966_0_0_0/* byval_arg */
	, &ICollection_1_t35966_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35966_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35968_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDAttributeOccurenceType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDAttributeOccurenceType>
extern TypeInfo IEnumerable_1_t35968_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28927_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDAttributeOccurenceType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267235_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35968_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28927_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35968_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267235_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35968_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35968_0_0_0;
extern Il2CppType IEnumerable_1_t35968_1_0_0;
struct IEnumerable_1_t35968;
extern TypeInfo IEnumerable_1_t35968_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35968_GenericClass;
TypeInfo IEnumerable_1_t35968_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35968_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35968_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35968_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35968_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35968_0_0_0/* byval_arg */
	, &IEnumerable_1_t35968_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35968_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35967_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>
extern MethodInfo IList_1_get_Item_m267236_MethodInfo;
extern MethodInfo IList_1_set_Item_m267237_MethodInfo;
static PropertyInfo IList_1_t35967____Item_PropertyInfo = 
{
	&IList_1_t35967_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267236_MethodInfo/* get */
	, &IList_1_set_Item_m267237_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35967_PropertyInfos[] =
{
	&IList_1_t35967____Item_PropertyInfo,
	NULL
};
extern Il2CppType DTDAttributeOccurenceType_t6961_0_0_0;
static ParameterInfo IList_1_t35967_IList_1_IndexOf_m267238_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDAttributeOccurenceType_t6961_0_0_0},
};
extern TypeInfo IList_1_t35967_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267238_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35967_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35967_IList_1_IndexOf_m267238_ParameterInfos/* parameters */
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
extern Il2CppType DTDAttributeOccurenceType_t6961_0_0_0;
static ParameterInfo IList_1_t35967_IList_1_Insert_m267239_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DTDAttributeOccurenceType_t6961_0_0_0},
};
extern TypeInfo IList_1_t35967_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267239_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35967_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35967_IList_1_Insert_m267239_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35967_IList_1_RemoveAt_m267240_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35967_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267240_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35967_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35967_IList_1_RemoveAt_m267240_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35967_IList_1_get_Item_m267236_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35967_il2cpp_TypeInfo;
extern Il2CppType DTDAttributeOccurenceType_t6961_0_0_0;
extern void* RuntimeInvoker_DTDAttributeOccurenceType_t6961_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267236_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35967_il2cpp_TypeInfo/* declaring_type */
	, &DTDAttributeOccurenceType_t6961_0_0_0/* return_type */
	, RuntimeInvoker_DTDAttributeOccurenceType_t6961_Int32_t73/* invoker_method */
	, IList_1_t35967_IList_1_get_Item_m267236_ParameterInfos/* parameters */
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
extern Il2CppType DTDAttributeOccurenceType_t6961_0_0_0;
static ParameterInfo IList_1_t35967_IList_1_set_Item_m267237_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DTDAttributeOccurenceType_t6961_0_0_0},
};
extern TypeInfo IList_1_t35967_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDAttributeOccurenceType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267237_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35967_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35967_IList_1_set_Item_m267237_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35967_MethodInfos[] =
{
	&IList_1_IndexOf_m267238_MethodInfo,
	&IList_1_Insert_m267239_MethodInfo,
	&IList_1_RemoveAt_m267240_MethodInfo,
	&IList_1_get_Item_m267236_MethodInfo,
	&IList_1_set_Item_m267237_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35966_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35968_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35967_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35966_il2cpp_TypeInfo,
	&IEnumerable_1_t35968_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35967_0_0_0;
extern Il2CppType IList_1_t35967_1_0_0;
struct IList_1_t35967;
extern TypeInfo IList_1_t35967_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35967_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35967_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35967_MethodInfos/* methods */
	, IList_1_t35967_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35967_il2cpp_TypeInfo/* element_class */
	, IList_1_t35967_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35967_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35967_0_0_0/* byval_arg */
	, &IList_1_t35967_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35967_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28928_il2cpp_TypeInfo;

// Mono.Xml.DTDOccurence
#include "System_Xml_Mono_Xml_DTDOccurence.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDOccurence>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDOccurence>
extern MethodInfo IEnumerator_1_get_Current_m267241_MethodInfo;
static PropertyInfo IEnumerator_1_t28928____Current_PropertyInfo = 
{
	&IEnumerator_1_t28928_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267241_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28928_PropertyInfos[] =
{
	&IEnumerator_1_t28928____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28928_il2cpp_TypeInfo;
extern Il2CppType DTDOccurence_t6962_0_0_0;
extern void* RuntimeInvoker_DTDOccurence_t6962 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDOccurence>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267241_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28928_il2cpp_TypeInfo/* declaring_type */
	, &DTDOccurence_t6962_0_0_0/* return_type */
	, RuntimeInvoker_DTDOccurence_t6962/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28928_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267241_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28928_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28928_0_0_0;
extern Il2CppType IEnumerator_1_t28928_1_0_0;
struct IEnumerator_1_t28928;
extern TypeInfo IEnumerator_1_t28928_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28928_GenericClass;
TypeInfo IEnumerator_1_t28928_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28928_MethodInfos/* methods */
	, IEnumerator_1_t28928_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28928_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28928_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28928_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28928_0_0_0/* byval_arg */
	, &IEnumerator_1_t28928_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28928_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2671.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2671MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo;
extern TypeInfo DTDOccurence_t6962_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174664_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDTDOccurence_t6962_m219197_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Xml.DTDOccurence>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Xml.DTDOccurence>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDTDOccurence_t6962_m219197 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisDTDOccurence_t6962_m219197_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174659_MethodInfo;
 void InternalEnumerator_1__ctor_m174659 (InternalEnumerator_1_t24015 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174660_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174660 (InternalEnumerator_1_t24015 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174661_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174661 (InternalEnumerator_1_t24015 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174664(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174664_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DTDOccurence_t6962_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174662_MethodInfo;
 void InternalEnumerator_1_Dispose_m174662 (InternalEnumerator_1_t24015 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174663_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174663 (InternalEnumerator_1_t24015 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174664_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174664 (InternalEnumerator_1_t24015 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDTDOccurence_t6962_m219197(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDTDOccurence_t6962_m219197_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24015____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24015, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24015____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24015, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24015_FieldInfos[] =
{
	&InternalEnumerator_1_t24015____array_FieldInfo,
	&InternalEnumerator_1_t24015____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174661_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24015____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24015_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174661_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174664_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24015____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24015_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174664_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24015_PropertyInfos[] =
{
	&InternalEnumerator_1_t24015____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24015____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24015_InternalEnumerator_1__ctor_m174659_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174659_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174659/* method */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24015_InternalEnumerator_1__ctor_m174659_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174660_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174660/* method */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174661_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174661/* method */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174662_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174662/* method */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174663_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174663/* method */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo;
extern Il2CppType DTDOccurence_t6962_0_0_0;
extern void* RuntimeInvoker_DTDOccurence_t6962 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Xml.DTDOccurence>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174664_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174664/* method */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* declaring_type */
	, &DTDOccurence_t6962_0_0_0/* return_type */
	, RuntimeInvoker_DTDOccurence_t6962/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24015_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174659_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174660_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174661_MethodInfo,
	&InternalEnumerator_1_Dispose_m174662_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174663_MethodInfo,
	&InternalEnumerator_1_get_Current_m174664_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174661_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174663_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174660_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174662_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174664_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24015_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174661_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174663_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174660_MethodInfo,
	&InternalEnumerator_1_Dispose_m174662_MethodInfo,
	&InternalEnumerator_1_get_Current_m174664_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28928_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24015_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28928_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28928_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24015_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28928_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24015_0_0_0;
extern Il2CppType InternalEnumerator_1_t24015_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24015_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24015_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24015_MethodInfos/* methods */
	, InternalEnumerator_1_t24015_PropertyInfos/* properties */
	, InternalEnumerator_1_t24015_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24015_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24015_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24015_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24015_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24015_1_0_0/* this_arg */
	, InternalEnumerator_1_t24015_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24015_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24015)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>
extern MethodInfo ICollection_1_get_Count_m267242_MethodInfo;
static PropertyInfo ICollection_1_t35969____Count_PropertyInfo = 
{
	&ICollection_1_t35969_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267242_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267243_MethodInfo;
static PropertyInfo ICollection_1_t35969____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35969_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267243_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35969_PropertyInfos[] =
{
	&ICollection_1_t35969____Count_PropertyInfo,
	&ICollection_1_t35969____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::get_Count()
MethodInfo ICollection_1_get_Count_m267242_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35969_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267243_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35969_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DTDOccurence_t6962_0_0_0;
static ParameterInfo ICollection_1_t35969_ICollection_1_Add_m267244_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDOccurence_t6962_0_0_0},
};
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::Add(T)
MethodInfo ICollection_1_Add_m267244_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35969_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35969_ICollection_1_Add_m267244_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::Clear()
MethodInfo ICollection_1_Clear_m267245_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35969_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DTDOccurence_t6962_0_0_0;
static ParameterInfo ICollection_1_t35969_ICollection_1_Contains_m267246_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDOccurence_t6962_0_0_0},
};
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::Contains(T)
MethodInfo ICollection_1_Contains_m267246_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35969_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35969_ICollection_1_Contains_m267246_ParameterInfos/* parameters */
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
extern Il2CppType DTDOccurenceU5BU5D_t26806_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35969_ICollection_1_CopyTo_m267247_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DTDOccurenceU5BU5D_t26806_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267247_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35969_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35969_ICollection_1_CopyTo_m267247_ParameterInfos/* parameters */
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
extern Il2CppType DTDOccurence_t6962_0_0_0;
static ParameterInfo ICollection_1_t35969_ICollection_1_Remove_m267248_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDOccurence_t6962_0_0_0},
};
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDOccurence>::Remove(T)
MethodInfo ICollection_1_Remove_m267248_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35969_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35969_ICollection_1_Remove_m267248_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35969_MethodInfos[] =
{
	&ICollection_1_get_Count_m267242_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267243_MethodInfo,
	&ICollection_1_Add_m267244_MethodInfo,
	&ICollection_1_Clear_m267245_MethodInfo,
	&ICollection_1_Contains_m267246_MethodInfo,
	&ICollection_1_CopyTo_m267247_MethodInfo,
	&ICollection_1_Remove_m267248_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35971_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35969_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35969_0_0_0;
extern Il2CppType ICollection_1_t35969_1_0_0;
struct ICollection_1_t35969;
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35969_GenericClass;
TypeInfo ICollection_1_t35969_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35969_MethodInfos/* methods */
	, ICollection_1_t35969_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35969_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35969_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35969_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35969_0_0_0/* byval_arg */
	, &ICollection_1_t35969_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35969_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35971_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDOccurence>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDOccurence>
extern TypeInfo IEnumerable_1_t35971_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28928_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDOccurence>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267249_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35971_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28928_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35971_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267249_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35971_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35971_0_0_0;
extern Il2CppType IEnumerable_1_t35971_1_0_0;
struct IEnumerable_1_t35971;
extern TypeInfo IEnumerable_1_t35971_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35971_GenericClass;
TypeInfo IEnumerable_1_t35971_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35971_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35971_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35971_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35971_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35971_0_0_0/* byval_arg */
	, &IEnumerable_1_t35971_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35971_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35970_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>
extern MethodInfo IList_1_get_Item_m267250_MethodInfo;
extern MethodInfo IList_1_set_Item_m267251_MethodInfo;
static PropertyInfo IList_1_t35970____Item_PropertyInfo = 
{
	&IList_1_t35970_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267250_MethodInfo/* get */
	, &IList_1_set_Item_m267251_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35970_PropertyInfos[] =
{
	&IList_1_t35970____Item_PropertyInfo,
	NULL
};
extern Il2CppType DTDOccurence_t6962_0_0_0;
static ParameterInfo IList_1_t35970_IList_1_IndexOf_m267252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DTDOccurence_t6962_0_0_0},
};
extern TypeInfo IList_1_t35970_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267252_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35970_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35970_IList_1_IndexOf_m267252_ParameterInfos/* parameters */
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
extern Il2CppType DTDOccurence_t6962_0_0_0;
static ParameterInfo IList_1_t35970_IList_1_Insert_m267253_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DTDOccurence_t6962_0_0_0},
};
extern TypeInfo IList_1_t35970_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267253_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35970_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35970_IList_1_Insert_m267253_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35970_IList_1_RemoveAt_m267254_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35970_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267254_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35970_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35970_IList_1_RemoveAt_m267254_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35970_IList_1_get_Item_m267250_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35970_il2cpp_TypeInfo;
extern Il2CppType DTDOccurence_t6962_0_0_0;
extern void* RuntimeInvoker_DTDOccurence_t6962_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267250_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35970_il2cpp_TypeInfo/* declaring_type */
	, &DTDOccurence_t6962_0_0_0/* return_type */
	, RuntimeInvoker_DTDOccurence_t6962_Int32_t73/* invoker_method */
	, IList_1_t35970_IList_1_get_Item_m267250_ParameterInfos/* parameters */
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
extern Il2CppType DTDOccurence_t6962_0_0_0;
static ParameterInfo IList_1_t35970_IList_1_set_Item_m267251_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DTDOccurence_t6962_0_0_0},
};
extern TypeInfo IList_1_t35970_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDOccurence>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267251_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35970_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35970_IList_1_set_Item_m267251_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35970_MethodInfos[] =
{
	&IList_1_IndexOf_m267252_MethodInfo,
	&IList_1_Insert_m267253_MethodInfo,
	&IList_1_RemoveAt_m267254_MethodInfo,
	&IList_1_get_Item_m267250_MethodInfo,
	&IList_1_set_Item_m267251_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35969_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35971_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35970_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35969_il2cpp_TypeInfo,
	&IEnumerable_1_t35971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35970_0_0_0;
extern Il2CppType IList_1_t35970_1_0_0;
struct IList_1_t35970;
extern TypeInfo IList_1_t35970_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35970_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35970_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35970_MethodInfos/* methods */
	, IList_1_t35970_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35970_il2cpp_TypeInfo/* element_class */
	, IList_1_t35970_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35970_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35970_0_0_0/* byval_arg */
	, &IList_1_t35970_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35970_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28929_il2cpp_TypeInfo;

// Mono.Xml.DTDValidatingReader/AttributeSlot
#include "System_Xml_Mono_Xml_DTDValidatingReader_AttributeSlot.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>
extern MethodInfo IEnumerator_1_get_Current_m267255_MethodInfo;
static PropertyInfo IEnumerator_1_t28929____Current_PropertyInfo = 
{
	&IEnumerator_1_t28929_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267255_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28929_PropertyInfos[] =
{
	&IEnumerator_1_t28929____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28929_il2cpp_TypeInfo;
extern Il2CppType AttributeSlot_t6965_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267255_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28929_il2cpp_TypeInfo/* declaring_type */
	, &AttributeSlot_t6965_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t28929_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267255_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28929_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28929_0_0_0;
extern Il2CppType IEnumerator_1_t28929_1_0_0;
struct IEnumerator_1_t28929;
extern TypeInfo IEnumerator_1_t28929_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28929_GenericClass;
TypeInfo IEnumerator_1_t28929_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28929_MethodInfos/* methods */
	, IEnumerator_1_t28929_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28929_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28929_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28929_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28929_0_0_0/* byval_arg */
	, &IEnumerator_1_t28929_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28929_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2672.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2672MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo;
extern TypeInfo AttributeSlot_t6965_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174670_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAttributeSlot_t6965_m219208_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m180549_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m180549(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Xml.DTDValidatingReader/AttributeSlot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Xml.DTDValidatingReader/AttributeSlot>(System.Int32)
#define Array_InternalArray__get_Item_TisAttributeSlot_t6965_m219208(__this, p0, method) (AttributeSlot_t6965 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisAttributeSlot_t6965_m219208_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24016____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24016, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24016____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24016, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24016_FieldInfos[] =
{
	&InternalEnumerator_1_t24016____array_FieldInfo,
	&InternalEnumerator_1_t24016____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174667_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24016____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24016_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174667_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174670_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24016____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24016_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174670_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24016_PropertyInfos[] =
{
	&InternalEnumerator_1_t24016____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24016____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24016_InternalEnumerator_1__ctor_m174665_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174665_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24016_InternalEnumerator_1__ctor_m174665_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174666_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174667_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174668_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174669_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo;
extern Il2CppType AttributeSlot_t6965_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174670_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* declaring_type */
	, &AttributeSlot_t6965_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24016_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174665_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174666_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174667_MethodInfo,
	&InternalEnumerator_1_Dispose_m174668_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174669_MethodInfo,
	&InternalEnumerator_1_get_Current_m174670_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174667_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174669_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174666_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174668_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174670_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24016_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174667_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174669_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174666_MethodInfo,
	&InternalEnumerator_1_Dispose_m174668_MethodInfo,
	&InternalEnumerator_1_get_Current_m174670_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28929_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24016_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28929_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28929_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24016_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28929_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m174670_MethodInfo;
extern TypeInfo AttributeSlot_t6965_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAttributeSlot_t6965_m219208_MethodInfo;
static void* InternalEnumerator_1_t24016_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m174670_MethodInfo,
	&AttributeSlot_t6965_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisAttributeSlot_t6965_m219208_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24016_0_0_0;
extern Il2CppType InternalEnumerator_1_t24016_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24016_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24016_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24016_MethodInfos/* methods */
	, InternalEnumerator_1_t24016_PropertyInfos/* properties */
	, InternalEnumerator_1_t24016_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24016_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24016_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24016_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24016_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24016_1_0_0/* this_arg */
	, InternalEnumerator_1_t24016_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24016_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24016_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24016)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>
extern MethodInfo ICollection_1_get_Count_m267256_MethodInfo;
static PropertyInfo ICollection_1_t35972____Count_PropertyInfo = 
{
	&ICollection_1_t35972_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267256_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267257_MethodInfo;
static PropertyInfo ICollection_1_t35972____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35972_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267257_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35972_PropertyInfos[] =
{
	&ICollection_1_t35972____Count_PropertyInfo,
	&ICollection_1_t35972____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_Count()
MethodInfo ICollection_1_get_Count_m267256_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35972_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267257_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35972_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType AttributeSlot_t6965_0_0_0;
static ParameterInfo ICollection_1_t35972_ICollection_1_Add_m267258_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeSlot_t6965_0_0_0},
};
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Add(T)
MethodInfo ICollection_1_Add_m267258_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35972_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t35972_ICollection_1_Add_m267258_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Clear()
MethodInfo ICollection_1_Clear_m267259_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35972_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType AttributeSlot_t6965_0_0_0;
static ParameterInfo ICollection_1_t35972_ICollection_1_Contains_m267260_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeSlot_t6965_0_0_0},
};
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Contains(T)
MethodInfo ICollection_1_Contains_m267260_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35972_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t35972_ICollection_1_Contains_m267260_ParameterInfos/* parameters */
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
extern Il2CppType AttributeSlotU5BU5D_t6969_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35972_ICollection_1_CopyTo_m267261_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AttributeSlotU5BU5D_t6969_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267261_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35972_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35972_ICollection_1_CopyTo_m267261_ParameterInfos/* parameters */
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
extern Il2CppType AttributeSlot_t6965_0_0_0;
static ParameterInfo ICollection_1_t35972_ICollection_1_Remove_m267262_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeSlot_t6965_0_0_0},
};
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Remove(T)
MethodInfo ICollection_1_Remove_m267262_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35972_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t35972_ICollection_1_Remove_m267262_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35972_MethodInfos[] =
{
	&ICollection_1_get_Count_m267256_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267257_MethodInfo,
	&ICollection_1_Add_m267258_MethodInfo,
	&ICollection_1_Clear_m267259_MethodInfo,
	&ICollection_1_Contains_m267260_MethodInfo,
	&ICollection_1_CopyTo_m267261_MethodInfo,
	&ICollection_1_Remove_m267262_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35974_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35972_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35974_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35972_0_0_0;
extern Il2CppType ICollection_1_t35972_1_0_0;
struct ICollection_1_t35972;
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35972_GenericClass;
TypeInfo ICollection_1_t35972_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35972_MethodInfos/* methods */
	, ICollection_1_t35972_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35972_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35972_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35972_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35972_0_0_0/* byval_arg */
	, &ICollection_1_t35972_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35972_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35974_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDValidatingReader/AttributeSlot>
extern TypeInfo IEnumerable_1_t35974_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28929_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267263_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35974_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28929_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35974_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267263_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35974_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35974_0_0_0;
extern Il2CppType IEnumerable_1_t35974_1_0_0;
struct IEnumerable_1_t35974;
extern TypeInfo IEnumerable_1_t35974_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35974_GenericClass;
TypeInfo IEnumerable_1_t35974_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35974_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35974_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35974_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35974_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35974_0_0_0/* byval_arg */
	, &IEnumerable_1_t35974_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35974_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35973_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>
extern MethodInfo IList_1_get_Item_m267264_MethodInfo;
extern MethodInfo IList_1_set_Item_m267265_MethodInfo;
static PropertyInfo IList_1_t35973____Item_PropertyInfo = 
{
	&IList_1_t35973_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267264_MethodInfo/* get */
	, &IList_1_set_Item_m267265_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35973_PropertyInfos[] =
{
	&IList_1_t35973____Item_PropertyInfo,
	NULL
};
extern Il2CppType AttributeSlot_t6965_0_0_0;
static ParameterInfo IList_1_t35973_IList_1_IndexOf_m267266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeSlot_t6965_0_0_0},
};
extern TypeInfo IList_1_t35973_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267266_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35973_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t35973_IList_1_IndexOf_m267266_ParameterInfos/* parameters */
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
extern Il2CppType AttributeSlot_t6965_0_0_0;
static ParameterInfo IList_1_t35973_IList_1_Insert_m267267_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AttributeSlot_t6965_0_0_0},
};
extern TypeInfo IList_1_t35973_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267267_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35973_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t35973_IList_1_Insert_m267267_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35973_IList_1_RemoveAt_m267268_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35973_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267268_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35973_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35973_IList_1_RemoveAt_m267268_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35973_IList_1_get_Item_m267264_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35973_il2cpp_TypeInfo;
extern Il2CppType AttributeSlot_t6965_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267264_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35973_il2cpp_TypeInfo/* declaring_type */
	, &AttributeSlot_t6965_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t35973_IList_1_get_Item_m267264_ParameterInfos/* parameters */
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
extern Il2CppType AttributeSlot_t6965_0_0_0;
static ParameterInfo IList_1_t35973_IList_1_set_Item_m267265_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AttributeSlot_t6965_0_0_0},
};
extern TypeInfo IList_1_t35973_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Mono.Xml.DTDValidatingReader/AttributeSlot>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267265_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35973_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t35973_IList_1_set_Item_m267265_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35973_MethodInfos[] =
{
	&IList_1_IndexOf_m267266_MethodInfo,
	&IList_1_Insert_m267267_MethodInfo,
	&IList_1_RemoveAt_m267268_MethodInfo,
	&IList_1_get_Item_m267264_MethodInfo,
	&IList_1_set_Item_m267265_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35972_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35974_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35973_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35972_il2cpp_TypeInfo,
	&IEnumerable_1_t35974_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35973_0_0_0;
extern Il2CppType IList_1_t35973_1_0_0;
struct IList_1_t35973;
extern TypeInfo IList_1_t35973_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35973_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35973_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35973_MethodInfos/* methods */
	, IList_1_t35973_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35973_il2cpp_TypeInfo/* element_class */
	, IList_1_t35973_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35973_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35973_0_0_0/* byval_arg */
	, &IList_1_t35973_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35973_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28930_il2cpp_TypeInfo;

// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.EntityHandling>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.EntityHandling>
extern MethodInfo IEnumerator_1_get_Current_m267269_MethodInfo;
static PropertyInfo IEnumerator_1_t28930____Current_PropertyInfo = 
{
	&IEnumerator_1_t28930_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267269_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28930_PropertyInfos[] =
{
	&IEnumerator_1_t28930____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28930_il2cpp_TypeInfo;
extern Il2CppType EntityHandling_t6971_0_0_0;
extern void* RuntimeInvoker_EntityHandling_t6971 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.EntityHandling>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267269_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28930_il2cpp_TypeInfo/* declaring_type */
	, &EntityHandling_t6971_0_0_0/* return_type */
	, RuntimeInvoker_EntityHandling_t6971/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28930_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267269_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28930_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28930_0_0_0;
extern Il2CppType IEnumerator_1_t28930_1_0_0;
struct IEnumerator_1_t28930;
extern TypeInfo IEnumerator_1_t28930_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28930_GenericClass;
TypeInfo IEnumerator_1_t28930_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28930_MethodInfos/* methods */
	, IEnumerator_1_t28930_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28930_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28930_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28930_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28930_0_0_0/* byval_arg */
	, &IEnumerator_1_t28930_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28930_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.EntityHandling>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2673.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.EntityHandling>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2673MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo;
extern TypeInfo EntityHandling_t6971_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174676_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEntityHandling_t6971_m219219_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.EntityHandling>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.EntityHandling>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEntityHandling_t6971_m219219 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisEntityHandling_t6971_m219219_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174671_MethodInfo;
 void InternalEnumerator_1__ctor_m174671 (InternalEnumerator_1_t24017 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174672_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174672 (InternalEnumerator_1_t24017 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174673_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174673 (InternalEnumerator_1_t24017 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174676(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174676_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EntityHandling_t6971_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174674_MethodInfo;
 void InternalEnumerator_1_Dispose_m174674 (InternalEnumerator_1_t24017 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174675_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174675 (InternalEnumerator_1_t24017 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174676_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174676 (InternalEnumerator_1_t24017 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEntityHandling_t6971_m219219(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEntityHandling_t6971_m219219_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.EntityHandling>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24017____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24017, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24017____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24017, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24017_FieldInfos[] =
{
	&InternalEnumerator_1_t24017____array_FieldInfo,
	&InternalEnumerator_1_t24017____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174673_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24017____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24017_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174673_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174676_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24017____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24017_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174676_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24017_PropertyInfos[] =
{
	&InternalEnumerator_1_t24017____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24017____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24017_InternalEnumerator_1__ctor_m174671_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174671_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174671/* method */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24017_InternalEnumerator_1__ctor_m174671_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174672_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174672/* method */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174673_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174673/* method */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174674_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174674/* method */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174675_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174675/* method */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo;
extern Il2CppType EntityHandling_t6971_0_0_0;
extern void* RuntimeInvoker_EntityHandling_t6971 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.EntityHandling>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174676_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174676/* method */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* declaring_type */
	, &EntityHandling_t6971_0_0_0/* return_type */
	, RuntimeInvoker_EntityHandling_t6971/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24017_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174671_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174672_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174673_MethodInfo,
	&InternalEnumerator_1_Dispose_m174674_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174675_MethodInfo,
	&InternalEnumerator_1_get_Current_m174676_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174673_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174675_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174672_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174674_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174676_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24017_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174673_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174675_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174672_MethodInfo,
	&InternalEnumerator_1_Dispose_m174674_MethodInfo,
	&InternalEnumerator_1_get_Current_m174676_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28930_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24017_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28930_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28930_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24017_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28930_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24017_0_0_0;
extern Il2CppType InternalEnumerator_1_t24017_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24017_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24017_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24017_MethodInfos/* methods */
	, InternalEnumerator_1_t24017_PropertyInfos/* properties */
	, InternalEnumerator_1_t24017_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24017_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24017_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24017_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24017_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24017_1_0_0/* this_arg */
	, InternalEnumerator_1_t24017_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24017_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24017)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>
extern MethodInfo ICollection_1_get_Count_m267270_MethodInfo;
static PropertyInfo ICollection_1_t35975____Count_PropertyInfo = 
{
	&ICollection_1_t35975_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267270_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267271_MethodInfo;
static PropertyInfo ICollection_1_t35975____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35975_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267271_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35975_PropertyInfos[] =
{
	&ICollection_1_t35975____Count_PropertyInfo,
	&ICollection_1_t35975____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::get_Count()
MethodInfo ICollection_1_get_Count_m267270_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35975_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267271_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35975_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType EntityHandling_t6971_0_0_0;
static ParameterInfo ICollection_1_t35975_ICollection_1_Add_m267272_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EntityHandling_t6971_0_0_0},
};
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::Add(T)
MethodInfo ICollection_1_Add_m267272_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35975_ICollection_1_Add_m267272_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::Clear()
MethodInfo ICollection_1_Clear_m267273_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35975_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType EntityHandling_t6971_0_0_0;
static ParameterInfo ICollection_1_t35975_ICollection_1_Contains_m267274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EntityHandling_t6971_0_0_0},
};
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::Contains(T)
MethodInfo ICollection_1_Contains_m267274_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35975_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35975_ICollection_1_Contains_m267274_ParameterInfos/* parameters */
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
extern Il2CppType EntityHandlingU5BU5D_t26807_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35975_ICollection_1_CopyTo_m267275_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EntityHandlingU5BU5D_t26807_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267275_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35975_ICollection_1_CopyTo_m267275_ParameterInfos/* parameters */
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
extern Il2CppType EntityHandling_t6971_0_0_0;
static ParameterInfo ICollection_1_t35975_ICollection_1_Remove_m267276_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EntityHandling_t6971_0_0_0},
};
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.EntityHandling>::Remove(T)
MethodInfo ICollection_1_Remove_m267276_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35975_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35975_ICollection_1_Remove_m267276_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35975_MethodInfos[] =
{
	&ICollection_1_get_Count_m267270_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267271_MethodInfo,
	&ICollection_1_Add_m267272_MethodInfo,
	&ICollection_1_Clear_m267273_MethodInfo,
	&ICollection_1_Contains_m267274_MethodInfo,
	&ICollection_1_CopyTo_m267275_MethodInfo,
	&ICollection_1_Remove_m267276_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35977_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35975_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35975_0_0_0;
extern Il2CppType ICollection_1_t35975_1_0_0;
struct ICollection_1_t35975;
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35975_GenericClass;
TypeInfo ICollection_1_t35975_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35975_MethodInfos/* methods */
	, ICollection_1_t35975_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35975_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35975_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35975_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35975_0_0_0/* byval_arg */
	, &ICollection_1_t35975_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35975_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35977_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.EntityHandling>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.EntityHandling>
extern TypeInfo IEnumerable_1_t35977_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28930_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.EntityHandling>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267277_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35977_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28930_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35977_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267277_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35977_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35977_0_0_0;
extern Il2CppType IEnumerable_1_t35977_1_0_0;
struct IEnumerable_1_t35977;
extern TypeInfo IEnumerable_1_t35977_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35977_GenericClass;
TypeInfo IEnumerable_1_t35977_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35977_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35977_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35977_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35977_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35977_0_0_0/* byval_arg */
	, &IEnumerable_1_t35977_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35977_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35976_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.EntityHandling>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.EntityHandling>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.EntityHandling>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.EntityHandling>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.EntityHandling>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.EntityHandling>
extern MethodInfo IList_1_get_Item_m267278_MethodInfo;
extern MethodInfo IList_1_set_Item_m267279_MethodInfo;
static PropertyInfo IList_1_t35976____Item_PropertyInfo = 
{
	&IList_1_t35976_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267278_MethodInfo/* get */
	, &IList_1_set_Item_m267279_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35976_PropertyInfos[] =
{
	&IList_1_t35976____Item_PropertyInfo,
	NULL
};
extern Il2CppType EntityHandling_t6971_0_0_0;
static ParameterInfo IList_1_t35976_IList_1_IndexOf_m267280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EntityHandling_t6971_0_0_0},
};
extern TypeInfo IList_1_t35976_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.EntityHandling>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267280_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35976_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35976_IList_1_IndexOf_m267280_ParameterInfos/* parameters */
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
extern Il2CppType EntityHandling_t6971_0_0_0;
static ParameterInfo IList_1_t35976_IList_1_Insert_m267281_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EntityHandling_t6971_0_0_0},
};
extern TypeInfo IList_1_t35976_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.EntityHandling>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267281_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35976_IList_1_Insert_m267281_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35976_IList_1_RemoveAt_m267282_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35976_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.EntityHandling>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267282_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35976_IList_1_RemoveAt_m267282_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35976_IList_1_get_Item_m267278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35976_il2cpp_TypeInfo;
extern Il2CppType EntityHandling_t6971_0_0_0;
extern void* RuntimeInvoker_EntityHandling_t6971_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.EntityHandling>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267278_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35976_il2cpp_TypeInfo/* declaring_type */
	, &EntityHandling_t6971_0_0_0/* return_type */
	, RuntimeInvoker_EntityHandling_t6971_Int32_t73/* invoker_method */
	, IList_1_t35976_IList_1_get_Item_m267278_ParameterInfos/* parameters */
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
extern Il2CppType EntityHandling_t6971_0_0_0;
static ParameterInfo IList_1_t35976_IList_1_set_Item_m267279_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EntityHandling_t6971_0_0_0},
};
extern TypeInfo IList_1_t35976_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.EntityHandling>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267279_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35976_IList_1_set_Item_m267279_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35976_MethodInfos[] =
{
	&IList_1_IndexOf_m267280_MethodInfo,
	&IList_1_Insert_m267281_MethodInfo,
	&IList_1_RemoveAt_m267282_MethodInfo,
	&IList_1_get_Item_m267278_MethodInfo,
	&IList_1_set_Item_m267279_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35975_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35977_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35976_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35975_il2cpp_TypeInfo,
	&IEnumerable_1_t35977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35976_0_0_0;
extern Il2CppType IList_1_t35976_1_0_0;
struct IList_1_t35976;
extern TypeInfo IList_1_t35976_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35976_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35976_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35976_MethodInfos/* methods */
	, IList_1_t35976_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35976_il2cpp_TypeInfo/* element_class */
	, IList_1_t35976_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35976_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35976_0_0_0/* byval_arg */
	, &IList_1_t35976_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35976_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28931_il2cpp_TypeInfo;

// System.Xml.Formatting
#include "System_Xml_System_Xml_Formatting.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.Formatting>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.Formatting>
extern MethodInfo IEnumerator_1_get_Current_m267283_MethodInfo;
static PropertyInfo IEnumerator_1_t28931____Current_PropertyInfo = 
{
	&IEnumerator_1_t28931_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267283_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28931_PropertyInfos[] =
{
	&IEnumerator_1_t28931____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28931_il2cpp_TypeInfo;
extern Il2CppType Formatting_t6972_0_0_0;
extern void* RuntimeInvoker_Formatting_t6972 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.Formatting>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267283_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28931_il2cpp_TypeInfo/* declaring_type */
	, &Formatting_t6972_0_0_0/* return_type */
	, RuntimeInvoker_Formatting_t6972/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28931_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267283_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28931_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28931_0_0_0;
extern Il2CppType IEnumerator_1_t28931_1_0_0;
struct IEnumerator_1_t28931;
extern TypeInfo IEnumerator_1_t28931_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28931_GenericClass;
TypeInfo IEnumerator_1_t28931_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28931_MethodInfos/* methods */
	, IEnumerator_1_t28931_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28931_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28931_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28931_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28931_0_0_0/* byval_arg */
	, &IEnumerator_1_t28931_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28931_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.Formatting>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2674.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.Formatting>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2674MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo;
extern TypeInfo Formatting_t6972_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174682_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFormatting_t6972_m219230_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.Formatting>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.Formatting>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFormatting_t6972_m219230 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisFormatting_t6972_m219230_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.Formatting>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174677_MethodInfo;
 void InternalEnumerator_1__ctor_m174677 (InternalEnumerator_1_t24018 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.Formatting>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174678_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174678 (InternalEnumerator_1_t24018 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.Formatting>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174679_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174679 (InternalEnumerator_1_t24018 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174682(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174682_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Formatting_t6972_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.Formatting>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174680_MethodInfo;
 void InternalEnumerator_1_Dispose_m174680 (InternalEnumerator_1_t24018 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.Formatting>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174681_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174681 (InternalEnumerator_1_t24018 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.Formatting>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174682_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174682 (InternalEnumerator_1_t24018 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFormatting_t6972_m219230(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFormatting_t6972_m219230_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.Formatting>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24018____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24018, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24018____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24018, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24018_FieldInfos[] =
{
	&InternalEnumerator_1_t24018____array_FieldInfo,
	&InternalEnumerator_1_t24018____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174679_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24018____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24018_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174679_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174682_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24018____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24018_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174682_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24018_PropertyInfos[] =
{
	&InternalEnumerator_1_t24018____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24018____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24018_InternalEnumerator_1__ctor_m174677_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.Formatting>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174677_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174677/* method */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24018_InternalEnumerator_1__ctor_m174677_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.Formatting>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174678_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174678/* method */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.Formatting>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174679_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174679/* method */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.Formatting>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174680_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174680/* method */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.Formatting>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174681_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174681/* method */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo;
extern Il2CppType Formatting_t6972_0_0_0;
extern void* RuntimeInvoker_Formatting_t6972 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.Formatting>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174682_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174682/* method */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* declaring_type */
	, &Formatting_t6972_0_0_0/* return_type */
	, RuntimeInvoker_Formatting_t6972/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24018_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174677_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174678_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174679_MethodInfo,
	&InternalEnumerator_1_Dispose_m174680_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174681_MethodInfo,
	&InternalEnumerator_1_get_Current_m174682_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174679_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174681_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174678_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174680_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174682_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24018_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174679_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174681_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174678_MethodInfo,
	&InternalEnumerator_1_Dispose_m174680_MethodInfo,
	&InternalEnumerator_1_get_Current_m174682_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28931_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24018_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28931_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28931_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24018_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28931_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24018_0_0_0;
extern Il2CppType InternalEnumerator_1_t24018_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24018_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24018_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24018_MethodInfos/* methods */
	, InternalEnumerator_1_t24018_PropertyInfos/* properties */
	, InternalEnumerator_1_t24018_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24018_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24018_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24018_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24018_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24018_1_0_0/* this_arg */
	, InternalEnumerator_1_t24018_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24018_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24018)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.Formatting>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.Formatting>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.Formatting>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.Formatting>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.Formatting>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.Formatting>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.Formatting>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.Formatting>
extern MethodInfo ICollection_1_get_Count_m267284_MethodInfo;
static PropertyInfo ICollection_1_t35978____Count_PropertyInfo = 
{
	&ICollection_1_t35978_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267284_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267285_MethodInfo;
static PropertyInfo ICollection_1_t35978____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35978_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267285_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35978_PropertyInfos[] =
{
	&ICollection_1_t35978____Count_PropertyInfo,
	&ICollection_1_t35978____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.Formatting>::get_Count()
MethodInfo ICollection_1_get_Count_m267284_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35978_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.Formatting>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267285_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35978_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Formatting_t6972_0_0_0;
static ParameterInfo ICollection_1_t35978_ICollection_1_Add_m267286_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Formatting_t6972_0_0_0},
};
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.Formatting>::Add(T)
MethodInfo ICollection_1_Add_m267286_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35978_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35978_ICollection_1_Add_m267286_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.Formatting>::Clear()
MethodInfo ICollection_1_Clear_m267287_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35978_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Formatting_t6972_0_0_0;
static ParameterInfo ICollection_1_t35978_ICollection_1_Contains_m267288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Formatting_t6972_0_0_0},
};
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.Formatting>::Contains(T)
MethodInfo ICollection_1_Contains_m267288_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35978_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35978_ICollection_1_Contains_m267288_ParameterInfos/* parameters */
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
extern Il2CppType FormattingU5BU5D_t26808_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35978_ICollection_1_CopyTo_m267289_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FormattingU5BU5D_t26808_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.Formatting>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267289_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35978_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35978_ICollection_1_CopyTo_m267289_ParameterInfos/* parameters */
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
extern Il2CppType Formatting_t6972_0_0_0;
static ParameterInfo ICollection_1_t35978_ICollection_1_Remove_m267290_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Formatting_t6972_0_0_0},
};
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.Formatting>::Remove(T)
MethodInfo ICollection_1_Remove_m267290_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35978_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35978_ICollection_1_Remove_m267290_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35978_MethodInfos[] =
{
	&ICollection_1_get_Count_m267284_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267285_MethodInfo,
	&ICollection_1_Add_m267286_MethodInfo,
	&ICollection_1_Clear_m267287_MethodInfo,
	&ICollection_1_Contains_m267288_MethodInfo,
	&ICollection_1_CopyTo_m267289_MethodInfo,
	&ICollection_1_Remove_m267290_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35980_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35978_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35980_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35978_0_0_0;
extern Il2CppType ICollection_1_t35978_1_0_0;
struct ICollection_1_t35978;
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35978_GenericClass;
TypeInfo ICollection_1_t35978_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35978_MethodInfos/* methods */
	, ICollection_1_t35978_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35978_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35978_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35978_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35978_0_0_0/* byval_arg */
	, &ICollection_1_t35978_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35978_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35980_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Formatting>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.Formatting>
extern TypeInfo IEnumerable_1_t35980_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28931_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.Formatting>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267291_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35980_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28931_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35980_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267291_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35980_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35980_0_0_0;
extern Il2CppType IEnumerable_1_t35980_1_0_0;
struct IEnumerable_1_t35980;
extern TypeInfo IEnumerable_1_t35980_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35980_GenericClass;
TypeInfo IEnumerable_1_t35980_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35980_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35980_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35980_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35980_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35980_0_0_0/* byval_arg */
	, &IEnumerable_1_t35980_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35980_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35979_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.Formatting>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.Formatting>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.Formatting>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.Formatting>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.Formatting>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.Formatting>
extern MethodInfo IList_1_get_Item_m267292_MethodInfo;
extern MethodInfo IList_1_set_Item_m267293_MethodInfo;
static PropertyInfo IList_1_t35979____Item_PropertyInfo = 
{
	&IList_1_t35979_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267292_MethodInfo/* get */
	, &IList_1_set_Item_m267293_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35979_PropertyInfos[] =
{
	&IList_1_t35979____Item_PropertyInfo,
	NULL
};
extern Il2CppType Formatting_t6972_0_0_0;
static ParameterInfo IList_1_t35979_IList_1_IndexOf_m267294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Formatting_t6972_0_0_0},
};
extern TypeInfo IList_1_t35979_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.Formatting>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267294_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35979_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35979_IList_1_IndexOf_m267294_ParameterInfos/* parameters */
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
extern Il2CppType Formatting_t6972_0_0_0;
static ParameterInfo IList_1_t35979_IList_1_Insert_m267295_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Formatting_t6972_0_0_0},
};
extern TypeInfo IList_1_t35979_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.Formatting>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267295_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35979_IList_1_Insert_m267295_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35979_IList_1_RemoveAt_m267296_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35979_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.Formatting>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267296_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35979_IList_1_RemoveAt_m267296_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35979_IList_1_get_Item_m267292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35979_il2cpp_TypeInfo;
extern Il2CppType Formatting_t6972_0_0_0;
extern void* RuntimeInvoker_Formatting_t6972_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.Formatting>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267292_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35979_il2cpp_TypeInfo/* declaring_type */
	, &Formatting_t6972_0_0_0/* return_type */
	, RuntimeInvoker_Formatting_t6972_Int32_t73/* invoker_method */
	, IList_1_t35979_IList_1_get_Item_m267292_ParameterInfos/* parameters */
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
extern Il2CppType Formatting_t6972_0_0_0;
static ParameterInfo IList_1_t35979_IList_1_set_Item_m267293_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Formatting_t6972_0_0_0},
};
extern TypeInfo IList_1_t35979_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.Formatting>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267293_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35979_IList_1_set_Item_m267293_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35979_MethodInfos[] =
{
	&IList_1_IndexOf_m267294_MethodInfo,
	&IList_1_Insert_m267295_MethodInfo,
	&IList_1_RemoveAt_m267296_MethodInfo,
	&IList_1_get_Item_m267292_MethodInfo,
	&IList_1_set_Item_m267293_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35978_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35980_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35979_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35978_il2cpp_TypeInfo,
	&IEnumerable_1_t35980_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35979_0_0_0;
extern Il2CppType IList_1_t35979_1_0_0;
struct IList_1_t35979;
extern TypeInfo IList_1_t35979_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35979_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35979_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35979_MethodInfos/* methods */
	, IList_1_t35979_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35979_il2cpp_TypeInfo/* element_class */
	, IList_1_t35979_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35979_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35979_0_0_0/* byval_arg */
	, &IList_1_t35979_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35979_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28932_il2cpp_TypeInfo;

// System.Xml.NameTable/Entry
#include "System_Xml_System_Xml_NameTable_Entry.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.NameTable/Entry>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.NameTable/Entry>
extern MethodInfo IEnumerator_1_get_Current_m267297_MethodInfo;
static PropertyInfo IEnumerator_1_t28932____Current_PropertyInfo = 
{
	&IEnumerator_1_t28932_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267297_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28932_PropertyInfos[] =
{
	&IEnumerator_1_t28932____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28932_il2cpp_TypeInfo;
extern Il2CppType Entry_t6973_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.NameTable/Entry>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267297_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28932_il2cpp_TypeInfo/* declaring_type */
	, &Entry_t6973_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t28932_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267297_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28932_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28932_0_0_0;
extern Il2CppType IEnumerator_1_t28932_1_0_0;
struct IEnumerator_1_t28932;
extern TypeInfo IEnumerator_1_t28932_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28932_GenericClass;
TypeInfo IEnumerator_1_t28932_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28932_MethodInfos/* methods */
	, IEnumerator_1_t28932_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28932_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28932_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28932_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28932_0_0_0/* byval_arg */
	, &IEnumerator_1_t28932_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28932_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2675MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo;
extern TypeInfo Entry_t6973_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174688_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEntry_t6973_m219241_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.NameTable/Entry>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.NameTable/Entry>(System.Int32)
#define Array_InternalArray__get_Item_TisEntry_t6973_m219241(__this, p0, method) (Entry_t6973 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisEntry_t6973_m219241_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24019____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24019, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24019____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24019, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24019_FieldInfos[] =
{
	&InternalEnumerator_1_t24019____array_FieldInfo,
	&InternalEnumerator_1_t24019____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174685_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24019____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24019_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174685_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174688_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24019____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24019_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174688_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24019_PropertyInfos[] =
{
	&InternalEnumerator_1_t24019____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24019____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24019_InternalEnumerator_1__ctor_m174683_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174683_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24019_InternalEnumerator_1__ctor_m174683_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174684_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174685_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174686_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174687_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo;
extern Il2CppType Entry_t6973_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.NameTable/Entry>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174688_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* declaring_type */
	, &Entry_t6973_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24019_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174683_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174684_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174685_MethodInfo,
	&InternalEnumerator_1_Dispose_m174686_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174687_MethodInfo,
	&InternalEnumerator_1_get_Current_m174688_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174685_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174687_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174684_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174686_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174688_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24019_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174685_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174687_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174684_MethodInfo,
	&InternalEnumerator_1_Dispose_m174686_MethodInfo,
	&InternalEnumerator_1_get_Current_m174688_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28932_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24019_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28932_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28932_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24019_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28932_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m174688_MethodInfo;
extern TypeInfo Entry_t6973_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEntry_t6973_m219241_MethodInfo;
static void* InternalEnumerator_1_t24019_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m174688_MethodInfo,
	&Entry_t6973_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisEntry_t6973_m219241_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24019_0_0_0;
extern Il2CppType InternalEnumerator_1_t24019_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24019_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24019_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24019_MethodInfos/* methods */
	, InternalEnumerator_1_t24019_PropertyInfos/* properties */
	, InternalEnumerator_1_t24019_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24019_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24019_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24019_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24019_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24019_1_0_0/* this_arg */
	, InternalEnumerator_1_t24019_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24019_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24019_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24019)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>
extern MethodInfo ICollection_1_get_Count_m267298_MethodInfo;
static PropertyInfo ICollection_1_t35981____Count_PropertyInfo = 
{
	&ICollection_1_t35981_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267298_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267299_MethodInfo;
static PropertyInfo ICollection_1_t35981____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35981_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267299_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35981_PropertyInfos[] =
{
	&ICollection_1_t35981____Count_PropertyInfo,
	&ICollection_1_t35981____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::get_Count()
MethodInfo ICollection_1_get_Count_m267298_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35981_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267299_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35981_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Entry_t6973_0_0_0;
static ParameterInfo ICollection_1_t35981_ICollection_1_Add_m267300_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Entry_t6973_0_0_0},
};
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::Add(T)
MethodInfo ICollection_1_Add_m267300_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t35981_ICollection_1_Add_m267300_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::Clear()
MethodInfo ICollection_1_Clear_m267301_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35981_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Entry_t6973_0_0_0;
static ParameterInfo ICollection_1_t35981_ICollection_1_Contains_m267302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Entry_t6973_0_0_0},
};
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::Contains(T)
MethodInfo ICollection_1_Contains_m267302_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35981_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t35981_ICollection_1_Contains_m267302_ParameterInfos/* parameters */
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
extern Il2CppType EntryU5BU5D_t6974_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35981_ICollection_1_CopyTo_m267303_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EntryU5BU5D_t6974_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267303_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35981_ICollection_1_CopyTo_m267303_ParameterInfos/* parameters */
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
extern Il2CppType Entry_t6973_0_0_0;
static ParameterInfo ICollection_1_t35981_ICollection_1_Remove_m267304_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Entry_t6973_0_0_0},
};
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NameTable/Entry>::Remove(T)
MethodInfo ICollection_1_Remove_m267304_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35981_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t35981_ICollection_1_Remove_m267304_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35981_MethodInfos[] =
{
	&ICollection_1_get_Count_m267298_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267299_MethodInfo,
	&ICollection_1_Add_m267300_MethodInfo,
	&ICollection_1_Clear_m267301_MethodInfo,
	&ICollection_1_Contains_m267302_MethodInfo,
	&ICollection_1_CopyTo_m267303_MethodInfo,
	&ICollection_1_Remove_m267304_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35983_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35981_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35983_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35981_0_0_0;
extern Il2CppType ICollection_1_t35981_1_0_0;
struct ICollection_1_t35981;
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35981_GenericClass;
TypeInfo ICollection_1_t35981_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35981_MethodInfos/* methods */
	, ICollection_1_t35981_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35981_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35981_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35981_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35981_0_0_0/* byval_arg */
	, &ICollection_1_t35981_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35981_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35983_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.NameTable/Entry>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.NameTable/Entry>
extern TypeInfo IEnumerable_1_t35983_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28932_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.NameTable/Entry>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267305_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35983_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28932_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35983_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267305_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35983_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35983_0_0_0;
extern Il2CppType IEnumerable_1_t35983_1_0_0;
struct IEnumerable_1_t35983;
extern TypeInfo IEnumerable_1_t35983_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35983_GenericClass;
TypeInfo IEnumerable_1_t35983_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35983_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35983_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35983_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35983_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35983_0_0_0/* byval_arg */
	, &IEnumerable_1_t35983_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35983_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35982_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>
extern MethodInfo IList_1_get_Item_m267306_MethodInfo;
extern MethodInfo IList_1_set_Item_m267307_MethodInfo;
static PropertyInfo IList_1_t35982____Item_PropertyInfo = 
{
	&IList_1_t35982_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267306_MethodInfo/* get */
	, &IList_1_set_Item_m267307_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35982_PropertyInfos[] =
{
	&IList_1_t35982____Item_PropertyInfo,
	NULL
};
extern Il2CppType Entry_t6973_0_0_0;
static ParameterInfo IList_1_t35982_IList_1_IndexOf_m267308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Entry_t6973_0_0_0},
};
extern TypeInfo IList_1_t35982_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267308_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35982_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t35982_IList_1_IndexOf_m267308_ParameterInfos/* parameters */
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
extern Il2CppType Entry_t6973_0_0_0;
static ParameterInfo IList_1_t35982_IList_1_Insert_m267309_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Entry_t6973_0_0_0},
};
extern TypeInfo IList_1_t35982_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267309_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t35982_IList_1_Insert_m267309_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35982_IList_1_RemoveAt_m267310_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35982_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267310_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35982_IList_1_RemoveAt_m267310_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35982_IList_1_get_Item_m267306_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35982_il2cpp_TypeInfo;
extern Il2CppType Entry_t6973_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267306_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35982_il2cpp_TypeInfo/* declaring_type */
	, &Entry_t6973_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t35982_IList_1_get_Item_m267306_ParameterInfos/* parameters */
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
extern Il2CppType Entry_t6973_0_0_0;
static ParameterInfo IList_1_t35982_IList_1_set_Item_m267307_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Entry_t6973_0_0_0},
};
extern TypeInfo IList_1_t35982_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.NameTable/Entry>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267307_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t35982_IList_1_set_Item_m267307_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35982_MethodInfos[] =
{
	&IList_1_IndexOf_m267308_MethodInfo,
	&IList_1_Insert_m267309_MethodInfo,
	&IList_1_RemoveAt_m267310_MethodInfo,
	&IList_1_get_Item_m267306_MethodInfo,
	&IList_1_set_Item_m267307_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35981_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35983_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35982_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35981_il2cpp_TypeInfo,
	&IEnumerable_1_t35983_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35982_0_0_0;
extern Il2CppType IList_1_t35982_1_0_0;
struct IList_1_t35982;
extern TypeInfo IList_1_t35982_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35982_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35982_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35982_MethodInfos/* methods */
	, IList_1_t35982_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35982_il2cpp_TypeInfo/* element_class */
	, IList_1_t35982_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35982_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35982_0_0_0/* byval_arg */
	, &IList_1_t35982_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35982_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28933_il2cpp_TypeInfo;

// System.Xml.NamespaceHandling
#include "System_Xml_System_Xml_NamespaceHandling.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.NamespaceHandling>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.NamespaceHandling>
extern MethodInfo IEnumerator_1_get_Current_m267311_MethodInfo;
static PropertyInfo IEnumerator_1_t28933____Current_PropertyInfo = 
{
	&IEnumerator_1_t28933_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267311_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28933_PropertyInfos[] =
{
	&IEnumerator_1_t28933____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28933_il2cpp_TypeInfo;
extern Il2CppType NamespaceHandling_t6976_0_0_0;
extern void* RuntimeInvoker_NamespaceHandling_t6976 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.NamespaceHandling>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267311_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28933_il2cpp_TypeInfo/* declaring_type */
	, &NamespaceHandling_t6976_0_0_0/* return_type */
	, RuntimeInvoker_NamespaceHandling_t6976/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28933_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267311_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28933_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28933_0_0_0;
extern Il2CppType IEnumerator_1_t28933_1_0_0;
struct IEnumerator_1_t28933;
extern TypeInfo IEnumerator_1_t28933_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28933_GenericClass;
TypeInfo IEnumerator_1_t28933_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28933_MethodInfos/* methods */
	, IEnumerator_1_t28933_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28933_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28933_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28933_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28933_0_0_0/* byval_arg */
	, &IEnumerator_1_t28933_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28933_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2676.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2676MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo;
extern TypeInfo NamespaceHandling_t6976_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174694_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNamespaceHandling_t6976_m219252_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.NamespaceHandling>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.NamespaceHandling>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisNamespaceHandling_t6976_m219252 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisNamespaceHandling_t6976_m219252_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174689_MethodInfo;
 void InternalEnumerator_1__ctor_m174689 (InternalEnumerator_1_t24020 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174690_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174690 (InternalEnumerator_1_t24020 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174691_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174691 (InternalEnumerator_1_t24020 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174694(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174694_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NamespaceHandling_t6976_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174692_MethodInfo;
 void InternalEnumerator_1_Dispose_m174692 (InternalEnumerator_1_t24020 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174693_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174693 (InternalEnumerator_1_t24020 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174694_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174694 (InternalEnumerator_1_t24020 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisNamespaceHandling_t6976_m219252(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNamespaceHandling_t6976_m219252_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24020____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24020, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24020____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24020, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24020_FieldInfos[] =
{
	&InternalEnumerator_1_t24020____array_FieldInfo,
	&InternalEnumerator_1_t24020____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174691_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24020____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24020_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174691_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174694_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24020____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24020_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174694_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24020_PropertyInfos[] =
{
	&InternalEnumerator_1_t24020____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24020____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24020_InternalEnumerator_1__ctor_m174689_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174689_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174689/* method */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24020_InternalEnumerator_1__ctor_m174689_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174690_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174690/* method */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174691_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174691/* method */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174692_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174692/* method */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174693_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174693/* method */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo;
extern Il2CppType NamespaceHandling_t6976_0_0_0;
extern void* RuntimeInvoker_NamespaceHandling_t6976 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.NamespaceHandling>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174694_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174694/* method */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* declaring_type */
	, &NamespaceHandling_t6976_0_0_0/* return_type */
	, RuntimeInvoker_NamespaceHandling_t6976/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24020_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174689_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174690_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174691_MethodInfo,
	&InternalEnumerator_1_Dispose_m174692_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174693_MethodInfo,
	&InternalEnumerator_1_get_Current_m174694_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174691_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174693_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174690_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174692_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174694_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24020_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174691_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174693_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174690_MethodInfo,
	&InternalEnumerator_1_Dispose_m174692_MethodInfo,
	&InternalEnumerator_1_get_Current_m174694_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28933_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24020_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28933_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28933_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24020_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28933_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24020_0_0_0;
extern Il2CppType InternalEnumerator_1_t24020_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24020_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24020_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24020_MethodInfos/* methods */
	, InternalEnumerator_1_t24020_PropertyInfos/* properties */
	, InternalEnumerator_1_t24020_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24020_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24020_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24020_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24020_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24020_1_0_0/* this_arg */
	, InternalEnumerator_1_t24020_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24020_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24020)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>
extern MethodInfo ICollection_1_get_Count_m267312_MethodInfo;
static PropertyInfo ICollection_1_t35984____Count_PropertyInfo = 
{
	&ICollection_1_t35984_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267312_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267313_MethodInfo;
static PropertyInfo ICollection_1_t35984____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35984_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267313_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35984_PropertyInfos[] =
{
	&ICollection_1_t35984____Count_PropertyInfo,
	&ICollection_1_t35984____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::get_Count()
MethodInfo ICollection_1_get_Count_m267312_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35984_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267313_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35984_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NamespaceHandling_t6976_0_0_0;
static ParameterInfo ICollection_1_t35984_ICollection_1_Add_m267314_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NamespaceHandling_t6976_0_0_0},
};
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::Add(T)
MethodInfo ICollection_1_Add_m267314_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35984_ICollection_1_Add_m267314_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::Clear()
MethodInfo ICollection_1_Clear_m267315_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35984_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NamespaceHandling_t6976_0_0_0;
static ParameterInfo ICollection_1_t35984_ICollection_1_Contains_m267316_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NamespaceHandling_t6976_0_0_0},
};
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::Contains(T)
MethodInfo ICollection_1_Contains_m267316_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35984_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35984_ICollection_1_Contains_m267316_ParameterInfos/* parameters */
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
extern Il2CppType NamespaceHandlingU5BU5D_t26809_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35984_ICollection_1_CopyTo_m267317_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NamespaceHandlingU5BU5D_t26809_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267317_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35984_ICollection_1_CopyTo_m267317_ParameterInfos/* parameters */
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
extern Il2CppType NamespaceHandling_t6976_0_0_0;
static ParameterInfo ICollection_1_t35984_ICollection_1_Remove_m267318_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NamespaceHandling_t6976_0_0_0},
};
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NamespaceHandling>::Remove(T)
MethodInfo ICollection_1_Remove_m267318_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35984_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35984_ICollection_1_Remove_m267318_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35984_MethodInfos[] =
{
	&ICollection_1_get_Count_m267312_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267313_MethodInfo,
	&ICollection_1_Add_m267314_MethodInfo,
	&ICollection_1_Clear_m267315_MethodInfo,
	&ICollection_1_Contains_m267316_MethodInfo,
	&ICollection_1_CopyTo_m267317_MethodInfo,
	&ICollection_1_Remove_m267318_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35986_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35984_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35986_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35984_0_0_0;
extern Il2CppType ICollection_1_t35984_1_0_0;
struct ICollection_1_t35984;
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35984_GenericClass;
TypeInfo ICollection_1_t35984_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35984_MethodInfos/* methods */
	, ICollection_1_t35984_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35984_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35984_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35984_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35984_0_0_0/* byval_arg */
	, &ICollection_1_t35984_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35984_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35986_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.NamespaceHandling>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.NamespaceHandling>
extern TypeInfo IEnumerable_1_t35986_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28933_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.NamespaceHandling>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267319_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35986_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28933_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35986_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267319_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35986_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35986_0_0_0;
extern Il2CppType IEnumerable_1_t35986_1_0_0;
struct IEnumerable_1_t35986;
extern TypeInfo IEnumerable_1_t35986_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35986_GenericClass;
TypeInfo IEnumerable_1_t35986_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35986_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35986_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35986_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35986_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35986_0_0_0/* byval_arg */
	, &IEnumerable_1_t35986_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35986_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35985_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>
extern MethodInfo IList_1_get_Item_m267320_MethodInfo;
extern MethodInfo IList_1_set_Item_m267321_MethodInfo;
static PropertyInfo IList_1_t35985____Item_PropertyInfo = 
{
	&IList_1_t35985_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267320_MethodInfo/* get */
	, &IList_1_set_Item_m267321_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35985_PropertyInfos[] =
{
	&IList_1_t35985____Item_PropertyInfo,
	NULL
};
extern Il2CppType NamespaceHandling_t6976_0_0_0;
static ParameterInfo IList_1_t35985_IList_1_IndexOf_m267322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NamespaceHandling_t6976_0_0_0},
};
extern TypeInfo IList_1_t35985_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267322_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35985_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35985_IList_1_IndexOf_m267322_ParameterInfos/* parameters */
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
extern Il2CppType NamespaceHandling_t6976_0_0_0;
static ParameterInfo IList_1_t35985_IList_1_Insert_m267323_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NamespaceHandling_t6976_0_0_0},
};
extern TypeInfo IList_1_t35985_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267323_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35985_IList_1_Insert_m267323_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35985_IList_1_RemoveAt_m267324_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35985_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267324_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35985_IList_1_RemoveAt_m267324_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35985_IList_1_get_Item_m267320_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35985_il2cpp_TypeInfo;
extern Il2CppType NamespaceHandling_t6976_0_0_0;
extern void* RuntimeInvoker_NamespaceHandling_t6976_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267320_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35985_il2cpp_TypeInfo/* declaring_type */
	, &NamespaceHandling_t6976_0_0_0/* return_type */
	, RuntimeInvoker_NamespaceHandling_t6976_Int32_t73/* invoker_method */
	, IList_1_t35985_IList_1_get_Item_m267320_ParameterInfos/* parameters */
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
extern Il2CppType NamespaceHandling_t6976_0_0_0;
static ParameterInfo IList_1_t35985_IList_1_set_Item_m267321_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NamespaceHandling_t6976_0_0_0},
};
extern TypeInfo IList_1_t35985_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.NamespaceHandling>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267321_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35985_IList_1_set_Item_m267321_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35985_MethodInfos[] =
{
	&IList_1_IndexOf_m267322_MethodInfo,
	&IList_1_Insert_m267323_MethodInfo,
	&IList_1_RemoveAt_m267324_MethodInfo,
	&IList_1_get_Item_m267320_MethodInfo,
	&IList_1_set_Item_m267321_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35984_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35986_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35985_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35984_il2cpp_TypeInfo,
	&IEnumerable_1_t35986_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35985_0_0_0;
extern Il2CppType IList_1_t35985_1_0_0;
struct IList_1_t35985;
extern TypeInfo IList_1_t35985_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35985_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35985_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35985_MethodInfos/* methods */
	, IList_1_t35985_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35985_il2cpp_TypeInfo/* element_class */
	, IList_1_t35985_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35985_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35985_0_0_0/* byval_arg */
	, &IList_1_t35985_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35985_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28934_il2cpp_TypeInfo;

// System.Xml.NewLineHandling
#include "System_Xml_System_Xml_NewLineHandling.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.NewLineHandling>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.NewLineHandling>
extern MethodInfo IEnumerator_1_get_Current_m267325_MethodInfo;
static PropertyInfo IEnumerator_1_t28934____Current_PropertyInfo = 
{
	&IEnumerator_1_t28934_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267325_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28934_PropertyInfos[] =
{
	&IEnumerator_1_t28934____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28934_il2cpp_TypeInfo;
extern Il2CppType NewLineHandling_t6977_0_0_0;
extern void* RuntimeInvoker_NewLineHandling_t6977 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.NewLineHandling>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267325_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28934_il2cpp_TypeInfo/* declaring_type */
	, &NewLineHandling_t6977_0_0_0/* return_type */
	, RuntimeInvoker_NewLineHandling_t6977/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28934_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267325_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28934_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28934_0_0_0;
extern Il2CppType IEnumerator_1_t28934_1_0_0;
struct IEnumerator_1_t28934;
extern TypeInfo IEnumerator_1_t28934_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28934_GenericClass;
TypeInfo IEnumerator_1_t28934_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28934_MethodInfos/* methods */
	, IEnumerator_1_t28934_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28934_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28934_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28934_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28934_0_0_0/* byval_arg */
	, &IEnumerator_1_t28934_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28934_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2677.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2677MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo;
extern TypeInfo NewLineHandling_t6977_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174700_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNewLineHandling_t6977_m219263_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.NewLineHandling>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.NewLineHandling>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisNewLineHandling_t6977_m219263 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisNewLineHandling_t6977_m219263_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174695_MethodInfo;
 void InternalEnumerator_1__ctor_m174695 (InternalEnumerator_1_t24021 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174696_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174696 (InternalEnumerator_1_t24021 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174697_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174697 (InternalEnumerator_1_t24021 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174700(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174700_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NewLineHandling_t6977_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174698_MethodInfo;
 void InternalEnumerator_1_Dispose_m174698 (InternalEnumerator_1_t24021 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174699_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174699 (InternalEnumerator_1_t24021 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174700_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174700 (InternalEnumerator_1_t24021 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisNewLineHandling_t6977_m219263(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNewLineHandling_t6977_m219263_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24021____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24021, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24021____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24021, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24021_FieldInfos[] =
{
	&InternalEnumerator_1_t24021____array_FieldInfo,
	&InternalEnumerator_1_t24021____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174697_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24021____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24021_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174697_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174700_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24021____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24021_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174700_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24021_PropertyInfos[] =
{
	&InternalEnumerator_1_t24021____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24021____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24021_InternalEnumerator_1__ctor_m174695_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174695_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174695/* method */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24021_InternalEnumerator_1__ctor_m174695_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174696_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174696/* method */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174697_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174697/* method */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174698_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174698/* method */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174699_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174699/* method */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo;
extern Il2CppType NewLineHandling_t6977_0_0_0;
extern void* RuntimeInvoker_NewLineHandling_t6977 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.NewLineHandling>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174700_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174700/* method */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* declaring_type */
	, &NewLineHandling_t6977_0_0_0/* return_type */
	, RuntimeInvoker_NewLineHandling_t6977/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24021_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174695_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174696_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174697_MethodInfo,
	&InternalEnumerator_1_Dispose_m174698_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174699_MethodInfo,
	&InternalEnumerator_1_get_Current_m174700_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174697_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174699_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174696_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174698_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174700_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24021_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174697_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174699_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174696_MethodInfo,
	&InternalEnumerator_1_Dispose_m174698_MethodInfo,
	&InternalEnumerator_1_get_Current_m174700_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28934_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24021_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28934_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28934_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24021_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28934_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24021_0_0_0;
extern Il2CppType InternalEnumerator_1_t24021_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24021_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24021_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24021_MethodInfos/* methods */
	, InternalEnumerator_1_t24021_PropertyInfos/* properties */
	, InternalEnumerator_1_t24021_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24021_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24021_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24021_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24021_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24021_1_0_0/* this_arg */
	, InternalEnumerator_1_t24021_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24021_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24021)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>
extern MethodInfo ICollection_1_get_Count_m267326_MethodInfo;
static PropertyInfo ICollection_1_t35987____Count_PropertyInfo = 
{
	&ICollection_1_t35987_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267326_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267327_MethodInfo;
static PropertyInfo ICollection_1_t35987____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35987_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267327_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35987_PropertyInfos[] =
{
	&ICollection_1_t35987____Count_PropertyInfo,
	&ICollection_1_t35987____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::get_Count()
MethodInfo ICollection_1_get_Count_m267326_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35987_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267327_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35987_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NewLineHandling_t6977_0_0_0;
static ParameterInfo ICollection_1_t35987_ICollection_1_Add_m267328_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NewLineHandling_t6977_0_0_0},
};
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::Add(T)
MethodInfo ICollection_1_Add_m267328_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35987_ICollection_1_Add_m267328_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::Clear()
MethodInfo ICollection_1_Clear_m267329_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35987_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NewLineHandling_t6977_0_0_0;
static ParameterInfo ICollection_1_t35987_ICollection_1_Contains_m267330_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NewLineHandling_t6977_0_0_0},
};
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::Contains(T)
MethodInfo ICollection_1_Contains_m267330_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35987_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35987_ICollection_1_Contains_m267330_ParameterInfos/* parameters */
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
extern Il2CppType NewLineHandlingU5BU5D_t26810_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35987_ICollection_1_CopyTo_m267331_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NewLineHandlingU5BU5D_t26810_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267331_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35987_ICollection_1_CopyTo_m267331_ParameterInfos/* parameters */
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
extern Il2CppType NewLineHandling_t6977_0_0_0;
static ParameterInfo ICollection_1_t35987_ICollection_1_Remove_m267332_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NewLineHandling_t6977_0_0_0},
};
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.NewLineHandling>::Remove(T)
MethodInfo ICollection_1_Remove_m267332_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35987_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35987_ICollection_1_Remove_m267332_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35987_MethodInfos[] =
{
	&ICollection_1_get_Count_m267326_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267327_MethodInfo,
	&ICollection_1_Add_m267328_MethodInfo,
	&ICollection_1_Clear_m267329_MethodInfo,
	&ICollection_1_Contains_m267330_MethodInfo,
	&ICollection_1_CopyTo_m267331_MethodInfo,
	&ICollection_1_Remove_m267332_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35989_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35987_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35989_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35987_0_0_0;
extern Il2CppType ICollection_1_t35987_1_0_0;
struct ICollection_1_t35987;
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35987_GenericClass;
TypeInfo ICollection_1_t35987_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35987_MethodInfos/* methods */
	, ICollection_1_t35987_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35987_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35987_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35987_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35987_0_0_0/* byval_arg */
	, &ICollection_1_t35987_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35987_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35989_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.NewLineHandling>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.NewLineHandling>
extern TypeInfo IEnumerable_1_t35989_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28934_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.NewLineHandling>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267333_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35989_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28934_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35989_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267333_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35989_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35989_0_0_0;
extern Il2CppType IEnumerable_1_t35989_1_0_0;
struct IEnumerable_1_t35989;
extern TypeInfo IEnumerable_1_t35989_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35989_GenericClass;
TypeInfo IEnumerable_1_t35989_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35989_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35989_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35989_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35989_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35989_0_0_0/* byval_arg */
	, &IEnumerable_1_t35989_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35989_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35988_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.NewLineHandling>
extern MethodInfo IList_1_get_Item_m267334_MethodInfo;
extern MethodInfo IList_1_set_Item_m267335_MethodInfo;
static PropertyInfo IList_1_t35988____Item_PropertyInfo = 
{
	&IList_1_t35988_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267334_MethodInfo/* get */
	, &IList_1_set_Item_m267335_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35988_PropertyInfos[] =
{
	&IList_1_t35988____Item_PropertyInfo,
	NULL
};
extern Il2CppType NewLineHandling_t6977_0_0_0;
static ParameterInfo IList_1_t35988_IList_1_IndexOf_m267336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NewLineHandling_t6977_0_0_0},
};
extern TypeInfo IList_1_t35988_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267336_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35988_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35988_IList_1_IndexOf_m267336_ParameterInfos/* parameters */
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
extern Il2CppType NewLineHandling_t6977_0_0_0;
static ParameterInfo IList_1_t35988_IList_1_Insert_m267337_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NewLineHandling_t6977_0_0_0},
};
extern TypeInfo IList_1_t35988_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267337_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35988_IList_1_Insert_m267337_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35988_IList_1_RemoveAt_m267338_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35988_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267338_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35988_IList_1_RemoveAt_m267338_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35988_IList_1_get_Item_m267334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35988_il2cpp_TypeInfo;
extern Il2CppType NewLineHandling_t6977_0_0_0;
extern void* RuntimeInvoker_NewLineHandling_t6977_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267334_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35988_il2cpp_TypeInfo/* declaring_type */
	, &NewLineHandling_t6977_0_0_0/* return_type */
	, RuntimeInvoker_NewLineHandling_t6977_Int32_t73/* invoker_method */
	, IList_1_t35988_IList_1_get_Item_m267334_ParameterInfos/* parameters */
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
extern Il2CppType NewLineHandling_t6977_0_0_0;
static ParameterInfo IList_1_t35988_IList_1_set_Item_m267335_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NewLineHandling_t6977_0_0_0},
};
extern TypeInfo IList_1_t35988_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.NewLineHandling>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267335_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35988_IList_1_set_Item_m267335_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35988_MethodInfos[] =
{
	&IList_1_IndexOf_m267336_MethodInfo,
	&IList_1_Insert_m267337_MethodInfo,
	&IList_1_RemoveAt_m267338_MethodInfo,
	&IList_1_get_Item_m267334_MethodInfo,
	&IList_1_set_Item_m267335_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35987_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35989_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35988_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35987_il2cpp_TypeInfo,
	&IEnumerable_1_t35989_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35988_0_0_0;
extern Il2CppType IList_1_t35988_1_0_0;
struct IList_1_t35988;
extern TypeInfo IList_1_t35988_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35988_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35988_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35988_MethodInfos/* methods */
	, IList_1_t35988_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35988_il2cpp_TypeInfo/* element_class */
	, IList_1_t35988_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35988_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35988_0_0_0/* byval_arg */
	, &IList_1_t35988_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35988_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28935_il2cpp_TypeInfo;

// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.ReadState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.ReadState>
extern MethodInfo IEnumerator_1_get_Current_m267339_MethodInfo;
static PropertyInfo IEnumerator_1_t28935____Current_PropertyInfo = 
{
	&IEnumerator_1_t28935_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267339_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28935_PropertyInfos[] =
{
	&IEnumerator_1_t28935____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28935_il2cpp_TypeInfo;
extern Il2CppType ReadState_t6978_0_0_0;
extern void* RuntimeInvoker_ReadState_t6978 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.ReadState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267339_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28935_il2cpp_TypeInfo/* declaring_type */
	, &ReadState_t6978_0_0_0/* return_type */
	, RuntimeInvoker_ReadState_t6978/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28935_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267339_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28935_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28935_0_0_0;
extern Il2CppType IEnumerator_1_t28935_1_0_0;
struct IEnumerator_1_t28935;
extern TypeInfo IEnumerator_1_t28935_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28935_GenericClass;
TypeInfo IEnumerator_1_t28935_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28935_MethodInfos/* methods */
	, IEnumerator_1_t28935_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28935_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28935_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28935_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28935_0_0_0/* byval_arg */
	, &IEnumerator_1_t28935_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28935_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.ReadState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2678.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.ReadState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2678MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo;
extern TypeInfo ReadState_t6978_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174706_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisReadState_t6978_m219274_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.ReadState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.ReadState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisReadState_t6978_m219274 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisReadState_t6978_m219274_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.ReadState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174701_MethodInfo;
 void InternalEnumerator_1__ctor_m174701 (InternalEnumerator_1_t24022 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.ReadState>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174702_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174702 (InternalEnumerator_1_t24022 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.ReadState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174703_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174703 (InternalEnumerator_1_t24022 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174706(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174706_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ReadState_t6978_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.ReadState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174704_MethodInfo;
 void InternalEnumerator_1_Dispose_m174704 (InternalEnumerator_1_t24022 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.ReadState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174705_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174705 (InternalEnumerator_1_t24022 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.ReadState>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174706_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174706 (InternalEnumerator_1_t24022 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisReadState_t6978_m219274(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisReadState_t6978_m219274_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.ReadState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24022____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24022, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24022____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24022, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24022_FieldInfos[] =
{
	&InternalEnumerator_1_t24022____array_FieldInfo,
	&InternalEnumerator_1_t24022____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174703_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24022____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24022_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174703_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174706_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24022____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24022_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174706_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24022_PropertyInfos[] =
{
	&InternalEnumerator_1_t24022____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24022____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24022_InternalEnumerator_1__ctor_m174701_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.ReadState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174701_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174701/* method */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24022_InternalEnumerator_1__ctor_m174701_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.ReadState>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174702_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174702/* method */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.ReadState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174703_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174703/* method */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.ReadState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174704_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174704/* method */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.ReadState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174705_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174705/* method */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo;
extern Il2CppType ReadState_t6978_0_0_0;
extern void* RuntimeInvoker_ReadState_t6978 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.ReadState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174706_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174706/* method */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* declaring_type */
	, &ReadState_t6978_0_0_0/* return_type */
	, RuntimeInvoker_ReadState_t6978/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24022_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174701_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174702_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174703_MethodInfo,
	&InternalEnumerator_1_Dispose_m174704_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174705_MethodInfo,
	&InternalEnumerator_1_get_Current_m174706_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174703_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174705_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174702_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174704_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174706_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24022_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174703_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174705_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174702_MethodInfo,
	&InternalEnumerator_1_Dispose_m174704_MethodInfo,
	&InternalEnumerator_1_get_Current_m174706_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28935_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24022_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28935_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28935_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24022_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28935_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24022_0_0_0;
extern Il2CppType InternalEnumerator_1_t24022_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24022_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24022_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24022_MethodInfos/* methods */
	, InternalEnumerator_1_t24022_PropertyInfos/* properties */
	, InternalEnumerator_1_t24022_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24022_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24022_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24022_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24022_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24022_1_0_0/* this_arg */
	, InternalEnumerator_1_t24022_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24022_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24022)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.ReadState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ReadState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ReadState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ReadState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ReadState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ReadState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ReadState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.ReadState>
extern MethodInfo ICollection_1_get_Count_m267340_MethodInfo;
static PropertyInfo ICollection_1_t35990____Count_PropertyInfo = 
{
	&ICollection_1_t35990_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267340_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267341_MethodInfo;
static PropertyInfo ICollection_1_t35990____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35990_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267341_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35990_PropertyInfos[] =
{
	&ICollection_1_t35990____Count_PropertyInfo,
	&ICollection_1_t35990____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.ReadState>::get_Count()
MethodInfo ICollection_1_get_Count_m267340_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35990_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ReadState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267341_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35990_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ReadState_t6978_0_0_0;
static ParameterInfo ICollection_1_t35990_ICollection_1_Add_m267342_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReadState_t6978_0_0_0},
};
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ReadState>::Add(T)
MethodInfo ICollection_1_Add_m267342_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35990_ICollection_1_Add_m267342_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ReadState>::Clear()
MethodInfo ICollection_1_Clear_m267343_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35990_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ReadState_t6978_0_0_0;
static ParameterInfo ICollection_1_t35990_ICollection_1_Contains_m267344_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReadState_t6978_0_0_0},
};
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ReadState>::Contains(T)
MethodInfo ICollection_1_Contains_m267344_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35990_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35990_ICollection_1_Contains_m267344_ParameterInfos/* parameters */
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
extern Il2CppType ReadStateU5BU5D_t26811_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35990_ICollection_1_CopyTo_m267345_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ReadStateU5BU5D_t26811_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ReadState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267345_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35990_ICollection_1_CopyTo_m267345_ParameterInfos/* parameters */
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
extern Il2CppType ReadState_t6978_0_0_0;
static ParameterInfo ICollection_1_t35990_ICollection_1_Remove_m267346_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReadState_t6978_0_0_0},
};
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ReadState>::Remove(T)
MethodInfo ICollection_1_Remove_m267346_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35990_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35990_ICollection_1_Remove_m267346_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35990_MethodInfos[] =
{
	&ICollection_1_get_Count_m267340_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267341_MethodInfo,
	&ICollection_1_Add_m267342_MethodInfo,
	&ICollection_1_Clear_m267343_MethodInfo,
	&ICollection_1_Contains_m267344_MethodInfo,
	&ICollection_1_CopyTo_m267345_MethodInfo,
	&ICollection_1_Remove_m267346_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35992_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35990_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35992_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35990_0_0_0;
extern Il2CppType ICollection_1_t35990_1_0_0;
struct ICollection_1_t35990;
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35990_GenericClass;
TypeInfo ICollection_1_t35990_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35990_MethodInfos/* methods */
	, ICollection_1_t35990_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35990_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35990_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35990_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35990_0_0_0/* byval_arg */
	, &ICollection_1_t35990_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35990_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35992_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.ReadState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.ReadState>
extern TypeInfo IEnumerable_1_t35992_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28935_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.ReadState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267347_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35992_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28935_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35992_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267347_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35992_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35992_0_0_0;
extern Il2CppType IEnumerable_1_t35992_1_0_0;
struct IEnumerable_1_t35992;
extern TypeInfo IEnumerable_1_t35992_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35992_GenericClass;
TypeInfo IEnumerable_1_t35992_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35992_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35992_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35992_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35992_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35992_0_0_0/* byval_arg */
	, &IEnumerable_1_t35992_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35992_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35991_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.ReadState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.ReadState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.ReadState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.ReadState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.ReadState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.ReadState>
extern MethodInfo IList_1_get_Item_m267348_MethodInfo;
extern MethodInfo IList_1_set_Item_m267349_MethodInfo;
static PropertyInfo IList_1_t35991____Item_PropertyInfo = 
{
	&IList_1_t35991_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267348_MethodInfo/* get */
	, &IList_1_set_Item_m267349_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35991_PropertyInfos[] =
{
	&IList_1_t35991____Item_PropertyInfo,
	NULL
};
extern Il2CppType ReadState_t6978_0_0_0;
static ParameterInfo IList_1_t35991_IList_1_IndexOf_m267350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReadState_t6978_0_0_0},
};
extern TypeInfo IList_1_t35991_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.ReadState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267350_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35991_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35991_IList_1_IndexOf_m267350_ParameterInfos/* parameters */
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
extern Il2CppType ReadState_t6978_0_0_0;
static ParameterInfo IList_1_t35991_IList_1_Insert_m267351_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ReadState_t6978_0_0_0},
};
extern TypeInfo IList_1_t35991_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.ReadState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267351_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35991_IList_1_Insert_m267351_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35991_IList_1_RemoveAt_m267352_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35991_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.ReadState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267352_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35991_IList_1_RemoveAt_m267352_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35991_IList_1_get_Item_m267348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35991_il2cpp_TypeInfo;
extern Il2CppType ReadState_t6978_0_0_0;
extern void* RuntimeInvoker_ReadState_t6978_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.ReadState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267348_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35991_il2cpp_TypeInfo/* declaring_type */
	, &ReadState_t6978_0_0_0/* return_type */
	, RuntimeInvoker_ReadState_t6978_Int32_t73/* invoker_method */
	, IList_1_t35991_IList_1_get_Item_m267348_ParameterInfos/* parameters */
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
extern Il2CppType ReadState_t6978_0_0_0;
static ParameterInfo IList_1_t35991_IList_1_set_Item_m267349_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ReadState_t6978_0_0_0},
};
extern TypeInfo IList_1_t35991_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.ReadState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267349_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35991_IList_1_set_Item_m267349_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35991_MethodInfos[] =
{
	&IList_1_IndexOf_m267350_MethodInfo,
	&IList_1_Insert_m267351_MethodInfo,
	&IList_1_RemoveAt_m267352_MethodInfo,
	&IList_1_get_Item_m267348_MethodInfo,
	&IList_1_set_Item_m267349_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35990_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35992_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35991_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35990_il2cpp_TypeInfo,
	&IEnumerable_1_t35992_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35991_0_0_0;
extern Il2CppType IList_1_t35991_1_0_0;
struct IList_1_t35991;
extern TypeInfo IList_1_t35991_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35991_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35991_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35991_MethodInfos/* methods */
	, IList_1_t35991_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35991_il2cpp_TypeInfo/* element_class */
	, IList_1_t35991_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35991_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35991_0_0_0/* byval_arg */
	, &IList_1_t35991_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35991_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28936_il2cpp_TypeInfo;

// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.ValidationType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.ValidationType>
extern MethodInfo IEnumerator_1_get_Current_m267353_MethodInfo;
static PropertyInfo IEnumerator_1_t28936____Current_PropertyInfo = 
{
	&IEnumerator_1_t28936_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267353_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28936_PropertyInfos[] =
{
	&IEnumerator_1_t28936____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28936_il2cpp_TypeInfo;
extern Il2CppType ValidationType_t6979_0_0_0;
extern void* RuntimeInvoker_ValidationType_t6979 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.ValidationType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267353_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28936_il2cpp_TypeInfo/* declaring_type */
	, &ValidationType_t6979_0_0_0/* return_type */
	, RuntimeInvoker_ValidationType_t6979/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28936_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267353_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28936_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28936_0_0_0;
extern Il2CppType IEnumerator_1_t28936_1_0_0;
struct IEnumerator_1_t28936;
extern TypeInfo IEnumerator_1_t28936_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28936_GenericClass;
TypeInfo IEnumerator_1_t28936_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28936_MethodInfos/* methods */
	, IEnumerator_1_t28936_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28936_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28936_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28936_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28936_0_0_0/* byval_arg */
	, &IEnumerator_1_t28936_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28936_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.ValidationType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.ValidationType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2679MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo;
extern TypeInfo ValidationType_t6979_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174712_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisValidationType_t6979_m219285_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.ValidationType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.ValidationType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisValidationType_t6979_m219285 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisValidationType_t6979_m219285_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.ValidationType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174707_MethodInfo;
 void InternalEnumerator_1__ctor_m174707 (InternalEnumerator_1_t24023 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.ValidationType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174708_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174708 (InternalEnumerator_1_t24023 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.ValidationType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174709_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174709 (InternalEnumerator_1_t24023 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174712(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174712_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ValidationType_t6979_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.ValidationType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174710_MethodInfo;
 void InternalEnumerator_1_Dispose_m174710 (InternalEnumerator_1_t24023 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.ValidationType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174711_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174711 (InternalEnumerator_1_t24023 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.ValidationType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174712_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174712 (InternalEnumerator_1_t24023 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisValidationType_t6979_m219285(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisValidationType_t6979_m219285_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.ValidationType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24023____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24023, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24023____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24023, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24023_FieldInfos[] =
{
	&InternalEnumerator_1_t24023____array_FieldInfo,
	&InternalEnumerator_1_t24023____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174709_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24023____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24023_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174709_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174712_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24023____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24023_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174712_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24023_PropertyInfos[] =
{
	&InternalEnumerator_1_t24023____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24023____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24023_InternalEnumerator_1__ctor_m174707_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.ValidationType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174707_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174707/* method */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24023_InternalEnumerator_1__ctor_m174707_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.ValidationType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174708_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174708/* method */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.ValidationType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174709_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174709/* method */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.ValidationType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174710_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174710/* method */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.ValidationType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174711_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174711/* method */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo;
extern Il2CppType ValidationType_t6979_0_0_0;
extern void* RuntimeInvoker_ValidationType_t6979 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.ValidationType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174712_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174712/* method */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* declaring_type */
	, &ValidationType_t6979_0_0_0/* return_type */
	, RuntimeInvoker_ValidationType_t6979/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24023_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174707_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174708_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174709_MethodInfo,
	&InternalEnumerator_1_Dispose_m174710_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174711_MethodInfo,
	&InternalEnumerator_1_get_Current_m174712_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174709_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174711_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174708_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174710_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174712_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24023_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174709_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174711_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174708_MethodInfo,
	&InternalEnumerator_1_Dispose_m174710_MethodInfo,
	&InternalEnumerator_1_get_Current_m174712_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28936_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24023_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28936_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28936_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24023_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28936_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24023_0_0_0;
extern Il2CppType InternalEnumerator_1_t24023_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24023_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24023_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24023_MethodInfos/* methods */
	, InternalEnumerator_1_t24023_PropertyInfos/* properties */
	, InternalEnumerator_1_t24023_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24023_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24023_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24023_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24023_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24023_1_0_0/* this_arg */
	, InternalEnumerator_1_t24023_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24023_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24023)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.ValidationType>
extern MethodInfo ICollection_1_get_Count_m267354_MethodInfo;
static PropertyInfo ICollection_1_t35993____Count_PropertyInfo = 
{
	&ICollection_1_t35993_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267354_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267355_MethodInfo;
static PropertyInfo ICollection_1_t35993____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35993_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267355_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35993_PropertyInfos[] =
{
	&ICollection_1_t35993____Count_PropertyInfo,
	&ICollection_1_t35993____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::get_Count()
MethodInfo ICollection_1_get_Count_m267354_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35993_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267355_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35993_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ValidationType_t6979_0_0_0;
static ParameterInfo ICollection_1_t35993_ICollection_1_Add_m267356_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ValidationType_t6979_0_0_0},
};
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::Add(T)
MethodInfo ICollection_1_Add_m267356_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35993_ICollection_1_Add_m267356_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::Clear()
MethodInfo ICollection_1_Clear_m267357_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35993_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ValidationType_t6979_0_0_0;
static ParameterInfo ICollection_1_t35993_ICollection_1_Contains_m267358_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ValidationType_t6979_0_0_0},
};
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::Contains(T)
MethodInfo ICollection_1_Contains_m267358_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35993_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35993_ICollection_1_Contains_m267358_ParameterInfos/* parameters */
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
extern Il2CppType ValidationTypeU5BU5D_t26812_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35993_ICollection_1_CopyTo_m267359_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ValidationTypeU5BU5D_t26812_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267359_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35993_ICollection_1_CopyTo_m267359_ParameterInfos/* parameters */
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
extern Il2CppType ValidationType_t6979_0_0_0;
static ParameterInfo ICollection_1_t35993_ICollection_1_Remove_m267360_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ValidationType_t6979_0_0_0},
};
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.ValidationType>::Remove(T)
MethodInfo ICollection_1_Remove_m267360_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35993_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35993_ICollection_1_Remove_m267360_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35993_MethodInfos[] =
{
	&ICollection_1_get_Count_m267354_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267355_MethodInfo,
	&ICollection_1_Add_m267356_MethodInfo,
	&ICollection_1_Clear_m267357_MethodInfo,
	&ICollection_1_Contains_m267358_MethodInfo,
	&ICollection_1_CopyTo_m267359_MethodInfo,
	&ICollection_1_Remove_m267360_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35995_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35993_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35995_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35993_0_0_0;
extern Il2CppType ICollection_1_t35993_1_0_0;
struct ICollection_1_t35993;
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35993_GenericClass;
TypeInfo ICollection_1_t35993_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35993_MethodInfos/* methods */
	, ICollection_1_t35993_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35993_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35993_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35993_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35993_0_0_0/* byval_arg */
	, &ICollection_1_t35993_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35993_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35995_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.ValidationType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.ValidationType>
extern TypeInfo IEnumerable_1_t35995_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28936_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.ValidationType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267361_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35995_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28936_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35995_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267361_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35995_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35995_0_0_0;
extern Il2CppType IEnumerable_1_t35995_1_0_0;
struct IEnumerable_1_t35995;
extern TypeInfo IEnumerable_1_t35995_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35995_GenericClass;
TypeInfo IEnumerable_1_t35995_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35995_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35995_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35995_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35995_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35995_0_0_0/* byval_arg */
	, &IEnumerable_1_t35995_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35995_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35994_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.ValidationType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.ValidationType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.ValidationType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.ValidationType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.ValidationType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.ValidationType>
extern MethodInfo IList_1_get_Item_m267362_MethodInfo;
extern MethodInfo IList_1_set_Item_m267363_MethodInfo;
static PropertyInfo IList_1_t35994____Item_PropertyInfo = 
{
	&IList_1_t35994_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267362_MethodInfo/* get */
	, &IList_1_set_Item_m267363_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35994_PropertyInfos[] =
{
	&IList_1_t35994____Item_PropertyInfo,
	NULL
};
extern Il2CppType ValidationType_t6979_0_0_0;
static ParameterInfo IList_1_t35994_IList_1_IndexOf_m267364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ValidationType_t6979_0_0_0},
};
extern TypeInfo IList_1_t35994_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.ValidationType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267364_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35994_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35994_IList_1_IndexOf_m267364_ParameterInfos/* parameters */
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
extern Il2CppType ValidationType_t6979_0_0_0;
static ParameterInfo IList_1_t35994_IList_1_Insert_m267365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ValidationType_t6979_0_0_0},
};
extern TypeInfo IList_1_t35994_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.ValidationType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267365_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35994_IList_1_Insert_m267365_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35994_IList_1_RemoveAt_m267366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35994_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.ValidationType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267366_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35994_IList_1_RemoveAt_m267366_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35994_IList_1_get_Item_m267362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35994_il2cpp_TypeInfo;
extern Il2CppType ValidationType_t6979_0_0_0;
extern void* RuntimeInvoker_ValidationType_t6979_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.ValidationType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267362_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35994_il2cpp_TypeInfo/* declaring_type */
	, &ValidationType_t6979_0_0_0/* return_type */
	, RuntimeInvoker_ValidationType_t6979_Int32_t73/* invoker_method */
	, IList_1_t35994_IList_1_get_Item_m267362_ParameterInfos/* parameters */
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
extern Il2CppType ValidationType_t6979_0_0_0;
static ParameterInfo IList_1_t35994_IList_1_set_Item_m267363_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ValidationType_t6979_0_0_0},
};
extern TypeInfo IList_1_t35994_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.ValidationType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267363_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35994_IList_1_set_Item_m267363_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35994_MethodInfos[] =
{
	&IList_1_IndexOf_m267364_MethodInfo,
	&IList_1_Insert_m267365_MethodInfo,
	&IList_1_RemoveAt_m267366_MethodInfo,
	&IList_1_get_Item_m267362_MethodInfo,
	&IList_1_set_Item_m267363_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35993_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35995_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35994_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35993_il2cpp_TypeInfo,
	&IEnumerable_1_t35995_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35994_0_0_0;
extern Il2CppType IList_1_t35994_1_0_0;
struct IList_1_t35994;
extern TypeInfo IList_1_t35994_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35994_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35994_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35994_MethodInfos/* methods */
	, IList_1_t35994_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35994_il2cpp_TypeInfo/* element_class */
	, IList_1_t35994_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35994_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35994_0_0_0/* byval_arg */
	, &IList_1_t35994_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35994_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28937_il2cpp_TypeInfo;

// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.WhitespaceHandling>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.WhitespaceHandling>
extern MethodInfo IEnumerator_1_get_Current_m267367_MethodInfo;
static PropertyInfo IEnumerator_1_t28937____Current_PropertyInfo = 
{
	&IEnumerator_1_t28937_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267367_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28937_PropertyInfos[] =
{
	&IEnumerator_1_t28937____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28937_il2cpp_TypeInfo;
extern Il2CppType WhitespaceHandling_t6980_0_0_0;
extern void* RuntimeInvoker_WhitespaceHandling_t6980 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.WhitespaceHandling>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267367_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28937_il2cpp_TypeInfo/* declaring_type */
	, &WhitespaceHandling_t6980_0_0_0/* return_type */
	, RuntimeInvoker_WhitespaceHandling_t6980/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28937_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267367_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28937_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28937_0_0_0;
extern Il2CppType IEnumerator_1_t28937_1_0_0;
struct IEnumerator_1_t28937;
extern TypeInfo IEnumerator_1_t28937_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28937_GenericClass;
TypeInfo IEnumerator_1_t28937_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28937_MethodInfos/* methods */
	, IEnumerator_1_t28937_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28937_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28937_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28937_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28937_0_0_0/* byval_arg */
	, &IEnumerator_1_t28937_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28937_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2680.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2680MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo;
extern TypeInfo WhitespaceHandling_t6980_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174718_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWhitespaceHandling_t6980_m219296_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.WhitespaceHandling>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.WhitespaceHandling>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWhitespaceHandling_t6980_m219296 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisWhitespaceHandling_t6980_m219296_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174713_MethodInfo;
 void InternalEnumerator_1__ctor_m174713 (InternalEnumerator_1_t24024 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174714_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174714 (InternalEnumerator_1_t24024 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174715_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174715 (InternalEnumerator_1_t24024 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174718(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174718_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&WhitespaceHandling_t6980_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174716_MethodInfo;
 void InternalEnumerator_1_Dispose_m174716 (InternalEnumerator_1_t24024 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174717_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174717 (InternalEnumerator_1_t24024 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174718_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174718 (InternalEnumerator_1_t24024 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWhitespaceHandling_t6980_m219296(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWhitespaceHandling_t6980_m219296_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24024____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24024, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24024____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24024, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24024_FieldInfos[] =
{
	&InternalEnumerator_1_t24024____array_FieldInfo,
	&InternalEnumerator_1_t24024____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174715_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24024____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24024_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174715_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174718_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24024____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24024_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174718_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24024_PropertyInfos[] =
{
	&InternalEnumerator_1_t24024____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24024____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24024_InternalEnumerator_1__ctor_m174713_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174713_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174713/* method */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24024_InternalEnumerator_1__ctor_m174713_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174714_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174714/* method */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174715_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174715/* method */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174716_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174716/* method */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174717_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174717/* method */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo;
extern Il2CppType WhitespaceHandling_t6980_0_0_0;
extern void* RuntimeInvoker_WhitespaceHandling_t6980 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.WhitespaceHandling>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174718_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174718/* method */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* declaring_type */
	, &WhitespaceHandling_t6980_0_0_0/* return_type */
	, RuntimeInvoker_WhitespaceHandling_t6980/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24024_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174713_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174714_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174715_MethodInfo,
	&InternalEnumerator_1_Dispose_m174716_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174717_MethodInfo,
	&InternalEnumerator_1_get_Current_m174718_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174715_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174717_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174714_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174716_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174718_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24024_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174715_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174717_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174714_MethodInfo,
	&InternalEnumerator_1_Dispose_m174716_MethodInfo,
	&InternalEnumerator_1_get_Current_m174718_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28937_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24024_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28937_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28937_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24024_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28937_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24024_0_0_0;
extern Il2CppType InternalEnumerator_1_t24024_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24024_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24024_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24024_MethodInfos/* methods */
	, InternalEnumerator_1_t24024_PropertyInfos/* properties */
	, InternalEnumerator_1_t24024_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24024_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24024_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24024_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24024_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24024_1_0_0/* this_arg */
	, InternalEnumerator_1_t24024_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24024_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24024)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>
extern MethodInfo ICollection_1_get_Count_m267368_MethodInfo;
static PropertyInfo ICollection_1_t35996____Count_PropertyInfo = 
{
	&ICollection_1_t35996_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267368_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267369_MethodInfo;
static PropertyInfo ICollection_1_t35996____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35996_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267369_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35996_PropertyInfos[] =
{
	&ICollection_1_t35996____Count_PropertyInfo,
	&ICollection_1_t35996____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::get_Count()
MethodInfo ICollection_1_get_Count_m267368_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35996_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267369_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35996_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WhitespaceHandling_t6980_0_0_0;
static ParameterInfo ICollection_1_t35996_ICollection_1_Add_m267370_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WhitespaceHandling_t6980_0_0_0},
};
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::Add(T)
MethodInfo ICollection_1_Add_m267370_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35996_ICollection_1_Add_m267370_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::Clear()
MethodInfo ICollection_1_Clear_m267371_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35996_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WhitespaceHandling_t6980_0_0_0;
static ParameterInfo ICollection_1_t35996_ICollection_1_Contains_m267372_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WhitespaceHandling_t6980_0_0_0},
};
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::Contains(T)
MethodInfo ICollection_1_Contains_m267372_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35996_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35996_ICollection_1_Contains_m267372_ParameterInfos/* parameters */
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
extern Il2CppType WhitespaceHandlingU5BU5D_t26813_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35996_ICollection_1_CopyTo_m267373_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WhitespaceHandlingU5BU5D_t26813_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267373_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35996_ICollection_1_CopyTo_m267373_ParameterInfos/* parameters */
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
extern Il2CppType WhitespaceHandling_t6980_0_0_0;
static ParameterInfo ICollection_1_t35996_ICollection_1_Remove_m267374_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WhitespaceHandling_t6980_0_0_0},
};
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WhitespaceHandling>::Remove(T)
MethodInfo ICollection_1_Remove_m267374_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35996_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35996_ICollection_1_Remove_m267374_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35996_MethodInfos[] =
{
	&ICollection_1_get_Count_m267368_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267369_MethodInfo,
	&ICollection_1_Add_m267370_MethodInfo,
	&ICollection_1_Clear_m267371_MethodInfo,
	&ICollection_1_Contains_m267372_MethodInfo,
	&ICollection_1_CopyTo_m267373_MethodInfo,
	&ICollection_1_Remove_m267374_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35998_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35996_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t35998_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35996_0_0_0;
extern Il2CppType ICollection_1_t35996_1_0_0;
struct ICollection_1_t35996;
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35996_GenericClass;
TypeInfo ICollection_1_t35996_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35996_MethodInfos/* methods */
	, ICollection_1_t35996_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35996_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35996_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35996_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35996_0_0_0/* byval_arg */
	, &ICollection_1_t35996_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35996_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t35998_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.WhitespaceHandling>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.WhitespaceHandling>
extern TypeInfo IEnumerable_1_t35998_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28937_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.WhitespaceHandling>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267375_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t35998_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28937_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t35998_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267375_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t35998_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t35998_0_0_0;
extern Il2CppType IEnumerable_1_t35998_1_0_0;
struct IEnumerable_1_t35998;
extern TypeInfo IEnumerable_1_t35998_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t35998_GenericClass;
TypeInfo IEnumerable_1_t35998_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t35998_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t35998_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t35998_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t35998_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t35998_0_0_0/* byval_arg */
	, &IEnumerable_1_t35998_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t35998_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t35997_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>
extern MethodInfo IList_1_get_Item_m267376_MethodInfo;
extern MethodInfo IList_1_set_Item_m267377_MethodInfo;
static PropertyInfo IList_1_t35997____Item_PropertyInfo = 
{
	&IList_1_t35997_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267376_MethodInfo/* get */
	, &IList_1_set_Item_m267377_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t35997_PropertyInfos[] =
{
	&IList_1_t35997____Item_PropertyInfo,
	NULL
};
extern Il2CppType WhitespaceHandling_t6980_0_0_0;
static ParameterInfo IList_1_t35997_IList_1_IndexOf_m267378_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WhitespaceHandling_t6980_0_0_0},
};
extern TypeInfo IList_1_t35997_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267378_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t35997_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35997_IList_1_IndexOf_m267378_ParameterInfos/* parameters */
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
extern Il2CppType WhitespaceHandling_t6980_0_0_0;
static ParameterInfo IList_1_t35997_IList_1_Insert_m267379_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &WhitespaceHandling_t6980_0_0_0},
};
extern TypeInfo IList_1_t35997_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267379_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t35997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35997_IList_1_Insert_m267379_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t35997_IList_1_RemoveAt_m267380_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35997_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267380_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t35997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t35997_IList_1_RemoveAt_m267380_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t35997_IList_1_get_Item_m267376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t35997_il2cpp_TypeInfo;
extern Il2CppType WhitespaceHandling_t6980_0_0_0;
extern void* RuntimeInvoker_WhitespaceHandling_t6980_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267376_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t35997_il2cpp_TypeInfo/* declaring_type */
	, &WhitespaceHandling_t6980_0_0_0/* return_type */
	, RuntimeInvoker_WhitespaceHandling_t6980_Int32_t73/* invoker_method */
	, IList_1_t35997_IList_1_get_Item_m267376_ParameterInfos/* parameters */
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
extern Il2CppType WhitespaceHandling_t6980_0_0_0;
static ParameterInfo IList_1_t35997_IList_1_set_Item_m267377_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &WhitespaceHandling_t6980_0_0_0},
};
extern TypeInfo IList_1_t35997_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.WhitespaceHandling>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267377_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t35997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t35997_IList_1_set_Item_m267377_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t35997_MethodInfos[] =
{
	&IList_1_IndexOf_m267378_MethodInfo,
	&IList_1_Insert_m267379_MethodInfo,
	&IList_1_RemoveAt_m267380_MethodInfo,
	&IList_1_get_Item_m267376_MethodInfo,
	&IList_1_set_Item_m267377_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35996_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t35998_il2cpp_TypeInfo;
static TypeInfo* IList_1_t35997_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35996_il2cpp_TypeInfo,
	&IEnumerable_1_t35998_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t35997_0_0_0;
extern Il2CppType IList_1_t35997_1_0_0;
struct IList_1_t35997;
extern TypeInfo IList_1_t35997_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t35997_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t35997_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t35997_MethodInfos/* methods */
	, IList_1_t35997_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t35997_il2cpp_TypeInfo/* element_class */
	, IList_1_t35997_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t35997_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t35997_0_0_0/* byval_arg */
	, &IList_1_t35997_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t35997_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28938_il2cpp_TypeInfo;

// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.WriteState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.WriteState>
extern MethodInfo IEnumerator_1_get_Current_m267381_MethodInfo;
static PropertyInfo IEnumerator_1_t28938____Current_PropertyInfo = 
{
	&IEnumerator_1_t28938_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28938_PropertyInfos[] =
{
	&IEnumerator_1_t28938____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28938_il2cpp_TypeInfo;
extern Il2CppType WriteState_t6981_0_0_0;
extern void* RuntimeInvoker_WriteState_t6981 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.WriteState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267381_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28938_il2cpp_TypeInfo/* declaring_type */
	, &WriteState_t6981_0_0_0/* return_type */
	, RuntimeInvoker_WriteState_t6981/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28938_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267381_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28938_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28938_0_0_0;
extern Il2CppType IEnumerator_1_t28938_1_0_0;
struct IEnumerator_1_t28938;
extern TypeInfo IEnumerator_1_t28938_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28938_GenericClass;
TypeInfo IEnumerator_1_t28938_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28938_MethodInfos/* methods */
	, IEnumerator_1_t28938_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28938_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28938_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28938_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28938_0_0_0/* byval_arg */
	, &IEnumerator_1_t28938_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28938_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.WriteState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2681.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.WriteState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2681MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo;
extern TypeInfo WriteState_t6981_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174724_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWriteState_t6981_m219307_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.WriteState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.WriteState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWriteState_t6981_m219307 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisWriteState_t6981_m219307_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.WriteState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174719_MethodInfo;
 void InternalEnumerator_1__ctor_m174719 (InternalEnumerator_1_t24025 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.WriteState>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174720_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174720 (InternalEnumerator_1_t24025 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.WriteState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174721_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174721 (InternalEnumerator_1_t24025 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174724(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174724_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&WriteState_t6981_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.WriteState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174722_MethodInfo;
 void InternalEnumerator_1_Dispose_m174722 (InternalEnumerator_1_t24025 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.WriteState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174723_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174723 (InternalEnumerator_1_t24025 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.WriteState>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174724_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174724 (InternalEnumerator_1_t24025 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWriteState_t6981_m219307(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWriteState_t6981_m219307_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.WriteState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24025____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24025, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24025____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24025, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24025_FieldInfos[] =
{
	&InternalEnumerator_1_t24025____array_FieldInfo,
	&InternalEnumerator_1_t24025____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174721_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24025____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24025_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174721_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174724_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24025____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24025_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174724_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24025_PropertyInfos[] =
{
	&InternalEnumerator_1_t24025____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24025____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24025_InternalEnumerator_1__ctor_m174719_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.WriteState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174719_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174719/* method */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24025_InternalEnumerator_1__ctor_m174719_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.WriteState>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174720_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174720/* method */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.WriteState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174721_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174721/* method */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.WriteState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174722_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174722/* method */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.WriteState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174723_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174723/* method */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo;
extern Il2CppType WriteState_t6981_0_0_0;
extern void* RuntimeInvoker_WriteState_t6981 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.WriteState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174724_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174724/* method */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* declaring_type */
	, &WriteState_t6981_0_0_0/* return_type */
	, RuntimeInvoker_WriteState_t6981/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24025_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174719_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174720_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174721_MethodInfo,
	&InternalEnumerator_1_Dispose_m174722_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174723_MethodInfo,
	&InternalEnumerator_1_get_Current_m174724_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174721_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174723_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174720_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174722_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174724_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24025_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174721_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174723_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174720_MethodInfo,
	&InternalEnumerator_1_Dispose_m174722_MethodInfo,
	&InternalEnumerator_1_get_Current_m174724_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28938_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24025_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28938_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28938_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24025_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28938_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24025_0_0_0;
extern Il2CppType InternalEnumerator_1_t24025_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24025_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24025_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24025_MethodInfos/* methods */
	, InternalEnumerator_1_t24025_PropertyInfos/* properties */
	, InternalEnumerator_1_t24025_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24025_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24025_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24025_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24025_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24025_1_0_0/* this_arg */
	, InternalEnumerator_1_t24025_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24025_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24025)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.WriteState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WriteState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WriteState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WriteState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WriteState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WriteState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WriteState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.WriteState>
extern MethodInfo ICollection_1_get_Count_m267382_MethodInfo;
static PropertyInfo ICollection_1_t35999____Count_PropertyInfo = 
{
	&ICollection_1_t35999_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267382_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267383_MethodInfo;
static PropertyInfo ICollection_1_t35999____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t35999_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267383_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t35999_PropertyInfos[] =
{
	&ICollection_1_t35999____Count_PropertyInfo,
	&ICollection_1_t35999____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.WriteState>::get_Count()
MethodInfo ICollection_1_get_Count_m267382_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t35999_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WriteState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267383_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t35999_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WriteState_t6981_0_0_0;
static ParameterInfo ICollection_1_t35999_ICollection_1_Add_m267384_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WriteState_t6981_0_0_0},
};
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WriteState>::Add(T)
MethodInfo ICollection_1_Add_m267384_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t35999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t35999_ICollection_1_Add_m267384_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WriteState>::Clear()
MethodInfo ICollection_1_Clear_m267385_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t35999_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WriteState_t6981_0_0_0;
static ParameterInfo ICollection_1_t35999_ICollection_1_Contains_m267386_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WriteState_t6981_0_0_0},
};
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WriteState>::Contains(T)
MethodInfo ICollection_1_Contains_m267386_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t35999_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35999_ICollection_1_Contains_m267386_ParameterInfos/* parameters */
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
extern Il2CppType WriteStateU5BU5D_t26814_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t35999_ICollection_1_CopyTo_m267387_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WriteStateU5BU5D_t26814_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.WriteState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267387_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t35999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t35999_ICollection_1_CopyTo_m267387_ParameterInfos/* parameters */
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
extern Il2CppType WriteState_t6981_0_0_0;
static ParameterInfo ICollection_1_t35999_ICollection_1_Remove_m267388_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WriteState_t6981_0_0_0},
};
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.WriteState>::Remove(T)
MethodInfo ICollection_1_Remove_m267388_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t35999_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t35999_ICollection_1_Remove_m267388_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t35999_MethodInfos[] =
{
	&ICollection_1_get_Count_m267382_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267383_MethodInfo,
	&ICollection_1_Add_m267384_MethodInfo,
	&ICollection_1_Clear_m267385_MethodInfo,
	&ICollection_1_Contains_m267386_MethodInfo,
	&ICollection_1_CopyTo_m267387_MethodInfo,
	&ICollection_1_Remove_m267388_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36001_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t35999_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36001_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t35999_0_0_0;
extern Il2CppType ICollection_1_t35999_1_0_0;
struct ICollection_1_t35999;
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t35999_GenericClass;
TypeInfo ICollection_1_t35999_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t35999_MethodInfos/* methods */
	, ICollection_1_t35999_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t35999_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t35999_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t35999_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t35999_0_0_0/* byval_arg */
	, &ICollection_1_t35999_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t35999_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36001_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.WriteState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.WriteState>
extern TypeInfo IEnumerable_1_t36001_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28938_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.WriteState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267389_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36001_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28938_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36001_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267389_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36001_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36001_0_0_0;
extern Il2CppType IEnumerable_1_t36001_1_0_0;
struct IEnumerable_1_t36001;
extern TypeInfo IEnumerable_1_t36001_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36001_GenericClass;
TypeInfo IEnumerable_1_t36001_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36001_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36001_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36001_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36001_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36001_0_0_0/* byval_arg */
	, &IEnumerable_1_t36001_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36001_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t36000_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.WriteState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.WriteState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.WriteState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.WriteState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.WriteState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.WriteState>
extern MethodInfo IList_1_get_Item_m267390_MethodInfo;
extern MethodInfo IList_1_set_Item_m267391_MethodInfo;
static PropertyInfo IList_1_t36000____Item_PropertyInfo = 
{
	&IList_1_t36000_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267390_MethodInfo/* get */
	, &IList_1_set_Item_m267391_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36000_PropertyInfos[] =
{
	&IList_1_t36000____Item_PropertyInfo,
	NULL
};
extern Il2CppType WriteState_t6981_0_0_0;
static ParameterInfo IList_1_t36000_IList_1_IndexOf_m267392_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WriteState_t6981_0_0_0},
};
extern TypeInfo IList_1_t36000_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.WriteState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267392_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36000_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36000_IList_1_IndexOf_m267392_ParameterInfos/* parameters */
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
extern Il2CppType WriteState_t6981_0_0_0;
static ParameterInfo IList_1_t36000_IList_1_Insert_m267393_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &WriteState_t6981_0_0_0},
};
extern TypeInfo IList_1_t36000_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.WriteState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267393_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36000_IList_1_Insert_m267393_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36000_IList_1_RemoveAt_m267394_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36000_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.WriteState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267394_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36000_IList_1_RemoveAt_m267394_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t36000_IList_1_get_Item_m267390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36000_il2cpp_TypeInfo;
extern Il2CppType WriteState_t6981_0_0_0;
extern void* RuntimeInvoker_WriteState_t6981_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.WriteState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267390_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36000_il2cpp_TypeInfo/* declaring_type */
	, &WriteState_t6981_0_0_0/* return_type */
	, RuntimeInvoker_WriteState_t6981_Int32_t73/* invoker_method */
	, IList_1_t36000_IList_1_get_Item_m267390_ParameterInfos/* parameters */
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
extern Il2CppType WriteState_t6981_0_0_0;
static ParameterInfo IList_1_t36000_IList_1_set_Item_m267391_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &WriteState_t6981_0_0_0},
};
extern TypeInfo IList_1_t36000_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.WriteState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267391_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36000_IList_1_set_Item_m267391_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36000_MethodInfos[] =
{
	&IList_1_IndexOf_m267392_MethodInfo,
	&IList_1_Insert_m267393_MethodInfo,
	&IList_1_RemoveAt_m267394_MethodInfo,
	&IList_1_get_Item_m267390_MethodInfo,
	&IList_1_set_Item_m267391_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t35999_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36001_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36000_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t35999_il2cpp_TypeInfo,
	&IEnumerable_1_t36001_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36000_0_0_0;
extern Il2CppType IList_1_t36000_1_0_0;
struct IList_1_t36000;
extern TypeInfo IList_1_t36000_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36000_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36000_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36000_MethodInfos/* methods */
	, IList_1_t36000_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36000_il2cpp_TypeInfo/* element_class */
	, IList_1_t36000_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36000_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36000_0_0_0/* byval_arg */
	, &IList_1_t36000_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36000_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28939_il2cpp_TypeInfo;

// System.Xml.XmlDateTimeSerializationMode
#include "System_Xml_System_Xml_XmlDateTimeSerializationMode.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.XmlDateTimeSerializationMode>
extern MethodInfo IEnumerator_1_get_Current_m267395_MethodInfo;
static PropertyInfo IEnumerator_1_t28939____Current_PropertyInfo = 
{
	&IEnumerator_1_t28939_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267395_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28939_PropertyInfos[] =
{
	&IEnumerator_1_t28939____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28939_il2cpp_TypeInfo;
extern Il2CppType XmlDateTimeSerializationMode_t6990_0_0_0;
extern void* RuntimeInvoker_XmlDateTimeSerializationMode_t6990 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267395_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28939_il2cpp_TypeInfo/* declaring_type */
	, &XmlDateTimeSerializationMode_t6990_0_0_0/* return_type */
	, RuntimeInvoker_XmlDateTimeSerializationMode_t6990/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28939_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267395_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28939_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28939_0_0_0;
extern Il2CppType IEnumerator_1_t28939_1_0_0;
struct IEnumerator_1_t28939;
extern TypeInfo IEnumerator_1_t28939_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28939_GenericClass;
TypeInfo IEnumerator_1_t28939_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28939_MethodInfos/* methods */
	, IEnumerator_1_t28939_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28939_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28939_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28939_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28939_0_0_0/* byval_arg */
	, &IEnumerator_1_t28939_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28939_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2682.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2682MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo;
extern TypeInfo XmlDateTimeSerializationMode_t6990_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174730_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisXmlDateTimeSerializationMode_t6990_m219318_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.XmlDateTimeSerializationMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.XmlDateTimeSerializationMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisXmlDateTimeSerializationMode_t6990_m219318 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisXmlDateTimeSerializationMode_t6990_m219318_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174725_MethodInfo;
 void InternalEnumerator_1__ctor_m174725 (InternalEnumerator_1_t24026 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174726_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174726 (InternalEnumerator_1_t24026 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174727_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174727 (InternalEnumerator_1_t24026 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174730(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174730_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&XmlDateTimeSerializationMode_t6990_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174728_MethodInfo;
 void InternalEnumerator_1_Dispose_m174728 (InternalEnumerator_1_t24026 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174729_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174729 (InternalEnumerator_1_t24026 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174730_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174730 (InternalEnumerator_1_t24026 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisXmlDateTimeSerializationMode_t6990_m219318(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisXmlDateTimeSerializationMode_t6990_m219318_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24026____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24026, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24026____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24026, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24026_FieldInfos[] =
{
	&InternalEnumerator_1_t24026____array_FieldInfo,
	&InternalEnumerator_1_t24026____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174727_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24026____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24026_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174727_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174730_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24026____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24026_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174730_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24026_PropertyInfos[] =
{
	&InternalEnumerator_1_t24026____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24026____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24026_InternalEnumerator_1__ctor_m174725_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174725_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174725/* method */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24026_InternalEnumerator_1__ctor_m174725_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174726_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174726/* method */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174727_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174727/* method */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174728_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174728/* method */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174729_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174729/* method */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo;
extern Il2CppType XmlDateTimeSerializationMode_t6990_0_0_0;
extern void* RuntimeInvoker_XmlDateTimeSerializationMode_t6990 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.XmlDateTimeSerializationMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174730_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174730/* method */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* declaring_type */
	, &XmlDateTimeSerializationMode_t6990_0_0_0/* return_type */
	, RuntimeInvoker_XmlDateTimeSerializationMode_t6990/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24026_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174725_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174726_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174727_MethodInfo,
	&InternalEnumerator_1_Dispose_m174728_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174729_MethodInfo,
	&InternalEnumerator_1_get_Current_m174730_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174727_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174729_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174726_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174728_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174730_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24026_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174727_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174729_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174726_MethodInfo,
	&InternalEnumerator_1_Dispose_m174728_MethodInfo,
	&InternalEnumerator_1_get_Current_m174730_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28939_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24026_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28939_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28939_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24026_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28939_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24026_0_0_0;
extern Il2CppType InternalEnumerator_1_t24026_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24026_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24026_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24026_MethodInfos/* methods */
	, InternalEnumerator_1_t24026_PropertyInfos/* properties */
	, InternalEnumerator_1_t24026_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24026_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24026_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24026_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24026_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24026_1_0_0/* this_arg */
	, InternalEnumerator_1_t24026_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24026_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24026)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>
extern MethodInfo ICollection_1_get_Count_m267396_MethodInfo;
static PropertyInfo ICollection_1_t36002____Count_PropertyInfo = 
{
	&ICollection_1_t36002_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267396_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267397_MethodInfo;
static PropertyInfo ICollection_1_t36002____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36002_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267397_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36002_PropertyInfos[] =
{
	&ICollection_1_t36002____Count_PropertyInfo,
	&ICollection_1_t36002____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::get_Count()
MethodInfo ICollection_1_get_Count_m267396_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36002_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267397_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36002_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType XmlDateTimeSerializationMode_t6990_0_0_0;
static ParameterInfo ICollection_1_t36002_ICollection_1_Add_m267398_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlDateTimeSerializationMode_t6990_0_0_0},
};
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::Add(T)
MethodInfo ICollection_1_Add_m267398_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36002_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36002_ICollection_1_Add_m267398_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::Clear()
MethodInfo ICollection_1_Clear_m267399_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36002_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType XmlDateTimeSerializationMode_t6990_0_0_0;
static ParameterInfo ICollection_1_t36002_ICollection_1_Contains_m267400_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlDateTimeSerializationMode_t6990_0_0_0},
};
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::Contains(T)
MethodInfo ICollection_1_Contains_m267400_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36002_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36002_ICollection_1_Contains_m267400_ParameterInfos/* parameters */
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
extern Il2CppType XmlDateTimeSerializationModeU5BU5D_t26815_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36002_ICollection_1_CopyTo_m267401_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &XmlDateTimeSerializationModeU5BU5D_t26815_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267401_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36002_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36002_ICollection_1_CopyTo_m267401_ParameterInfos/* parameters */
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
extern Il2CppType XmlDateTimeSerializationMode_t6990_0_0_0;
static ParameterInfo ICollection_1_t36002_ICollection_1_Remove_m267402_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlDateTimeSerializationMode_t6990_0_0_0},
};
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlDateTimeSerializationMode>::Remove(T)
MethodInfo ICollection_1_Remove_m267402_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36002_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36002_ICollection_1_Remove_m267402_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36002_MethodInfos[] =
{
	&ICollection_1_get_Count_m267396_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267397_MethodInfo,
	&ICollection_1_Add_m267398_MethodInfo,
	&ICollection_1_Clear_m267399_MethodInfo,
	&ICollection_1_Contains_m267400_MethodInfo,
	&ICollection_1_CopyTo_m267401_MethodInfo,
	&ICollection_1_Remove_m267402_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36004_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36002_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36004_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36002_0_0_0;
extern Il2CppType ICollection_1_t36002_1_0_0;
struct ICollection_1_t36002;
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36002_GenericClass;
TypeInfo ICollection_1_t36002_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36002_MethodInfos/* methods */
	, ICollection_1_t36002_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36002_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36002_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36002_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36002_0_0_0/* byval_arg */
	, &ICollection_1_t36002_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36002_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36004_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlDateTimeSerializationMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.XmlDateTimeSerializationMode>
extern TypeInfo IEnumerable_1_t36004_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28939_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlDateTimeSerializationMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267403_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36004_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28939_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36004_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267403_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36004_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36004_0_0_0;
extern Il2CppType IEnumerable_1_t36004_1_0_0;
struct IEnumerable_1_t36004;
extern TypeInfo IEnumerable_1_t36004_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36004_GenericClass;
TypeInfo IEnumerable_1_t36004_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36004_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36004_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36004_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36004_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36004_0_0_0/* byval_arg */
	, &IEnumerable_1_t36004_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36004_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t36003_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>
extern MethodInfo IList_1_get_Item_m267404_MethodInfo;
extern MethodInfo IList_1_set_Item_m267405_MethodInfo;
static PropertyInfo IList_1_t36003____Item_PropertyInfo = 
{
	&IList_1_t36003_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267404_MethodInfo/* get */
	, &IList_1_set_Item_m267405_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36003_PropertyInfos[] =
{
	&IList_1_t36003____Item_PropertyInfo,
	NULL
};
extern Il2CppType XmlDateTimeSerializationMode_t6990_0_0_0;
static ParameterInfo IList_1_t36003_IList_1_IndexOf_m267406_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlDateTimeSerializationMode_t6990_0_0_0},
};
extern TypeInfo IList_1_t36003_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267406_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36003_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36003_IList_1_IndexOf_m267406_ParameterInfos/* parameters */
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
extern Il2CppType XmlDateTimeSerializationMode_t6990_0_0_0;
static ParameterInfo IList_1_t36003_IList_1_Insert_m267407_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &XmlDateTimeSerializationMode_t6990_0_0_0},
};
extern TypeInfo IList_1_t36003_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267407_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36003_IList_1_Insert_m267407_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36003_IList_1_RemoveAt_m267408_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36003_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267408_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36003_IList_1_RemoveAt_m267408_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t36003_IList_1_get_Item_m267404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36003_il2cpp_TypeInfo;
extern Il2CppType XmlDateTimeSerializationMode_t6990_0_0_0;
extern void* RuntimeInvoker_XmlDateTimeSerializationMode_t6990_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267404_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36003_il2cpp_TypeInfo/* declaring_type */
	, &XmlDateTimeSerializationMode_t6990_0_0_0/* return_type */
	, RuntimeInvoker_XmlDateTimeSerializationMode_t6990_Int32_t73/* invoker_method */
	, IList_1_t36003_IList_1_get_Item_m267404_ParameterInfos/* parameters */
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
extern Il2CppType XmlDateTimeSerializationMode_t6990_0_0_0;
static ParameterInfo IList_1_t36003_IList_1_set_Item_m267405_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &XmlDateTimeSerializationMode_t6990_0_0_0},
};
extern TypeInfo IList_1_t36003_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlDateTimeSerializationMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267405_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36003_IList_1_set_Item_m267405_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36003_MethodInfos[] =
{
	&IList_1_IndexOf_m267406_MethodInfo,
	&IList_1_Insert_m267407_MethodInfo,
	&IList_1_RemoveAt_m267408_MethodInfo,
	&IList_1_get_Item_m267404_MethodInfo,
	&IList_1_set_Item_m267405_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36002_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36004_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36003_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36002_il2cpp_TypeInfo,
	&IEnumerable_1_t36004_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36003_0_0_0;
extern Il2CppType IList_1_t36003_1_0_0;
struct IList_1_t36003;
extern TypeInfo IList_1_t36003_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36003_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36003_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36003_MethodInfos/* methods */
	, IList_1_t36003_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36003_il2cpp_TypeInfo/* element_class */
	, IList_1_t36003_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36003_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36003_0_0_0/* byval_arg */
	, &IList_1_t36003_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36003_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28940_il2cpp_TypeInfo;

// System.Xml.XmlNamespaceManager/NsDecl
#include "System_Xml_System_Xml_XmlNamespaceManager_NsDecl.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>
extern MethodInfo IEnumerator_1_get_Current_m267409_MethodInfo;
static PropertyInfo IEnumerator_1_t28940____Current_PropertyInfo = 
{
	&IEnumerator_1_t28940_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267409_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28940_PropertyInfos[] =
{
	&IEnumerator_1_t28940____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28940_il2cpp_TypeInfo;
extern Il2CppType NsDecl_t7006_0_0_0;
extern void* RuntimeInvoker_NsDecl_t7006 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267409_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28940_il2cpp_TypeInfo/* declaring_type */
	, &NsDecl_t7006_0_0_0/* return_type */
	, RuntimeInvoker_NsDecl_t7006/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28940_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267409_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28940_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28940_0_0_0;
extern Il2CppType IEnumerator_1_t28940_1_0_0;
struct IEnumerator_1_t28940;
extern TypeInfo IEnumerator_1_t28940_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28940_GenericClass;
TypeInfo IEnumerator_1_t28940_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28940_MethodInfos/* methods */
	, IEnumerator_1_t28940_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28940_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28940_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28940_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28940_0_0_0/* byval_arg */
	, &IEnumerator_1_t28940_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28940_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2683.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2683MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo;
extern TypeInfo NsDecl_t7006_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174736_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNsDecl_t7006_m219329_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNamespaceManager/NsDecl>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNamespaceManager/NsDecl>(System.Int32)
 NsDecl_t7006  Array_InternalArray__get_Item_TisNsDecl_t7006_m219329 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisNsDecl_t7006_m219329_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174731_MethodInfo;
 void InternalEnumerator_1__ctor_m174731 (InternalEnumerator_1_t24027 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174732_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174732 (InternalEnumerator_1_t24027 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174733_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174733 (InternalEnumerator_1_t24027 * __this, MethodInfo* method){
	{
		NsDecl_t7006  L_0 = InternalEnumerator_1_get_Current_m174736(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174736_MethodInfo);
		NsDecl_t7006  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NsDecl_t7006_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174734_MethodInfo;
 void InternalEnumerator_1_Dispose_m174734 (InternalEnumerator_1_t24027 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174735_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174735 (InternalEnumerator_1_t24027 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174736_MethodInfo;
 NsDecl_t7006  InternalEnumerator_1_get_Current_m174736 (InternalEnumerator_1_t24027 * __this, MethodInfo* method){
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
		NsDecl_t7006  L_8 = Array_InternalArray__get_Item_TisNsDecl_t7006_m219329(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNsDecl_t7006_m219329_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24027____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24027, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24027____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24027, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24027_FieldInfos[] =
{
	&InternalEnumerator_1_t24027____array_FieldInfo,
	&InternalEnumerator_1_t24027____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174733_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24027____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24027_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174733_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174736_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24027____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24027_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174736_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24027_PropertyInfos[] =
{
	&InternalEnumerator_1_t24027____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24027____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24027_InternalEnumerator_1__ctor_m174731_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174731_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174731/* method */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24027_InternalEnumerator_1__ctor_m174731_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174732_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174732/* method */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174733_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174733/* method */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174734_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174734/* method */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174735_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174735/* method */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo;
extern Il2CppType NsDecl_t7006_0_0_0;
extern void* RuntimeInvoker_NsDecl_t7006 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174736_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174736/* method */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* declaring_type */
	, &NsDecl_t7006_0_0_0/* return_type */
	, RuntimeInvoker_NsDecl_t7006/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24027_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174731_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174732_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174733_MethodInfo,
	&InternalEnumerator_1_Dispose_m174734_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174735_MethodInfo,
	&InternalEnumerator_1_get_Current_m174736_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174733_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174735_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174732_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174734_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174736_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24027_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174733_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174735_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174732_MethodInfo,
	&InternalEnumerator_1_Dispose_m174734_MethodInfo,
	&InternalEnumerator_1_get_Current_m174736_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28940_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24027_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28940_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28940_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24027_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28940_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24027_0_0_0;
extern Il2CppType InternalEnumerator_1_t24027_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24027_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24027_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24027_MethodInfos/* methods */
	, InternalEnumerator_1_t24027_PropertyInfos/* properties */
	, InternalEnumerator_1_t24027_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24027_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24027_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24027_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24027_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24027_1_0_0/* this_arg */
	, InternalEnumerator_1_t24027_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24027_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24027)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>
extern MethodInfo ICollection_1_get_Count_m267410_MethodInfo;
static PropertyInfo ICollection_1_t36005____Count_PropertyInfo = 
{
	&ICollection_1_t36005_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267410_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267411_MethodInfo;
static PropertyInfo ICollection_1_t36005____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36005_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267411_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36005_PropertyInfos[] =
{
	&ICollection_1_t36005____Count_PropertyInfo,
	&ICollection_1_t36005____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Count()
MethodInfo ICollection_1_get_Count_m267410_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36005_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267411_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36005_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NsDecl_t7006_0_0_0;
static ParameterInfo ICollection_1_t36005_ICollection_1_Add_m267412_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NsDecl_t7006_0_0_0},
};
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_NsDecl_t7006 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Add(T)
MethodInfo ICollection_1_Add_m267412_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_NsDecl_t7006/* invoker_method */
	, ICollection_1_t36005_ICollection_1_Add_m267412_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Clear()
MethodInfo ICollection_1_Clear_m267413_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36005_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NsDecl_t7006_0_0_0;
static ParameterInfo ICollection_1_t36005_ICollection_1_Contains_m267414_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NsDecl_t7006_0_0_0},
};
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_NsDecl_t7006 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Contains(T)
MethodInfo ICollection_1_Contains_m267414_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36005_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_NsDecl_t7006/* invoker_method */
	, ICollection_1_t36005_ICollection_1_Contains_m267414_ParameterInfos/* parameters */
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
extern Il2CppType NsDeclU5BU5D_t7008_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36005_ICollection_1_CopyTo_m267415_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NsDeclU5BU5D_t7008_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267415_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36005_ICollection_1_CopyTo_m267415_ParameterInfos/* parameters */
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
extern Il2CppType NsDecl_t7006_0_0_0;
static ParameterInfo ICollection_1_t36005_ICollection_1_Remove_m267416_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NsDecl_t7006_0_0_0},
};
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_NsDecl_t7006 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsDecl>::Remove(T)
MethodInfo ICollection_1_Remove_m267416_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36005_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_NsDecl_t7006/* invoker_method */
	, ICollection_1_t36005_ICollection_1_Remove_m267416_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36005_MethodInfos[] =
{
	&ICollection_1_get_Count_m267410_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267411_MethodInfo,
	&ICollection_1_Add_m267412_MethodInfo,
	&ICollection_1_Clear_m267413_MethodInfo,
	&ICollection_1_Contains_m267414_MethodInfo,
	&ICollection_1_CopyTo_m267415_MethodInfo,
	&ICollection_1_Remove_m267416_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36007_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36005_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36007_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36005_0_0_0;
extern Il2CppType ICollection_1_t36005_1_0_0;
struct ICollection_1_t36005;
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36005_GenericClass;
TypeInfo ICollection_1_t36005_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36005_MethodInfos/* methods */
	, ICollection_1_t36005_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36005_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36005_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36005_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36005_0_0_0/* byval_arg */
	, &ICollection_1_t36005_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36005_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36007_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNamespaceManager/NsDecl>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.XmlNamespaceManager/NsDecl>
extern TypeInfo IEnumerable_1_t36007_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28940_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNamespaceManager/NsDecl>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267417_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36007_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28940_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36007_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267417_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36007_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36007_0_0_0;
extern Il2CppType IEnumerable_1_t36007_1_0_0;
struct IEnumerable_1_t36007;
extern TypeInfo IEnumerable_1_t36007_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36007_GenericClass;
TypeInfo IEnumerable_1_t36007_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36007_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36007_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36007_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36007_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36007_0_0_0/* byval_arg */
	, &IEnumerable_1_t36007_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36007_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t36006_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>
extern MethodInfo IList_1_get_Item_m267418_MethodInfo;
extern MethodInfo IList_1_set_Item_m267419_MethodInfo;
static PropertyInfo IList_1_t36006____Item_PropertyInfo = 
{
	&IList_1_t36006_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267418_MethodInfo/* get */
	, &IList_1_set_Item_m267419_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36006_PropertyInfos[] =
{
	&IList_1_t36006____Item_PropertyInfo,
	NULL
};
extern Il2CppType NsDecl_t7006_0_0_0;
static ParameterInfo IList_1_t36006_IList_1_IndexOf_m267420_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NsDecl_t7006_0_0_0},
};
extern TypeInfo IList_1_t36006_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_NsDecl_t7006 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267420_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36006_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_NsDecl_t7006/* invoker_method */
	, IList_1_t36006_IList_1_IndexOf_m267420_ParameterInfos/* parameters */
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
extern Il2CppType NsDecl_t7006_0_0_0;
static ParameterInfo IList_1_t36006_IList_1_Insert_m267421_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NsDecl_t7006_0_0_0},
};
extern TypeInfo IList_1_t36006_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_NsDecl_t7006 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267421_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_NsDecl_t7006/* invoker_method */
	, IList_1_t36006_IList_1_Insert_m267421_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36006_IList_1_RemoveAt_m267422_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36006_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267422_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36006_IList_1_RemoveAt_m267422_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t36006_IList_1_get_Item_m267418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36006_il2cpp_TypeInfo;
extern Il2CppType NsDecl_t7006_0_0_0;
extern void* RuntimeInvoker_NsDecl_t7006_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267418_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36006_il2cpp_TypeInfo/* declaring_type */
	, &NsDecl_t7006_0_0_0/* return_type */
	, RuntimeInvoker_NsDecl_t7006_Int32_t73/* invoker_method */
	, IList_1_t36006_IList_1_get_Item_m267418_ParameterInfos/* parameters */
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
extern Il2CppType NsDecl_t7006_0_0_0;
static ParameterInfo IList_1_t36006_IList_1_set_Item_m267419_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NsDecl_t7006_0_0_0},
};
extern TypeInfo IList_1_t36006_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_NsDecl_t7006 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsDecl>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267419_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_NsDecl_t7006/* invoker_method */
	, IList_1_t36006_IList_1_set_Item_m267419_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36006_MethodInfos[] =
{
	&IList_1_IndexOf_m267420_MethodInfo,
	&IList_1_Insert_m267421_MethodInfo,
	&IList_1_RemoveAt_m267422_MethodInfo,
	&IList_1_get_Item_m267418_MethodInfo,
	&IList_1_set_Item_m267419_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36005_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36007_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36006_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36005_il2cpp_TypeInfo,
	&IEnumerable_1_t36007_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36006_0_0_0;
extern Il2CppType IList_1_t36006_1_0_0;
struct IList_1_t36006;
extern TypeInfo IList_1_t36006_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36006_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36006_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36006_MethodInfos/* methods */
	, IList_1_t36006_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36006_il2cpp_TypeInfo/* element_class */
	, IList_1_t36006_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36006_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36006_0_0_0/* byval_arg */
	, &IList_1_t36006_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36006_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28941_il2cpp_TypeInfo;

// System.Xml.XmlNamespaceManager/NsScope
#include "System_Xml_System_Xml_XmlNamespaceManager_NsScope.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>
extern MethodInfo IEnumerator_1_get_Current_m267423_MethodInfo;
static PropertyInfo IEnumerator_1_t28941____Current_PropertyInfo = 
{
	&IEnumerator_1_t28941_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267423_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28941_PropertyInfos[] =
{
	&IEnumerator_1_t28941____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28941_il2cpp_TypeInfo;
extern Il2CppType NsScope_t7007_0_0_0;
extern void* RuntimeInvoker_NsScope_t7007 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267423_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28941_il2cpp_TypeInfo/* declaring_type */
	, &NsScope_t7007_0_0_0/* return_type */
	, RuntimeInvoker_NsScope_t7007/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28941_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267423_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28941_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28941_0_0_0;
extern Il2CppType IEnumerator_1_t28941_1_0_0;
struct IEnumerator_1_t28941;
extern TypeInfo IEnumerator_1_t28941_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28941_GenericClass;
TypeInfo IEnumerator_1_t28941_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28941_MethodInfos/* methods */
	, IEnumerator_1_t28941_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28941_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28941_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28941_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28941_0_0_0/* byval_arg */
	, &IEnumerator_1_t28941_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28941_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2684.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2684MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo;
extern TypeInfo NsScope_t7007_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174742_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNsScope_t7007_m219340_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNamespaceManager/NsScope>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNamespaceManager/NsScope>(System.Int32)
 NsScope_t7007  Array_InternalArray__get_Item_TisNsScope_t7007_m219340 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisNsScope_t7007_m219340_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174737_MethodInfo;
 void InternalEnumerator_1__ctor_m174737 (InternalEnumerator_1_t24028 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174738_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174738 (InternalEnumerator_1_t24028 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174739_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174739 (InternalEnumerator_1_t24028 * __this, MethodInfo* method){
	{
		NsScope_t7007  L_0 = InternalEnumerator_1_get_Current_m174742(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174742_MethodInfo);
		NsScope_t7007  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NsScope_t7007_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174740_MethodInfo;
 void InternalEnumerator_1_Dispose_m174740 (InternalEnumerator_1_t24028 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174741_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174741 (InternalEnumerator_1_t24028 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174742_MethodInfo;
 NsScope_t7007  InternalEnumerator_1_get_Current_m174742 (InternalEnumerator_1_t24028 * __this, MethodInfo* method){
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
		NsScope_t7007  L_8 = Array_InternalArray__get_Item_TisNsScope_t7007_m219340(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNsScope_t7007_m219340_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24028____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24028, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24028____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24028, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24028_FieldInfos[] =
{
	&InternalEnumerator_1_t24028____array_FieldInfo,
	&InternalEnumerator_1_t24028____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174739_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24028____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24028_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174739_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174742_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24028____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24028_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174742_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24028_PropertyInfos[] =
{
	&InternalEnumerator_1_t24028____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24028____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24028_InternalEnumerator_1__ctor_m174737_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174737_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174737/* method */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24028_InternalEnumerator_1__ctor_m174737_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174738_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174738/* method */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174739_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174739/* method */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174740_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174740/* method */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174741_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174741/* method */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo;
extern Il2CppType NsScope_t7007_0_0_0;
extern void* RuntimeInvoker_NsScope_t7007 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.XmlNamespaceManager/NsScope>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174742_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174742/* method */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* declaring_type */
	, &NsScope_t7007_0_0_0/* return_type */
	, RuntimeInvoker_NsScope_t7007/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24028_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174737_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174738_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174739_MethodInfo,
	&InternalEnumerator_1_Dispose_m174740_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174741_MethodInfo,
	&InternalEnumerator_1_get_Current_m174742_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174739_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174741_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174738_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174740_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174742_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24028_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174739_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174741_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174738_MethodInfo,
	&InternalEnumerator_1_Dispose_m174740_MethodInfo,
	&InternalEnumerator_1_get_Current_m174742_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28941_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24028_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28941_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28941_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24028_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28941_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24028_0_0_0;
extern Il2CppType InternalEnumerator_1_t24028_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24028_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24028_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24028_MethodInfos/* methods */
	, InternalEnumerator_1_t24028_PropertyInfos/* properties */
	, InternalEnumerator_1_t24028_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24028_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24028_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24028_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24028_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24028_1_0_0/* this_arg */
	, InternalEnumerator_1_t24028_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24028_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24028)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>
extern MethodInfo ICollection_1_get_Count_m267424_MethodInfo;
static PropertyInfo ICollection_1_t36008____Count_PropertyInfo = 
{
	&ICollection_1_t36008_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267424_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267425_MethodInfo;
static PropertyInfo ICollection_1_t36008____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36008_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267425_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36008_PropertyInfos[] =
{
	&ICollection_1_t36008____Count_PropertyInfo,
	&ICollection_1_t36008____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::get_Count()
MethodInfo ICollection_1_get_Count_m267424_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36008_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267425_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36008_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NsScope_t7007_0_0_0;
static ParameterInfo ICollection_1_t36008_ICollection_1_Add_m267426_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NsScope_t7007_0_0_0},
};
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_NsScope_t7007 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Add(T)
MethodInfo ICollection_1_Add_m267426_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_NsScope_t7007/* invoker_method */
	, ICollection_1_t36008_ICollection_1_Add_m267426_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Clear()
MethodInfo ICollection_1_Clear_m267427_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36008_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NsScope_t7007_0_0_0;
static ParameterInfo ICollection_1_t36008_ICollection_1_Contains_m267428_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NsScope_t7007_0_0_0},
};
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_NsScope_t7007 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Contains(T)
MethodInfo ICollection_1_Contains_m267428_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36008_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_NsScope_t7007/* invoker_method */
	, ICollection_1_t36008_ICollection_1_Contains_m267428_ParameterInfos/* parameters */
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
extern Il2CppType NsScopeU5BU5D_t7009_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36008_ICollection_1_CopyTo_m267429_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NsScopeU5BU5D_t7009_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267429_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36008_ICollection_1_CopyTo_m267429_ParameterInfos/* parameters */
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
extern Il2CppType NsScope_t7007_0_0_0;
static ParameterInfo ICollection_1_t36008_ICollection_1_Remove_m267430_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NsScope_t7007_0_0_0},
};
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_NsScope_t7007 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNamespaceManager/NsScope>::Remove(T)
MethodInfo ICollection_1_Remove_m267430_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36008_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_NsScope_t7007/* invoker_method */
	, ICollection_1_t36008_ICollection_1_Remove_m267430_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36008_MethodInfos[] =
{
	&ICollection_1_get_Count_m267424_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267425_MethodInfo,
	&ICollection_1_Add_m267426_MethodInfo,
	&ICollection_1_Clear_m267427_MethodInfo,
	&ICollection_1_Contains_m267428_MethodInfo,
	&ICollection_1_CopyTo_m267429_MethodInfo,
	&ICollection_1_Remove_m267430_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36010_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36008_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36010_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36008_0_0_0;
extern Il2CppType ICollection_1_t36008_1_0_0;
struct ICollection_1_t36008;
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36008_GenericClass;
TypeInfo ICollection_1_t36008_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36008_MethodInfos/* methods */
	, ICollection_1_t36008_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36008_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36008_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36008_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36008_0_0_0/* byval_arg */
	, &ICollection_1_t36008_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36008_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36010_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNamespaceManager/NsScope>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.XmlNamespaceManager/NsScope>
extern TypeInfo IEnumerable_1_t36010_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28941_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNamespaceManager/NsScope>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267431_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36010_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28941_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36010_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267431_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36010_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36010_0_0_0;
extern Il2CppType IEnumerable_1_t36010_1_0_0;
struct IEnumerable_1_t36010;
extern TypeInfo IEnumerable_1_t36010_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36010_GenericClass;
TypeInfo IEnumerable_1_t36010_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36010_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36010_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36010_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36010_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36010_0_0_0/* byval_arg */
	, &IEnumerable_1_t36010_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36010_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t36009_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>
extern MethodInfo IList_1_get_Item_m267432_MethodInfo;
extern MethodInfo IList_1_set_Item_m267433_MethodInfo;
static PropertyInfo IList_1_t36009____Item_PropertyInfo = 
{
	&IList_1_t36009_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267432_MethodInfo/* get */
	, &IList_1_set_Item_m267433_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36009_PropertyInfos[] =
{
	&IList_1_t36009____Item_PropertyInfo,
	NULL
};
extern Il2CppType NsScope_t7007_0_0_0;
static ParameterInfo IList_1_t36009_IList_1_IndexOf_m267434_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NsScope_t7007_0_0_0},
};
extern TypeInfo IList_1_t36009_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_NsScope_t7007 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267434_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36009_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_NsScope_t7007/* invoker_method */
	, IList_1_t36009_IList_1_IndexOf_m267434_ParameterInfos/* parameters */
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
extern Il2CppType NsScope_t7007_0_0_0;
static ParameterInfo IList_1_t36009_IList_1_Insert_m267435_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NsScope_t7007_0_0_0},
};
extern TypeInfo IList_1_t36009_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_NsScope_t7007 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267435_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_NsScope_t7007/* invoker_method */
	, IList_1_t36009_IList_1_Insert_m267435_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36009_IList_1_RemoveAt_m267436_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36009_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267436_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36009_IList_1_RemoveAt_m267436_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t36009_IList_1_get_Item_m267432_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36009_il2cpp_TypeInfo;
extern Il2CppType NsScope_t7007_0_0_0;
extern void* RuntimeInvoker_NsScope_t7007_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267432_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36009_il2cpp_TypeInfo/* declaring_type */
	, &NsScope_t7007_0_0_0/* return_type */
	, RuntimeInvoker_NsScope_t7007_Int32_t73/* invoker_method */
	, IList_1_t36009_IList_1_get_Item_m267432_ParameterInfos/* parameters */
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
extern Il2CppType NsScope_t7007_0_0_0;
static ParameterInfo IList_1_t36009_IList_1_set_Item_m267433_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NsScope_t7007_0_0_0},
};
extern TypeInfo IList_1_t36009_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_NsScope_t7007 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNamespaceManager/NsScope>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267433_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_NsScope_t7007/* invoker_method */
	, IList_1_t36009_IList_1_set_Item_m267433_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36009_MethodInfos[] =
{
	&IList_1_IndexOf_m267434_MethodInfo,
	&IList_1_Insert_m267435_MethodInfo,
	&IList_1_RemoveAt_m267436_MethodInfo,
	&IList_1_get_Item_m267432_MethodInfo,
	&IList_1_set_Item_m267433_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36008_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36010_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36009_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36008_il2cpp_TypeInfo,
	&IEnumerable_1_t36010_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36009_0_0_0;
extern Il2CppType IList_1_t36009_1_0_0;
struct IList_1_t36009;
extern TypeInfo IList_1_t36009_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36009_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36009_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36009_MethodInfos/* methods */
	, IList_1_t36009_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36009_il2cpp_TypeInfo/* element_class */
	, IList_1_t36009_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36009_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36009_0_0_0/* byval_arg */
	, &IList_1_t36009_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36009_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28942_il2cpp_TypeInfo;

// System.Xml.XmlNodeChangedAction
#include "System_Xml_System_Xml_XmlNodeChangedAction.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNodeChangedAction>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.XmlNodeChangedAction>
extern MethodInfo IEnumerator_1_get_Current_m267437_MethodInfo;
static PropertyInfo IEnumerator_1_t28942____Current_PropertyInfo = 
{
	&IEnumerator_1_t28942_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267437_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28942_PropertyInfos[] =
{
	&IEnumerator_1_t28942____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28942_il2cpp_TypeInfo;
extern Il2CppType XmlNodeChangedAction_t7012_0_0_0;
extern void* RuntimeInvoker_XmlNodeChangedAction_t7012 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNodeChangedAction>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267437_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28942_il2cpp_TypeInfo/* declaring_type */
	, &XmlNodeChangedAction_t7012_0_0_0/* return_type */
	, RuntimeInvoker_XmlNodeChangedAction_t7012/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28942_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267437_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28942_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28942_0_0_0;
extern Il2CppType IEnumerator_1_t28942_1_0_0;
struct IEnumerator_1_t28942;
extern TypeInfo IEnumerator_1_t28942_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28942_GenericClass;
TypeInfo IEnumerator_1_t28942_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28942_MethodInfos/* methods */
	, IEnumerator_1_t28942_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28942_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28942_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28942_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28942_0_0_0/* byval_arg */
	, &IEnumerator_1_t28942_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28942_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2685.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2685MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo;
extern TypeInfo XmlNodeChangedAction_t7012_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174748_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisXmlNodeChangedAction_t7012_m219351_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNodeChangedAction>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNodeChangedAction>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisXmlNodeChangedAction_t7012_m219351 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisXmlNodeChangedAction_t7012_m219351_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174743_MethodInfo;
 void InternalEnumerator_1__ctor_m174743 (InternalEnumerator_1_t24029 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174744_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174744 (InternalEnumerator_1_t24029 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174745_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174745 (InternalEnumerator_1_t24029 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174748(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174748_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&XmlNodeChangedAction_t7012_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174746_MethodInfo;
 void InternalEnumerator_1_Dispose_m174746 (InternalEnumerator_1_t24029 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174747_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174747 (InternalEnumerator_1_t24029 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174748_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174748 (InternalEnumerator_1_t24029 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisXmlNodeChangedAction_t7012_m219351(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisXmlNodeChangedAction_t7012_m219351_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24029____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24029, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24029____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24029, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24029_FieldInfos[] =
{
	&InternalEnumerator_1_t24029____array_FieldInfo,
	&InternalEnumerator_1_t24029____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174745_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24029____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24029_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174745_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174748_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24029____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24029_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174748_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24029_PropertyInfos[] =
{
	&InternalEnumerator_1_t24029____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24029____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24029_InternalEnumerator_1__ctor_m174743_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174743_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174743/* method */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24029_InternalEnumerator_1__ctor_m174743_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174744_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174744/* method */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174745_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174745/* method */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174746_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174746/* method */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174747_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174747/* method */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo;
extern Il2CppType XmlNodeChangedAction_t7012_0_0_0;
extern void* RuntimeInvoker_XmlNodeChangedAction_t7012 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.XmlNodeChangedAction>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174748_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174748/* method */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* declaring_type */
	, &XmlNodeChangedAction_t7012_0_0_0/* return_type */
	, RuntimeInvoker_XmlNodeChangedAction_t7012/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24029_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174743_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174744_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174745_MethodInfo,
	&InternalEnumerator_1_Dispose_m174746_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174747_MethodInfo,
	&InternalEnumerator_1_get_Current_m174748_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174745_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174747_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174744_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174746_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174748_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24029_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174745_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174747_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174744_MethodInfo,
	&InternalEnumerator_1_Dispose_m174746_MethodInfo,
	&InternalEnumerator_1_get_Current_m174748_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28942_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24029_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28942_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28942_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24029_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28942_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24029_0_0_0;
extern Il2CppType InternalEnumerator_1_t24029_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24029_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24029_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24029_MethodInfos/* methods */
	, InternalEnumerator_1_t24029_PropertyInfos/* properties */
	, InternalEnumerator_1_t24029_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24029_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24029_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24029_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24029_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24029_1_0_0/* this_arg */
	, InternalEnumerator_1_t24029_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24029_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24029)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>
extern MethodInfo ICollection_1_get_Count_m267438_MethodInfo;
static PropertyInfo ICollection_1_t36011____Count_PropertyInfo = 
{
	&ICollection_1_t36011_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267438_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267439_MethodInfo;
static PropertyInfo ICollection_1_t36011____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36011_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267439_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36011_PropertyInfos[] =
{
	&ICollection_1_t36011____Count_PropertyInfo,
	&ICollection_1_t36011____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::get_Count()
MethodInfo ICollection_1_get_Count_m267438_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36011_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267439_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36011_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType XmlNodeChangedAction_t7012_0_0_0;
static ParameterInfo ICollection_1_t36011_ICollection_1_Add_m267440_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeChangedAction_t7012_0_0_0},
};
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::Add(T)
MethodInfo ICollection_1_Add_m267440_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36011_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36011_ICollection_1_Add_m267440_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::Clear()
MethodInfo ICollection_1_Clear_m267441_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36011_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType XmlNodeChangedAction_t7012_0_0_0;
static ParameterInfo ICollection_1_t36011_ICollection_1_Contains_m267442_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeChangedAction_t7012_0_0_0},
};
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::Contains(T)
MethodInfo ICollection_1_Contains_m267442_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36011_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36011_ICollection_1_Contains_m267442_ParameterInfos/* parameters */
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
extern Il2CppType XmlNodeChangedActionU5BU5D_t26816_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36011_ICollection_1_CopyTo_m267443_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeChangedActionU5BU5D_t26816_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267443_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36011_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36011_ICollection_1_CopyTo_m267443_ParameterInfos/* parameters */
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
extern Il2CppType XmlNodeChangedAction_t7012_0_0_0;
static ParameterInfo ICollection_1_t36011_ICollection_1_Remove_m267444_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeChangedAction_t7012_0_0_0},
};
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeChangedAction>::Remove(T)
MethodInfo ICollection_1_Remove_m267444_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36011_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36011_ICollection_1_Remove_m267444_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36011_MethodInfos[] =
{
	&ICollection_1_get_Count_m267438_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267439_MethodInfo,
	&ICollection_1_Add_m267440_MethodInfo,
	&ICollection_1_Clear_m267441_MethodInfo,
	&ICollection_1_Contains_m267442_MethodInfo,
	&ICollection_1_CopyTo_m267443_MethodInfo,
	&ICollection_1_Remove_m267444_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36013_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36011_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36013_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36011_0_0_0;
extern Il2CppType ICollection_1_t36011_1_0_0;
struct ICollection_1_t36011;
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36011_GenericClass;
TypeInfo ICollection_1_t36011_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36011_MethodInfos/* methods */
	, ICollection_1_t36011_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36011_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36011_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36011_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36011_0_0_0/* byval_arg */
	, &ICollection_1_t36011_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36011_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36013_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNodeChangedAction>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.XmlNodeChangedAction>
extern TypeInfo IEnumerable_1_t36013_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28942_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNodeChangedAction>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267445_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36013_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28942_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36013_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267445_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36013_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36013_0_0_0;
extern Il2CppType IEnumerable_1_t36013_1_0_0;
struct IEnumerable_1_t36013;
extern TypeInfo IEnumerable_1_t36013_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36013_GenericClass;
TypeInfo IEnumerable_1_t36013_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36013_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36013_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36013_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36013_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36013_0_0_0/* byval_arg */
	, &IEnumerable_1_t36013_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36013_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t36012_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>
extern MethodInfo IList_1_get_Item_m267446_MethodInfo;
extern MethodInfo IList_1_set_Item_m267447_MethodInfo;
static PropertyInfo IList_1_t36012____Item_PropertyInfo = 
{
	&IList_1_t36012_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267446_MethodInfo/* get */
	, &IList_1_set_Item_m267447_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36012_PropertyInfos[] =
{
	&IList_1_t36012____Item_PropertyInfo,
	NULL
};
extern Il2CppType XmlNodeChangedAction_t7012_0_0_0;
static ParameterInfo IList_1_t36012_IList_1_IndexOf_m267448_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeChangedAction_t7012_0_0_0},
};
extern TypeInfo IList_1_t36012_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267448_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36012_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36012_IList_1_IndexOf_m267448_ParameterInfos/* parameters */
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
extern Il2CppType XmlNodeChangedAction_t7012_0_0_0;
static ParameterInfo IList_1_t36012_IList_1_Insert_m267449_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &XmlNodeChangedAction_t7012_0_0_0},
};
extern TypeInfo IList_1_t36012_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267449_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36012_IList_1_Insert_m267449_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36012_IList_1_RemoveAt_m267450_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36012_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267450_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36012_IList_1_RemoveAt_m267450_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t36012_IList_1_get_Item_m267446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36012_il2cpp_TypeInfo;
extern Il2CppType XmlNodeChangedAction_t7012_0_0_0;
extern void* RuntimeInvoker_XmlNodeChangedAction_t7012_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267446_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36012_il2cpp_TypeInfo/* declaring_type */
	, &XmlNodeChangedAction_t7012_0_0_0/* return_type */
	, RuntimeInvoker_XmlNodeChangedAction_t7012_Int32_t73/* invoker_method */
	, IList_1_t36012_IList_1_get_Item_m267446_ParameterInfos/* parameters */
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
extern Il2CppType XmlNodeChangedAction_t7012_0_0_0;
static ParameterInfo IList_1_t36012_IList_1_set_Item_m267447_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &XmlNodeChangedAction_t7012_0_0_0},
};
extern TypeInfo IList_1_t36012_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeChangedAction>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267447_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36012_IList_1_set_Item_m267447_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36012_MethodInfos[] =
{
	&IList_1_IndexOf_m267448_MethodInfo,
	&IList_1_Insert_m267449_MethodInfo,
	&IList_1_RemoveAt_m267450_MethodInfo,
	&IList_1_get_Item_m267446_MethodInfo,
	&IList_1_set_Item_m267447_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36011_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36013_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36012_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36011_il2cpp_TypeInfo,
	&IEnumerable_1_t36013_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36012_0_0_0;
extern Il2CppType IList_1_t36012_1_0_0;
struct IList_1_t36012;
extern TypeInfo IList_1_t36012_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36012_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36012_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36012_MethodInfos/* methods */
	, IList_1_t36012_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36012_il2cpp_TypeInfo/* element_class */
	, IList_1_t36012_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36012_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36012_0_0_0/* byval_arg */
	, &IList_1_t36012_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36012_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28943_il2cpp_TypeInfo;

// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNodeType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.XmlNodeType>
extern MethodInfo IEnumerator_1_get_Current_m267451_MethodInfo;
static PropertyInfo IEnumerator_1_t28943____Current_PropertyInfo = 
{
	&IEnumerator_1_t28943_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267451_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28943_PropertyInfos[] =
{
	&IEnumerator_1_t28943____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28943_il2cpp_TypeInfo;
extern Il2CppType XmlNodeType_t7016_0_0_0;
extern void* RuntimeInvoker_XmlNodeType_t7016 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlNodeType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267451_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28943_il2cpp_TypeInfo/* declaring_type */
	, &XmlNodeType_t7016_0_0_0/* return_type */
	, RuntimeInvoker_XmlNodeType_t7016/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28943_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267451_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28943_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28943_0_0_0;
extern Il2CppType IEnumerator_1_t28943_1_0_0;
struct IEnumerator_1_t28943;
extern TypeInfo IEnumerator_1_t28943_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28943_GenericClass;
TypeInfo IEnumerator_1_t28943_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28943_MethodInfos/* methods */
	, IEnumerator_1_t28943_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28943_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28943_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28943_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28943_0_0_0/* byval_arg */
	, &IEnumerator_1_t28943_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28943_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2686.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2686MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo;
extern TypeInfo XmlNodeType_t7016_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174754_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisXmlNodeType_t7016_m219362_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNodeType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Xml.XmlNodeType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisXmlNodeType_t7016_m219362 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisXmlNodeType_t7016_m219362_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m174749_MethodInfo;
 void InternalEnumerator_1__ctor_m174749 (InternalEnumerator_1_t24030 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174750_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174750 (InternalEnumerator_1_t24030 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174751_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174751 (InternalEnumerator_1_t24030 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m174754(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m174754_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&XmlNodeType_t7016_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m174752_MethodInfo;
 void InternalEnumerator_1_Dispose_m174752 (InternalEnumerator_1_t24030 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m174753_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m174753 (InternalEnumerator_1_t24030 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m174754_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m174754 (InternalEnumerator_1_t24030 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisXmlNodeType_t7016_m219362(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisXmlNodeType_t7016_m219362_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24030____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24030, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24030____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24030, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24030_FieldInfos[] =
{
	&InternalEnumerator_1_t24030____array_FieldInfo,
	&InternalEnumerator_1_t24030____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174751_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24030____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24030_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174751_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m174754_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24030____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24030_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m174754_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24030_PropertyInfos[] =
{
	&InternalEnumerator_1_t24030____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24030____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24030_InternalEnumerator_1__ctor_m174749_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m174749_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m174749/* method */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24030_InternalEnumerator_1__ctor_m174749_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174750_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174750/* method */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174751_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174751/* method */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m174752_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m174752/* method */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m174753_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m174753/* method */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo;
extern Il2CppType XmlNodeType_t7016_0_0_0;
extern void* RuntimeInvoker_XmlNodeType_t7016 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Xml.XmlNodeType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m174754_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m174754/* method */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* declaring_type */
	, &XmlNodeType_t7016_0_0_0/* return_type */
	, RuntimeInvoker_XmlNodeType_t7016/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24030_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m174749_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174750_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174751_MethodInfo,
	&InternalEnumerator_1_Dispose_m174752_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174753_MethodInfo,
	&InternalEnumerator_1_get_Current_m174754_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174751_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m174753_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174750_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m174752_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m174754_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24030_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m174751_MethodInfo,
	&InternalEnumerator_1_MoveNext_m174753_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m174750_MethodInfo,
	&InternalEnumerator_1_Dispose_m174752_MethodInfo,
	&InternalEnumerator_1_get_Current_m174754_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28943_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24030_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28943_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28943_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24030_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28943_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24030_0_0_0;
extern Il2CppType InternalEnumerator_1_t24030_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24030_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24030_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24030_MethodInfos/* methods */
	, InternalEnumerator_1_t24030_PropertyInfos/* properties */
	, InternalEnumerator_1_t24030_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24030_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24030_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24030_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24030_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24030_1_0_0/* this_arg */
	, InternalEnumerator_1_t24030_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24030_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24030)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>
extern MethodInfo ICollection_1_get_Count_m267452_MethodInfo;
static PropertyInfo ICollection_1_t36014____Count_PropertyInfo = 
{
	&ICollection_1_t36014_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m267452_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m267453_MethodInfo;
static PropertyInfo ICollection_1_t36014____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36014_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m267453_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36014_PropertyInfos[] =
{
	&ICollection_1_t36014____Count_PropertyInfo,
	&ICollection_1_t36014____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::get_Count()
MethodInfo ICollection_1_get_Count_m267452_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36014_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m267453_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36014_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType XmlNodeType_t7016_0_0_0;
static ParameterInfo ICollection_1_t36014_ICollection_1_Add_m267454_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeType_t7016_0_0_0},
};
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::Add(T)
MethodInfo ICollection_1_Add_m267454_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36014_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36014_ICollection_1_Add_m267454_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::Clear()
MethodInfo ICollection_1_Clear_m267455_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36014_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType XmlNodeType_t7016_0_0_0;
static ParameterInfo ICollection_1_t36014_ICollection_1_Contains_m267456_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeType_t7016_0_0_0},
};
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::Contains(T)
MethodInfo ICollection_1_Contains_m267456_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36014_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36014_ICollection_1_Contains_m267456_ParameterInfos/* parameters */
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
extern Il2CppType XmlNodeTypeU5BU5D_t26817_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36014_ICollection_1_CopyTo_m267457_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeTypeU5BU5D_t26817_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m267457_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36014_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36014_ICollection_1_CopyTo_m267457_ParameterInfos/* parameters */
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
extern Il2CppType XmlNodeType_t7016_0_0_0;
static ParameterInfo ICollection_1_t36014_ICollection_1_Remove_m267458_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeType_t7016_0_0_0},
};
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Xml.XmlNodeType>::Remove(T)
MethodInfo ICollection_1_Remove_m267458_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36014_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36014_ICollection_1_Remove_m267458_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36014_MethodInfos[] =
{
	&ICollection_1_get_Count_m267452_MethodInfo,
	&ICollection_1_get_IsReadOnly_m267453_MethodInfo,
	&ICollection_1_Add_m267454_MethodInfo,
	&ICollection_1_Clear_m267455_MethodInfo,
	&ICollection_1_Contains_m267456_MethodInfo,
	&ICollection_1_CopyTo_m267457_MethodInfo,
	&ICollection_1_Remove_m267458_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36016_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36014_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36016_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36014_0_0_0;
extern Il2CppType ICollection_1_t36014_1_0_0;
struct ICollection_1_t36014;
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36014_GenericClass;
TypeInfo ICollection_1_t36014_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36014_MethodInfos/* methods */
	, ICollection_1_t36014_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36014_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36014_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36014_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36014_0_0_0/* byval_arg */
	, &ICollection_1_t36014_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36014_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36016_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNodeType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Xml.XmlNodeType>
extern TypeInfo IEnumerable_1_t36016_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28943_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Xml.XmlNodeType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m267459_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36016_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28943_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36016_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m267459_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36016_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36016_0_0_0;
extern Il2CppType IEnumerable_1_t36016_1_0_0;
struct IEnumerable_1_t36016;
extern TypeInfo IEnumerable_1_t36016_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36016_GenericClass;
TypeInfo IEnumerable_1_t36016_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36016_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36016_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36016_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36016_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36016_0_0_0/* byval_arg */
	, &IEnumerable_1_t36016_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36016_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t36015_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Xml.XmlNodeType>
extern MethodInfo IList_1_get_Item_m267460_MethodInfo;
extern MethodInfo IList_1_set_Item_m267461_MethodInfo;
static PropertyInfo IList_1_t36015____Item_PropertyInfo = 
{
	&IList_1_t36015_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m267460_MethodInfo/* get */
	, &IList_1_set_Item_m267461_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36015_PropertyInfos[] =
{
	&IList_1_t36015____Item_PropertyInfo,
	NULL
};
extern Il2CppType XmlNodeType_t7016_0_0_0;
static ParameterInfo IList_1_t36015_IList_1_IndexOf_m267462_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &XmlNodeType_t7016_0_0_0},
};
extern TypeInfo IList_1_t36015_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m267462_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36015_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36015_IList_1_IndexOf_m267462_ParameterInfos/* parameters */
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
extern Il2CppType XmlNodeType_t7016_0_0_0;
static ParameterInfo IList_1_t36015_IList_1_Insert_m267463_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &XmlNodeType_t7016_0_0_0},
};
extern TypeInfo IList_1_t36015_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m267463_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36015_IList_1_Insert_m267463_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36015_IList_1_RemoveAt_m267464_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36015_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m267464_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36015_IList_1_RemoveAt_m267464_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t36015_IList_1_get_Item_m267460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36015_il2cpp_TypeInfo;
extern Il2CppType XmlNodeType_t7016_0_0_0;
extern void* RuntimeInvoker_XmlNodeType_t7016_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m267460_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36015_il2cpp_TypeInfo/* declaring_type */
	, &XmlNodeType_t7016_0_0_0/* return_type */
	, RuntimeInvoker_XmlNodeType_t7016_Int32_t73/* invoker_method */
	, IList_1_t36015_IList_1_get_Item_m267460_ParameterInfos/* parameters */
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
extern Il2CppType XmlNodeType_t7016_0_0_0;
static ParameterInfo IList_1_t36015_IList_1_set_Item_m267461_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &XmlNodeType_t7016_0_0_0},
};
extern TypeInfo IList_1_t36015_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Xml.XmlNodeType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m267461_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36015_IList_1_set_Item_m267461_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36015_MethodInfos[] =
{
	&IList_1_IndexOf_m267462_MethodInfo,
	&IList_1_Insert_m267463_MethodInfo,
	&IList_1_RemoveAt_m267464_MethodInfo,
	&IList_1_get_Item_m267460_MethodInfo,
	&IList_1_set_Item_m267461_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36014_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36016_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36015_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36014_il2cpp_TypeInfo,
	&IEnumerable_1_t36016_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36015_0_0_0;
extern Il2CppType IList_1_t36015_1_0_0;
struct IList_1_t36015;
extern TypeInfo IList_1_t36015_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36015_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36015_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36015_MethodInfos/* methods */
	, IList_1_t36015_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36015_il2cpp_TypeInfo/* element_class */
	, IList_1_t36015_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36015_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36015_0_0_0/* byval_arg */
	, &IList_1_t36015_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36015_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28944_il2cpp_TypeInfo;

// System.Xml.XmlOutputMethod
#include "System_Xml_System_Xml_XmlOutputMethod.h"


// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlOutputMethod>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Xml.XmlOutputMethod>
extern MethodInfo IEnumerator_1_get_Current_m267465_MethodInfo;
static PropertyInfo IEnumerator_1_t28944____Current_PropertyInfo = 
{
	&IEnumerator_1_t28944_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m267465_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28944_PropertyInfos[] =
{
	&IEnumerator_1_t28944____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28944_il2cpp_TypeInfo;
extern Il2CppType XmlOutputMethod_t7018_0_0_0;
extern void* RuntimeInvoker_XmlOutputMethod_t7018 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Xml.XmlOutputMethod>::get_Current()
MethodInfo IEnumerator_1_get_Current_m267465_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28944_il2cpp_TypeInfo/* declaring_type */
	, &XmlOutputMethod_t7018_0_0_0/* return_type */
	, RuntimeInvoker_XmlOutputMethod_t7018/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28944_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m267465_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28944_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28944_0_0_0;
extern Il2CppType IEnumerator_1_t28944_1_0_0;
struct IEnumerator_1_t28944;
extern TypeInfo IEnumerator_1_t28944_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28944_GenericClass;
TypeInfo IEnumerator_1_t28944_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28944_MethodInfos/* methods */
	, IEnumerator_1_t28944_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28944_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28944_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28944_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28944_0_0_0/* byval_arg */
	, &IEnumerator_1_t28944_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28944_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
