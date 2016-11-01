#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_287.h"
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
extern TypeInfo DefaultComparer_t20507_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int64>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_287MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Int64_t1035_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8313_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo IComparable_t948_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_286MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo Comparer_1__ctor_m149491_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m208388_MethodInfo;
extern MethodInfo IComparable_CompareTo_m57234_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int64>::.ctor()
extern MethodInfo DefaultComparer__ctor_m149495_MethodInfo;
 void DefaultComparer__ctor_m149495 (DefaultComparer_t20507 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m149491(__this, /*hidden argument*/&Comparer_1__ctor_m149491_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int64>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m149496_MethodInfo;
 int32_t DefaultComparer_Compare_m149496 (DefaultComparer_t20507 * __this, int64_t ___x, int64_t ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		int64_t L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		int64_t L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &L_2);
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
		int64_t L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &L_4);
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
		int64_t L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t8313_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t8313_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(&IComparable_1_CompareTo_m208388_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t8313_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		int64_t L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		int64_t L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &L_13);
		int64_t L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &L_15);
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
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Int64>
extern TypeInfo DefaultComparer_t20507_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int64>::.ctor()
MethodInfo DefaultComparer__ctor_m149495_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m149495/* method */
	, &DefaultComparer_t20507_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Int64_t1035_0_0_0;
extern Il2CppType Int64_t1035_0_0_0;
static ParameterInfo DefaultComparer_t20507_DefaultComparer_Compare_m149496_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t1035_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Int64_t1035_0_0_0},
};
extern TypeInfo DefaultComparer_t20507_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int64_t1035_Int64_t1035 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int64>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m149496_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m149496/* method */
	, &DefaultComparer_t20507_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int64_t1035_Int64_t1035/* invoker_method */
	, DefaultComparer_t20507_DefaultComparer_Compare_m149496_ParameterInfos/* parameters */
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
static MethodInfo* DefaultComparer_t20507_MethodInfos[] =
{
	&DefaultComparer__ctor_m149495_MethodInfo,
	&DefaultComparer_Compare_m149496_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m149496_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m149493_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m149496_MethodInfo;
static MethodInfo* DefaultComparer_t20507_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&DefaultComparer_Compare_m149496_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m149493_MethodInfo,
	&DefaultComparer_Compare_m149496_MethodInfo,
};
extern TypeInfo IComparer_1_t8555_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DefaultComparer_t20507_InterfacesOffsets[] = 
{
	{ &IComparer_1_t8555_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t20507_0_0_0;
extern Il2CppType DefaultComparer_t20507_1_0_0;
extern TypeInfo Comparer_1_t20506_il2cpp_TypeInfo;
struct DefaultComparer_t20507;
extern TypeInfo DefaultComparer_t20507_il2cpp_TypeInfo;
extern Il2CppGenericClass DefaultComparer_t20507_GenericClass;
extern TypeInfo Comparer_1_t7839_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t20507_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t20507_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t20506_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t7839_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t20507_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t20507_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t20507_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t20507_0_0_0/* byval_arg */
	, &DefaultComparer_t20507_1_0_0/* this_arg */
	, DefaultComparer_t20507_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t20507_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t20507)/* instance_size */
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
// System.Comparison`1<System.Int64>
#include "mscorlib_System_Comparison_1_gen_300.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t20500_il2cpp_TypeInfo;
// System.Comparison`1<System.Int64>
#include "mscorlib_System_Comparison_1_gen_300MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Comparison`1<System.Int64>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Comparison_1__ctor_m149497_MethodInfo;
 void Comparison_1__ctor_m149497 (Comparison_1_t20500 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Int32 System.Comparison`1<System.Int64>::Invoke(T,T)
extern MethodInfo Comparison_1_Invoke_m149498_MethodInfo;
 int32_t Comparison_1_Invoke_m149498 (Comparison_1_t20500 * __this, int64_t ___x, int64_t ___y, MethodInfo* method){
	// runtime
	typedef  int32_t (*FunctionPointerType) (Object_t * __this, int64_t ___x, int64_t ___y, MethodInfo* method);
	if (__this->___prev)
		Comparison_1_Invoke_m149498((Comparison_1_t20500 *)__this->___prev,  ___x, ___y, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___x, ___y, (MethodInfo*)(__this->___method.___m_value));
}
// System.IAsyncResult System.Comparison`1<System.Int64>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern MethodInfo Comparison_1_BeginInvoke_m149499_MethodInfo;
 Object_t * Comparison_1_BeginInvoke_m149499 (Comparison_1_t20500 * __this, int64_t ___x, int64_t ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&Int64_t1035_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Int64>::EndInvoke(System.IAsyncResult)
extern MethodInfo Comparison_1_EndInvoke_m149500_MethodInfo;
 int32_t Comparison_1_EndInvoke_m149500 (Comparison_1_t20500 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Comparison`1<System.Int64>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo Comparison_1_t20500_Comparison_1__ctor_m149497_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo Comparison_1_t20500_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void System.Comparison`1<System.Int64>::.ctor(System.Object,System.IntPtr)
MethodInfo Comparison_1__ctor_m149497_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparison_1__ctor_m149497/* method */
	, &Comparison_1_t20500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, Comparison_1_t20500_Comparison_1__ctor_m149497_ParameterInfos/* parameters */
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
extern Il2CppType Int64_t1035_0_0_0;
extern Il2CppType Int64_t1035_0_0_0;
static ParameterInfo Comparison_1_t20500_Comparison_1_Invoke_m149498_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t1035_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Int64_t1035_0_0_0},
};
extern TypeInfo Comparison_1_t20500_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int64_t1035_Int64_t1035 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Comparison`1<System.Int64>::Invoke(T,T)
MethodInfo Comparison_1_Invoke_m149498_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Comparison_1_Invoke_m149498/* method */
	, &Comparison_1_t20500_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int64_t1035_Int64_t1035/* invoker_method */
	, Comparison_1_t20500_Comparison_1_Invoke_m149498_ParameterInfos/* parameters */
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
extern Il2CppType Int64_t1035_0_0_0;
extern Il2CppType Int64_t1035_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparison_1_t20500_Comparison_1_BeginInvoke_m149499_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t1035_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Int64_t1035_0_0_0},
	{"callback", 2, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 3, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Comparison_1_t20500_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Int64_t1035_Int64_t1035_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Comparison`1<System.Int64>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
MethodInfo Comparison_1_BeginInvoke_m149499_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Comparison_1_BeginInvoke_m149499/* method */
	, &Comparison_1_t20500_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int64_t1035_Int64_t1035_Object_t_Object_t/* invoker_method */
	, Comparison_1_t20500_Comparison_1_BeginInvoke_m149499_ParameterInfos/* parameters */
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
static ParameterInfo Comparison_1_t20500_Comparison_1_EndInvoke_m149500_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo Comparison_1_t20500_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Comparison`1<System.Int64>::EndInvoke(System.IAsyncResult)
MethodInfo Comparison_1_EndInvoke_m149500_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Comparison_1_EndInvoke_m149500/* method */
	, &Comparison_1_t20500_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, Comparison_1_t20500_Comparison_1_EndInvoke_m149500_ParameterInfos/* parameters */
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
static MethodInfo* Comparison_1_t20500_MethodInfos[] =
{
	&Comparison_1__ctor_m149497_MethodInfo,
	&Comparison_1_Invoke_m149498_MethodInfo,
	&Comparison_1_BeginInvoke_m149499_MethodInfo,
	&Comparison_1_EndInvoke_m149500_MethodInfo,
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
extern MethodInfo Comparison_1_Invoke_m149498_MethodInfo;
extern MethodInfo Comparison_1_BeginInvoke_m149499_MethodInfo;
extern MethodInfo Comparison_1_EndInvoke_m149500_MethodInfo;
static MethodInfo* Comparison_1_t20500_VTable[] =
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
	&Comparison_1_Invoke_m149498_MethodInfo,
	&Comparison_1_BeginInvoke_m149499_MethodInfo,
	&Comparison_1_EndInvoke_m149500_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Comparison_1_t20500_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparison_1_t20500_0_0_0;
extern Il2CppType Comparison_1_t20500_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct Comparison_1_t20500;
extern TypeInfo Comparison_1_t20500_il2cpp_TypeInfo;
extern Il2CppGenericClass Comparison_1_t20500_GenericClass;
TypeInfo Comparison_1_t20500_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparison`1"/* name */
	, "System"/* namespaze */
	, Comparison_1_t20500_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparison_1_t20500_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Comparison_1_t20500_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparison_1_t20500_il2cpp_TypeInfo/* cast_class */
	, &Comparison_1_t20500_0_0_0/* byval_arg */
	, &Comparison_1_t20500_1_0_0/* this_arg */
	, Comparison_1_t20500_InterfacesOffsets/* interface_offsets */
	, &Comparison_1_t20500_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparison_1_t20500)/* instance_size */
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
// Google.ProtocolBuffers.Collections.Lists`1<System.Int64>
#include "AssemblyU2DCSharp_Google_ProtocolBuffers_Collections_Lists_1_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Lists_1_t20508_il2cpp_TypeInfo;
// Google.ProtocolBuffers.Collections.Lists`1<System.Int64>
#include "AssemblyU2DCSharp_Google_ProtocolBuffers_Collections_Lists_1_5MethodDeclarations.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_287.h"
#include "mscorlib_ArrayTypes.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Lists_1_t20508_il2cpp_TypeInfo;
extern TypeInfo Int64U5BU5D_t6861_il2cpp_TypeInfo;
extern TypeInfo Int64_t1035_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t20498_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5687_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int64>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_287MethodDeclarations.h"
extern MethodInfo ReadOnlyCollection_1__ctor_m149410_MethodInfo;
extern MethodInfo ICollection_1_get_IsReadOnly_m241537_MethodInfo;


// System.Void Google.ProtocolBuffers.Collections.Lists`1<System.Int64>::.cctor()
extern MethodInfo Lists_1__cctor_m149501_MethodInfo;
 void Lists_1__cctor_m149501 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		ReadOnlyCollection_1_t20498 * L_0 = (ReadOnlyCollection_1_t20498 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ReadOnlyCollection_1_t20498_il2cpp_TypeInfo));
		ReadOnlyCollection_1__ctor_m149410(L_0, (Object_t*)(Object_t*)((Int64U5BU5D_t6861*)SZArrayNew(InitializedTypeInfo(&Int64U5BU5D_t6861_il2cpp_TypeInfo), 0)), /*hidden argument*/&ReadOnlyCollection_1__ctor_m149410_MethodInfo);
		((Lists_1_t20508_StaticFields*)InitializedTypeInfo(&Lists_1_t20508_il2cpp_TypeInfo)->static_fields)->___empty = L_0;
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> Google.ProtocolBuffers.Collections.Lists`1<System.Int64>::get_Empty()
extern MethodInfo Lists_1_get_Empty_m149502_MethodInfo;
 ReadOnlyCollection_1_t20498 * Lists_1_get_Empty_m149502 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Lists_1_t20508_il2cpp_TypeInfo));
		return (((Lists_1_t20508_StaticFields*)InitializedTypeInfo(&Lists_1_t20508_il2cpp_TypeInfo)->static_fields)->___empty);
	}
}
// System.Collections.Generic.IList`1<T> Google.ProtocolBuffers.Collections.Lists`1<System.Int64>::AsReadOnly(System.Collections.Generic.IList`1<T>)
extern MethodInfo Lists_1_AsReadOnly_m149503_MethodInfo;
 Object_t* Lists_1_AsReadOnly_m149503 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method){
	Object_t* V_0 = {0};
	Object_t* G_B3_0 = {0};
	{
		NullCheck(___list);
		bool L_0 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ICollection_1_get_IsReadOnly_m241537_MethodInfo, ___list);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ___list;
		G_B3_0 = V_0;
		goto IL_0019;
	}

IL_0013:
	{
		ReadOnlyCollection_1_t20498 * L_1 = (ReadOnlyCollection_1_t20498 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ReadOnlyCollection_1_t20498_il2cpp_TypeInfo));
		ReadOnlyCollection_1__ctor_m149410(L_1, ___list, /*hidden argument*/&ReadOnlyCollection_1__ctor_m149410_MethodInfo);
		G_B3_0 = ((Object_t*)(L_1));
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// Metadata Definition Google.ProtocolBuffers.Collections.Lists`1<System.Int64>
extern Il2CppType ReadOnlyCollection_1_t20498_0_0_49;
FieldInfo Lists_1_t20508____empty_FieldInfo = 
{
	"empty"/* name */
	, &ReadOnlyCollection_1_t20498_0_0_49/* type */
	, &Lists_1_t20508_il2cpp_TypeInfo/* parent */
	, offsetof(Lists_1_t20508_StaticFields, ___empty)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Lists_1_t20508_FieldInfos[] =
{
	&Lists_1_t20508____empty_FieldInfo,
	NULL
};
extern MethodInfo Lists_1_get_Empty_m149502_MethodInfo;
static PropertyInfo Lists_1_t20508____Empty_PropertyInfo = 
{
	&Lists_1_t20508_il2cpp_TypeInfo/* parent */
	, "Empty"/* name */
	, &Lists_1_get_Empty_m149502_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Lists_1_t20508_PropertyInfos[] =
{
	&Lists_1_t20508____Empty_PropertyInfo,
	NULL
};
extern TypeInfo Lists_1_t20508_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Google.ProtocolBuffers.Collections.Lists`1<System.Int64>::.cctor()
MethodInfo Lists_1__cctor_m149501_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Lists_1__cctor_m149501/* method */
	, &Lists_1_t20508_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo Lists_1_t20508_il2cpp_TypeInfo;
extern Il2CppType ReadOnlyCollection_1_t20498_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> Google.ProtocolBuffers.Collections.Lists`1<System.Int64>::get_Empty()
MethodInfo Lists_1_get_Empty_m149502_MethodInfo = 
{
	"get_Empty"/* name */
	, (methodPointerType)&Lists_1_get_Empty_m149502/* method */
	, &Lists_1_t20508_il2cpp_TypeInfo/* declaring_type */
	, &ReadOnlyCollection_1_t20498_0_0_0/* return_type */
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
extern Il2CppType IList_1_t3200_0_0_0;
static ParameterInfo Lists_1_t20508_Lists_1_AsReadOnly_m149503_ParameterInfos[] = 
{
	{"list", 0, 134217728, &EmptyCustomAttributesCache, &IList_1_t3200_0_0_0},
};
extern TypeInfo Lists_1_t20508_il2cpp_TypeInfo;
extern Il2CppType IList_1_t3200_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IList`1<T> Google.ProtocolBuffers.Collections.Lists`1<System.Int64>::AsReadOnly(System.Collections.Generic.IList`1<T>)
MethodInfo Lists_1_AsReadOnly_m149503_MethodInfo = 
{
	"AsReadOnly"/* name */
	, (methodPointerType)&Lists_1_AsReadOnly_m149503/* method */
	, &Lists_1_t20508_il2cpp_TypeInfo/* declaring_type */
	, &IList_1_t3200_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Lists_1_t20508_Lists_1_AsReadOnly_m149503_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* Lists_1_t20508_MethodInfos[] =
{
	&Lists_1__cctor_m149501_MethodInfo,
	&Lists_1_get_Empty_m149502_MethodInfo,
	&Lists_1_AsReadOnly_m149503_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* Lists_1_t20508_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType Lists_1_t20508_0_0_0;
extern Il2CppType Lists_1_t20508_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Lists_1_t20508;
extern TypeInfo Lists_1_t20508_il2cpp_TypeInfo;
extern Il2CppGenericClass Lists_1_t20508_GenericClass;
TypeInfo Lists_1_t20508_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "Lists`1"/* name */
	, "Google.ProtocolBuffers.Collections"/* namespaze */
	, Lists_1_t20508_MethodInfos/* methods */
	, Lists_1_t20508_PropertyInfos/* properties */
	, Lists_1_t20508_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Lists_1_t20508_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Lists_1_t20508_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Lists_1_t20508_il2cpp_TypeInfo/* cast_class */
	, &Lists_1_t20508_0_0_0/* byval_arg */
	, &Lists_1_t20508_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &Lists_1_t20508_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Lists_1_t20508)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Lists_1_t20508_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048961/* flags */
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
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t28191_il2cpp_TypeInfo;

// GC_DAILYLUCKYDRAW_FAIL/FAILTYPE
#include "AssemblyU2DCSharp_GC_DAILYLUCKYDRAW_FAIL_FAILTYPE.h"


// T System.Collections.Generic.IEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>
extern MethodInfo IEnumerator_1_get_Current_m255016_MethodInfo;
static PropertyInfo IEnumerator_1_t28191____Current_PropertyInfo = 
{
	&IEnumerator_1_t28191_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255016_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28191_PropertyInfos[] =
{
	&IEnumerator_1_t28191____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28191_il2cpp_TypeInfo;
extern Il2CppType FAILTYPE_t3211_0_0_0;
extern void* RuntimeInvoker_FAILTYPE_t3211 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255016_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28191_il2cpp_TypeInfo/* declaring_type */
	, &FAILTYPE_t3211_0_0_0/* return_type */
	, RuntimeInvoker_FAILTYPE_t3211/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28191_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255016_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28191_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28191_0_0_0;
extern Il2CppType IEnumerator_1_t28191_1_0_0;
struct IEnumerator_1_t28191;
extern TypeInfo IEnumerator_1_t28191_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28191_GenericClass;
TypeInfo IEnumerator_1_t28191_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28191_MethodInfos/* methods */
	, IEnumerator_1_t28191_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28191_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28191_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28191_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28191_0_0_0/* byval_arg */
	, &IEnumerator_1_t28191_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28191_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1865.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1865MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo;
extern TypeInfo FAILTYPE_t3211_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m149509_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFAILTYPE_t3211_m208393_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFAILTYPE_t3211_m208393 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisFAILTYPE_t3211_m208393_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149504_MethodInfo;
 void InternalEnumerator_1__ctor_m149504 (InternalEnumerator_1_t20509 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149505_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149505 (InternalEnumerator_1_t20509 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149506_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149506 (InternalEnumerator_1_t20509 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149509(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149509_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FAILTYPE_t3211_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149507_MethodInfo;
 void InternalEnumerator_1_Dispose_m149507 (InternalEnumerator_1_t20509 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149508_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149508 (InternalEnumerator_1_t20509 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149509_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149509 (InternalEnumerator_1_t20509 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFAILTYPE_t3211_m208393(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFAILTYPE_t3211_m208393_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20509____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20509, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20509____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20509, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20509_FieldInfos[] =
{
	&InternalEnumerator_1_t20509____array_FieldInfo,
	&InternalEnumerator_1_t20509____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149506_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20509____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20509_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149506_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149509_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20509____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20509_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149509_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20509_PropertyInfos[] =
{
	&InternalEnumerator_1_t20509____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20509____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20509_InternalEnumerator_1__ctor_m149504_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149504_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149504/* method */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20509_InternalEnumerator_1__ctor_m149504_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149505_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149505/* method */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149506_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149506/* method */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149507_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149507/* method */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149508_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149508/* method */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo;
extern Il2CppType FAILTYPE_t3211_0_0_0;
extern void* RuntimeInvoker_FAILTYPE_t3211 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149509_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149509/* method */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* declaring_type */
	, &FAILTYPE_t3211_0_0_0/* return_type */
	, RuntimeInvoker_FAILTYPE_t3211/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20509_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149504_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149505_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149506_MethodInfo,
	&InternalEnumerator_1_Dispose_m149507_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149508_MethodInfo,
	&InternalEnumerator_1_get_Current_m149509_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149506_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149508_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149505_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149507_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149509_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20509_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149506_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149508_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149505_MethodInfo,
	&InternalEnumerator_1_Dispose_m149507_MethodInfo,
	&InternalEnumerator_1_get_Current_m149509_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28191_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20509_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28191_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28191_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20509_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28191_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20509_0_0_0;
extern Il2CppType InternalEnumerator_1_t20509_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20509_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20509_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20509_MethodInfos/* methods */
	, InternalEnumerator_1_t20509_PropertyInfos/* properties */
	, InternalEnumerator_1_t20509_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20509_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20509_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20509_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20509_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20509_1_0_0/* this_arg */
	, InternalEnumerator_1_t20509_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20509_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20509)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;

#include "Assembly-CSharp_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>
extern MethodInfo ICollection_1_get_Count_m255017_MethodInfo;
static PropertyInfo ICollection_1_t33778____Count_PropertyInfo = 
{
	&ICollection_1_t33778_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255017_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255018_MethodInfo;
static PropertyInfo ICollection_1_t33778____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33778_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255018_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33778_PropertyInfos[] =
{
	&ICollection_1_t33778____Count_PropertyInfo,
	&ICollection_1_t33778____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m255017_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33778_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255018_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33778_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType FAILTYPE_t3211_0_0_0;
static ParameterInfo ICollection_1_t33778_ICollection_1_Add_m255019_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FAILTYPE_t3211_0_0_0},
};
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Add(T)
MethodInfo ICollection_1_Add_m255019_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33778_ICollection_1_Add_m255019_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Clear()
MethodInfo ICollection_1_Clear_m255020_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33778_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType FAILTYPE_t3211_0_0_0;
static ParameterInfo ICollection_1_t33778_ICollection_1_Contains_m255021_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FAILTYPE_t3211_0_0_0},
};
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m255021_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33778_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33778_ICollection_1_Contains_m255021_ParameterInfos/* parameters */
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
extern Il2CppType FAILTYPEU5BU5D_t26168_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33778_ICollection_1_CopyTo_m255022_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FAILTYPEU5BU5D_t26168_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255022_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33778_ICollection_1_CopyTo_m255022_ParameterInfos/* parameters */
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
extern Il2CppType FAILTYPE_t3211_0_0_0;
static ParameterInfo ICollection_1_t33778_ICollection_1_Remove_m255023_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FAILTYPE_t3211_0_0_0},
};
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m255023_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33778_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33778_ICollection_1_Remove_m255023_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33778_MethodInfos[] =
{
	&ICollection_1_get_Count_m255017_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255018_MethodInfo,
	&ICollection_1_Add_m255019_MethodInfo,
	&ICollection_1_Clear_m255020_MethodInfo,
	&ICollection_1_Contains_m255021_MethodInfo,
	&ICollection_1_CopyTo_m255022_MethodInfo,
	&ICollection_1_Remove_m255023_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33780_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33778_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33780_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33778_0_0_0;
extern Il2CppType ICollection_1_t33778_1_0_0;
struct ICollection_1_t33778;
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33778_GenericClass;
TypeInfo ICollection_1_t33778_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33778_MethodInfos/* methods */
	, ICollection_1_t33778_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33778_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33778_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33778_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33778_0_0_0/* byval_arg */
	, &ICollection_1_t33778_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33778_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33780_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>
extern TypeInfo IEnumerable_1_t33780_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28191_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255024_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33780_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28191_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33780_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255024_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33780_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33780_0_0_0;
extern Il2CppType IEnumerable_1_t33780_1_0_0;
struct IEnumerable_1_t33780;
extern TypeInfo IEnumerable_1_t33780_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33780_GenericClass;
TypeInfo IEnumerable_1_t33780_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33780_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33780_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33780_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33780_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33780_0_0_0/* byval_arg */
	, &IEnumerable_1_t33780_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33780_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33779_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>
extern MethodInfo IList_1_get_Item_m255025_MethodInfo;
extern MethodInfo IList_1_set_Item_m255026_MethodInfo;
static PropertyInfo IList_1_t33779____Item_PropertyInfo = 
{
	&IList_1_t33779_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255025_MethodInfo/* get */
	, &IList_1_set_Item_m255026_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33779_PropertyInfos[] =
{
	&IList_1_t33779____Item_PropertyInfo,
	NULL
};
extern Il2CppType FAILTYPE_t3211_0_0_0;
static ParameterInfo IList_1_t33779_IList_1_IndexOf_m255027_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FAILTYPE_t3211_0_0_0},
};
extern TypeInfo IList_1_t33779_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255027_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33779_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33779_IList_1_IndexOf_m255027_ParameterInfos/* parameters */
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
extern Il2CppType FAILTYPE_t3211_0_0_0;
static ParameterInfo IList_1_t33779_IList_1_Insert_m255028_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FAILTYPE_t3211_0_0_0},
};
extern TypeInfo IList_1_t33779_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255028_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33779_IList_1_Insert_m255028_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33779_IList_1_RemoveAt_m255029_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33779_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255029_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33779_IList_1_RemoveAt_m255029_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33779_IList_1_get_Item_m255025_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33779_il2cpp_TypeInfo;
extern Il2CppType FAILTYPE_t3211_0_0_0;
extern void* RuntimeInvoker_FAILTYPE_t3211_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255025_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33779_il2cpp_TypeInfo/* declaring_type */
	, &FAILTYPE_t3211_0_0_0/* return_type */
	, RuntimeInvoker_FAILTYPE_t3211_Int32_t73/* invoker_method */
	, IList_1_t33779_IList_1_get_Item_m255025_ParameterInfos/* parameters */
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
extern Il2CppType FAILTYPE_t3211_0_0_0;
static ParameterInfo IList_1_t33779_IList_1_set_Item_m255026_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FAILTYPE_t3211_0_0_0},
};
extern TypeInfo IList_1_t33779_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_DAILYLUCKYDRAW_FAIL/FAILTYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255026_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33779_IList_1_set_Item_m255026_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33779_MethodInfos[] =
{
	&IList_1_IndexOf_m255027_MethodInfo,
	&IList_1_Insert_m255028_MethodInfo,
	&IList_1_RemoveAt_m255029_MethodInfo,
	&IList_1_get_Item_m255025_MethodInfo,
	&IList_1_set_Item_m255026_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33778_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33780_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33779_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33778_il2cpp_TypeInfo,
	&IEnumerable_1_t33780_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33779_0_0_0;
extern Il2CppType IList_1_t33779_1_0_0;
struct IList_1_t33779;
extern TypeInfo IList_1_t33779_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33779_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33779_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33779_MethodInfos/* methods */
	, IList_1_t33779_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33779_il2cpp_TypeInfo/* element_class */
	, IList_1_t33779_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33779_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33779_0_0_0/* byval_arg */
	, &IList_1_t33779_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33779_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28192_il2cpp_TypeInfo;

// CG_BUY_FASHION/BUYTYPE
#include "AssemblyU2DCSharp_CG_BUY_FASHION_BUYTYPE.h"


// T System.Collections.Generic.IEnumerator`1<CG_BUY_FASHION/BUYTYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<CG_BUY_FASHION/BUYTYPE>
extern MethodInfo IEnumerator_1_get_Current_m255030_MethodInfo;
static PropertyInfo IEnumerator_1_t28192____Current_PropertyInfo = 
{
	&IEnumerator_1_t28192_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255030_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28192_PropertyInfos[] =
{
	&IEnumerator_1_t28192____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28192_il2cpp_TypeInfo;
extern Il2CppType BUYTYPE_t3219_0_0_0;
extern void* RuntimeInvoker_BUYTYPE_t3219 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<CG_BUY_FASHION/BUYTYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255030_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28192_il2cpp_TypeInfo/* declaring_type */
	, &BUYTYPE_t3219_0_0_0/* return_type */
	, RuntimeInvoker_BUYTYPE_t3219/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28192_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255030_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28192_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28192_0_0_0;
extern Il2CppType IEnumerator_1_t28192_1_0_0;
struct IEnumerator_1_t28192;
extern TypeInfo IEnumerator_1_t28192_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28192_GenericClass;
TypeInfo IEnumerator_1_t28192_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28192_MethodInfos/* methods */
	, IEnumerator_1_t28192_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28192_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28192_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28192_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28192_0_0_0/* byval_arg */
	, &IEnumerator_1_t28192_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28192_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1866.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1866MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo;
extern TypeInfo BUYTYPE_t3219_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149515_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBUYTYPE_t3219_m208404_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<CG_BUY_FASHION/BUYTYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<CG_BUY_FASHION/BUYTYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisBUYTYPE_t3219_m208404 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisBUYTYPE_t3219_m208404_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149510_MethodInfo;
 void InternalEnumerator_1__ctor_m149510 (InternalEnumerator_1_t20510 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149511_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149511 (InternalEnumerator_1_t20510 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149512_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149512 (InternalEnumerator_1_t20510 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149515(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149515_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&BUYTYPE_t3219_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149513_MethodInfo;
 void InternalEnumerator_1_Dispose_m149513 (InternalEnumerator_1_t20510 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149514_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149514 (InternalEnumerator_1_t20510 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149515_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149515 (InternalEnumerator_1_t20510 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisBUYTYPE_t3219_m208404(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisBUYTYPE_t3219_m208404_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20510____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20510, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20510____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20510, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20510_FieldInfos[] =
{
	&InternalEnumerator_1_t20510____array_FieldInfo,
	&InternalEnumerator_1_t20510____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149512_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20510____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20510_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149512_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149515_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20510____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20510_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149515_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20510_PropertyInfos[] =
{
	&InternalEnumerator_1_t20510____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20510____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20510_InternalEnumerator_1__ctor_m149510_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149510_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149510/* method */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20510_InternalEnumerator_1__ctor_m149510_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149511_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149511/* method */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149512_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149512/* method */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149513_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149513/* method */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149514_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149514/* method */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo;
extern Il2CppType BUYTYPE_t3219_0_0_0;
extern void* RuntimeInvoker_BUYTYPE_t3219 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<CG_BUY_FASHION/BUYTYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149515_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149515/* method */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* declaring_type */
	, &BUYTYPE_t3219_0_0_0/* return_type */
	, RuntimeInvoker_BUYTYPE_t3219/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20510_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149510_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149511_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149512_MethodInfo,
	&InternalEnumerator_1_Dispose_m149513_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149514_MethodInfo,
	&InternalEnumerator_1_get_Current_m149515_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149512_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149514_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149511_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149513_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149515_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20510_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149512_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149514_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149511_MethodInfo,
	&InternalEnumerator_1_Dispose_m149513_MethodInfo,
	&InternalEnumerator_1_get_Current_m149515_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28192_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20510_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28192_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28192_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20510_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28192_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20510_0_0_0;
extern Il2CppType InternalEnumerator_1_t20510_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20510_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20510_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20510_MethodInfos/* methods */
	, InternalEnumerator_1_t20510_PropertyInfos/* properties */
	, InternalEnumerator_1_t20510_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20510_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20510_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20510_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20510_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20510_1_0_0/* this_arg */
	, InternalEnumerator_1_t20510_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20510_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20510)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>
extern MethodInfo ICollection_1_get_Count_m255031_MethodInfo;
static PropertyInfo ICollection_1_t33781____Count_PropertyInfo = 
{
	&ICollection_1_t33781_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255031_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255032_MethodInfo;
static PropertyInfo ICollection_1_t33781____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33781_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255032_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33781_PropertyInfos[] =
{
	&ICollection_1_t33781____Count_PropertyInfo,
	&ICollection_1_t33781____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m255031_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33781_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255032_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33781_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType BUYTYPE_t3219_0_0_0;
static ParameterInfo ICollection_1_t33781_ICollection_1_Add_m255033_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BUYTYPE_t3219_0_0_0},
};
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::Add(T)
MethodInfo ICollection_1_Add_m255033_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33781_ICollection_1_Add_m255033_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::Clear()
MethodInfo ICollection_1_Clear_m255034_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33781_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType BUYTYPE_t3219_0_0_0;
static ParameterInfo ICollection_1_t33781_ICollection_1_Contains_m255035_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BUYTYPE_t3219_0_0_0},
};
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m255035_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33781_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33781_ICollection_1_Contains_m255035_ParameterInfos/* parameters */
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
extern Il2CppType BUYTYPEU5BU5D_t26169_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33781_ICollection_1_CopyTo_m255036_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BUYTYPEU5BU5D_t26169_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255036_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33781_ICollection_1_CopyTo_m255036_ParameterInfos/* parameters */
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
extern Il2CppType BUYTYPE_t3219_0_0_0;
static ParameterInfo ICollection_1_t33781_ICollection_1_Remove_m255037_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BUYTYPE_t3219_0_0_0},
};
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_FASHION/BUYTYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m255037_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33781_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33781_ICollection_1_Remove_m255037_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33781_MethodInfos[] =
{
	&ICollection_1_get_Count_m255031_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255032_MethodInfo,
	&ICollection_1_Add_m255033_MethodInfo,
	&ICollection_1_Clear_m255034_MethodInfo,
	&ICollection_1_Contains_m255035_MethodInfo,
	&ICollection_1_CopyTo_m255036_MethodInfo,
	&ICollection_1_Remove_m255037_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33783_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33781_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33783_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33781_0_0_0;
extern Il2CppType ICollection_1_t33781_1_0_0;
struct ICollection_1_t33781;
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33781_GenericClass;
TypeInfo ICollection_1_t33781_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33781_MethodInfos/* methods */
	, ICollection_1_t33781_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33781_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33781_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33781_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33781_0_0_0/* byval_arg */
	, &ICollection_1_t33781_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33781_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33783_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_BUY_FASHION/BUYTYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<CG_BUY_FASHION/BUYTYPE>
extern TypeInfo IEnumerable_1_t33783_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28192_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_BUY_FASHION/BUYTYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255038_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33783_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28192_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33783_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255038_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33783_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33783_0_0_0;
extern Il2CppType IEnumerable_1_t33783_1_0_0;
struct IEnumerable_1_t33783;
extern TypeInfo IEnumerable_1_t33783_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33783_GenericClass;
TypeInfo IEnumerable_1_t33783_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33783_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33783_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33783_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33783_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33783_0_0_0/* byval_arg */
	, &IEnumerable_1_t33783_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33783_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33782_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>
extern MethodInfo IList_1_get_Item_m255039_MethodInfo;
extern MethodInfo IList_1_set_Item_m255040_MethodInfo;
static PropertyInfo IList_1_t33782____Item_PropertyInfo = 
{
	&IList_1_t33782_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255039_MethodInfo/* get */
	, &IList_1_set_Item_m255040_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33782_PropertyInfos[] =
{
	&IList_1_t33782____Item_PropertyInfo,
	NULL
};
extern Il2CppType BUYTYPE_t3219_0_0_0;
static ParameterInfo IList_1_t33782_IList_1_IndexOf_m255041_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BUYTYPE_t3219_0_0_0},
};
extern TypeInfo IList_1_t33782_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255041_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33782_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33782_IList_1_IndexOf_m255041_ParameterInfos/* parameters */
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
extern Il2CppType BUYTYPE_t3219_0_0_0;
static ParameterInfo IList_1_t33782_IList_1_Insert_m255042_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BUYTYPE_t3219_0_0_0},
};
extern TypeInfo IList_1_t33782_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255042_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33782_IList_1_Insert_m255042_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33782_IList_1_RemoveAt_m255043_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33782_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255043_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33782_IList_1_RemoveAt_m255043_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33782_IList_1_get_Item_m255039_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33782_il2cpp_TypeInfo;
extern Il2CppType BUYTYPE_t3219_0_0_0;
extern void* RuntimeInvoker_BUYTYPE_t3219_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255039_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33782_il2cpp_TypeInfo/* declaring_type */
	, &BUYTYPE_t3219_0_0_0/* return_type */
	, RuntimeInvoker_BUYTYPE_t3219_Int32_t73/* invoker_method */
	, IList_1_t33782_IList_1_get_Item_m255039_ParameterInfos/* parameters */
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
extern Il2CppType BUYTYPE_t3219_0_0_0;
static ParameterInfo IList_1_t33782_IList_1_set_Item_m255040_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BUYTYPE_t3219_0_0_0},
};
extern TypeInfo IList_1_t33782_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_BUY_FASHION/BUYTYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255040_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33782_IList_1_set_Item_m255040_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33782_MethodInfos[] =
{
	&IList_1_IndexOf_m255041_MethodInfo,
	&IList_1_Insert_m255042_MethodInfo,
	&IList_1_RemoveAt_m255043_MethodInfo,
	&IList_1_get_Item_m255039_MethodInfo,
	&IList_1_set_Item_m255040_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33781_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33783_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33782_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33781_il2cpp_TypeInfo,
	&IEnumerable_1_t33783_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33782_0_0_0;
extern Il2CppType IList_1_t33782_1_0_0;
struct IList_1_t33782;
extern TypeInfo IList_1_t33782_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33782_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33782_MethodInfos/* methods */
	, IList_1_t33782_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33782_il2cpp_TypeInfo/* element_class */
	, IList_1_t33782_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33782_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33782_0_0_0/* byval_arg */
	, &IList_1_t33782_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33782_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28193_il2cpp_TypeInfo;

// GC_RET_AUTOTEAM/RESULTTYPE
#include "AssemblyU2DCSharp_GC_RET_AUTOTEAM_RESULTTYPE.h"


// T System.Collections.Generic.IEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>
extern MethodInfo IEnumerator_1_get_Current_m255044_MethodInfo;
static PropertyInfo IEnumerator_1_t28193____Current_PropertyInfo = 
{
	&IEnumerator_1_t28193_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255044_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28193_PropertyInfos[] =
{
	&IEnumerator_1_t28193____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28193_il2cpp_TypeInfo;
extern Il2CppType RESULTTYPE_t3229_0_0_0;
extern void* RuntimeInvoker_RESULTTYPE_t3229 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255044_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28193_il2cpp_TypeInfo/* declaring_type */
	, &RESULTTYPE_t3229_0_0_0/* return_type */
	, RuntimeInvoker_RESULTTYPE_t3229/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28193_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255044_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28193_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28193_0_0_0;
extern Il2CppType IEnumerator_1_t28193_1_0_0;
struct IEnumerator_1_t28193;
extern TypeInfo IEnumerator_1_t28193_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28193_GenericClass;
TypeInfo IEnumerator_1_t28193_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28193_MethodInfos/* methods */
	, IEnumerator_1_t28193_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28193_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28193_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28193_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28193_0_0_0/* byval_arg */
	, &IEnumerator_1_t28193_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28193_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1867.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1867MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo;
extern TypeInfo RESULTTYPE_t3229_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149521_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRESULTTYPE_t3229_m208415_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_RET_AUTOTEAM/RESULTTYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_RET_AUTOTEAM/RESULTTYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisRESULTTYPE_t3229_m208415 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisRESULTTYPE_t3229_m208415_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149516_MethodInfo;
 void InternalEnumerator_1__ctor_m149516 (InternalEnumerator_1_t20511 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149517_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149517 (InternalEnumerator_1_t20511 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149518_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149518 (InternalEnumerator_1_t20511 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149521(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149521_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&RESULTTYPE_t3229_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149519_MethodInfo;
 void InternalEnumerator_1_Dispose_m149519 (InternalEnumerator_1_t20511 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149520_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149520 (InternalEnumerator_1_t20511 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149521_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149521 (InternalEnumerator_1_t20511 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisRESULTTYPE_t3229_m208415(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisRESULTTYPE_t3229_m208415_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20511____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20511, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20511____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20511, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20511_FieldInfos[] =
{
	&InternalEnumerator_1_t20511____array_FieldInfo,
	&InternalEnumerator_1_t20511____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149518_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20511____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20511_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149518_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149521_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20511____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20511_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149521_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20511_PropertyInfos[] =
{
	&InternalEnumerator_1_t20511____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20511____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20511_InternalEnumerator_1__ctor_m149516_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149516_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149516/* method */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20511_InternalEnumerator_1__ctor_m149516_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149517_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149517/* method */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149518_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149518/* method */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149519_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149519/* method */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149520_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149520/* method */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo;
extern Il2CppType RESULTTYPE_t3229_0_0_0;
extern void* RuntimeInvoker_RESULTTYPE_t3229 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149521_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149521/* method */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* declaring_type */
	, &RESULTTYPE_t3229_0_0_0/* return_type */
	, RuntimeInvoker_RESULTTYPE_t3229/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20511_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149516_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149517_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149518_MethodInfo,
	&InternalEnumerator_1_Dispose_m149519_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149520_MethodInfo,
	&InternalEnumerator_1_get_Current_m149521_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149518_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149520_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149517_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149519_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149521_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20511_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149518_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149520_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149517_MethodInfo,
	&InternalEnumerator_1_Dispose_m149519_MethodInfo,
	&InternalEnumerator_1_get_Current_m149521_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28193_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20511_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28193_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28193_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20511_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28193_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20511_0_0_0;
extern Il2CppType InternalEnumerator_1_t20511_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20511_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20511_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20511_MethodInfos/* methods */
	, InternalEnumerator_1_t20511_PropertyInfos/* properties */
	, InternalEnumerator_1_t20511_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20511_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20511_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20511_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20511_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20511_1_0_0/* this_arg */
	, InternalEnumerator_1_t20511_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20511_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20511)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>
extern MethodInfo ICollection_1_get_Count_m255045_MethodInfo;
static PropertyInfo ICollection_1_t33784____Count_PropertyInfo = 
{
	&ICollection_1_t33784_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255045_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255046_MethodInfo;
static PropertyInfo ICollection_1_t33784____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33784_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255046_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33784_PropertyInfos[] =
{
	&ICollection_1_t33784____Count_PropertyInfo,
	&ICollection_1_t33784____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m255045_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33784_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255046_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33784_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RESULTTYPE_t3229_0_0_0;
static ParameterInfo ICollection_1_t33784_ICollection_1_Add_m255047_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RESULTTYPE_t3229_0_0_0},
};
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::Add(T)
MethodInfo ICollection_1_Add_m255047_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33784_ICollection_1_Add_m255047_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::Clear()
MethodInfo ICollection_1_Clear_m255048_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33784_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RESULTTYPE_t3229_0_0_0;
static ParameterInfo ICollection_1_t33784_ICollection_1_Contains_m255049_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RESULTTYPE_t3229_0_0_0},
};
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m255049_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33784_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33784_ICollection_1_Contains_m255049_ParameterInfos/* parameters */
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
extern Il2CppType RESULTTYPEU5BU5D_t26170_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33784_ICollection_1_CopyTo_m255050_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RESULTTYPEU5BU5D_t26170_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255050_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33784_ICollection_1_CopyTo_m255050_ParameterInfos/* parameters */
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
extern Il2CppType RESULTTYPE_t3229_0_0_0;
static ParameterInfo ICollection_1_t33784_ICollection_1_Remove_m255051_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RESULTTYPE_t3229_0_0_0},
};
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_AUTOTEAM/RESULTTYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m255051_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33784_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33784_ICollection_1_Remove_m255051_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33784_MethodInfos[] =
{
	&ICollection_1_get_Count_m255045_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255046_MethodInfo,
	&ICollection_1_Add_m255047_MethodInfo,
	&ICollection_1_Clear_m255048_MethodInfo,
	&ICollection_1_Contains_m255049_MethodInfo,
	&ICollection_1_CopyTo_m255050_MethodInfo,
	&ICollection_1_Remove_m255051_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33786_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33784_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33786_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33784_0_0_0;
extern Il2CppType ICollection_1_t33784_1_0_0;
struct ICollection_1_t33784;
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33784_GenericClass;
TypeInfo ICollection_1_t33784_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33784_MethodInfos/* methods */
	, ICollection_1_t33784_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33784_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33784_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33784_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33784_0_0_0/* byval_arg */
	, &ICollection_1_t33784_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33784_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33786_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_RET_AUTOTEAM/RESULTTYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_RET_AUTOTEAM/RESULTTYPE>
extern TypeInfo IEnumerable_1_t33786_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28193_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_RET_AUTOTEAM/RESULTTYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255052_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33786_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28193_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33786_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255052_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33786_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33786_0_0_0;
extern Il2CppType IEnumerable_1_t33786_1_0_0;
struct IEnumerable_1_t33786;
extern TypeInfo IEnumerable_1_t33786_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33786_GenericClass;
TypeInfo IEnumerable_1_t33786_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33786_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33786_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33786_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33786_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33786_0_0_0/* byval_arg */
	, &IEnumerable_1_t33786_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33786_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33785_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>
extern MethodInfo IList_1_get_Item_m255053_MethodInfo;
extern MethodInfo IList_1_set_Item_m255054_MethodInfo;
static PropertyInfo IList_1_t33785____Item_PropertyInfo = 
{
	&IList_1_t33785_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255053_MethodInfo/* get */
	, &IList_1_set_Item_m255054_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33785_PropertyInfos[] =
{
	&IList_1_t33785____Item_PropertyInfo,
	NULL
};
extern Il2CppType RESULTTYPE_t3229_0_0_0;
static ParameterInfo IList_1_t33785_IList_1_IndexOf_m255055_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RESULTTYPE_t3229_0_0_0},
};
extern TypeInfo IList_1_t33785_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255055_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33785_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33785_IList_1_IndexOf_m255055_ParameterInfos/* parameters */
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
extern Il2CppType RESULTTYPE_t3229_0_0_0;
static ParameterInfo IList_1_t33785_IList_1_Insert_m255056_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RESULTTYPE_t3229_0_0_0},
};
extern TypeInfo IList_1_t33785_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255056_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33785_IList_1_Insert_m255056_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33785_IList_1_RemoveAt_m255057_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33785_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255057_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33785_IList_1_RemoveAt_m255057_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33785_IList_1_get_Item_m255053_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33785_il2cpp_TypeInfo;
extern Il2CppType RESULTTYPE_t3229_0_0_0;
extern void* RuntimeInvoker_RESULTTYPE_t3229_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255053_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33785_il2cpp_TypeInfo/* declaring_type */
	, &RESULTTYPE_t3229_0_0_0/* return_type */
	, RuntimeInvoker_RESULTTYPE_t3229_Int32_t73/* invoker_method */
	, IList_1_t33785_IList_1_get_Item_m255053_ParameterInfos/* parameters */
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
extern Il2CppType RESULTTYPE_t3229_0_0_0;
static ParameterInfo IList_1_t33785_IList_1_set_Item_m255054_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RESULTTYPE_t3229_0_0_0},
};
extern TypeInfo IList_1_t33785_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_AUTOTEAM/RESULTTYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255054_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33785_IList_1_set_Item_m255054_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33785_MethodInfos[] =
{
	&IList_1_IndexOf_m255055_MethodInfo,
	&IList_1_Insert_m255056_MethodInfo,
	&IList_1_RemoveAt_m255057_MethodInfo,
	&IList_1_get_Item_m255053_MethodInfo,
	&IList_1_set_Item_m255054_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33784_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33786_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33785_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33784_il2cpp_TypeInfo,
	&IEnumerable_1_t33786_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33785_0_0_0;
extern Il2CppType IList_1_t33785_1_0_0;
struct IList_1_t33785;
extern TypeInfo IList_1_t33785_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33785_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33785_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33785_MethodInfos/* methods */
	, IList_1_t33785_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33785_il2cpp_TypeInfo/* element_class */
	, IList_1_t33785_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33785_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33785_0_0_0/* byval_arg */
	, &IList_1_t33785_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33785_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28194_il2cpp_TypeInfo;

// CG_BUY_YUANBAOGOODS/DEADLINE_TYPE
#include "AssemblyU2DCSharp_CG_BUY_YUANBAOGOODS_DEADLINE_TYPE.h"


// T System.Collections.Generic.IEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m255058_MethodInfo;
static PropertyInfo IEnumerator_1_t28194____Current_PropertyInfo = 
{
	&IEnumerator_1_t28194_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255058_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28194_PropertyInfos[] =
{
	&IEnumerator_1_t28194____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28194_il2cpp_TypeInfo;
extern Il2CppType DEADLINE_TYPE_t3256_0_0_0;
extern void* RuntimeInvoker_DEADLINE_TYPE_t3256 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255058_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28194_il2cpp_TypeInfo/* declaring_type */
	, &DEADLINE_TYPE_t3256_0_0_0/* return_type */
	, RuntimeInvoker_DEADLINE_TYPE_t3256/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28194_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255058_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28194_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28194_0_0_0;
extern Il2CppType IEnumerator_1_t28194_1_0_0;
struct IEnumerator_1_t28194;
extern TypeInfo IEnumerator_1_t28194_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28194_GenericClass;
TypeInfo IEnumerator_1_t28194_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28194_MethodInfos/* methods */
	, IEnumerator_1_t28194_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28194_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28194_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28194_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28194_0_0_0/* byval_arg */
	, &IEnumerator_1_t28194_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28194_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1868.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1868MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo;
extern TypeInfo DEADLINE_TYPE_t3256_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149527_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDEADLINE_TYPE_t3256_m208426_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDEADLINE_TYPE_t3256_m208426 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisDEADLINE_TYPE_t3256_m208426_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149522_MethodInfo;
 void InternalEnumerator_1__ctor_m149522 (InternalEnumerator_1_t20512 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149523_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149523 (InternalEnumerator_1_t20512 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149524_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149524 (InternalEnumerator_1_t20512 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149527(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149527_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DEADLINE_TYPE_t3256_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149525_MethodInfo;
 void InternalEnumerator_1_Dispose_m149525 (InternalEnumerator_1_t20512 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149526_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149526 (InternalEnumerator_1_t20512 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149527_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149527 (InternalEnumerator_1_t20512 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDEADLINE_TYPE_t3256_m208426(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDEADLINE_TYPE_t3256_m208426_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20512____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20512, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20512____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20512, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20512_FieldInfos[] =
{
	&InternalEnumerator_1_t20512____array_FieldInfo,
	&InternalEnumerator_1_t20512____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149524_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20512____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20512_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149524_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149527_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20512____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20512_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149527_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20512_PropertyInfos[] =
{
	&InternalEnumerator_1_t20512____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20512____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20512_InternalEnumerator_1__ctor_m149522_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149522_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149522/* method */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20512_InternalEnumerator_1__ctor_m149522_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149523_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149523/* method */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149524_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149524/* method */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149525_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149525/* method */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149526_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149526/* method */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo;
extern Il2CppType DEADLINE_TYPE_t3256_0_0_0;
extern void* RuntimeInvoker_DEADLINE_TYPE_t3256 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149527_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149527/* method */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* declaring_type */
	, &DEADLINE_TYPE_t3256_0_0_0/* return_type */
	, RuntimeInvoker_DEADLINE_TYPE_t3256/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20512_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149522_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149523_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149524_MethodInfo,
	&InternalEnumerator_1_Dispose_m149525_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149526_MethodInfo,
	&InternalEnumerator_1_get_Current_m149527_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149524_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149526_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149523_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149525_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149527_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20512_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149524_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149526_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149523_MethodInfo,
	&InternalEnumerator_1_Dispose_m149525_MethodInfo,
	&InternalEnumerator_1_get_Current_m149527_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28194_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20512_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28194_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28194_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20512_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28194_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20512_0_0_0;
extern Il2CppType InternalEnumerator_1_t20512_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20512_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20512_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20512_MethodInfos/* methods */
	, InternalEnumerator_1_t20512_PropertyInfos/* properties */
	, InternalEnumerator_1_t20512_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20512_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20512_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20512_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20512_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20512_1_0_0/* this_arg */
	, InternalEnumerator_1_t20512_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20512_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20512)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>
extern MethodInfo ICollection_1_get_Count_m255059_MethodInfo;
static PropertyInfo ICollection_1_t33787____Count_PropertyInfo = 
{
	&ICollection_1_t33787_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255059_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255060_MethodInfo;
static PropertyInfo ICollection_1_t33787____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33787_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255060_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33787_PropertyInfos[] =
{
	&ICollection_1_t33787____Count_PropertyInfo,
	&ICollection_1_t33787____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m255059_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33787_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255060_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33787_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DEADLINE_TYPE_t3256_0_0_0;
static ParameterInfo ICollection_1_t33787_ICollection_1_Add_m255061_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DEADLINE_TYPE_t3256_0_0_0},
};
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m255061_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33787_ICollection_1_Add_m255061_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m255062_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33787_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DEADLINE_TYPE_t3256_0_0_0;
static ParameterInfo ICollection_1_t33787_ICollection_1_Contains_m255063_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DEADLINE_TYPE_t3256_0_0_0},
};
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m255063_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33787_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33787_ICollection_1_Contains_m255063_ParameterInfos/* parameters */
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
extern Il2CppType DEADLINE_TYPEU5BU5D_t26171_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33787_ICollection_1_CopyTo_m255064_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DEADLINE_TYPEU5BU5D_t26171_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255064_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33787_ICollection_1_CopyTo_m255064_ParameterInfos/* parameters */
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
extern Il2CppType DEADLINE_TYPE_t3256_0_0_0;
static ParameterInfo ICollection_1_t33787_ICollection_1_Remove_m255065_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DEADLINE_TYPE_t3256_0_0_0},
};
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m255065_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33787_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33787_ICollection_1_Remove_m255065_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33787_MethodInfos[] =
{
	&ICollection_1_get_Count_m255059_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255060_MethodInfo,
	&ICollection_1_Add_m255061_MethodInfo,
	&ICollection_1_Clear_m255062_MethodInfo,
	&ICollection_1_Contains_m255063_MethodInfo,
	&ICollection_1_CopyTo_m255064_MethodInfo,
	&ICollection_1_Remove_m255065_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33789_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33787_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33789_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33787_0_0_0;
extern Il2CppType ICollection_1_t33787_1_0_0;
struct ICollection_1_t33787;
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33787_GenericClass;
TypeInfo ICollection_1_t33787_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33787_MethodInfos/* methods */
	, ICollection_1_t33787_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33787_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33787_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33787_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33787_0_0_0/* byval_arg */
	, &ICollection_1_t33787_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33787_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33789_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>
extern TypeInfo IEnumerable_1_t33789_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28194_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255066_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33789_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28194_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33789_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255066_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33789_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33789_0_0_0;
extern Il2CppType IEnumerable_1_t33789_1_0_0;
struct IEnumerable_1_t33789;
extern TypeInfo IEnumerable_1_t33789_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33789_GenericClass;
TypeInfo IEnumerable_1_t33789_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33789_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33789_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33789_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33789_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33789_0_0_0/* byval_arg */
	, &IEnumerable_1_t33789_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33789_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33788_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>
extern MethodInfo IList_1_get_Item_m255067_MethodInfo;
extern MethodInfo IList_1_set_Item_m255068_MethodInfo;
static PropertyInfo IList_1_t33788____Item_PropertyInfo = 
{
	&IList_1_t33788_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255067_MethodInfo/* get */
	, &IList_1_set_Item_m255068_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33788_PropertyInfos[] =
{
	&IList_1_t33788____Item_PropertyInfo,
	NULL
};
extern Il2CppType DEADLINE_TYPE_t3256_0_0_0;
static ParameterInfo IList_1_t33788_IList_1_IndexOf_m255069_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DEADLINE_TYPE_t3256_0_0_0},
};
extern TypeInfo IList_1_t33788_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255069_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33788_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33788_IList_1_IndexOf_m255069_ParameterInfos/* parameters */
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
extern Il2CppType DEADLINE_TYPE_t3256_0_0_0;
static ParameterInfo IList_1_t33788_IList_1_Insert_m255070_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DEADLINE_TYPE_t3256_0_0_0},
};
extern TypeInfo IList_1_t33788_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255070_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33788_IList_1_Insert_m255070_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33788_IList_1_RemoveAt_m255071_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33788_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255071_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33788_IList_1_RemoveAt_m255071_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33788_IList_1_get_Item_m255067_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33788_il2cpp_TypeInfo;
extern Il2CppType DEADLINE_TYPE_t3256_0_0_0;
extern void* RuntimeInvoker_DEADLINE_TYPE_t3256_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255067_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33788_il2cpp_TypeInfo/* declaring_type */
	, &DEADLINE_TYPE_t3256_0_0_0/* return_type */
	, RuntimeInvoker_DEADLINE_TYPE_t3256_Int32_t73/* invoker_method */
	, IList_1_t33788_IList_1_get_Item_m255067_ParameterInfos/* parameters */
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
extern Il2CppType DEADLINE_TYPE_t3256_0_0_0;
static ParameterInfo IList_1_t33788_IList_1_set_Item_m255068_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DEADLINE_TYPE_t3256_0_0_0},
};
extern TypeInfo IList_1_t33788_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_BUY_YUANBAOGOODS/DEADLINE_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255068_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33788_IList_1_set_Item_m255068_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33788_MethodInfos[] =
{
	&IList_1_IndexOf_m255069_MethodInfo,
	&IList_1_Insert_m255070_MethodInfo,
	&IList_1_RemoveAt_m255071_MethodInfo,
	&IList_1_get_Item_m255067_MethodInfo,
	&IList_1_set_Item_m255068_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33787_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33789_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33788_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33787_il2cpp_TypeInfo,
	&IEnumerable_1_t33789_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33788_0_0_0;
extern Il2CppType IList_1_t33788_1_0_0;
struct IList_1_t33788;
extern TypeInfo IList_1_t33788_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33788_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33788_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33788_MethodInfos/* methods */
	, IList_1_t33788_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33788_il2cpp_TypeInfo/* element_class */
	, IList_1_t33788_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33788_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33788_0_0_0/* byval_arg */
	, &IList_1_t33788_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33788_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28195_il2cpp_TypeInfo;

// GC_ASK_STARTGUILDWAR/MESSAGETYPE
#include "AssemblyU2DCSharp_GC_ASK_STARTGUILDWAR_MESSAGETYPE.h"


// T System.Collections.Generic.IEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>
extern MethodInfo IEnumerator_1_get_Current_m255072_MethodInfo;
static PropertyInfo IEnumerator_1_t28195____Current_PropertyInfo = 
{
	&IEnumerator_1_t28195_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255072_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28195_PropertyInfos[] =
{
	&IEnumerator_1_t28195____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28195_il2cpp_TypeInfo;
extern Il2CppType MESSAGETYPE_t3301_0_0_0;
extern void* RuntimeInvoker_MESSAGETYPE_t3301 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255072_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28195_il2cpp_TypeInfo/* declaring_type */
	, &MESSAGETYPE_t3301_0_0_0/* return_type */
	, RuntimeInvoker_MESSAGETYPE_t3301/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28195_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255072_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28195_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28195_0_0_0;
extern Il2CppType IEnumerator_1_t28195_1_0_0;
struct IEnumerator_1_t28195;
extern TypeInfo IEnumerator_1_t28195_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28195_GenericClass;
TypeInfo IEnumerator_1_t28195_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28195_MethodInfos/* methods */
	, IEnumerator_1_t28195_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28195_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28195_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28195_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28195_0_0_0/* byval_arg */
	, &IEnumerator_1_t28195_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28195_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1869.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1869MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo;
extern TypeInfo MESSAGETYPE_t3301_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149533_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMESSAGETYPE_t3301_m208437_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_ASK_STARTGUILDWAR/MESSAGETYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_ASK_STARTGUILDWAR/MESSAGETYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMESSAGETYPE_t3301_m208437 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMESSAGETYPE_t3301_m208437_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149528_MethodInfo;
 void InternalEnumerator_1__ctor_m149528 (InternalEnumerator_1_t20513 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149529_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149529 (InternalEnumerator_1_t20513 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149530_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149530 (InternalEnumerator_1_t20513 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149533(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149533_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MESSAGETYPE_t3301_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149531_MethodInfo;
 void InternalEnumerator_1_Dispose_m149531 (InternalEnumerator_1_t20513 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149532_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149532 (InternalEnumerator_1_t20513 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149533_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149533 (InternalEnumerator_1_t20513 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMESSAGETYPE_t3301_m208437(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMESSAGETYPE_t3301_m208437_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20513____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20513, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20513____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20513, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20513_FieldInfos[] =
{
	&InternalEnumerator_1_t20513____array_FieldInfo,
	&InternalEnumerator_1_t20513____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149530_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20513____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20513_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149530_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149533_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20513____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20513_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149533_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20513_PropertyInfos[] =
{
	&InternalEnumerator_1_t20513____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20513____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20513_InternalEnumerator_1__ctor_m149528_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149528_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149528/* method */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20513_InternalEnumerator_1__ctor_m149528_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149529_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149529/* method */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149530_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149530/* method */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149531_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149531/* method */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149532_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149532/* method */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo;
extern Il2CppType MESSAGETYPE_t3301_0_0_0;
extern void* RuntimeInvoker_MESSAGETYPE_t3301 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149533_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149533/* method */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* declaring_type */
	, &MESSAGETYPE_t3301_0_0_0/* return_type */
	, RuntimeInvoker_MESSAGETYPE_t3301/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20513_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149528_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149529_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149530_MethodInfo,
	&InternalEnumerator_1_Dispose_m149531_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149532_MethodInfo,
	&InternalEnumerator_1_get_Current_m149533_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149530_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149532_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149529_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149531_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149533_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20513_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149530_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149532_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149529_MethodInfo,
	&InternalEnumerator_1_Dispose_m149531_MethodInfo,
	&InternalEnumerator_1_get_Current_m149533_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28195_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20513_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28195_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28195_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20513_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28195_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20513_0_0_0;
extern Il2CppType InternalEnumerator_1_t20513_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20513_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20513_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20513_MethodInfos/* methods */
	, InternalEnumerator_1_t20513_PropertyInfos/* properties */
	, InternalEnumerator_1_t20513_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20513_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20513_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20513_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20513_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20513_1_0_0/* this_arg */
	, InternalEnumerator_1_t20513_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20513_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20513)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>
extern MethodInfo ICollection_1_get_Count_m255073_MethodInfo;
static PropertyInfo ICollection_1_t33790____Count_PropertyInfo = 
{
	&ICollection_1_t33790_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255073_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255074_MethodInfo;
static PropertyInfo ICollection_1_t33790____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33790_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255074_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33790_PropertyInfos[] =
{
	&ICollection_1_t33790____Count_PropertyInfo,
	&ICollection_1_t33790____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m255073_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33790_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255074_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33790_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MESSAGETYPE_t3301_0_0_0;
static ParameterInfo ICollection_1_t33790_ICollection_1_Add_m255075_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGETYPE_t3301_0_0_0},
};
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Add(T)
MethodInfo ICollection_1_Add_m255075_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33790_ICollection_1_Add_m255075_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Clear()
MethodInfo ICollection_1_Clear_m255076_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33790_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MESSAGETYPE_t3301_0_0_0;
static ParameterInfo ICollection_1_t33790_ICollection_1_Contains_m255077_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGETYPE_t3301_0_0_0},
};
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m255077_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33790_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33790_ICollection_1_Contains_m255077_ParameterInfos/* parameters */
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
extern Il2CppType MESSAGETYPEU5BU5D_t26172_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33790_ICollection_1_CopyTo_m255078_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGETYPEU5BU5D_t26172_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255078_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33790_ICollection_1_CopyTo_m255078_ParameterInfos/* parameters */
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
extern Il2CppType MESSAGETYPE_t3301_0_0_0;
static ParameterInfo ICollection_1_t33790_ICollection_1_Remove_m255079_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGETYPE_t3301_0_0_0},
};
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m255079_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33790_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33790_ICollection_1_Remove_m255079_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33790_MethodInfos[] =
{
	&ICollection_1_get_Count_m255073_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255074_MethodInfo,
	&ICollection_1_Add_m255075_MethodInfo,
	&ICollection_1_Clear_m255076_MethodInfo,
	&ICollection_1_Contains_m255077_MethodInfo,
	&ICollection_1_CopyTo_m255078_MethodInfo,
	&ICollection_1_Remove_m255079_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33792_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33790_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33792_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33790_0_0_0;
extern Il2CppType ICollection_1_t33790_1_0_0;
struct ICollection_1_t33790;
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33790_GenericClass;
TypeInfo ICollection_1_t33790_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33790_MethodInfos/* methods */
	, ICollection_1_t33790_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33790_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33790_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33790_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33790_0_0_0/* byval_arg */
	, &ICollection_1_t33790_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33790_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33792_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>
extern TypeInfo IEnumerable_1_t33792_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28195_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255080_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33792_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28195_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33792_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255080_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33792_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33792_0_0_0;
extern Il2CppType IEnumerable_1_t33792_1_0_0;
struct IEnumerable_1_t33792;
extern TypeInfo IEnumerable_1_t33792_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33792_GenericClass;
TypeInfo IEnumerable_1_t33792_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33792_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33792_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33792_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33792_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33792_0_0_0/* byval_arg */
	, &IEnumerable_1_t33792_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33792_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33791_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>
extern MethodInfo IList_1_get_Item_m255081_MethodInfo;
extern MethodInfo IList_1_set_Item_m255082_MethodInfo;
static PropertyInfo IList_1_t33791____Item_PropertyInfo = 
{
	&IList_1_t33791_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255081_MethodInfo/* get */
	, &IList_1_set_Item_m255082_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33791_PropertyInfos[] =
{
	&IList_1_t33791____Item_PropertyInfo,
	NULL
};
extern Il2CppType MESSAGETYPE_t3301_0_0_0;
static ParameterInfo IList_1_t33791_IList_1_IndexOf_m255083_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MESSAGETYPE_t3301_0_0_0},
};
extern TypeInfo IList_1_t33791_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255083_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33791_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33791_IList_1_IndexOf_m255083_ParameterInfos/* parameters */
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
extern Il2CppType MESSAGETYPE_t3301_0_0_0;
static ParameterInfo IList_1_t33791_IList_1_Insert_m255084_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MESSAGETYPE_t3301_0_0_0},
};
extern TypeInfo IList_1_t33791_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255084_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33791_IList_1_Insert_m255084_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33791_IList_1_RemoveAt_m255085_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33791_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255085_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33791_IList_1_RemoveAt_m255085_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33791_IList_1_get_Item_m255081_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33791_il2cpp_TypeInfo;
extern Il2CppType MESSAGETYPE_t3301_0_0_0;
extern void* RuntimeInvoker_MESSAGETYPE_t3301_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255081_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33791_il2cpp_TypeInfo/* declaring_type */
	, &MESSAGETYPE_t3301_0_0_0/* return_type */
	, RuntimeInvoker_MESSAGETYPE_t3301_Int32_t73/* invoker_method */
	, IList_1_t33791_IList_1_get_Item_m255081_ParameterInfos/* parameters */
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
extern Il2CppType MESSAGETYPE_t3301_0_0_0;
static ParameterInfo IList_1_t33791_IList_1_set_Item_m255082_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MESSAGETYPE_t3301_0_0_0},
};
extern TypeInfo IList_1_t33791_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_ASK_STARTGUILDWAR/MESSAGETYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255082_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33791_IList_1_set_Item_m255082_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33791_MethodInfos[] =
{
	&IList_1_IndexOf_m255083_MethodInfo,
	&IList_1_Insert_m255084_MethodInfo,
	&IList_1_RemoveAt_m255085_MethodInfo,
	&IList_1_get_Item_m255081_MethodInfo,
	&IList_1_set_Item_m255082_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33790_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33792_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33791_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33790_il2cpp_TypeInfo,
	&IEnumerable_1_t33792_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33791_0_0_0;
extern Il2CppType IList_1_t33791_1_0_0;
struct IList_1_t33791;
extern TypeInfo IList_1_t33791_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33791_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33791_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33791_MethodInfos/* methods */
	, IList_1_t33791_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33791_il2cpp_TypeInfo/* element_class */
	, IList_1_t33791_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33791_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33791_0_0_0/* byval_arg */
	, &IList_1_t33791_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33791_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28196_il2cpp_TypeInfo;

// GC_RET_FINALGUILDWARGROUPINFO/WINTYPE
#include "AssemblyU2DCSharp_GC_RET_FINALGUILDWARGROUPINFO_WINTYPE.h"


// T System.Collections.Generic.IEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>
extern MethodInfo IEnumerator_1_get_Current_m255086_MethodInfo;
static PropertyInfo IEnumerator_1_t28196____Current_PropertyInfo = 
{
	&IEnumerator_1_t28196_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255086_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28196_PropertyInfos[] =
{
	&IEnumerator_1_t28196____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28196_il2cpp_TypeInfo;
extern Il2CppType WINTYPE_t3312_0_0_0;
extern void* RuntimeInvoker_WINTYPE_t3312 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255086_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28196_il2cpp_TypeInfo/* declaring_type */
	, &WINTYPE_t3312_0_0_0/* return_type */
	, RuntimeInvoker_WINTYPE_t3312/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28196_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255086_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28196_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28196_0_0_0;
extern Il2CppType IEnumerator_1_t28196_1_0_0;
struct IEnumerator_1_t28196;
extern TypeInfo IEnumerator_1_t28196_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28196_GenericClass;
TypeInfo IEnumerator_1_t28196_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28196_MethodInfos/* methods */
	, IEnumerator_1_t28196_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28196_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28196_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28196_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28196_0_0_0/* byval_arg */
	, &IEnumerator_1_t28196_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28196_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1870.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1870MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo;
extern TypeInfo WINTYPE_t3312_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149539_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWINTYPE_t3312_m208448_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWINTYPE_t3312_m208448 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisWINTYPE_t3312_m208448_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149534_MethodInfo;
 void InternalEnumerator_1__ctor_m149534 (InternalEnumerator_1_t20514 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149535_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149535 (InternalEnumerator_1_t20514 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149536_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149536 (InternalEnumerator_1_t20514 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149539(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149539_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&WINTYPE_t3312_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149537_MethodInfo;
 void InternalEnumerator_1_Dispose_m149537 (InternalEnumerator_1_t20514 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149538_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149538 (InternalEnumerator_1_t20514 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149539_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149539 (InternalEnumerator_1_t20514 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWINTYPE_t3312_m208448(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWINTYPE_t3312_m208448_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20514____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20514, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20514____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20514, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20514_FieldInfos[] =
{
	&InternalEnumerator_1_t20514____array_FieldInfo,
	&InternalEnumerator_1_t20514____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149536_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20514____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20514_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149536_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149539_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20514____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20514_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149539_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20514_PropertyInfos[] =
{
	&InternalEnumerator_1_t20514____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20514____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20514_InternalEnumerator_1__ctor_m149534_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149534_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149534/* method */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20514_InternalEnumerator_1__ctor_m149534_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149535_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149535/* method */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149536_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149536/* method */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149537_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149537/* method */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149538_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149538/* method */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo;
extern Il2CppType WINTYPE_t3312_0_0_0;
extern void* RuntimeInvoker_WINTYPE_t3312 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149539_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149539/* method */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* declaring_type */
	, &WINTYPE_t3312_0_0_0/* return_type */
	, RuntimeInvoker_WINTYPE_t3312/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20514_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149534_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149535_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149536_MethodInfo,
	&InternalEnumerator_1_Dispose_m149537_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149538_MethodInfo,
	&InternalEnumerator_1_get_Current_m149539_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149536_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149538_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149535_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149537_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149539_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20514_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149536_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149538_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149535_MethodInfo,
	&InternalEnumerator_1_Dispose_m149537_MethodInfo,
	&InternalEnumerator_1_get_Current_m149539_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28196_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20514_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28196_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28196_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20514_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28196_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20514_0_0_0;
extern Il2CppType InternalEnumerator_1_t20514_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20514_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20514_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20514_MethodInfos/* methods */
	, InternalEnumerator_1_t20514_PropertyInfos/* properties */
	, InternalEnumerator_1_t20514_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20514_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20514_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20514_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20514_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20514_1_0_0/* this_arg */
	, InternalEnumerator_1_t20514_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20514_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20514)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>
extern MethodInfo ICollection_1_get_Count_m255087_MethodInfo;
static PropertyInfo ICollection_1_t33793____Count_PropertyInfo = 
{
	&ICollection_1_t33793_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255087_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255088_MethodInfo;
static PropertyInfo ICollection_1_t33793____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33793_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255088_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33793_PropertyInfos[] =
{
	&ICollection_1_t33793____Count_PropertyInfo,
	&ICollection_1_t33793____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m255087_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33793_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255088_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33793_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WINTYPE_t3312_0_0_0;
static ParameterInfo ICollection_1_t33793_ICollection_1_Add_m255089_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WINTYPE_t3312_0_0_0},
};
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Add(T)
MethodInfo ICollection_1_Add_m255089_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33793_ICollection_1_Add_m255089_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Clear()
MethodInfo ICollection_1_Clear_m255090_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33793_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WINTYPE_t3312_0_0_0;
static ParameterInfo ICollection_1_t33793_ICollection_1_Contains_m255091_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WINTYPE_t3312_0_0_0},
};
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m255091_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33793_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33793_ICollection_1_Contains_m255091_ParameterInfos/* parameters */
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
extern Il2CppType WINTYPEU5BU5D_t26173_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33793_ICollection_1_CopyTo_m255092_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WINTYPEU5BU5D_t26173_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255092_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33793_ICollection_1_CopyTo_m255092_ParameterInfos/* parameters */
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
extern Il2CppType WINTYPE_t3312_0_0_0;
static ParameterInfo ICollection_1_t33793_ICollection_1_Remove_m255093_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WINTYPE_t3312_0_0_0},
};
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m255093_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33793_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33793_ICollection_1_Remove_m255093_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33793_MethodInfos[] =
{
	&ICollection_1_get_Count_m255087_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255088_MethodInfo,
	&ICollection_1_Add_m255089_MethodInfo,
	&ICollection_1_Clear_m255090_MethodInfo,
	&ICollection_1_Contains_m255091_MethodInfo,
	&ICollection_1_CopyTo_m255092_MethodInfo,
	&ICollection_1_Remove_m255093_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33795_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33793_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33795_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33793_0_0_0;
extern Il2CppType ICollection_1_t33793_1_0_0;
struct ICollection_1_t33793;
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33793_GenericClass;
TypeInfo ICollection_1_t33793_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33793_MethodInfos/* methods */
	, ICollection_1_t33793_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33793_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33793_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33793_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33793_0_0_0/* byval_arg */
	, &ICollection_1_t33793_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33793_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33795_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>
extern TypeInfo IEnumerable_1_t33795_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28196_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255094_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33795_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28196_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33795_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255094_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33795_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33795_0_0_0;
extern Il2CppType IEnumerable_1_t33795_1_0_0;
struct IEnumerable_1_t33795;
extern TypeInfo IEnumerable_1_t33795_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33795_GenericClass;
TypeInfo IEnumerable_1_t33795_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33795_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33795_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33795_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33795_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33795_0_0_0/* byval_arg */
	, &IEnumerable_1_t33795_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33795_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33794_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>
extern MethodInfo IList_1_get_Item_m255095_MethodInfo;
extern MethodInfo IList_1_set_Item_m255096_MethodInfo;
static PropertyInfo IList_1_t33794____Item_PropertyInfo = 
{
	&IList_1_t33794_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255095_MethodInfo/* get */
	, &IList_1_set_Item_m255096_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33794_PropertyInfos[] =
{
	&IList_1_t33794____Item_PropertyInfo,
	NULL
};
extern Il2CppType WINTYPE_t3312_0_0_0;
static ParameterInfo IList_1_t33794_IList_1_IndexOf_m255097_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WINTYPE_t3312_0_0_0},
};
extern TypeInfo IList_1_t33794_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255097_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33794_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33794_IList_1_IndexOf_m255097_ParameterInfos/* parameters */
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
extern Il2CppType WINTYPE_t3312_0_0_0;
static ParameterInfo IList_1_t33794_IList_1_Insert_m255098_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &WINTYPE_t3312_0_0_0},
};
extern TypeInfo IList_1_t33794_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255098_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33794_IList_1_Insert_m255098_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33794_IList_1_RemoveAt_m255099_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33794_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255099_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33794_IList_1_RemoveAt_m255099_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33794_IList_1_get_Item_m255095_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33794_il2cpp_TypeInfo;
extern Il2CppType WINTYPE_t3312_0_0_0;
extern void* RuntimeInvoker_WINTYPE_t3312_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255095_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33794_il2cpp_TypeInfo/* declaring_type */
	, &WINTYPE_t3312_0_0_0/* return_type */
	, RuntimeInvoker_WINTYPE_t3312_Int32_t73/* invoker_method */
	, IList_1_t33794_IList_1_get_Item_m255095_ParameterInfos/* parameters */
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
extern Il2CppType WINTYPE_t3312_0_0_0;
static ParameterInfo IList_1_t33794_IList_1_set_Item_m255096_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &WINTYPE_t3312_0_0_0},
};
extern TypeInfo IList_1_t33794_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_FINALGUILDWARGROUPINFO/WINTYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255096_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33794_IList_1_set_Item_m255096_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33794_MethodInfos[] =
{
	&IList_1_IndexOf_m255097_MethodInfo,
	&IList_1_Insert_m255098_MethodInfo,
	&IList_1_RemoveAt_m255099_MethodInfo,
	&IList_1_get_Item_m255095_MethodInfo,
	&IList_1_set_Item_m255096_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33793_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33795_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33794_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33793_il2cpp_TypeInfo,
	&IEnumerable_1_t33795_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33794_0_0_0;
extern Il2CppType IList_1_t33794_1_0_0;
struct IList_1_t33794;
extern TypeInfo IList_1_t33794_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33794_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33794_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33794_MethodInfos/* methods */
	, IList_1_t33794_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33794_il2cpp_TypeInfo/* element_class */
	, IList_1_t33794_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33794_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33794_0_0_0/* byval_arg */
	, &IList_1_t33794_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33794_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28197_il2cpp_TypeInfo;

// GC_LOGIN_QUEUE_STATUS/QUEUESTATUS
#include "AssemblyU2DCSharp_GC_LOGIN_QUEUE_STATUS_QUEUESTATUS.h"


// T System.Collections.Generic.IEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>
extern MethodInfo IEnumerator_1_get_Current_m255100_MethodInfo;
static PropertyInfo IEnumerator_1_t28197____Current_PropertyInfo = 
{
	&IEnumerator_1_t28197_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255100_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28197_PropertyInfos[] =
{
	&IEnumerator_1_t28197____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28197_il2cpp_TypeInfo;
extern Il2CppType QUEUESTATUS_t3314_0_0_0;
extern void* RuntimeInvoker_QUEUESTATUS_t3314 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255100_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28197_il2cpp_TypeInfo/* declaring_type */
	, &QUEUESTATUS_t3314_0_0_0/* return_type */
	, RuntimeInvoker_QUEUESTATUS_t3314/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28197_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255100_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28197_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28197_0_0_0;
extern Il2CppType IEnumerator_1_t28197_1_0_0;
struct IEnumerator_1_t28197;
extern TypeInfo IEnumerator_1_t28197_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28197_GenericClass;
TypeInfo IEnumerator_1_t28197_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28197_MethodInfos/* methods */
	, IEnumerator_1_t28197_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28197_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28197_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28197_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28197_0_0_0/* byval_arg */
	, &IEnumerator_1_t28197_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28197_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1871.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1871MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo;
extern TypeInfo QUEUESTATUS_t3314_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149545_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisQUEUESTATUS_t3314_m208459_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisQUEUESTATUS_t3314_m208459 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisQUEUESTATUS_t3314_m208459_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149540_MethodInfo;
 void InternalEnumerator_1__ctor_m149540 (InternalEnumerator_1_t20515 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149541_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149541 (InternalEnumerator_1_t20515 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149542_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149542 (InternalEnumerator_1_t20515 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149545(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149545_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&QUEUESTATUS_t3314_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149543_MethodInfo;
 void InternalEnumerator_1_Dispose_m149543 (InternalEnumerator_1_t20515 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149544_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149544 (InternalEnumerator_1_t20515 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149545_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149545 (InternalEnumerator_1_t20515 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisQUEUESTATUS_t3314_m208459(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisQUEUESTATUS_t3314_m208459_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20515____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20515, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20515____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20515, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20515_FieldInfos[] =
{
	&InternalEnumerator_1_t20515____array_FieldInfo,
	&InternalEnumerator_1_t20515____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149542_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20515____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20515_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149542_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149545_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20515____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20515_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149545_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20515_PropertyInfos[] =
{
	&InternalEnumerator_1_t20515____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20515____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20515_InternalEnumerator_1__ctor_m149540_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149540_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149540/* method */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20515_InternalEnumerator_1__ctor_m149540_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149541_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149541/* method */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149542_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149542/* method */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149543_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149543/* method */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149544_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149544/* method */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo;
extern Il2CppType QUEUESTATUS_t3314_0_0_0;
extern void* RuntimeInvoker_QUEUESTATUS_t3314 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149545_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149545/* method */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* declaring_type */
	, &QUEUESTATUS_t3314_0_0_0/* return_type */
	, RuntimeInvoker_QUEUESTATUS_t3314/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20515_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149540_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149541_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149542_MethodInfo,
	&InternalEnumerator_1_Dispose_m149543_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149544_MethodInfo,
	&InternalEnumerator_1_get_Current_m149545_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149542_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149544_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149541_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149543_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149545_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20515_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149542_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149544_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149541_MethodInfo,
	&InternalEnumerator_1_Dispose_m149543_MethodInfo,
	&InternalEnumerator_1_get_Current_m149545_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28197_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20515_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28197_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28197_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20515_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28197_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20515_0_0_0;
extern Il2CppType InternalEnumerator_1_t20515_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20515_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20515_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20515_MethodInfos/* methods */
	, InternalEnumerator_1_t20515_PropertyInfos/* properties */
	, InternalEnumerator_1_t20515_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20515_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20515_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20515_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20515_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20515_1_0_0/* this_arg */
	, InternalEnumerator_1_t20515_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20515_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20515)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>
extern MethodInfo ICollection_1_get_Count_m255101_MethodInfo;
static PropertyInfo ICollection_1_t33796____Count_PropertyInfo = 
{
	&ICollection_1_t33796_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255101_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255102_MethodInfo;
static PropertyInfo ICollection_1_t33796____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33796_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255102_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33796_PropertyInfos[] =
{
	&ICollection_1_t33796____Count_PropertyInfo,
	&ICollection_1_t33796____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_Count()
MethodInfo ICollection_1_get_Count_m255101_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33796_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255102_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33796_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType QUEUESTATUS_t3314_0_0_0;
static ParameterInfo ICollection_1_t33796_ICollection_1_Add_m255103_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &QUEUESTATUS_t3314_0_0_0},
};
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Add(T)
MethodInfo ICollection_1_Add_m255103_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33796_ICollection_1_Add_m255103_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Clear()
MethodInfo ICollection_1_Clear_m255104_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33796_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType QUEUESTATUS_t3314_0_0_0;
static ParameterInfo ICollection_1_t33796_ICollection_1_Contains_m255105_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &QUEUESTATUS_t3314_0_0_0},
};
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Contains(T)
MethodInfo ICollection_1_Contains_m255105_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33796_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33796_ICollection_1_Contains_m255105_ParameterInfos/* parameters */
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
extern Il2CppType QUEUESTATUSU5BU5D_t26174_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33796_ICollection_1_CopyTo_m255106_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &QUEUESTATUSU5BU5D_t26174_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255106_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33796_ICollection_1_CopyTo_m255106_ParameterInfos/* parameters */
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
extern Il2CppType QUEUESTATUS_t3314_0_0_0;
static ParameterInfo ICollection_1_t33796_ICollection_1_Remove_m255107_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &QUEUESTATUS_t3314_0_0_0},
};
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Remove(T)
MethodInfo ICollection_1_Remove_m255107_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33796_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33796_ICollection_1_Remove_m255107_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33796_MethodInfos[] =
{
	&ICollection_1_get_Count_m255101_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255102_MethodInfo,
	&ICollection_1_Add_m255103_MethodInfo,
	&ICollection_1_Clear_m255104_MethodInfo,
	&ICollection_1_Contains_m255105_MethodInfo,
	&ICollection_1_CopyTo_m255106_MethodInfo,
	&ICollection_1_Remove_m255107_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33798_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33796_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33798_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33796_0_0_0;
extern Il2CppType ICollection_1_t33796_1_0_0;
struct ICollection_1_t33796;
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33796_GenericClass;
TypeInfo ICollection_1_t33796_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33796_MethodInfos/* methods */
	, ICollection_1_t33796_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33796_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33796_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33796_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33796_0_0_0/* byval_arg */
	, &ICollection_1_t33796_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33796_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33798_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>
extern TypeInfo IEnumerable_1_t33798_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28197_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255108_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33798_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28197_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33798_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255108_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33798_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33798_0_0_0;
extern Il2CppType IEnumerable_1_t33798_1_0_0;
struct IEnumerable_1_t33798;
extern TypeInfo IEnumerable_1_t33798_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33798_GenericClass;
TypeInfo IEnumerable_1_t33798_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33798_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33798_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33798_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33798_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33798_0_0_0/* byval_arg */
	, &IEnumerable_1_t33798_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33798_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33797_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>
extern MethodInfo IList_1_get_Item_m255109_MethodInfo;
extern MethodInfo IList_1_set_Item_m255110_MethodInfo;
static PropertyInfo IList_1_t33797____Item_PropertyInfo = 
{
	&IList_1_t33797_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255109_MethodInfo/* get */
	, &IList_1_set_Item_m255110_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33797_PropertyInfos[] =
{
	&IList_1_t33797____Item_PropertyInfo,
	NULL
};
extern Il2CppType QUEUESTATUS_t3314_0_0_0;
static ParameterInfo IList_1_t33797_IList_1_IndexOf_m255111_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &QUEUESTATUS_t3314_0_0_0},
};
extern TypeInfo IList_1_t33797_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255111_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33797_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33797_IList_1_IndexOf_m255111_ParameterInfos/* parameters */
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
extern Il2CppType QUEUESTATUS_t3314_0_0_0;
static ParameterInfo IList_1_t33797_IList_1_Insert_m255112_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &QUEUESTATUS_t3314_0_0_0},
};
extern TypeInfo IList_1_t33797_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255112_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33797_IList_1_Insert_m255112_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33797_IList_1_RemoveAt_m255113_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33797_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255113_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33797_IList_1_RemoveAt_m255113_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33797_IList_1_get_Item_m255109_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33797_il2cpp_TypeInfo;
extern Il2CppType QUEUESTATUS_t3314_0_0_0;
extern void* RuntimeInvoker_QUEUESTATUS_t3314_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255109_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33797_il2cpp_TypeInfo/* declaring_type */
	, &QUEUESTATUS_t3314_0_0_0/* return_type */
	, RuntimeInvoker_QUEUESTATUS_t3314_Int32_t73/* invoker_method */
	, IList_1_t33797_IList_1_get_Item_m255109_ParameterInfos/* parameters */
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
extern Il2CppType QUEUESTATUS_t3314_0_0_0;
static ParameterInfo IList_1_t33797_IList_1_set_Item_m255110_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &QUEUESTATUS_t3314_0_0_0},
};
extern TypeInfo IList_1_t33797_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_LOGIN_QUEUE_STATUS/QUEUESTATUS>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255110_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33797_IList_1_set_Item_m255110_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33797_MethodInfos[] =
{
	&IList_1_IndexOf_m255111_MethodInfo,
	&IList_1_Insert_m255112_MethodInfo,
	&IList_1_RemoveAt_m255113_MethodInfo,
	&IList_1_get_Item_m255109_MethodInfo,
	&IList_1_set_Item_m255110_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33796_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33798_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33797_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33796_il2cpp_TypeInfo,
	&IEnumerable_1_t33798_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33797_0_0_0;
extern Il2CppType IList_1_t33797_1_0_0;
struct IList_1_t33797;
extern TypeInfo IList_1_t33797_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33797_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33797_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33797_MethodInfos/* methods */
	, IList_1_t33797_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33797_il2cpp_TypeInfo/* element_class */
	, IList_1_t33797_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33797_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33797_0_0_0/* byval_arg */
	, &IList_1_t33797_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33797_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28198_il2cpp_TypeInfo;

// CG_CYPAY_SUCCESS/TYPE
#include "AssemblyU2DCSharp_CG_CYPAY_SUCCESS_TYPE.h"


// T System.Collections.Generic.IEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<CG_CYPAY_SUCCESS/TYPE>
extern MethodInfo IEnumerator_1_get_Current_m255114_MethodInfo;
static PropertyInfo IEnumerator_1_t28198____Current_PropertyInfo = 
{
	&IEnumerator_1_t28198_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255114_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28198_PropertyInfos[] =
{
	&IEnumerator_1_t28198____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28198_il2cpp_TypeInfo;
extern Il2CppType TYPE_t3326_0_0_0;
extern void* RuntimeInvoker_TYPE_t3326 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255114_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28198_il2cpp_TypeInfo/* declaring_type */
	, &TYPE_t3326_0_0_0/* return_type */
	, RuntimeInvoker_TYPE_t3326/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28198_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255114_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28198_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28198_0_0_0;
extern Il2CppType IEnumerator_1_t28198_1_0_0;
struct IEnumerator_1_t28198;
extern TypeInfo IEnumerator_1_t28198_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28198_GenericClass;
TypeInfo IEnumerator_1_t28198_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28198_MethodInfos/* methods */
	, IEnumerator_1_t28198_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28198_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28198_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28198_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28198_0_0_0/* byval_arg */
	, &IEnumerator_1_t28198_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28198_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1872.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1872MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo;
extern TypeInfo TYPE_t3326_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149551_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTYPE_t3326_m208470_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<CG_CYPAY_SUCCESS/TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<CG_CYPAY_SUCCESS/TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTYPE_t3326_m208470 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisTYPE_t3326_m208470_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149546_MethodInfo;
 void InternalEnumerator_1__ctor_m149546 (InternalEnumerator_1_t20516 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149547_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149547 (InternalEnumerator_1_t20516 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149548_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149548 (InternalEnumerator_1_t20516 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149551(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149551_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TYPE_t3326_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149549_MethodInfo;
 void InternalEnumerator_1_Dispose_m149549 (InternalEnumerator_1_t20516 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149550_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149550 (InternalEnumerator_1_t20516 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149551_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149551 (InternalEnumerator_1_t20516 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisTYPE_t3326_m208470(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTYPE_t3326_m208470_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20516____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20516, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20516____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20516, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20516_FieldInfos[] =
{
	&InternalEnumerator_1_t20516____array_FieldInfo,
	&InternalEnumerator_1_t20516____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149548_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20516____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20516_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149548_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149551_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20516____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20516_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149551_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20516_PropertyInfos[] =
{
	&InternalEnumerator_1_t20516____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20516____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20516_InternalEnumerator_1__ctor_m149546_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149546_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149546/* method */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20516_InternalEnumerator_1__ctor_m149546_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149547_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149547/* method */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149548_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149548/* method */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149549_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149549/* method */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149550_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149550/* method */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo;
extern Il2CppType TYPE_t3326_0_0_0;
extern void* RuntimeInvoker_TYPE_t3326 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<CG_CYPAY_SUCCESS/TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149551_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149551/* method */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* declaring_type */
	, &TYPE_t3326_0_0_0/* return_type */
	, RuntimeInvoker_TYPE_t3326/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20516_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149546_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149547_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149548_MethodInfo,
	&InternalEnumerator_1_Dispose_m149549_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149550_MethodInfo,
	&InternalEnumerator_1_get_Current_m149551_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149548_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149550_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149547_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149549_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149551_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20516_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149548_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149550_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149547_MethodInfo,
	&InternalEnumerator_1_Dispose_m149549_MethodInfo,
	&InternalEnumerator_1_get_Current_m149551_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28198_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20516_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28198_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28198_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20516_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28198_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20516_0_0_0;
extern Il2CppType InternalEnumerator_1_t20516_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20516_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20516_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20516_MethodInfos/* methods */
	, InternalEnumerator_1_t20516_PropertyInfos/* properties */
	, InternalEnumerator_1_t20516_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20516_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20516_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20516_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20516_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20516_1_0_0/* this_arg */
	, InternalEnumerator_1_t20516_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20516_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20516)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>
extern MethodInfo ICollection_1_get_Count_m255115_MethodInfo;
static PropertyInfo ICollection_1_t33799____Count_PropertyInfo = 
{
	&ICollection_1_t33799_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255116_MethodInfo;
static PropertyInfo ICollection_1_t33799____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33799_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255116_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33799_PropertyInfos[] =
{
	&ICollection_1_t33799____Count_PropertyInfo,
	&ICollection_1_t33799____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m255115_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33799_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255116_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33799_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TYPE_t3326_0_0_0;
static ParameterInfo ICollection_1_t33799_ICollection_1_Add_m255117_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TYPE_t3326_0_0_0},
};
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::Add(T)
MethodInfo ICollection_1_Add_m255117_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33799_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33799_ICollection_1_Add_m255117_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::Clear()
MethodInfo ICollection_1_Clear_m255118_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33799_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TYPE_t3326_0_0_0;
static ParameterInfo ICollection_1_t33799_ICollection_1_Contains_m255119_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TYPE_t3326_0_0_0},
};
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m255119_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33799_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33799_ICollection_1_Contains_m255119_ParameterInfos/* parameters */
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
extern Il2CppType TYPEU5BU5D_t26175_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33799_ICollection_1_CopyTo_m255120_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TYPEU5BU5D_t26175_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255120_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33799_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33799_ICollection_1_CopyTo_m255120_ParameterInfos/* parameters */
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
extern Il2CppType TYPE_t3326_0_0_0;
static ParameterInfo ICollection_1_t33799_ICollection_1_Remove_m255121_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TYPE_t3326_0_0_0},
};
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_CYPAY_SUCCESS/TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m255121_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33799_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33799_ICollection_1_Remove_m255121_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33799_MethodInfos[] =
{
	&ICollection_1_get_Count_m255115_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255116_MethodInfo,
	&ICollection_1_Add_m255117_MethodInfo,
	&ICollection_1_Clear_m255118_MethodInfo,
	&ICollection_1_Contains_m255119_MethodInfo,
	&ICollection_1_CopyTo_m255120_MethodInfo,
	&ICollection_1_Remove_m255121_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33801_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33799_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33801_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33799_0_0_0;
extern Il2CppType ICollection_1_t33799_1_0_0;
struct ICollection_1_t33799;
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33799_GenericClass;
TypeInfo ICollection_1_t33799_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33799_MethodInfos/* methods */
	, ICollection_1_t33799_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33799_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33799_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33799_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33799_0_0_0/* byval_arg */
	, &ICollection_1_t33799_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33799_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33801_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_CYPAY_SUCCESS/TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<CG_CYPAY_SUCCESS/TYPE>
extern TypeInfo IEnumerable_1_t33801_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28198_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_CYPAY_SUCCESS/TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255122_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33801_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28198_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33801_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255122_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33801_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33801_0_0_0;
extern Il2CppType IEnumerable_1_t33801_1_0_0;
struct IEnumerable_1_t33801;
extern TypeInfo IEnumerable_1_t33801_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33801_GenericClass;
TypeInfo IEnumerable_1_t33801_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33801_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33801_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33801_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33801_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33801_0_0_0/* byval_arg */
	, &IEnumerable_1_t33801_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33801_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33800_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>
extern MethodInfo IList_1_get_Item_m255123_MethodInfo;
extern MethodInfo IList_1_set_Item_m255124_MethodInfo;
static PropertyInfo IList_1_t33800____Item_PropertyInfo = 
{
	&IList_1_t33800_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255123_MethodInfo/* get */
	, &IList_1_set_Item_m255124_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33800_PropertyInfos[] =
{
	&IList_1_t33800____Item_PropertyInfo,
	NULL
};
extern Il2CppType TYPE_t3326_0_0_0;
static ParameterInfo IList_1_t33800_IList_1_IndexOf_m255125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TYPE_t3326_0_0_0},
};
extern TypeInfo IList_1_t33800_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255125_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33800_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33800_IList_1_IndexOf_m255125_ParameterInfos/* parameters */
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
extern Il2CppType TYPE_t3326_0_0_0;
static ParameterInfo IList_1_t33800_IList_1_Insert_m255126_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TYPE_t3326_0_0_0},
};
extern TypeInfo IList_1_t33800_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255126_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33800_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33800_IList_1_Insert_m255126_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33800_IList_1_RemoveAt_m255127_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33800_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255127_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33800_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33800_IList_1_RemoveAt_m255127_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33800_IList_1_get_Item_m255123_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33800_il2cpp_TypeInfo;
extern Il2CppType TYPE_t3326_0_0_0;
extern void* RuntimeInvoker_TYPE_t3326_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255123_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33800_il2cpp_TypeInfo/* declaring_type */
	, &TYPE_t3326_0_0_0/* return_type */
	, RuntimeInvoker_TYPE_t3326_Int32_t73/* invoker_method */
	, IList_1_t33800_IList_1_get_Item_m255123_ParameterInfos/* parameters */
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
extern Il2CppType TYPE_t3326_0_0_0;
static ParameterInfo IList_1_t33800_IList_1_set_Item_m255124_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TYPE_t3326_0_0_0},
};
extern TypeInfo IList_1_t33800_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_CYPAY_SUCCESS/TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255124_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33800_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33800_IList_1_set_Item_m255124_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33800_MethodInfos[] =
{
	&IList_1_IndexOf_m255125_MethodInfo,
	&IList_1_Insert_m255126_MethodInfo,
	&IList_1_RemoveAt_m255127_MethodInfo,
	&IList_1_get_Item_m255123_MethodInfo,
	&IList_1_set_Item_m255124_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33799_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33801_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33800_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33799_il2cpp_TypeInfo,
	&IEnumerable_1_t33801_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33800_0_0_0;
extern Il2CppType IList_1_t33800_1_0_0;
struct IList_1_t33800;
extern TypeInfo IList_1_t33800_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33800_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33800_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33800_MethodInfos/* methods */
	, IList_1_t33800_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33800_il2cpp_TypeInfo/* element_class */
	, IList_1_t33800_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33800_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33800_0_0_0/* byval_arg */
	, &IList_1_t33800_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33800_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28199_il2cpp_TypeInfo;

// GC_RET_CURGUILDWARTYPE/RETTYPE
#include "AssemblyU2DCSharp_GC_RET_CURGUILDWARTYPE_RETTYPE.h"


// T System.Collections.Generic.IEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>
extern MethodInfo IEnumerator_1_get_Current_m255128_MethodInfo;
static PropertyInfo IEnumerator_1_t28199____Current_PropertyInfo = 
{
	&IEnumerator_1_t28199_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255128_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28199_PropertyInfos[] =
{
	&IEnumerator_1_t28199____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28199_il2cpp_TypeInfo;
extern Il2CppType RETTYPE_t3348_0_0_0;
extern void* RuntimeInvoker_RETTYPE_t3348 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255128_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28199_il2cpp_TypeInfo/* declaring_type */
	, &RETTYPE_t3348_0_0_0/* return_type */
	, RuntimeInvoker_RETTYPE_t3348/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28199_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255128_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28199_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28199_0_0_0;
extern Il2CppType IEnumerator_1_t28199_1_0_0;
struct IEnumerator_1_t28199;
extern TypeInfo IEnumerator_1_t28199_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28199_GenericClass;
TypeInfo IEnumerator_1_t28199_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28199_MethodInfos/* methods */
	, IEnumerator_1_t28199_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28199_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28199_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28199_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28199_0_0_0/* byval_arg */
	, &IEnumerator_1_t28199_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28199_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1873.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1873MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo;
extern TypeInfo RETTYPE_t3348_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149557_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRETTYPE_t3348_m208481_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_RET_CURGUILDWARTYPE/RETTYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_RET_CURGUILDWARTYPE/RETTYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisRETTYPE_t3348_m208481 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisRETTYPE_t3348_m208481_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149552_MethodInfo;
 void InternalEnumerator_1__ctor_m149552 (InternalEnumerator_1_t20517 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149553_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149553 (InternalEnumerator_1_t20517 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149554_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149554 (InternalEnumerator_1_t20517 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149557(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149557_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&RETTYPE_t3348_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149555_MethodInfo;
 void InternalEnumerator_1_Dispose_m149555 (InternalEnumerator_1_t20517 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149556_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149556 (InternalEnumerator_1_t20517 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149557_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149557 (InternalEnumerator_1_t20517 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisRETTYPE_t3348_m208481(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisRETTYPE_t3348_m208481_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20517____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20517, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20517____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20517, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20517_FieldInfos[] =
{
	&InternalEnumerator_1_t20517____array_FieldInfo,
	&InternalEnumerator_1_t20517____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149554_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20517____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20517_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149554_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149557_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20517____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20517_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149557_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20517_PropertyInfos[] =
{
	&InternalEnumerator_1_t20517____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20517____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20517_InternalEnumerator_1__ctor_m149552_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149552_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149552/* method */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20517_InternalEnumerator_1__ctor_m149552_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149553_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149553/* method */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149554_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149554/* method */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149555_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149555/* method */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149556_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149556/* method */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo;
extern Il2CppType RETTYPE_t3348_0_0_0;
extern void* RuntimeInvoker_RETTYPE_t3348 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149557_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149557/* method */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* declaring_type */
	, &RETTYPE_t3348_0_0_0/* return_type */
	, RuntimeInvoker_RETTYPE_t3348/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20517_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149552_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149553_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149554_MethodInfo,
	&InternalEnumerator_1_Dispose_m149555_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149556_MethodInfo,
	&InternalEnumerator_1_get_Current_m149557_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149554_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149556_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149553_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149555_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149557_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20517_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149554_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149556_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149553_MethodInfo,
	&InternalEnumerator_1_Dispose_m149555_MethodInfo,
	&InternalEnumerator_1_get_Current_m149557_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28199_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20517_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28199_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28199_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20517_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28199_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20517_0_0_0;
extern Il2CppType InternalEnumerator_1_t20517_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20517_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20517_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20517_MethodInfos/* methods */
	, InternalEnumerator_1_t20517_PropertyInfos/* properties */
	, InternalEnumerator_1_t20517_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20517_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20517_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20517_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20517_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20517_1_0_0/* this_arg */
	, InternalEnumerator_1_t20517_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20517_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20517)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>
extern MethodInfo ICollection_1_get_Count_m255129_MethodInfo;
static PropertyInfo ICollection_1_t33802____Count_PropertyInfo = 
{
	&ICollection_1_t33802_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255129_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255130_MethodInfo;
static PropertyInfo ICollection_1_t33802____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33802_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255130_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33802_PropertyInfos[] =
{
	&ICollection_1_t33802____Count_PropertyInfo,
	&ICollection_1_t33802____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m255129_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33802_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255130_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33802_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RETTYPE_t3348_0_0_0;
static ParameterInfo ICollection_1_t33802_ICollection_1_Add_m255131_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3348_0_0_0},
};
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Add(T)
MethodInfo ICollection_1_Add_m255131_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33802_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33802_ICollection_1_Add_m255131_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Clear()
MethodInfo ICollection_1_Clear_m255132_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33802_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RETTYPE_t3348_0_0_0;
static ParameterInfo ICollection_1_t33802_ICollection_1_Contains_m255133_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3348_0_0_0},
};
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m255133_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33802_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33802_ICollection_1_Contains_m255133_ParameterInfos/* parameters */
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
extern Il2CppType RETTYPEU5BU5D_t26176_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33802_ICollection_1_CopyTo_m255134_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPEU5BU5D_t26176_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255134_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33802_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33802_ICollection_1_CopyTo_m255134_ParameterInfos/* parameters */
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
extern Il2CppType RETTYPE_t3348_0_0_0;
static ParameterInfo ICollection_1_t33802_ICollection_1_Remove_m255135_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3348_0_0_0},
};
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m255135_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33802_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33802_ICollection_1_Remove_m255135_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33802_MethodInfos[] =
{
	&ICollection_1_get_Count_m255129_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255130_MethodInfo,
	&ICollection_1_Add_m255131_MethodInfo,
	&ICollection_1_Clear_m255132_MethodInfo,
	&ICollection_1_Contains_m255133_MethodInfo,
	&ICollection_1_CopyTo_m255134_MethodInfo,
	&ICollection_1_Remove_m255135_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33804_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33802_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33804_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33802_0_0_0;
extern Il2CppType ICollection_1_t33802_1_0_0;
struct ICollection_1_t33802;
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33802_GenericClass;
TypeInfo ICollection_1_t33802_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33802_MethodInfos/* methods */
	, ICollection_1_t33802_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33802_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33802_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33802_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33802_0_0_0/* byval_arg */
	, &ICollection_1_t33802_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33802_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33804_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_RET_CURGUILDWARTYPE/RETTYPE>
extern TypeInfo IEnumerable_1_t33804_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28199_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255136_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33804_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28199_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33804_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255136_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33804_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33804_0_0_0;
extern Il2CppType IEnumerable_1_t33804_1_0_0;
struct IEnumerable_1_t33804;
extern TypeInfo IEnumerable_1_t33804_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33804_GenericClass;
TypeInfo IEnumerable_1_t33804_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33804_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33804_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33804_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33804_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33804_0_0_0/* byval_arg */
	, &IEnumerable_1_t33804_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33804_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33803_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>
extern MethodInfo IList_1_get_Item_m255137_MethodInfo;
extern MethodInfo IList_1_set_Item_m255138_MethodInfo;
static PropertyInfo IList_1_t33803____Item_PropertyInfo = 
{
	&IList_1_t33803_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255137_MethodInfo/* get */
	, &IList_1_set_Item_m255138_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33803_PropertyInfos[] =
{
	&IList_1_t33803____Item_PropertyInfo,
	NULL
};
extern Il2CppType RETTYPE_t3348_0_0_0;
static ParameterInfo IList_1_t33803_IList_1_IndexOf_m255139_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3348_0_0_0},
};
extern TypeInfo IList_1_t33803_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255139_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33803_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33803_IList_1_IndexOf_m255139_ParameterInfos/* parameters */
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
extern Il2CppType RETTYPE_t3348_0_0_0;
static ParameterInfo IList_1_t33803_IList_1_Insert_m255140_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3348_0_0_0},
};
extern TypeInfo IList_1_t33803_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255140_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33803_IList_1_Insert_m255140_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33803_IList_1_RemoveAt_m255141_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33803_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255141_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33803_IList_1_RemoveAt_m255141_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33803_IList_1_get_Item_m255137_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33803_il2cpp_TypeInfo;
extern Il2CppType RETTYPE_t3348_0_0_0;
extern void* RuntimeInvoker_RETTYPE_t3348_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255137_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33803_il2cpp_TypeInfo/* declaring_type */
	, &RETTYPE_t3348_0_0_0/* return_type */
	, RuntimeInvoker_RETTYPE_t3348_Int32_t73/* invoker_method */
	, IList_1_t33803_IList_1_get_Item_m255137_ParameterInfos/* parameters */
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
extern Il2CppType RETTYPE_t3348_0_0_0;
static ParameterInfo IList_1_t33803_IList_1_set_Item_m255138_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3348_0_0_0},
};
extern TypeInfo IList_1_t33803_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_CURGUILDWARTYPE/RETTYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255138_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33803_IList_1_set_Item_m255138_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33803_MethodInfos[] =
{
	&IList_1_IndexOf_m255139_MethodInfo,
	&IList_1_Insert_m255140_MethodInfo,
	&IList_1_RemoveAt_m255141_MethodInfo,
	&IList_1_get_Item_m255137_MethodInfo,
	&IList_1_set_Item_m255138_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33802_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33804_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33803_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33802_il2cpp_TypeInfo,
	&IEnumerable_1_t33804_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33803_0_0_0;
extern Il2CppType IList_1_t33803_1_0_0;
struct IList_1_t33803;
extern TypeInfo IList_1_t33803_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33803_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33803_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33803_MethodInfos/* methods */
	, IList_1_t33803_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33803_il2cpp_TypeInfo/* element_class */
	, IList_1_t33803_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33803_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33803_0_0_0/* byval_arg */
	, &IList_1_t33803_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33803_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28200_il2cpp_TypeInfo;

// GC_SNS_INVITE_CODE_RESPONSE/RETTYPE
#include "AssemblyU2DCSharp_GC_SNS_INVITE_CODE_RESPONSE_RETTYPE.h"


// T System.Collections.Generic.IEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>
extern MethodInfo IEnumerator_1_get_Current_m255142_MethodInfo;
static PropertyInfo IEnumerator_1_t28200____Current_PropertyInfo = 
{
	&IEnumerator_1_t28200_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255142_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28200_PropertyInfos[] =
{
	&IEnumerator_1_t28200____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28200_il2cpp_TypeInfo;
extern Il2CppType RETTYPE_t3361_0_0_0;
extern void* RuntimeInvoker_RETTYPE_t3361 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255142_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28200_il2cpp_TypeInfo/* declaring_type */
	, &RETTYPE_t3361_0_0_0/* return_type */
	, RuntimeInvoker_RETTYPE_t3361/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28200_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255142_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28200_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28200_0_0_0;
extern Il2CppType IEnumerator_1_t28200_1_0_0;
struct IEnumerator_1_t28200;
extern TypeInfo IEnumerator_1_t28200_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28200_GenericClass;
TypeInfo IEnumerator_1_t28200_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28200_MethodInfos/* methods */
	, IEnumerator_1_t28200_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28200_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28200_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28200_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28200_0_0_0/* byval_arg */
	, &IEnumerator_1_t28200_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28200_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1874.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1874MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo;
extern TypeInfo RETTYPE_t3361_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149563_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRETTYPE_t3361_m208492_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisRETTYPE_t3361_m208492 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisRETTYPE_t3361_m208492_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149558_MethodInfo;
 void InternalEnumerator_1__ctor_m149558 (InternalEnumerator_1_t20518 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149559_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149559 (InternalEnumerator_1_t20518 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149560_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149560 (InternalEnumerator_1_t20518 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149563(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149563_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&RETTYPE_t3361_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149561_MethodInfo;
 void InternalEnumerator_1_Dispose_m149561 (InternalEnumerator_1_t20518 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149562_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149562 (InternalEnumerator_1_t20518 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149563_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149563 (InternalEnumerator_1_t20518 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisRETTYPE_t3361_m208492(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisRETTYPE_t3361_m208492_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20518____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20518, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20518____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20518, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20518_FieldInfos[] =
{
	&InternalEnumerator_1_t20518____array_FieldInfo,
	&InternalEnumerator_1_t20518____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149560_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20518____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20518_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149560_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149563_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20518____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20518_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149563_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20518_PropertyInfos[] =
{
	&InternalEnumerator_1_t20518____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20518____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20518_InternalEnumerator_1__ctor_m149558_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149558_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149558/* method */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20518_InternalEnumerator_1__ctor_m149558_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149559_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149559/* method */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149560_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149560/* method */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149561_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149561/* method */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149562_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149562/* method */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo;
extern Il2CppType RETTYPE_t3361_0_0_0;
extern void* RuntimeInvoker_RETTYPE_t3361 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149563_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149563/* method */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* declaring_type */
	, &RETTYPE_t3361_0_0_0/* return_type */
	, RuntimeInvoker_RETTYPE_t3361/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20518_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149558_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149559_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149560_MethodInfo,
	&InternalEnumerator_1_Dispose_m149561_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149562_MethodInfo,
	&InternalEnumerator_1_get_Current_m149563_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149560_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149562_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149559_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149561_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149563_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20518_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149560_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149562_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149559_MethodInfo,
	&InternalEnumerator_1_Dispose_m149561_MethodInfo,
	&InternalEnumerator_1_get_Current_m149563_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28200_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20518_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28200_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28200_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20518_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28200_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20518_0_0_0;
extern Il2CppType InternalEnumerator_1_t20518_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20518_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20518_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20518_MethodInfos/* methods */
	, InternalEnumerator_1_t20518_PropertyInfos/* properties */
	, InternalEnumerator_1_t20518_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20518_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20518_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20518_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20518_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20518_1_0_0/* this_arg */
	, InternalEnumerator_1_t20518_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20518_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20518)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>
extern MethodInfo ICollection_1_get_Count_m255143_MethodInfo;
static PropertyInfo ICollection_1_t33805____Count_PropertyInfo = 
{
	&ICollection_1_t33805_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255143_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255144_MethodInfo;
static PropertyInfo ICollection_1_t33805____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33805_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255144_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33805_PropertyInfos[] =
{
	&ICollection_1_t33805____Count_PropertyInfo,
	&ICollection_1_t33805____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m255143_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33805_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255144_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33805_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RETTYPE_t3361_0_0_0;
static ParameterInfo ICollection_1_t33805_ICollection_1_Add_m255145_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3361_0_0_0},
};
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Add(T)
MethodInfo ICollection_1_Add_m255145_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33805_ICollection_1_Add_m255145_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Clear()
MethodInfo ICollection_1_Clear_m255146_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33805_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RETTYPE_t3361_0_0_0;
static ParameterInfo ICollection_1_t33805_ICollection_1_Contains_m255147_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3361_0_0_0},
};
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m255147_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33805_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33805_ICollection_1_Contains_m255147_ParameterInfos/* parameters */
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
extern Il2CppType RETTYPEU5BU5D_t26177_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33805_ICollection_1_CopyTo_m255148_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPEU5BU5D_t26177_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255148_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33805_ICollection_1_CopyTo_m255148_ParameterInfos/* parameters */
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
extern Il2CppType RETTYPE_t3361_0_0_0;
static ParameterInfo ICollection_1_t33805_ICollection_1_Remove_m255149_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3361_0_0_0},
};
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m255149_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33805_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33805_ICollection_1_Remove_m255149_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33805_MethodInfos[] =
{
	&ICollection_1_get_Count_m255143_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255144_MethodInfo,
	&ICollection_1_Add_m255145_MethodInfo,
	&ICollection_1_Clear_m255146_MethodInfo,
	&ICollection_1_Contains_m255147_MethodInfo,
	&ICollection_1_CopyTo_m255148_MethodInfo,
	&ICollection_1_Remove_m255149_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33807_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33805_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33807_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33805_0_0_0;
extern Il2CppType ICollection_1_t33805_1_0_0;
struct ICollection_1_t33805;
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33805_GenericClass;
TypeInfo ICollection_1_t33805_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33805_MethodInfos/* methods */
	, ICollection_1_t33805_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33805_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33805_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33805_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33805_0_0_0/* byval_arg */
	, &ICollection_1_t33805_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33805_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33807_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>
extern TypeInfo IEnumerable_1_t33807_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28200_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255150_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33807_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28200_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33807_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255150_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33807_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33807_0_0_0;
extern Il2CppType IEnumerable_1_t33807_1_0_0;
struct IEnumerable_1_t33807;
extern TypeInfo IEnumerable_1_t33807_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33807_GenericClass;
TypeInfo IEnumerable_1_t33807_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33807_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33807_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33807_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33807_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33807_0_0_0/* byval_arg */
	, &IEnumerable_1_t33807_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33807_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33806_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>
extern MethodInfo IList_1_get_Item_m255151_MethodInfo;
extern MethodInfo IList_1_set_Item_m255152_MethodInfo;
static PropertyInfo IList_1_t33806____Item_PropertyInfo = 
{
	&IList_1_t33806_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255151_MethodInfo/* get */
	, &IList_1_set_Item_m255152_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33806_PropertyInfos[] =
{
	&IList_1_t33806____Item_PropertyInfo,
	NULL
};
extern Il2CppType RETTYPE_t3361_0_0_0;
static ParameterInfo IList_1_t33806_IList_1_IndexOf_m255153_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3361_0_0_0},
};
extern TypeInfo IList_1_t33806_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255153_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33806_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33806_IList_1_IndexOf_m255153_ParameterInfos/* parameters */
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
extern Il2CppType RETTYPE_t3361_0_0_0;
static ParameterInfo IList_1_t33806_IList_1_Insert_m255154_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3361_0_0_0},
};
extern TypeInfo IList_1_t33806_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255154_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33806_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33806_IList_1_Insert_m255154_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33806_IList_1_RemoveAt_m255155_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33806_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255155_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33806_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33806_IList_1_RemoveAt_m255155_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33806_IList_1_get_Item_m255151_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33806_il2cpp_TypeInfo;
extern Il2CppType RETTYPE_t3361_0_0_0;
extern void* RuntimeInvoker_RETTYPE_t3361_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255151_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33806_il2cpp_TypeInfo/* declaring_type */
	, &RETTYPE_t3361_0_0_0/* return_type */
	, RuntimeInvoker_RETTYPE_t3361_Int32_t73/* invoker_method */
	, IList_1_t33806_IList_1_get_Item_m255151_ParameterInfos/* parameters */
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
extern Il2CppType RETTYPE_t3361_0_0_0;
static ParameterInfo IList_1_t33806_IList_1_set_Item_m255152_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RETTYPE_t3361_0_0_0},
};
extern TypeInfo IList_1_t33806_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_SNS_INVITE_CODE_RESPONSE/RETTYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255152_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33806_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33806_IList_1_set_Item_m255152_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33806_MethodInfos[] =
{
	&IList_1_IndexOf_m255153_MethodInfo,
	&IList_1_Insert_m255154_MethodInfo,
	&IList_1_RemoveAt_m255155_MethodInfo,
	&IList_1_get_Item_m255151_MethodInfo,
	&IList_1_set_Item_m255152_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33805_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33807_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33806_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33805_il2cpp_TypeInfo,
	&IEnumerable_1_t33807_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33806_0_0_0;
extern Il2CppType IList_1_t33806_1_0_0;
struct IList_1_t33806;
extern TypeInfo IList_1_t33806_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33806_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33806_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33806_MethodInfos/* methods */
	, IList_1_t33806_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33806_il2cpp_TypeInfo/* element_class */
	, IList_1_t33806_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33806_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33806_0_0_0/* byval_arg */
	, &IList_1_t33806_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33806_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28201_il2cpp_TypeInfo;

// CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType
#include "AssemblyU2DCSharp_CG_ASK_PAY_ACTIVITY_PRIZE_PrizeType.h"


// T System.Collections.Generic.IEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>
extern MethodInfo IEnumerator_1_get_Current_m255156_MethodInfo;
static PropertyInfo IEnumerator_1_t28201____Current_PropertyInfo = 
{
	&IEnumerator_1_t28201_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255156_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28201_PropertyInfos[] =
{
	&IEnumerator_1_t28201____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28201_il2cpp_TypeInfo;
extern Il2CppType PrizeType_t3376_0_0_0;
extern void* RuntimeInvoker_PrizeType_t3376 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255156_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28201_il2cpp_TypeInfo/* declaring_type */
	, &PrizeType_t3376_0_0_0/* return_type */
	, RuntimeInvoker_PrizeType_t3376/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28201_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255156_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28201_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28201_0_0_0;
extern Il2CppType IEnumerator_1_t28201_1_0_0;
struct IEnumerator_1_t28201;
extern TypeInfo IEnumerator_1_t28201_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28201_GenericClass;
TypeInfo IEnumerator_1_t28201_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28201_MethodInfos/* methods */
	, IEnumerator_1_t28201_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28201_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28201_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28201_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28201_0_0_0/* byval_arg */
	, &IEnumerator_1_t28201_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28201_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1875.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1875MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo;
extern TypeInfo PrizeType_t3376_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149569_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPrizeType_t3376_m208503_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPrizeType_t3376_m208503 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisPrizeType_t3376_m208503_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149564_MethodInfo;
 void InternalEnumerator_1__ctor_m149564 (InternalEnumerator_1_t20519 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149565_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149565 (InternalEnumerator_1_t20519 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149566_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149566 (InternalEnumerator_1_t20519 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149569(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149569_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PrizeType_t3376_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149567_MethodInfo;
 void InternalEnumerator_1_Dispose_m149567 (InternalEnumerator_1_t20519 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149568_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149568 (InternalEnumerator_1_t20519 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149569_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149569 (InternalEnumerator_1_t20519 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPrizeType_t3376_m208503(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPrizeType_t3376_m208503_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20519____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20519, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20519____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20519, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20519_FieldInfos[] =
{
	&InternalEnumerator_1_t20519____array_FieldInfo,
	&InternalEnumerator_1_t20519____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149566_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20519____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20519_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149566_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149569_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20519____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20519_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149569_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20519_PropertyInfos[] =
{
	&InternalEnumerator_1_t20519____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20519____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20519_InternalEnumerator_1__ctor_m149564_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149564_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149564/* method */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20519_InternalEnumerator_1__ctor_m149564_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149565_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149565/* method */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149566_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149566/* method */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149567_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149567/* method */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149568_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149568/* method */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo;
extern Il2CppType PrizeType_t3376_0_0_0;
extern void* RuntimeInvoker_PrizeType_t3376 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149569_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149569/* method */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* declaring_type */
	, &PrizeType_t3376_0_0_0/* return_type */
	, RuntimeInvoker_PrizeType_t3376/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20519_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149564_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149565_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149566_MethodInfo,
	&InternalEnumerator_1_Dispose_m149567_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149568_MethodInfo,
	&InternalEnumerator_1_get_Current_m149569_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149566_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149568_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149565_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149567_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149569_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20519_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149566_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149568_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149565_MethodInfo,
	&InternalEnumerator_1_Dispose_m149567_MethodInfo,
	&InternalEnumerator_1_get_Current_m149569_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28201_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20519_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28201_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28201_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20519_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28201_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20519_0_0_0;
extern Il2CppType InternalEnumerator_1_t20519_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20519_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20519_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20519_MethodInfos/* methods */
	, InternalEnumerator_1_t20519_PropertyInfos/* properties */
	, InternalEnumerator_1_t20519_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20519_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20519_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20519_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20519_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20519_1_0_0/* this_arg */
	, InternalEnumerator_1_t20519_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20519_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20519)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>
extern MethodInfo ICollection_1_get_Count_m255157_MethodInfo;
static PropertyInfo ICollection_1_t33808____Count_PropertyInfo = 
{
	&ICollection_1_t33808_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255157_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255158_MethodInfo;
static PropertyInfo ICollection_1_t33808____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33808_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255158_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33808_PropertyInfos[] =
{
	&ICollection_1_t33808____Count_PropertyInfo,
	&ICollection_1_t33808____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_Count()
MethodInfo ICollection_1_get_Count_m255157_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33808_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255158_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33808_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PrizeType_t3376_0_0_0;
static ParameterInfo ICollection_1_t33808_ICollection_1_Add_m255159_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3376_0_0_0},
};
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Add(T)
MethodInfo ICollection_1_Add_m255159_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33808_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33808_ICollection_1_Add_m255159_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Clear()
MethodInfo ICollection_1_Clear_m255160_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33808_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PrizeType_t3376_0_0_0;
static ParameterInfo ICollection_1_t33808_ICollection_1_Contains_m255161_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3376_0_0_0},
};
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Contains(T)
MethodInfo ICollection_1_Contains_m255161_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33808_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33808_ICollection_1_Contains_m255161_ParameterInfos/* parameters */
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
extern Il2CppType PrizeTypeU5BU5D_t26178_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33808_ICollection_1_CopyTo_m255162_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PrizeTypeU5BU5D_t26178_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255162_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33808_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33808_ICollection_1_CopyTo_m255162_ParameterInfos/* parameters */
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
extern Il2CppType PrizeType_t3376_0_0_0;
static ParameterInfo ICollection_1_t33808_ICollection_1_Remove_m255163_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3376_0_0_0},
};
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Remove(T)
MethodInfo ICollection_1_Remove_m255163_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33808_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33808_ICollection_1_Remove_m255163_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33808_MethodInfos[] =
{
	&ICollection_1_get_Count_m255157_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255158_MethodInfo,
	&ICollection_1_Add_m255159_MethodInfo,
	&ICollection_1_Clear_m255160_MethodInfo,
	&ICollection_1_Contains_m255161_MethodInfo,
	&ICollection_1_CopyTo_m255162_MethodInfo,
	&ICollection_1_Remove_m255163_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33810_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33808_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33810_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33808_0_0_0;
extern Il2CppType ICollection_1_t33808_1_0_0;
struct ICollection_1_t33808;
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33808_GenericClass;
TypeInfo ICollection_1_t33808_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33808_MethodInfos/* methods */
	, ICollection_1_t33808_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33808_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33808_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33808_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33808_0_0_0/* byval_arg */
	, &ICollection_1_t33808_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33808_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33810_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>
extern TypeInfo IEnumerable_1_t33810_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28201_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255164_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33810_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28201_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33810_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255164_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33810_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33810_0_0_0;
extern Il2CppType IEnumerable_1_t33810_1_0_0;
struct IEnumerable_1_t33810;
extern TypeInfo IEnumerable_1_t33810_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33810_GenericClass;
TypeInfo IEnumerable_1_t33810_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33810_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33810_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33810_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33810_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33810_0_0_0/* byval_arg */
	, &IEnumerable_1_t33810_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33810_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33809_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>
extern MethodInfo IList_1_get_Item_m255165_MethodInfo;
extern MethodInfo IList_1_set_Item_m255166_MethodInfo;
static PropertyInfo IList_1_t33809____Item_PropertyInfo = 
{
	&IList_1_t33809_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255165_MethodInfo/* get */
	, &IList_1_set_Item_m255166_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33809_PropertyInfos[] =
{
	&IList_1_t33809____Item_PropertyInfo,
	NULL
};
extern Il2CppType PrizeType_t3376_0_0_0;
static ParameterInfo IList_1_t33809_IList_1_IndexOf_m255167_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3376_0_0_0},
};
extern TypeInfo IList_1_t33809_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255167_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33809_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33809_IList_1_IndexOf_m255167_ParameterInfos/* parameters */
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
extern Il2CppType PrizeType_t3376_0_0_0;
static ParameterInfo IList_1_t33809_IList_1_Insert_m255168_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3376_0_0_0},
};
extern TypeInfo IList_1_t33809_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255168_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33809_IList_1_Insert_m255168_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33809_IList_1_RemoveAt_m255169_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33809_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255169_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33809_IList_1_RemoveAt_m255169_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33809_IList_1_get_Item_m255165_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33809_il2cpp_TypeInfo;
extern Il2CppType PrizeType_t3376_0_0_0;
extern void* RuntimeInvoker_PrizeType_t3376_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255165_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33809_il2cpp_TypeInfo/* declaring_type */
	, &PrizeType_t3376_0_0_0/* return_type */
	, RuntimeInvoker_PrizeType_t3376_Int32_t73/* invoker_method */
	, IList_1_t33809_IList_1_get_Item_m255165_ParameterInfos/* parameters */
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
extern Il2CppType PrizeType_t3376_0_0_0;
static ParameterInfo IList_1_t33809_IList_1_set_Item_m255166_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3376_0_0_0},
};
extern TypeInfo IList_1_t33809_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_ASK_PAY_ACTIVITY_PRIZE/PrizeType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255166_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33809_IList_1_set_Item_m255166_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33809_MethodInfos[] =
{
	&IList_1_IndexOf_m255167_MethodInfo,
	&IList_1_Insert_m255168_MethodInfo,
	&IList_1_RemoveAt_m255169_MethodInfo,
	&IList_1_get_Item_m255165_MethodInfo,
	&IList_1_set_Item_m255166_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33808_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33810_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33809_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33808_il2cpp_TypeInfo,
	&IEnumerable_1_t33810_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33809_0_0_0;
extern Il2CppType IList_1_t33809_1_0_0;
struct IList_1_t33809;
extern TypeInfo IList_1_t33809_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33809_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33809_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33809_MethodInfos/* methods */
	, IList_1_t33809_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33809_il2cpp_TypeInfo/* element_class */
	, IList_1_t33809_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33809_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33809_0_0_0/* byval_arg */
	, &IList_1_t33809_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33809_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28202_il2cpp_TypeInfo;

// GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType
#include "AssemblyU2DCSharp_GC_ASK_PAY_ACTIVITY_PRIZE_RET_PrizeType.h"


// T System.Collections.Generic.IEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>
extern MethodInfo IEnumerator_1_get_Current_m255170_MethodInfo;
static PropertyInfo IEnumerator_1_t28202____Current_PropertyInfo = 
{
	&IEnumerator_1_t28202_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255170_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28202_PropertyInfos[] =
{
	&IEnumerator_1_t28202____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28202_il2cpp_TypeInfo;
extern Il2CppType PrizeType_t3378_0_0_0;
extern void* RuntimeInvoker_PrizeType_t3378 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255170_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28202_il2cpp_TypeInfo/* declaring_type */
	, &PrizeType_t3378_0_0_0/* return_type */
	, RuntimeInvoker_PrizeType_t3378/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28202_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255170_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28202_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28202_0_0_0;
extern Il2CppType IEnumerator_1_t28202_1_0_0;
struct IEnumerator_1_t28202;
extern TypeInfo IEnumerator_1_t28202_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28202_GenericClass;
TypeInfo IEnumerator_1_t28202_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28202_MethodInfos/* methods */
	, IEnumerator_1_t28202_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28202_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28202_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28202_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28202_0_0_0/* byval_arg */
	, &IEnumerator_1_t28202_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28202_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1876.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1876MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo;
extern TypeInfo PrizeType_t3378_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149575_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPrizeType_t3378_m208514_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPrizeType_t3378_m208514 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisPrizeType_t3378_m208514_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149570_MethodInfo;
 void InternalEnumerator_1__ctor_m149570 (InternalEnumerator_1_t20520 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149571_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149571 (InternalEnumerator_1_t20520 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149572_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149572 (InternalEnumerator_1_t20520 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149575(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149575_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PrizeType_t3378_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149573_MethodInfo;
 void InternalEnumerator_1_Dispose_m149573 (InternalEnumerator_1_t20520 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149574_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149574 (InternalEnumerator_1_t20520 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149575_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149575 (InternalEnumerator_1_t20520 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPrizeType_t3378_m208514(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPrizeType_t3378_m208514_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20520____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20520, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20520____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20520, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20520_FieldInfos[] =
{
	&InternalEnumerator_1_t20520____array_FieldInfo,
	&InternalEnumerator_1_t20520____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149572_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20520____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20520_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149572_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149575_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20520____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20520_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149575_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20520_PropertyInfos[] =
{
	&InternalEnumerator_1_t20520____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20520____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20520_InternalEnumerator_1__ctor_m149570_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149570_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149570/* method */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20520_InternalEnumerator_1__ctor_m149570_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149571_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149571/* method */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149572_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149572/* method */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149573_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149573/* method */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149574_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149574/* method */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo;
extern Il2CppType PrizeType_t3378_0_0_0;
extern void* RuntimeInvoker_PrizeType_t3378 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149575_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149575/* method */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* declaring_type */
	, &PrizeType_t3378_0_0_0/* return_type */
	, RuntimeInvoker_PrizeType_t3378/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20520_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149570_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149571_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149572_MethodInfo,
	&InternalEnumerator_1_Dispose_m149573_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149574_MethodInfo,
	&InternalEnumerator_1_get_Current_m149575_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149572_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149574_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149571_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149573_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149575_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20520_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149572_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149574_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149571_MethodInfo,
	&InternalEnumerator_1_Dispose_m149573_MethodInfo,
	&InternalEnumerator_1_get_Current_m149575_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28202_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20520_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28202_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28202_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20520_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28202_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20520_0_0_0;
extern Il2CppType InternalEnumerator_1_t20520_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20520_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20520_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20520_MethodInfos/* methods */
	, InternalEnumerator_1_t20520_PropertyInfos/* properties */
	, InternalEnumerator_1_t20520_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20520_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20520_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20520_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20520_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20520_1_0_0/* this_arg */
	, InternalEnumerator_1_t20520_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20520_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20520)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>
extern MethodInfo ICollection_1_get_Count_m255171_MethodInfo;
static PropertyInfo ICollection_1_t33811____Count_PropertyInfo = 
{
	&ICollection_1_t33811_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255171_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255172_MethodInfo;
static PropertyInfo ICollection_1_t33811____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33811_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255172_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33811_PropertyInfos[] =
{
	&ICollection_1_t33811____Count_PropertyInfo,
	&ICollection_1_t33811____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_Count()
MethodInfo ICollection_1_get_Count_m255171_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33811_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255172_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33811_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PrizeType_t3378_0_0_0;
static ParameterInfo ICollection_1_t33811_ICollection_1_Add_m255173_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3378_0_0_0},
};
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Add(T)
MethodInfo ICollection_1_Add_m255173_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33811_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33811_ICollection_1_Add_m255173_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Clear()
MethodInfo ICollection_1_Clear_m255174_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33811_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PrizeType_t3378_0_0_0;
static ParameterInfo ICollection_1_t33811_ICollection_1_Contains_m255175_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3378_0_0_0},
};
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Contains(T)
MethodInfo ICollection_1_Contains_m255175_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33811_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33811_ICollection_1_Contains_m255175_ParameterInfos/* parameters */
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
extern Il2CppType PrizeTypeU5BU5D_t26179_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33811_ICollection_1_CopyTo_m255176_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PrizeTypeU5BU5D_t26179_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255176_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33811_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33811_ICollection_1_CopyTo_m255176_ParameterInfos/* parameters */
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
extern Il2CppType PrizeType_t3378_0_0_0;
static ParameterInfo ICollection_1_t33811_ICollection_1_Remove_m255177_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3378_0_0_0},
};
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Remove(T)
MethodInfo ICollection_1_Remove_m255177_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33811_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33811_ICollection_1_Remove_m255177_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33811_MethodInfos[] =
{
	&ICollection_1_get_Count_m255171_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255172_MethodInfo,
	&ICollection_1_Add_m255173_MethodInfo,
	&ICollection_1_Clear_m255174_MethodInfo,
	&ICollection_1_Contains_m255175_MethodInfo,
	&ICollection_1_CopyTo_m255176_MethodInfo,
	&ICollection_1_Remove_m255177_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33813_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33811_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33813_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33811_0_0_0;
extern Il2CppType ICollection_1_t33811_1_0_0;
struct ICollection_1_t33811;
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33811_GenericClass;
TypeInfo ICollection_1_t33811_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33811_MethodInfos/* methods */
	, ICollection_1_t33811_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33811_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33811_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33811_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33811_0_0_0/* byval_arg */
	, &ICollection_1_t33811_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33811_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33813_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>
extern TypeInfo IEnumerable_1_t33813_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28202_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255178_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33813_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28202_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33813_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255178_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33813_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33813_0_0_0;
extern Il2CppType IEnumerable_1_t33813_1_0_0;
struct IEnumerable_1_t33813;
extern TypeInfo IEnumerable_1_t33813_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33813_GenericClass;
TypeInfo IEnumerable_1_t33813_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33813_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33813_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33813_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33813_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33813_0_0_0/* byval_arg */
	, &IEnumerable_1_t33813_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33813_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33812_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>
extern MethodInfo IList_1_get_Item_m255179_MethodInfo;
extern MethodInfo IList_1_set_Item_m255180_MethodInfo;
static PropertyInfo IList_1_t33812____Item_PropertyInfo = 
{
	&IList_1_t33812_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255179_MethodInfo/* get */
	, &IList_1_set_Item_m255180_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33812_PropertyInfos[] =
{
	&IList_1_t33812____Item_PropertyInfo,
	NULL
};
extern Il2CppType PrizeType_t3378_0_0_0;
static ParameterInfo IList_1_t33812_IList_1_IndexOf_m255181_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3378_0_0_0},
};
extern TypeInfo IList_1_t33812_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255181_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33812_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33812_IList_1_IndexOf_m255181_ParameterInfos/* parameters */
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
extern Il2CppType PrizeType_t3378_0_0_0;
static ParameterInfo IList_1_t33812_IList_1_Insert_m255182_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3378_0_0_0},
};
extern TypeInfo IList_1_t33812_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255182_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33812_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33812_IList_1_Insert_m255182_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33812_IList_1_RemoveAt_m255183_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33812_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255183_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33812_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33812_IList_1_RemoveAt_m255183_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33812_IList_1_get_Item_m255179_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33812_il2cpp_TypeInfo;
extern Il2CppType PrizeType_t3378_0_0_0;
extern void* RuntimeInvoker_PrizeType_t3378_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255179_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33812_il2cpp_TypeInfo/* declaring_type */
	, &PrizeType_t3378_0_0_0/* return_type */
	, RuntimeInvoker_PrizeType_t3378_Int32_t73/* invoker_method */
	, IList_1_t33812_IList_1_get_Item_m255179_ParameterInfos/* parameters */
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
extern Il2CppType PrizeType_t3378_0_0_0;
static ParameterInfo IList_1_t33812_IList_1_set_Item_m255180_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PrizeType_t3378_0_0_0},
};
extern TypeInfo IList_1_t33812_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_ASK_PAY_ACTIVITY_PRIZE_RET/PrizeType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255180_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33812_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33812_IList_1_set_Item_m255180_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33812_MethodInfos[] =
{
	&IList_1_IndexOf_m255181_MethodInfo,
	&IList_1_Insert_m255182_MethodInfo,
	&IList_1_RemoveAt_m255183_MethodInfo,
	&IList_1_get_Item_m255179_MethodInfo,
	&IList_1_set_Item_m255180_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33811_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33813_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33812_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33811_il2cpp_TypeInfo,
	&IEnumerable_1_t33813_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33812_0_0_0;
extern Il2CppType IList_1_t33812_1_0_0;
struct IList_1_t33812;
extern TypeInfo IList_1_t33812_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33812_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33812_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33812_MethodInfos/* methods */
	, IList_1_t33812_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33812_il2cpp_TypeInfo/* element_class */
	, IList_1_t33812_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33812_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33812_0_0_0/* byval_arg */
	, &IList_1_t33812_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33812_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28203_il2cpp_TypeInfo;

// CG_REQ_CHANGENAME/NameType
#include "AssemblyU2DCSharp_CG_REQ_CHANGENAME_NameType.h"


// T System.Collections.Generic.IEnumerator`1<CG_REQ_CHANGENAME/NameType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<CG_REQ_CHANGENAME/NameType>
extern MethodInfo IEnumerator_1_get_Current_m255184_MethodInfo;
static PropertyInfo IEnumerator_1_t28203____Current_PropertyInfo = 
{
	&IEnumerator_1_t28203_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255184_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28203_PropertyInfos[] =
{
	&IEnumerator_1_t28203____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28203_il2cpp_TypeInfo;
extern Il2CppType NameType_t3391_0_0_0;
extern void* RuntimeInvoker_NameType_t3391 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<CG_REQ_CHANGENAME/NameType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255184_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28203_il2cpp_TypeInfo/* declaring_type */
	, &NameType_t3391_0_0_0/* return_type */
	, RuntimeInvoker_NameType_t3391/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28203_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255184_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28203_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28203_0_0_0;
extern Il2CppType IEnumerator_1_t28203_1_0_0;
struct IEnumerator_1_t28203;
extern TypeInfo IEnumerator_1_t28203_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28203_GenericClass;
TypeInfo IEnumerator_1_t28203_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28203_MethodInfos/* methods */
	, IEnumerator_1_t28203_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28203_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28203_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28203_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28203_0_0_0/* byval_arg */
	, &IEnumerator_1_t28203_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28203_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1877.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1877MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo;
extern TypeInfo NameType_t3391_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149581_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNameType_t3391_m208525_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<CG_REQ_CHANGENAME/NameType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<CG_REQ_CHANGENAME/NameType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisNameType_t3391_m208525 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisNameType_t3391_m208525_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149576_MethodInfo;
 void InternalEnumerator_1__ctor_m149576 (InternalEnumerator_1_t20521 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149577_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149577 (InternalEnumerator_1_t20521 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149578_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149578 (InternalEnumerator_1_t20521 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149581(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149581_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NameType_t3391_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149579_MethodInfo;
 void InternalEnumerator_1_Dispose_m149579 (InternalEnumerator_1_t20521 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149580_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149580 (InternalEnumerator_1_t20521 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149581_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149581 (InternalEnumerator_1_t20521 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisNameType_t3391_m208525(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNameType_t3391_m208525_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20521____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20521, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20521____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20521, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20521_FieldInfos[] =
{
	&InternalEnumerator_1_t20521____array_FieldInfo,
	&InternalEnumerator_1_t20521____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149578_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20521____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20521_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149578_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149581_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20521____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20521_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149581_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20521_PropertyInfos[] =
{
	&InternalEnumerator_1_t20521____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20521____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20521_InternalEnumerator_1__ctor_m149576_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149576_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149576/* method */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20521_InternalEnumerator_1__ctor_m149576_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149577_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149577/* method */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149578_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149578/* method */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149579_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149579/* method */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149580_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149580/* method */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo;
extern Il2CppType NameType_t3391_0_0_0;
extern void* RuntimeInvoker_NameType_t3391 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<CG_REQ_CHANGENAME/NameType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149581_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149581/* method */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* declaring_type */
	, &NameType_t3391_0_0_0/* return_type */
	, RuntimeInvoker_NameType_t3391/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20521_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149576_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149577_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149578_MethodInfo,
	&InternalEnumerator_1_Dispose_m149579_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149580_MethodInfo,
	&InternalEnumerator_1_get_Current_m149581_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149578_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149580_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149577_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149579_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149581_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20521_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149578_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149580_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149577_MethodInfo,
	&InternalEnumerator_1_Dispose_m149579_MethodInfo,
	&InternalEnumerator_1_get_Current_m149581_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28203_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20521_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28203_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28203_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20521_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28203_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20521_0_0_0;
extern Il2CppType InternalEnumerator_1_t20521_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20521_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20521_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20521_MethodInfos/* methods */
	, InternalEnumerator_1_t20521_PropertyInfos/* properties */
	, InternalEnumerator_1_t20521_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20521_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20521_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20521_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20521_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20521_1_0_0/* this_arg */
	, InternalEnumerator_1_t20521_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20521_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20521)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>
extern MethodInfo ICollection_1_get_Count_m255185_MethodInfo;
static PropertyInfo ICollection_1_t33814____Count_PropertyInfo = 
{
	&ICollection_1_t33814_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255185_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255186_MethodInfo;
static PropertyInfo ICollection_1_t33814____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33814_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255186_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33814_PropertyInfos[] =
{
	&ICollection_1_t33814____Count_PropertyInfo,
	&ICollection_1_t33814____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::get_Count()
MethodInfo ICollection_1_get_Count_m255185_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33814_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255186_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33814_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NameType_t3391_0_0_0;
static ParameterInfo ICollection_1_t33814_ICollection_1_Add_m255187_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3391_0_0_0},
};
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::Add(T)
MethodInfo ICollection_1_Add_m255187_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33814_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33814_ICollection_1_Add_m255187_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::Clear()
MethodInfo ICollection_1_Clear_m255188_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33814_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NameType_t3391_0_0_0;
static ParameterInfo ICollection_1_t33814_ICollection_1_Contains_m255189_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3391_0_0_0},
};
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::Contains(T)
MethodInfo ICollection_1_Contains_m255189_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33814_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33814_ICollection_1_Contains_m255189_ParameterInfos/* parameters */
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
extern Il2CppType NameTypeU5BU5D_t26180_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33814_ICollection_1_CopyTo_m255190_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NameTypeU5BU5D_t26180_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255190_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33814_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33814_ICollection_1_CopyTo_m255190_ParameterInfos/* parameters */
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
extern Il2CppType NameType_t3391_0_0_0;
static ParameterInfo ICollection_1_t33814_ICollection_1_Remove_m255191_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3391_0_0_0},
};
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_REQ_CHANGENAME/NameType>::Remove(T)
MethodInfo ICollection_1_Remove_m255191_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33814_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33814_ICollection_1_Remove_m255191_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33814_MethodInfos[] =
{
	&ICollection_1_get_Count_m255185_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255186_MethodInfo,
	&ICollection_1_Add_m255187_MethodInfo,
	&ICollection_1_Clear_m255188_MethodInfo,
	&ICollection_1_Contains_m255189_MethodInfo,
	&ICollection_1_CopyTo_m255190_MethodInfo,
	&ICollection_1_Remove_m255191_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33816_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33814_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33816_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33814_0_0_0;
extern Il2CppType ICollection_1_t33814_1_0_0;
struct ICollection_1_t33814;
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33814_GenericClass;
TypeInfo ICollection_1_t33814_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33814_MethodInfos/* methods */
	, ICollection_1_t33814_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33814_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33814_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33814_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33814_0_0_0/* byval_arg */
	, &ICollection_1_t33814_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33814_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33816_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_REQ_CHANGENAME/NameType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<CG_REQ_CHANGENAME/NameType>
extern TypeInfo IEnumerable_1_t33816_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28203_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_REQ_CHANGENAME/NameType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255192_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33816_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28203_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33816_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255192_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33816_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33816_0_0_0;
extern Il2CppType IEnumerable_1_t33816_1_0_0;
struct IEnumerable_1_t33816;
extern TypeInfo IEnumerable_1_t33816_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33816_GenericClass;
TypeInfo IEnumerable_1_t33816_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33816_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33816_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33816_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33816_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33816_0_0_0/* byval_arg */
	, &IEnumerable_1_t33816_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33816_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33815_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>
extern MethodInfo IList_1_get_Item_m255193_MethodInfo;
extern MethodInfo IList_1_set_Item_m255194_MethodInfo;
static PropertyInfo IList_1_t33815____Item_PropertyInfo = 
{
	&IList_1_t33815_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255193_MethodInfo/* get */
	, &IList_1_set_Item_m255194_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33815_PropertyInfos[] =
{
	&IList_1_t33815____Item_PropertyInfo,
	NULL
};
extern Il2CppType NameType_t3391_0_0_0;
static ParameterInfo IList_1_t33815_IList_1_IndexOf_m255195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3391_0_0_0},
};
extern TypeInfo IList_1_t33815_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255195_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33815_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33815_IList_1_IndexOf_m255195_ParameterInfos/* parameters */
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
extern Il2CppType NameType_t3391_0_0_0;
static ParameterInfo IList_1_t33815_IList_1_Insert_m255196_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NameType_t3391_0_0_0},
};
extern TypeInfo IList_1_t33815_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255196_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33815_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33815_IList_1_Insert_m255196_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33815_IList_1_RemoveAt_m255197_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33815_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255197_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33815_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33815_IList_1_RemoveAt_m255197_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33815_IList_1_get_Item_m255193_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33815_il2cpp_TypeInfo;
extern Il2CppType NameType_t3391_0_0_0;
extern void* RuntimeInvoker_NameType_t3391_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255193_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33815_il2cpp_TypeInfo/* declaring_type */
	, &NameType_t3391_0_0_0/* return_type */
	, RuntimeInvoker_NameType_t3391_Int32_t73/* invoker_method */
	, IList_1_t33815_IList_1_get_Item_m255193_ParameterInfos/* parameters */
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
extern Il2CppType NameType_t3391_0_0_0;
static ParameterInfo IList_1_t33815_IList_1_set_Item_m255194_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NameType_t3391_0_0_0},
};
extern TypeInfo IList_1_t33815_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_REQ_CHANGENAME/NameType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255194_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33815_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33815_IList_1_set_Item_m255194_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33815_MethodInfos[] =
{
	&IList_1_IndexOf_m255195_MethodInfo,
	&IList_1_Insert_m255196_MethodInfo,
	&IList_1_RemoveAt_m255197_MethodInfo,
	&IList_1_get_Item_m255193_MethodInfo,
	&IList_1_set_Item_m255194_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33814_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33816_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33815_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33814_il2cpp_TypeInfo,
	&IEnumerable_1_t33816_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33815_0_0_0;
extern Il2CppType IList_1_t33815_1_0_0;
struct IList_1_t33815;
extern TypeInfo IList_1_t33815_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33815_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33815_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33815_MethodInfos/* methods */
	, IList_1_t33815_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33815_il2cpp_TypeInfo/* element_class */
	, IList_1_t33815_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33815_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33815_0_0_0/* byval_arg */
	, &IList_1_t33815_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33815_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28204_il2cpp_TypeInfo;

// GC_RET_CHANGENAME/NameType
#include "AssemblyU2DCSharp_GC_RET_CHANGENAME_NameType.h"


// T System.Collections.Generic.IEnumerator`1<GC_RET_CHANGENAME/NameType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_RET_CHANGENAME/NameType>
extern MethodInfo IEnumerator_1_get_Current_m255198_MethodInfo;
static PropertyInfo IEnumerator_1_t28204____Current_PropertyInfo = 
{
	&IEnumerator_1_t28204_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255198_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28204_PropertyInfos[] =
{
	&IEnumerator_1_t28204____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28204_il2cpp_TypeInfo;
extern Il2CppType NameType_t3393_0_0_0;
extern void* RuntimeInvoker_NameType_t3393 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_RET_CHANGENAME/NameType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255198_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28204_il2cpp_TypeInfo/* declaring_type */
	, &NameType_t3393_0_0_0/* return_type */
	, RuntimeInvoker_NameType_t3393/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28204_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255198_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28204_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28204_0_0_0;
extern Il2CppType IEnumerator_1_t28204_1_0_0;
struct IEnumerator_1_t28204;
extern TypeInfo IEnumerator_1_t28204_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28204_GenericClass;
TypeInfo IEnumerator_1_t28204_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28204_MethodInfos/* methods */
	, IEnumerator_1_t28204_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28204_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28204_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28204_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28204_0_0_0/* byval_arg */
	, &IEnumerator_1_t28204_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28204_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1878.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1878MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo;
extern TypeInfo NameType_t3393_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149587_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNameType_t3393_m208536_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_RET_CHANGENAME/NameType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_RET_CHANGENAME/NameType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisNameType_t3393_m208536 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisNameType_t3393_m208536_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149582_MethodInfo;
 void InternalEnumerator_1__ctor_m149582 (InternalEnumerator_1_t20522 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149583_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149583 (InternalEnumerator_1_t20522 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149584_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149584 (InternalEnumerator_1_t20522 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149587(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149587_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NameType_t3393_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149585_MethodInfo;
 void InternalEnumerator_1_Dispose_m149585 (InternalEnumerator_1_t20522 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149586_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149586 (InternalEnumerator_1_t20522 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149587_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149587 (InternalEnumerator_1_t20522 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisNameType_t3393_m208536(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNameType_t3393_m208536_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20522____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20522, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20522____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20522, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20522_FieldInfos[] =
{
	&InternalEnumerator_1_t20522____array_FieldInfo,
	&InternalEnumerator_1_t20522____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149584_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20522____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20522_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149584_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149587_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20522____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20522_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149587_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20522_PropertyInfos[] =
{
	&InternalEnumerator_1_t20522____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20522____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20522_InternalEnumerator_1__ctor_m149582_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149582_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149582/* method */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20522_InternalEnumerator_1__ctor_m149582_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149583_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149583/* method */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149584_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149584/* method */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149585_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149585/* method */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149586_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149586/* method */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo;
extern Il2CppType NameType_t3393_0_0_0;
extern void* RuntimeInvoker_NameType_t3393 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_RET_CHANGENAME/NameType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149587_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149587/* method */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* declaring_type */
	, &NameType_t3393_0_0_0/* return_type */
	, RuntimeInvoker_NameType_t3393/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20522_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149582_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149583_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149584_MethodInfo,
	&InternalEnumerator_1_Dispose_m149585_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149586_MethodInfo,
	&InternalEnumerator_1_get_Current_m149587_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149584_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149586_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149583_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149585_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149587_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20522_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149584_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149586_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149583_MethodInfo,
	&InternalEnumerator_1_Dispose_m149585_MethodInfo,
	&InternalEnumerator_1_get_Current_m149587_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28204_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20522_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28204_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28204_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20522_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28204_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20522_0_0_0;
extern Il2CppType InternalEnumerator_1_t20522_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20522_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20522_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20522_MethodInfos/* methods */
	, InternalEnumerator_1_t20522_PropertyInfos/* properties */
	, InternalEnumerator_1_t20522_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20522_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20522_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20522_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20522_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20522_1_0_0/* this_arg */
	, InternalEnumerator_1_t20522_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20522_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20522)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>
extern MethodInfo ICollection_1_get_Count_m255199_MethodInfo;
static PropertyInfo ICollection_1_t33817____Count_PropertyInfo = 
{
	&ICollection_1_t33817_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255199_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255200_MethodInfo;
static PropertyInfo ICollection_1_t33817____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33817_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255200_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33817_PropertyInfos[] =
{
	&ICollection_1_t33817____Count_PropertyInfo,
	&ICollection_1_t33817____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::get_Count()
MethodInfo ICollection_1_get_Count_m255199_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33817_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255200_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33817_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NameType_t3393_0_0_0;
static ParameterInfo ICollection_1_t33817_ICollection_1_Add_m255201_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3393_0_0_0},
};
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::Add(T)
MethodInfo ICollection_1_Add_m255201_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33817_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33817_ICollection_1_Add_m255201_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::Clear()
MethodInfo ICollection_1_Clear_m255202_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33817_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NameType_t3393_0_0_0;
static ParameterInfo ICollection_1_t33817_ICollection_1_Contains_m255203_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3393_0_0_0},
};
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::Contains(T)
MethodInfo ICollection_1_Contains_m255203_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33817_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33817_ICollection_1_Contains_m255203_ParameterInfos/* parameters */
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
extern Il2CppType NameTypeU5BU5D_t26181_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33817_ICollection_1_CopyTo_m255204_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NameTypeU5BU5D_t26181_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255204_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33817_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33817_ICollection_1_CopyTo_m255204_ParameterInfos/* parameters */
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
extern Il2CppType NameType_t3393_0_0_0;
static ParameterInfo ICollection_1_t33817_ICollection_1_Remove_m255205_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3393_0_0_0},
};
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_RET_CHANGENAME/NameType>::Remove(T)
MethodInfo ICollection_1_Remove_m255205_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33817_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33817_ICollection_1_Remove_m255205_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33817_MethodInfos[] =
{
	&ICollection_1_get_Count_m255199_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255200_MethodInfo,
	&ICollection_1_Add_m255201_MethodInfo,
	&ICollection_1_Clear_m255202_MethodInfo,
	&ICollection_1_Contains_m255203_MethodInfo,
	&ICollection_1_CopyTo_m255204_MethodInfo,
	&ICollection_1_Remove_m255205_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33819_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33817_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33819_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33817_0_0_0;
extern Il2CppType ICollection_1_t33817_1_0_0;
struct ICollection_1_t33817;
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33817_GenericClass;
TypeInfo ICollection_1_t33817_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33817_MethodInfos/* methods */
	, ICollection_1_t33817_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33817_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33817_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33817_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33817_0_0_0/* byval_arg */
	, &ICollection_1_t33817_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33817_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33819_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_RET_CHANGENAME/NameType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_RET_CHANGENAME/NameType>
extern TypeInfo IEnumerable_1_t33819_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28204_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_RET_CHANGENAME/NameType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255206_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33819_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28204_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33819_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255206_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33819_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33819_0_0_0;
extern Il2CppType IEnumerable_1_t33819_1_0_0;
struct IEnumerable_1_t33819;
extern TypeInfo IEnumerable_1_t33819_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33819_GenericClass;
TypeInfo IEnumerable_1_t33819_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33819_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33819_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33819_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33819_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33819_0_0_0/* byval_arg */
	, &IEnumerable_1_t33819_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33819_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33818_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>
extern MethodInfo IList_1_get_Item_m255207_MethodInfo;
extern MethodInfo IList_1_set_Item_m255208_MethodInfo;
static PropertyInfo IList_1_t33818____Item_PropertyInfo = 
{
	&IList_1_t33818_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255207_MethodInfo/* get */
	, &IList_1_set_Item_m255208_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33818_PropertyInfos[] =
{
	&IList_1_t33818____Item_PropertyInfo,
	NULL
};
extern Il2CppType NameType_t3393_0_0_0;
static ParameterInfo IList_1_t33818_IList_1_IndexOf_m255209_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3393_0_0_0},
};
extern TypeInfo IList_1_t33818_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255209_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33818_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33818_IList_1_IndexOf_m255209_ParameterInfos/* parameters */
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
extern Il2CppType NameType_t3393_0_0_0;
static ParameterInfo IList_1_t33818_IList_1_Insert_m255210_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NameType_t3393_0_0_0},
};
extern TypeInfo IList_1_t33818_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255210_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33818_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33818_IList_1_Insert_m255210_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33818_IList_1_RemoveAt_m255211_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33818_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255211_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33818_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33818_IList_1_RemoveAt_m255211_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33818_IList_1_get_Item_m255207_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33818_il2cpp_TypeInfo;
extern Il2CppType NameType_t3393_0_0_0;
extern void* RuntimeInvoker_NameType_t3393_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255207_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33818_il2cpp_TypeInfo/* declaring_type */
	, &NameType_t3393_0_0_0/* return_type */
	, RuntimeInvoker_NameType_t3393_Int32_t73/* invoker_method */
	, IList_1_t33818_IList_1_get_Item_m255207_ParameterInfos/* parameters */
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
extern Il2CppType NameType_t3393_0_0_0;
static ParameterInfo IList_1_t33818_IList_1_set_Item_m255208_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NameType_t3393_0_0_0},
};
extern TypeInfo IList_1_t33818_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_RET_CHANGENAME/NameType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255208_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33818_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33818_IList_1_set_Item_m255208_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33818_MethodInfos[] =
{
	&IList_1_IndexOf_m255209_MethodInfo,
	&IList_1_Insert_m255210_MethodInfo,
	&IList_1_RemoveAt_m255211_MethodInfo,
	&IList_1_get_Item_m255207_MethodInfo,
	&IList_1_set_Item_m255208_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33817_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33819_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33818_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33817_il2cpp_TypeInfo,
	&IEnumerable_1_t33819_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33818_0_0_0;
extern Il2CppType IList_1_t33818_1_0_0;
struct IList_1_t33818;
extern TypeInfo IList_1_t33818_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33818_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33818_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33818_MethodInfos/* methods */
	, IList_1_t33818_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33818_il2cpp_TypeInfo/* element_class */
	, IList_1_t33818_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33818_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33818_0_0_0/* byval_arg */
	, &IList_1_t33818_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33818_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28205_il2cpp_TypeInfo;

// GC_CHANGENAME/NameType
#include "AssemblyU2DCSharp_GC_CHANGENAME_NameType.h"


// T System.Collections.Generic.IEnumerator`1<GC_CHANGENAME/NameType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_CHANGENAME/NameType>
extern MethodInfo IEnumerator_1_get_Current_m255212_MethodInfo;
static PropertyInfo IEnumerator_1_t28205____Current_PropertyInfo = 
{
	&IEnumerator_1_t28205_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255212_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28205_PropertyInfos[] =
{
	&IEnumerator_1_t28205____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28205_il2cpp_TypeInfo;
extern Il2CppType NameType_t3399_0_0_0;
extern void* RuntimeInvoker_NameType_t3399 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_CHANGENAME/NameType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255212_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28205_il2cpp_TypeInfo/* declaring_type */
	, &NameType_t3399_0_0_0/* return_type */
	, RuntimeInvoker_NameType_t3399/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28205_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255212_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28205_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28205_0_0_0;
extern Il2CppType IEnumerator_1_t28205_1_0_0;
struct IEnumerator_1_t28205;
extern TypeInfo IEnumerator_1_t28205_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28205_GenericClass;
TypeInfo IEnumerator_1_t28205_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28205_MethodInfos/* methods */
	, IEnumerator_1_t28205_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28205_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28205_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28205_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28205_0_0_0/* byval_arg */
	, &IEnumerator_1_t28205_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28205_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1879.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1879MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo;
extern TypeInfo NameType_t3399_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149593_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNameType_t3399_m208547_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_CHANGENAME/NameType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_CHANGENAME/NameType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisNameType_t3399_m208547 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisNameType_t3399_m208547_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149588_MethodInfo;
 void InternalEnumerator_1__ctor_m149588 (InternalEnumerator_1_t20523 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149589_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149589 (InternalEnumerator_1_t20523 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149590_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149590 (InternalEnumerator_1_t20523 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149593(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149593_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NameType_t3399_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149591_MethodInfo;
 void InternalEnumerator_1_Dispose_m149591 (InternalEnumerator_1_t20523 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149592_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149592 (InternalEnumerator_1_t20523 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149593_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149593 (InternalEnumerator_1_t20523 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisNameType_t3399_m208547(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNameType_t3399_m208547_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20523____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20523, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20523____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20523, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20523_FieldInfos[] =
{
	&InternalEnumerator_1_t20523____array_FieldInfo,
	&InternalEnumerator_1_t20523____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149590_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20523____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20523_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149590_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149593_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20523____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20523_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149593_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20523_PropertyInfos[] =
{
	&InternalEnumerator_1_t20523____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20523____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20523_InternalEnumerator_1__ctor_m149588_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149588_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149588/* method */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20523_InternalEnumerator_1__ctor_m149588_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149589_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149589/* method */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149590_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149590/* method */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149591_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149591/* method */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149592_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149592/* method */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo;
extern Il2CppType NameType_t3399_0_0_0;
extern void* RuntimeInvoker_NameType_t3399 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_CHANGENAME/NameType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149593_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149593/* method */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* declaring_type */
	, &NameType_t3399_0_0_0/* return_type */
	, RuntimeInvoker_NameType_t3399/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20523_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149588_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149589_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149590_MethodInfo,
	&InternalEnumerator_1_Dispose_m149591_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149592_MethodInfo,
	&InternalEnumerator_1_get_Current_m149593_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149590_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149592_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149589_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149591_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149593_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20523_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149590_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149592_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149589_MethodInfo,
	&InternalEnumerator_1_Dispose_m149591_MethodInfo,
	&InternalEnumerator_1_get_Current_m149593_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28205_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20523_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28205_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28205_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20523_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28205_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20523_0_0_0;
extern Il2CppType InternalEnumerator_1_t20523_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20523_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20523_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20523_MethodInfos/* methods */
	, InternalEnumerator_1_t20523_PropertyInfos/* properties */
	, InternalEnumerator_1_t20523_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20523_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20523_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20523_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20523_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20523_1_0_0/* this_arg */
	, InternalEnumerator_1_t20523_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20523_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20523)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>
extern MethodInfo ICollection_1_get_Count_m255213_MethodInfo;
static PropertyInfo ICollection_1_t33820____Count_PropertyInfo = 
{
	&ICollection_1_t33820_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255214_MethodInfo;
static PropertyInfo ICollection_1_t33820____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33820_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255214_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33820_PropertyInfos[] =
{
	&ICollection_1_t33820____Count_PropertyInfo,
	&ICollection_1_t33820____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::get_Count()
MethodInfo ICollection_1_get_Count_m255213_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33820_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255214_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33820_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NameType_t3399_0_0_0;
static ParameterInfo ICollection_1_t33820_ICollection_1_Add_m255215_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3399_0_0_0},
};
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::Add(T)
MethodInfo ICollection_1_Add_m255215_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33820_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33820_ICollection_1_Add_m255215_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::Clear()
MethodInfo ICollection_1_Clear_m255216_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33820_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NameType_t3399_0_0_0;
static ParameterInfo ICollection_1_t33820_ICollection_1_Contains_m255217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3399_0_0_0},
};
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::Contains(T)
MethodInfo ICollection_1_Contains_m255217_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33820_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33820_ICollection_1_Contains_m255217_ParameterInfos/* parameters */
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
extern Il2CppType NameTypeU5BU5D_t26182_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33820_ICollection_1_CopyTo_m255218_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NameTypeU5BU5D_t26182_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255218_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33820_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33820_ICollection_1_CopyTo_m255218_ParameterInfos/* parameters */
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
extern Il2CppType NameType_t3399_0_0_0;
static ParameterInfo ICollection_1_t33820_ICollection_1_Remove_m255219_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3399_0_0_0},
};
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_CHANGENAME/NameType>::Remove(T)
MethodInfo ICollection_1_Remove_m255219_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33820_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33820_ICollection_1_Remove_m255219_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33820_MethodInfos[] =
{
	&ICollection_1_get_Count_m255213_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255214_MethodInfo,
	&ICollection_1_Add_m255215_MethodInfo,
	&ICollection_1_Clear_m255216_MethodInfo,
	&ICollection_1_Contains_m255217_MethodInfo,
	&ICollection_1_CopyTo_m255218_MethodInfo,
	&ICollection_1_Remove_m255219_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33822_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33820_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33822_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33820_0_0_0;
extern Il2CppType ICollection_1_t33820_1_0_0;
struct ICollection_1_t33820;
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33820_GenericClass;
TypeInfo ICollection_1_t33820_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33820_MethodInfos/* methods */
	, ICollection_1_t33820_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33820_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33820_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33820_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33820_0_0_0/* byval_arg */
	, &ICollection_1_t33820_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33820_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33822_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_CHANGENAME/NameType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_CHANGENAME/NameType>
extern TypeInfo IEnumerable_1_t33822_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28205_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_CHANGENAME/NameType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255220_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33822_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28205_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33822_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255220_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33822_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33822_0_0_0;
extern Il2CppType IEnumerable_1_t33822_1_0_0;
struct IEnumerable_1_t33822;
extern TypeInfo IEnumerable_1_t33822_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33822_GenericClass;
TypeInfo IEnumerable_1_t33822_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33822_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33822_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33822_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33822_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33822_0_0_0/* byval_arg */
	, &IEnumerable_1_t33822_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33822_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33821_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>
extern MethodInfo IList_1_get_Item_m255221_MethodInfo;
extern MethodInfo IList_1_set_Item_m255222_MethodInfo;
static PropertyInfo IList_1_t33821____Item_PropertyInfo = 
{
	&IList_1_t33821_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255221_MethodInfo/* get */
	, &IList_1_set_Item_m255222_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33821_PropertyInfos[] =
{
	&IList_1_t33821____Item_PropertyInfo,
	NULL
};
extern Il2CppType NameType_t3399_0_0_0;
static ParameterInfo IList_1_t33821_IList_1_IndexOf_m255223_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NameType_t3399_0_0_0},
};
extern TypeInfo IList_1_t33821_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255223_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33821_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33821_IList_1_IndexOf_m255223_ParameterInfos/* parameters */
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
extern Il2CppType NameType_t3399_0_0_0;
static ParameterInfo IList_1_t33821_IList_1_Insert_m255224_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NameType_t3399_0_0_0},
};
extern TypeInfo IList_1_t33821_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255224_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33821_IList_1_Insert_m255224_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33821_IList_1_RemoveAt_m255225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33821_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255225_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33821_IList_1_RemoveAt_m255225_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33821_IList_1_get_Item_m255221_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33821_il2cpp_TypeInfo;
extern Il2CppType NameType_t3399_0_0_0;
extern void* RuntimeInvoker_NameType_t3399_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255221_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33821_il2cpp_TypeInfo/* declaring_type */
	, &NameType_t3399_0_0_0/* return_type */
	, RuntimeInvoker_NameType_t3399_Int32_t73/* invoker_method */
	, IList_1_t33821_IList_1_get_Item_m255221_ParameterInfos/* parameters */
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
extern Il2CppType NameType_t3399_0_0_0;
static ParameterInfo IList_1_t33821_IList_1_set_Item_m255222_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NameType_t3399_0_0_0},
};
extern TypeInfo IList_1_t33821_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_CHANGENAME/NameType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255222_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33821_IList_1_set_Item_m255222_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33821_MethodInfos[] =
{
	&IList_1_IndexOf_m255223_MethodInfo,
	&IList_1_Insert_m255224_MethodInfo,
	&IList_1_RemoveAt_m255225_MethodInfo,
	&IList_1_get_Item_m255221_MethodInfo,
	&IList_1_set_Item_m255222_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33820_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33822_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33821_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33820_il2cpp_TypeInfo,
	&IEnumerable_1_t33822_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33821_0_0_0;
extern Il2CppType IList_1_t33821_1_0_0;
struct IList_1_t33821;
extern TypeInfo IList_1_t33821_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33821_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33821_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33821_MethodInfos/* methods */
	, IList_1_t33821_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33821_il2cpp_TypeInfo/* element_class */
	, IList_1_t33821_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33821_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33821_0_0_0/* byval_arg */
	, &IList_1_t33821_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33821_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28206_il2cpp_TypeInfo;

// GC_BROADCASTPSSTATE/PSSTATE
#include "AssemblyU2DCSharp_GC_BROADCASTPSSTATE_PSSTATE.h"


// T System.Collections.Generic.IEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>
extern MethodInfo IEnumerator_1_get_Current_m255226_MethodInfo;
static PropertyInfo IEnumerator_1_t28206____Current_PropertyInfo = 
{
	&IEnumerator_1_t28206_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255226_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28206_PropertyInfos[] =
{
	&IEnumerator_1_t28206____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28206_il2cpp_TypeInfo;
extern Il2CppType PSSTATE_t3458_0_0_0;
extern void* RuntimeInvoker_PSSTATE_t3458 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255226_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28206_il2cpp_TypeInfo/* declaring_type */
	, &PSSTATE_t3458_0_0_0/* return_type */
	, RuntimeInvoker_PSSTATE_t3458/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28206_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255226_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28206_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28206_0_0_0;
extern Il2CppType IEnumerator_1_t28206_1_0_0;
struct IEnumerator_1_t28206;
extern TypeInfo IEnumerator_1_t28206_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28206_GenericClass;
TypeInfo IEnumerator_1_t28206_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28206_MethodInfos/* methods */
	, IEnumerator_1_t28206_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28206_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28206_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28206_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28206_0_0_0/* byval_arg */
	, &IEnumerator_1_t28206_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28206_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1880.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1880MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo;
extern TypeInfo PSSTATE_t3458_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149599_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPSSTATE_t3458_m208558_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_BROADCASTPSSTATE/PSSTATE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_BROADCASTPSSTATE/PSSTATE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPSSTATE_t3458_m208558 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisPSSTATE_t3458_m208558_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149594_MethodInfo;
 void InternalEnumerator_1__ctor_m149594 (InternalEnumerator_1_t20524 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149595_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149595 (InternalEnumerator_1_t20524 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149596_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149596 (InternalEnumerator_1_t20524 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149599(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149599_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PSSTATE_t3458_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149597_MethodInfo;
 void InternalEnumerator_1_Dispose_m149597 (InternalEnumerator_1_t20524 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149598_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149598 (InternalEnumerator_1_t20524 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149599_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149599 (InternalEnumerator_1_t20524 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPSSTATE_t3458_m208558(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPSSTATE_t3458_m208558_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20524____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20524, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20524____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20524, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20524_FieldInfos[] =
{
	&InternalEnumerator_1_t20524____array_FieldInfo,
	&InternalEnumerator_1_t20524____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149596_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20524____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20524_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149596_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149599_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20524____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20524_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149599_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20524_PropertyInfos[] =
{
	&InternalEnumerator_1_t20524____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20524____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20524_InternalEnumerator_1__ctor_m149594_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149594_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149594/* method */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20524_InternalEnumerator_1__ctor_m149594_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149595_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149595/* method */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149596_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149596/* method */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149597_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149597/* method */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149598_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149598/* method */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo;
extern Il2CppType PSSTATE_t3458_0_0_0;
extern void* RuntimeInvoker_PSSTATE_t3458 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_BROADCASTPSSTATE/PSSTATE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149599_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149599/* method */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* declaring_type */
	, &PSSTATE_t3458_0_0_0/* return_type */
	, RuntimeInvoker_PSSTATE_t3458/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20524_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149594_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149595_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149596_MethodInfo,
	&InternalEnumerator_1_Dispose_m149597_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149598_MethodInfo,
	&InternalEnumerator_1_get_Current_m149599_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149596_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149598_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149595_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149597_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149599_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20524_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149596_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149598_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149595_MethodInfo,
	&InternalEnumerator_1_Dispose_m149597_MethodInfo,
	&InternalEnumerator_1_get_Current_m149599_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28206_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20524_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28206_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28206_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20524_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28206_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20524_0_0_0;
extern Il2CppType InternalEnumerator_1_t20524_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20524_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20524_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20524_MethodInfos/* methods */
	, InternalEnumerator_1_t20524_PropertyInfos/* properties */
	, InternalEnumerator_1_t20524_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20524_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20524_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20524_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20524_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20524_1_0_0/* this_arg */
	, InternalEnumerator_1_t20524_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20524_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20524)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>
extern MethodInfo ICollection_1_get_Count_m255227_MethodInfo;
static PropertyInfo ICollection_1_t33823____Count_PropertyInfo = 
{
	&ICollection_1_t33823_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255227_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255228_MethodInfo;
static PropertyInfo ICollection_1_t33823____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33823_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255228_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33823_PropertyInfos[] =
{
	&ICollection_1_t33823____Count_PropertyInfo,
	&ICollection_1_t33823____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::get_Count()
MethodInfo ICollection_1_get_Count_m255227_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33823_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255228_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33823_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PSSTATE_t3458_0_0_0;
static ParameterInfo ICollection_1_t33823_ICollection_1_Add_m255229_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PSSTATE_t3458_0_0_0},
};
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::Add(T)
MethodInfo ICollection_1_Add_m255229_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33823_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33823_ICollection_1_Add_m255229_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::Clear()
MethodInfo ICollection_1_Clear_m255230_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33823_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PSSTATE_t3458_0_0_0;
static ParameterInfo ICollection_1_t33823_ICollection_1_Contains_m255231_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PSSTATE_t3458_0_0_0},
};
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::Contains(T)
MethodInfo ICollection_1_Contains_m255231_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33823_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33823_ICollection_1_Contains_m255231_ParameterInfos/* parameters */
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
extern Il2CppType PSSTATEU5BU5D_t26183_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33823_ICollection_1_CopyTo_m255232_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PSSTATEU5BU5D_t26183_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255232_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33823_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33823_ICollection_1_CopyTo_m255232_ParameterInfos/* parameters */
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
extern Il2CppType PSSTATE_t3458_0_0_0;
static ParameterInfo ICollection_1_t33823_ICollection_1_Remove_m255233_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PSSTATE_t3458_0_0_0},
};
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_BROADCASTPSSTATE/PSSTATE>::Remove(T)
MethodInfo ICollection_1_Remove_m255233_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33823_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33823_ICollection_1_Remove_m255233_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33823_MethodInfos[] =
{
	&ICollection_1_get_Count_m255227_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255228_MethodInfo,
	&ICollection_1_Add_m255229_MethodInfo,
	&ICollection_1_Clear_m255230_MethodInfo,
	&ICollection_1_Contains_m255231_MethodInfo,
	&ICollection_1_CopyTo_m255232_MethodInfo,
	&ICollection_1_Remove_m255233_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33825_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33823_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33825_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33823_0_0_0;
extern Il2CppType ICollection_1_t33823_1_0_0;
struct ICollection_1_t33823;
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33823_GenericClass;
TypeInfo ICollection_1_t33823_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33823_MethodInfos/* methods */
	, ICollection_1_t33823_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33823_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33823_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33823_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33823_0_0_0/* byval_arg */
	, &ICollection_1_t33823_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33823_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33825_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_BROADCASTPSSTATE/PSSTATE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_BROADCASTPSSTATE/PSSTATE>
extern TypeInfo IEnumerable_1_t33825_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28206_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_BROADCASTPSSTATE/PSSTATE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255234_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33825_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28206_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33825_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255234_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33825_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33825_0_0_0;
extern Il2CppType IEnumerable_1_t33825_1_0_0;
struct IEnumerable_1_t33825;
extern TypeInfo IEnumerable_1_t33825_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33825_GenericClass;
TypeInfo IEnumerable_1_t33825_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33825_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33825_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33825_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33825_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33825_0_0_0/* byval_arg */
	, &IEnumerable_1_t33825_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33825_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33824_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>
extern MethodInfo IList_1_get_Item_m255235_MethodInfo;
extern MethodInfo IList_1_set_Item_m255236_MethodInfo;
static PropertyInfo IList_1_t33824____Item_PropertyInfo = 
{
	&IList_1_t33824_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255235_MethodInfo/* get */
	, &IList_1_set_Item_m255236_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33824_PropertyInfos[] =
{
	&IList_1_t33824____Item_PropertyInfo,
	NULL
};
extern Il2CppType PSSTATE_t3458_0_0_0;
static ParameterInfo IList_1_t33824_IList_1_IndexOf_m255237_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PSSTATE_t3458_0_0_0},
};
extern TypeInfo IList_1_t33824_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255237_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33824_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33824_IList_1_IndexOf_m255237_ParameterInfos/* parameters */
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
extern Il2CppType PSSTATE_t3458_0_0_0;
static ParameterInfo IList_1_t33824_IList_1_Insert_m255238_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PSSTATE_t3458_0_0_0},
};
extern TypeInfo IList_1_t33824_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255238_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33824_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33824_IList_1_Insert_m255238_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33824_IList_1_RemoveAt_m255239_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33824_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255239_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33824_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33824_IList_1_RemoveAt_m255239_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33824_IList_1_get_Item_m255235_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33824_il2cpp_TypeInfo;
extern Il2CppType PSSTATE_t3458_0_0_0;
extern void* RuntimeInvoker_PSSTATE_t3458_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255235_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33824_il2cpp_TypeInfo/* declaring_type */
	, &PSSTATE_t3458_0_0_0/* return_type */
	, RuntimeInvoker_PSSTATE_t3458_Int32_t73/* invoker_method */
	, IList_1_t33824_IList_1_get_Item_m255235_ParameterInfos/* parameters */
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
extern Il2CppType PSSTATE_t3458_0_0_0;
static ParameterInfo IList_1_t33824_IList_1_set_Item_m255236_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PSSTATE_t3458_0_0_0},
};
extern TypeInfo IList_1_t33824_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_BROADCASTPSSTATE/PSSTATE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255236_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33824_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33824_IList_1_set_Item_m255236_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33824_MethodInfos[] =
{
	&IList_1_IndexOf_m255237_MethodInfo,
	&IList_1_Insert_m255238_MethodInfo,
	&IList_1_RemoveAt_m255239_MethodInfo,
	&IList_1_get_Item_m255235_MethodInfo,
	&IList_1_set_Item_m255236_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33823_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33825_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33824_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33823_il2cpp_TypeInfo,
	&IEnumerable_1_t33825_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33824_0_0_0;
extern Il2CppType IList_1_t33824_1_0_0;
struct IList_1_t33824;
extern TypeInfo IList_1_t33824_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33824_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33824_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33824_MethodInfos/* methods */
	, IList_1_t33824_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33824_il2cpp_TypeInfo/* element_class */
	, IList_1_t33824_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33824_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33824_0_0_0/* byval_arg */
	, &IList_1_t33824_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33824_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28207_il2cpp_TypeInfo;

// CG_TEAM_INVITEFOLLOW_RESULT/ResultType
#include "AssemblyU2DCSharp_CG_TEAM_INVITEFOLLOW_RESULT_ResultType.h"


// T System.Collections.Generic.IEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>
extern MethodInfo IEnumerator_1_get_Current_m255240_MethodInfo;
static PropertyInfo IEnumerator_1_t28207____Current_PropertyInfo = 
{
	&IEnumerator_1_t28207_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255240_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28207_PropertyInfos[] =
{
	&IEnumerator_1_t28207____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28207_il2cpp_TypeInfo;
extern Il2CppType ResultType_t3494_0_0_0;
extern void* RuntimeInvoker_ResultType_t3494 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255240_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28207_il2cpp_TypeInfo/* declaring_type */
	, &ResultType_t3494_0_0_0/* return_type */
	, RuntimeInvoker_ResultType_t3494/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28207_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255240_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28207_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28207_0_0_0;
extern Il2CppType IEnumerator_1_t28207_1_0_0;
struct IEnumerator_1_t28207;
extern TypeInfo IEnumerator_1_t28207_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28207_GenericClass;
TypeInfo IEnumerator_1_t28207_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28207_MethodInfos/* methods */
	, IEnumerator_1_t28207_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28207_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28207_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28207_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28207_0_0_0/* byval_arg */
	, &IEnumerator_1_t28207_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28207_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1881.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1881MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo;
extern TypeInfo ResultType_t3494_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149605_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisResultType_t3494_m208569_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisResultType_t3494_m208569 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisResultType_t3494_m208569_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149600_MethodInfo;
 void InternalEnumerator_1__ctor_m149600 (InternalEnumerator_1_t20525 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149601_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149601 (InternalEnumerator_1_t20525 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149602_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149602 (InternalEnumerator_1_t20525 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149605(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149605_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ResultType_t3494_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149603_MethodInfo;
 void InternalEnumerator_1_Dispose_m149603 (InternalEnumerator_1_t20525 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149604_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149604 (InternalEnumerator_1_t20525 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149605_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149605 (InternalEnumerator_1_t20525 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisResultType_t3494_m208569(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisResultType_t3494_m208569_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20525____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20525, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20525____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20525, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20525_FieldInfos[] =
{
	&InternalEnumerator_1_t20525____array_FieldInfo,
	&InternalEnumerator_1_t20525____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149602_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20525____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20525_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149602_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149605_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20525____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20525_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149605_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20525_PropertyInfos[] =
{
	&InternalEnumerator_1_t20525____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20525____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20525_InternalEnumerator_1__ctor_m149600_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149600_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149600/* method */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20525_InternalEnumerator_1__ctor_m149600_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149601_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149601/* method */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149602_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149602/* method */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149603_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149603/* method */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149604_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149604/* method */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo;
extern Il2CppType ResultType_t3494_0_0_0;
extern void* RuntimeInvoker_ResultType_t3494 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149605_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149605/* method */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* declaring_type */
	, &ResultType_t3494_0_0_0/* return_type */
	, RuntimeInvoker_ResultType_t3494/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20525_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149600_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149601_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149602_MethodInfo,
	&InternalEnumerator_1_Dispose_m149603_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149604_MethodInfo,
	&InternalEnumerator_1_get_Current_m149605_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149602_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149604_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149601_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149603_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149605_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20525_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149602_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149604_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149601_MethodInfo,
	&InternalEnumerator_1_Dispose_m149603_MethodInfo,
	&InternalEnumerator_1_get_Current_m149605_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28207_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20525_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28207_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28207_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20525_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28207_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20525_0_0_0;
extern Il2CppType InternalEnumerator_1_t20525_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20525_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20525_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20525_MethodInfos/* methods */
	, InternalEnumerator_1_t20525_PropertyInfos/* properties */
	, InternalEnumerator_1_t20525_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20525_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20525_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20525_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20525_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20525_1_0_0/* this_arg */
	, InternalEnumerator_1_t20525_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20525_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20525)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>
extern MethodInfo ICollection_1_get_Count_m255241_MethodInfo;
static PropertyInfo ICollection_1_t33826____Count_PropertyInfo = 
{
	&ICollection_1_t33826_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255241_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255242_MethodInfo;
static PropertyInfo ICollection_1_t33826____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33826_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255242_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33826_PropertyInfos[] =
{
	&ICollection_1_t33826____Count_PropertyInfo,
	&ICollection_1_t33826____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_Count()
MethodInfo ICollection_1_get_Count_m255241_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33826_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255242_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33826_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ResultType_t3494_0_0_0;
static ParameterInfo ICollection_1_t33826_ICollection_1_Add_m255243_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ResultType_t3494_0_0_0},
};
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Add(T)
MethodInfo ICollection_1_Add_m255243_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33826_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33826_ICollection_1_Add_m255243_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Clear()
MethodInfo ICollection_1_Clear_m255244_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33826_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ResultType_t3494_0_0_0;
static ParameterInfo ICollection_1_t33826_ICollection_1_Contains_m255245_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ResultType_t3494_0_0_0},
};
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Contains(T)
MethodInfo ICollection_1_Contains_m255245_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33826_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33826_ICollection_1_Contains_m255245_ParameterInfos/* parameters */
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
extern Il2CppType ResultTypeU5BU5D_t26184_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33826_ICollection_1_CopyTo_m255246_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ResultTypeU5BU5D_t26184_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255246_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33826_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33826_ICollection_1_CopyTo_m255246_ParameterInfos/* parameters */
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
extern Il2CppType ResultType_t3494_0_0_0;
static ParameterInfo ICollection_1_t33826_ICollection_1_Remove_m255247_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ResultType_t3494_0_0_0},
};
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Remove(T)
MethodInfo ICollection_1_Remove_m255247_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33826_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33826_ICollection_1_Remove_m255247_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33826_MethodInfos[] =
{
	&ICollection_1_get_Count_m255241_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255242_MethodInfo,
	&ICollection_1_Add_m255243_MethodInfo,
	&ICollection_1_Clear_m255244_MethodInfo,
	&ICollection_1_Contains_m255245_MethodInfo,
	&ICollection_1_CopyTo_m255246_MethodInfo,
	&ICollection_1_Remove_m255247_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33828_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33826_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33828_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33826_0_0_0;
extern Il2CppType ICollection_1_t33826_1_0_0;
struct ICollection_1_t33826;
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33826_GenericClass;
TypeInfo ICollection_1_t33826_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33826_MethodInfos/* methods */
	, ICollection_1_t33826_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33826_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33826_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33826_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33826_0_0_0/* byval_arg */
	, &ICollection_1_t33826_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33826_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33828_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>
extern TypeInfo IEnumerable_1_t33828_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28207_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255248_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33828_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28207_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33828_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255248_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33828_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33828_0_0_0;
extern Il2CppType IEnumerable_1_t33828_1_0_0;
struct IEnumerable_1_t33828;
extern TypeInfo IEnumerable_1_t33828_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33828_GenericClass;
TypeInfo IEnumerable_1_t33828_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33828_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33828_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33828_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33828_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33828_0_0_0/* byval_arg */
	, &IEnumerable_1_t33828_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33828_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33827_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>
extern MethodInfo IList_1_get_Item_m255249_MethodInfo;
extern MethodInfo IList_1_set_Item_m255250_MethodInfo;
static PropertyInfo IList_1_t33827____Item_PropertyInfo = 
{
	&IList_1_t33827_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255249_MethodInfo/* get */
	, &IList_1_set_Item_m255250_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33827_PropertyInfos[] =
{
	&IList_1_t33827____Item_PropertyInfo,
	NULL
};
extern Il2CppType ResultType_t3494_0_0_0;
static ParameterInfo IList_1_t33827_IList_1_IndexOf_m255251_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ResultType_t3494_0_0_0},
};
extern TypeInfo IList_1_t33827_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255251_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33827_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33827_IList_1_IndexOf_m255251_ParameterInfos/* parameters */
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
extern Il2CppType ResultType_t3494_0_0_0;
static ParameterInfo IList_1_t33827_IList_1_Insert_m255252_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ResultType_t3494_0_0_0},
};
extern TypeInfo IList_1_t33827_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255252_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33827_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33827_IList_1_Insert_m255252_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33827_IList_1_RemoveAt_m255253_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33827_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255253_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33827_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33827_IList_1_RemoveAt_m255253_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33827_IList_1_get_Item_m255249_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33827_il2cpp_TypeInfo;
extern Il2CppType ResultType_t3494_0_0_0;
extern void* RuntimeInvoker_ResultType_t3494_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255249_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33827_il2cpp_TypeInfo/* declaring_type */
	, &ResultType_t3494_0_0_0/* return_type */
	, RuntimeInvoker_ResultType_t3494_Int32_t73/* invoker_method */
	, IList_1_t33827_IList_1_get_Item_m255249_ParameterInfos/* parameters */
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
extern Il2CppType ResultType_t3494_0_0_0;
static ParameterInfo IList_1_t33827_IList_1_set_Item_m255250_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ResultType_t3494_0_0_0},
};
extern TypeInfo IList_1_t33827_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_TEAM_INVITEFOLLOW_RESULT/ResultType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255250_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33827_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33827_IList_1_set_Item_m255250_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33827_MethodInfos[] =
{
	&IList_1_IndexOf_m255251_MethodInfo,
	&IList_1_Insert_m255252_MethodInfo,
	&IList_1_RemoveAt_m255253_MethodInfo,
	&IList_1_get_Item_m255249_MethodInfo,
	&IList_1_set_Item_m255250_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33826_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33828_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33827_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33826_il2cpp_TypeInfo,
	&IEnumerable_1_t33828_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33827_0_0_0;
extern Il2CppType IList_1_t33827_1_0_0;
struct IList_1_t33827;
extern TypeInfo IList_1_t33827_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33827_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33827_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33827_MethodInfos/* methods */
	, IList_1_t33827_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33827_il2cpp_TypeInfo/* element_class */
	, IList_1_t33827_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33827_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33827_0_0_0/* byval_arg */
	, &IList_1_t33827_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33827_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28208_il2cpp_TypeInfo;

// GC_WULIN_STATE/WULINSTATE
#include "AssemblyU2DCSharp_GC_WULIN_STATE_WULINSTATE.h"


// T System.Collections.Generic.IEnumerator`1<GC_WULIN_STATE/WULINSTATE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<GC_WULIN_STATE/WULINSTATE>
extern MethodInfo IEnumerator_1_get_Current_m255254_MethodInfo;
static PropertyInfo IEnumerator_1_t28208____Current_PropertyInfo = 
{
	&IEnumerator_1_t28208_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255254_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28208_PropertyInfos[] =
{
	&IEnumerator_1_t28208____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28208_il2cpp_TypeInfo;
extern Il2CppType WULINSTATE_t3502_0_0_0;
extern void* RuntimeInvoker_WULINSTATE_t3502 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<GC_WULIN_STATE/WULINSTATE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255254_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28208_il2cpp_TypeInfo/* declaring_type */
	, &WULINSTATE_t3502_0_0_0/* return_type */
	, RuntimeInvoker_WULINSTATE_t3502/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28208_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255254_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28208_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28208_0_0_0;
extern Il2CppType IEnumerator_1_t28208_1_0_0;
struct IEnumerator_1_t28208;
extern TypeInfo IEnumerator_1_t28208_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28208_GenericClass;
TypeInfo IEnumerator_1_t28208_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28208_MethodInfos/* methods */
	, IEnumerator_1_t28208_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28208_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28208_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28208_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28208_0_0_0/* byval_arg */
	, &IEnumerator_1_t28208_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28208_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1882.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1882MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo;
extern TypeInfo WULINSTATE_t3502_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149611_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWULINSTATE_t3502_m208580_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<GC_WULIN_STATE/WULINSTATE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<GC_WULIN_STATE/WULINSTATE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWULINSTATE_t3502_m208580 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisWULINSTATE_t3502_m208580_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149606_MethodInfo;
 void InternalEnumerator_1__ctor_m149606 (InternalEnumerator_1_t20526 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149607_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149607 (InternalEnumerator_1_t20526 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149608_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149608 (InternalEnumerator_1_t20526 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149611(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149611_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&WULINSTATE_t3502_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149609_MethodInfo;
 void InternalEnumerator_1_Dispose_m149609 (InternalEnumerator_1_t20526 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149610_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149610 (InternalEnumerator_1_t20526 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149611_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149611 (InternalEnumerator_1_t20526 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWULINSTATE_t3502_m208580(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWULINSTATE_t3502_m208580_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20526____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20526, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20526____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20526, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20526_FieldInfos[] =
{
	&InternalEnumerator_1_t20526____array_FieldInfo,
	&InternalEnumerator_1_t20526____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149608_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20526____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20526_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149608_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149611_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20526____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20526_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149611_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20526_PropertyInfos[] =
{
	&InternalEnumerator_1_t20526____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20526____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20526_InternalEnumerator_1__ctor_m149606_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149606_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149606/* method */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20526_InternalEnumerator_1__ctor_m149606_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149607_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149607/* method */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149608_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149608/* method */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149609_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149609/* method */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149610_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149610/* method */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo;
extern Il2CppType WULINSTATE_t3502_0_0_0;
extern void* RuntimeInvoker_WULINSTATE_t3502 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<GC_WULIN_STATE/WULINSTATE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149611_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149611/* method */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* declaring_type */
	, &WULINSTATE_t3502_0_0_0/* return_type */
	, RuntimeInvoker_WULINSTATE_t3502/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20526_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149606_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149607_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149608_MethodInfo,
	&InternalEnumerator_1_Dispose_m149609_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149610_MethodInfo,
	&InternalEnumerator_1_get_Current_m149611_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149608_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149610_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149607_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149609_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149611_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20526_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149608_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149610_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149607_MethodInfo,
	&InternalEnumerator_1_Dispose_m149609_MethodInfo,
	&InternalEnumerator_1_get_Current_m149611_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28208_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20526_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28208_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28208_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20526_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28208_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20526_0_0_0;
extern Il2CppType InternalEnumerator_1_t20526_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20526_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20526_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20526_MethodInfos/* methods */
	, InternalEnumerator_1_t20526_PropertyInfos/* properties */
	, InternalEnumerator_1_t20526_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20526_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20526_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20526_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20526_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20526_1_0_0/* this_arg */
	, InternalEnumerator_1_t20526_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20526_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20526)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>
extern MethodInfo ICollection_1_get_Count_m255255_MethodInfo;
static PropertyInfo ICollection_1_t33829____Count_PropertyInfo = 
{
	&ICollection_1_t33829_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255255_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255256_MethodInfo;
static PropertyInfo ICollection_1_t33829____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33829_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255256_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33829_PropertyInfos[] =
{
	&ICollection_1_t33829____Count_PropertyInfo,
	&ICollection_1_t33829____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::get_Count()
MethodInfo ICollection_1_get_Count_m255255_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33829_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255256_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33829_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WULINSTATE_t3502_0_0_0;
static ParameterInfo ICollection_1_t33829_ICollection_1_Add_m255257_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WULINSTATE_t3502_0_0_0},
};
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::Add(T)
MethodInfo ICollection_1_Add_m255257_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33829_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33829_ICollection_1_Add_m255257_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::Clear()
MethodInfo ICollection_1_Clear_m255258_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33829_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WULINSTATE_t3502_0_0_0;
static ParameterInfo ICollection_1_t33829_ICollection_1_Contains_m255259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WULINSTATE_t3502_0_0_0},
};
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::Contains(T)
MethodInfo ICollection_1_Contains_m255259_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33829_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33829_ICollection_1_Contains_m255259_ParameterInfos/* parameters */
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
extern Il2CppType WULINSTATEU5BU5D_t26185_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33829_ICollection_1_CopyTo_m255260_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WULINSTATEU5BU5D_t26185_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255260_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33829_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33829_ICollection_1_CopyTo_m255260_ParameterInfos/* parameters */
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
extern Il2CppType WULINSTATE_t3502_0_0_0;
static ParameterInfo ICollection_1_t33829_ICollection_1_Remove_m255261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WULINSTATE_t3502_0_0_0},
};
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<GC_WULIN_STATE/WULINSTATE>::Remove(T)
MethodInfo ICollection_1_Remove_m255261_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33829_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33829_ICollection_1_Remove_m255261_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33829_MethodInfos[] =
{
	&ICollection_1_get_Count_m255255_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255256_MethodInfo,
	&ICollection_1_Add_m255257_MethodInfo,
	&ICollection_1_Clear_m255258_MethodInfo,
	&ICollection_1_Contains_m255259_MethodInfo,
	&ICollection_1_CopyTo_m255260_MethodInfo,
	&ICollection_1_Remove_m255261_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33831_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33829_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33831_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33829_0_0_0;
extern Il2CppType ICollection_1_t33829_1_0_0;
struct ICollection_1_t33829;
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33829_GenericClass;
TypeInfo ICollection_1_t33829_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33829_MethodInfos/* methods */
	, ICollection_1_t33829_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33829_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33829_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33829_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33829_0_0_0/* byval_arg */
	, &ICollection_1_t33829_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33829_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33831_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_WULIN_STATE/WULINSTATE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<GC_WULIN_STATE/WULINSTATE>
extern TypeInfo IEnumerable_1_t33831_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28208_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<GC_WULIN_STATE/WULINSTATE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255262_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33831_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28208_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33831_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255262_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33831_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33831_0_0_0;
extern Il2CppType IEnumerable_1_t33831_1_0_0;
struct IEnumerable_1_t33831;
extern TypeInfo IEnumerable_1_t33831_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33831_GenericClass;
TypeInfo IEnumerable_1_t33831_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33831_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33831_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33831_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33831_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33831_0_0_0/* byval_arg */
	, &IEnumerable_1_t33831_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33831_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33830_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>
extern MethodInfo IList_1_get_Item_m255263_MethodInfo;
extern MethodInfo IList_1_set_Item_m255264_MethodInfo;
static PropertyInfo IList_1_t33830____Item_PropertyInfo = 
{
	&IList_1_t33830_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255263_MethodInfo/* get */
	, &IList_1_set_Item_m255264_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33830_PropertyInfos[] =
{
	&IList_1_t33830____Item_PropertyInfo,
	NULL
};
extern Il2CppType WULINSTATE_t3502_0_0_0;
static ParameterInfo IList_1_t33830_IList_1_IndexOf_m255265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WULINSTATE_t3502_0_0_0},
};
extern TypeInfo IList_1_t33830_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255265_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33830_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33830_IList_1_IndexOf_m255265_ParameterInfos/* parameters */
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
extern Il2CppType WULINSTATE_t3502_0_0_0;
static ParameterInfo IList_1_t33830_IList_1_Insert_m255266_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &WULINSTATE_t3502_0_0_0},
};
extern TypeInfo IList_1_t33830_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255266_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33830_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33830_IList_1_Insert_m255266_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33830_IList_1_RemoveAt_m255267_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33830_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255267_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33830_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33830_IList_1_RemoveAt_m255267_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33830_IList_1_get_Item_m255263_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33830_il2cpp_TypeInfo;
extern Il2CppType WULINSTATE_t3502_0_0_0;
extern void* RuntimeInvoker_WULINSTATE_t3502_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255263_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33830_il2cpp_TypeInfo/* declaring_type */
	, &WULINSTATE_t3502_0_0_0/* return_type */
	, RuntimeInvoker_WULINSTATE_t3502_Int32_t73/* invoker_method */
	, IList_1_t33830_IList_1_get_Item_m255263_ParameterInfos/* parameters */
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
extern Il2CppType WULINSTATE_t3502_0_0_0;
static ParameterInfo IList_1_t33830_IList_1_set_Item_m255264_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &WULINSTATE_t3502_0_0_0},
};
extern TypeInfo IList_1_t33830_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<GC_WULIN_STATE/WULINSTATE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255264_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33830_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33830_IList_1_set_Item_m255264_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33830_MethodInfos[] =
{
	&IList_1_IndexOf_m255265_MethodInfo,
	&IList_1_Insert_m255266_MethodInfo,
	&IList_1_RemoveAt_m255267_MethodInfo,
	&IList_1_get_Item_m255263_MethodInfo,
	&IList_1_set_Item_m255264_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33829_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33831_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33830_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33829_il2cpp_TypeInfo,
	&IEnumerable_1_t33831_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33830_0_0_0;
extern Il2CppType IList_1_t33830_1_0_0;
struct IList_1_t33830;
extern TypeInfo IList_1_t33830_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33830_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33830_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33830_MethodInfos/* methods */
	, IList_1_t33830_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33830_il2cpp_TypeInfo/* element_class */
	, IList_1_t33830_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33830_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33830_0_0_0/* byval_arg */
	, &IList_1_t33830_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33830_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28209_il2cpp_TypeInfo;

// CG_TEAM_CALLMEMBER_RESULT/ResultType
#include "AssemblyU2DCSharp_CG_TEAM_CALLMEMBER_RESULT_ResultType.h"


// T System.Collections.Generic.IEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>
extern MethodInfo IEnumerator_1_get_Current_m255268_MethodInfo;
static PropertyInfo IEnumerator_1_t28209____Current_PropertyInfo = 
{
	&IEnumerator_1_t28209_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255268_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28209_PropertyInfos[] =
{
	&IEnumerator_1_t28209____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28209_il2cpp_TypeInfo;
extern Il2CppType ResultType_t3508_0_0_0;
extern void* RuntimeInvoker_ResultType_t3508 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255268_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28209_il2cpp_TypeInfo/* declaring_type */
	, &ResultType_t3508_0_0_0/* return_type */
	, RuntimeInvoker_ResultType_t3508/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28209_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255268_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28209_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28209_0_0_0;
extern Il2CppType IEnumerator_1_t28209_1_0_0;
struct IEnumerator_1_t28209;
extern TypeInfo IEnumerator_1_t28209_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28209_GenericClass;
TypeInfo IEnumerator_1_t28209_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28209_MethodInfos/* methods */
	, IEnumerator_1_t28209_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28209_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28209_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28209_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28209_0_0_0/* byval_arg */
	, &IEnumerator_1_t28209_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28209_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1883.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1883MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo;
extern TypeInfo ResultType_t3508_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149617_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisResultType_t3508_m208591_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<CG_TEAM_CALLMEMBER_RESULT/ResultType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<CG_TEAM_CALLMEMBER_RESULT/ResultType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisResultType_t3508_m208591 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisResultType_t3508_m208591_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149612_MethodInfo;
 void InternalEnumerator_1__ctor_m149612 (InternalEnumerator_1_t20527 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149613_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149613 (InternalEnumerator_1_t20527 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149614_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149614 (InternalEnumerator_1_t20527 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149617(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149617_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ResultType_t3508_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149615_MethodInfo;
 void InternalEnumerator_1_Dispose_m149615 (InternalEnumerator_1_t20527 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149616_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149616 (InternalEnumerator_1_t20527 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149617_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149617 (InternalEnumerator_1_t20527 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisResultType_t3508_m208591(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisResultType_t3508_m208591_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20527____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20527, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20527____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20527, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20527_FieldInfos[] =
{
	&InternalEnumerator_1_t20527____array_FieldInfo,
	&InternalEnumerator_1_t20527____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149614_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20527____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20527_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149614_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149617_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20527____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20527_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149617_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20527_PropertyInfos[] =
{
	&InternalEnumerator_1_t20527____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20527____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20527_InternalEnumerator_1__ctor_m149612_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149612_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149612/* method */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20527_InternalEnumerator_1__ctor_m149612_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149613_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149613/* method */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149614_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149614/* method */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149615_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149615/* method */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149616_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149616/* method */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo;
extern Il2CppType ResultType_t3508_0_0_0;
extern void* RuntimeInvoker_ResultType_t3508 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149617_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149617/* method */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* declaring_type */
	, &ResultType_t3508_0_0_0/* return_type */
	, RuntimeInvoker_ResultType_t3508/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20527_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149612_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149613_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149614_MethodInfo,
	&InternalEnumerator_1_Dispose_m149615_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149616_MethodInfo,
	&InternalEnumerator_1_get_Current_m149617_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149614_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149616_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149613_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149615_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149617_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20527_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149614_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149616_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149613_MethodInfo,
	&InternalEnumerator_1_Dispose_m149615_MethodInfo,
	&InternalEnumerator_1_get_Current_m149617_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28209_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20527_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28209_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28209_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20527_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28209_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20527_0_0_0;
extern Il2CppType InternalEnumerator_1_t20527_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20527_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20527_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20527_MethodInfos/* methods */
	, InternalEnumerator_1_t20527_PropertyInfos/* properties */
	, InternalEnumerator_1_t20527_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20527_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20527_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20527_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20527_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20527_1_0_0/* this_arg */
	, InternalEnumerator_1_t20527_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20527_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20527)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>
extern MethodInfo ICollection_1_get_Count_m255269_MethodInfo;
static PropertyInfo ICollection_1_t33832____Count_PropertyInfo = 
{
	&ICollection_1_t33832_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m255269_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m255270_MethodInfo;
static PropertyInfo ICollection_1_t33832____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33832_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m255270_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33832_PropertyInfos[] =
{
	&ICollection_1_t33832____Count_PropertyInfo,
	&ICollection_1_t33832____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_Count()
MethodInfo ICollection_1_get_Count_m255269_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33832_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m255270_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33832_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ResultType_t3508_0_0_0;
static ParameterInfo ICollection_1_t33832_ICollection_1_Add_m255271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ResultType_t3508_0_0_0},
};
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Add(T)
MethodInfo ICollection_1_Add_m255271_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33832_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33832_ICollection_1_Add_m255271_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Clear()
MethodInfo ICollection_1_Clear_m255272_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33832_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ResultType_t3508_0_0_0;
static ParameterInfo ICollection_1_t33832_ICollection_1_Contains_m255273_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ResultType_t3508_0_0_0},
};
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Contains(T)
MethodInfo ICollection_1_Contains_m255273_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33832_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33832_ICollection_1_Contains_m255273_ParameterInfos/* parameters */
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
extern Il2CppType ResultTypeU5BU5D_t26186_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33832_ICollection_1_CopyTo_m255274_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ResultTypeU5BU5D_t26186_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m255274_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33832_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33832_ICollection_1_CopyTo_m255274_ParameterInfos/* parameters */
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
extern Il2CppType ResultType_t3508_0_0_0;
static ParameterInfo ICollection_1_t33832_ICollection_1_Remove_m255275_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ResultType_t3508_0_0_0},
};
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Remove(T)
MethodInfo ICollection_1_Remove_m255275_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33832_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33832_ICollection_1_Remove_m255275_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33832_MethodInfos[] =
{
	&ICollection_1_get_Count_m255269_MethodInfo,
	&ICollection_1_get_IsReadOnly_m255270_MethodInfo,
	&ICollection_1_Add_m255271_MethodInfo,
	&ICollection_1_Clear_m255272_MethodInfo,
	&ICollection_1_Contains_m255273_MethodInfo,
	&ICollection_1_CopyTo_m255274_MethodInfo,
	&ICollection_1_Remove_m255275_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33834_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33832_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33834_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33832_0_0_0;
extern Il2CppType ICollection_1_t33832_1_0_0;
struct ICollection_1_t33832;
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33832_GenericClass;
TypeInfo ICollection_1_t33832_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33832_MethodInfos/* methods */
	, ICollection_1_t33832_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33832_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33832_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33832_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33832_0_0_0/* byval_arg */
	, &ICollection_1_t33832_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33832_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t33834_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>
extern TypeInfo IEnumerable_1_t33834_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t28209_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m255276_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33834_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t28209_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33834_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m255276_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33834_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33834_0_0_0;
extern Il2CppType IEnumerable_1_t33834_1_0_0;
struct IEnumerable_1_t33834;
extern TypeInfo IEnumerable_1_t33834_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33834_GenericClass;
TypeInfo IEnumerable_1_t33834_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33834_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33834_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33834_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33834_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33834_0_0_0/* byval_arg */
	, &IEnumerable_1_t33834_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33834_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t33833_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>
extern MethodInfo IList_1_get_Item_m255277_MethodInfo;
extern MethodInfo IList_1_set_Item_m255278_MethodInfo;
static PropertyInfo IList_1_t33833____Item_PropertyInfo = 
{
	&IList_1_t33833_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m255277_MethodInfo/* get */
	, &IList_1_set_Item_m255278_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33833_PropertyInfos[] =
{
	&IList_1_t33833____Item_PropertyInfo,
	NULL
};
extern Il2CppType ResultType_t3508_0_0_0;
static ParameterInfo IList_1_t33833_IList_1_IndexOf_m255279_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ResultType_t3508_0_0_0},
};
extern TypeInfo IList_1_t33833_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m255279_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33833_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33833_IList_1_IndexOf_m255279_ParameterInfos/* parameters */
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
extern Il2CppType ResultType_t3508_0_0_0;
static ParameterInfo IList_1_t33833_IList_1_Insert_m255280_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ResultType_t3508_0_0_0},
};
extern TypeInfo IList_1_t33833_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m255280_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33833_IList_1_Insert_m255280_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33833_IList_1_RemoveAt_m255281_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33833_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m255281_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33833_IList_1_RemoveAt_m255281_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
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
static ParameterInfo IList_1_t33833_IList_1_get_Item_m255277_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33833_il2cpp_TypeInfo;
extern Il2CppType ResultType_t3508_0_0_0;
extern void* RuntimeInvoker_ResultType_t3508_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m255277_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33833_il2cpp_TypeInfo/* declaring_type */
	, &ResultType_t3508_0_0_0/* return_type */
	, RuntimeInvoker_ResultType_t3508_Int32_t73/* invoker_method */
	, IList_1_t33833_IList_1_get_Item_m255277_ParameterInfos/* parameters */
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
extern Il2CppType ResultType_t3508_0_0_0;
static ParameterInfo IList_1_t33833_IList_1_set_Item_m255278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ResultType_t3508_0_0_0},
};
extern TypeInfo IList_1_t33833_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<CG_TEAM_CALLMEMBER_RESULT/ResultType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m255278_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33833_IList_1_set_Item_m255278_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33833_MethodInfos[] =
{
	&IList_1_IndexOf_m255279_MethodInfo,
	&IList_1_Insert_m255280_MethodInfo,
	&IList_1_RemoveAt_m255281_MethodInfo,
	&IList_1_get_Item_m255277_MethodInfo,
	&IList_1_set_Item_m255278_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33832_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33834_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33833_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33832_il2cpp_TypeInfo,
	&IEnumerable_1_t33834_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33833_0_0_0;
extern Il2CppType IList_1_t33833_1_0_0;
struct IList_1_t33833;
extern TypeInfo IList_1_t33833_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33833_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33833_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33833_MethodInfos/* methods */
	, IList_1_t33833_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33833_il2cpp_TypeInfo/* element_class */
	, IList_1_t33833_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33833_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33833_0_0_0/* byval_arg */
	, &IList_1_t33833_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33833_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t28210_il2cpp_TypeInfo;

// CG_SHENQI_WASHATTR/WASHTYPE
#include "AssemblyU2DCSharp_CG_SHENQI_WASHATTR_WASHTYPE.h"


// T System.Collections.Generic.IEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>
extern MethodInfo IEnumerator_1_get_Current_m255282_MethodInfo;
static PropertyInfo IEnumerator_1_t28210____Current_PropertyInfo = 
{
	&IEnumerator_1_t28210_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m255282_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t28210_PropertyInfos[] =
{
	&IEnumerator_1_t28210____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t28210_il2cpp_TypeInfo;
extern Il2CppType WASHTYPE_t3517_0_0_0;
extern void* RuntimeInvoker_WASHTYPE_t3517 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m255282_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t28210_il2cpp_TypeInfo/* declaring_type */
	, &WASHTYPE_t3517_0_0_0/* return_type */
	, RuntimeInvoker_WASHTYPE_t3517/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t28210_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m255282_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t28210_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t28210_0_0_0;
extern Il2CppType IEnumerator_1_t28210_1_0_0;
struct IEnumerator_1_t28210;
extern TypeInfo IEnumerator_1_t28210_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t28210_GenericClass;
TypeInfo IEnumerator_1_t28210_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t28210_MethodInfos/* methods */
	, IEnumerator_1_t28210_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t28210_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t28210_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t28210_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t28210_0_0_0/* byval_arg */
	, &IEnumerator_1_t28210_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t28210_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1884.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1884MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo;
extern TypeInfo WASHTYPE_t3517_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149623_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWASHTYPE_t3517_m208602_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<CG_SHENQI_WASHATTR/WASHTYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<CG_SHENQI_WASHATTR/WASHTYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWASHTYPE_t3517_m208602 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisWASHTYPE_t3517_m208602_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m149618_MethodInfo;
 void InternalEnumerator_1__ctor_m149618 (InternalEnumerator_1_t20528 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149619_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149619 (InternalEnumerator_1_t20528 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149620_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149620 (InternalEnumerator_1_t20528 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m149623(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m149623_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&WASHTYPE_t3517_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m149621_MethodInfo;
 void InternalEnumerator_1_Dispose_m149621 (InternalEnumerator_1_t20528 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m149622_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m149622 (InternalEnumerator_1_t20528 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m149623_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m149623 (InternalEnumerator_1_t20528 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWASHTYPE_t3517_m208602(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWASHTYPE_t3517_m208602_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t20528____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20528, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t20528____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t20528, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t20528_FieldInfos[] =
{
	&InternalEnumerator_1_t20528____array_FieldInfo,
	&InternalEnumerator_1_t20528____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149620_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20528____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20528_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149620_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m149623_MethodInfo;
static PropertyInfo InternalEnumerator_1_t20528____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t20528_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m149623_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t20528_PropertyInfos[] =
{
	&InternalEnumerator_1_t20528____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t20528____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t20528_InternalEnumerator_1__ctor_m149618_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m149618_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m149618/* method */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t20528_InternalEnumerator_1__ctor_m149618_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149619_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149619/* method */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149620_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149620/* method */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m149621_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m149621/* method */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m149622_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m149622/* method */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo;
extern Il2CppType WASHTYPE_t3517_0_0_0;
extern void* RuntimeInvoker_WASHTYPE_t3517 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<CG_SHENQI_WASHATTR/WASHTYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m149623_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m149623/* method */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* declaring_type */
	, &WASHTYPE_t3517_0_0_0/* return_type */
	, RuntimeInvoker_WASHTYPE_t3517/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t20528_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m149618_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149619_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149620_MethodInfo,
	&InternalEnumerator_1_Dispose_m149621_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149622_MethodInfo,
	&InternalEnumerator_1_get_Current_m149623_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149620_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m149622_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149619_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m149621_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m149623_MethodInfo;
static MethodInfo* InternalEnumerator_1_t20528_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m149620_MethodInfo,
	&InternalEnumerator_1_MoveNext_m149622_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m149619_MethodInfo,
	&InternalEnumerator_1_Dispose_m149621_MethodInfo,
	&InternalEnumerator_1_get_Current_m149623_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28210_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t20528_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t28210_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t28210_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t20528_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t28210_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t20528_0_0_0;
extern Il2CppType InternalEnumerator_1_t20528_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t20528_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t20528_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t20528_MethodInfos/* methods */
	, InternalEnumerator_1_t20528_PropertyInfos/* properties */
	, InternalEnumerator_1_t20528_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t20528_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t20528_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t20528_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t20528_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t20528_1_0_0/* this_arg */
	, InternalEnumerator_1_t20528_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t20528_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t20528)+ sizeof (Il2CppObject)/* instance_size */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
