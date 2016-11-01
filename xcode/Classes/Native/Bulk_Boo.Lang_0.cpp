#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "Boo_Lang_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t6358_il2cpp_TypeInfo;
// <Module>
#include "Boo_Lang_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Metadata Definition <Module>
static MethodInfo* U3CModuleU3E_t6358_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CModuleU3E_t6358_0_0_0;
extern Il2CppType U3CModuleU3E_t6358_1_0_0;
struct U3CModuleU3E_t6358;
extern TypeInfo U3CModuleU3E_t6358_il2cpp_TypeInfo;
TypeInfo U3CModuleU3E_t6358_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Module>"/* name */
	, ""/* namespaze */
	, U3CModuleU3E_t6358_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &U3CModuleU3E_t6358_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &U3CModuleU3E_t6358_il2cpp_TypeInfo/* cast_class */
	, &U3CModuleU3E_t6358_0_0_0/* byval_arg */
	, &U3CModuleU3E_t6358_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CModuleU3E_t6358)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_Builtins.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Builtins_t6359_il2cpp_TypeInfo;
// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_BuiltinsMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo StringBuilder_t1097_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern MethodInfo StringBuilder__ctor_m38894_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m38737_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m38709_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m38749_MethodInfo;
extern MethodInfo StringBuilder_Append_m44613_MethodInfo;
extern MethodInfo StringBuilder_Append_m39033_MethodInfo;
extern MethodInfo IDisposable_Dispose_m4170_MethodInfo;
extern MethodInfo StringBuilder_ToString_m38901_MethodInfo;


// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern MethodInfo Builtins_join_m44564_MethodInfo;
 String_t* Builtins_join_m44564 (Object_t * __this/* static, unused */, Object_t * ___enumerable, String_t* ___separator, MethodInfo* method){
	StringBuilder_t1097 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t972 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t972 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		StringBuilder_t1097 * L_0 = (StringBuilder_t1097 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t1097_il2cpp_TypeInfo));
		StringBuilder__ctor_m38894(L_0, /*hidden argument*/&StringBuilder__ctor_m38894_MethodInfo);
		V_0 = L_0;
		NullCheck(___enumerable);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m38737_MethodInfo, ___enumerable);
		V_1 = L_1;
		V_2 = ((Object_t *)IsInst(V_1, InitializedTypeInfo(&IDisposable_t971_il2cpp_TypeInfo)));
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			NullCheck(V_1);
			bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m38709_MethodInfo, V_1);
			if (!L_2)
			{
				goto IL_0051;
			}
		}

IL_001f:
		{
			NullCheck(V_1);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m38749_MethodInfo, V_1);
			NullCheck(V_0);
			StringBuilder_Append_m44613(V_0, L_3, /*hidden argument*/&StringBuilder_Append_m44613_MethodInfo);
			goto IL_0046;
		}

IL_0031:
		{
			NullCheck(V_0);
			StringBuilder_Append_m39033(V_0, ___separator, /*hidden argument*/&StringBuilder_Append_m39033_MethodInfo);
			NullCheck(V_1);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m38749_MethodInfo, V_1);
			NullCheck(V_0);
			StringBuilder_Append_m44613(V_0, L_4, /*hidden argument*/&StringBuilder_Append_m44613_MethodInfo);
		}

IL_0046:
		{
			NullCheck(V_1);
			bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m38709_MethodInfo, V_1);
			if (L_5)
			{
				goto IL_0031;
			}
		}

IL_0051:
		{
			// IL_0051: leave IL_0063
			leaveInstructions[0] = 0x63; // 1
			throw Il2CppFinallySentinel();
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0056;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t972 *)e.ex;
		goto IL_0056;
	}

IL_0056:
	{ // begin finally (depth: 1)
		{
			if (!V_2)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			NullCheck(V_2);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m4170_MethodInfo, V_2);
		}

IL_0062:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x63:
					goto IL_0063;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t972 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_0063:
	{
		NullCheck(V_0);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m38901_MethodInfo, V_0);
		return L_6;
	}
}
// Metadata Definition Boo.Lang.Builtins
extern Il2CppType IEnumerable_t977_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Builtins_t6359_Builtins_join_m44564_ParameterInfos[] = 
{
	{"enumerable", 0, 134217729, &EmptyCustomAttributesCache, &IEnumerable_t977_0_0_0},
	{"separator", 1, 134217730, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo Builtins_t6359_il2cpp_TypeInfo;
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
MethodInfo Builtins_join_m44564_MethodInfo = 
{
	"join"/* name */
	, (methodPointerType)&Builtins_join_m44564/* method */
	, &Builtins_t6359_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, Builtins_t6359_Builtins_join_m44564_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* Builtins_t6359_MethodInfos[] =
{
	&Builtins_join_m44564_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* Builtins_t6359_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType Builtins_t6359_0_0_0;
extern Il2CppType Builtins_t6359_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Builtins_t6359;
extern TypeInfo Builtins_t6359_il2cpp_TypeInfo;
TypeInfo Builtins_t6359_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "Builtins"/* name */
	, "Boo.Lang"/* namespaze */
	, Builtins_t6359_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Builtins_t6359_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Builtins_t6359_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Builtins_t6359_il2cpp_TypeInfo/* cast_class */
	, &Builtins_t6359_0_0_0/* byval_arg */
	, &Builtins_t6359_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Builtins_t6359)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.List`1/<GetEnumerator>c__Iterator6
#include "Boo_Lang_Boo_Lang_List_1_U3CGetEnumeratorU3Ec__Iterator6.h"
extern Il2CppGenericContainer U3CGetEnumeratorU3Ec__Iterator6_t6360_Il2CppGenericContainer;
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull U3CGetEnumeratorU3Ec__Iterator6_t6360_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &U3CGetEnumeratorU3Ec__Iterator6_t6360_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* U3CGetEnumeratorU3Ec__Iterator6_t6360_Il2CppGenericParametersArray[1] = 
{
	&U3CGetEnumeratorU3Ec__Iterator6_t6360_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo;
Il2CppGenericContainer U3CGetEnumeratorU3Ec__Iterator6_t6360_Il2CppGenericContainer = { { NULL, NULL }, NULL, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo, 1, 0, U3CGetEnumeratorU3Ec__Iterator6_t6360_Il2CppGenericParametersArray };
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1/<GetEnumerator>c__Iterator6::.ctor()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6__ctor_m44614_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 47/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator6_t6360_gp_0_0_0_0;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m44615;
// T Boo.Lang.List`1/<GetEnumerator>c__Iterator6::System.Collections.Generic.IEnumerator<T>.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m44615_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<T>.get_Current"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* declaring_type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_gp_0_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m44615/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 48/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m44616;
// System.Object Boo.Lang.List`1/<GetEnumerator>c__Iterator6::System.Collections.IEnumerator.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m44616_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m44616/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 49/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1/<GetEnumerator>c__Iterator6::MoveNext()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6_MoveNext_m44617_MethodInfo = 
{
	"MoveNext"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 50/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m44618;
// System.Void Boo.Lang.List`1/<GetEnumerator>c__Iterator6::Dispose()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6_Dispose_m44618_MethodInfo = 
{
	"Dispose"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m44618/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 51/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_Reset_m44619;
// System.Void Boo.Lang.List`1/<GetEnumerator>c__Iterator6::Reset()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6_Reset_m44619_MethodInfo = 
{
	"Reset"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_Reset_m44619/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 52/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator6_t6360_MethodInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator6__ctor_m44614_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m44615_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m44616_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_MoveNext_m44617_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_Dispose_m44618_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_Reset_m44619_MethodInfo,
	NULL
};
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m44615_MethodInfo;
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator6_t6360____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<T>.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m44615_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m44616_MethodInfo;
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator6_t6360____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m44616_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CGetEnumeratorU3Ec__Iterator6_t6360_PropertyInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator6_t6360____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t6360____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t6360____U3CoriginalCountU3E__0_FieldInfo = 
{
	"<originalCount>__0"/* name */
	, &Int32_t73_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TU5BU5D_t6380_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t6360____U3CoriginalItemsU3E__1_FieldInfo = 
{
	"<originalItems>__1"/* name */
	, &TU5BU5D_t6380_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t6360____U3CiU3E__2_FieldInfo = 
{
	"<i>__2"/* name */
	, &Int32_t73_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t6360____$PC_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t73_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator6_t6360_gp_0_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t6360____$current_FieldInfo = 
{
	"$current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_gp_0_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType List_1_t6381_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t6360____U3CU3Ef__this_FieldInfo = 
{
	"<>f__this"/* name */
	, &List_1_t6381_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CGetEnumeratorU3Ec__Iterator6_t6360_FieldInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator6_t6360____U3CoriginalCountU3E__0_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t6360____U3CoriginalItemsU3E__1_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t6360____U3CiU3E__2_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t6360____$PC_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t6360____$current_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t6360____U3CU3Ef__this_FieldInfo,
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator6_t6360_0_0_0;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator6_t6360_1_0_0;
struct U3CGetEnumeratorU3Ec__Iterator6_t6360;
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo;
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetEnumerator>c__Iterator6"/* name */
	, ""/* namespaze */
	, U3CGetEnumeratorU3Ec__Iterator6_t6360_MethodInfos/* methods */
	, U3CGetEnumeratorU3Ec__Iterator6_t6360_PropertyInfos/* properties */
	, U3CGetEnumeratorU3Ec__Iterator6_t6360_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, &List_1_t6361_il2cpp_TypeInfo/* nested_in */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_0_0_0/* byval_arg */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &U3CGetEnumeratorU3Ec__Iterator6_t6360_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
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
	, 6/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern TypeInfo CompilerGeneratedAttribute_t963_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern MethodInfo CompilerGeneratedAttribute__ctor_m4116_MethodInfo;
void U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t963 * tmp;
		tmp = (CompilerGeneratedAttribute_t963 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t963_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m4116(tmp, &CompilerGeneratedAttribute__ctor_m4116_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m44615(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m44616(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m44618(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_Reset_m44619(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache = {
1,
NULL,
&U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m44615 = {
1,
NULL,
&U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m44615
};
CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m44616 = {
1,
NULL,
&U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m44616
};
CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m44618 = {
1,
NULL,
&U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m44618
};
CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t6360__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_Reset_m44619 = {
1,
NULL,
&U3CGetEnumeratorU3Ec__Iterator6_t6360_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_Reset_m44619
};
// Boo.Lang.List`1
#include "Boo_Lang_Boo_Lang_List_1.h"
extern Il2CppGenericContainer List_1_t6361_Il2CppGenericContainer;
extern TypeInfo List_1_t6361_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull List_1_t6361_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &List_1_t6361_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* List_1_t6361_Il2CppGenericParametersArray[1] = 
{
	&List_1_t6361_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
Il2CppGenericContainer List_1_t6361_Il2CppGenericContainer = { { NULL, NULL }, NULL, &List_1_t6361_il2cpp_TypeInfo, 1, 0, List_1_t6361_Il2CppGenericParametersArray };
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::.ctor()
MethodInfo List_1__ctor_m44620_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 2/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::.cctor()
MethodInfo List_1__cctor_m44621_MethodInfo = 
{
	".cctor"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 3/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m44622_ParameterInfos[] = 
{
	{"item", 0, 134217731, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.Generic.ICollection<T>.Add(T)
MethodInfo List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m44622_MethodInfo = 
{
	"System.Collections.Generic.ICollection<T>.Add"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m44622_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 4/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_t67_0_0_0;
// System.Collections.IEnumerator Boo.Lang.List`1::System.Collections.IEnumerable.GetEnumerator()
MethodInfo List_1_System_Collections_IEnumerable_GetEnumerator_m44623_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t67_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_Generic_IListU3CTU3E_Insert_m44624_ParameterInfos[] = 
{
	{"index", 0, 134217732, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217733, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
MethodInfo List_1_System_Collections_Generic_IListU3CTU3E_Insert_m44624_MethodInfo = 
{
	"System.Collections.Generic.IList<T>.Insert"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_Generic_IListU3CTU3E_Insert_m44624_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m44625_ParameterInfos[] = 
{
	{"index", 0, 134217734, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
MethodInfo List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m44625_MethodInfo = 
{
	"System.Collections.Generic.IList<T>.RemoveAt"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m44625_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 7/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m44626_ParameterInfos[] = 
{
	{"item", 0, 134217735, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1::System.Collections.Generic.ICollection<T>.Remove(T)
MethodInfo List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m44626_MethodInfo = 
{
	"System.Collections.Generic.ICollection<T>.Remove"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m44626_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_IList_Add_m44627_ParameterInfos[] = 
{
	{"value", 0, 134217736, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
// System.Int32 Boo.Lang.List`1::System.Collections.IList.Add(System.Object)
MethodInfo List_1_System_Collections_IList_Add_m44627_MethodInfo = 
{
	"System.Collections.IList.Add"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_IList_Add_m44627_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 9/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_IList_Insert_m44628_ParameterInfos[] = 
{
	{"index", 0, 134217737, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217738, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.IList.Insert(System.Int32,System.Object)
MethodInfo List_1_System_Collections_IList_Insert_m44628_MethodInfo = 
{
	"System.Collections.IList.Insert"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_IList_Insert_m44628_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 31/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 10/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_IList_Remove_m44629_ParameterInfos[] = 
{
	{"value", 0, 134217739, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.IList.Remove(System.Object)
MethodInfo List_1_System_Collections_IList_Remove_m44629_MethodInfo = 
{
	"System.Collections.IList.Remove"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_IList_Remove_m44629_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 32/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 11/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_IList_IndexOf_m44630_ParameterInfos[] = 
{
	{"value", 0, 134217740, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
// System.Int32 Boo.Lang.List`1::System.Collections.IList.IndexOf(System.Object)
MethodInfo List_1_System_Collections_IList_IndexOf_m44630_MethodInfo = 
{
	"System.Collections.IList.IndexOf"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_IList_IndexOf_m44630_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 30/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 12/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_IList_Contains_m44631_ParameterInfos[] = 
{
	{"value", 0, 134217741, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1::System.Collections.IList.Contains(System.Object)
MethodInfo List_1_System_Collections_IList_Contains_m44631_MethodInfo = 
{
	"System.Collections.IList.Contains"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_IList_Contains_m44631_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 13/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_IList_get_Item_m44632_ParameterInfos[] = 
{
	{"index", 0, 134217742, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
// System.Object Boo.Lang.List`1::System.Collections.IList.get_Item(System.Int32)
MethodInfo List_1_System_Collections_IList_get_Item_m44632_MethodInfo = 
{
	"System.Collections.IList.get_Item"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_IList_get_Item_m44632_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 14/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_IList_set_Item_m44633_ParameterInfos[] = 
{
	{"index", 0, 134217743, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217744, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.IList.set_Item(System.Int32,System.Object)
MethodInfo List_1_System_Collections_IList_set_Item_m44633_MethodInfo = 
{
	"System.Collections.IList.set_Item"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_IList_set_Item_m44633_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 15/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_IList_RemoveAt_m44634_ParameterInfos[] = 
{
	{"index", 0, 134217745, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.IList.RemoveAt(System.Int32)
MethodInfo List_1_System_Collections_IList_RemoveAt_m44634_MethodInfo = 
{
	"System.Collections.IList.RemoveAt"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_IList_RemoveAt_m44634_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 33/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 16/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1::System.Collections.IList.get_IsFixedSize()
MethodInfo List_1_System_Collections_IList_get_IsFixedSize_m44635_MethodInfo = 
{
	"System.Collections.IList.get_IsFixedSize"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 17/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_System_Collections_ICollection_CopyTo_m44636_ParameterInfos[] = 
{
	{"array", 0, 134217746, &EmptyCustomAttributesCache, &Array_t_0_0_0},
	{"index", 1, 134217747, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
MethodInfo List_1_System_Collections_ICollection_CopyTo_m44636_MethodInfo = 
{
	"System.Collections.ICollection.CopyTo"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_System_Collections_ICollection_CopyTo_m44636_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 18/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
// System.Int32 Boo.Lang.List`1::get_Count()
MethodInfo List_1_get_Count_m44637_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 19/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t6383_0_0_0;
extern CustomAttributesCache List_1_t6361__CustomAttributeCache_List_1_GetEnumerator_m44638;
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.List`1::GetEnumerator()
MethodInfo List_1_GetEnumerator_m44638_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6383_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &List_1_t6361__CustomAttributeCache_List_1_GetEnumerator_m44638/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 20/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TU5BU5D_t6384_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_CopyTo_m44639_ParameterInfos[] = 
{
	{"target", 0, 134217748, &EmptyCustomAttributesCache, &TU5BU5D_t6384_0_0_0},
	{"index", 1, 134217749, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::CopyTo(T[],System.Int32)
MethodInfo List_1_CopyTo_m44639_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_CopyTo_m44639_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 21/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1::get_IsSynchronized()
MethodInfo List_1_get_IsSynchronized_m44640_MethodInfo = 
{
	"get_IsSynchronized"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 22/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
// System.Object Boo.Lang.List`1::get_SyncRoot()
MethodInfo List_1_get_SyncRoot_m44641_MethodInfo = 
{
	"get_SyncRoot"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 23/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1::get_IsReadOnly()
MethodInfo List_1_get_IsReadOnly_m44642_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 24/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_get_Item_m44643_ParameterInfos[] = 
{
	{"index", 0, 134217750, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType List_1_t6361_gp_0_0_0_0;
// T Boo.Lang.List`1::get_Item(System.Int32)
MethodInfo List_1_get_Item_m44643_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t6361_gp_0_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_get_Item_m44643_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 25/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_set_Item_m44644_ParameterInfos[] = 
{
	{"index", 0, 134217751, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217752, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::set_Item(System.Int32,T)
MethodInfo List_1_set_Item_m44644_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_set_Item_m44644_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 26/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_Push_m44645_ParameterInfos[] = 
{
	{"item", 0, 134217753, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType List_1_t6385_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::Push(T)
MethodInfo List_1_Push_m44645_MethodInfo = 
{
	"Push"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t6385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_Push_m44645_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 27/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_Add_m44646_ParameterInfos[] = 
{
	{"item", 0, 134217754, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType List_1_t6385_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::Add(T)
MethodInfo List_1_Add_m44646_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t6385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_Add_m44646_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 34/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 28/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType String_t_0_0_0;
// System.String Boo.Lang.List`1::ToString()
MethodInfo List_1_ToString_m44647_MethodInfo = 
{
	"ToString"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 29/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo List_1_t6361_List_1_Join_m44648_ParameterInfos[] = 
{
	{"separator", 0, 134217755, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType String_t_0_0_0;
// System.String Boo.Lang.List`1::Join(System.String)
MethodInfo List_1_Join_m44648_MethodInfo = 
{
	"Join"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_Join_m44648_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 30/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
// System.Int32 Boo.Lang.List`1::GetHashCode()
MethodInfo List_1_GetHashCode_m44649_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 31/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t6361_List_1_Equals_m44650_ParameterInfos[] = 
{
	{"other", 0, 134217756, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1::Equals(System.Object)
MethodInfo List_1_Equals_m44650_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_Equals_m44650_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 32/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType List_1_t6385_0_0_0;
static ParameterInfo List_1_t6361_List_1_Equals_m44651_ParameterInfos[] = 
{
	{"other", 0, 134217757, &EmptyCustomAttributesCache, &List_1_t6385_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1::Equals(Boo.Lang.List`1<T>)
MethodInfo List_1_Equals_m44651_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_Equals_m44651_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 33/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::Clear()
MethodInfo List_1_Clear_m44652_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 34/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_Contains_m44653_ParameterInfos[] = 
{
	{"item", 0, 134217758, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1::Contains(T)
MethodInfo List_1_Contains_m44653_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_Contains_m44653_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 35/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_IndexOf_m44654_ParameterInfos[] = 
{
	{"item", 0, 134217759, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
// System.Int32 Boo.Lang.List`1::IndexOf(T)
MethodInfo List_1_IndexOf_m44654_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_IndexOf_m44654_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 36/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_Insert_m44655_ParameterInfos[] = 
{
	{"index", 0, 134217760, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217761, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType List_1_t6385_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::Insert(System.Int32,T)
MethodInfo List_1_Insert_m44655_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t6385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_Insert_m44655_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 37/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_Remove_m44656_ParameterInfos[] = 
{
	{"item", 0, 134217762, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType List_1_t6385_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::Remove(T)
MethodInfo List_1_Remove_m44656_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t6385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_Remove_m44656_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 38/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_RemoveAt_m44657_ParameterInfos[] = 
{
	{"index", 0, 134217763, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType List_1_t6385_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::RemoveAt(System.Int32)
MethodInfo List_1_RemoveAt_m44657_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t6385_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_RemoveAt_m44657_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 39/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_EnsureCapacity_m44658_ParameterInfos[] = 
{
	{"minCapacity", 0, 134217764, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::EnsureCapacity(System.Int32)
MethodInfo List_1_EnsureCapacity_m44658_MethodInfo = 
{
	"EnsureCapacity"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_EnsureCapacity_m44658_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 40/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_NewArray_m44659_ParameterInfos[] = 
{
	{"minCapacity", 0, 134217765, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType TU5BU5D_t6384_0_0_0;
// T[] Boo.Lang.List`1::NewArray(System.Int32)
MethodInfo List_1_NewArray_m44659_MethodInfo = 
{
	"NewArray"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &TU5BU5D_t6384_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_NewArray_m44659_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 41/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_InnerRemoveAt_m44660_ParameterInfos[] = 
{
	{"index", 0, 134217766, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
// System.Void Boo.Lang.List`1::InnerRemoveAt(System.Int32)
MethodInfo List_1_InnerRemoveAt_m44660_MethodInfo = 
{
	"InnerRemoveAt"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_InnerRemoveAt_m44660_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 42/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType List_1_t6361_gp_0_0_0_0;
static ParameterInfo List_1_t6361_List_1_InnerRemove_m44661_ParameterInfos[] = 
{
	{"item", 0, 134217767, &EmptyCustomAttributesCache, &List_1_t6361_gp_0_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
// System.Boolean Boo.Lang.List`1::InnerRemove(T)
MethodInfo List_1_InnerRemove_m44661_MethodInfo = 
{
	"InnerRemove"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_InnerRemove_m44661_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 43/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_CheckIndex_m44662_ParameterInfos[] = 
{
	{"index", 0, 134217768, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
// System.Int32 Boo.Lang.List`1::CheckIndex(System.Int32)
MethodInfo List_1_CheckIndex_m44662_MethodInfo = 
{
	"CheckIndex"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_CheckIndex_m44662_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 44/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo List_1_t6361_List_1_NormalizeIndex_m44663_ParameterInfos[] = 
{
	{"index", 0, 134217769, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
// System.Int32 Boo.Lang.List`1::NormalizeIndex(System.Int32)
MethodInfo List_1_NormalizeIndex_m44663_MethodInfo = 
{
	"NormalizeIndex"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_NormalizeIndex_m44663_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 45/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t6361_List_1_Coerce_m44664_ParameterInfos[] = 
{
	{"value", 0, 134217770, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
extern Il2CppType List_1_t6361_gp_0_0_0_0;
// T Boo.Lang.List`1::Coerce(System.Object)
MethodInfo List_1_Coerce_m44664_MethodInfo = 
{
	"Coerce"/* name */
	, NULL/* method */
	, &List_1_t6361_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t6361_gp_0_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t6361_List_1_Coerce_m44664_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 46/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* List_1_t6361_MethodInfos[] =
{
	&List_1__ctor_m44620_MethodInfo,
	&List_1__cctor_m44621_MethodInfo,
	&List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m44622_MethodInfo,
	&List_1_System_Collections_IEnumerable_GetEnumerator_m44623_MethodInfo,
	&List_1_System_Collections_Generic_IListU3CTU3E_Insert_m44624_MethodInfo,
	&List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m44625_MethodInfo,
	&List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m44626_MethodInfo,
	&List_1_System_Collections_IList_Add_m44627_MethodInfo,
	&List_1_System_Collections_IList_Insert_m44628_MethodInfo,
	&List_1_System_Collections_IList_Remove_m44629_MethodInfo,
	&List_1_System_Collections_IList_IndexOf_m44630_MethodInfo,
	&List_1_System_Collections_IList_Contains_m44631_MethodInfo,
	&List_1_System_Collections_IList_get_Item_m44632_MethodInfo,
	&List_1_System_Collections_IList_set_Item_m44633_MethodInfo,
	&List_1_System_Collections_IList_RemoveAt_m44634_MethodInfo,
	&List_1_System_Collections_IList_get_IsFixedSize_m44635_MethodInfo,
	&List_1_System_Collections_ICollection_CopyTo_m44636_MethodInfo,
	&List_1_get_Count_m44637_MethodInfo,
	&List_1_GetEnumerator_m44638_MethodInfo,
	&List_1_CopyTo_m44639_MethodInfo,
	&List_1_get_IsSynchronized_m44640_MethodInfo,
	&List_1_get_SyncRoot_m44641_MethodInfo,
	&List_1_get_IsReadOnly_m44642_MethodInfo,
	&List_1_get_Item_m44643_MethodInfo,
	&List_1_set_Item_m44644_MethodInfo,
	&List_1_Push_m44645_MethodInfo,
	&List_1_Add_m44646_MethodInfo,
	&List_1_ToString_m44647_MethodInfo,
	&List_1_Join_m44648_MethodInfo,
	&List_1_GetHashCode_m44649_MethodInfo,
	&List_1_Equals_m44650_MethodInfo,
	&List_1_Equals_m44651_MethodInfo,
	&List_1_Clear_m44652_MethodInfo,
	&List_1_Contains_m44653_MethodInfo,
	&List_1_IndexOf_m44654_MethodInfo,
	&List_1_Insert_m44655_MethodInfo,
	&List_1_Remove_m44656_MethodInfo,
	&List_1_RemoveAt_m44657_MethodInfo,
	&List_1_EnsureCapacity_m44658_MethodInfo,
	&List_1_NewArray_m44659_MethodInfo,
	&List_1_InnerRemoveAt_m44660_MethodInfo,
	&List_1_InnerRemove_m44661_MethodInfo,
	&List_1_CheckIndex_m44662_MethodInfo,
	&List_1_NormalizeIndex_m44663_MethodInfo,
	&List_1_Coerce_m44664_MethodInfo,
	NULL
};
extern MethodInfo List_1_System_Collections_IList_get_Item_m44632_MethodInfo;
extern MethodInfo List_1_System_Collections_IList_set_Item_m44633_MethodInfo;
static PropertyInfo List_1_t6361____System_Collections_IList_Item_PropertyInfo = 
{
	&List_1_t6361_il2cpp_TypeInfo/* parent */
	, "System.Collections.IList.Item"/* name */
	, &List_1_System_Collections_IList_get_Item_m44632_MethodInfo/* get */
	, &List_1_System_Collections_IList_set_Item_m44633_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_System_Collections_IList_get_IsFixedSize_m44635_MethodInfo;
static PropertyInfo List_1_t6361____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&List_1_t6361_il2cpp_TypeInfo/* parent */
	, "System.Collections.IList.IsFixedSize"/* name */
	, &List_1_System_Collections_IList_get_IsFixedSize_m44635_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_Count_m44637_MethodInfo;
static PropertyInfo List_1_t6361____Count_PropertyInfo = 
{
	&List_1_t6361_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &List_1_get_Count_m44637_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_IsSynchronized_m44640_MethodInfo;
static PropertyInfo List_1_t6361____IsSynchronized_PropertyInfo = 
{
	&List_1_t6361_il2cpp_TypeInfo/* parent */
	, "IsSynchronized"/* name */
	, &List_1_get_IsSynchronized_m44640_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_SyncRoot_m44641_MethodInfo;
static PropertyInfo List_1_t6361____SyncRoot_PropertyInfo = 
{
	&List_1_t6361_il2cpp_TypeInfo/* parent */
	, "SyncRoot"/* name */
	, &List_1_get_SyncRoot_m44641_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_IsReadOnly_m44642_MethodInfo;
static PropertyInfo List_1_t6361____IsReadOnly_PropertyInfo = 
{
	&List_1_t6361_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &List_1_get_IsReadOnly_m44642_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_Item_m44643_MethodInfo;
extern MethodInfo List_1_set_Item_m44644_MethodInfo;
static PropertyInfo List_1_t6361____Item_PropertyInfo = 
{
	&List_1_t6361_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &List_1_get_Item_m44643_MethodInfo/* get */
	, &List_1_set_Item_m44644_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* List_1_t6361_PropertyInfos[] =
{
	&List_1_t6361____System_Collections_IList_Item_PropertyInfo,
	&List_1_t6361____System_Collections_IList_IsFixedSize_PropertyInfo,
	&List_1_t6361____Count_PropertyInfo,
	&List_1_t6361____IsSynchronized_PropertyInfo,
	&List_1_t6361____SyncRoot_PropertyInfo,
	&List_1_t6361____IsReadOnly_PropertyInfo,
	&List_1_t6361____Item_PropertyInfo,
	NULL
};
extern Il2CppType TU5BU5D_t6384_0_0_49;
FieldInfo List_1_t6361____EmptyArray_FieldInfo = 
{
	"EmptyArray"/* name */
	, &TU5BU5D_t6384_0_0_49/* type */
	, &List_1_t6361_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TU5BU5D_t6384_0_0_4;
FieldInfo List_1_t6361_____items_FieldInfo = 
{
	"_items"/* name */
	, &TU5BU5D_t6384_0_0_4/* type */
	, &List_1_t6361_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_4;
FieldInfo List_1_t6361_____count_FieldInfo = 
{
	"_count"/* name */
	, &Int32_t73_0_0_4/* type */
	, &List_1_t6361_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* List_1_t6361_FieldInfos[] =
{
	&List_1_t6361____EmptyArray_FieldInfo,
	&List_1_t6361_____items_FieldInfo,
	&List_1_t6361_____count_FieldInfo,
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType List_1_t6361_0_0_0;
extern Il2CppType List_1_t6361_1_0_0;
struct List_1_t6361;
extern TypeInfo List_1_t6361_il2cpp_TypeInfo;
TypeInfo List_1_t6361_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "List`1"/* name */
	, "Boo.Lang"/* namespaze */
	, List_1_t6361_MethodInfos/* methods */
	, List_1_t6361_PropertyInfos/* properties */
	, List_1_t6361_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &List_1_t6361_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &List_1_t6361_0_0_0/* byval_arg */
	, &List_1_t6361_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &List_1_t6361_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
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
	, 45/* method_count */
	, 7/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern TypeInfo DefaultMemberAttribute_t978_il2cpp_TypeInfo;
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern MethodInfo DefaultMemberAttribute__ctor_m4226_MethodInfo;
void List_1_t6361_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t978 * tmp;
		tmp = (DefaultMemberAttribute_t978 *)il2cpp_codegen_object_new (&DefaultMemberAttribute_t978_il2cpp_TypeInfo);
		DefaultMemberAttribute__ctor_m4226(tmp, il2cpp_codegen_string_new_wrapper("Item"), &DefaultMemberAttribute__ctor_m4226_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void List_1_t6361_CustomAttributesCacheGenerator_List_1_GetEnumerator_m44638(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache List_1_t6361__CustomAttributeCache = {
1,
NULL,
&List_1_t6361_CustomAttributesCacheGenerator
};
CustomAttributesCache List_1_t6361__CustomAttributeCache_List_1_GetEnumerator_m44638 = {
1,
NULL,
&List_1_t6361_CustomAttributesCacheGenerator_List_1_GetEnumerator_m44638
};
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCacheMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispatcher.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern MethodInfo DispatcherFactory__ctor_m44565_MethodInfo;
 void DispatcherFactory__ctor_m44565 (DispatcherFactory_t6363 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern MethodInfo DispatcherFactory_Invoke_m44566_MethodInfo;
 Dispatcher_t6362 * DispatcherFactory_Invoke_m44566 (DispatcherFactory_t6363 * __this, MethodInfo* method){
	// runtime
	typedef  Dispatcher_t6362 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	if (__this->___prev)
		DispatcherFactory_Invoke_m44566((DispatcherFactory_t6363 *)__this->___prev , method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, (MethodInfo*)(__this->___method.___m_value));
}
Dispatcher_t6362 * pinvoke_delegate_wrapper_DispatcherFactory_t6363(Il2CppObject* delegate)
{
	typedef methodPointerType (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	methodPointerType _return_value = _il2cpp_pinvoke_func();
	Dispatcher_t6362 * __return_value_unmarshaled = { 0 };
	extern TypeInfo Dispatcher_t6362_il2cpp_TypeInfo;
	__return_value_unmarshaled = il2cpp_codegen_marshal_function_ptr_to_delegate<Dispatcher_t6362>(_return_value, &Dispatcher_t6362_il2cpp_TypeInfo);

	return __return_value_unmarshaled;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DispatcherFactory_BeginInvoke_m44567_MethodInfo;
 Object_t * DispatcherFactory_BeginInvoke_m44567 (DispatcherFactory_t6363 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern MethodInfo DispatcherFactory_EndInvoke_m44568_MethodInfo;
 Dispatcher_t6362 * DispatcherFactory_EndInvoke_m44568 (DispatcherFactory_t6363 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Dispatcher_t6362 *)__result;
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo DispatcherFactory_t6363_DispatcherFactory__ctor_m44565_ParameterInfos[] = 
{
	{"object", 0, 134217773, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217774, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
MethodInfo DispatcherFactory__ctor_m44565_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DispatcherFactory__ctor_m44565/* method */
	, &DispatcherFactory_t6363_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, DispatcherFactory_t6363_DispatcherFactory__ctor_m44565_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 56/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
MethodInfo DispatcherFactory_Invoke_m44566_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&DispatcherFactory_Invoke_m44566/* method */
	, &DispatcherFactory_t6363_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t6362_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 57/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo DispatcherFactory_t6363_DispatcherFactory_BeginInvoke_m44567_ParameterInfos[] = 
{
	{"callback", 0, 134217775, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 1, 134217776, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
MethodInfo DispatcherFactory_BeginInvoke_m44567_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&DispatcherFactory_BeginInvoke_m44567/* method */
	, &DispatcherFactory_t6363_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, DispatcherFactory_t6363_DispatcherFactory_BeginInvoke_m44567_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 58/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo DispatcherFactory_t6363_DispatcherFactory_EndInvoke_m44568_ParameterInfos[] = 
{
	{"result", 0, 134217777, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
MethodInfo DispatcherFactory_EndInvoke_m44568_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&DispatcherFactory_EndInvoke_m44568/* method */
	, &DispatcherFactory_t6363_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t6362_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, DispatcherFactory_t6363_DispatcherFactory_EndInvoke_m44568_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 59/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* DispatcherFactory_t6363_MethodInfos[] =
{
	&DispatcherFactory__ctor_m44565_MethodInfo,
	&DispatcherFactory_Invoke_m44566_MethodInfo,
	&DispatcherFactory_BeginInvoke_m44567_MethodInfo,
	&DispatcherFactory_EndInvoke_m44568_MethodInfo,
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
extern MethodInfo DispatcherFactory_Invoke_m44566_MethodInfo;
extern MethodInfo DispatcherFactory_BeginInvoke_m44567_MethodInfo;
extern MethodInfo DispatcherFactory_EndInvoke_m44568_MethodInfo;
static MethodInfo* DispatcherFactory_t6363_VTable[] =
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
	&DispatcherFactory_Invoke_m44566_MethodInfo,
	&DispatcherFactory_BeginInvoke_m44567_MethodInfo,
	&DispatcherFactory_EndInvoke_m44568_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DispatcherFactory_t6363_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType DispatcherFactory_t6363_0_0_0;
extern Il2CppType DispatcherFactory_t6363_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct DispatcherFactory_t6363;
extern TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo;
extern TypeInfo DispatcherCache_t6365_il2cpp_TypeInfo;
TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "DispatcherFactory"/* name */
	, ""/* namespaze */
	, DispatcherFactory_t6363_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &DispatcherCache_t6365_il2cpp_TypeInfo/* nested_in */
	, &DispatcherFactory_t6363_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DispatcherFactory_t6363_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DispatcherFactory_t6363_il2cpp_TypeInfo/* cast_class */
	, &DispatcherFactory_t6363_0_0_0/* byval_arg */
	, &DispatcherFactory_t6363_1_0_0/* this_arg */
	, DispatcherFactory_t6363_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_DispatcherFactory_t6363/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DispatcherFactory_t6363)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
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
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispatcherCache_t6365_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0MethodDeclarations.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_278.h"
extern TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t6364_il2cpp_TypeInfo;
extern TypeInfo DispatcherCache_t6365_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo Dispatcher_t6362_il2cpp_TypeInfo;
extern TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKeyMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_278MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m44665_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m44666_MethodInfo;
extern MethodInfo Monitor_Enter_m38790_MethodInfo;
extern MethodInfo DispatcherFactory_Invoke_m44566_MethodInfo;
extern MethodInfo Dictionary_2_Add_m44667_MethodInfo;
extern MethodInfo Monitor_Exit_m38792_MethodInfo;


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern MethodInfo DispatcherCache__ctor_m44569_MethodInfo;
 void DispatcherCache__ctor_m44569 (DispatcherCache_t6365 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern MethodInfo DispatcherCache__cctor_m44570_MethodInfo;
 void DispatcherCache__cctor_m44570 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherKey_t6366_il2cpp_TypeInfo));
		Dictionary_2_t6364 * L_0 = (Dictionary_2_t6364 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dictionary_2_t6364_il2cpp_TypeInfo));
		Dictionary_2__ctor_m44665(L_0, (((DispatcherKey_t6366_StaticFields*)InitializedTypeInfo(&DispatcherKey_t6366_il2cpp_TypeInfo)->static_fields)->___EqualityComparer), /*hidden argument*/&Dictionary_2__ctor_m44665_MethodInfo);
		((DispatcherCache_t6365_StaticFields*)InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo)->static_fields)->____cache = L_0;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern MethodInfo DispatcherCache_Get_m44571_MethodInfo;
 Dispatcher_t6362 * DispatcherCache_Get_m44571 (DispatcherCache_t6365 * __this, DispatcherKey_t6366 * ___key, DispatcherFactory_t6363 * ___factory, MethodInfo* method){
	Dispatcher_t6362 * V_0 = {0};
	Dictionary_2_t6364 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t972 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t972 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo));
		NullCheck((((DispatcherCache_t6365_StaticFields*)InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo)->static_fields)->____cache));
		bool L_0 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t6366 *, Dispatcher_t6362 ** >::Invoke(&Dictionary_2_TryGetValue_m44666_MethodInfo, (((DispatcherCache_t6365_StaticFields*)InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo)->static_fields)->____cache), ___key, (&V_0));
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo));
		V_1 = (((DispatcherCache_t6365_StaticFields*)InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo)->static_fields)->____cache);
		Monitor_Enter_m38790(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Enter_m38790_MethodInfo);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo));
			NullCheck((((DispatcherCache_t6365_StaticFields*)InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo)->static_fields)->____cache));
			bool L_1 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t6366 *, Dispatcher_t6362 ** >::Invoke(&Dictionary_2_TryGetValue_m44666_MethodInfo, (((DispatcherCache_t6365_StaticFields*)InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo)->static_fields)->____cache), ___key, (&V_0));
			if (L_1)
			{
				goto IL_0043;
			}
		}

IL_0030:
		{
			NullCheck(___factory);
			Dispatcher_t6362 * L_2 = (Dispatcher_t6362 *)VirtFuncInvoker0< Dispatcher_t6362 * >::Invoke(&DispatcherFactory_Invoke_m44566_MethodInfo, ___factory);
			V_0 = L_2;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo));
			NullCheck((((DispatcherCache_t6365_StaticFields*)InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo)->static_fields)->____cache));
			VirtActionInvoker2< DispatcherKey_t6366 *, Dispatcher_t6362 * >::Invoke(&Dictionary_2_Add_m44667_MethodInfo, (((DispatcherCache_t6365_StaticFields*)InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo)->static_fields)->____cache), ___key, V_0);
		}

IL_0043:
		{
			// IL_0043: leave IL_004f
			leaveInstructions[0] = 0x4F; // 1
			throw Il2CppFinallySentinel();
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0048;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t972 *)e.ex;
		goto IL_0048;
	}

IL_0048:
	{ // begin finally (depth: 1)
		Monitor_Exit_m38792(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Exit_m38792_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x4F:
				goto IL_004f;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t972 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception (_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_004f:
	{
		return V_0;
	}
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
extern Il2CppType Dictionary_2_t6364_0_0_17;
FieldInfo DispatcherCache_t6365_____cache_FieldInfo = 
{
	"_cache"/* name */
	, &Dictionary_2_t6364_0_0_17/* type */
	, &DispatcherCache_t6365_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherCache_t6365_StaticFields, ____cache)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DispatcherCache_t6365_FieldInfos[] =
{
	&DispatcherCache_t6365_____cache_FieldInfo,
	NULL
};
extern TypeInfo DispatcherCache_t6365_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
MethodInfo DispatcherCache__ctor_m44569_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DispatcherCache__ctor_m44569/* method */
	, &DispatcherCache_t6365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 53/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo DispatcherCache_t6365_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
MethodInfo DispatcherCache__cctor_m44570_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&DispatcherCache__cctor_m44570/* method */
	, &DispatcherCache_t6365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 54/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DispatcherKey_t6366_0_0_0;
extern Il2CppType DispatcherFactory_t6363_0_0_0;
static ParameterInfo DispatcherCache_t6365_DispatcherCache_Get_m44571_ParameterInfos[] = 
{
	{"key", 0, 134217771, &EmptyCustomAttributesCache, &DispatcherKey_t6366_0_0_0},
	{"factory", 1, 134217772, &EmptyCustomAttributesCache, &DispatcherFactory_t6363_0_0_0},
};
extern TypeInfo DispatcherCache_t6365_il2cpp_TypeInfo;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
MethodInfo DispatcherCache_Get_m44571_MethodInfo = 
{
	"Get"/* name */
	, (methodPointerType)&DispatcherCache_Get_m44571/* method */
	, &DispatcherCache_t6365_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t6362_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, DispatcherCache_t6365_DispatcherCache_Get_m44571_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 55/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* DispatcherCache_t6365_MethodInfos[] =
{
	&DispatcherCache__ctor_m44569_MethodInfo,
	&DispatcherCache__cctor_m44570_MethodInfo,
	&DispatcherCache_Get_m44571_MethodInfo,
	NULL
};
extern TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo;
static TypeInfo* DispatcherCache_t6365_il2cpp_TypeInfo__nestedTypes[2] =
{
	&DispatcherFactory_t6363_il2cpp_TypeInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* DispatcherCache_t6365_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType DispatcherCache_t6365_0_0_0;
extern Il2CppType DispatcherCache_t6365_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct DispatcherCache_t6365;
extern TypeInfo DispatcherCache_t6365_il2cpp_TypeInfo;
TypeInfo DispatcherCache_t6365_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "DispatcherCache"/* name */
	, "Boo.Lang.Runtime.DynamicDispatching"/* namespaze */
	, DispatcherCache_t6365_MethodInfos/* methods */
	, NULL/* properties */
	, DispatcherCache_t6365_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, DispatcherCache_t6365_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &DispatcherCache_t6365_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DispatcherCache_t6365_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DispatcherCache_t6365_il2cpp_TypeInfo/* cast_class */
	, &DispatcherCache_t6365_0_0_0/* byval_arg */
	, &DispatcherCache_t6365_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DispatcherCache_t6365)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(DispatcherCache_t6365_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo _EqualityComparer_t6367_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Type_GetHashCode_m44668_MethodInfo;
extern MethodInfo String_GetHashCode_m42073_MethodInfo;
extern MethodInfo String_op_Inequality_m4764_MethodInfo;


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
extern MethodInfo _EqualityComparer__ctor_m44572_MethodInfo;
 void _EqualityComparer__ctor_m44572 (_EqualityComparer_t6367 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern MethodInfo _EqualityComparer_GetHashCode_m44573_MethodInfo;
 int32_t _EqualityComparer_GetHashCode_m44573 (_EqualityComparer_t6367 * __this, DispatcherKey_t6366 * ___key, MethodInfo* method){
	{
		NullCheck(___key);
		Type_t * L_0 = (___key->____type);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Type_GetHashCode_m44668_MethodInfo, L_0);
		NullCheck(___key);
		String_t* L_2 = (___key->____name);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m42073_MethodInfo, L_2);
		NullCheck(___key);
		TypeU5BU5D_t1042* L_4 = (___key->____arguments);
		NullCheck(L_4);
		return ((int32_t)(((int32_t)(L_1^L_3))^(((int32_t)(((Array_t *)L_4)->max_length)))));
	}
}
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern MethodInfo _EqualityComparer_Equals_m44574_MethodInfo;
 bool _EqualityComparer_Equals_m44574 (_EqualityComparer_t6367 * __this, DispatcherKey_t6366 * ___x, DispatcherKey_t6366 * ___y, MethodInfo* method){
	int32_t V_0 = 0;
	{
		NullCheck(___x);
		Type_t * L_0 = (___x->____type);
		NullCheck(___y);
		Type_t * L_1 = (___y->____type);
		if ((((Type_t *)L_0) == ((Type_t *)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		NullCheck(___x);
		TypeU5BU5D_t1042* L_2 = (___x->____arguments);
		NullCheck(L_2);
		NullCheck(___y);
		TypeU5BU5D_t1042* L_3 = (___y->____arguments);
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		NullCheck(___x);
		String_t* L_4 = (___x->____name);
		NullCheck(___y);
		String_t* L_5 = (___y->____name);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Inequality_m4764(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&String_op_Inequality_m4764_MethodInfo);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0049:
	{
		NullCheck(___x);
		TypeU5BU5D_t1042* L_7 = (___x->____arguments);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_0);
		NullCheck(___y);
		TypeU5BU5D_t1042* L_8 = (___y->____arguments);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, V_0);
		if ((((Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_7, V_0))) == ((Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_8, V_0)))))
		{
			goto IL_0060;
		}
	}
	{
		return 0;
	}

IL_0060:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0064:
	{
		NullCheck(___x);
		TypeU5BU5D_t1042* L_9 = (___x->____arguments);
		NullCheck(L_9);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
extern TypeInfo _EqualityComparer_t6367_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
MethodInfo _EqualityComparer__ctor_m44572_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&_EqualityComparer__ctor_m44572/* method */
	, &_EqualityComparer_t6367_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 62/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DispatcherKey_t6366_0_0_0;
static ParameterInfo _EqualityComparer_t6367__EqualityComparer_GetHashCode_m44573_ParameterInfos[] = 
{
	{"key", 0, 134217781, &EmptyCustomAttributesCache, &DispatcherKey_t6366_0_0_0},
};
extern TypeInfo _EqualityComparer_t6367_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
MethodInfo _EqualityComparer_GetHashCode_m44573_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&_EqualityComparer_GetHashCode_m44573/* method */
	, &_EqualityComparer_t6367_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, _EqualityComparer_t6367__EqualityComparer_GetHashCode_m44573_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 63/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DispatcherKey_t6366_0_0_0;
extern Il2CppType DispatcherKey_t6366_0_0_0;
static ParameterInfo _EqualityComparer_t6367__EqualityComparer_Equals_m44574_ParameterInfos[] = 
{
	{"x", 0, 134217782, &EmptyCustomAttributesCache, &DispatcherKey_t6366_0_0_0},
	{"y", 1, 134217783, &EmptyCustomAttributesCache, &DispatcherKey_t6366_0_0_0},
};
extern TypeInfo _EqualityComparer_t6367_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
MethodInfo _EqualityComparer_Equals_m44574_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&_EqualityComparer_Equals_m44574/* method */
	, &_EqualityComparer_t6367_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, _EqualityComparer_t6367__EqualityComparer_Equals_m44574_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 64/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* _EqualityComparer_t6367_MethodInfos[] =
{
	&_EqualityComparer__ctor_m44572_MethodInfo,
	&_EqualityComparer_GetHashCode_m44573_MethodInfo,
	&_EqualityComparer_Equals_m44574_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo _EqualityComparer_Equals_m44574_MethodInfo;
extern MethodInfo _EqualityComparer_GetHashCode_m44573_MethodInfo;
static MethodInfo* _EqualityComparer_t6367_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&_EqualityComparer_Equals_m44574_MethodInfo,
	&_EqualityComparer_GetHashCode_m44573_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t6368_il2cpp_TypeInfo;
static TypeInfo* _EqualityComparer_t6367_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t6368_il2cpp_TypeInfo,
};
extern TypeInfo IEqualityComparer_1_t6368_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair _EqualityComparer_t6367_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6368_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType _EqualityComparer_t6367_0_0_0;
extern Il2CppType _EqualityComparer_t6367_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct _EqualityComparer_t6367;
extern TypeInfo _EqualityComparer_t6367_il2cpp_TypeInfo;
extern TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo;
TypeInfo _EqualityComparer_t6367_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "_EqualityComparer"/* name */
	, ""/* namespaze */
	, _EqualityComparer_t6367_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &DispatcherKey_t6366_il2cpp_TypeInfo/* nested_in */
	, &_EqualityComparer_t6367_il2cpp_TypeInfo/* element_class */
	, _EqualityComparer_t6367_InterfacesTypeInfos/* implemented_interfaces */
	, _EqualityComparer_t6367_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &_EqualityComparer_t6367_il2cpp_TypeInfo/* cast_class */
	, &_EqualityComparer_t6367_0_0_0/* byval_arg */
	, &_EqualityComparer_t6367_1_0_0/* this_arg */
	, _EqualityComparer_t6367_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (_EqualityComparer_t6367)/* instance_size */
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
	, false/* is_generic */
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
	, 6/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo;

extern TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo;
extern TypeInfo _EqualityComparer_t6367_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo _EqualityComparer__ctor_m44572_MethodInfo;


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
extern MethodInfo DispatcherKey__ctor_m44575_MethodInfo;
 void DispatcherKey__ctor_m44575 (DispatcherKey_t6366 * __this, Type_t * ___type, String_t* ___name, TypeU5BU5D_t1042* ___arguments, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		__this->____type = ___type;
		__this->____name = ___name;
		__this->____arguments = ___arguments;
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.cctor()
extern MethodInfo DispatcherKey__cctor_m44576_MethodInfo;
 void DispatcherKey__cctor_m44576 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		_EqualityComparer_t6367 * L_0 = (_EqualityComparer_t6367 *)il2cpp_codegen_object_new (InitializedTypeInfo(&_EqualityComparer_t6367_il2cpp_TypeInfo));
		_EqualityComparer__ctor_m44572(L_0, /*hidden argument*/&_EqualityComparer__ctor_m44572_MethodInfo);
		((DispatcherKey_t6366_StaticFields*)InitializedTypeInfo(&DispatcherKey_t6366_il2cpp_TypeInfo)->static_fields)->___EqualityComparer = L_0;
		return;
	}
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
extern Il2CppType IEqualityComparer_1_t6368_0_0_54;
FieldInfo DispatcherKey_t6366____EqualityComparer_FieldInfo = 
{
	"EqualityComparer"/* name */
	, &IEqualityComparer_1_t6368_0_0_54/* type */
	, &DispatcherKey_t6366_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherKey_t6366_StaticFields, ___EqualityComparer)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Type_t_0_0_33;
FieldInfo DispatcherKey_t6366_____type_FieldInfo = 
{
	"_type"/* name */
	, &Type_t_0_0_33/* type */
	, &DispatcherKey_t6366_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherKey_t6366, ____type)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_33;
FieldInfo DispatcherKey_t6366_____name_FieldInfo = 
{
	"_name"/* name */
	, &String_t_0_0_33/* type */
	, &DispatcherKey_t6366_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherKey_t6366, ____name)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeU5BU5D_t1042_0_0_33;
FieldInfo DispatcherKey_t6366_____arguments_FieldInfo = 
{
	"_arguments"/* name */
	, &TypeU5BU5D_t1042_0_0_33/* type */
	, &DispatcherKey_t6366_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherKey_t6366, ____arguments)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DispatcherKey_t6366_FieldInfos[] =
{
	&DispatcherKey_t6366____EqualityComparer_FieldInfo,
	&DispatcherKey_t6366_____type_FieldInfo,
	&DispatcherKey_t6366_____name_FieldInfo,
	&DispatcherKey_t6366_____arguments_FieldInfo,
	NULL
};
extern Il2CppType Type_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType TypeU5BU5D_t1042_0_0_0;
static ParameterInfo DispatcherKey_t6366_DispatcherKey__ctor_m44575_ParameterInfos[] = 
{
	{"type", 0, 134217778, &EmptyCustomAttributesCache, &Type_t_0_0_0},
	{"name", 1, 134217779, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"arguments", 2, 134217780, &EmptyCustomAttributesCache, &TypeU5BU5D_t1042_0_0_0},
};
extern TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
MethodInfo DispatcherKey__ctor_m44575_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DispatcherKey__ctor_m44575/* method */
	, &DispatcherKey_t6366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, DispatcherKey_t6366_DispatcherKey__ctor_m44575_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 60/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.cctor()
MethodInfo DispatcherKey__cctor_m44576_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&DispatcherKey__cctor_m44576/* method */
	, &DispatcherKey_t6366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 61/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* DispatcherKey_t6366_MethodInfos[] =
{
	&DispatcherKey__ctor_m44575_MethodInfo,
	&DispatcherKey__cctor_m44576_MethodInfo,
	NULL
};
extern TypeInfo _EqualityComparer_t6367_il2cpp_TypeInfo;
static TypeInfo* DispatcherKey_t6366_il2cpp_TypeInfo__nestedTypes[2] =
{
	&_EqualityComparer_t6367_il2cpp_TypeInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* DispatcherKey_t6366_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType DispatcherKey_t6366_0_0_0;
extern Il2CppType DispatcherKey_t6366_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct DispatcherKey_t6366;
extern TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo;
TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "DispatcherKey"/* name */
	, "Boo.Lang.Runtime.DynamicDispatching"/* namespaze */
	, DispatcherKey_t6366_MethodInfos/* methods */
	, NULL/* properties */
	, DispatcherKey_t6366_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, DispatcherKey_t6366_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &DispatcherKey_t6366_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DispatcherKey_t6366_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DispatcherKey_t6366_il2cpp_TypeInfo/* cast_class */
	, &DispatcherKey_t6366_0_0_0/* byval_arg */
	, &DispatcherKey_t6366_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DispatcherKey_t6366)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(DispatcherKey_t6366_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NumericPromotions_t6369_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotioMethodDeclarations.h"



// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
static MethodInfo* NumericPromotions_t6369_MethodInfos[] =
{
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* NumericPromotions_t6369_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType NumericPromotions_t6369_0_0_0;
extern Il2CppType NumericPromotions_t6369_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct NumericPromotions_t6369;
extern TypeInfo NumericPromotions_t6369_il2cpp_TypeInfo;
TypeInfo NumericPromotions_t6369_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "NumericPromotions"/* name */
	, "Boo.Lang.Runtime.DynamicDispatching"/* namespaze */
	, NumericPromotions_t6369_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &NumericPromotions_t6369_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NumericPromotions_t6369_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &NumericPromotions_t6369_il2cpp_TypeInfo/* cast_class */
	, &NumericPromotions_t6369_0_0_0/* byval_arg */
	, &NumericPromotions_t6369_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NumericPromotions_t6369)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistry.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExtensionRegistry_t6371_il2cpp_TypeInfo;
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistryMethodDeclarations.h"

// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_gen.h"
extern TypeInfo ExtensionRegistry_t6371_il2cpp_TypeInfo;
extern TypeInfo List_1_t6370_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_genMethodDeclarations.h"
extern MethodInfo List_1__ctor_m44669_MethodInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
extern MethodInfo ExtensionRegistry__ctor_m44577_MethodInfo;
 void ExtensionRegistry__ctor_m44577 (ExtensionRegistry_t6371 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t6370_il2cpp_TypeInfo));
		List_1_t6370 * L_0 = (List_1_t6370 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t6370_il2cpp_TypeInfo));
		List_1__ctor_m44669(L_0, /*hidden argument*/&List_1__ctor_m44669_MethodInfo);
		__this->____extensions = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m4074(L_1, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		__this->____classLock = L_1;
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
extern MethodInfo ExtensionRegistry_get_Extensions_m44578_MethodInfo;
 Object_t* ExtensionRegistry_get_Extensions_m44578 (ExtensionRegistry_t6371 * __this, MethodInfo* method){
	{
		List_1_t6370 * L_0 = (__this->____extensions);
		return L_0;
	}
}
// Metadata Definition Boo.Lang.Runtime.ExtensionRegistry
extern Il2CppType List_1_t6370_0_0_1;
FieldInfo ExtensionRegistry_t6371_____extensions_FieldInfo = 
{
	"_extensions"/* name */
	, &List_1_t6370_0_0_1/* type */
	, &ExtensionRegistry_t6371_il2cpp_TypeInfo/* parent */
	, offsetof(ExtensionRegistry_t6371, ____extensions)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_1;
FieldInfo ExtensionRegistry_t6371_____classLock_FieldInfo = 
{
	"_classLock"/* name */
	, &Object_t_0_0_1/* type */
	, &ExtensionRegistry_t6371_il2cpp_TypeInfo/* parent */
	, offsetof(ExtensionRegistry_t6371, ____classLock)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ExtensionRegistry_t6371_FieldInfos[] =
{
	&ExtensionRegistry_t6371_____extensions_FieldInfo,
	&ExtensionRegistry_t6371_____classLock_FieldInfo,
	NULL
};
extern MethodInfo ExtensionRegistry_get_Extensions_m44578_MethodInfo;
static PropertyInfo ExtensionRegistry_t6371____Extensions_PropertyInfo = 
{
	&ExtensionRegistry_t6371_il2cpp_TypeInfo/* parent */
	, "Extensions"/* name */
	, &ExtensionRegistry_get_Extensions_m44578_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ExtensionRegistry_t6371_PropertyInfos[] =
{
	&ExtensionRegistry_t6371____Extensions_PropertyInfo,
	NULL
};
extern TypeInfo ExtensionRegistry_t6371_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
MethodInfo ExtensionRegistry__ctor_m44577_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExtensionRegistry__ctor_m44577/* method */
	, &ExtensionRegistry_t6371_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 65/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ExtensionRegistry_t6371_il2cpp_TypeInfo;
extern Il2CppType IEnumerable_1_t6372_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
MethodInfo ExtensionRegistry_get_Extensions_m44578_MethodInfo = 
{
	"get_Extensions"/* name */
	, (methodPointerType)&ExtensionRegistry_get_Extensions_m44578/* method */
	, &ExtensionRegistry_t6371_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t6372_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 66/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ExtensionRegistry_t6371_MethodInfos[] =
{
	&ExtensionRegistry__ctor_m44577_MethodInfo,
	&ExtensionRegistry_get_Extensions_m44578_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* ExtensionRegistry_t6371_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType ExtensionRegistry_t6371_0_0_0;
extern Il2CppType ExtensionRegistry_t6371_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct ExtensionRegistry_t6371;
extern TypeInfo ExtensionRegistry_t6371_il2cpp_TypeInfo;
TypeInfo ExtensionRegistry_t6371_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExtensionRegistry"/* name */
	, "Boo.Lang.Runtime"/* namespaze */
	, ExtensionRegistry_t6371_MethodInfos/* methods */
	, ExtensionRegistry_t6371_PropertyInfos/* properties */
	, ExtensionRegistry_t6371_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ExtensionRegistry_t6371_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ExtensionRegistry_t6371_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ExtensionRegistry_t6371_il2cpp_TypeInfo/* cast_class */
	, &ExtensionRegistry_t6371_0_0_0/* byval_arg */
	, &ExtensionRegistry_t6371_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExtensionRegistry_t6371)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICoercible_t6386_il2cpp_TypeInfo;



// System.Object Boo.Lang.Runtime.ICoercible::Coerce(System.Type)
// Metadata Definition Boo.Lang.Runtime.ICoercible
extern Il2CppType Type_t_0_0_0;
static ParameterInfo ICoercible_t6386_ICoercible_Coerce_m44670_ParameterInfos[] = 
{
	{"to", 0, 134217784, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern TypeInfo ICoercible_t6386_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.ICoercible::Coerce(System.Type)
MethodInfo ICoercible_Coerce_m44670_MethodInfo = 
{
	"Coerce"/* name */
	, NULL/* method */
	, &ICoercible_t6386_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ICoercible_t6386_ICoercible_Coerce_m44670_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 67/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICoercible_t6386_MethodInfos[] =
{
	&ICoercible_Coerce_m44670_MethodInfo,
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType ICoercible_t6386_0_0_0;
extern Il2CppType ICoercible_t6386_1_0_0;
struct ICoercible_t6386;
extern TypeInfo ICoercible_t6386_il2cpp_TypeInfo;
TypeInfo ICoercible_t6386_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICoercible"/* name */
	, "Boo.Lang.Runtime"/* namespaze */
	, ICoercible_t6386_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICoercible_t6386_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICoercible_t6386_il2cpp_TypeInfo/* cast_class */
	, &ICoercible_t6386_0_0_0/* byval_arg */
	, &ICoercible_t6386_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
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
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMet.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMetMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6375_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6372_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6373_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t1069_il2cpp_TypeInfo;
extern TypeInfo MemberTypes_t6387_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t1087_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t951_il2cpp_TypeInfo;
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m41392_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579_MethodInfo;
extern MethodInfo ExtensionRegistry_get_Extensions_m44578_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m44671_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m44672_MethodInfo;
extern MethodInfo MemberInfo_get_MemberType_m44673_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m38709_MethodInfo;
extern MethodInfo IDisposable_Dispose_m4170_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m39447_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::.ctor()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579_MethodInfo;
 void U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579 (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580_MethodInfo;
 MethodInfo_t1087 * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580 (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * __this, MethodInfo* method){
	{
		MethodInfo_t1087 * L_0 = (__this->___$current);
		return L_0;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581_MethodInfo;
 Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581 (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * __this, MethodInfo* method){
	{
		MethodInfo_t1087 * L_0 = (__this->___$current);
		return L_0;
	}
}
// System.Collections.IEnumerator Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582_MethodInfo;
 Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582 (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * __this, MethodInfo* method){
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583_MethodInfo, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583_MethodInfo;
 Object_t* U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583 (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * __this, MethodInfo* method){
	{
		int32_t* L_0 = &(__this->___$PC);
		int32_t L_1 = Interlocked_CompareExchange_m41392(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/&Interlocked_CompareExchange_m41392_MethodInfo);
		if ((((uint32_t)L_1) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * L_2 = (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo));
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579(L_2, /*hidden argument*/&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579_MethodInfo);
		return L_2;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::MoveNext()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m44584_MethodInfo;
 bool U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m44584 (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t leaveInstructions[1] = {0};
	Exception_t972 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t972 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___$PC);
		V_0 = L_0;
		__this->___$PC = (-1);
		V_1 = 0;
		if (V_0 == 0)
		{
			goto IL_0023;
		}
		if (V_0 == 1)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c2;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		NullCheck((((RuntimeServices_t5971_StaticFields*)InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo)->static_fields)->____extensions));
		Object_t* L_1 = ExtensionRegistry_get_Extensions_m44578((((RuntimeServices_t5971_StaticFields*)InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo)->static_fields)->____extensions), /*hidden argument*/&ExtensionRegistry_get_Extensions_m44578_MethodInfo);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(&IEnumerable_1_GetEnumerator_m44671_MethodInfo, L_1);
		__this->___U3C$s_49U3E__0 = L_2;
		V_0 = ((int32_t)-3);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			if (((uint32_t)(V_0-1)) == 0)
			{
				goto IL_008d;
			}
		}

IL_0047:
		{
			goto IL_008d;
		}

IL_004c:
		{
			Object_t* L_3 = (__this->___U3C$s_49U3E__0);
			NullCheck(L_3);
			MemberInfo_t1069 * L_4 = (MemberInfo_t1069 *)InterfaceFuncInvoker0< MemberInfo_t1069 * >::Invoke(&IEnumerator_1_get_Current_m44672_MethodInfo, L_3);
			__this->___U3CmemberU3E__1 = L_4;
			MemberInfo_t1069 * L_5 = (__this->___U3CmemberU3E__1);
			NullCheck(L_5);
			int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MemberInfo_get_MemberType_m44673_MethodInfo, L_5);
			if ((((uint32_t)L_6) != ((uint32_t)8)))
			{
				goto IL_008d;
			}
		}

IL_006e:
		{
			MemberInfo_t1069 * L_7 = (__this->___U3CmemberU3E__1);
			__this->___$current = ((MethodInfo_t1087 *)Castclass(L_7, InitializedTypeInfo(&MethodInfo_t1087_il2cpp_TypeInfo)));
			__this->___$PC = 1;
			V_1 = 1;
			// IL_0088: leave IL_00c4
			leaveInstructions[0] = 0xC4; // 1
			throw Il2CppFinallySentinel();
			// finally target depth: 1
		}

IL_008d:
		{
			Object_t* L_8 = (__this->___U3C$s_49U3E__0);
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m38709_MethodInfo, L_8);
			if (L_9)
			{
				goto IL_004c;
			}
		}

IL_009d:
		{
			// IL_009d: leave IL_00bb
			leaveInstructions[0] = 0xBB; // 1
			throw Il2CppFinallySentinel();
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00a2;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t972 *)e.ex;
		goto IL_00a2;
	}

IL_00a2:
	{ // begin finally (depth: 1)
		{
			if (!V_1)
			{
				goto IL_00a6;
			}
		}

IL_00a5:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC4:
					goto IL_00c4;
				case 0xBB:
					goto IL_00bb;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t972 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_00a6:
		{
			Object_t* L_10 = (__this->___U3C$s_49U3E__0);
			if (L_10)
			{
				goto IL_00af;
			}
		}

IL_00ae:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC4:
					goto IL_00c4;
				case 0xBB:
					goto IL_00bb;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t972 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_00af:
		{
			Object_t* L_11 = (__this->___U3C$s_49U3E__0);
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m4170_MethodInfo, L_11);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC4:
					goto IL_00c4;
				case 0xBB:
					goto IL_00bb;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t972 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_00bb:
	{
		__this->___$PC = (-1);
	}

IL_00c2:
	{
		return 0;
	}

IL_00c4:
	{
		return 1;
	}
	// Dead block : IL_00c6: ldloc.2
}
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Dispose()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585_MethodInfo;
 void U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585 (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	int32_t leaveInstructions[1] = {0};
	Exception_t972 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t972 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___$PC);
		V_0 = L_0;
		__this->___$PC = (-1);
		if (V_0 == 0)
		{
			goto IL_003b;
		}
		if (V_0 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// IL_0021: leave IL_003b
		leaveInstructions[0] = 0x3B; // 1
		throw Il2CppFinallySentinel();
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0026;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t972 *)e.ex;
		goto IL_0026;
	}

IL_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_1 = (__this->___U3C$s_49U3E__0);
			if (L_1)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t972 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_002f:
		{
			Object_t* L_2 = (__this->___U3C$s_49U3E__0);
			NullCheck(L_2);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m4170_MethodInfo, L_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t972 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_003b:
	{
		return;
	}
}
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Reset()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586_MethodInfo;
 void U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586 (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * __this, MethodInfo* method){
	{
		NotSupportedException_t951 * L_0 = (NotSupportedException_t951 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t951_il2cpp_TypeInfo));
		NotSupportedException__ctor_m39447(L_0, /*hidden argument*/&NotSupportedException__ctor_m39447_MethodInfo);
		il2cpp_codegen_raise_exception (L_0);
	}
}
// Metadata Definition Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
extern Il2CppType IEnumerator_1_t6373_0_0_3;
FieldInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374____U3C$s_49U3E__0_FieldInfo = 
{
	"<$s_49>__0"/* name */
	, &IEnumerator_1_t6373_0_0_3/* type */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t6374, ___U3C$s_49U3E__0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MemberInfo_t1069_0_0_3;
FieldInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374____U3CmemberU3E__1_FieldInfo = 
{
	"<member>__1"/* name */
	, &MemberInfo_t1069_0_0_3/* type */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t6374, ___U3CmemberU3E__1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_3;
FieldInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374____$PC_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t73_0_0_3/* type */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t6374, ___$PC)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MethodInfo_t1087_0_0_3;
FieldInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374____$current_FieldInfo = 
{
	"$current"/* name */
	, &MethodInfo_t1087_0_0_3/* type */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t6374, ___$current)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t6374_FieldInfos[] =
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t6374____U3C$s_49U3E__0_FieldInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_t6374____U3CmemberU3E__1_FieldInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_t6374____$PC_FieldInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_t6374____$current_FieldInfo,
	NULL
};
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580_MethodInfo;
static PropertyInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374____System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_Current_PropertyInfo = 
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.Current"/* name */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581_MethodInfo;
static PropertyInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t6374_PropertyInfos[] =
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t6374____System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_Current_PropertyInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_t6374____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::.ctor()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 87/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t1087_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 88/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581;
// System.Object Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerator.get_Current()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 89/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_t67_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582;
// System.Collections.IEnumerator Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerable.GetEnumerator()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t67_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 90/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t6375_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583_MethodInfo = 
{
	"System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6375_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 91/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::MoveNext()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m44584_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m44584/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 92/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585;
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Dispose()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 93/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586;
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Reset()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 94/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t6374_MethodInfos[] =
{
	&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m44584_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m44584_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580_MethodInfo;
static MethodInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t6374_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m44584_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580_MethodInfo,
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6378_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6375_il2cpp_TypeInfo;
static TypeInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t6374_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerable_1_t6378_il2cpp_TypeInfo,
	&IEnumerator_1_t6375_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6378_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6375_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair U3CGetExtensionMethodsU3Ec__IteratorC_t6374_InterfacesOffsets[] = 
{
	{ &IEnumerable_t977_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t67_il2cpp_TypeInfo, 5},
	{ &IDisposable_t971_il2cpp_TypeInfo, 8},
	{ &IEnumerable_1_t6378_il2cpp_TypeInfo, 9},
	{ &IEnumerator_1_t6375_il2cpp_TypeInfo, 10},
};
extern TypeInfo CompilerGeneratedAttribute_t963_il2cpp_TypeInfo;
extern MethodInfo CompilerGeneratedAttribute__ctor_m4116_MethodInfo;
void U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t963 * tmp;
		tmp = (CompilerGeneratedAttribute_t963 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t963_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m4116(tmp, &CompilerGeneratedAttribute__ctor_m4116_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CGetExtensionMethodsU3Ec__IteratorC_t6374_0_0_0;
extern Il2CppType U3CGetExtensionMethodsU3Ec__IteratorC_t6374_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct U3CGetExtensionMethodsU3Ec__IteratorC_t6374;
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m44580;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m44581;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m44582;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m44583;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m44585;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Reset_m44586;
TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetExtensionMethods>c__IteratorC"/* name */
	, ""/* namespaze */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t6374_MethodInfos/* methods */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t6374_PropertyInfos/* properties */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t6374_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* nested_in */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* element_class */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t6374_InterfacesTypeInfos/* implemented_interfaces */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t6374_VTable/* vtable */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374__CustomAttributeCache/* custom_attributes_cache */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo/* cast_class */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_0_0_0/* byval_arg */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t6374_1_0_0/* this_arg */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t6374_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetExtensionMethodsU3Ec__IteratorC_t6374)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 8/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 5/* interfaces_count */
	, 5/* interface_offsets_count */

};
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__Ano.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__AnoMethodDeclarations.h"

extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo RuntimeServices_CreateCoerceDispatcher_m44594_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::.ctor()
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D__ctor_m44587_MethodInfo;
 void U3CCoerceU3Ec__AnonStorey1D__ctor_m44587 (U3CCoerceU3Ec__AnonStorey1D_t6376 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::<>m__15()
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m44588_MethodInfo;
 Dispatcher_t6362 * U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m44588 (U3CCoerceU3Ec__AnonStorey1D_t6376 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___value);
		Type_t * L_1 = (__this->___toType);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		Dispatcher_t6362 * L_2 = RuntimeServices_CreateCoerceDispatcher_m44594(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&RuntimeServices_CreateCoerceDispatcher_m44594_MethodInfo);
		return L_2;
	}
}
// Metadata Definition Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CCoerceU3Ec__AnonStorey1D_t6376____value_FieldInfo = 
{
	"value"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCoerceU3Ec__AnonStorey1D_t6376, ___value)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Type_t_0_0_3;
FieldInfo U3CCoerceU3Ec__AnonStorey1D_t6376____toType_FieldInfo = 
{
	"toType"/* name */
	, &Type_t_0_0_3/* type */
	, &U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCoerceU3Ec__AnonStorey1D_t6376, ___toType)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CCoerceU3Ec__AnonStorey1D_t6376_FieldInfos[] =
{
	&U3CCoerceU3Ec__AnonStorey1D_t6376____value_FieldInfo,
	&U3CCoerceU3Ec__AnonStorey1D_t6376____toType_FieldInfo,
	NULL
};
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::.ctor()
MethodInfo U3CCoerceU3Ec__AnonStorey1D__ctor_m44587_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CCoerceU3Ec__AnonStorey1D__ctor_m44587/* method */
	, &U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 95/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::<>m__15()
MethodInfo U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m44588_MethodInfo = 
{
	"<>m__15"/* name */
	, (methodPointerType)&U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m44588/* method */
	, &U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t6362_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 96/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* U3CCoerceU3Ec__AnonStorey1D_t6376_MethodInfos[] =
{
	&U3CCoerceU3Ec__AnonStorey1D__ctor_m44587_MethodInfo,
	&U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m44588_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* U3CCoerceU3Ec__AnonStorey1D_t6376_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern TypeInfo CompilerGeneratedAttribute_t963_il2cpp_TypeInfo;
extern MethodInfo CompilerGeneratedAttribute__ctor_m4116_MethodInfo;
void U3CCoerceU3Ec__AnonStorey1D_t6376_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t963 * tmp;
		tmp = (CompilerGeneratedAttribute_t963 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t963_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m4116(tmp, &CompilerGeneratedAttribute__ctor_m4116_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CCoerceU3Ec__AnonStorey1D_t6376__CustomAttributeCache = {
1,
NULL,
&U3CCoerceU3Ec__AnonStorey1D_t6376_CustomAttributesCacheGenerator
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CCoerceU3Ec__AnonStorey1D_t6376_0_0_0;
extern Il2CppType U3CCoerceU3Ec__AnonStorey1D_t6376_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct U3CCoerceU3Ec__AnonStorey1D_t6376;
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern CustomAttributesCache U3CCoerceU3Ec__AnonStorey1D_t6376__CustomAttributeCache;
TypeInfo U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Coerce>c__AnonStorey1D"/* name */
	, ""/* namespaze */
	, U3CCoerceU3Ec__AnonStorey1D_t6376_MethodInfos/* methods */
	, NULL/* properties */
	, U3CCoerceU3Ec__AnonStorey1D_t6376_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* nested_in */
	, &U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, U3CCoerceU3Ec__AnonStorey1D_t6376_VTable/* vtable */
	, &U3CCoerceU3Ec__AnonStorey1D_t6376__CustomAttributeCache/* custom_attributes_cache */
	, &U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo/* cast_class */
	, &U3CCoerceU3Ec__AnonStorey1D_t6376_0_0_0/* byval_arg */
	, &U3CCoerceU3Ec__AnonStorey1D_t6376_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CCoerceU3Ec__AnonStorey1D_t6376)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitCon.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitConMethodDeclarations.h"

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t5498_il2cpp_TypeInfo;
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo MethodBase_Invoke_m38819_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::.ctor()
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m44589_MethodInfo;
 void U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m44589 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::<>m__16(System.Object,System.Object[])
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m44590_MethodInfo;
 Object_t * U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m44590 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377 * __this, Object_t * ___target, ObjectU5BU5D_t142* ___args, MethodInfo* method){
	{
		MethodInfo_t1087 * L_0 = (__this->___method);
		ObjectU5BU5D_t142* L_1 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, ___target);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)___target;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t142* >::Invoke(&MethodBase_Invoke_m38819_MethodInfo, L_0, NULL, L_1);
		return L_2;
	}
}
// Metadata Definition Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
extern Il2CppType MethodInfo_t1087_0_0_3;
FieldInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377____method_FieldInfo = 
{
	"method"/* name */
	, &MethodInfo_t1087_0_0_3/* type */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo/* parent */
	, offsetof(U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377, ___method)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_FieldInfos[] =
{
	&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377____method_FieldInfo,
	NULL
};
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::.ctor()
MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m44589_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m44589/* method */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 97/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m44590_ParameterInfos[] = 
{
	{"target", 0, 134217820, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217821, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::<>m__16(System.Object,System.Object[])
MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m44590_MethodInfo = 
{
	"<>m__16"/* name */
	, (methodPointerType)&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m44590/* method */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m44590_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 98/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_MethodInfos[] =
{
	&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m44589_MethodInfo,
	&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m44590_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern TypeInfo CompilerGeneratedAttribute_t963_il2cpp_TypeInfo;
extern MethodInfo CompilerGeneratedAttribute__ctor_m4116_MethodInfo;
void U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t963 * tmp;
		tmp = (CompilerGeneratedAttribute_t963 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t963_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m4116(tmp, &CompilerGeneratedAttribute__ctor_m4116_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377__CustomAttributeCache = {
1,
NULL,
&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_CustomAttributesCacheGenerator
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_0_0_0;
extern Il2CppType U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377;
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern CustomAttributesCache U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377__CustomAttributeCache;
TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<EmitImplicitConversionDispatcher>c__AnonStorey1E"/* name */
	, ""/* namespaze */
	, U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_MethodInfos/* methods */
	, NULL/* properties */
	, U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* nested_in */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_VTable/* vtable */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377__CustomAttributeCache/* custom_attributes_cache */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo/* cast_class */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_0_0_0/* byval_arg */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377)/* instance_size */
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
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo DispatcherCache_t6365_il2cpp_TypeInfo;
extern TypeInfo ExtensionRegistry_t6371_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo DispatcherKey_t6366_il2cpp_TypeInfo;
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t1042_il2cpp_TypeInfo;
extern TypeInfo DispatcherFactory_t6363_il2cpp_TypeInfo;
extern TypeInfo Dispatcher_t6362_il2cpp_TypeInfo;
extern TypeInfo ICoercible_t6386_il2cpp_TypeInfo;
extern TypeInfo NumericPromotions_t6369_il2cpp_TypeInfo;
extern TypeInfo TypeCode_t6388_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t1087_il2cpp_TypeInfo;
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t947_il2cpp_TypeInfo;
extern TypeInfo Decimal_t1099_il2cpp_TypeInfo;
extern TypeInfo IFormatProvider_t1076_il2cpp_TypeInfo;
extern TypeInfo Double_t918_il2cpp_TypeInfo;
extern TypeInfo Single_t960_il2cpp_TypeInfo;
extern TypeInfo UInt64_t1819_il2cpp_TypeInfo;
extern TypeInfo Int64_t1035_il2cpp_TypeInfo;
extern TypeInfo UInt32_t1028_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t6389_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t5865_il2cpp_TypeInfo;
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6378_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6375_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t1069_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t5498_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t5487_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t5488_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern Il2CppType RuntimeServices_t5971_0_0_0;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern Il2CppType NumericPromotions_t6369_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo DispatcherCache__ctor_m44569_MethodInfo;
extern MethodInfo ExtensionRegistry__ctor_m44577_MethodInfo;
extern MethodInfo Object_GetType_m4071_MethodInfo;
extern MethodInfo DispatcherKey__ctor_m44575_MethodInfo;
extern MethodInfo DispatcherCache_Get_m44571_MethodInfo;
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D__ctor_m44587_MethodInfo;
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m44588_MethodInfo;
extern MethodInfo DispatcherFactory__ctor_m44565_MethodInfo;
extern MethodInfo RuntimeServices_GetDispatcher_m44592_MethodInfo;
extern MethodInfo Dispatcher_Invoke_m44610_MethodInfo;
extern MethodInfo Type_IsInstanceOfType_m44674_MethodInfo;
extern MethodInfo RuntimeServices_IdentityDispatcher_m44599_MethodInfo;
extern MethodInfo Dispatcher__ctor_m44609_MethodInfo;
extern MethodInfo RuntimeServices_CoercibleDispatcher_m44598_MethodInfo;
extern MethodInfo RuntimeServices_IsPromotableNumeric_m44596_MethodInfo;
extern MethodInfo RuntimeServices_EmitPromotionDispatcher_m44595_MethodInfo;
extern MethodInfo RuntimeServices_FindImplicitConversionOperator_m44606_MethodInfo;
extern MethodInfo RuntimeServices_EmitImplicitConversionDispatcher_m44597_MethodInfo;
extern MethodInfo Type_GetTypeCode_m44675_MethodInfo;
extern MethodInfo String_Concat_m6531_MethodInfo;
extern MethodInfo Type_GetMethod_m44676_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m44677_MethodInfo;
extern MethodInfo RuntimeServices_IsPromotableNumeric_m44605_MethodInfo;
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m44589_MethodInfo;
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m44590_MethodInfo;
extern MethodInfo ICoercible_Coerce_m44670_MethodInfo;
extern MethodInfo String_Concat_m6509_MethodInfo;
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo RuntimeServices_IsNumeric_m44600_MethodInfo;
extern MethodInfo RuntimeServices_EqualityOperator_m44604_MethodInfo;
extern MethodInfo RuntimeServices_ArrayEqualityImpl_m44602_MethodInfo;
extern MethodInfo Array_get_Rank_m44678_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_GetValue_m44679_MethodInfo;
extern MethodInfo RuntimeServices_EqualityOperator_m44601_MethodInfo;
extern MethodInfo RuntimeServices_GetConvertTypeCode_m44603_MethodInfo;
extern MethodInfo IConvertible_ToDecimal_m44680_MethodInfo;
extern MethodInfo Decimal_op_Equality_m44681_MethodInfo;
extern MethodInfo IConvertible_ToDouble_m44682_MethodInfo;
extern MethodInfo IConvertible_ToSingle_m44683_MethodInfo;
extern MethodInfo IConvertible_ToUInt64_m44684_MethodInfo;
extern MethodInfo IConvertible_ToInt64_m44685_MethodInfo;
extern MethodInfo IConvertible_ToUInt32_m44686_MethodInfo;
extern MethodInfo IConvertible_ToInt32_m44687_MethodInfo;
extern MethodInfo Type_GetMethods_m44688_MethodInfo;
extern MethodInfo RuntimeServices_FindImplicitConversionMethod_m44608_MethodInfo;
extern MethodInfo RuntimeServices_GetExtensionMethods_m44607_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m44689_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m44690_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m38786_MethodInfo;
extern MethodInfo String_op_Inequality_m4764_MethodInfo;
extern MethodInfo MethodInfo_get_ReturnType_m44691_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m44692_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m38788_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m38812_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m38709_MethodInfo;
extern MethodInfo IDisposable_Dispose_m4170_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern MethodInfo RuntimeServices__cctor_m44591_MethodInfo;
 void RuntimeServices__cctor_m44591 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		((RuntimeServices_t5971_StaticFields*)InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo)->static_fields)->___NoArguments = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 0));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m4772(NULL /*static, unused*/, LoadTypeToken(&RuntimeServices_t5971_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m4772_MethodInfo);
		((RuntimeServices_t5971_StaticFields*)InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo)->static_fields)->___RuntimeServicesType = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo));
		DispatcherCache_t6365 * L_1 = (DispatcherCache_t6365 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherCache_t6365_il2cpp_TypeInfo));
		DispatcherCache__ctor_m44569(L_1, /*hidden argument*/&DispatcherCache__ctor_m44569_MethodInfo);
		((RuntimeServices_t5971_StaticFields*)InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo)->static_fields)->____cache = L_1;
		ExtensionRegistry_t6371 * L_2 = (ExtensionRegistry_t6371 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtensionRegistry_t6371_il2cpp_TypeInfo));
		ExtensionRegistry__ctor_m44577(L_2, /*hidden argument*/&ExtensionRegistry__ctor_m44577_MethodInfo);
		((RuntimeServices_t5971_StaticFields*)InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo)->static_fields)->____extensions = L_2;
		bool L_3 = 1;
		Object_t * L_4 = Box(InitializedTypeInfo(&Boolean_t956_il2cpp_TypeInfo), &L_3);
		((RuntimeServices_t5971_StaticFields*)InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo)->static_fields)->___True = L_4;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern MethodInfo RuntimeServices_GetDispatcher_m44592_MethodInfo;
 Dispatcher_t6362 * RuntimeServices_GetDispatcher_m44592 (Object_t * __this/* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t1042* ___cacheKeyTypes, DispatcherFactory_t6363 * ___factory, MethodInfo* method){
	Type_t * V_0 = {0};
	DispatcherKey_t6366 * V_1 = {0};
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	{
		Type_t * L_0 = ((Type_t *)IsInst(___target, InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)));
		G_B1_0 = L_0;
		if (L_0)
		{
			G_B2_0 = L_0;
			goto IL_0013;
		}
	}
	{
		NullCheck(___target);
		Type_t * L_1 = Object_GetType_m4071(___target, /*hidden argument*/&Object_GetType_m4071_MethodInfo);
		G_B2_0 = L_1;
	}

IL_0013:
	{
		V_0 = G_B2_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherKey_t6366_il2cpp_TypeInfo));
		DispatcherKey_t6366 * L_2 = (DispatcherKey_t6366 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherKey_t6366_il2cpp_TypeInfo));
		DispatcherKey__ctor_m44575(L_2, V_0, ___cacheKeyName, ___cacheKeyTypes, /*hidden argument*/&DispatcherKey__ctor_m44575_MethodInfo);
		V_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		NullCheck((((RuntimeServices_t5971_StaticFields*)InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo)->static_fields)->____cache));
		Dispatcher_t6362 * L_3 = DispatcherCache_Get_m44571((((RuntimeServices_t5971_StaticFields*)InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo)->static_fields)->____cache), V_1, ___factory, /*hidden argument*/&DispatcherCache_Get_m44571_MethodInfo);
		return L_3;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern MethodInfo RuntimeServices_Coerce_m44593_MethodInfo;
 Object_t * RuntimeServices_Coerce_m44593 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method){
	ObjectU5BU5D_t142* V_0 = {0};
	Dispatcher_t6362 * V_1 = {0};
	U3CCoerceU3Ec__AnonStorey1D_t6376 * V_2 = {0};
	{
		U3CCoerceU3Ec__AnonStorey1D_t6376 * L_0 = (U3CCoerceU3Ec__AnonStorey1D_t6376 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo));
		U3CCoerceU3Ec__AnonStorey1D__ctor_m44587(L_0, /*hidden argument*/&U3CCoerceU3Ec__AnonStorey1D__ctor_m44587_MethodInfo);
		V_2 = L_0;
		NullCheck(V_2);
		V_2->___value = ___value;
		NullCheck(V_2);
		V_2->___toType = ___toType;
		NullCheck(V_2);
		Object_t * L_1 = (V_2->___value);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		return NULL;
	}

IL_0021:
	{
		ObjectU5BU5D_t142* L_2 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 1));
		NullCheck(V_2);
		Type_t * L_3 = (V_2->___toType);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		V_0 = L_2;
		NullCheck(V_2);
		Object_t * L_4 = (V_2->___value);
		TypeU5BU5D_t1042* L_5 = ((TypeU5BU5D_t1042*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t1042_il2cpp_TypeInfo), 1));
		NullCheck(V_2);
		Type_t * L_6 = (V_2->___toType);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 0)) = (Type_t *)L_6;
		IntPtr_t24 L_7 = { &U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m44588_MethodInfo };
		DispatcherFactory_t6363 * L_8 = (DispatcherFactory_t6363 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherFactory_t6363_il2cpp_TypeInfo));
		DispatcherFactory__ctor_m44565(L_8, V_2, L_7, /*hidden argument*/&DispatcherFactory__ctor_m44565_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		Dispatcher_t6362 * L_9 = RuntimeServices_GetDispatcher_m44592(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral4006, L_5, L_8, /*hidden argument*/&RuntimeServices_GetDispatcher_m44592_MethodInfo);
		V_1 = L_9;
		NullCheck(V_2);
		Object_t * L_10 = (V_2->___value);
		NullCheck(V_1);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t142* >::Invoke(&Dispatcher_Invoke_m44610_MethodInfo, V_1, L_10, V_0);
		return L_11;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern MethodInfo RuntimeServices_CreateCoerceDispatcher_m44594_MethodInfo;
 Dispatcher_t6362 * RuntimeServices_CreateCoerceDispatcher_m44594 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method){
	Type_t * V_0 = {0};
	MethodInfo_t1087 * V_1 = {0};
	{
		NullCheck(___toType);
		bool L_0 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Type_IsInstanceOfType_m44674_MethodInfo, ___toType, ___value);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IntPtr_t24 L_1 = { &RuntimeServices_IdentityDispatcher_m44599_MethodInfo };
		Dispatcher_t6362 * L_2 = (Dispatcher_t6362 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t6362_il2cpp_TypeInfo));
		Dispatcher__ctor_m44609(L_2, NULL, L_1, /*hidden argument*/&Dispatcher__ctor_m44609_MethodInfo);
		return L_2;
	}

IL_0019:
	{
		if (!((Object_t *)IsInst(___value, InitializedTypeInfo(&ICoercible_t6386_il2cpp_TypeInfo))))
		{
			goto IL_0031;
		}
	}
	{
		IntPtr_t24 L_3 = { &RuntimeServices_CoercibleDispatcher_m44598_MethodInfo };
		Dispatcher_t6362 * L_4 = (Dispatcher_t6362 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t6362_il2cpp_TypeInfo));
		Dispatcher__ctor_m44609(L_4, NULL, L_3, /*hidden argument*/&Dispatcher__ctor_m44609_MethodInfo);
		return L_4;
	}

IL_0031:
	{
		NullCheck(___value);
		Type_t * L_5 = Object_GetType_m4071(___value, /*hidden argument*/&Object_GetType_m4071_MethodInfo);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		bool L_6 = RuntimeServices_IsPromotableNumeric_m44596(NULL /*static, unused*/, V_0, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m44596_MethodInfo);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		bool L_7 = RuntimeServices_IsPromotableNumeric_m44596(NULL /*static, unused*/, ___toType, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m44596_MethodInfo);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		Dispatcher_t6362 * L_8 = RuntimeServices_EmitPromotionDispatcher_m44595(NULL /*static, unused*/, V_0, ___toType, /*hidden argument*/&RuntimeServices_EmitPromotionDispatcher_m44595_MethodInfo);
		return L_8;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		MethodInfo_t1087 * L_9 = RuntimeServices_FindImplicitConversionOperator_m44606(NULL /*static, unused*/, V_0, ___toType, /*hidden argument*/&RuntimeServices_FindImplicitConversionOperator_m44606_MethodInfo);
		V_1 = L_9;
		if (V_1)
		{
			goto IL_0071;
		}
	}
	{
		IntPtr_t24 L_10 = { &RuntimeServices_IdentityDispatcher_m44599_MethodInfo };
		Dispatcher_t6362 * L_11 = (Dispatcher_t6362 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t6362_il2cpp_TypeInfo));
		Dispatcher__ctor_m44609(L_11, NULL, L_10, /*hidden argument*/&Dispatcher__ctor_m44609_MethodInfo);
		return L_11;
	}

IL_0071:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		Dispatcher_t6362 * L_12 = RuntimeServices_EmitImplicitConversionDispatcher_m44597(NULL /*static, unused*/, V_1, /*hidden argument*/&RuntimeServices_EmitImplicitConversionDispatcher_m44597_MethodInfo);
		return L_12;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern MethodInfo RuntimeServices_EmitPromotionDispatcher_m44595_MethodInfo;
 Dispatcher_t6362 * RuntimeServices_EmitPromotionDispatcher_m44595 (Object_t * __this/* static, unused */, Type_t * ___fromType, Type_t * ___toType, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m4772(NULL /*static, unused*/, LoadTypeToken(&Dispatcher_t6362_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m4772_MethodInfo);
		Type_t * L_1 = Type_GetTypeFromHandle_m4772(NULL /*static, unused*/, LoadTypeToken(&NumericPromotions_t6369_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m4772_MethodInfo);
		ObjectU5BU5D_t142* L_2 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 4));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral4007);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)(String_t*) &_stringLiteral4007;
		ObjectU5BU5D_t142* L_3 = L_2;
		int32_t L_4 = Type_GetTypeCode_m44675(NULL /*static, unused*/, ___fromType, /*hidden argument*/&Type_GetTypeCode_m44675_MethodInfo);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&TypeCode_t6388_il2cpp_TypeInfo), &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t142* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral4008);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)(String_t*) &_stringLiteral4008;
		ObjectU5BU5D_t142* L_8 = L_7;
		int32_t L_9 = Type_GetTypeCode_m44675(NULL /*static, unused*/, ___toType, /*hidden argument*/&Type_GetTypeCode_m44675_MethodInfo);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&TypeCode_t6388_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Concat_m6531(NULL /*static, unused*/, L_8, /*hidden argument*/&String_Concat_m6531_MethodInfo);
		NullCheck(L_1);
		MethodInfo_t1087 * L_13 = (MethodInfo_t1087 *)VirtFuncInvoker1< MethodInfo_t1087 *, String_t* >::Invoke(&Type_GetMethod_m44676_MethodInfo, L_1, L_12);
		Delegate_t959 * L_14 = Delegate_CreateDelegate_m44677(NULL /*static, unused*/, L_0, L_13, /*hidden argument*/&Delegate_CreateDelegate_m44677_MethodInfo);
		return ((Dispatcher_t6362 *)Castclass(L_14, InitializedTypeInfo(&Dispatcher_t6362_il2cpp_TypeInfo)));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern MethodInfo RuntimeServices_IsPromotableNumeric_m44596_MethodInfo;
 bool RuntimeServices_IsPromotableNumeric_m44596 (Object_t * __this/* static, unused */, Type_t * ___fromType, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_0 = Type_GetTypeCode_m44675(NULL /*static, unused*/, ___fromType, /*hidden argument*/&Type_GetTypeCode_m44675_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		bool L_1 = RuntimeServices_IsPromotableNumeric_m44605(NULL /*static, unused*/, L_0, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m44605_MethodInfo);
		return L_1;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern MethodInfo RuntimeServices_EmitImplicitConversionDispatcher_m44597_MethodInfo;
 Dispatcher_t6362 * RuntimeServices_EmitImplicitConversionDispatcher_m44597 (Object_t * __this/* static, unused */, MethodInfo_t1087 * ___method, MethodInfo* method){
	U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377 * V_0 = {0};
	{
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377 * L_0 = (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo));
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m44589(L_0, /*hidden argument*/&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m44589_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___method = ___method;
		IntPtr_t24 L_1 = { &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m44590_MethodInfo };
		Dispatcher_t6362 * L_2 = (Dispatcher_t6362 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t6362_il2cpp_TypeInfo));
		Dispatcher__ctor_m44609(L_2, V_0, L_1, /*hidden argument*/&Dispatcher__ctor_m44609_MethodInfo);
		return L_2;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern MethodInfo RuntimeServices_CoercibleDispatcher_m44598_MethodInfo;
 Object_t * RuntimeServices_CoercibleDispatcher_m44598 (Object_t * __this/* static, unused */, Object_t * ___o, ObjectU5BU5D_t142* ___args, MethodInfo* method){
	{
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, 0);
		NullCheck(((Object_t *)Castclass(___o, InitializedTypeInfo(&ICoercible_t6386_il2cpp_TypeInfo))));
		Object_t * L_0 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(&ICoercible_Coerce_m44670_MethodInfo, ((Object_t *)Castclass(___o, InitializedTypeInfo(&ICoercible_t6386_il2cpp_TypeInfo))), ((Type_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(___args, 0)), InitializedTypeInfo(&Type_t_il2cpp_TypeInfo))));
		return L_0;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern MethodInfo RuntimeServices_IdentityDispatcher_m44599_MethodInfo;
 Object_t * RuntimeServices_IdentityDispatcher_m44599 (Object_t * __this/* static, unused */, Object_t * ___o, ObjectU5BU5D_t142* ___args, MethodInfo* method){
	{
		return ___o;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern MethodInfo RuntimeServices_IsNumeric_m44600_MethodInfo;
 bool RuntimeServices_IsNumeric_m44600 (Object_t * __this/* static, unused */, int32_t ___code, MethodInfo* method){
	int32_t V_0 = {0};
	{
		V_0 = ___code;
		if (((int32_t)(V_0-5)) == 0)
		{
			goto IL_003d;
		}
		if (((int32_t)(V_0-5)) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)(V_0-5)) == 2)
		{
			goto IL_003f;
		}
		if (((int32_t)(V_0-5)) == 3)
		{
			goto IL_0045;
		}
		if (((int32_t)(V_0-5)) == 4)
		{
			goto IL_0041;
		}
		if (((int32_t)(V_0-5)) == 5)
		{
			goto IL_0047;
		}
		if (((int32_t)(V_0-5)) == 6)
		{
			goto IL_0043;
		}
		if (((int32_t)(V_0-5)) == 7)
		{
			goto IL_0049;
		}
		if (((int32_t)(V_0-5)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)(V_0-5)) == 9)
		{
			goto IL_004d;
		}
		if (((int32_t)(V_0-5)) == 10)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0051;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return 1;
	}

IL_003f:
	{
		return 1;
	}

IL_0041:
	{
		return 1;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 0;
	}
}
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern MethodInfo RuntimeServices_op_Addition_m42359_MethodInfo;
 String_t* RuntimeServices_op_Addition_m42359 (Object_t * __this/* static, unused */, String_t* ___lhs, String_t* ___rhs, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = String_Concat_m6509(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&String_Concat_m6509_MethodInfo);
		return L_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern MethodInfo RuntimeServices_EqualityOperator_m44601_MethodInfo;
 bool RuntimeServices_EqualityOperator_m44601 (Object_t * __this/* static, unused */, Object_t * ___lhs, Object_t * ___rhs, MethodInfo* method){
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	Array_t * V_2 = {0};
	Array_t * V_3 = {0};
	int32_t G_B15_0 = 0;
	{
		if ((((Object_t *)___lhs) != ((Object_t *)___rhs)))
		{
			goto IL_0009;
		}
	}
	{
		return 1;
	}

IL_0009:
	{
		if (___lhs)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck(___rhs);
		bool L_0 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m4063_MethodInfo, ___rhs, ___lhs);
		return L_0;
	}

IL_0017:
	{
		if (___rhs)
		{
			goto IL_0025;
		}
	}
	{
		NullCheck(___lhs);
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m4063_MethodInfo, ___lhs, ___rhs);
		return L_1;
	}

IL_0025:
	{
		NullCheck(___lhs);
		Type_t * L_2 = Object_GetType_m4071(___lhs, /*hidden argument*/&Object_GetType_m4071_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_3 = Type_GetTypeCode_m44675(NULL /*static, unused*/, L_2, /*hidden argument*/&Type_GetTypeCode_m44675_MethodInfo);
		V_0 = L_3;
		NullCheck(___rhs);
		Type_t * L_4 = Object_GetType_m4071(___rhs, /*hidden argument*/&Object_GetType_m4071_MethodInfo);
		int32_t L_5 = Type_GetTypeCode_m44675(NULL /*static, unused*/, L_4, /*hidden argument*/&Type_GetTypeCode_m44675_MethodInfo);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		bool L_6 = RuntimeServices_IsNumeric_m44600(NULL /*static, unused*/, V_0, /*hidden argument*/&RuntimeServices_IsNumeric_m44600_MethodInfo);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		bool L_7 = RuntimeServices_IsNumeric_m44600(NULL /*static, unused*/, V_1, /*hidden argument*/&RuntimeServices_IsNumeric_m44600_MethodInfo);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		bool L_8 = RuntimeServices_EqualityOperator_m44604(NULL /*static, unused*/, ___lhs, V_0, ___rhs, V_1, /*hidden argument*/&RuntimeServices_EqualityOperator_m44604_MethodInfo);
		return L_8;
	}

IL_005d:
	{
		V_2 = ((Array_t *)IsInst(___lhs, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo)));
		if (!V_2)
		{
			goto IL_007f;
		}
	}
	{
		V_3 = ((Array_t *)IsInst(___rhs, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo)));
		if (!V_3)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		bool L_9 = RuntimeServices_ArrayEqualityImpl_m44602(NULL /*static, unused*/, V_2, V_3, /*hidden argument*/&RuntimeServices_ArrayEqualityImpl_m44602_MethodInfo);
		return L_9;
	}

IL_007f:
	{
		NullCheck(___lhs);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m4063_MethodInfo, ___lhs, ___rhs);
		if (L_10)
		{
			goto IL_0094;
		}
	}
	{
		NullCheck(___rhs);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m4063_MethodInfo, ___rhs, ___lhs);
		G_B15_0 = ((int32_t)(L_11));
		goto IL_0095;
	}

IL_0094:
	{
		G_B15_0 = 1;
	}

IL_0095:
	{
		return G_B15_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern MethodInfo RuntimeServices_ArrayEqualityImpl_m44602_MethodInfo;
 bool RuntimeServices_ArrayEqualityImpl_m44602 (Object_t * __this/* static, unused */, Array_t * ___lhs, Array_t * ___rhs, MethodInfo* method){
	int32_t V_0 = 0;
	{
		NullCheck(___lhs);
		int32_t L_0 = Array_get_Rank_m44678(___lhs, /*hidden argument*/&Array_get_Rank_m44678_MethodInfo);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		NullCheck(___rhs);
		int32_t L_1 = Array_get_Rank_m44678(___rhs, /*hidden argument*/&Array_get_Rank_m44678_MethodInfo);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t5466 * L_2 = (ArgumentException_t5466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t5466_il2cpp_TypeInfo));
		ArgumentException__ctor_m38716(L_2, (String_t*) &_stringLiteral4009, /*hidden argument*/&ArgumentException__ctor_m38716_MethodInfo);
		il2cpp_codegen_raise_exception (L_2);
	}

IL_0023:
	{
		NullCheck(___lhs);
		int32_t L_3 = Array_get_Length_m42374(___lhs, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		NullCheck(___rhs);
		int32_t L_4 = Array_get_Length_m42374(___rhs, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0036;
		}
	}
	{
		return 0;
	}

IL_0036:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003d:
	{
		NullCheck(___lhs);
		Object_t * L_5 = Array_GetValue_m44679(___lhs, V_0, /*hidden argument*/&Array_GetValue_m44679_MethodInfo);
		NullCheck(___rhs);
		Object_t * L_6 = Array_GetValue_m44679(___rhs, V_0, /*hidden argument*/&Array_GetValue_m44679_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		bool L_7 = RuntimeServices_EqualityOperator_m44601(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&RuntimeServices_EqualityOperator_m44601_MethodInfo);
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		return 0;
	}

IL_0057:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_005b:
	{
		NullCheck(___lhs);
		int32_t L_8 = Array_get_Length_m42374(___lhs, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		if ((((int32_t)V_0) < ((int32_t)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		return 1;
	}
}
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern MethodInfo RuntimeServices_GetConvertTypeCode_m44603_MethodInfo;
 int32_t RuntimeServices_GetConvertTypeCode_m44603 (Object_t * __this/* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, MethodInfo* method){
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)15))))
		{
			goto IL_0010;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)15))))
		{
			goto IL_0013;
		}
	}

IL_0010:
	{
		return (int32_t)(((int32_t)15));
	}

IL_0013:
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)14))))
		{
			goto IL_0023;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)14))))
		{
			goto IL_0026;
		}
	}

IL_0023:
	{
		return (int32_t)(((int32_t)14));
	}

IL_0026:
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)13))))
		{
			goto IL_0039;
		}
	}

IL_0036:
	{
		return (int32_t)(((int32_t)13));
	}

IL_0039:
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)12))))
		{
			goto IL_0065;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)7)))
		{
			goto IL_005f;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)((int32_t)9))))
		{
			goto IL_005f;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)11))))
		{
			goto IL_0062;
		}
	}

IL_005f:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0062:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0065:
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)12))))
		{
			goto IL_0091;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)5)))
		{
			goto IL_008b;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)7)))
		{
			goto IL_008b;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)9))))
		{
			goto IL_008b;
		}
	}
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)11))))
		{
			goto IL_008e;
		}
	}

IL_008b:
	{
		return (int32_t)(((int32_t)11));
	}

IL_008e:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0091:
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)11))))
		{
			goto IL_00a1;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)11))))
		{
			goto IL_00a4;
		}
	}

IL_00a1:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00a4:
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)10))))
		{
			goto IL_00c8;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)5)))
		{
			goto IL_00c2;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)7)))
		{
			goto IL_00c2;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)9))))
		{
			goto IL_00c5;
		}
	}

IL_00c2:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00c5:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00c8:
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)10))))
		{
			goto IL_00ec;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)5)))
		{
			goto IL_00e6;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)7)))
		{
			goto IL_00e6;
		}
	}
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)9))))
		{
			goto IL_00e9;
		}
	}

IL_00e6:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00e9:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00ec:
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern MethodInfo RuntimeServices_EqualityOperator_m44604_MethodInfo;
 bool RuntimeServices_EqualityOperator_m44604 (Object_t * __this/* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, MethodInfo* method){
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = {0};
	{
		V_0 = ((Object_t *)Castclass(___lhs, InitializedTypeInfo(&IConvertible_t947_il2cpp_TypeInfo)));
		V_1 = ((Object_t *)Castclass(___rhs, InitializedTypeInfo(&IConvertible_t947_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		int32_t L_0 = RuntimeServices_GetConvertTypeCode_m44603(NULL /*static, unused*/, ___lhsTypeCode, ___rhsTypeCode, /*hidden argument*/&RuntimeServices_GetConvertTypeCode_m44603_MethodInfo);
		V_2 = L_0;
		if (((int32_t)(V_2-((int32_t)10))) == 0)
		{
			goto IL_0094;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 1)
		{
			goto IL_0083;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 2)
		{
			goto IL_0072;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 3)
		{
			goto IL_0061;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 4)
		{
			goto IL_0050;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 5)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a5;
	}

IL_003c:
	{
		NullCheck(V_0);
		Decimal_t1099  L_1 = (Decimal_t1099 )InterfaceFuncInvoker1< Decimal_t1099 , Object_t * >::Invoke(&IConvertible_ToDecimal_m44680_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		Decimal_t1099  L_2 = (Decimal_t1099 )InterfaceFuncInvoker1< Decimal_t1099 , Object_t * >::Invoke(&IConvertible_ToDecimal_m44680_MethodInfo, V_1, (Object_t *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Decimal_t1099_il2cpp_TypeInfo));
		bool L_3 = Decimal_op_Equality_m44681(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Decimal_op_Equality_m44681_MethodInfo);
		return L_3;
	}

IL_0050:
	{
		NullCheck(V_0);
		double L_4 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(&IConvertible_ToDouble_m44682_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		double L_5 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(&IConvertible_ToDouble_m44682_MethodInfo, V_1, (Object_t *)NULL);
		return ((((double)L_4) == ((double)L_5))? 1 : 0);
	}

IL_0061:
	{
		NullCheck(V_0);
		float L_6 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(&IConvertible_ToSingle_m44683_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		float L_7 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(&IConvertible_ToSingle_m44683_MethodInfo, V_1, (Object_t *)NULL);
		return ((((float)L_6) == ((float)L_7))? 1 : 0);
	}

IL_0072:
	{
		NullCheck(V_0);
		uint64_t L_8 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(&IConvertible_ToUInt64_m44684_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		uint64_t L_9 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(&IConvertible_ToUInt64_m44684_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int64_t)L_8) == ((int64_t)L_9))? 1 : 0);
	}

IL_0083:
	{
		NullCheck(V_0);
		int64_t L_10 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(&IConvertible_ToInt64_m44685_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		int64_t L_11 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(&IConvertible_ToInt64_m44685_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int64_t)L_10) == ((int64_t)L_11))? 1 : 0);
	}

IL_0094:
	{
		NullCheck(V_0);
		uint32_t L_12 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(&IConvertible_ToUInt32_m44686_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		uint32_t L_13 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(&IConvertible_ToUInt32_m44686_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
	}

IL_00a5:
	{
		NullCheck(V_0);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IConvertible_ToInt32_m44687_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		int32_t L_15 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IConvertible_ToInt32_m44687_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern MethodInfo RuntimeServices_IsPromotableNumeric_m44605_MethodInfo;
 bool RuntimeServices_IsPromotableNumeric_m44605 (Object_t * __this/* static, unused */, int32_t ___code, MethodInfo* method){
	int32_t V_0 = {0};
	{
		V_0 = ___code;
		if (((int32_t)(V_0-3)) == 0)
		{
			goto IL_0057;
		}
		if (((int32_t)(V_0-3)) == 1)
		{
			goto IL_005b;
		}
		if (((int32_t)(V_0-3)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)(V_0-3)) == 3)
		{
			goto IL_0043;
		}
		if (((int32_t)(V_0-3)) == 4)
		{
			goto IL_0047;
		}
		if (((int32_t)(V_0-3)) == 5)
		{
			goto IL_004d;
		}
		if (((int32_t)(V_0-3)) == 6)
		{
			goto IL_0049;
		}
		if (((int32_t)(V_0-3)) == 7)
		{
			goto IL_004f;
		}
		if (((int32_t)(V_0-3)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)(V_0-3)) == 9)
		{
			goto IL_0051;
		}
		if (((int32_t)(V_0-3)) == 10)
		{
			goto IL_0053;
		}
		if (((int32_t)(V_0-3)) == 11)
		{
			goto IL_0055;
		}
		if (((int32_t)(V_0-3)) == 12)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_005d;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 1;
	}

IL_0055:
	{
		return 1;
	}

IL_0057:
	{
		return 1;
	}

IL_0059:
	{
		return 1;
	}

IL_005b:
	{
		return 1;
	}

IL_005d:
	{
		return 0;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern MethodInfo RuntimeServices_FindImplicitConversionOperator_m44606_MethodInfo;
 MethodInfo_t1087 * RuntimeServices_FindImplicitConversionOperator_m44606 (Object_t * __this/* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method){
	int32_t V_0 = {0};
	MethodInfo_t1087 * G_B3_0 = {0};
	MethodInfo_t1087 * G_B1_0 = {0};
	MethodInfo_t1087 * G_B2_0 = {0};
	{
		NullCheck(___from);
		MethodInfoU5BU5D_t6389* L_0 = (MethodInfoU5BU5D_t6389*)VirtFuncInvoker1< MethodInfoU5BU5D_t6389*, int32_t >::Invoke(&Type_GetMethods_m44688_MethodInfo, ___from, ((int32_t)88));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		MethodInfo_t1087 * L_1 = RuntimeServices_FindImplicitConversionMethod_m44608(NULL /*static, unused*/, (Object_t*)(Object_t*)L_0, ___from, ___to, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m44608_MethodInfo);
		MethodInfo_t1087 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0038;
		}
	}
	{
		NullCheck(___to);
		MethodInfoU5BU5D_t6389* L_3 = (MethodInfoU5BU5D_t6389*)VirtFuncInvoker1< MethodInfoU5BU5D_t6389*, int32_t >::Invoke(&Type_GetMethods_m44688_MethodInfo, ___to, ((int32_t)88));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		MethodInfo_t1087 * L_4 = RuntimeServices_FindImplicitConversionMethod_m44608(NULL /*static, unused*/, (Object_t*)(Object_t*)L_3, ___from, ___to, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m44608_MethodInfo);
		MethodInfo_t1087 * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		Object_t* L_6 = RuntimeServices_GetExtensionMethods_m44607(NULL /*static, unused*/, /*hidden argument*/&RuntimeServices_GetExtensionMethods_m44607_MethodInfo);
		MethodInfo_t1087 * L_7 = RuntimeServices_FindImplicitConversionMethod_m44608(NULL /*static, unused*/, L_6, ___from, ___to, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m44608_MethodInfo);
		G_B3_0 = L_7;
	}

IL_0038:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern MethodInfo RuntimeServices_GetExtensionMethods_m44607_MethodInfo;
 Object_t* RuntimeServices_GetExtensionMethods_m44607 (Object_t * __this/* static, unused */, MethodInfo* method){
	U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * V_0 = {0};
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * L_0 = (U3CGetExtensionMethodsU3Ec__IteratorC_t6374 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo));
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579(L_0, /*hidden argument*/&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m44579_MethodInfo);
		V_0 = L_0;
		U3CGetExtensionMethodsU3Ec__IteratorC_t6374 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___$PC = ((int32_t)-2);
		return L_1;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern MethodInfo RuntimeServices_FindImplicitConversionMethod_m44608_MethodInfo;
 MethodInfo_t1087 * RuntimeServices_FindImplicitConversionMethod_m44608 (Object_t * __this/* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, MethodInfo* method){
	MethodInfo_t1087 * V_0 = {0};
	Object_t* V_1 = {0};
	ParameterInfoU5BU5D_t5487* V_2 = {0};
	MethodInfo_t1087 * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t972 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t972 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		NullCheck(___candidates);
		Object_t* L_0 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(&IEnumerable_1_GetEnumerator_m44689_MethodInfo, ___candidates);
		V_1 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_000c:
		{
			NullCheck(V_1);
			MethodInfo_t1087 * L_1 = (MethodInfo_t1087 *)InterfaceFuncInvoker0< MethodInfo_t1087 * >::Invoke(&IEnumerator_1_get_Current_m44690_MethodInfo, V_1);
			V_0 = L_1;
			NullCheck(V_0);
			String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m38786_MethodInfo, V_0);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_3 = String_op_Inequality_m4764(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral343, /*hidden argument*/&String_op_Inequality_m4764_MethodInfo);
			if (!L_3)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			goto IL_0072;
		}

IL_002d:
		{
			NullCheck(V_0);
			Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m44691_MethodInfo, V_0);
			if ((((Type_t *)L_4) == ((Type_t *)___to)))
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			goto IL_0072;
		}

IL_003e:
		{
			NullCheck(V_0);
			ParameterInfoU5BU5D_t5487* L_5 = (ParameterInfoU5BU5D_t5487*)VirtFuncInvoker0< ParameterInfoU5BU5D_t5487* >::Invoke(&MethodBase_GetParameters_m44692_MethodInfo, V_0);
			V_2 = L_5;
			NullCheck(V_2);
			if ((((int32_t)(((int32_t)(((Array_t *)V_2)->max_length)))) == ((int32_t)1)))
			{
				goto IL_0053;
			}
		}

IL_004e:
		{
			goto IL_0072;
		}

IL_0053:
		{
			NullCheck(V_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(V_2, 0);
			NullCheck((*(ParameterInfo_t5488 **)(ParameterInfo_t5488 **)SZArrayLdElema(V_2, 0)));
			Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m38788_MethodInfo, (*(ParameterInfo_t5488 **)(ParameterInfo_t5488 **)SZArrayLdElema(V_2, 0)));
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m38812_MethodInfo, L_6, ___from);
			if (L_7)
			{
				goto IL_006b;
			}
		}

IL_0066:
		{
			goto IL_0072;
		}

IL_006b:
		{
			V_3 = V_0;
			// IL_006d: leave IL_008f
			leaveInstructions[0] = 0x8F; // 1
			throw Il2CppFinallySentinel();
			// finally target depth: 1
		}

IL_0072:
		{
			NullCheck(V_1);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m38709_MethodInfo, V_1);
			if (L_8)
			{
				goto IL_000c;
			}
		}

IL_007d:
		{
			// IL_007d: leave IL_008d
			leaveInstructions[0] = 0x8D; // 1
			throw Il2CppFinallySentinel();
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0082;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t972 *)e.ex;
		goto IL_0082;
	}

IL_0082:
	{ // begin finally (depth: 1)
		{
			if (V_1)
			{
				goto IL_0086;
			}
		}

IL_0085:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8F:
					goto IL_008f;
				case 0x8D:
					goto IL_008d;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t972 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}

IL_0086:
		{
			NullCheck(V_1);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m4170_MethodInfo, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8F:
					goto IL_008f;
				case 0x8D:
					goto IL_008d;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t972 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception (_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_008d:
	{
		return (MethodInfo_t1087 *)NULL;
	}

IL_008f:
	{
		return V_3;
	}
}
// Metadata Definition Boo.Lang.Runtime.RuntimeServices
extern Il2CppType ObjectU5BU5D_t142_0_0_49;
FieldInfo RuntimeServices_t5971____NoArguments_FieldInfo = 
{
	"NoArguments"/* name */
	, &ObjectU5BU5D_t142_0_0_49/* type */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t5971_StaticFields, ___NoArguments)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Type_t_0_0_49;
FieldInfo RuntimeServices_t5971____RuntimeServicesType_FieldInfo = 
{
	"RuntimeServicesType"/* name */
	, &Type_t_0_0_49/* type */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t5971_StaticFields, ___RuntimeServicesType)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DispatcherCache_t6365_0_0_49;
FieldInfo RuntimeServices_t5971_____cache_FieldInfo = 
{
	"_cache"/* name */
	, &DispatcherCache_t6365_0_0_49/* type */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t5971_StaticFields, ____cache)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ExtensionRegistry_t6371_0_0_49;
FieldInfo RuntimeServices_t5971_____extensions_FieldInfo = 
{
	"_extensions"/* name */
	, &ExtensionRegistry_t6371_0_0_49/* type */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t5971_StaticFields, ____extensions)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_49;
FieldInfo RuntimeServices_t5971____True_FieldInfo = 
{
	"True"/* name */
	, &Object_t_0_0_49/* type */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t5971_StaticFields, ___True)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RuntimeServices_t5971_FieldInfos[] =
{
	&RuntimeServices_t5971____NoArguments_FieldInfo,
	&RuntimeServices_t5971____RuntimeServicesType_FieldInfo,
	&RuntimeServices_t5971_____cache_FieldInfo,
	&RuntimeServices_t5971_____extensions_FieldInfo,
	&RuntimeServices_t5971____True_FieldInfo,
	NULL
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
MethodInfo RuntimeServices__cctor_m44591_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&RuntimeServices__cctor_m44591/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 68/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType TypeU5BU5D_t1042_0_0_0;
extern Il2CppType DispatcherFactory_t6363_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_GetDispatcher_m44592_ParameterInfos[] = 
{
	{"target", 0, 134217785, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"cacheKeyName", 1, 134217786, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"cacheKeyTypes", 2, 134217787, &EmptyCustomAttributesCache, &TypeU5BU5D_t1042_0_0_0},
	{"factory", 3, 134217788, &EmptyCustomAttributesCache, &DispatcherFactory_t6363_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
MethodInfo RuntimeServices_GetDispatcher_m44592_MethodInfo = 
{
	"GetDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_GetDispatcher_m44592/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t6362_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_GetDispatcher_m44592_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 69/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_Coerce_m44593_ParameterInfos[] = 
{
	{"value", 0, 134217789, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"toType", 1, 134217790, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
MethodInfo RuntimeServices_Coerce_m44593_MethodInfo = 
{
	"Coerce"/* name */
	, (methodPointerType)&RuntimeServices_Coerce_m44593/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_Coerce_m44593_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 70/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_CreateCoerceDispatcher_m44594_ParameterInfos[] = 
{
	{"value", 0, 134217791, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"toType", 1, 134217792, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
MethodInfo RuntimeServices_CreateCoerceDispatcher_m44594_MethodInfo = 
{
	"CreateCoerceDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_CreateCoerceDispatcher_m44594/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t6362_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_CreateCoerceDispatcher_m44594_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 71/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_EmitPromotionDispatcher_m44595_ParameterInfos[] = 
{
	{"fromType", 0, 134217793, &EmptyCustomAttributesCache, &Type_t_0_0_0},
	{"toType", 1, 134217794, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
MethodInfo RuntimeServices_EmitPromotionDispatcher_m44595_MethodInfo = 
{
	"EmitPromotionDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_EmitPromotionDispatcher_m44595/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t6362_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_EmitPromotionDispatcher_m44595_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 72/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_IsPromotableNumeric_m44596_ParameterInfos[] = 
{
	{"fromType", 0, 134217795, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
MethodInfo RuntimeServices_IsPromotableNumeric_m44596_MethodInfo = 
{
	"IsPromotableNumeric"/* name */
	, (methodPointerType)&RuntimeServices_IsPromotableNumeric_m44596/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_IsPromotableNumeric_m44596_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 73/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_EmitImplicitConversionDispatcher_m44597_ParameterInfos[] = 
{
	{"method", 0, 134217796, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
MethodInfo RuntimeServices_EmitImplicitConversionDispatcher_m44597_MethodInfo = 
{
	"EmitImplicitConversionDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_EmitImplicitConversionDispatcher_m44597/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t6362_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_EmitImplicitConversionDispatcher_m44597_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 74/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_CoercibleDispatcher_m44598_ParameterInfos[] = 
{
	{"o", 0, 134217797, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217798, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
MethodInfo RuntimeServices_CoercibleDispatcher_m44598_MethodInfo = 
{
	"CoercibleDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_CoercibleDispatcher_m44598/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_CoercibleDispatcher_m44598_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 75/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_IdentityDispatcher_m44599_ParameterInfos[] = 
{
	{"o", 0, 134217799, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217800, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
MethodInfo RuntimeServices_IdentityDispatcher_m44599_MethodInfo = 
{
	"IdentityDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_IdentityDispatcher_m44599/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_IdentityDispatcher_m44599_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 76/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TypeCode_t6388_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_IsNumeric_m44600_ParameterInfos[] = 
{
	{"code", 0, 134217801, &EmptyCustomAttributesCache, &TypeCode_t6388_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
MethodInfo RuntimeServices_IsNumeric_m44600_MethodInfo = 
{
	"IsNumeric"/* name */
	, (methodPointerType)&RuntimeServices_IsNumeric_m44600/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_IsNumeric_m44600_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 77/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_op_Addition_m42359_ParameterInfos[] = 
{
	{"lhs", 0, 134217802, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"rhs", 1, 134217803, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
MethodInfo RuntimeServices_op_Addition_m42359_MethodInfo = 
{
	"op_Addition"/* name */
	, (methodPointerType)&RuntimeServices_op_Addition_m42359/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_op_Addition_m42359_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 78/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_EqualityOperator_m44601_ParameterInfos[] = 
{
	{"lhs", 0, 134217804, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"rhs", 1, 134217805, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
MethodInfo RuntimeServices_EqualityOperator_m44601_MethodInfo = 
{
	"EqualityOperator"/* name */
	, (methodPointerType)&RuntimeServices_EqualityOperator_m44601/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_EqualityOperator_m44601_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 79/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_ArrayEqualityImpl_m44602_ParameterInfos[] = 
{
	{"lhs", 0, 134217806, &EmptyCustomAttributesCache, &Array_t_0_0_0},
	{"rhs", 1, 134217807, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
MethodInfo RuntimeServices_ArrayEqualityImpl_m44602_MethodInfo = 
{
	"ArrayEqualityImpl"/* name */
	, (methodPointerType)&RuntimeServices_ArrayEqualityImpl_m44602/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_ArrayEqualityImpl_m44602_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 80/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TypeCode_t6388_0_0_0;
extern Il2CppType TypeCode_t6388_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_GetConvertTypeCode_m44603_ParameterInfos[] = 
{
	{"lhsTypeCode", 0, 134217808, &EmptyCustomAttributesCache, &TypeCode_t6388_0_0_0},
	{"rhsTypeCode", 1, 134217809, &EmptyCustomAttributesCache, &TypeCode_t6388_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType TypeCode_t6388_0_0_0;
extern void* RuntimeInvoker_TypeCode_t6388_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
MethodInfo RuntimeServices_GetConvertTypeCode_m44603_MethodInfo = 
{
	"GetConvertTypeCode"/* name */
	, (methodPointerType)&RuntimeServices_GetConvertTypeCode_m44603/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t6388_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t6388_Int32_t73_Int32_t73/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_GetConvertTypeCode_m44603_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 81/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType TypeCode_t6388_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType TypeCode_t6388_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_EqualityOperator_m44604_ParameterInfos[] = 
{
	{"lhs", 0, 134217810, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"lhsTypeCode", 1, 134217811, &EmptyCustomAttributesCache, &TypeCode_t6388_0_0_0},
	{"rhs", 2, 134217812, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"rhsTypeCode", 3, 134217813, &EmptyCustomAttributesCache, &TypeCode_t6388_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Int32_t73_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
MethodInfo RuntimeServices_EqualityOperator_m44604_MethodInfo = 
{
	"EqualityOperator"/* name */
	, (methodPointerType)&RuntimeServices_EqualityOperator_m44604/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Int32_t73_Object_t_Int32_t73/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_EqualityOperator_m44604_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 82/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TypeCode_t6388_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_IsPromotableNumeric_m44605_ParameterInfos[] = 
{
	{"code", 0, 134217814, &EmptyCustomAttributesCache, &TypeCode_t6388_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
MethodInfo RuntimeServices_IsPromotableNumeric_m44605_MethodInfo = 
{
	"IsPromotableNumeric"/* name */
	, (methodPointerType)&RuntimeServices_IsPromotableNumeric_m44605/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_IsPromotableNumeric_m44605_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 83/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_FindImplicitConversionOperator_m44606_ParameterInfos[] = 
{
	{"from", 0, 134217815, &EmptyCustomAttributesCache, &Type_t_0_0_0},
	{"to", 1, 134217816, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
MethodInfo RuntimeServices_FindImplicitConversionOperator_m44606_MethodInfo = 
{
	"FindImplicitConversionOperator"/* name */
	, (methodPointerType)&RuntimeServices_FindImplicitConversionOperator_m44606/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t1087_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_FindImplicitConversionOperator_m44606_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 84/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType IEnumerable_1_t6378_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache RuntimeServices_t5971__CustomAttributeCache_RuntimeServices_GetExtensionMethods_m44607;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
MethodInfo RuntimeServices_GetExtensionMethods_m44607_MethodInfo = 
{
	"GetExtensionMethods"/* name */
	, (methodPointerType)&RuntimeServices_GetExtensionMethods_m44607/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t6378_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &RuntimeServices_t5971__CustomAttributeCache_RuntimeServices_GetExtensionMethods_m44607/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 85/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IEnumerable_1_t6378_0_0_0;
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t5971_RuntimeServices_FindImplicitConversionMethod_m44608_ParameterInfos[] = 
{
	{"candidates", 0, 134217817, &EmptyCustomAttributesCache, &IEnumerable_1_t6378_0_0_0},
	{"from", 1, 134217818, &EmptyCustomAttributesCache, &Type_t_0_0_0},
	{"to", 2, 134217819, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
MethodInfo RuntimeServices_FindImplicitConversionMethod_m44608_MethodInfo = 
{
	"FindImplicitConversionMethod"/* name */
	, (methodPointerType)&RuntimeServices_FindImplicitConversionMethod_m44608/* method */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t1087_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t5971_RuntimeServices_FindImplicitConversionMethod_m44608_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 86/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* RuntimeServices_t5971_MethodInfos[] =
{
	&RuntimeServices__cctor_m44591_MethodInfo,
	&RuntimeServices_GetDispatcher_m44592_MethodInfo,
	&RuntimeServices_Coerce_m44593_MethodInfo,
	&RuntimeServices_CreateCoerceDispatcher_m44594_MethodInfo,
	&RuntimeServices_EmitPromotionDispatcher_m44595_MethodInfo,
	&RuntimeServices_IsPromotableNumeric_m44596_MethodInfo,
	&RuntimeServices_EmitImplicitConversionDispatcher_m44597_MethodInfo,
	&RuntimeServices_CoercibleDispatcher_m44598_MethodInfo,
	&RuntimeServices_IdentityDispatcher_m44599_MethodInfo,
	&RuntimeServices_IsNumeric_m44600_MethodInfo,
	&RuntimeServices_op_Addition_m42359_MethodInfo,
	&RuntimeServices_EqualityOperator_m44601_MethodInfo,
	&RuntimeServices_ArrayEqualityImpl_m44602_MethodInfo,
	&RuntimeServices_GetConvertTypeCode_m44603_MethodInfo,
	&RuntimeServices_EqualityOperator_m44604_MethodInfo,
	&RuntimeServices_IsPromotableNumeric_m44605_MethodInfo,
	&RuntimeServices_FindImplicitConversionOperator_m44606_MethodInfo,
	&RuntimeServices_GetExtensionMethods_m44607_MethodInfo,
	&RuntimeServices_FindImplicitConversionMethod_m44608_MethodInfo,
	NULL
};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo;
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo;
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo;
static TypeInfo* RuntimeServices_t5971_il2cpp_TypeInfo__nestedTypes[4] =
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t6374_il2cpp_TypeInfo,
	&U3CCoerceU3Ec__AnonStorey1D_t6376_il2cpp_TypeInfo,
	&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t6377_il2cpp_TypeInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
static MethodInfo* RuntimeServices_t5971_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
};
extern TypeInfo DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo;
extern MethodInfo DebuggerHiddenAttribute__ctor_m39448_MethodInfo;
void RuntimeServices_t5971_CustomAttributesCacheGenerator_RuntimeServices_GetExtensionMethods_m44607(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t5583 * tmp;
		tmp = (DebuggerHiddenAttribute_t5583 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t5583_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m39448(tmp, &DebuggerHiddenAttribute__ctor_m39448_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache RuntimeServices_t5971__CustomAttributeCache_RuntimeServices_GetExtensionMethods_m44607 = {
1,
NULL,
&RuntimeServices_t5971_CustomAttributesCacheGenerator_RuntimeServices_GetExtensionMethods_m44607
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType RuntimeServices_t5971_0_0_0;
extern Il2CppType RuntimeServices_t5971_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct RuntimeServices_t5971;
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern CustomAttributesCache RuntimeServices_t5971__CustomAttributeCache_RuntimeServices_GetExtensionMethods_m44607;
TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "RuntimeServices"/* name */
	, "Boo.Lang.Runtime"/* namespaze */
	, RuntimeServices_t5971_MethodInfos/* methods */
	, NULL/* properties */
	, RuntimeServices_t5971_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, RuntimeServices_t5971_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, RuntimeServices_t5971_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RuntimeServices_t5971_il2cpp_TypeInfo/* cast_class */
	, &RuntimeServices_t5971_0_0_0/* byval_arg */
	, &RuntimeServices_t5971_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RuntimeServices_t5971)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(RuntimeServices_t5971_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 19/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 3/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dispatcher_t6362_il2cpp_TypeInfo;



// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern MethodInfo Dispatcher__ctor_m44609_MethodInfo;
 void Dispatcher__ctor_m44609 (Dispatcher_t6362 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern MethodInfo Dispatcher_Invoke_m44610_MethodInfo;
 Object_t * Dispatcher_Invoke_m44610 (Dispatcher_t6362 * __this, Object_t * ___target, ObjectU5BU5D_t142* ___args, MethodInfo* method){
	// runtime
	typedef  Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___target, ObjectU5BU5D_t142* ___args, MethodInfo* method);
	if (__this->___prev)
		Dispatcher_Invoke_m44610((Dispatcher_t6362 *)__this->___prev,  ___target, ___args, method);
	return ((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___target, ___args, (MethodInfo*)(__this->___method.___m_value));
}
Object_t * pinvoke_delegate_wrapper_Dispatcher_t6362(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t142* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t *, Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___target' to native representation
	Object_t * ____target_marshaled;
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled;
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____target_marshaled, ____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___target' native representation

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern MethodInfo Dispatcher_BeginInvoke_m44611_MethodInfo;
 Object_t * Dispatcher_BeginInvoke_m44611 (Dispatcher_t6362 * __this, Object_t * ___target, ObjectU5BU5D_t142* ___args, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[3] = {0};
	__d_args[0] = ___target;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern MethodInfo Dispatcher_EndInvoke_m44612_MethodInfo;
 Object_t * Dispatcher_EndInvoke_m44612 (Dispatcher_t6362 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.Dispatcher
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo Dispatcher_t6362_Dispatcher__ctor_m44609_ParameterInfos[] = 
{
	{"object", 0, 134217822, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217823, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo Dispatcher_t6362_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
MethodInfo Dispatcher__ctor_m44609_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Dispatcher__ctor_m44609/* method */
	, &Dispatcher_t6362_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, Dispatcher_t6362_Dispatcher__ctor_m44609_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 99/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo Dispatcher_t6362_Dispatcher_Invoke_m44610_ParameterInfos[] = 
{
	{"target", 0, 134217824, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217825, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo Dispatcher_t6362_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
MethodInfo Dispatcher_Invoke_m44610_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Dispatcher_Invoke_m44610/* method */
	, &Dispatcher_t6362_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, Dispatcher_t6362_Dispatcher_Invoke_m44610_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 100/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Dispatcher_t6362_Dispatcher_BeginInvoke_m44611_ParameterInfos[] = 
{
	{"target", 0, 134217826, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217827, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
	{"callback", 2, 134217828, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 3, 134217829, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Dispatcher_t6362_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
MethodInfo Dispatcher_BeginInvoke_m44611_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Dispatcher_BeginInvoke_m44611/* method */
	, &Dispatcher_t6362_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Dispatcher_t6362_Dispatcher_BeginInvoke_m44611_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 101/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo Dispatcher_t6362_Dispatcher_EndInvoke_m44612_ParameterInfos[] = 
{
	{"result", 0, 134217830, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo Dispatcher_t6362_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
MethodInfo Dispatcher_EndInvoke_m44612_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Dispatcher_EndInvoke_m44612/* method */
	, &Dispatcher_t6362_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Dispatcher_t6362_Dispatcher_EndInvoke_m44612_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 102/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* Dispatcher_t6362_MethodInfos[] =
{
	&Dispatcher__ctor_m44609_MethodInfo,
	&Dispatcher_Invoke_m44610_MethodInfo,
	&Dispatcher_BeginInvoke_m44611_MethodInfo,
	&Dispatcher_EndInvoke_m44612_MethodInfo,
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
extern MethodInfo Dispatcher_Invoke_m44610_MethodInfo;
extern MethodInfo Dispatcher_BeginInvoke_m44611_MethodInfo;
extern MethodInfo Dispatcher_EndInvoke_m44612_MethodInfo;
static MethodInfo* Dispatcher_t6362_VTable[] =
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
	&Dispatcher_Invoke_m44610_MethodInfo,
	&Dispatcher_BeginInvoke_m44611_MethodInfo,
	&Dispatcher_EndInvoke_m44612_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Dispatcher_t6362_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType Dispatcher_t6362_0_0_0;
extern Il2CppType Dispatcher_t6362_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct Dispatcher_t6362;
extern TypeInfo Dispatcher_t6362_il2cpp_TypeInfo;
TypeInfo Dispatcher_t6362_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "Dispatcher"/* name */
	, "Boo.Lang.Runtime.DynamicDispatching"/* namespaze */
	, Dispatcher_t6362_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Dispatcher_t6362_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Dispatcher_t6362_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Dispatcher_t6362_il2cpp_TypeInfo/* cast_class */
	, &Dispatcher_t6362_0_0_0/* byval_arg */
	, &Dispatcher_t6362_1_0_0/* this_arg */
	, Dispatcher_t6362_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_Dispatcher_t6362/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Dispatcher_t6362)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
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
	, false/* is_generic */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
