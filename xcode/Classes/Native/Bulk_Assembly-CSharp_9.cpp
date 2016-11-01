#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// SPacket.SocketInstance.CG_ASK_WULIN_STATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_ASK_WULIN_STATEH.h"
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
extern TypeInfo CG_ASK_WULIN_STATEHandler_t2293_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_ASK_WULIN_STATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_ASK_WULIN_STATEHMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_ASK_WULIN_STATE
#include "AssemblyU2DCSharp_CG_ASK_WULIN_STATE.h"
extern TypeInfo CG_ASK_WULIN_STATE_t3501_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void SPacket.SocketInstance.CG_ASK_WULIN_STATEHandler::.ctor()
extern MethodInfo CG_ASK_WULIN_STATEHandler__ctor_m14913_MethodInfo;
 void CG_ASK_WULIN_STATEHandler__ctor_m14913 (CG_ASK_WULIN_STATEHandler_t2293 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_ASK_WULIN_STATEHandler::Execute(PacketDistributed)
extern MethodInfo CG_ASK_WULIN_STATEHandler_Execute_m14914_MethodInfo;
 uint32_t CG_ASK_WULIN_STATEHandler_Execute_m14914 (CG_ASK_WULIN_STATEHandler_t2293 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_ASK_WULIN_STATE_t3501 * V_0 = {0};
	{
		V_0 = ((CG_ASK_WULIN_STATE_t3501 *)Castclass(___ipacket, InitializedTypeInfo(&CG_ASK_WULIN_STATE_t3501_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_ASK_WULIN_STATEHandler
extern TypeInfo CG_ASK_WULIN_STATEHandler_t2293_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_ASK_WULIN_STATEHandler::.ctor()
MethodInfo CG_ASK_WULIN_STATEHandler__ctor_m14913_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_ASK_WULIN_STATEHandler__ctor_m14913/* method */
	, &CG_ASK_WULIN_STATEHandler_t2293_il2cpp_TypeInfo/* declaring_type */
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
	, 8389/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_ASK_WULIN_STATEHandler_t2293_CG_ASK_WULIN_STATEHandler_Execute_m14914_ParameterInfos[] = 
{
	{"ipacket", 0, 134222112, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_ASK_WULIN_STATEHandler_t2293_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_ASK_WULIN_STATEHandler::Execute(PacketDistributed)
MethodInfo CG_ASK_WULIN_STATEHandler_Execute_m14914_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_ASK_WULIN_STATEHandler_Execute_m14914/* method */
	, &CG_ASK_WULIN_STATEHandler_t2293_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_ASK_WULIN_STATEHandler_t2293_CG_ASK_WULIN_STATEHandler_Execute_m14914_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8390/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_ASK_WULIN_STATEHandler_t2293_MethodInfos[] =
{
	&CG_ASK_WULIN_STATEHandler__ctor_m14913_MethodInfo,
	&CG_ASK_WULIN_STATEHandler_Execute_m14914_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_ASK_WULIN_STATEHandler_Execute_m14914_MethodInfo;
static MethodInfo* CG_ASK_WULIN_STATEHandler_t2293_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_ASK_WULIN_STATEHandler_Execute_m14914_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_ASK_WULIN_STATEHandler_t2293_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_ASK_WULIN_STATEHandler_t2293_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_ASK_WULIN_STATEHandler_t2293_0_0_0;
extern Il2CppType CG_ASK_WULIN_STATEHandler_t2293_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_ASK_WULIN_STATEHandler_t2293;
extern TypeInfo CG_ASK_WULIN_STATEHandler_t2293_il2cpp_TypeInfo;
TypeInfo CG_ASK_WULIN_STATEHandler_t2293_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_ASK_WULIN_STATEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_ASK_WULIN_STATEHandler_t2293_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_ASK_WULIN_STATEHandler_t2293_il2cpp_TypeInfo/* element_class */
	, CG_ASK_WULIN_STATEHandler_t2293_InterfacesTypeInfos/* implemented_interfaces */
	, CG_ASK_WULIN_STATEHandler_t2293_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_ASK_WULIN_STATEHandler_t2293_il2cpp_TypeInfo/* cast_class */
	, &CG_ASK_WULIN_STATEHandler_t2293_0_0_0/* byval_arg */
	, &CG_ASK_WULIN_STATEHandler_t2293_1_0_0/* this_arg */
	, CG_ASK_WULIN_STATEHandler_t2293_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_ASK_WULIN_STATEHandler_t2293)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_ASK_YUANBAOSHOP_OPENHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_ASK_YUANBAOSHOP_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_ASK_YUANBAOSHOP_OPENHandler_t2294_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_ASK_YUANBAOSHOP_OPENHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_ASK_YUANBAOSHOP_MethodDeclarations.h"

// CG_ASK_YUANBAOSHOP_OPEN
#include "AssemblyU2DCSharp_CG_ASK_YUANBAOSHOP_OPEN.h"
extern TypeInfo CG_ASK_YUANBAOSHOP_OPEN_t3316_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_ASK_YUANBAOSHOP_OPENHandler::.ctor()
extern MethodInfo CG_ASK_YUANBAOSHOP_OPENHandler__ctor_m14915_MethodInfo;
 void CG_ASK_YUANBAOSHOP_OPENHandler__ctor_m14915 (CG_ASK_YUANBAOSHOP_OPENHandler_t2294 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_ASK_YUANBAOSHOP_OPENHandler::Execute(PacketDistributed)
extern MethodInfo CG_ASK_YUANBAOSHOP_OPENHandler_Execute_m14916_MethodInfo;
 uint32_t CG_ASK_YUANBAOSHOP_OPENHandler_Execute_m14916 (CG_ASK_YUANBAOSHOP_OPENHandler_t2294 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_ASK_YUANBAOSHOP_OPEN_t3316 * V_0 = {0};
	{
		V_0 = ((CG_ASK_YUANBAOSHOP_OPEN_t3316 *)Castclass(___ipacket, InitializedTypeInfo(&CG_ASK_YUANBAOSHOP_OPEN_t3316_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_ASK_YUANBAOSHOP_OPENHandler
extern TypeInfo CG_ASK_YUANBAOSHOP_OPENHandler_t2294_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_ASK_YUANBAOSHOP_OPENHandler::.ctor()
MethodInfo CG_ASK_YUANBAOSHOP_OPENHandler__ctor_m14915_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_ASK_YUANBAOSHOP_OPENHandler__ctor_m14915/* method */
	, &CG_ASK_YUANBAOSHOP_OPENHandler_t2294_il2cpp_TypeInfo/* declaring_type */
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
	, 8391/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_ASK_YUANBAOSHOP_OPENHandler_t2294_CG_ASK_YUANBAOSHOP_OPENHandler_Execute_m14916_ParameterInfos[] = 
{
	{"ipacket", 0, 134222113, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_ASK_YUANBAOSHOP_OPENHandler_t2294_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_ASK_YUANBAOSHOP_OPENHandler::Execute(PacketDistributed)
MethodInfo CG_ASK_YUANBAOSHOP_OPENHandler_Execute_m14916_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_ASK_YUANBAOSHOP_OPENHandler_Execute_m14916/* method */
	, &CG_ASK_YUANBAOSHOP_OPENHandler_t2294_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_ASK_YUANBAOSHOP_OPENHandler_t2294_CG_ASK_YUANBAOSHOP_OPENHandler_Execute_m14916_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8392/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_ASK_YUANBAOSHOP_OPENHandler_t2294_MethodInfos[] =
{
	&CG_ASK_YUANBAOSHOP_OPENHandler__ctor_m14915_MethodInfo,
	&CG_ASK_YUANBAOSHOP_OPENHandler_Execute_m14916_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_ASK_YUANBAOSHOP_OPENHandler_Execute_m14916_MethodInfo;
static MethodInfo* CG_ASK_YUANBAOSHOP_OPENHandler_t2294_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_ASK_YUANBAOSHOP_OPENHandler_Execute_m14916_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_ASK_YUANBAOSHOP_OPENHandler_t2294_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_ASK_YUANBAOSHOP_OPENHandler_t2294_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_ASK_YUANBAOSHOP_OPENHandler_t2294_0_0_0;
extern Il2CppType CG_ASK_YUANBAOSHOP_OPENHandler_t2294_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_ASK_YUANBAOSHOP_OPENHandler_t2294;
extern TypeInfo CG_ASK_YUANBAOSHOP_OPENHandler_t2294_il2cpp_TypeInfo;
TypeInfo CG_ASK_YUANBAOSHOP_OPENHandler_t2294_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_ASK_YUANBAOSHOP_OPENHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_ASK_YUANBAOSHOP_OPENHandler_t2294_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_ASK_YUANBAOSHOP_OPENHandler_t2294_il2cpp_TypeInfo/* element_class */
	, CG_ASK_YUANBAOSHOP_OPENHandler_t2294_InterfacesTypeInfos/* implemented_interfaces */
	, CG_ASK_YUANBAOSHOP_OPENHandler_t2294_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_ASK_YUANBAOSHOP_OPENHandler_t2294_il2cpp_TypeInfo/* cast_class */
	, &CG_ASK_YUANBAOSHOP_OPENHandler_t2294_0_0_0/* byval_arg */
	, &CG_ASK_YUANBAOSHOP_OPENHandler_t2294_1_0_0/* this_arg */
	, CG_ASK_YUANBAOSHOP_OPENHandler_t2294_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_ASK_YUANBAOSHOP_OPENHandler_t2294)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_ASSIGN_PAOSHANG_TIMEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_ASSIGN_PAOSHANG_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_ASSIGN_PAOSHANG_TIMEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_ASSIGN_PAOSHANG_MethodDeclarations.h"

// CG_ASSIGN_PAOSHANG_TIME
#include "AssemblyU2DCSharp_CG_ASSIGN_PAOSHANG_TIME.h"
extern TypeInfo CG_ASSIGN_PAOSHANG_TIME_t3443_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_ASSIGN_PAOSHANG_TIMEHandler::.ctor()
extern MethodInfo CG_ASSIGN_PAOSHANG_TIMEHandler__ctor_m14917_MethodInfo;
 void CG_ASSIGN_PAOSHANG_TIMEHandler__ctor_m14917 (CG_ASSIGN_PAOSHANG_TIMEHandler_t2295 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_ASSIGN_PAOSHANG_TIMEHandler::Execute(PacketDistributed)
extern MethodInfo CG_ASSIGN_PAOSHANG_TIMEHandler_Execute_m14918_MethodInfo;
 uint32_t CG_ASSIGN_PAOSHANG_TIMEHandler_Execute_m14918 (CG_ASSIGN_PAOSHANG_TIMEHandler_t2295 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_ASSIGN_PAOSHANG_TIME_t3443 * V_0 = {0};
	{
		V_0 = ((CG_ASSIGN_PAOSHANG_TIME_t3443 *)Castclass(___ipacket, InitializedTypeInfo(&CG_ASSIGN_PAOSHANG_TIME_t3443_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_ASSIGN_PAOSHANG_TIMEHandler
extern TypeInfo CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_ASSIGN_PAOSHANG_TIMEHandler::.ctor()
MethodInfo CG_ASSIGN_PAOSHANG_TIMEHandler__ctor_m14917_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_ASSIGN_PAOSHANG_TIMEHandler__ctor_m14917/* method */
	, &CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_il2cpp_TypeInfo/* declaring_type */
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
	, 8393/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_CG_ASSIGN_PAOSHANG_TIMEHandler_Execute_m14918_ParameterInfos[] = 
{
	{"ipacket", 0, 134222114, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_ASSIGN_PAOSHANG_TIMEHandler::Execute(PacketDistributed)
MethodInfo CG_ASSIGN_PAOSHANG_TIMEHandler_Execute_m14918_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_ASSIGN_PAOSHANG_TIMEHandler_Execute_m14918/* method */
	, &CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_CG_ASSIGN_PAOSHANG_TIMEHandler_Execute_m14918_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8394/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_MethodInfos[] =
{
	&CG_ASSIGN_PAOSHANG_TIMEHandler__ctor_m14917_MethodInfo,
	&CG_ASSIGN_PAOSHANG_TIMEHandler_Execute_m14918_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_ASSIGN_PAOSHANG_TIMEHandler_Execute_m14918_MethodInfo;
static MethodInfo* CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_ASSIGN_PAOSHANG_TIMEHandler_Execute_m14918_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_0_0_0;
extern Il2CppType CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_ASSIGN_PAOSHANG_TIMEHandler_t2295;
extern TypeInfo CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_il2cpp_TypeInfo;
TypeInfo CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_ASSIGN_PAOSHANG_TIMEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_il2cpp_TypeInfo/* element_class */
	, CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_InterfacesTypeInfos/* implemented_interfaces */
	, CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_il2cpp_TypeInfo/* cast_class */
	, &CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_0_0_0/* byval_arg */
	, &CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_1_0_0/* this_arg */
	, CG_ASSIGN_PAOSHANG_TIMEHandler_t2295_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_ASSIGN_PAOSHANG_TIMEHandler_t2295)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BACKPACK_UNLOCKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BACKPACK_UNLOCKH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BACKPACK_UNLOCKHandler_t2296_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BACKPACK_UNLOCKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BACKPACK_UNLOCKHMethodDeclarations.h"

// CG_BACKPACK_UNLOCK
#include "AssemblyU2DCSharp_CG_BACKPACK_UNLOCK.h"
extern TypeInfo CG_BACKPACK_UNLOCK_t3134_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BACKPACK_UNLOCKHandler::.ctor()
extern MethodInfo CG_BACKPACK_UNLOCKHandler__ctor_m14919_MethodInfo;
 void CG_BACKPACK_UNLOCKHandler__ctor_m14919 (CG_BACKPACK_UNLOCKHandler_t2296 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BACKPACK_UNLOCKHandler::Execute(PacketDistributed)
extern MethodInfo CG_BACKPACK_UNLOCKHandler_Execute_m14920_MethodInfo;
 uint32_t CG_BACKPACK_UNLOCKHandler_Execute_m14920 (CG_BACKPACK_UNLOCKHandler_t2296 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BACKPACK_UNLOCK_t3134 * V_0 = {0};
	{
		V_0 = ((CG_BACKPACK_UNLOCK_t3134 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BACKPACK_UNLOCK_t3134_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BACKPACK_UNLOCKHandler
extern TypeInfo CG_BACKPACK_UNLOCKHandler_t2296_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BACKPACK_UNLOCKHandler::.ctor()
MethodInfo CG_BACKPACK_UNLOCKHandler__ctor_m14919_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BACKPACK_UNLOCKHandler__ctor_m14919/* method */
	, &CG_BACKPACK_UNLOCKHandler_t2296_il2cpp_TypeInfo/* declaring_type */
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
	, 8395/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BACKPACK_UNLOCKHandler_t2296_CG_BACKPACK_UNLOCKHandler_Execute_m14920_ParameterInfos[] = 
{
	{"ipacket", 0, 134222115, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BACKPACK_UNLOCKHandler_t2296_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BACKPACK_UNLOCKHandler::Execute(PacketDistributed)
MethodInfo CG_BACKPACK_UNLOCKHandler_Execute_m14920_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BACKPACK_UNLOCKHandler_Execute_m14920/* method */
	, &CG_BACKPACK_UNLOCKHandler_t2296_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BACKPACK_UNLOCKHandler_t2296_CG_BACKPACK_UNLOCKHandler_Execute_m14920_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8396/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BACKPACK_UNLOCKHandler_t2296_MethodInfos[] =
{
	&CG_BACKPACK_UNLOCKHandler__ctor_m14919_MethodInfo,
	&CG_BACKPACK_UNLOCKHandler_Execute_m14920_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BACKPACK_UNLOCKHandler_Execute_m14920_MethodInfo;
static MethodInfo* CG_BACKPACK_UNLOCKHandler_t2296_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BACKPACK_UNLOCKHandler_Execute_m14920_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BACKPACK_UNLOCKHandler_t2296_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BACKPACK_UNLOCKHandler_t2296_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BACKPACK_UNLOCKHandler_t2296_0_0_0;
extern Il2CppType CG_BACKPACK_UNLOCKHandler_t2296_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BACKPACK_UNLOCKHandler_t2296;
extern TypeInfo CG_BACKPACK_UNLOCKHandler_t2296_il2cpp_TypeInfo;
TypeInfo CG_BACKPACK_UNLOCKHandler_t2296_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BACKPACK_UNLOCKHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BACKPACK_UNLOCKHandler_t2296_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BACKPACK_UNLOCKHandler_t2296_il2cpp_TypeInfo/* element_class */
	, CG_BACKPACK_UNLOCKHandler_t2296_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BACKPACK_UNLOCKHandler_t2296_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BACKPACK_UNLOCKHandler_t2296_il2cpp_TypeInfo/* cast_class */
	, &CG_BACKPACK_UNLOCKHandler_t2296_0_0_0/* byval_arg */
	, &CG_BACKPACK_UNLOCKHandler_t2296_1_0_0/* this_arg */
	, CG_BACKPACK_UNLOCKHandler_t2296_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BACKPACK_UNLOCKHandler_t2296)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BELLE_ACTIVEMATRIXHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_ACTIVEMATR.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BELLE_ACTIVEMATRIXHandler_t2297_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BELLE_ACTIVEMATRIXHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_ACTIVEMATRMethodDeclarations.h"

// CG_BELLE_ACTIVEMATRIX
#include "AssemblyU2DCSharp_CG_BELLE_ACTIVEMATRIX.h"
extern TypeInfo CG_BELLE_ACTIVEMATRIX_t2999_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BELLE_ACTIVEMATRIXHandler::.ctor()
extern MethodInfo CG_BELLE_ACTIVEMATRIXHandler__ctor_m14921_MethodInfo;
 void CG_BELLE_ACTIVEMATRIXHandler__ctor_m14921 (CG_BELLE_ACTIVEMATRIXHandler_t2297 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BELLE_ACTIVEMATRIXHandler::Execute(PacketDistributed)
extern MethodInfo CG_BELLE_ACTIVEMATRIXHandler_Execute_m14922_MethodInfo;
 uint32_t CG_BELLE_ACTIVEMATRIXHandler_Execute_m14922 (CG_BELLE_ACTIVEMATRIXHandler_t2297 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BELLE_ACTIVEMATRIX_t2999 * V_0 = {0};
	{
		V_0 = ((CG_BELLE_ACTIVEMATRIX_t2999 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BELLE_ACTIVEMATRIX_t2999_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BELLE_ACTIVEMATRIXHandler
extern TypeInfo CG_BELLE_ACTIVEMATRIXHandler_t2297_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BELLE_ACTIVEMATRIXHandler::.ctor()
MethodInfo CG_BELLE_ACTIVEMATRIXHandler__ctor_m14921_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BELLE_ACTIVEMATRIXHandler__ctor_m14921/* method */
	, &CG_BELLE_ACTIVEMATRIXHandler_t2297_il2cpp_TypeInfo/* declaring_type */
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
	, 8397/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BELLE_ACTIVEMATRIXHandler_t2297_CG_BELLE_ACTIVEMATRIXHandler_Execute_m14922_ParameterInfos[] = 
{
	{"ipacket", 0, 134222116, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BELLE_ACTIVEMATRIXHandler_t2297_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BELLE_ACTIVEMATRIXHandler::Execute(PacketDistributed)
MethodInfo CG_BELLE_ACTIVEMATRIXHandler_Execute_m14922_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BELLE_ACTIVEMATRIXHandler_Execute_m14922/* method */
	, &CG_BELLE_ACTIVEMATRIXHandler_t2297_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BELLE_ACTIVEMATRIXHandler_t2297_CG_BELLE_ACTIVEMATRIXHandler_Execute_m14922_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8398/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BELLE_ACTIVEMATRIXHandler_t2297_MethodInfos[] =
{
	&CG_BELLE_ACTIVEMATRIXHandler__ctor_m14921_MethodInfo,
	&CG_BELLE_ACTIVEMATRIXHandler_Execute_m14922_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BELLE_ACTIVEMATRIXHandler_Execute_m14922_MethodInfo;
static MethodInfo* CG_BELLE_ACTIVEMATRIXHandler_t2297_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BELLE_ACTIVEMATRIXHandler_Execute_m14922_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BELLE_ACTIVEMATRIXHandler_t2297_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BELLE_ACTIVEMATRIXHandler_t2297_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BELLE_ACTIVEMATRIXHandler_t2297_0_0_0;
extern Il2CppType CG_BELLE_ACTIVEMATRIXHandler_t2297_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BELLE_ACTIVEMATRIXHandler_t2297;
extern TypeInfo CG_BELLE_ACTIVEMATRIXHandler_t2297_il2cpp_TypeInfo;
TypeInfo CG_BELLE_ACTIVEMATRIXHandler_t2297_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BELLE_ACTIVEMATRIXHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BELLE_ACTIVEMATRIXHandler_t2297_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BELLE_ACTIVEMATRIXHandler_t2297_il2cpp_TypeInfo/* element_class */
	, CG_BELLE_ACTIVEMATRIXHandler_t2297_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BELLE_ACTIVEMATRIXHandler_t2297_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BELLE_ACTIVEMATRIXHandler_t2297_il2cpp_TypeInfo/* cast_class */
	, &CG_BELLE_ACTIVEMATRIXHandler_t2297_0_0_0/* byval_arg */
	, &CG_BELLE_ACTIVEMATRIXHandler_t2297_1_0_0/* this_arg */
	, CG_BELLE_ACTIVEMATRIXHandler_t2297_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BELLE_ACTIVEMATRIXHandler_t2297)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BELLE_BATTLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_BATTLEHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BELLE_BATTLEHandler_t2298_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BELLE_BATTLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_BATTLEHandMethodDeclarations.h"

// CG_BELLE_BATTLE
#include "AssemblyU2DCSharp_CG_BELLE_BATTLE.h"
extern TypeInfo CG_BELLE_BATTLE_t2995_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BELLE_BATTLEHandler::.ctor()
extern MethodInfo CG_BELLE_BATTLEHandler__ctor_m14923_MethodInfo;
 void CG_BELLE_BATTLEHandler__ctor_m14923 (CG_BELLE_BATTLEHandler_t2298 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BELLE_BATTLEHandler::Execute(PacketDistributed)
extern MethodInfo CG_BELLE_BATTLEHandler_Execute_m14924_MethodInfo;
 uint32_t CG_BELLE_BATTLEHandler_Execute_m14924 (CG_BELLE_BATTLEHandler_t2298 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BELLE_BATTLE_t2995 * V_0 = {0};
	{
		V_0 = ((CG_BELLE_BATTLE_t2995 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BELLE_BATTLE_t2995_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BELLE_BATTLEHandler
extern TypeInfo CG_BELLE_BATTLEHandler_t2298_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BELLE_BATTLEHandler::.ctor()
MethodInfo CG_BELLE_BATTLEHandler__ctor_m14923_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BELLE_BATTLEHandler__ctor_m14923/* method */
	, &CG_BELLE_BATTLEHandler_t2298_il2cpp_TypeInfo/* declaring_type */
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
	, 8399/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BELLE_BATTLEHandler_t2298_CG_BELLE_BATTLEHandler_Execute_m14924_ParameterInfos[] = 
{
	{"ipacket", 0, 134222117, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BELLE_BATTLEHandler_t2298_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BELLE_BATTLEHandler::Execute(PacketDistributed)
MethodInfo CG_BELLE_BATTLEHandler_Execute_m14924_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BELLE_BATTLEHandler_Execute_m14924/* method */
	, &CG_BELLE_BATTLEHandler_t2298_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BELLE_BATTLEHandler_t2298_CG_BELLE_BATTLEHandler_Execute_m14924_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8400/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BELLE_BATTLEHandler_t2298_MethodInfos[] =
{
	&CG_BELLE_BATTLEHandler__ctor_m14923_MethodInfo,
	&CG_BELLE_BATTLEHandler_Execute_m14924_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BELLE_BATTLEHandler_Execute_m14924_MethodInfo;
static MethodInfo* CG_BELLE_BATTLEHandler_t2298_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BELLE_BATTLEHandler_Execute_m14924_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BELLE_BATTLEHandler_t2298_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BELLE_BATTLEHandler_t2298_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BELLE_BATTLEHandler_t2298_0_0_0;
extern Il2CppType CG_BELLE_BATTLEHandler_t2298_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BELLE_BATTLEHandler_t2298;
extern TypeInfo CG_BELLE_BATTLEHandler_t2298_il2cpp_TypeInfo;
TypeInfo CG_BELLE_BATTLEHandler_t2298_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BELLE_BATTLEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BELLE_BATTLEHandler_t2298_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BELLE_BATTLEHandler_t2298_il2cpp_TypeInfo/* element_class */
	, CG_BELLE_BATTLEHandler_t2298_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BELLE_BATTLEHandler_t2298_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BELLE_BATTLEHandler_t2298_il2cpp_TypeInfo/* cast_class */
	, &CG_BELLE_BATTLEHandler_t2298_0_0_0/* byval_arg */
	, &CG_BELLE_BATTLEHandler_t2298_1_0_0/* this_arg */
	, CG_BELLE_BATTLEHandler_t2298_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BELLE_BATTLEHandler_t2298)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BELLE_CLOSEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_CLOSEHandl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BELLE_CLOSEHandler_t2299_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BELLE_CLOSEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_CLOSEHandlMethodDeclarations.h"

// CG_BELLE_CLOSE
#include "AssemblyU2DCSharp_CG_BELLE_CLOSE.h"
extern TypeInfo CG_BELLE_CLOSE_t2989_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BELLE_CLOSEHandler::.ctor()
extern MethodInfo CG_BELLE_CLOSEHandler__ctor_m14925_MethodInfo;
 void CG_BELLE_CLOSEHandler__ctor_m14925 (CG_BELLE_CLOSEHandler_t2299 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BELLE_CLOSEHandler::Execute(PacketDistributed)
extern MethodInfo CG_BELLE_CLOSEHandler_Execute_m14926_MethodInfo;
 uint32_t CG_BELLE_CLOSEHandler_Execute_m14926 (CG_BELLE_CLOSEHandler_t2299 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BELLE_CLOSE_t2989 * V_0 = {0};
	{
		V_0 = ((CG_BELLE_CLOSE_t2989 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BELLE_CLOSE_t2989_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BELLE_CLOSEHandler
extern TypeInfo CG_BELLE_CLOSEHandler_t2299_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BELLE_CLOSEHandler::.ctor()
MethodInfo CG_BELLE_CLOSEHandler__ctor_m14925_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BELLE_CLOSEHandler__ctor_m14925/* method */
	, &CG_BELLE_CLOSEHandler_t2299_il2cpp_TypeInfo/* declaring_type */
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
	, 8401/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BELLE_CLOSEHandler_t2299_CG_BELLE_CLOSEHandler_Execute_m14926_ParameterInfos[] = 
{
	{"ipacket", 0, 134222118, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BELLE_CLOSEHandler_t2299_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BELLE_CLOSEHandler::Execute(PacketDistributed)
MethodInfo CG_BELLE_CLOSEHandler_Execute_m14926_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BELLE_CLOSEHandler_Execute_m14926/* method */
	, &CG_BELLE_CLOSEHandler_t2299_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BELLE_CLOSEHandler_t2299_CG_BELLE_CLOSEHandler_Execute_m14926_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8402/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BELLE_CLOSEHandler_t2299_MethodInfos[] =
{
	&CG_BELLE_CLOSEHandler__ctor_m14925_MethodInfo,
	&CG_BELLE_CLOSEHandler_Execute_m14926_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BELLE_CLOSEHandler_Execute_m14926_MethodInfo;
static MethodInfo* CG_BELLE_CLOSEHandler_t2299_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BELLE_CLOSEHandler_Execute_m14926_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BELLE_CLOSEHandler_t2299_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BELLE_CLOSEHandler_t2299_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BELLE_CLOSEHandler_t2299_0_0_0;
extern Il2CppType CG_BELLE_CLOSEHandler_t2299_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BELLE_CLOSEHandler_t2299;
extern TypeInfo CG_BELLE_CLOSEHandler_t2299_il2cpp_TypeInfo;
TypeInfo CG_BELLE_CLOSEHandler_t2299_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BELLE_CLOSEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BELLE_CLOSEHandler_t2299_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BELLE_CLOSEHandler_t2299_il2cpp_TypeInfo/* element_class */
	, CG_BELLE_CLOSEHandler_t2299_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BELLE_CLOSEHandler_t2299_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BELLE_CLOSEHandler_t2299_il2cpp_TypeInfo/* cast_class */
	, &CG_BELLE_CLOSEHandler_t2299_0_0_0/* byval_arg */
	, &CG_BELLE_CLOSEHandler_t2299_1_0_0/* this_arg */
	, CG_BELLE_CLOSEHandler_t2299_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BELLE_CLOSEHandler_t2299)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BELLE_EVOLUTIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_EVOLUTIONH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BELLE_EVOLUTIONHandler_t2300_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BELLE_EVOLUTIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_EVOLUTIONHMethodDeclarations.h"

// CG_BELLE_EVOLUTION
#include "AssemblyU2DCSharp_CG_BELLE_EVOLUTION.h"
extern TypeInfo CG_BELLE_EVOLUTION_t2991_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BELLE_EVOLUTIONHandler::.ctor()
extern MethodInfo CG_BELLE_EVOLUTIONHandler__ctor_m14927_MethodInfo;
 void CG_BELLE_EVOLUTIONHandler__ctor_m14927 (CG_BELLE_EVOLUTIONHandler_t2300 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BELLE_EVOLUTIONHandler::Execute(PacketDistributed)
extern MethodInfo CG_BELLE_EVOLUTIONHandler_Execute_m14928_MethodInfo;
 uint32_t CG_BELLE_EVOLUTIONHandler_Execute_m14928 (CG_BELLE_EVOLUTIONHandler_t2300 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BELLE_EVOLUTION_t2991 * V_0 = {0};
	{
		V_0 = ((CG_BELLE_EVOLUTION_t2991 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BELLE_EVOLUTION_t2991_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BELLE_EVOLUTIONHandler
extern TypeInfo CG_BELLE_EVOLUTIONHandler_t2300_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BELLE_EVOLUTIONHandler::.ctor()
MethodInfo CG_BELLE_EVOLUTIONHandler__ctor_m14927_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BELLE_EVOLUTIONHandler__ctor_m14927/* method */
	, &CG_BELLE_EVOLUTIONHandler_t2300_il2cpp_TypeInfo/* declaring_type */
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
	, 8403/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BELLE_EVOLUTIONHandler_t2300_CG_BELLE_EVOLUTIONHandler_Execute_m14928_ParameterInfos[] = 
{
	{"ipacket", 0, 134222119, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BELLE_EVOLUTIONHandler_t2300_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BELLE_EVOLUTIONHandler::Execute(PacketDistributed)
MethodInfo CG_BELLE_EVOLUTIONHandler_Execute_m14928_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BELLE_EVOLUTIONHandler_Execute_m14928/* method */
	, &CG_BELLE_EVOLUTIONHandler_t2300_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BELLE_EVOLUTIONHandler_t2300_CG_BELLE_EVOLUTIONHandler_Execute_m14928_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8404/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BELLE_EVOLUTIONHandler_t2300_MethodInfos[] =
{
	&CG_BELLE_EVOLUTIONHandler__ctor_m14927_MethodInfo,
	&CG_BELLE_EVOLUTIONHandler_Execute_m14928_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BELLE_EVOLUTIONHandler_Execute_m14928_MethodInfo;
static MethodInfo* CG_BELLE_EVOLUTIONHandler_t2300_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BELLE_EVOLUTIONHandler_Execute_m14928_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BELLE_EVOLUTIONHandler_t2300_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BELLE_EVOLUTIONHandler_t2300_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BELLE_EVOLUTIONHandler_t2300_0_0_0;
extern Il2CppType CG_BELLE_EVOLUTIONHandler_t2300_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BELLE_EVOLUTIONHandler_t2300;
extern TypeInfo CG_BELLE_EVOLUTIONHandler_t2300_il2cpp_TypeInfo;
TypeInfo CG_BELLE_EVOLUTIONHandler_t2300_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BELLE_EVOLUTIONHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BELLE_EVOLUTIONHandler_t2300_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BELLE_EVOLUTIONHandler_t2300_il2cpp_TypeInfo/* element_class */
	, CG_BELLE_EVOLUTIONHandler_t2300_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BELLE_EVOLUTIONHandler_t2300_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BELLE_EVOLUTIONHandler_t2300_il2cpp_TypeInfo/* cast_class */
	, &CG_BELLE_EVOLUTIONHandler_t2300_0_0_0/* byval_arg */
	, &CG_BELLE_EVOLUTIONHandler_t2300_1_0_0/* this_arg */
	, CG_BELLE_EVOLUTIONHandler_t2300_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BELLE_EVOLUTIONHandler_t2300)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BELLE_EVOLUTIONRAPIDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_EVOLUTIONR.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BELLE_EVOLUTIONRAPIDHandler_t2301_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BELLE_EVOLUTIONRAPIDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_EVOLUTIONRMethodDeclarations.h"

// CG_BELLE_EVOLUTIONRAPID
#include "AssemblyU2DCSharp_CG_BELLE_EVOLUTIONRAPID.h"
extern TypeInfo CG_BELLE_EVOLUTIONRAPID_t2993_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BELLE_EVOLUTIONRAPIDHandler::.ctor()
extern MethodInfo CG_BELLE_EVOLUTIONRAPIDHandler__ctor_m14929_MethodInfo;
 void CG_BELLE_EVOLUTIONRAPIDHandler__ctor_m14929 (CG_BELLE_EVOLUTIONRAPIDHandler_t2301 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BELLE_EVOLUTIONRAPIDHandler::Execute(PacketDistributed)
extern MethodInfo CG_BELLE_EVOLUTIONRAPIDHandler_Execute_m14930_MethodInfo;
 uint32_t CG_BELLE_EVOLUTIONRAPIDHandler_Execute_m14930 (CG_BELLE_EVOLUTIONRAPIDHandler_t2301 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BELLE_EVOLUTIONRAPID_t2993 * V_0 = {0};
	{
		V_0 = ((CG_BELLE_EVOLUTIONRAPID_t2993 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BELLE_EVOLUTIONRAPID_t2993_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BELLE_EVOLUTIONRAPIDHandler
extern TypeInfo CG_BELLE_EVOLUTIONRAPIDHandler_t2301_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BELLE_EVOLUTIONRAPIDHandler::.ctor()
MethodInfo CG_BELLE_EVOLUTIONRAPIDHandler__ctor_m14929_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BELLE_EVOLUTIONRAPIDHandler__ctor_m14929/* method */
	, &CG_BELLE_EVOLUTIONRAPIDHandler_t2301_il2cpp_TypeInfo/* declaring_type */
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
	, 8405/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BELLE_EVOLUTIONRAPIDHandler_t2301_CG_BELLE_EVOLUTIONRAPIDHandler_Execute_m14930_ParameterInfos[] = 
{
	{"ipacket", 0, 134222120, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BELLE_EVOLUTIONRAPIDHandler_t2301_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BELLE_EVOLUTIONRAPIDHandler::Execute(PacketDistributed)
MethodInfo CG_BELLE_EVOLUTIONRAPIDHandler_Execute_m14930_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BELLE_EVOLUTIONRAPIDHandler_Execute_m14930/* method */
	, &CG_BELLE_EVOLUTIONRAPIDHandler_t2301_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BELLE_EVOLUTIONRAPIDHandler_t2301_CG_BELLE_EVOLUTIONRAPIDHandler_Execute_m14930_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8406/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BELLE_EVOLUTIONRAPIDHandler_t2301_MethodInfos[] =
{
	&CG_BELLE_EVOLUTIONRAPIDHandler__ctor_m14929_MethodInfo,
	&CG_BELLE_EVOLUTIONRAPIDHandler_Execute_m14930_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BELLE_EVOLUTIONRAPIDHandler_Execute_m14930_MethodInfo;
static MethodInfo* CG_BELLE_EVOLUTIONRAPIDHandler_t2301_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BELLE_EVOLUTIONRAPIDHandler_Execute_m14930_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BELLE_EVOLUTIONRAPIDHandler_t2301_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BELLE_EVOLUTIONRAPIDHandler_t2301_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BELLE_EVOLUTIONRAPIDHandler_t2301_0_0_0;
extern Il2CppType CG_BELLE_EVOLUTIONRAPIDHandler_t2301_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BELLE_EVOLUTIONRAPIDHandler_t2301;
extern TypeInfo CG_BELLE_EVOLUTIONRAPIDHandler_t2301_il2cpp_TypeInfo;
TypeInfo CG_BELLE_EVOLUTIONRAPIDHandler_t2301_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BELLE_EVOLUTIONRAPIDHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BELLE_EVOLUTIONRAPIDHandler_t2301_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BELLE_EVOLUTIONRAPIDHandler_t2301_il2cpp_TypeInfo/* element_class */
	, CG_BELLE_EVOLUTIONRAPIDHandler_t2301_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BELLE_EVOLUTIONRAPIDHandler_t2301_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BELLE_EVOLUTIONRAPIDHandler_t2301_il2cpp_TypeInfo/* cast_class */
	, &CG_BELLE_EVOLUTIONRAPIDHandler_t2301_0_0_0/* byval_arg */
	, &CG_BELLE_EVOLUTIONRAPIDHandler_t2301_1_0_0/* this_arg */
	, CG_BELLE_EVOLUTIONRAPIDHandler_t2301_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BELLE_EVOLUTIONRAPIDHandler_t2301)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BELLE_RESTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_RESTHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BELLE_RESTHandler_t2302_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BELLE_RESTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BELLE_RESTHandleMethodDeclarations.h"

// CG_BELLE_REST
#include "AssemblyU2DCSharp_CG_BELLE_REST.h"
extern TypeInfo CG_BELLE_REST_t2997_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BELLE_RESTHandler::.ctor()
extern MethodInfo CG_BELLE_RESTHandler__ctor_m14931_MethodInfo;
 void CG_BELLE_RESTHandler__ctor_m14931 (CG_BELLE_RESTHandler_t2302 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BELLE_RESTHandler::Execute(PacketDistributed)
extern MethodInfo CG_BELLE_RESTHandler_Execute_m14932_MethodInfo;
 uint32_t CG_BELLE_RESTHandler_Execute_m14932 (CG_BELLE_RESTHandler_t2302 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BELLE_REST_t2997 * V_0 = {0};
	{
		V_0 = ((CG_BELLE_REST_t2997 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BELLE_REST_t2997_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BELLE_RESTHandler
extern TypeInfo CG_BELLE_RESTHandler_t2302_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BELLE_RESTHandler::.ctor()
MethodInfo CG_BELLE_RESTHandler__ctor_m14931_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BELLE_RESTHandler__ctor_m14931/* method */
	, &CG_BELLE_RESTHandler_t2302_il2cpp_TypeInfo/* declaring_type */
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
	, 8407/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BELLE_RESTHandler_t2302_CG_BELLE_RESTHandler_Execute_m14932_ParameterInfos[] = 
{
	{"ipacket", 0, 134222121, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BELLE_RESTHandler_t2302_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BELLE_RESTHandler::Execute(PacketDistributed)
MethodInfo CG_BELLE_RESTHandler_Execute_m14932_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BELLE_RESTHandler_Execute_m14932/* method */
	, &CG_BELLE_RESTHandler_t2302_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BELLE_RESTHandler_t2302_CG_BELLE_RESTHandler_Execute_m14932_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8408/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BELLE_RESTHandler_t2302_MethodInfos[] =
{
	&CG_BELLE_RESTHandler__ctor_m14931_MethodInfo,
	&CG_BELLE_RESTHandler_Execute_m14932_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BELLE_RESTHandler_Execute_m14932_MethodInfo;
static MethodInfo* CG_BELLE_RESTHandler_t2302_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BELLE_RESTHandler_Execute_m14932_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BELLE_RESTHandler_t2302_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BELLE_RESTHandler_t2302_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BELLE_RESTHandler_t2302_0_0_0;
extern Il2CppType CG_BELLE_RESTHandler_t2302_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BELLE_RESTHandler_t2302;
extern TypeInfo CG_BELLE_RESTHandler_t2302_il2cpp_TypeInfo;
TypeInfo CG_BELLE_RESTHandler_t2302_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BELLE_RESTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BELLE_RESTHandler_t2302_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BELLE_RESTHandler_t2302_il2cpp_TypeInfo/* element_class */
	, CG_BELLE_RESTHandler_t2302_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BELLE_RESTHandler_t2302_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BELLE_RESTHandler_t2302_il2cpp_TypeInfo/* cast_class */
	, &CG_BELLE_RESTHandler_t2302_0_0_0/* byval_arg */
	, &CG_BELLE_RESTHandler_t2302_1_0_0/* this_arg */
	, CG_BELLE_RESTHandler_t2302_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BELLE_RESTHandler_t2302)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BUYBACK_COPYSCENENUMBERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUYBACK_COPYSCEN.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BUYBACK_COPYSCENENUMBERHandler_t2303_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BUYBACK_COPYSCENENUMBERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUYBACK_COPYSCENMethodDeclarations.h"

// CG_BUYBACK_COPYSCENENUMBER
#include "AssemblyU2DCSharp_CG_BUYBACK_COPYSCENENUMBER.h"
extern TypeInfo CG_BUYBACK_COPYSCENENUMBER_t3548_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BUYBACK_COPYSCENENUMBERHandler::.ctor()
extern MethodInfo CG_BUYBACK_COPYSCENENUMBERHandler__ctor_m14933_MethodInfo;
 void CG_BUYBACK_COPYSCENENUMBERHandler__ctor_m14933 (CG_BUYBACK_COPYSCENENUMBERHandler_t2303 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BUYBACK_COPYSCENENUMBERHandler::Execute(PacketDistributed)
extern MethodInfo CG_BUYBACK_COPYSCENENUMBERHandler_Execute_m14934_MethodInfo;
 uint32_t CG_BUYBACK_COPYSCENENUMBERHandler_Execute_m14934 (CG_BUYBACK_COPYSCENENUMBERHandler_t2303 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BUYBACK_COPYSCENENUMBER_t3548 * V_0 = {0};
	{
		V_0 = ((CG_BUYBACK_COPYSCENENUMBER_t3548 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BUYBACK_COPYSCENENUMBER_t3548_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BUYBACK_COPYSCENENUMBERHandler
extern TypeInfo CG_BUYBACK_COPYSCENENUMBERHandler_t2303_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BUYBACK_COPYSCENENUMBERHandler::.ctor()
MethodInfo CG_BUYBACK_COPYSCENENUMBERHandler__ctor_m14933_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BUYBACK_COPYSCENENUMBERHandler__ctor_m14933/* method */
	, &CG_BUYBACK_COPYSCENENUMBERHandler_t2303_il2cpp_TypeInfo/* declaring_type */
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
	, 8409/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BUYBACK_COPYSCENENUMBERHandler_t2303_CG_BUYBACK_COPYSCENENUMBERHandler_Execute_m14934_ParameterInfos[] = 
{
	{"ipacket", 0, 134222122, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BUYBACK_COPYSCENENUMBERHandler_t2303_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BUYBACK_COPYSCENENUMBERHandler::Execute(PacketDistributed)
MethodInfo CG_BUYBACK_COPYSCENENUMBERHandler_Execute_m14934_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BUYBACK_COPYSCENENUMBERHandler_Execute_m14934/* method */
	, &CG_BUYBACK_COPYSCENENUMBERHandler_t2303_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BUYBACK_COPYSCENENUMBERHandler_t2303_CG_BUYBACK_COPYSCENENUMBERHandler_Execute_m14934_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8410/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BUYBACK_COPYSCENENUMBERHandler_t2303_MethodInfos[] =
{
	&CG_BUYBACK_COPYSCENENUMBERHandler__ctor_m14933_MethodInfo,
	&CG_BUYBACK_COPYSCENENUMBERHandler_Execute_m14934_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BUYBACK_COPYSCENENUMBERHandler_Execute_m14934_MethodInfo;
static MethodInfo* CG_BUYBACK_COPYSCENENUMBERHandler_t2303_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BUYBACK_COPYSCENENUMBERHandler_Execute_m14934_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BUYBACK_COPYSCENENUMBERHandler_t2303_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BUYBACK_COPYSCENENUMBERHandler_t2303_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BUYBACK_COPYSCENENUMBERHandler_t2303_0_0_0;
extern Il2CppType CG_BUYBACK_COPYSCENENUMBERHandler_t2303_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BUYBACK_COPYSCENENUMBERHandler_t2303;
extern TypeInfo CG_BUYBACK_COPYSCENENUMBERHandler_t2303_il2cpp_TypeInfo;
TypeInfo CG_BUYBACK_COPYSCENENUMBERHandler_t2303_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BUYBACK_COPYSCENENUMBERHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BUYBACK_COPYSCENENUMBERHandler_t2303_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BUYBACK_COPYSCENENUMBERHandler_t2303_il2cpp_TypeInfo/* element_class */
	, CG_BUYBACK_COPYSCENENUMBERHandler_t2303_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BUYBACK_COPYSCENENUMBERHandler_t2303_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BUYBACK_COPYSCENENUMBERHandler_t2303_il2cpp_TypeInfo/* cast_class */
	, &CG_BUYBACK_COPYSCENENUMBERHandler_t2303_0_0_0/* byval_arg */
	, &CG_BUYBACK_COPYSCENENUMBERHandler_t2303_1_0_0/* this_arg */
	, CG_BUYBACK_COPYSCENENUMBERHandler_t2303_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BUYBACK_COPYSCENENUMBERHandler_t2303)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BUY_BLACKMARKETITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_BLACKMARKETI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BUY_BLACKMARKETITEMHandler_t2304_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BUY_BLACKMARKETITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_BLACKMARKETIMethodDeclarations.h"

// CG_BUY_BLACKMARKETITEM
#include "AssemblyU2DCSharp_CG_BUY_BLACKMARKETITEM.h"
extern TypeInfo CG_BUY_BLACKMARKETITEM_t3402_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BUY_BLACKMARKETITEMHandler::.ctor()
extern MethodInfo CG_BUY_BLACKMARKETITEMHandler__ctor_m14935_MethodInfo;
 void CG_BUY_BLACKMARKETITEMHandler__ctor_m14935 (CG_BUY_BLACKMARKETITEMHandler_t2304 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BUY_BLACKMARKETITEMHandler::Execute(PacketDistributed)
extern MethodInfo CG_BUY_BLACKMARKETITEMHandler_Execute_m14936_MethodInfo;
 uint32_t CG_BUY_BLACKMARKETITEMHandler_Execute_m14936 (CG_BUY_BLACKMARKETITEMHandler_t2304 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BUY_BLACKMARKETITEM_t3402 * V_0 = {0};
	{
		V_0 = ((CG_BUY_BLACKMARKETITEM_t3402 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BUY_BLACKMARKETITEM_t3402_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BUY_BLACKMARKETITEMHandler
extern TypeInfo CG_BUY_BLACKMARKETITEMHandler_t2304_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BUY_BLACKMARKETITEMHandler::.ctor()
MethodInfo CG_BUY_BLACKMARKETITEMHandler__ctor_m14935_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BUY_BLACKMARKETITEMHandler__ctor_m14935/* method */
	, &CG_BUY_BLACKMARKETITEMHandler_t2304_il2cpp_TypeInfo/* declaring_type */
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
	, 8411/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BUY_BLACKMARKETITEMHandler_t2304_CG_BUY_BLACKMARKETITEMHandler_Execute_m14936_ParameterInfos[] = 
{
	{"ipacket", 0, 134222123, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BUY_BLACKMARKETITEMHandler_t2304_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BUY_BLACKMARKETITEMHandler::Execute(PacketDistributed)
MethodInfo CG_BUY_BLACKMARKETITEMHandler_Execute_m14936_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BUY_BLACKMARKETITEMHandler_Execute_m14936/* method */
	, &CG_BUY_BLACKMARKETITEMHandler_t2304_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BUY_BLACKMARKETITEMHandler_t2304_CG_BUY_BLACKMARKETITEMHandler_Execute_m14936_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8412/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BUY_BLACKMARKETITEMHandler_t2304_MethodInfos[] =
{
	&CG_BUY_BLACKMARKETITEMHandler__ctor_m14935_MethodInfo,
	&CG_BUY_BLACKMARKETITEMHandler_Execute_m14936_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BUY_BLACKMARKETITEMHandler_Execute_m14936_MethodInfo;
static MethodInfo* CG_BUY_BLACKMARKETITEMHandler_t2304_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BUY_BLACKMARKETITEMHandler_Execute_m14936_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BUY_BLACKMARKETITEMHandler_t2304_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BUY_BLACKMARKETITEMHandler_t2304_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BUY_BLACKMARKETITEMHandler_t2304_0_0_0;
extern Il2CppType CG_BUY_BLACKMARKETITEMHandler_t2304_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BUY_BLACKMARKETITEMHandler_t2304;
extern TypeInfo CG_BUY_BLACKMARKETITEMHandler_t2304_il2cpp_TypeInfo;
TypeInfo CG_BUY_BLACKMARKETITEMHandler_t2304_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BUY_BLACKMARKETITEMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BUY_BLACKMARKETITEMHandler_t2304_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BUY_BLACKMARKETITEMHandler_t2304_il2cpp_TypeInfo/* element_class */
	, CG_BUY_BLACKMARKETITEMHandler_t2304_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BUY_BLACKMARKETITEMHandler_t2304_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BUY_BLACKMARKETITEMHandler_t2304_il2cpp_TypeInfo/* cast_class */
	, &CG_BUY_BLACKMARKETITEMHandler_t2304_0_0_0/* byval_arg */
	, &CG_BUY_BLACKMARKETITEMHandler_t2304_1_0_0/* this_arg */
	, CG_BUY_BLACKMARKETITEMHandler_t2304_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BUY_BLACKMARKETITEMHandler_t2304)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BUY_CONSIGNSALEITEMINFOHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_CONSIGNSALEI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BUY_CONSIGNSALEITEMINFOHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_CONSIGNSALEIMethodDeclarations.h"

// CG_BUY_CONSIGNSALEITEMINFO
#include "AssemblyU2DCSharp_CG_BUY_CONSIGNSALEITEMINFO.h"
extern TypeInfo CG_BUY_CONSIGNSALEITEMINFO_t3203_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BUY_CONSIGNSALEITEMINFOHandler::.ctor()
extern MethodInfo CG_BUY_CONSIGNSALEITEMINFOHandler__ctor_m14937_MethodInfo;
 void CG_BUY_CONSIGNSALEITEMINFOHandler__ctor_m14937 (CG_BUY_CONSIGNSALEITEMINFOHandler_t2305 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BUY_CONSIGNSALEITEMINFOHandler::Execute(PacketDistributed)
extern MethodInfo CG_BUY_CONSIGNSALEITEMINFOHandler_Execute_m14938_MethodInfo;
 uint32_t CG_BUY_CONSIGNSALEITEMINFOHandler_Execute_m14938 (CG_BUY_CONSIGNSALEITEMINFOHandler_t2305 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BUY_CONSIGNSALEITEMINFO_t3203 * V_0 = {0};
	{
		V_0 = ((CG_BUY_CONSIGNSALEITEMINFO_t3203 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BUY_CONSIGNSALEITEMINFO_t3203_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BUY_CONSIGNSALEITEMINFOHandler
extern TypeInfo CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BUY_CONSIGNSALEITEMINFOHandler::.ctor()
MethodInfo CG_BUY_CONSIGNSALEITEMINFOHandler__ctor_m14937_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BUY_CONSIGNSALEITEMINFOHandler__ctor_m14937/* method */
	, &CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_il2cpp_TypeInfo/* declaring_type */
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
	, 8413/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_CG_BUY_CONSIGNSALEITEMINFOHandler_Execute_m14938_ParameterInfos[] = 
{
	{"ipacket", 0, 134222124, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BUY_CONSIGNSALEITEMINFOHandler::Execute(PacketDistributed)
MethodInfo CG_BUY_CONSIGNSALEITEMINFOHandler_Execute_m14938_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BUY_CONSIGNSALEITEMINFOHandler_Execute_m14938/* method */
	, &CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_CG_BUY_CONSIGNSALEITEMINFOHandler_Execute_m14938_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8414/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_MethodInfos[] =
{
	&CG_BUY_CONSIGNSALEITEMINFOHandler__ctor_m14937_MethodInfo,
	&CG_BUY_CONSIGNSALEITEMINFOHandler_Execute_m14938_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BUY_CONSIGNSALEITEMINFOHandler_Execute_m14938_MethodInfo;
static MethodInfo* CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BUY_CONSIGNSALEITEMINFOHandler_Execute_m14938_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_0_0_0;
extern Il2CppType CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BUY_CONSIGNSALEITEMINFOHandler_t2305;
extern TypeInfo CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_il2cpp_TypeInfo;
TypeInfo CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BUY_CONSIGNSALEITEMINFOHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_il2cpp_TypeInfo/* element_class */
	, CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_il2cpp_TypeInfo/* cast_class */
	, &CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_0_0_0/* byval_arg */
	, &CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_1_0_0/* this_arg */
	, CG_BUY_CONSIGNSALEITEMINFOHandler_t2305_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BUY_CONSIGNSALEITEMINFOHandler_t2305)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BUY_FASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_FASHIONHandl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BUY_FASHIONHandler_t2306_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BUY_FASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_FASHIONHandlMethodDeclarations.h"

// CG_BUY_FASHION
#include "AssemblyU2DCSharp_CG_BUY_FASHION.h"
extern TypeInfo CG_BUY_FASHION_t3220_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BUY_FASHIONHandler::.ctor()
extern MethodInfo CG_BUY_FASHIONHandler__ctor_m14939_MethodInfo;
 void CG_BUY_FASHIONHandler__ctor_m14939 (CG_BUY_FASHIONHandler_t2306 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BUY_FASHIONHandler::Execute(PacketDistributed)
extern MethodInfo CG_BUY_FASHIONHandler_Execute_m14940_MethodInfo;
 uint32_t CG_BUY_FASHIONHandler_Execute_m14940 (CG_BUY_FASHIONHandler_t2306 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BUY_FASHION_t3220 * V_0 = {0};
	{
		V_0 = ((CG_BUY_FASHION_t3220 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BUY_FASHION_t3220_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BUY_FASHIONHandler
extern TypeInfo CG_BUY_FASHIONHandler_t2306_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BUY_FASHIONHandler::.ctor()
MethodInfo CG_BUY_FASHIONHandler__ctor_m14939_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BUY_FASHIONHandler__ctor_m14939/* method */
	, &CG_BUY_FASHIONHandler_t2306_il2cpp_TypeInfo/* declaring_type */
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
	, 8415/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BUY_FASHIONHandler_t2306_CG_BUY_FASHIONHandler_Execute_m14940_ParameterInfos[] = 
{
	{"ipacket", 0, 134222125, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BUY_FASHIONHandler_t2306_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BUY_FASHIONHandler::Execute(PacketDistributed)
MethodInfo CG_BUY_FASHIONHandler_Execute_m14940_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BUY_FASHIONHandler_Execute_m14940/* method */
	, &CG_BUY_FASHIONHandler_t2306_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BUY_FASHIONHandler_t2306_CG_BUY_FASHIONHandler_Execute_m14940_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8416/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BUY_FASHIONHandler_t2306_MethodInfos[] =
{
	&CG_BUY_FASHIONHandler__ctor_m14939_MethodInfo,
	&CG_BUY_FASHIONHandler_Execute_m14940_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BUY_FASHIONHandler_Execute_m14940_MethodInfo;
static MethodInfo* CG_BUY_FASHIONHandler_t2306_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BUY_FASHIONHandler_Execute_m14940_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BUY_FASHIONHandler_t2306_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BUY_FASHIONHandler_t2306_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BUY_FASHIONHandler_t2306_0_0_0;
extern Il2CppType CG_BUY_FASHIONHandler_t2306_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BUY_FASHIONHandler_t2306;
extern TypeInfo CG_BUY_FASHIONHandler_t2306_il2cpp_TypeInfo;
TypeInfo CG_BUY_FASHIONHandler_t2306_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BUY_FASHIONHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BUY_FASHIONHandler_t2306_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BUY_FASHIONHandler_t2306_il2cpp_TypeInfo/* element_class */
	, CG_BUY_FASHIONHandler_t2306_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BUY_FASHIONHandler_t2306_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BUY_FASHIONHandler_t2306_il2cpp_TypeInfo/* cast_class */
	, &CG_BUY_FASHIONHandler_t2306_0_0_0/* byval_arg */
	, &CG_BUY_FASHIONHandler_t2306_1_0_0/* this_arg */
	, CG_BUY_FASHIONHandler_t2306_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BUY_FASHIONHandler_t2306)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BUY_GOLDMONEYSHOPGOODSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_GOLDMONEYSHO.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BUY_GOLDMONEYSHOPGOODSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_GOLDMONEYSHOMethodDeclarations.h"

// CG_BUY_GOLDMONEYSHOPGOODS
#include "AssemblyU2DCSharp_CG_BUY_GOLDMONEYSHOPGOODS.h"
extern TypeInfo CG_BUY_GOLDMONEYSHOPGOODS_t3635_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BUY_GOLDMONEYSHOPGOODSHandler::.ctor()
extern MethodInfo CG_BUY_GOLDMONEYSHOPGOODSHandler__ctor_m14941_MethodInfo;
 void CG_BUY_GOLDMONEYSHOPGOODSHandler__ctor_m14941 (CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BUY_GOLDMONEYSHOPGOODSHandler::Execute(PacketDistributed)
extern MethodInfo CG_BUY_GOLDMONEYSHOPGOODSHandler_Execute_m14942_MethodInfo;
 uint32_t CG_BUY_GOLDMONEYSHOPGOODSHandler_Execute_m14942 (CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BUY_GOLDMONEYSHOPGOODS_t3635 * V_0 = {0};
	{
		V_0 = ((CG_BUY_GOLDMONEYSHOPGOODS_t3635 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BUY_GOLDMONEYSHOPGOODS_t3635_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BUY_GOLDMONEYSHOPGOODSHandler
extern TypeInfo CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BUY_GOLDMONEYSHOPGOODSHandler::.ctor()
MethodInfo CG_BUY_GOLDMONEYSHOPGOODSHandler__ctor_m14941_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BUY_GOLDMONEYSHOPGOODSHandler__ctor_m14941/* method */
	, &CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_il2cpp_TypeInfo/* declaring_type */
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
	, 8417/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_CG_BUY_GOLDMONEYSHOPGOODSHandler_Execute_m14942_ParameterInfos[] = 
{
	{"ipacket", 0, 134222126, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BUY_GOLDMONEYSHOPGOODSHandler::Execute(PacketDistributed)
MethodInfo CG_BUY_GOLDMONEYSHOPGOODSHandler_Execute_m14942_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BUY_GOLDMONEYSHOPGOODSHandler_Execute_m14942/* method */
	, &CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_CG_BUY_GOLDMONEYSHOPGOODSHandler_Execute_m14942_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8418/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_MethodInfos[] =
{
	&CG_BUY_GOLDMONEYSHOPGOODSHandler__ctor_m14941_MethodInfo,
	&CG_BUY_GOLDMONEYSHOPGOODSHandler_Execute_m14942_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BUY_GOLDMONEYSHOPGOODSHandler_Execute_m14942_MethodInfo;
static MethodInfo* CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BUY_GOLDMONEYSHOPGOODSHandler_Execute_m14942_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_0_0_0;
extern Il2CppType CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307;
extern TypeInfo CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_il2cpp_TypeInfo;
TypeInfo CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BUY_GOLDMONEYSHOPGOODSHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_il2cpp_TypeInfo/* element_class */
	, CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_il2cpp_TypeInfo/* cast_class */
	, &CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_0_0_0/* byval_arg */
	, &CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_1_0_0/* this_arg */
	, CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BUY_GOLDMONEYSHOPGOODSHandler_t2307)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BUY_GUILDGOODSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_GUILDGOODSHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BUY_GUILDGOODSHandler_t2308_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BUY_GUILDGOODSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_GUILDGOODSHaMethodDeclarations.h"

// CG_BUY_GUILDGOODS
#include "AssemblyU2DCSharp_CG_BUY_GUILDGOODS.h"
extern TypeInfo CG_BUY_GUILDGOODS_t3258_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BUY_GUILDGOODSHandler::.ctor()
extern MethodInfo CG_BUY_GUILDGOODSHandler__ctor_m14943_MethodInfo;
 void CG_BUY_GUILDGOODSHandler__ctor_m14943 (CG_BUY_GUILDGOODSHandler_t2308 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BUY_GUILDGOODSHandler::Execute(PacketDistributed)
extern MethodInfo CG_BUY_GUILDGOODSHandler_Execute_m14944_MethodInfo;
 uint32_t CG_BUY_GUILDGOODSHandler_Execute_m14944 (CG_BUY_GUILDGOODSHandler_t2308 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BUY_GUILDGOODS_t3258 * V_0 = {0};
	{
		V_0 = ((CG_BUY_GUILDGOODS_t3258 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BUY_GUILDGOODS_t3258_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BUY_GUILDGOODSHandler
extern TypeInfo CG_BUY_GUILDGOODSHandler_t2308_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BUY_GUILDGOODSHandler::.ctor()
MethodInfo CG_BUY_GUILDGOODSHandler__ctor_m14943_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BUY_GUILDGOODSHandler__ctor_m14943/* method */
	, &CG_BUY_GUILDGOODSHandler_t2308_il2cpp_TypeInfo/* declaring_type */
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
	, 8419/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BUY_GUILDGOODSHandler_t2308_CG_BUY_GUILDGOODSHandler_Execute_m14944_ParameterInfos[] = 
{
	{"ipacket", 0, 134222127, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BUY_GUILDGOODSHandler_t2308_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BUY_GUILDGOODSHandler::Execute(PacketDistributed)
MethodInfo CG_BUY_GUILDGOODSHandler_Execute_m14944_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BUY_GUILDGOODSHandler_Execute_m14944/* method */
	, &CG_BUY_GUILDGOODSHandler_t2308_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BUY_GUILDGOODSHandler_t2308_CG_BUY_GUILDGOODSHandler_Execute_m14944_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8420/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BUY_GUILDGOODSHandler_t2308_MethodInfos[] =
{
	&CG_BUY_GUILDGOODSHandler__ctor_m14943_MethodInfo,
	&CG_BUY_GUILDGOODSHandler_Execute_m14944_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BUY_GUILDGOODSHandler_Execute_m14944_MethodInfo;
static MethodInfo* CG_BUY_GUILDGOODSHandler_t2308_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BUY_GUILDGOODSHandler_Execute_m14944_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BUY_GUILDGOODSHandler_t2308_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BUY_GUILDGOODSHandler_t2308_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BUY_GUILDGOODSHandler_t2308_0_0_0;
extern Il2CppType CG_BUY_GUILDGOODSHandler_t2308_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BUY_GUILDGOODSHandler_t2308;
extern TypeInfo CG_BUY_GUILDGOODSHandler_t2308_il2cpp_TypeInfo;
TypeInfo CG_BUY_GUILDGOODSHandler_t2308_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BUY_GUILDGOODSHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BUY_GUILDGOODSHandler_t2308_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BUY_GUILDGOODSHandler_t2308_il2cpp_TypeInfo/* element_class */
	, CG_BUY_GUILDGOODSHandler_t2308_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BUY_GUILDGOODSHandler_t2308_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BUY_GUILDGOODSHandler_t2308_il2cpp_TypeInfo/* cast_class */
	, &CG_BUY_GUILDGOODSHandler_t2308_0_0_0/* byval_arg */
	, &CG_BUY_GUILDGOODSHandler_t2308_1_0_0/* this_arg */
	, CG_BUY_GUILDGOODSHandler_t2308_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BUY_GUILDGOODSHandler_t2308)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BUY_STAMINAHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_STAMINAHandl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BUY_STAMINAHandler_t2309_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BUY_STAMINAHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_STAMINAHandlMethodDeclarations.h"

// CG_BUY_STAMINA
#include "AssemblyU2DCSharp_CG_BUY_STAMINA.h"
extern TypeInfo CG_BUY_STAMINA_t3308_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BUY_STAMINAHandler::.ctor()
extern MethodInfo CG_BUY_STAMINAHandler__ctor_m14945_MethodInfo;
 void CG_BUY_STAMINAHandler__ctor_m14945 (CG_BUY_STAMINAHandler_t2309 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BUY_STAMINAHandler::Execute(PacketDistributed)
extern MethodInfo CG_BUY_STAMINAHandler_Execute_m14946_MethodInfo;
 uint32_t CG_BUY_STAMINAHandler_Execute_m14946 (CG_BUY_STAMINAHandler_t2309 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BUY_STAMINA_t3308 * V_0 = {0};
	{
		V_0 = ((CG_BUY_STAMINA_t3308 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BUY_STAMINA_t3308_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BUY_STAMINAHandler
extern TypeInfo CG_BUY_STAMINAHandler_t2309_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BUY_STAMINAHandler::.ctor()
MethodInfo CG_BUY_STAMINAHandler__ctor_m14945_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BUY_STAMINAHandler__ctor_m14945/* method */
	, &CG_BUY_STAMINAHandler_t2309_il2cpp_TypeInfo/* declaring_type */
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
	, 8421/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BUY_STAMINAHandler_t2309_CG_BUY_STAMINAHandler_Execute_m14946_ParameterInfos[] = 
{
	{"ipacket", 0, 134222128, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BUY_STAMINAHandler_t2309_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BUY_STAMINAHandler::Execute(PacketDistributed)
MethodInfo CG_BUY_STAMINAHandler_Execute_m14946_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BUY_STAMINAHandler_Execute_m14946/* method */
	, &CG_BUY_STAMINAHandler_t2309_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BUY_STAMINAHandler_t2309_CG_BUY_STAMINAHandler_Execute_m14946_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8422/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BUY_STAMINAHandler_t2309_MethodInfos[] =
{
	&CG_BUY_STAMINAHandler__ctor_m14945_MethodInfo,
	&CG_BUY_STAMINAHandler_Execute_m14946_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BUY_STAMINAHandler_Execute_m14946_MethodInfo;
static MethodInfo* CG_BUY_STAMINAHandler_t2309_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BUY_STAMINAHandler_Execute_m14946_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BUY_STAMINAHandler_t2309_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BUY_STAMINAHandler_t2309_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BUY_STAMINAHandler_t2309_0_0_0;
extern Il2CppType CG_BUY_STAMINAHandler_t2309_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BUY_STAMINAHandler_t2309;
extern TypeInfo CG_BUY_STAMINAHandler_t2309_il2cpp_TypeInfo;
TypeInfo CG_BUY_STAMINAHandler_t2309_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BUY_STAMINAHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BUY_STAMINAHandler_t2309_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BUY_STAMINAHandler_t2309_il2cpp_TypeInfo/* element_class */
	, CG_BUY_STAMINAHandler_t2309_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BUY_STAMINAHandler_t2309_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BUY_STAMINAHandler_t2309_il2cpp_TypeInfo/* cast_class */
	, &CG_BUY_STAMINAHandler_t2309_0_0_0/* byval_arg */
	, &CG_BUY_STAMINAHandler_t2309_1_0_0/* this_arg */
	, CG_BUY_STAMINAHandler_t2309_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BUY_STAMINAHandler_t2309)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BUY_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_SWORDSMANHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BUY_SWORDSMANHandler_t2310_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BUY_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_SWORDSMANHanMethodDeclarations.h"

// CG_BUY_SWORDSMAN
#include "AssemblyU2DCSharp_CG_BUY_SWORDSMAN.h"
extern TypeInfo CG_BUY_SWORDSMAN_t3330_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BUY_SWORDSMANHandler::.ctor()
extern MethodInfo CG_BUY_SWORDSMANHandler__ctor_m14947_MethodInfo;
 void CG_BUY_SWORDSMANHandler__ctor_m14947 (CG_BUY_SWORDSMANHandler_t2310 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BUY_SWORDSMANHandler::Execute(PacketDistributed)
extern MethodInfo CG_BUY_SWORDSMANHandler_Execute_m14948_MethodInfo;
 uint32_t CG_BUY_SWORDSMANHandler_Execute_m14948 (CG_BUY_SWORDSMANHandler_t2310 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BUY_SWORDSMAN_t3330 * V_0 = {0};
	{
		V_0 = ((CG_BUY_SWORDSMAN_t3330 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BUY_SWORDSMAN_t3330_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BUY_SWORDSMANHandler
extern TypeInfo CG_BUY_SWORDSMANHandler_t2310_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BUY_SWORDSMANHandler::.ctor()
MethodInfo CG_BUY_SWORDSMANHandler__ctor_m14947_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BUY_SWORDSMANHandler__ctor_m14947/* method */
	, &CG_BUY_SWORDSMANHandler_t2310_il2cpp_TypeInfo/* declaring_type */
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
	, 8423/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BUY_SWORDSMANHandler_t2310_CG_BUY_SWORDSMANHandler_Execute_m14948_ParameterInfos[] = 
{
	{"ipacket", 0, 134222129, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BUY_SWORDSMANHandler_t2310_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BUY_SWORDSMANHandler::Execute(PacketDistributed)
MethodInfo CG_BUY_SWORDSMANHandler_Execute_m14948_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BUY_SWORDSMANHandler_Execute_m14948/* method */
	, &CG_BUY_SWORDSMANHandler_t2310_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BUY_SWORDSMANHandler_t2310_CG_BUY_SWORDSMANHandler_Execute_m14948_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8424/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BUY_SWORDSMANHandler_t2310_MethodInfos[] =
{
	&CG_BUY_SWORDSMANHandler__ctor_m14947_MethodInfo,
	&CG_BUY_SWORDSMANHandler_Execute_m14948_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BUY_SWORDSMANHandler_Execute_m14948_MethodInfo;
static MethodInfo* CG_BUY_SWORDSMANHandler_t2310_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BUY_SWORDSMANHandler_Execute_m14948_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BUY_SWORDSMANHandler_t2310_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BUY_SWORDSMANHandler_t2310_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BUY_SWORDSMANHandler_t2310_0_0_0;
extern Il2CppType CG_BUY_SWORDSMANHandler_t2310_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BUY_SWORDSMANHandler_t2310;
extern TypeInfo CG_BUY_SWORDSMANHandler_t2310_il2cpp_TypeInfo;
TypeInfo CG_BUY_SWORDSMANHandler_t2310_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BUY_SWORDSMANHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BUY_SWORDSMANHandler_t2310_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BUY_SWORDSMANHandler_t2310_il2cpp_TypeInfo/* element_class */
	, CG_BUY_SWORDSMANHandler_t2310_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BUY_SWORDSMANHandler_t2310_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BUY_SWORDSMANHandler_t2310_il2cpp_TypeInfo/* cast_class */
	, &CG_BUY_SWORDSMANHandler_t2310_0_0_0/* byval_arg */
	, &CG_BUY_SWORDSMANHandler_t2310_1_0_0/* this_arg */
	, CG_BUY_SWORDSMANHandler_t2310_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BUY_SWORDSMANHandler_t2310)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_BUY_YUANBAOGOODSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_YUANBAOGOODS.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_BUY_YUANBAOGOODSHandler_t2311_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_BUY_YUANBAOGOODSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_BUY_YUANBAOGOODSMethodDeclarations.h"

// CG_BUY_YUANBAOGOODS
#include "AssemblyU2DCSharp_CG_BUY_YUANBAOGOODS.h"
extern TypeInfo CG_BUY_YUANBAOGOODS_t3257_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_BUY_YUANBAOGOODSHandler::.ctor()
extern MethodInfo CG_BUY_YUANBAOGOODSHandler__ctor_m14949_MethodInfo;
 void CG_BUY_YUANBAOGOODSHandler__ctor_m14949 (CG_BUY_YUANBAOGOODSHandler_t2311 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_BUY_YUANBAOGOODSHandler::Execute(PacketDistributed)
extern MethodInfo CG_BUY_YUANBAOGOODSHandler_Execute_m14950_MethodInfo;
 uint32_t CG_BUY_YUANBAOGOODSHandler_Execute_m14950 (CG_BUY_YUANBAOGOODSHandler_t2311 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_BUY_YUANBAOGOODS_t3257 * V_0 = {0};
	{
		V_0 = ((CG_BUY_YUANBAOGOODS_t3257 *)Castclass(___ipacket, InitializedTypeInfo(&CG_BUY_YUANBAOGOODS_t3257_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_BUY_YUANBAOGOODSHandler
extern TypeInfo CG_BUY_YUANBAOGOODSHandler_t2311_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_BUY_YUANBAOGOODSHandler::.ctor()
MethodInfo CG_BUY_YUANBAOGOODSHandler__ctor_m14949_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_BUY_YUANBAOGOODSHandler__ctor_m14949/* method */
	, &CG_BUY_YUANBAOGOODSHandler_t2311_il2cpp_TypeInfo/* declaring_type */
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
	, 8425/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_BUY_YUANBAOGOODSHandler_t2311_CG_BUY_YUANBAOGOODSHandler_Execute_m14950_ParameterInfos[] = 
{
	{"ipacket", 0, 134222130, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_BUY_YUANBAOGOODSHandler_t2311_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_BUY_YUANBAOGOODSHandler::Execute(PacketDistributed)
MethodInfo CG_BUY_YUANBAOGOODSHandler_Execute_m14950_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_BUY_YUANBAOGOODSHandler_Execute_m14950/* method */
	, &CG_BUY_YUANBAOGOODSHandler_t2311_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_BUY_YUANBAOGOODSHandler_t2311_CG_BUY_YUANBAOGOODSHandler_Execute_m14950_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8426/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_BUY_YUANBAOGOODSHandler_t2311_MethodInfos[] =
{
	&CG_BUY_YUANBAOGOODSHandler__ctor_m14949_MethodInfo,
	&CG_BUY_YUANBAOGOODSHandler_Execute_m14950_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_BUY_YUANBAOGOODSHandler_Execute_m14950_MethodInfo;
static MethodInfo* CG_BUY_YUANBAOGOODSHandler_t2311_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_BUY_YUANBAOGOODSHandler_Execute_m14950_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_BUY_YUANBAOGOODSHandler_t2311_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_BUY_YUANBAOGOODSHandler_t2311_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_BUY_YUANBAOGOODSHandler_t2311_0_0_0;
extern Il2CppType CG_BUY_YUANBAOGOODSHandler_t2311_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_BUY_YUANBAOGOODSHandler_t2311;
extern TypeInfo CG_BUY_YUANBAOGOODSHandler_t2311_il2cpp_TypeInfo;
TypeInfo CG_BUY_YUANBAOGOODSHandler_t2311_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_BUY_YUANBAOGOODSHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_BUY_YUANBAOGOODSHandler_t2311_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_BUY_YUANBAOGOODSHandler_t2311_il2cpp_TypeInfo/* element_class */
	, CG_BUY_YUANBAOGOODSHandler_t2311_InterfacesTypeInfos/* implemented_interfaces */
	, CG_BUY_YUANBAOGOODSHandler_t2311_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_BUY_YUANBAOGOODSHandler_t2311_il2cpp_TypeInfo/* cast_class */
	, &CG_BUY_YUANBAOGOODSHandler_t2311_0_0_0/* byval_arg */
	, &CG_BUY_YUANBAOGOODSHandler_t2311_1_0_0/* this_arg */
	, CG_BUY_YUANBAOGOODSHandler_t2311_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_BUY_YUANBAOGOODSHandler_t2311)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CALL_FELLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CALL_FELLOWHandl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CALL_FELLOWHandler_t2312_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CALL_FELLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CALL_FELLOWHandlMethodDeclarations.h"

// CG_CALL_FELLOW
#include "AssemblyU2DCSharp_CG_CALL_FELLOW.h"
extern TypeInfo CG_CALL_FELLOW_t3063_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CALL_FELLOWHandler::.ctor()
extern MethodInfo CG_CALL_FELLOWHandler__ctor_m14951_MethodInfo;
 void CG_CALL_FELLOWHandler__ctor_m14951 (CG_CALL_FELLOWHandler_t2312 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CALL_FELLOWHandler::Execute(PacketDistributed)
extern MethodInfo CG_CALL_FELLOWHandler_Execute_m14952_MethodInfo;
 uint32_t CG_CALL_FELLOWHandler_Execute_m14952 (CG_CALL_FELLOWHandler_t2312 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CALL_FELLOW_t3063 * V_0 = {0};
	{
		V_0 = ((CG_CALL_FELLOW_t3063 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CALL_FELLOW_t3063_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CALL_FELLOWHandler
extern TypeInfo CG_CALL_FELLOWHandler_t2312_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CALL_FELLOWHandler::.ctor()
MethodInfo CG_CALL_FELLOWHandler__ctor_m14951_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CALL_FELLOWHandler__ctor_m14951/* method */
	, &CG_CALL_FELLOWHandler_t2312_il2cpp_TypeInfo/* declaring_type */
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
	, 8427/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CALL_FELLOWHandler_t2312_CG_CALL_FELLOWHandler_Execute_m14952_ParameterInfos[] = 
{
	{"ipacket", 0, 134222131, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CALL_FELLOWHandler_t2312_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CALL_FELLOWHandler::Execute(PacketDistributed)
MethodInfo CG_CALL_FELLOWHandler_Execute_m14952_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CALL_FELLOWHandler_Execute_m14952/* method */
	, &CG_CALL_FELLOWHandler_t2312_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CALL_FELLOWHandler_t2312_CG_CALL_FELLOWHandler_Execute_m14952_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8428/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CALL_FELLOWHandler_t2312_MethodInfos[] =
{
	&CG_CALL_FELLOWHandler__ctor_m14951_MethodInfo,
	&CG_CALL_FELLOWHandler_Execute_m14952_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CALL_FELLOWHandler_Execute_m14952_MethodInfo;
static MethodInfo* CG_CALL_FELLOWHandler_t2312_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CALL_FELLOWHandler_Execute_m14952_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CALL_FELLOWHandler_t2312_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CALL_FELLOWHandler_t2312_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CALL_FELLOWHandler_t2312_0_0_0;
extern Il2CppType CG_CALL_FELLOWHandler_t2312_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CALL_FELLOWHandler_t2312;
extern TypeInfo CG_CALL_FELLOWHandler_t2312_il2cpp_TypeInfo;
TypeInfo CG_CALL_FELLOWHandler_t2312_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CALL_FELLOWHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CALL_FELLOWHandler_t2312_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CALL_FELLOWHandler_t2312_il2cpp_TypeInfo/* element_class */
	, CG_CALL_FELLOWHandler_t2312_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CALL_FELLOWHandler_t2312_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CALL_FELLOWHandler_t2312_il2cpp_TypeInfo/* cast_class */
	, &CG_CALL_FELLOWHandler_t2312_0_0_0/* byval_arg */
	, &CG_CALL_FELLOWHandler_t2312_1_0_0/* this_arg */
	, CG_CALL_FELLOWHandler_t2312_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CALL_FELLOWHandler_t2312)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CANCELCONSIGNSALEITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CANCELCONSIGNSAL.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CANCELCONSIGNSALEITEMHandler_t2313_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CANCELCONSIGNSALEITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CANCELCONSIGNSALMethodDeclarations.h"

// CG_CANCELCONSIGNSALEITEM
#include "AssemblyU2DCSharp_CG_CANCELCONSIGNSALEITEM.h"
extern TypeInfo CG_CANCELCONSIGNSALEITEM_t3196_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CANCELCONSIGNSALEITEMHandler::.ctor()
extern MethodInfo CG_CANCELCONSIGNSALEITEMHandler__ctor_m14953_MethodInfo;
 void CG_CANCELCONSIGNSALEITEMHandler__ctor_m14953 (CG_CANCELCONSIGNSALEITEMHandler_t2313 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CANCELCONSIGNSALEITEMHandler::Execute(PacketDistributed)
extern MethodInfo CG_CANCELCONSIGNSALEITEMHandler_Execute_m14954_MethodInfo;
 uint32_t CG_CANCELCONSIGNSALEITEMHandler_Execute_m14954 (CG_CANCELCONSIGNSALEITEMHandler_t2313 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CANCELCONSIGNSALEITEM_t3196 * V_0 = {0};
	{
		V_0 = ((CG_CANCELCONSIGNSALEITEM_t3196 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CANCELCONSIGNSALEITEM_t3196_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CANCELCONSIGNSALEITEMHandler
extern TypeInfo CG_CANCELCONSIGNSALEITEMHandler_t2313_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CANCELCONSIGNSALEITEMHandler::.ctor()
MethodInfo CG_CANCELCONSIGNSALEITEMHandler__ctor_m14953_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CANCELCONSIGNSALEITEMHandler__ctor_m14953/* method */
	, &CG_CANCELCONSIGNSALEITEMHandler_t2313_il2cpp_TypeInfo/* declaring_type */
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
	, 8429/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CANCELCONSIGNSALEITEMHandler_t2313_CG_CANCELCONSIGNSALEITEMHandler_Execute_m14954_ParameterInfos[] = 
{
	{"ipacket", 0, 134222132, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CANCELCONSIGNSALEITEMHandler_t2313_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CANCELCONSIGNSALEITEMHandler::Execute(PacketDistributed)
MethodInfo CG_CANCELCONSIGNSALEITEMHandler_Execute_m14954_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CANCELCONSIGNSALEITEMHandler_Execute_m14954/* method */
	, &CG_CANCELCONSIGNSALEITEMHandler_t2313_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CANCELCONSIGNSALEITEMHandler_t2313_CG_CANCELCONSIGNSALEITEMHandler_Execute_m14954_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8430/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CANCELCONSIGNSALEITEMHandler_t2313_MethodInfos[] =
{
	&CG_CANCELCONSIGNSALEITEMHandler__ctor_m14953_MethodInfo,
	&CG_CANCELCONSIGNSALEITEMHandler_Execute_m14954_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CANCELCONSIGNSALEITEMHandler_Execute_m14954_MethodInfo;
static MethodInfo* CG_CANCELCONSIGNSALEITEMHandler_t2313_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CANCELCONSIGNSALEITEMHandler_Execute_m14954_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CANCELCONSIGNSALEITEMHandler_t2313_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CANCELCONSIGNSALEITEMHandler_t2313_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CANCELCONSIGNSALEITEMHandler_t2313_0_0_0;
extern Il2CppType CG_CANCELCONSIGNSALEITEMHandler_t2313_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CANCELCONSIGNSALEITEMHandler_t2313;
extern TypeInfo CG_CANCELCONSIGNSALEITEMHandler_t2313_il2cpp_TypeInfo;
TypeInfo CG_CANCELCONSIGNSALEITEMHandler_t2313_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CANCELCONSIGNSALEITEMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CANCELCONSIGNSALEITEMHandler_t2313_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CANCELCONSIGNSALEITEMHandler_t2313_il2cpp_TypeInfo/* element_class */
	, CG_CANCELCONSIGNSALEITEMHandler_t2313_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CANCELCONSIGNSALEITEMHandler_t2313_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CANCELCONSIGNSALEITEMHandler_t2313_il2cpp_TypeInfo/* cast_class */
	, &CG_CANCELCONSIGNSALEITEMHandler_t2313_0_0_0/* byval_arg */
	, &CG_CANCELCONSIGNSALEITEMHandler_t2313_1_0_0/* this_arg */
	, CG_CANCELCONSIGNSALEITEMHandler_t2313_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CANCELCONSIGNSALEITEMHandler_t2313)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CHALLENGERANKLIST_REQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHALLENGERANKLIS.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CHALLENGERANKLIST_REQHandler_t2314_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CHALLENGERANKLIST_REQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHALLENGERANKLISMethodDeclarations.h"

// CG_CHALLENGERANKLIST_REQ
#include "AssemblyU2DCSharp_CG_CHALLENGERANKLIST_REQ.h"
extern TypeInfo CG_CHALLENGERANKLIST_REQ_t3107_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CHALLENGERANKLIST_REQHandler::.ctor()
extern MethodInfo CG_CHALLENGERANKLIST_REQHandler__ctor_m14955_MethodInfo;
 void CG_CHALLENGERANKLIST_REQHandler__ctor_m14955 (CG_CHALLENGERANKLIST_REQHandler_t2314 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CHALLENGERANKLIST_REQHandler::Execute(PacketDistributed)
extern MethodInfo CG_CHALLENGERANKLIST_REQHandler_Execute_m14956_MethodInfo;
 uint32_t CG_CHALLENGERANKLIST_REQHandler_Execute_m14956 (CG_CHALLENGERANKLIST_REQHandler_t2314 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CHALLENGERANKLIST_REQ_t3107 * V_0 = {0};
	{
		V_0 = ((CG_CHALLENGERANKLIST_REQ_t3107 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CHALLENGERANKLIST_REQ_t3107_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CHALLENGERANKLIST_REQHandler
extern TypeInfo CG_CHALLENGERANKLIST_REQHandler_t2314_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CHALLENGERANKLIST_REQHandler::.ctor()
MethodInfo CG_CHALLENGERANKLIST_REQHandler__ctor_m14955_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CHALLENGERANKLIST_REQHandler__ctor_m14955/* method */
	, &CG_CHALLENGERANKLIST_REQHandler_t2314_il2cpp_TypeInfo/* declaring_type */
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
	, 8431/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CHALLENGERANKLIST_REQHandler_t2314_CG_CHALLENGERANKLIST_REQHandler_Execute_m14956_ParameterInfos[] = 
{
	{"ipacket", 0, 134222133, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CHALLENGERANKLIST_REQHandler_t2314_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CHALLENGERANKLIST_REQHandler::Execute(PacketDistributed)
MethodInfo CG_CHALLENGERANKLIST_REQHandler_Execute_m14956_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CHALLENGERANKLIST_REQHandler_Execute_m14956/* method */
	, &CG_CHALLENGERANKLIST_REQHandler_t2314_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CHALLENGERANKLIST_REQHandler_t2314_CG_CHALLENGERANKLIST_REQHandler_Execute_m14956_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8432/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CHALLENGERANKLIST_REQHandler_t2314_MethodInfos[] =
{
	&CG_CHALLENGERANKLIST_REQHandler__ctor_m14955_MethodInfo,
	&CG_CHALLENGERANKLIST_REQHandler_Execute_m14956_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CHALLENGERANKLIST_REQHandler_Execute_m14956_MethodInfo;
static MethodInfo* CG_CHALLENGERANKLIST_REQHandler_t2314_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CHALLENGERANKLIST_REQHandler_Execute_m14956_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CHALLENGERANKLIST_REQHandler_t2314_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CHALLENGERANKLIST_REQHandler_t2314_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CHALLENGERANKLIST_REQHandler_t2314_0_0_0;
extern Il2CppType CG_CHALLENGERANKLIST_REQHandler_t2314_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CHALLENGERANKLIST_REQHandler_t2314;
extern TypeInfo CG_CHALLENGERANKLIST_REQHandler_t2314_il2cpp_TypeInfo;
TypeInfo CG_CHALLENGERANKLIST_REQHandler_t2314_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CHALLENGERANKLIST_REQHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CHALLENGERANKLIST_REQHandler_t2314_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CHALLENGERANKLIST_REQHandler_t2314_il2cpp_TypeInfo/* element_class */
	, CG_CHALLENGERANKLIST_REQHandler_t2314_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CHALLENGERANKLIST_REQHandler_t2314_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CHALLENGERANKLIST_REQHandler_t2314_il2cpp_TypeInfo/* cast_class */
	, &CG_CHALLENGERANKLIST_REQHandler_t2314_0_0_0/* byval_arg */
	, &CG_CHALLENGERANKLIST_REQHandler_t2314_1_0_0/* this_arg */
	, CG_CHALLENGERANKLIST_REQHandler_t2314_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CHALLENGERANKLIST_REQHandler_t2314)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CHANGE_MAJORCITYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHANGE_MAJORCITY.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CHANGE_MAJORCITYHandler_t2315_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CHANGE_MAJORCITYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHANGE_MAJORCITYMethodDeclarations.h"

// CG_CHANGE_MAJORCITY
#include "AssemblyU2DCSharp_CG_CHANGE_MAJORCITY.h"
extern TypeInfo CG_CHANGE_MAJORCITY_t3141_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CHANGE_MAJORCITYHandler::.ctor()
extern MethodInfo CG_CHANGE_MAJORCITYHandler__ctor_m14957_MethodInfo;
 void CG_CHANGE_MAJORCITYHandler__ctor_m14957 (CG_CHANGE_MAJORCITYHandler_t2315 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CHANGE_MAJORCITYHandler::Execute(PacketDistributed)
extern MethodInfo CG_CHANGE_MAJORCITYHandler_Execute_m14958_MethodInfo;
 uint32_t CG_CHANGE_MAJORCITYHandler_Execute_m14958 (CG_CHANGE_MAJORCITYHandler_t2315 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CHANGE_MAJORCITY_t3141 * V_0 = {0};
	{
		V_0 = ((CG_CHANGE_MAJORCITY_t3141 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CHANGE_MAJORCITY_t3141_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CHANGE_MAJORCITYHandler
extern TypeInfo CG_CHANGE_MAJORCITYHandler_t2315_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CHANGE_MAJORCITYHandler::.ctor()
MethodInfo CG_CHANGE_MAJORCITYHandler__ctor_m14957_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CHANGE_MAJORCITYHandler__ctor_m14957/* method */
	, &CG_CHANGE_MAJORCITYHandler_t2315_il2cpp_TypeInfo/* declaring_type */
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
	, 8433/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CHANGE_MAJORCITYHandler_t2315_CG_CHANGE_MAJORCITYHandler_Execute_m14958_ParameterInfos[] = 
{
	{"ipacket", 0, 134222134, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CHANGE_MAJORCITYHandler_t2315_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CHANGE_MAJORCITYHandler::Execute(PacketDistributed)
MethodInfo CG_CHANGE_MAJORCITYHandler_Execute_m14958_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CHANGE_MAJORCITYHandler_Execute_m14958/* method */
	, &CG_CHANGE_MAJORCITYHandler_t2315_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CHANGE_MAJORCITYHandler_t2315_CG_CHANGE_MAJORCITYHandler_Execute_m14958_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8434/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CHANGE_MAJORCITYHandler_t2315_MethodInfos[] =
{
	&CG_CHANGE_MAJORCITYHandler__ctor_m14957_MethodInfo,
	&CG_CHANGE_MAJORCITYHandler_Execute_m14958_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CHANGE_MAJORCITYHandler_Execute_m14958_MethodInfo;
static MethodInfo* CG_CHANGE_MAJORCITYHandler_t2315_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CHANGE_MAJORCITYHandler_Execute_m14958_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CHANGE_MAJORCITYHandler_t2315_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CHANGE_MAJORCITYHandler_t2315_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CHANGE_MAJORCITYHandler_t2315_0_0_0;
extern Il2CppType CG_CHANGE_MAJORCITYHandler_t2315_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CHANGE_MAJORCITYHandler_t2315;
extern TypeInfo CG_CHANGE_MAJORCITYHandler_t2315_il2cpp_TypeInfo;
TypeInfo CG_CHANGE_MAJORCITYHandler_t2315_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CHANGE_MAJORCITYHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CHANGE_MAJORCITYHandler_t2315_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CHANGE_MAJORCITYHandler_t2315_il2cpp_TypeInfo/* element_class */
	, CG_CHANGE_MAJORCITYHandler_t2315_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CHANGE_MAJORCITYHandler_t2315_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CHANGE_MAJORCITYHandler_t2315_il2cpp_TypeInfo/* cast_class */
	, &CG_CHANGE_MAJORCITYHandler_t2315_0_0_0/* byval_arg */
	, &CG_CHANGE_MAJORCITYHandler_t2315_1_0_0/* this_arg */
	, CG_CHANGE_MAJORCITYHandler_t2315_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CHANGE_MAJORCITYHandler_t2315)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CHANGE_PKMODLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHANGE_PKMODLEHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CHANGE_PKMODLEHandler_t2316_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CHANGE_PKMODLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHANGE_PKMODLEHaMethodDeclarations.h"

// CG_CHANGE_PKMODLE
#include "AssemblyU2DCSharp_CG_CHANGE_PKMODLE.h"
extern TypeInfo CG_CHANGE_PKMODLE_t3093_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CHANGE_PKMODLEHandler::.ctor()
extern MethodInfo CG_CHANGE_PKMODLEHandler__ctor_m14959_MethodInfo;
 void CG_CHANGE_PKMODLEHandler__ctor_m14959 (CG_CHANGE_PKMODLEHandler_t2316 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CHANGE_PKMODLEHandler::Execute(PacketDistributed)
extern MethodInfo CG_CHANGE_PKMODLEHandler_Execute_m14960_MethodInfo;
 uint32_t CG_CHANGE_PKMODLEHandler_Execute_m14960 (CG_CHANGE_PKMODLEHandler_t2316 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CHANGE_PKMODLE_t3093 * V_0 = {0};
	{
		V_0 = ((CG_CHANGE_PKMODLE_t3093 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CHANGE_PKMODLE_t3093_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CHANGE_PKMODLEHandler
extern TypeInfo CG_CHANGE_PKMODLEHandler_t2316_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CHANGE_PKMODLEHandler::.ctor()
MethodInfo CG_CHANGE_PKMODLEHandler__ctor_m14959_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CHANGE_PKMODLEHandler__ctor_m14959/* method */
	, &CG_CHANGE_PKMODLEHandler_t2316_il2cpp_TypeInfo/* declaring_type */
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
	, 8435/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CHANGE_PKMODLEHandler_t2316_CG_CHANGE_PKMODLEHandler_Execute_m14960_ParameterInfos[] = 
{
	{"ipacket", 0, 134222135, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CHANGE_PKMODLEHandler_t2316_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CHANGE_PKMODLEHandler::Execute(PacketDistributed)
MethodInfo CG_CHANGE_PKMODLEHandler_Execute_m14960_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CHANGE_PKMODLEHandler_Execute_m14960/* method */
	, &CG_CHANGE_PKMODLEHandler_t2316_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CHANGE_PKMODLEHandler_t2316_CG_CHANGE_PKMODLEHandler_Execute_m14960_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8436/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CHANGE_PKMODLEHandler_t2316_MethodInfos[] =
{
	&CG_CHANGE_PKMODLEHandler__ctor_m14959_MethodInfo,
	&CG_CHANGE_PKMODLEHandler_Execute_m14960_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CHANGE_PKMODLEHandler_Execute_m14960_MethodInfo;
static MethodInfo* CG_CHANGE_PKMODLEHandler_t2316_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CHANGE_PKMODLEHandler_Execute_m14960_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CHANGE_PKMODLEHandler_t2316_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CHANGE_PKMODLEHandler_t2316_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CHANGE_PKMODLEHandler_t2316_0_0_0;
extern Il2CppType CG_CHANGE_PKMODLEHandler_t2316_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CHANGE_PKMODLEHandler_t2316;
extern TypeInfo CG_CHANGE_PKMODLEHandler_t2316_il2cpp_TypeInfo;
TypeInfo CG_CHANGE_PKMODLEHandler_t2316_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CHANGE_PKMODLEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CHANGE_PKMODLEHandler_t2316_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CHANGE_PKMODLEHandler_t2316_il2cpp_TypeInfo/* element_class */
	, CG_CHANGE_PKMODLEHandler_t2316_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CHANGE_PKMODLEHandler_t2316_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CHANGE_PKMODLEHandler_t2316_il2cpp_TypeInfo/* cast_class */
	, &CG_CHANGE_PKMODLEHandler_t2316_0_0_0/* byval_arg */
	, &CG_CHANGE_PKMODLEHandler_t2316_1_0_0/* this_arg */
	, CG_CHANGE_PKMODLEHandler_t2316_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CHANGE_PKMODLEHandler_t2316)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CHANGE_SHOWFASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHANGE_SHOWFASHI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CHANGE_SHOWFASHIONHandler_t2317_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CHANGE_SHOWFASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHANGE_SHOWFASHIMethodDeclarations.h"

// CG_CHANGE_SHOWFASHION
#include "AssemblyU2DCSharp_CG_CHANGE_SHOWFASHION.h"
extern TypeInfo CG_CHANGE_SHOWFASHION_t3293_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CHANGE_SHOWFASHIONHandler::.ctor()
extern MethodInfo CG_CHANGE_SHOWFASHIONHandler__ctor_m14961_MethodInfo;
 void CG_CHANGE_SHOWFASHIONHandler__ctor_m14961 (CG_CHANGE_SHOWFASHIONHandler_t2317 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CHANGE_SHOWFASHIONHandler::Execute(PacketDistributed)
extern MethodInfo CG_CHANGE_SHOWFASHIONHandler_Execute_m14962_MethodInfo;
 uint32_t CG_CHANGE_SHOWFASHIONHandler_Execute_m14962 (CG_CHANGE_SHOWFASHIONHandler_t2317 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CHANGE_SHOWFASHION_t3293 * V_0 = {0};
	{
		V_0 = ((CG_CHANGE_SHOWFASHION_t3293 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CHANGE_SHOWFASHION_t3293_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CHANGE_SHOWFASHIONHandler
extern TypeInfo CG_CHANGE_SHOWFASHIONHandler_t2317_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CHANGE_SHOWFASHIONHandler::.ctor()
MethodInfo CG_CHANGE_SHOWFASHIONHandler__ctor_m14961_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CHANGE_SHOWFASHIONHandler__ctor_m14961/* method */
	, &CG_CHANGE_SHOWFASHIONHandler_t2317_il2cpp_TypeInfo/* declaring_type */
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
	, 8437/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CHANGE_SHOWFASHIONHandler_t2317_CG_CHANGE_SHOWFASHIONHandler_Execute_m14962_ParameterInfos[] = 
{
	{"ipacket", 0, 134222136, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CHANGE_SHOWFASHIONHandler_t2317_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CHANGE_SHOWFASHIONHandler::Execute(PacketDistributed)
MethodInfo CG_CHANGE_SHOWFASHIONHandler_Execute_m14962_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CHANGE_SHOWFASHIONHandler_Execute_m14962/* method */
	, &CG_CHANGE_SHOWFASHIONHandler_t2317_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CHANGE_SHOWFASHIONHandler_t2317_CG_CHANGE_SHOWFASHIONHandler_Execute_m14962_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8438/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CHANGE_SHOWFASHIONHandler_t2317_MethodInfos[] =
{
	&CG_CHANGE_SHOWFASHIONHandler__ctor_m14961_MethodInfo,
	&CG_CHANGE_SHOWFASHIONHandler_Execute_m14962_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CHANGE_SHOWFASHIONHandler_Execute_m14962_MethodInfo;
static MethodInfo* CG_CHANGE_SHOWFASHIONHandler_t2317_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CHANGE_SHOWFASHIONHandler_Execute_m14962_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CHANGE_SHOWFASHIONHandler_t2317_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CHANGE_SHOWFASHIONHandler_t2317_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CHANGE_SHOWFASHIONHandler_t2317_0_0_0;
extern Il2CppType CG_CHANGE_SHOWFASHIONHandler_t2317_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CHANGE_SHOWFASHIONHandler_t2317;
extern TypeInfo CG_CHANGE_SHOWFASHIONHandler_t2317_il2cpp_TypeInfo;
TypeInfo CG_CHANGE_SHOWFASHIONHandler_t2317_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CHANGE_SHOWFASHIONHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CHANGE_SHOWFASHIONHandler_t2317_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CHANGE_SHOWFASHIONHandler_t2317_il2cpp_TypeInfo/* element_class */
	, CG_CHANGE_SHOWFASHIONHandler_t2317_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CHANGE_SHOWFASHIONHandler_t2317_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CHANGE_SHOWFASHIONHandler_t2317_il2cpp_TypeInfo/* cast_class */
	, &CG_CHANGE_SHOWFASHIONHandler_t2317_0_0_0/* byval_arg */
	, &CG_CHANGE_SHOWFASHIONHandler_t2317_1_0_0/* this_arg */
	, CG_CHANGE_SHOWFASHIONHandler_t2317_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CHANGE_SHOWFASHIONHandler_t2317)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CHATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHATHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CHATHandler_t2318_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CHATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CHATHandlerMethodDeclarations.h"

// CG_CHAT
#include "AssemblyU2DCSharp_CG_CHAT.h"
extern TypeInfo CG_CHAT_t1173_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CHATHandler::.ctor()
extern MethodInfo CG_CHATHandler__ctor_m14963_MethodInfo;
 void CG_CHATHandler__ctor_m14963 (CG_CHATHandler_t2318 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CHATHandler::Execute(PacketDistributed)
extern MethodInfo CG_CHATHandler_Execute_m14964_MethodInfo;
 uint32_t CG_CHATHandler_Execute_m14964 (CG_CHATHandler_t2318 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CHAT_t1173 * V_0 = {0};
	{
		V_0 = ((CG_CHAT_t1173 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CHAT_t1173_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CHATHandler
extern TypeInfo CG_CHATHandler_t2318_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CHATHandler::.ctor()
MethodInfo CG_CHATHandler__ctor_m14963_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CHATHandler__ctor_m14963/* method */
	, &CG_CHATHandler_t2318_il2cpp_TypeInfo/* declaring_type */
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
	, 8439/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CHATHandler_t2318_CG_CHATHandler_Execute_m14964_ParameterInfos[] = 
{
	{"ipacket", 0, 134222137, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CHATHandler_t2318_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CHATHandler::Execute(PacketDistributed)
MethodInfo CG_CHATHandler_Execute_m14964_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CHATHandler_Execute_m14964/* method */
	, &CG_CHATHandler_t2318_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CHATHandler_t2318_CG_CHATHandler_Execute_m14964_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8440/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CHATHandler_t2318_MethodInfos[] =
{
	&CG_CHATHandler__ctor_m14963_MethodInfo,
	&CG_CHATHandler_Execute_m14964_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CHATHandler_Execute_m14964_MethodInfo;
static MethodInfo* CG_CHATHandler_t2318_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CHATHandler_Execute_m14964_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CHATHandler_t2318_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CHATHandler_t2318_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CHATHandler_t2318_0_0_0;
extern Il2CppType CG_CHATHandler_t2318_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CHATHandler_t2318;
extern TypeInfo CG_CHATHandler_t2318_il2cpp_TypeInfo;
TypeInfo CG_CHATHandler_t2318_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CHATHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CHATHandler_t2318_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CHATHandler_t2318_il2cpp_TypeInfo/* element_class */
	, CG_CHATHandler_t2318_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CHATHandler_t2318_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CHATHandler_t2318_il2cpp_TypeInfo/* cast_class */
	, &CG_CHATHandler_t2318_0_0_0/* byval_arg */
	, &CG_CHATHandler_t2318_1_0_0/* this_arg */
	, CG_CHATHandler_t2318_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CHATHandler_t2318)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CJG_EXTRA_REWARD_REQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CJG_EXTRA_REWARD.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CJG_EXTRA_REWARD_REQHandler_t2319_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CJG_EXTRA_REWARD_REQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CJG_EXTRA_REWARDMethodDeclarations.h"

// CG_CJG_EXTRA_REWARD_REQ
#include "AssemblyU2DCSharp_CG_CJG_EXTRA_REWARD_REQ.h"
extern TypeInfo CG_CJG_EXTRA_REWARD_REQ_t3614_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CJG_EXTRA_REWARD_REQHandler::.ctor()
extern MethodInfo CG_CJG_EXTRA_REWARD_REQHandler__ctor_m14965_MethodInfo;
 void CG_CJG_EXTRA_REWARD_REQHandler__ctor_m14965 (CG_CJG_EXTRA_REWARD_REQHandler_t2319 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CJG_EXTRA_REWARD_REQHandler::Execute(PacketDistributed)
extern MethodInfo CG_CJG_EXTRA_REWARD_REQHandler_Execute_m14966_MethodInfo;
 uint32_t CG_CJG_EXTRA_REWARD_REQHandler_Execute_m14966 (CG_CJG_EXTRA_REWARD_REQHandler_t2319 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CJG_EXTRA_REWARD_REQ_t3614 * V_0 = {0};
	{
		V_0 = ((CG_CJG_EXTRA_REWARD_REQ_t3614 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CJG_EXTRA_REWARD_REQ_t3614_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CJG_EXTRA_REWARD_REQHandler
extern TypeInfo CG_CJG_EXTRA_REWARD_REQHandler_t2319_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CJG_EXTRA_REWARD_REQHandler::.ctor()
MethodInfo CG_CJG_EXTRA_REWARD_REQHandler__ctor_m14965_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CJG_EXTRA_REWARD_REQHandler__ctor_m14965/* method */
	, &CG_CJG_EXTRA_REWARD_REQHandler_t2319_il2cpp_TypeInfo/* declaring_type */
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
	, 8441/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CJG_EXTRA_REWARD_REQHandler_t2319_CG_CJG_EXTRA_REWARD_REQHandler_Execute_m14966_ParameterInfos[] = 
{
	{"ipacket", 0, 134222138, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CJG_EXTRA_REWARD_REQHandler_t2319_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CJG_EXTRA_REWARD_REQHandler::Execute(PacketDistributed)
MethodInfo CG_CJG_EXTRA_REWARD_REQHandler_Execute_m14966_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CJG_EXTRA_REWARD_REQHandler_Execute_m14966/* method */
	, &CG_CJG_EXTRA_REWARD_REQHandler_t2319_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CJG_EXTRA_REWARD_REQHandler_t2319_CG_CJG_EXTRA_REWARD_REQHandler_Execute_m14966_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8442/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CJG_EXTRA_REWARD_REQHandler_t2319_MethodInfos[] =
{
	&CG_CJG_EXTRA_REWARD_REQHandler__ctor_m14965_MethodInfo,
	&CG_CJG_EXTRA_REWARD_REQHandler_Execute_m14966_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CJG_EXTRA_REWARD_REQHandler_Execute_m14966_MethodInfo;
static MethodInfo* CG_CJG_EXTRA_REWARD_REQHandler_t2319_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CJG_EXTRA_REWARD_REQHandler_Execute_m14966_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CJG_EXTRA_REWARD_REQHandler_t2319_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CJG_EXTRA_REWARD_REQHandler_t2319_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CJG_EXTRA_REWARD_REQHandler_t2319_0_0_0;
extern Il2CppType CG_CJG_EXTRA_REWARD_REQHandler_t2319_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CJG_EXTRA_REWARD_REQHandler_t2319;
extern TypeInfo CG_CJG_EXTRA_REWARD_REQHandler_t2319_il2cpp_TypeInfo;
TypeInfo CG_CJG_EXTRA_REWARD_REQHandler_t2319_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CJG_EXTRA_REWARD_REQHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CJG_EXTRA_REWARD_REQHandler_t2319_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CJG_EXTRA_REWARD_REQHandler_t2319_il2cpp_TypeInfo/* element_class */
	, CG_CJG_EXTRA_REWARD_REQHandler_t2319_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CJG_EXTRA_REWARD_REQHandler_t2319_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CJG_EXTRA_REWARD_REQHandler_t2319_il2cpp_TypeInfo/* cast_class */
	, &CG_CJG_EXTRA_REWARD_REQHandler_t2319_0_0_0/* byval_arg */
	, &CG_CJG_EXTRA_REWARD_REQHandler_t2319_1_0_0/* this_arg */
	, CG_CJG_EXTRA_REWARD_REQHandler_t2319_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CJG_EXTRA_REWARD_REQHandler_t2319)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CLEAN_CACHE_SKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CLEAN_CACHE_SKIL.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CLEAN_CACHE_SKILLHandler_t2320_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CLEAN_CACHE_SKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CLEAN_CACHE_SKILMethodDeclarations.h"

// CG_CLEAN_CACHE_SKILL
#include "AssemblyU2DCSharp_CG_CLEAN_CACHE_SKILL.h"
extern TypeInfo CG_CLEAN_CACHE_SKILL_t3575_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CLEAN_CACHE_SKILLHandler::.ctor()
extern MethodInfo CG_CLEAN_CACHE_SKILLHandler__ctor_m14967_MethodInfo;
 void CG_CLEAN_CACHE_SKILLHandler__ctor_m14967 (CG_CLEAN_CACHE_SKILLHandler_t2320 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CLEAN_CACHE_SKILLHandler::Execute(PacketDistributed)
extern MethodInfo CG_CLEAN_CACHE_SKILLHandler_Execute_m14968_MethodInfo;
 uint32_t CG_CLEAN_CACHE_SKILLHandler_Execute_m14968 (CG_CLEAN_CACHE_SKILLHandler_t2320 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CLEAN_CACHE_SKILL_t3575 * V_0 = {0};
	{
		V_0 = ((CG_CLEAN_CACHE_SKILL_t3575 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CLEAN_CACHE_SKILL_t3575_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CLEAN_CACHE_SKILLHandler
extern TypeInfo CG_CLEAN_CACHE_SKILLHandler_t2320_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CLEAN_CACHE_SKILLHandler::.ctor()
MethodInfo CG_CLEAN_CACHE_SKILLHandler__ctor_m14967_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CLEAN_CACHE_SKILLHandler__ctor_m14967/* method */
	, &CG_CLEAN_CACHE_SKILLHandler_t2320_il2cpp_TypeInfo/* declaring_type */
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
	, 8443/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CLEAN_CACHE_SKILLHandler_t2320_CG_CLEAN_CACHE_SKILLHandler_Execute_m14968_ParameterInfos[] = 
{
	{"ipacket", 0, 134222139, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CLEAN_CACHE_SKILLHandler_t2320_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CLEAN_CACHE_SKILLHandler::Execute(PacketDistributed)
MethodInfo CG_CLEAN_CACHE_SKILLHandler_Execute_m14968_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CLEAN_CACHE_SKILLHandler_Execute_m14968/* method */
	, &CG_CLEAN_CACHE_SKILLHandler_t2320_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CLEAN_CACHE_SKILLHandler_t2320_CG_CLEAN_CACHE_SKILLHandler_Execute_m14968_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8444/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CLEAN_CACHE_SKILLHandler_t2320_MethodInfos[] =
{
	&CG_CLEAN_CACHE_SKILLHandler__ctor_m14967_MethodInfo,
	&CG_CLEAN_CACHE_SKILLHandler_Execute_m14968_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CLEAN_CACHE_SKILLHandler_Execute_m14968_MethodInfo;
static MethodInfo* CG_CLEAN_CACHE_SKILLHandler_t2320_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CLEAN_CACHE_SKILLHandler_Execute_m14968_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CLEAN_CACHE_SKILLHandler_t2320_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CLEAN_CACHE_SKILLHandler_t2320_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CLEAN_CACHE_SKILLHandler_t2320_0_0_0;
extern Il2CppType CG_CLEAN_CACHE_SKILLHandler_t2320_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CLEAN_CACHE_SKILLHandler_t2320;
extern TypeInfo CG_CLEAN_CACHE_SKILLHandler_t2320_il2cpp_TypeInfo;
TypeInfo CG_CLEAN_CACHE_SKILLHandler_t2320_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CLEAN_CACHE_SKILLHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CLEAN_CACHE_SKILLHandler_t2320_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CLEAN_CACHE_SKILLHandler_t2320_il2cpp_TypeInfo/* element_class */
	, CG_CLEAN_CACHE_SKILLHandler_t2320_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CLEAN_CACHE_SKILLHandler_t2320_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CLEAN_CACHE_SKILLHandler_t2320_il2cpp_TypeInfo/* cast_class */
	, &CG_CLEAN_CACHE_SKILLHandler_t2320_0_0_0/* byval_arg */
	, &CG_CLEAN_CACHE_SKILLHandler_t2320_1_0_0/* this_arg */
	, CG_CLEAN_CACHE_SKILLHandler_t2320_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CLEAN_CACHE_SKILLHandler_t2320)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_COMBATVALUE_ASKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_COMBATVALUE_ASKH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_COMBATVALUE_ASKHandler_t2321_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_COMBATVALUE_ASKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_COMBATVALUE_ASKHMethodDeclarations.h"

// CG_COMBATVALUE_ASK
#include "AssemblyU2DCSharp_CG_COMBATVALUE_ASK.h"
extern TypeInfo CG_COMBATVALUE_ASK_t3088_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_COMBATVALUE_ASKHandler::.ctor()
extern MethodInfo CG_COMBATVALUE_ASKHandler__ctor_m14969_MethodInfo;
 void CG_COMBATVALUE_ASKHandler__ctor_m14969 (CG_COMBATVALUE_ASKHandler_t2321 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_COMBATVALUE_ASKHandler::Execute(PacketDistributed)
extern MethodInfo CG_COMBATVALUE_ASKHandler_Execute_m14970_MethodInfo;
 uint32_t CG_COMBATVALUE_ASKHandler_Execute_m14970 (CG_COMBATVALUE_ASKHandler_t2321 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_COMBATVALUE_ASK_t3088 * V_0 = {0};
	{
		V_0 = ((CG_COMBATVALUE_ASK_t3088 *)Castclass(___ipacket, InitializedTypeInfo(&CG_COMBATVALUE_ASK_t3088_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_COMBATVALUE_ASKHandler
extern TypeInfo CG_COMBATVALUE_ASKHandler_t2321_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_COMBATVALUE_ASKHandler::.ctor()
MethodInfo CG_COMBATVALUE_ASKHandler__ctor_m14969_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_COMBATVALUE_ASKHandler__ctor_m14969/* method */
	, &CG_COMBATVALUE_ASKHandler_t2321_il2cpp_TypeInfo/* declaring_type */
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
	, 8445/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_COMBATVALUE_ASKHandler_t2321_CG_COMBATVALUE_ASKHandler_Execute_m14970_ParameterInfos[] = 
{
	{"ipacket", 0, 134222140, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_COMBATVALUE_ASKHandler_t2321_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_COMBATVALUE_ASKHandler::Execute(PacketDistributed)
MethodInfo CG_COMBATVALUE_ASKHandler_Execute_m14970_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_COMBATVALUE_ASKHandler_Execute_m14970/* method */
	, &CG_COMBATVALUE_ASKHandler_t2321_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_COMBATVALUE_ASKHandler_t2321_CG_COMBATVALUE_ASKHandler_Execute_m14970_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8446/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_COMBATVALUE_ASKHandler_t2321_MethodInfos[] =
{
	&CG_COMBATVALUE_ASKHandler__ctor_m14969_MethodInfo,
	&CG_COMBATVALUE_ASKHandler_Execute_m14970_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_COMBATVALUE_ASKHandler_Execute_m14970_MethodInfo;
static MethodInfo* CG_COMBATVALUE_ASKHandler_t2321_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_COMBATVALUE_ASKHandler_Execute_m14970_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_COMBATVALUE_ASKHandler_t2321_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_COMBATVALUE_ASKHandler_t2321_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_COMBATVALUE_ASKHandler_t2321_0_0_0;
extern Il2CppType CG_COMBATVALUE_ASKHandler_t2321_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_COMBATVALUE_ASKHandler_t2321;
extern TypeInfo CG_COMBATVALUE_ASKHandler_t2321_il2cpp_TypeInfo;
TypeInfo CG_COMBATVALUE_ASKHandler_t2321_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_COMBATVALUE_ASKHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_COMBATVALUE_ASKHandler_t2321_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_COMBATVALUE_ASKHandler_t2321_il2cpp_TypeInfo/* element_class */
	, CG_COMBATVALUE_ASKHandler_t2321_InterfacesTypeInfos/* implemented_interfaces */
	, CG_COMBATVALUE_ASKHandler_t2321_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_COMBATVALUE_ASKHandler_t2321_il2cpp_TypeInfo/* cast_class */
	, &CG_COMBATVALUE_ASKHandler_t2321_0_0_0/* byval_arg */
	, &CG_COMBATVALUE_ASKHandler_t2321_1_0_0/* this_arg */
	, CG_COMBATVALUE_ASKHandler_t2321_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_COMBATVALUE_ASKHandler_t2321)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_COMPLETEMISSIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_COMPLETEMISSIONH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_COMPLETEMISSIONHandler_t2322_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_COMPLETEMISSIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_COMPLETEMISSIONHMethodDeclarations.h"

// CG_COMPLETEMISSION
#include "AssemblyU2DCSharp_CG_COMPLETEMISSION.h"
extern TypeInfo CG_COMPLETEMISSION_t2937_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_COMPLETEMISSIONHandler::.ctor()
extern MethodInfo CG_COMPLETEMISSIONHandler__ctor_m14971_MethodInfo;
 void CG_COMPLETEMISSIONHandler__ctor_m14971 (CG_COMPLETEMISSIONHandler_t2322 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_COMPLETEMISSIONHandler::Execute(PacketDistributed)
extern MethodInfo CG_COMPLETEMISSIONHandler_Execute_m14972_MethodInfo;
 uint32_t CG_COMPLETEMISSIONHandler_Execute_m14972 (CG_COMPLETEMISSIONHandler_t2322 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_COMPLETEMISSION_t2937 * V_0 = {0};
	{
		V_0 = ((CG_COMPLETEMISSION_t2937 *)Castclass(___ipacket, InitializedTypeInfo(&CG_COMPLETEMISSION_t2937_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_COMPLETEMISSIONHandler
extern TypeInfo CG_COMPLETEMISSIONHandler_t2322_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_COMPLETEMISSIONHandler::.ctor()
MethodInfo CG_COMPLETEMISSIONHandler__ctor_m14971_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_COMPLETEMISSIONHandler__ctor_m14971/* method */
	, &CG_COMPLETEMISSIONHandler_t2322_il2cpp_TypeInfo/* declaring_type */
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
	, 8447/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_COMPLETEMISSIONHandler_t2322_CG_COMPLETEMISSIONHandler_Execute_m14972_ParameterInfos[] = 
{
	{"ipacket", 0, 134222141, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_COMPLETEMISSIONHandler_t2322_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_COMPLETEMISSIONHandler::Execute(PacketDistributed)
MethodInfo CG_COMPLETEMISSIONHandler_Execute_m14972_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_COMPLETEMISSIONHandler_Execute_m14972/* method */
	, &CG_COMPLETEMISSIONHandler_t2322_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_COMPLETEMISSIONHandler_t2322_CG_COMPLETEMISSIONHandler_Execute_m14972_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8448/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_COMPLETEMISSIONHandler_t2322_MethodInfos[] =
{
	&CG_COMPLETEMISSIONHandler__ctor_m14971_MethodInfo,
	&CG_COMPLETEMISSIONHandler_Execute_m14972_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_COMPLETEMISSIONHandler_Execute_m14972_MethodInfo;
static MethodInfo* CG_COMPLETEMISSIONHandler_t2322_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_COMPLETEMISSIONHandler_Execute_m14972_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_COMPLETEMISSIONHandler_t2322_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_COMPLETEMISSIONHandler_t2322_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_COMPLETEMISSIONHandler_t2322_0_0_0;
extern Il2CppType CG_COMPLETEMISSIONHandler_t2322_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_COMPLETEMISSIONHandler_t2322;
extern TypeInfo CG_COMPLETEMISSIONHandler_t2322_il2cpp_TypeInfo;
TypeInfo CG_COMPLETEMISSIONHandler_t2322_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_COMPLETEMISSIONHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_COMPLETEMISSIONHandler_t2322_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_COMPLETEMISSIONHandler_t2322_il2cpp_TypeInfo/* element_class */
	, CG_COMPLETEMISSIONHandler_t2322_InterfacesTypeInfos/* implemented_interfaces */
	, CG_COMPLETEMISSIONHandler_t2322_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_COMPLETEMISSIONHandler_t2322_il2cpp_TypeInfo/* cast_class */
	, &CG_COMPLETEMISSIONHandler_t2322_0_0_0/* byval_arg */
	, &CG_COMPLETEMISSIONHandler_t2322_1_0_0/* this_arg */
	, CG_COMPLETEMISSIONHandler_t2322_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_COMPLETEMISSIONHandler_t2322)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CONNECTED_HEARTBEATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CONNECTED_HEARTB.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CONNECTED_HEARTBEATHandler_t2323_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CONNECTED_HEARTBEATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CONNECTED_HEARTBMethodDeclarations.h"

// CG_CONNECTED_HEARTBEAT
#include "AssemblyU2DCSharp_CG_CONNECTED_HEARTBEAT.h"
extern TypeInfo CG_CONNECTED_HEARTBEAT_t2929_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CONNECTED_HEARTBEATHandler::.ctor()
extern MethodInfo CG_CONNECTED_HEARTBEATHandler__ctor_m14973_MethodInfo;
 void CG_CONNECTED_HEARTBEATHandler__ctor_m14973 (CG_CONNECTED_HEARTBEATHandler_t2323 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CONNECTED_HEARTBEATHandler::Execute(PacketDistributed)
extern MethodInfo CG_CONNECTED_HEARTBEATHandler_Execute_m14974_MethodInfo;
 uint32_t CG_CONNECTED_HEARTBEATHandler_Execute_m14974 (CG_CONNECTED_HEARTBEATHandler_t2323 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CONNECTED_HEARTBEAT_t2929 * V_0 = {0};
	{
		V_0 = ((CG_CONNECTED_HEARTBEAT_t2929 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CONNECTED_HEARTBEAT_t2929_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CONNECTED_HEARTBEATHandler
extern TypeInfo CG_CONNECTED_HEARTBEATHandler_t2323_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CONNECTED_HEARTBEATHandler::.ctor()
MethodInfo CG_CONNECTED_HEARTBEATHandler__ctor_m14973_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CONNECTED_HEARTBEATHandler__ctor_m14973/* method */
	, &CG_CONNECTED_HEARTBEATHandler_t2323_il2cpp_TypeInfo/* declaring_type */
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
	, 8449/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CONNECTED_HEARTBEATHandler_t2323_CG_CONNECTED_HEARTBEATHandler_Execute_m14974_ParameterInfos[] = 
{
	{"ipacket", 0, 134222142, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CONNECTED_HEARTBEATHandler_t2323_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CONNECTED_HEARTBEATHandler::Execute(PacketDistributed)
MethodInfo CG_CONNECTED_HEARTBEATHandler_Execute_m14974_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CONNECTED_HEARTBEATHandler_Execute_m14974/* method */
	, &CG_CONNECTED_HEARTBEATHandler_t2323_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CONNECTED_HEARTBEATHandler_t2323_CG_CONNECTED_HEARTBEATHandler_Execute_m14974_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8450/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CONNECTED_HEARTBEATHandler_t2323_MethodInfos[] =
{
	&CG_CONNECTED_HEARTBEATHandler__ctor_m14973_MethodInfo,
	&CG_CONNECTED_HEARTBEATHandler_Execute_m14974_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CONNECTED_HEARTBEATHandler_Execute_m14974_MethodInfo;
static MethodInfo* CG_CONNECTED_HEARTBEATHandler_t2323_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CONNECTED_HEARTBEATHandler_Execute_m14974_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CONNECTED_HEARTBEATHandler_t2323_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CONNECTED_HEARTBEATHandler_t2323_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CONNECTED_HEARTBEATHandler_t2323_0_0_0;
extern Il2CppType CG_CONNECTED_HEARTBEATHandler_t2323_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CONNECTED_HEARTBEATHandler_t2323;
extern TypeInfo CG_CONNECTED_HEARTBEATHandler_t2323_il2cpp_TypeInfo;
TypeInfo CG_CONNECTED_HEARTBEATHandler_t2323_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CONNECTED_HEARTBEATHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CONNECTED_HEARTBEATHandler_t2323_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CONNECTED_HEARTBEATHandler_t2323_il2cpp_TypeInfo/* element_class */
	, CG_CONNECTED_HEARTBEATHandler_t2323_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CONNECTED_HEARTBEATHandler_t2323_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CONNECTED_HEARTBEATHandler_t2323_il2cpp_TypeInfo/* cast_class */
	, &CG_CONNECTED_HEARTBEATHandler_t2323_0_0_0/* byval_arg */
	, &CG_CONNECTED_HEARTBEATHandler_t2323_1_0_0/* this_arg */
	, CG_CONNECTED_HEARTBEATHandler_t2323_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CONNECTED_HEARTBEATHandler_t2323)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CONSIGNSALEITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CONSIGNSALEITEMH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CONSIGNSALEITEMHandler_t2324_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CONSIGNSALEITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CONSIGNSALEITEMHMethodDeclarations.h"

// CG_CONSIGNSALEITEM
#include "AssemblyU2DCSharp_CG_CONSIGNSALEITEM.h"
extern TypeInfo CG_CONSIGNSALEITEM_t3195_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CONSIGNSALEITEMHandler::.ctor()
extern MethodInfo CG_CONSIGNSALEITEMHandler__ctor_m14975_MethodInfo;
 void CG_CONSIGNSALEITEMHandler__ctor_m14975 (CG_CONSIGNSALEITEMHandler_t2324 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CONSIGNSALEITEMHandler::Execute(PacketDistributed)
extern MethodInfo CG_CONSIGNSALEITEMHandler_Execute_m14976_MethodInfo;
 uint32_t CG_CONSIGNSALEITEMHandler_Execute_m14976 (CG_CONSIGNSALEITEMHandler_t2324 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CONSIGNSALEITEM_t3195 * V_0 = {0};
	{
		V_0 = ((CG_CONSIGNSALEITEM_t3195 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CONSIGNSALEITEM_t3195_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CONSIGNSALEITEMHandler
extern TypeInfo CG_CONSIGNSALEITEMHandler_t2324_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CONSIGNSALEITEMHandler::.ctor()
MethodInfo CG_CONSIGNSALEITEMHandler__ctor_m14975_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CONSIGNSALEITEMHandler__ctor_m14975/* method */
	, &CG_CONSIGNSALEITEMHandler_t2324_il2cpp_TypeInfo/* declaring_type */
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
	, 8451/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CONSIGNSALEITEMHandler_t2324_CG_CONSIGNSALEITEMHandler_Execute_m14976_ParameterInfos[] = 
{
	{"ipacket", 0, 134222143, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CONSIGNSALEITEMHandler_t2324_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CONSIGNSALEITEMHandler::Execute(PacketDistributed)
MethodInfo CG_CONSIGNSALEITEMHandler_Execute_m14976_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CONSIGNSALEITEMHandler_Execute_m14976/* method */
	, &CG_CONSIGNSALEITEMHandler_t2324_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CONSIGNSALEITEMHandler_t2324_CG_CONSIGNSALEITEMHandler_Execute_m14976_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8452/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CONSIGNSALEITEMHandler_t2324_MethodInfos[] =
{
	&CG_CONSIGNSALEITEMHandler__ctor_m14975_MethodInfo,
	&CG_CONSIGNSALEITEMHandler_Execute_m14976_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CONSIGNSALEITEMHandler_Execute_m14976_MethodInfo;
static MethodInfo* CG_CONSIGNSALEITEMHandler_t2324_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CONSIGNSALEITEMHandler_Execute_m14976_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CONSIGNSALEITEMHandler_t2324_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CONSIGNSALEITEMHandler_t2324_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CONSIGNSALEITEMHandler_t2324_0_0_0;
extern Il2CppType CG_CONSIGNSALEITEMHandler_t2324_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CONSIGNSALEITEMHandler_t2324;
extern TypeInfo CG_CONSIGNSALEITEMHandler_t2324_il2cpp_TypeInfo;
TypeInfo CG_CONSIGNSALEITEMHandler_t2324_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CONSIGNSALEITEMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CONSIGNSALEITEMHandler_t2324_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CONSIGNSALEITEMHandler_t2324_il2cpp_TypeInfo/* element_class */
	, CG_CONSIGNSALEITEMHandler_t2324_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CONSIGNSALEITEMHandler_t2324_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CONSIGNSALEITEMHandler_t2324_il2cpp_TypeInfo/* cast_class */
	, &CG_CONSIGNSALEITEMHandler_t2324_0_0_0/* byval_arg */
	, &CG_CONSIGNSALEITEMHandler_t2324_1_0_0/* this_arg */
	, CG_CONSIGNSALEITEMHandler_t2324_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CONSIGNSALEITEMHandler_t2324)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_COPYSCENERESETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_COPYSCENERESETHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_COPYSCENERESETHandler_t2325_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_COPYSCENERESETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_COPYSCENERESETHaMethodDeclarations.h"

// CG_COPYSCENERESET
#include "AssemblyU2DCSharp_CG_COPYSCENERESET.h"
extern TypeInfo CG_COPYSCENERESET_t3292_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_COPYSCENERESETHandler::.ctor()
extern MethodInfo CG_COPYSCENERESETHandler__ctor_m14977_MethodInfo;
 void CG_COPYSCENERESETHandler__ctor_m14977 (CG_COPYSCENERESETHandler_t2325 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_COPYSCENERESETHandler::Execute(PacketDistributed)
extern MethodInfo CG_COPYSCENERESETHandler_Execute_m14978_MethodInfo;
 uint32_t CG_COPYSCENERESETHandler_Execute_m14978 (CG_COPYSCENERESETHandler_t2325 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_COPYSCENERESET_t3292 * V_0 = {0};
	{
		V_0 = ((CG_COPYSCENERESET_t3292 *)Castclass(___ipacket, InitializedTypeInfo(&CG_COPYSCENERESET_t3292_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_COPYSCENERESETHandler
extern TypeInfo CG_COPYSCENERESETHandler_t2325_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_COPYSCENERESETHandler::.ctor()
MethodInfo CG_COPYSCENERESETHandler__ctor_m14977_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_COPYSCENERESETHandler__ctor_m14977/* method */
	, &CG_COPYSCENERESETHandler_t2325_il2cpp_TypeInfo/* declaring_type */
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
	, 8453/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_COPYSCENERESETHandler_t2325_CG_COPYSCENERESETHandler_Execute_m14978_ParameterInfos[] = 
{
	{"ipacket", 0, 134222144, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_COPYSCENERESETHandler_t2325_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_COPYSCENERESETHandler::Execute(PacketDistributed)
MethodInfo CG_COPYSCENERESETHandler_Execute_m14978_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_COPYSCENERESETHandler_Execute_m14978/* method */
	, &CG_COPYSCENERESETHandler_t2325_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_COPYSCENERESETHandler_t2325_CG_COPYSCENERESETHandler_Execute_m14978_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8454/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_COPYSCENERESETHandler_t2325_MethodInfos[] =
{
	&CG_COPYSCENERESETHandler__ctor_m14977_MethodInfo,
	&CG_COPYSCENERESETHandler_Execute_m14978_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_COPYSCENERESETHandler_Execute_m14978_MethodInfo;
static MethodInfo* CG_COPYSCENERESETHandler_t2325_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_COPYSCENERESETHandler_Execute_m14978_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_COPYSCENERESETHandler_t2325_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_COPYSCENERESETHandler_t2325_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_COPYSCENERESETHandler_t2325_0_0_0;
extern Il2CppType CG_COPYSCENERESETHandler_t2325_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_COPYSCENERESETHandler_t2325;
extern TypeInfo CG_COPYSCENERESETHandler_t2325_il2cpp_TypeInfo;
TypeInfo CG_COPYSCENERESETHandler_t2325_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_COPYSCENERESETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_COPYSCENERESETHandler_t2325_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_COPYSCENERESETHandler_t2325_il2cpp_TypeInfo/* element_class */
	, CG_COPYSCENERESETHandler_t2325_InterfacesTypeInfos/* implemented_interfaces */
	, CG_COPYSCENERESETHandler_t2325_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_COPYSCENERESETHandler_t2325_il2cpp_TypeInfo/* cast_class */
	, &CG_COPYSCENERESETHandler_t2325_0_0_0/* byval_arg */
	, &CG_COPYSCENERESETHandler_t2325_1_0_0/* this_arg */
	, CG_COPYSCENERESETHandler_t2325_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_COPYSCENERESETHandler_t2325)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_COPYSCENE_INVITE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_COPYSCENE_INVITE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_COPYSCENE_INVITE_RETHandler_t2326_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_COPYSCENE_INVITE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_COPYSCENE_INVITEMethodDeclarations.h"

// CG_COPYSCENE_INVITE_RET
#include "AssemblyU2DCSharp_CG_COPYSCENE_INVITE_RET.h"
extern TypeInfo CG_COPYSCENE_INVITE_RET_t3080_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_COPYSCENE_INVITE_RETHandler::.ctor()
extern MethodInfo CG_COPYSCENE_INVITE_RETHandler__ctor_m14979_MethodInfo;
 void CG_COPYSCENE_INVITE_RETHandler__ctor_m14979 (CG_COPYSCENE_INVITE_RETHandler_t2326 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_COPYSCENE_INVITE_RETHandler::Execute(PacketDistributed)
extern MethodInfo CG_COPYSCENE_INVITE_RETHandler_Execute_m14980_MethodInfo;
 uint32_t CG_COPYSCENE_INVITE_RETHandler_Execute_m14980 (CG_COPYSCENE_INVITE_RETHandler_t2326 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_COPYSCENE_INVITE_RET_t3080 * V_0 = {0};
	{
		V_0 = ((CG_COPYSCENE_INVITE_RET_t3080 *)Castclass(___ipacket, InitializedTypeInfo(&CG_COPYSCENE_INVITE_RET_t3080_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_COPYSCENE_INVITE_RETHandler
extern TypeInfo CG_COPYSCENE_INVITE_RETHandler_t2326_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_COPYSCENE_INVITE_RETHandler::.ctor()
MethodInfo CG_COPYSCENE_INVITE_RETHandler__ctor_m14979_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_COPYSCENE_INVITE_RETHandler__ctor_m14979/* method */
	, &CG_COPYSCENE_INVITE_RETHandler_t2326_il2cpp_TypeInfo/* declaring_type */
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
	, 8455/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_COPYSCENE_INVITE_RETHandler_t2326_CG_COPYSCENE_INVITE_RETHandler_Execute_m14980_ParameterInfos[] = 
{
	{"ipacket", 0, 134222145, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_COPYSCENE_INVITE_RETHandler_t2326_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_COPYSCENE_INVITE_RETHandler::Execute(PacketDistributed)
MethodInfo CG_COPYSCENE_INVITE_RETHandler_Execute_m14980_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_COPYSCENE_INVITE_RETHandler_Execute_m14980/* method */
	, &CG_COPYSCENE_INVITE_RETHandler_t2326_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_COPYSCENE_INVITE_RETHandler_t2326_CG_COPYSCENE_INVITE_RETHandler_Execute_m14980_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8456/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_COPYSCENE_INVITE_RETHandler_t2326_MethodInfos[] =
{
	&CG_COPYSCENE_INVITE_RETHandler__ctor_m14979_MethodInfo,
	&CG_COPYSCENE_INVITE_RETHandler_Execute_m14980_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_COPYSCENE_INVITE_RETHandler_Execute_m14980_MethodInfo;
static MethodInfo* CG_COPYSCENE_INVITE_RETHandler_t2326_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_COPYSCENE_INVITE_RETHandler_Execute_m14980_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_COPYSCENE_INVITE_RETHandler_t2326_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_COPYSCENE_INVITE_RETHandler_t2326_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_COPYSCENE_INVITE_RETHandler_t2326_0_0_0;
extern Il2CppType CG_COPYSCENE_INVITE_RETHandler_t2326_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_COPYSCENE_INVITE_RETHandler_t2326;
extern TypeInfo CG_COPYSCENE_INVITE_RETHandler_t2326_il2cpp_TypeInfo;
TypeInfo CG_COPYSCENE_INVITE_RETHandler_t2326_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_COPYSCENE_INVITE_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_COPYSCENE_INVITE_RETHandler_t2326_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_COPYSCENE_INVITE_RETHandler_t2326_il2cpp_TypeInfo/* element_class */
	, CG_COPYSCENE_INVITE_RETHandler_t2326_InterfacesTypeInfos/* implemented_interfaces */
	, CG_COPYSCENE_INVITE_RETHandler_t2326_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_COPYSCENE_INVITE_RETHandler_t2326_il2cpp_TypeInfo/* cast_class */
	, &CG_COPYSCENE_INVITE_RETHandler_t2326_0_0_0/* byval_arg */
	, &CG_COPYSCENE_INVITE_RETHandler_t2326_1_0_0/* this_arg */
	, CG_COPYSCENE_INVITE_RETHandler_t2326_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_COPYSCENE_INVITE_RETHandler_t2326)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CREATEROLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CREATEROLEHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CREATEROLEHandler_t2327_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CREATEROLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CREATEROLEHandleMethodDeclarations.h"

// CG_CREATEROLE
#include "AssemblyU2DCSharp_CG_CREATEROLE.h"
extern TypeInfo CG_CREATEROLE_t2979_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CREATEROLEHandler::.ctor()
extern MethodInfo CG_CREATEROLEHandler__ctor_m14981_MethodInfo;
 void CG_CREATEROLEHandler__ctor_m14981 (CG_CREATEROLEHandler_t2327 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CREATEROLEHandler::Execute(PacketDistributed)
extern MethodInfo CG_CREATEROLEHandler_Execute_m14982_MethodInfo;
 uint32_t CG_CREATEROLEHandler_Execute_m14982 (CG_CREATEROLEHandler_t2327 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CREATEROLE_t2979 * V_0 = {0};
	{
		V_0 = ((CG_CREATEROLE_t2979 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CREATEROLE_t2979_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CREATEROLEHandler
extern TypeInfo CG_CREATEROLEHandler_t2327_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CREATEROLEHandler::.ctor()
MethodInfo CG_CREATEROLEHandler__ctor_m14981_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CREATEROLEHandler__ctor_m14981/* method */
	, &CG_CREATEROLEHandler_t2327_il2cpp_TypeInfo/* declaring_type */
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
	, 8457/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CREATEROLEHandler_t2327_CG_CREATEROLEHandler_Execute_m14982_ParameterInfos[] = 
{
	{"ipacket", 0, 134222146, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CREATEROLEHandler_t2327_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CREATEROLEHandler::Execute(PacketDistributed)
MethodInfo CG_CREATEROLEHandler_Execute_m14982_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CREATEROLEHandler_Execute_m14982/* method */
	, &CG_CREATEROLEHandler_t2327_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CREATEROLEHandler_t2327_CG_CREATEROLEHandler_Execute_m14982_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8458/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CREATEROLEHandler_t2327_MethodInfos[] =
{
	&CG_CREATEROLEHandler__ctor_m14981_MethodInfo,
	&CG_CREATEROLEHandler_Execute_m14982_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CREATEROLEHandler_Execute_m14982_MethodInfo;
static MethodInfo* CG_CREATEROLEHandler_t2327_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CREATEROLEHandler_Execute_m14982_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CREATEROLEHandler_t2327_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CREATEROLEHandler_t2327_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CREATEROLEHandler_t2327_0_0_0;
extern Il2CppType CG_CREATEROLEHandler_t2327_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CREATEROLEHandler_t2327;
extern TypeInfo CG_CREATEROLEHandler_t2327_il2cpp_TypeInfo;
TypeInfo CG_CREATEROLEHandler_t2327_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CREATEROLEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CREATEROLEHandler_t2327_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CREATEROLEHandler_t2327_il2cpp_TypeInfo/* element_class */
	, CG_CREATEROLEHandler_t2327_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CREATEROLEHandler_t2327_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CREATEROLEHandler_t2327_il2cpp_TypeInfo/* cast_class */
	, &CG_CREATEROLEHandler_t2327_0_0_0/* byval_arg */
	, &CG_CREATEROLEHandler_t2327_1_0_0/* this_arg */
	, CG_CREATEROLEHandler_t2327_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CREATEROLEHandler_t2327)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CUTSCENE_RFCHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CUTSCENE_RFCHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CUTSCENE_RFCHandler_t2328_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CUTSCENE_RFCHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CUTSCENE_RFCHandMethodDeclarations.h"

// CG_CUTSCENE_RFC
#include "AssemblyU2DCSharp_CG_CUTSCENE_RFC.h"
extern TypeInfo CG_CUTSCENE_RFC_t3573_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CUTSCENE_RFCHandler::.ctor()
extern MethodInfo CG_CUTSCENE_RFCHandler__ctor_m14983_MethodInfo;
 void CG_CUTSCENE_RFCHandler__ctor_m14983 (CG_CUTSCENE_RFCHandler_t2328 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CUTSCENE_RFCHandler::Execute(PacketDistributed)
extern MethodInfo CG_CUTSCENE_RFCHandler_Execute_m14984_MethodInfo;
 uint32_t CG_CUTSCENE_RFCHandler_Execute_m14984 (CG_CUTSCENE_RFCHandler_t2328 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CUTSCENE_RFC_t3573 * V_0 = {0};
	{
		V_0 = ((CG_CUTSCENE_RFC_t3573 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CUTSCENE_RFC_t3573_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CUTSCENE_RFCHandler
extern TypeInfo CG_CUTSCENE_RFCHandler_t2328_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CUTSCENE_RFCHandler::.ctor()
MethodInfo CG_CUTSCENE_RFCHandler__ctor_m14983_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CUTSCENE_RFCHandler__ctor_m14983/* method */
	, &CG_CUTSCENE_RFCHandler_t2328_il2cpp_TypeInfo/* declaring_type */
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
	, 8459/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CUTSCENE_RFCHandler_t2328_CG_CUTSCENE_RFCHandler_Execute_m14984_ParameterInfos[] = 
{
	{"ipacket", 0, 134222147, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CUTSCENE_RFCHandler_t2328_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CUTSCENE_RFCHandler::Execute(PacketDistributed)
MethodInfo CG_CUTSCENE_RFCHandler_Execute_m14984_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CUTSCENE_RFCHandler_Execute_m14984/* method */
	, &CG_CUTSCENE_RFCHandler_t2328_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CUTSCENE_RFCHandler_t2328_CG_CUTSCENE_RFCHandler_Execute_m14984_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8460/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CUTSCENE_RFCHandler_t2328_MethodInfos[] =
{
	&CG_CUTSCENE_RFCHandler__ctor_m14983_MethodInfo,
	&CG_CUTSCENE_RFCHandler_Execute_m14984_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CUTSCENE_RFCHandler_Execute_m14984_MethodInfo;
static MethodInfo* CG_CUTSCENE_RFCHandler_t2328_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CUTSCENE_RFCHandler_Execute_m14984_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CUTSCENE_RFCHandler_t2328_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CUTSCENE_RFCHandler_t2328_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CUTSCENE_RFCHandler_t2328_0_0_0;
extern Il2CppType CG_CUTSCENE_RFCHandler_t2328_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CUTSCENE_RFCHandler_t2328;
extern TypeInfo CG_CUTSCENE_RFCHandler_t2328_il2cpp_TypeInfo;
TypeInfo CG_CUTSCENE_RFCHandler_t2328_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CUTSCENE_RFCHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CUTSCENE_RFCHandler_t2328_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CUTSCENE_RFCHandler_t2328_il2cpp_TypeInfo/* element_class */
	, CG_CUTSCENE_RFCHandler_t2328_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CUTSCENE_RFCHandler_t2328_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CUTSCENE_RFCHandler_t2328_il2cpp_TypeInfo/* cast_class */
	, &CG_CUTSCENE_RFCHandler_t2328_0_0_0/* byval_arg */
	, &CG_CUTSCENE_RFCHandler_t2328_1_0_0/* this_arg */
	, CG_CUTSCENE_RFCHandler_t2328_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CUTSCENE_RFCHandler_t2328)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_CYPAY_SUCCESSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CYPAY_SUCCESSHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_CYPAY_SUCCESSHandler_t2329_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_CYPAY_SUCCESSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_CYPAY_SUCCESSHanMethodDeclarations.h"

// CG_CYPAY_SUCCESS
#include "AssemblyU2DCSharp_CG_CYPAY_SUCCESS.h"
extern TypeInfo CG_CYPAY_SUCCESS_t3327_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_CYPAY_SUCCESSHandler::.ctor()
extern MethodInfo CG_CYPAY_SUCCESSHandler__ctor_m14985_MethodInfo;
 void CG_CYPAY_SUCCESSHandler__ctor_m14985 (CG_CYPAY_SUCCESSHandler_t2329 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_CYPAY_SUCCESSHandler::Execute(PacketDistributed)
extern MethodInfo CG_CYPAY_SUCCESSHandler_Execute_m14986_MethodInfo;
 uint32_t CG_CYPAY_SUCCESSHandler_Execute_m14986 (CG_CYPAY_SUCCESSHandler_t2329 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_CYPAY_SUCCESS_t3327 * V_0 = {0};
	{
		V_0 = ((CG_CYPAY_SUCCESS_t3327 *)Castclass(___ipacket, InitializedTypeInfo(&CG_CYPAY_SUCCESS_t3327_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_CYPAY_SUCCESSHandler
extern TypeInfo CG_CYPAY_SUCCESSHandler_t2329_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_CYPAY_SUCCESSHandler::.ctor()
MethodInfo CG_CYPAY_SUCCESSHandler__ctor_m14985_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_CYPAY_SUCCESSHandler__ctor_m14985/* method */
	, &CG_CYPAY_SUCCESSHandler_t2329_il2cpp_TypeInfo/* declaring_type */
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
	, 8461/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_CYPAY_SUCCESSHandler_t2329_CG_CYPAY_SUCCESSHandler_Execute_m14986_ParameterInfos[] = 
{
	{"ipacket", 0, 134222148, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_CYPAY_SUCCESSHandler_t2329_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_CYPAY_SUCCESSHandler::Execute(PacketDistributed)
MethodInfo CG_CYPAY_SUCCESSHandler_Execute_m14986_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_CYPAY_SUCCESSHandler_Execute_m14986/* method */
	, &CG_CYPAY_SUCCESSHandler_t2329_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_CYPAY_SUCCESSHandler_t2329_CG_CYPAY_SUCCESSHandler_Execute_m14986_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8462/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_CYPAY_SUCCESSHandler_t2329_MethodInfos[] =
{
	&CG_CYPAY_SUCCESSHandler__ctor_m14985_MethodInfo,
	&CG_CYPAY_SUCCESSHandler_Execute_m14986_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_CYPAY_SUCCESSHandler_Execute_m14986_MethodInfo;
static MethodInfo* CG_CYPAY_SUCCESSHandler_t2329_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_CYPAY_SUCCESSHandler_Execute_m14986_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_CYPAY_SUCCESSHandler_t2329_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_CYPAY_SUCCESSHandler_t2329_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_CYPAY_SUCCESSHandler_t2329_0_0_0;
extern Il2CppType CG_CYPAY_SUCCESSHandler_t2329_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_CYPAY_SUCCESSHandler_t2329;
extern TypeInfo CG_CYPAY_SUCCESSHandler_t2329_il2cpp_TypeInfo;
TypeInfo CG_CYPAY_SUCCESSHandler_t2329_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_CYPAY_SUCCESSHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_CYPAY_SUCCESSHandler_t2329_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_CYPAY_SUCCESSHandler_t2329_il2cpp_TypeInfo/* element_class */
	, CG_CYPAY_SUCCESSHandler_t2329_InterfacesTypeInfos/* implemented_interfaces */
	, CG_CYPAY_SUCCESSHandler_t2329_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_CYPAY_SUCCESSHandler_t2329_il2cpp_TypeInfo/* cast_class */
	, &CG_CYPAY_SUCCESSHandler_t2329_0_0_0/* byval_arg */
	, &CG_CYPAY_SUCCESSHandler_t2329_1_0_0/* this_arg */
	, CG_CYPAY_SUCCESSHandler_t2329_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_CYPAY_SUCCESSHandler_t2329)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_DAILYLUCKYDRAW_DRAWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DAILYLUCKYDRAW_D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_DAILYLUCKYDRAW_DRAWHandler_t2330_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_DAILYLUCKYDRAW_DRAWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DAILYLUCKYDRAW_DMethodDeclarations.h"

// CG_DAILYLUCKYDRAW_DRAW
#include "AssemblyU2DCSharp_CG_DAILYLUCKYDRAW_DRAW.h"
extern TypeInfo CG_DAILYLUCKYDRAW_DRAW_t3208_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_DAILYLUCKYDRAW_DRAWHandler::.ctor()
extern MethodInfo CG_DAILYLUCKYDRAW_DRAWHandler__ctor_m14987_MethodInfo;
 void CG_DAILYLUCKYDRAW_DRAWHandler__ctor_m14987 (CG_DAILYLUCKYDRAW_DRAWHandler_t2330 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_DAILYLUCKYDRAW_DRAWHandler::Execute(PacketDistributed)
extern MethodInfo CG_DAILYLUCKYDRAW_DRAWHandler_Execute_m14988_MethodInfo;
 uint32_t CG_DAILYLUCKYDRAW_DRAWHandler_Execute_m14988 (CG_DAILYLUCKYDRAW_DRAWHandler_t2330 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_DAILYLUCKYDRAW_DRAW_t3208 * V_0 = {0};
	{
		V_0 = ((CG_DAILYLUCKYDRAW_DRAW_t3208 *)Castclass(___ipacket, InitializedTypeInfo(&CG_DAILYLUCKYDRAW_DRAW_t3208_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_DAILYLUCKYDRAW_DRAWHandler
extern TypeInfo CG_DAILYLUCKYDRAW_DRAWHandler_t2330_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_DAILYLUCKYDRAW_DRAWHandler::.ctor()
MethodInfo CG_DAILYLUCKYDRAW_DRAWHandler__ctor_m14987_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_DAILYLUCKYDRAW_DRAWHandler__ctor_m14987/* method */
	, &CG_DAILYLUCKYDRAW_DRAWHandler_t2330_il2cpp_TypeInfo/* declaring_type */
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
	, 8463/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_DAILYLUCKYDRAW_DRAWHandler_t2330_CG_DAILYLUCKYDRAW_DRAWHandler_Execute_m14988_ParameterInfos[] = 
{
	{"ipacket", 0, 134222149, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_DAILYLUCKYDRAW_DRAWHandler_t2330_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_DAILYLUCKYDRAW_DRAWHandler::Execute(PacketDistributed)
MethodInfo CG_DAILYLUCKYDRAW_DRAWHandler_Execute_m14988_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_DAILYLUCKYDRAW_DRAWHandler_Execute_m14988/* method */
	, &CG_DAILYLUCKYDRAW_DRAWHandler_t2330_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_DAILYLUCKYDRAW_DRAWHandler_t2330_CG_DAILYLUCKYDRAW_DRAWHandler_Execute_m14988_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8464/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_DAILYLUCKYDRAW_DRAWHandler_t2330_MethodInfos[] =
{
	&CG_DAILYLUCKYDRAW_DRAWHandler__ctor_m14987_MethodInfo,
	&CG_DAILYLUCKYDRAW_DRAWHandler_Execute_m14988_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_DAILYLUCKYDRAW_DRAWHandler_Execute_m14988_MethodInfo;
static MethodInfo* CG_DAILYLUCKYDRAW_DRAWHandler_t2330_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_DAILYLUCKYDRAW_DRAWHandler_Execute_m14988_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_DAILYLUCKYDRAW_DRAWHandler_t2330_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_DAILYLUCKYDRAW_DRAWHandler_t2330_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_DAILYLUCKYDRAW_DRAWHandler_t2330_0_0_0;
extern Il2CppType CG_DAILYLUCKYDRAW_DRAWHandler_t2330_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_DAILYLUCKYDRAW_DRAWHandler_t2330;
extern TypeInfo CG_DAILYLUCKYDRAW_DRAWHandler_t2330_il2cpp_TypeInfo;
TypeInfo CG_DAILYLUCKYDRAW_DRAWHandler_t2330_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_DAILYLUCKYDRAW_DRAWHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_DAILYLUCKYDRAW_DRAWHandler_t2330_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_DAILYLUCKYDRAW_DRAWHandler_t2330_il2cpp_TypeInfo/* element_class */
	, CG_DAILYLUCKYDRAW_DRAWHandler_t2330_InterfacesTypeInfos/* implemented_interfaces */
	, CG_DAILYLUCKYDRAW_DRAWHandler_t2330_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_DAILYLUCKYDRAW_DRAWHandler_t2330_il2cpp_TypeInfo/* cast_class */
	, &CG_DAILYLUCKYDRAW_DRAWHandler_t2330_0_0_0/* byval_arg */
	, &CG_DAILYLUCKYDRAW_DRAWHandler_t2330_1_0_0/* this_arg */
	, CG_DAILYLUCKYDRAW_DRAWHandler_t2330_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_DAILYLUCKYDRAW_DRAWHandler_t2330)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_DAILYMISSION_UPDATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DAILYMISSION_UPD.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_DAILYMISSION_UPDATEHandler_t2331_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_DAILYMISSION_UPDATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DAILYMISSION_UPDMethodDeclarations.h"

// CG_DAILYMISSION_UPDATE
#include "AssemblyU2DCSharp_CG_DAILYMISSION_UPDATE.h"
extern TypeInfo CG_DAILYMISSION_UPDATE_t3162_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_DAILYMISSION_UPDATEHandler::.ctor()
extern MethodInfo CG_DAILYMISSION_UPDATEHandler__ctor_m14989_MethodInfo;
 void CG_DAILYMISSION_UPDATEHandler__ctor_m14989 (CG_DAILYMISSION_UPDATEHandler_t2331 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_DAILYMISSION_UPDATEHandler::Execute(PacketDistributed)
extern MethodInfo CG_DAILYMISSION_UPDATEHandler_Execute_m14990_MethodInfo;
 uint32_t CG_DAILYMISSION_UPDATEHandler_Execute_m14990 (CG_DAILYMISSION_UPDATEHandler_t2331 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_DAILYMISSION_UPDATE_t3162 * V_0 = {0};
	{
		V_0 = ((CG_DAILYMISSION_UPDATE_t3162 *)Castclass(___ipacket, InitializedTypeInfo(&CG_DAILYMISSION_UPDATE_t3162_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_DAILYMISSION_UPDATEHandler
extern TypeInfo CG_DAILYMISSION_UPDATEHandler_t2331_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_DAILYMISSION_UPDATEHandler::.ctor()
MethodInfo CG_DAILYMISSION_UPDATEHandler__ctor_m14989_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_DAILYMISSION_UPDATEHandler__ctor_m14989/* method */
	, &CG_DAILYMISSION_UPDATEHandler_t2331_il2cpp_TypeInfo/* declaring_type */
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
	, 8465/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_DAILYMISSION_UPDATEHandler_t2331_CG_DAILYMISSION_UPDATEHandler_Execute_m14990_ParameterInfos[] = 
{
	{"ipacket", 0, 134222150, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_DAILYMISSION_UPDATEHandler_t2331_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_DAILYMISSION_UPDATEHandler::Execute(PacketDistributed)
MethodInfo CG_DAILYMISSION_UPDATEHandler_Execute_m14990_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_DAILYMISSION_UPDATEHandler_Execute_m14990/* method */
	, &CG_DAILYMISSION_UPDATEHandler_t2331_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_DAILYMISSION_UPDATEHandler_t2331_CG_DAILYMISSION_UPDATEHandler_Execute_m14990_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8466/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_DAILYMISSION_UPDATEHandler_t2331_MethodInfos[] =
{
	&CG_DAILYMISSION_UPDATEHandler__ctor_m14989_MethodInfo,
	&CG_DAILYMISSION_UPDATEHandler_Execute_m14990_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_DAILYMISSION_UPDATEHandler_Execute_m14990_MethodInfo;
static MethodInfo* CG_DAILYMISSION_UPDATEHandler_t2331_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_DAILYMISSION_UPDATEHandler_Execute_m14990_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_DAILYMISSION_UPDATEHandler_t2331_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_DAILYMISSION_UPDATEHandler_t2331_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_DAILYMISSION_UPDATEHandler_t2331_0_0_0;
extern Il2CppType CG_DAILYMISSION_UPDATEHandler_t2331_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_DAILYMISSION_UPDATEHandler_t2331;
extern TypeInfo CG_DAILYMISSION_UPDATEHandler_t2331_il2cpp_TypeInfo;
TypeInfo CG_DAILYMISSION_UPDATEHandler_t2331_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_DAILYMISSION_UPDATEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_DAILYMISSION_UPDATEHandler_t2331_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_DAILYMISSION_UPDATEHandler_t2331_il2cpp_TypeInfo/* element_class */
	, CG_DAILYMISSION_UPDATEHandler_t2331_InterfacesTypeInfos/* implemented_interfaces */
	, CG_DAILYMISSION_UPDATEHandler_t2331_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_DAILYMISSION_UPDATEHandler_t2331_il2cpp_TypeInfo/* cast_class */
	, &CG_DAILYMISSION_UPDATEHandler_t2331_0_0_0/* byval_arg */
	, &CG_DAILYMISSION_UPDATEHandler_t2331_1_0_0/* this_arg */
	, CG_DAILYMISSION_UPDATEHandler_t2331_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_DAILYMISSION_UPDATEHandler_t2331)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_DAILYMISSION_UPDATE_NEWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DAILYMISSION_UPD_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_DAILYMISSION_UPDATE_NEWHandler_t2332_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_DAILYMISSION_UPDATE_NEWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DAILYMISSION_UPD_0MethodDeclarations.h"

// CG_DAILYMISSION_UPDATE_NEW
#include "AssemblyU2DCSharp_CG_DAILYMISSION_UPDATE_NEW.h"
extern TypeInfo CG_DAILYMISSION_UPDATE_NEW_t3541_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_DAILYMISSION_UPDATE_NEWHandler::.ctor()
extern MethodInfo CG_DAILYMISSION_UPDATE_NEWHandler__ctor_m14991_MethodInfo;
 void CG_DAILYMISSION_UPDATE_NEWHandler__ctor_m14991 (CG_DAILYMISSION_UPDATE_NEWHandler_t2332 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_DAILYMISSION_UPDATE_NEWHandler::Execute(PacketDistributed)
extern MethodInfo CG_DAILYMISSION_UPDATE_NEWHandler_Execute_m14992_MethodInfo;
 uint32_t CG_DAILYMISSION_UPDATE_NEWHandler_Execute_m14992 (CG_DAILYMISSION_UPDATE_NEWHandler_t2332 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_DAILYMISSION_UPDATE_NEW_t3541 * V_0 = {0};
	{
		V_0 = ((CG_DAILYMISSION_UPDATE_NEW_t3541 *)Castclass(___ipacket, InitializedTypeInfo(&CG_DAILYMISSION_UPDATE_NEW_t3541_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_DAILYMISSION_UPDATE_NEWHandler
extern TypeInfo CG_DAILYMISSION_UPDATE_NEWHandler_t2332_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_DAILYMISSION_UPDATE_NEWHandler::.ctor()
MethodInfo CG_DAILYMISSION_UPDATE_NEWHandler__ctor_m14991_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_DAILYMISSION_UPDATE_NEWHandler__ctor_m14991/* method */
	, &CG_DAILYMISSION_UPDATE_NEWHandler_t2332_il2cpp_TypeInfo/* declaring_type */
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
	, 8467/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_DAILYMISSION_UPDATE_NEWHandler_t2332_CG_DAILYMISSION_UPDATE_NEWHandler_Execute_m14992_ParameterInfos[] = 
{
	{"ipacket", 0, 134222151, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_DAILYMISSION_UPDATE_NEWHandler_t2332_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_DAILYMISSION_UPDATE_NEWHandler::Execute(PacketDistributed)
MethodInfo CG_DAILYMISSION_UPDATE_NEWHandler_Execute_m14992_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_DAILYMISSION_UPDATE_NEWHandler_Execute_m14992/* method */
	, &CG_DAILYMISSION_UPDATE_NEWHandler_t2332_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_DAILYMISSION_UPDATE_NEWHandler_t2332_CG_DAILYMISSION_UPDATE_NEWHandler_Execute_m14992_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8468/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_DAILYMISSION_UPDATE_NEWHandler_t2332_MethodInfos[] =
{
	&CG_DAILYMISSION_UPDATE_NEWHandler__ctor_m14991_MethodInfo,
	&CG_DAILYMISSION_UPDATE_NEWHandler_Execute_m14992_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_DAILYMISSION_UPDATE_NEWHandler_Execute_m14992_MethodInfo;
static MethodInfo* CG_DAILYMISSION_UPDATE_NEWHandler_t2332_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_DAILYMISSION_UPDATE_NEWHandler_Execute_m14992_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_DAILYMISSION_UPDATE_NEWHandler_t2332_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_DAILYMISSION_UPDATE_NEWHandler_t2332_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_DAILYMISSION_UPDATE_NEWHandler_t2332_0_0_0;
extern Il2CppType CG_DAILYMISSION_UPDATE_NEWHandler_t2332_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_DAILYMISSION_UPDATE_NEWHandler_t2332;
extern TypeInfo CG_DAILYMISSION_UPDATE_NEWHandler_t2332_il2cpp_TypeInfo;
TypeInfo CG_DAILYMISSION_UPDATE_NEWHandler_t2332_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_DAILYMISSION_UPDATE_NEWHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_DAILYMISSION_UPDATE_NEWHandler_t2332_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_DAILYMISSION_UPDATE_NEWHandler_t2332_il2cpp_TypeInfo/* element_class */
	, CG_DAILYMISSION_UPDATE_NEWHandler_t2332_InterfacesTypeInfos/* implemented_interfaces */
	, CG_DAILYMISSION_UPDATE_NEWHandler_t2332_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_DAILYMISSION_UPDATE_NEWHandler_t2332_il2cpp_TypeInfo/* cast_class */
	, &CG_DAILYMISSION_UPDATE_NEWHandler_t2332_0_0_0/* byval_arg */
	, &CG_DAILYMISSION_UPDATE_NEWHandler_t2332_1_0_0/* this_arg */
	, CG_DAILYMISSION_UPDATE_NEWHandler_t2332_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_DAILYMISSION_UPDATE_NEWHandler_t2332)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_DELBLACKLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DELBLACKLISTHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_DELBLACKLISTHandler_t2333_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_DELBLACKLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DELBLACKLISTHandMethodDeclarations.h"

// CG_DELBLACKLIST
#include "AssemblyU2DCSharp_CG_DELBLACKLIST.h"
extern TypeInfo CG_DELBLACKLIST_t3039_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_DELBLACKLISTHandler::.ctor()
extern MethodInfo CG_DELBLACKLISTHandler__ctor_m14993_MethodInfo;
 void CG_DELBLACKLISTHandler__ctor_m14993 (CG_DELBLACKLISTHandler_t2333 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_DELBLACKLISTHandler::Execute(PacketDistributed)
extern MethodInfo CG_DELBLACKLISTHandler_Execute_m14994_MethodInfo;
 uint32_t CG_DELBLACKLISTHandler_Execute_m14994 (CG_DELBLACKLISTHandler_t2333 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_DELBLACKLIST_t3039 * V_0 = {0};
	{
		V_0 = ((CG_DELBLACKLIST_t3039 *)Castclass(___ipacket, InitializedTypeInfo(&CG_DELBLACKLIST_t3039_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_DELBLACKLISTHandler
extern TypeInfo CG_DELBLACKLISTHandler_t2333_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_DELBLACKLISTHandler::.ctor()
MethodInfo CG_DELBLACKLISTHandler__ctor_m14993_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_DELBLACKLISTHandler__ctor_m14993/* method */
	, &CG_DELBLACKLISTHandler_t2333_il2cpp_TypeInfo/* declaring_type */
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
	, 8469/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_DELBLACKLISTHandler_t2333_CG_DELBLACKLISTHandler_Execute_m14994_ParameterInfos[] = 
{
	{"ipacket", 0, 134222152, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_DELBLACKLISTHandler_t2333_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_DELBLACKLISTHandler::Execute(PacketDistributed)
MethodInfo CG_DELBLACKLISTHandler_Execute_m14994_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_DELBLACKLISTHandler_Execute_m14994/* method */
	, &CG_DELBLACKLISTHandler_t2333_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_DELBLACKLISTHandler_t2333_CG_DELBLACKLISTHandler_Execute_m14994_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8470/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_DELBLACKLISTHandler_t2333_MethodInfos[] =
{
	&CG_DELBLACKLISTHandler__ctor_m14993_MethodInfo,
	&CG_DELBLACKLISTHandler_Execute_m14994_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_DELBLACKLISTHandler_Execute_m14994_MethodInfo;
static MethodInfo* CG_DELBLACKLISTHandler_t2333_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_DELBLACKLISTHandler_Execute_m14994_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_DELBLACKLISTHandler_t2333_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_DELBLACKLISTHandler_t2333_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_DELBLACKLISTHandler_t2333_0_0_0;
extern Il2CppType CG_DELBLACKLISTHandler_t2333_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_DELBLACKLISTHandler_t2333;
extern TypeInfo CG_DELBLACKLISTHandler_t2333_il2cpp_TypeInfo;
TypeInfo CG_DELBLACKLISTHandler_t2333_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_DELBLACKLISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_DELBLACKLISTHandler_t2333_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_DELBLACKLISTHandler_t2333_il2cpp_TypeInfo/* element_class */
	, CG_DELBLACKLISTHandler_t2333_InterfacesTypeInfos/* implemented_interfaces */
	, CG_DELBLACKLISTHandler_t2333_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_DELBLACKLISTHandler_t2333_il2cpp_TypeInfo/* cast_class */
	, &CG_DELBLACKLISTHandler_t2333_0_0_0/* byval_arg */
	, &CG_DELBLACKLISTHandler_t2333_1_0_0/* this_arg */
	, CG_DELBLACKLISTHandler_t2333_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_DELBLACKLISTHandler_t2333)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_DELETE_TITLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DELETE_TITLEHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_DELETE_TITLEHandler_t2334_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_DELETE_TITLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DELETE_TITLEHandMethodDeclarations.h"

// CG_DELETE_TITLE
#include "AssemblyU2DCSharp_CG_DELETE_TITLE.h"
extern TypeInfo CG_DELETE_TITLE_t3004_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_DELETE_TITLEHandler::.ctor()
extern MethodInfo CG_DELETE_TITLEHandler__ctor_m14995_MethodInfo;
 void CG_DELETE_TITLEHandler__ctor_m14995 (CG_DELETE_TITLEHandler_t2334 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_DELETE_TITLEHandler::Execute(PacketDistributed)
extern MethodInfo CG_DELETE_TITLEHandler_Execute_m14996_MethodInfo;
 uint32_t CG_DELETE_TITLEHandler_Execute_m14996 (CG_DELETE_TITLEHandler_t2334 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_DELETE_TITLE_t3004 * V_0 = {0};
	{
		V_0 = ((CG_DELETE_TITLE_t3004 *)Castclass(___ipacket, InitializedTypeInfo(&CG_DELETE_TITLE_t3004_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_DELETE_TITLEHandler
extern TypeInfo CG_DELETE_TITLEHandler_t2334_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_DELETE_TITLEHandler::.ctor()
MethodInfo CG_DELETE_TITLEHandler__ctor_m14995_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_DELETE_TITLEHandler__ctor_m14995/* method */
	, &CG_DELETE_TITLEHandler_t2334_il2cpp_TypeInfo/* declaring_type */
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
	, 8471/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_DELETE_TITLEHandler_t2334_CG_DELETE_TITLEHandler_Execute_m14996_ParameterInfos[] = 
{
	{"ipacket", 0, 134222153, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_DELETE_TITLEHandler_t2334_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_DELETE_TITLEHandler::Execute(PacketDistributed)
MethodInfo CG_DELETE_TITLEHandler_Execute_m14996_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_DELETE_TITLEHandler_Execute_m14996/* method */
	, &CG_DELETE_TITLEHandler_t2334_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_DELETE_TITLEHandler_t2334_CG_DELETE_TITLEHandler_Execute_m14996_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8472/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_DELETE_TITLEHandler_t2334_MethodInfos[] =
{
	&CG_DELETE_TITLEHandler__ctor_m14995_MethodInfo,
	&CG_DELETE_TITLEHandler_Execute_m14996_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_DELETE_TITLEHandler_Execute_m14996_MethodInfo;
static MethodInfo* CG_DELETE_TITLEHandler_t2334_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_DELETE_TITLEHandler_Execute_m14996_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_DELETE_TITLEHandler_t2334_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_DELETE_TITLEHandler_t2334_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_DELETE_TITLEHandler_t2334_0_0_0;
extern Il2CppType CG_DELETE_TITLEHandler_t2334_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_DELETE_TITLEHandler_t2334;
extern TypeInfo CG_DELETE_TITLEHandler_t2334_il2cpp_TypeInfo;
TypeInfo CG_DELETE_TITLEHandler_t2334_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_DELETE_TITLEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_DELETE_TITLEHandler_t2334_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_DELETE_TITLEHandler_t2334_il2cpp_TypeInfo/* element_class */
	, CG_DELETE_TITLEHandler_t2334_InterfacesTypeInfos/* implemented_interfaces */
	, CG_DELETE_TITLEHandler_t2334_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_DELETE_TITLEHandler_t2334_il2cpp_TypeInfo/* cast_class */
	, &CG_DELETE_TITLEHandler_t2334_0_0_0/* byval_arg */
	, &CG_DELETE_TITLEHandler_t2334_1_0_0/* this_arg */
	, CG_DELETE_TITLEHandler_t2334_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_DELETE_TITLEHandler_t2334)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_DELFRIENDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DELFRIENDHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_DELFRIENDHandler_t2335_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_DELFRIENDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DELFRIENDHandlerMethodDeclarations.h"

// CG_DELFRIEND
#include "AssemblyU2DCSharp_CG_DELFRIEND.h"
extern TypeInfo CG_DELFRIEND_t3028_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_DELFRIENDHandler::.ctor()
extern MethodInfo CG_DELFRIENDHandler__ctor_m14997_MethodInfo;
 void CG_DELFRIENDHandler__ctor_m14997 (CG_DELFRIENDHandler_t2335 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_DELFRIENDHandler::Execute(PacketDistributed)
extern MethodInfo CG_DELFRIENDHandler_Execute_m14998_MethodInfo;
 uint32_t CG_DELFRIENDHandler_Execute_m14998 (CG_DELFRIENDHandler_t2335 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_DELFRIEND_t3028 * V_0 = {0};
	{
		V_0 = ((CG_DELFRIEND_t3028 *)Castclass(___ipacket, InitializedTypeInfo(&CG_DELFRIEND_t3028_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_DELFRIENDHandler
extern TypeInfo CG_DELFRIENDHandler_t2335_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_DELFRIENDHandler::.ctor()
MethodInfo CG_DELFRIENDHandler__ctor_m14997_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_DELFRIENDHandler__ctor_m14997/* method */
	, &CG_DELFRIENDHandler_t2335_il2cpp_TypeInfo/* declaring_type */
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
	, 8473/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_DELFRIENDHandler_t2335_CG_DELFRIENDHandler_Execute_m14998_ParameterInfos[] = 
{
	{"ipacket", 0, 134222154, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_DELFRIENDHandler_t2335_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_DELFRIENDHandler::Execute(PacketDistributed)
MethodInfo CG_DELFRIENDHandler_Execute_m14998_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_DELFRIENDHandler_Execute_m14998/* method */
	, &CG_DELFRIENDHandler_t2335_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_DELFRIENDHandler_t2335_CG_DELFRIENDHandler_Execute_m14998_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8474/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_DELFRIENDHandler_t2335_MethodInfos[] =
{
	&CG_DELFRIENDHandler__ctor_m14997_MethodInfo,
	&CG_DELFRIENDHandler_Execute_m14998_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_DELFRIENDHandler_Execute_m14998_MethodInfo;
static MethodInfo* CG_DELFRIENDHandler_t2335_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_DELFRIENDHandler_Execute_m14998_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_DELFRIENDHandler_t2335_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_DELFRIENDHandler_t2335_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_DELFRIENDHandler_t2335_0_0_0;
extern Il2CppType CG_DELFRIENDHandler_t2335_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_DELFRIENDHandler_t2335;
extern TypeInfo CG_DELFRIENDHandler_t2335_il2cpp_TypeInfo;
TypeInfo CG_DELFRIENDHandler_t2335_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_DELFRIENDHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_DELFRIENDHandler_t2335_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_DELFRIENDHandler_t2335_il2cpp_TypeInfo/* element_class */
	, CG_DELFRIENDHandler_t2335_InterfacesTypeInfos/* implemented_interfaces */
	, CG_DELFRIENDHandler_t2335_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_DELFRIENDHandler_t2335_il2cpp_TypeInfo/* cast_class */
	, &CG_DELFRIENDHandler_t2335_0_0_0/* byval_arg */
	, &CG_DELFRIENDHandler_t2335_1_0_0/* this_arg */
	, CG_DELFRIENDHandler_t2335_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_DELFRIENDHandler_t2335)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_DELHATELISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DELHATELISTHandl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_DELHATELISTHandler_t2336_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_DELHATELISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DELHATELISTHandlMethodDeclarations.h"

// CG_DELHATELIST
#include "AssemblyU2DCSharp_CG_DELHATELIST.h"
extern TypeInfo CG_DELHATELIST_t3410_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_DELHATELISTHandler::.ctor()
extern MethodInfo CG_DELHATELISTHandler__ctor_m14999_MethodInfo;
 void CG_DELHATELISTHandler__ctor_m14999 (CG_DELHATELISTHandler_t2336 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_DELHATELISTHandler::Execute(PacketDistributed)
extern MethodInfo CG_DELHATELISTHandler_Execute_m15000_MethodInfo;
 uint32_t CG_DELHATELISTHandler_Execute_m15000 (CG_DELHATELISTHandler_t2336 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_DELHATELIST_t3410 * V_0 = {0};
	{
		V_0 = ((CG_DELHATELIST_t3410 *)Castclass(___ipacket, InitializedTypeInfo(&CG_DELHATELIST_t3410_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_DELHATELISTHandler
extern TypeInfo CG_DELHATELISTHandler_t2336_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_DELHATELISTHandler::.ctor()
MethodInfo CG_DELHATELISTHandler__ctor_m14999_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_DELHATELISTHandler__ctor_m14999/* method */
	, &CG_DELHATELISTHandler_t2336_il2cpp_TypeInfo/* declaring_type */
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
	, 8475/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_DELHATELISTHandler_t2336_CG_DELHATELISTHandler_Execute_m15000_ParameterInfos[] = 
{
	{"ipacket", 0, 134222155, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_DELHATELISTHandler_t2336_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_DELHATELISTHandler::Execute(PacketDistributed)
MethodInfo CG_DELHATELISTHandler_Execute_m15000_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_DELHATELISTHandler_Execute_m15000/* method */
	, &CG_DELHATELISTHandler_t2336_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_DELHATELISTHandler_t2336_CG_DELHATELISTHandler_Execute_m15000_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8476/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_DELHATELISTHandler_t2336_MethodInfos[] =
{
	&CG_DELHATELISTHandler__ctor_m14999_MethodInfo,
	&CG_DELHATELISTHandler_Execute_m15000_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_DELHATELISTHandler_Execute_m15000_MethodInfo;
static MethodInfo* CG_DELHATELISTHandler_t2336_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_DELHATELISTHandler_Execute_m15000_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_DELHATELISTHandler_t2336_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_DELHATELISTHandler_t2336_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_DELHATELISTHandler_t2336_0_0_0;
extern Il2CppType CG_DELHATELISTHandler_t2336_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_DELHATELISTHandler_t2336;
extern TypeInfo CG_DELHATELISTHandler_t2336_il2cpp_TypeInfo;
TypeInfo CG_DELHATELISTHandler_t2336_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_DELHATELISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_DELHATELISTHandler_t2336_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_DELHATELISTHandler_t2336_il2cpp_TypeInfo/* element_class */
	, CG_DELHATELISTHandler_t2336_InterfacesTypeInfos/* implemented_interfaces */
	, CG_DELHATELISTHandler_t2336_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_DELHATELISTHandler_t2336_il2cpp_TypeInfo/* cast_class */
	, &CG_DELHATELISTHandler_t2336_0_0_0/* byval_arg */
	, &CG_DELHATELISTHandler_t2336_1_0_0/* this_arg */
	, CG_DELHATELISTHandler_t2336_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_DELHATELISTHandler_t2336)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_DUEL_REQUESTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DUEL_REQUESTHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_DUEL_REQUESTHandler_t2337_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_DUEL_REQUESTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DUEL_REQUESTHandMethodDeclarations.h"

// CG_DUEL_REQUEST
#include "AssemblyU2DCSharp_CG_DUEL_REQUEST.h"
extern TypeInfo CG_DUEL_REQUEST_t3179_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_DUEL_REQUESTHandler::.ctor()
extern MethodInfo CG_DUEL_REQUESTHandler__ctor_m15001_MethodInfo;
 void CG_DUEL_REQUESTHandler__ctor_m15001 (CG_DUEL_REQUESTHandler_t2337 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_DUEL_REQUESTHandler::Execute(PacketDistributed)
extern MethodInfo CG_DUEL_REQUESTHandler_Execute_m15002_MethodInfo;
 uint32_t CG_DUEL_REQUESTHandler_Execute_m15002 (CG_DUEL_REQUESTHandler_t2337 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_DUEL_REQUEST_t3179 * V_0 = {0};
	{
		V_0 = ((CG_DUEL_REQUEST_t3179 *)Castclass(___ipacket, InitializedTypeInfo(&CG_DUEL_REQUEST_t3179_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_DUEL_REQUESTHandler
extern TypeInfo CG_DUEL_REQUESTHandler_t2337_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_DUEL_REQUESTHandler::.ctor()
MethodInfo CG_DUEL_REQUESTHandler__ctor_m15001_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_DUEL_REQUESTHandler__ctor_m15001/* method */
	, &CG_DUEL_REQUESTHandler_t2337_il2cpp_TypeInfo/* declaring_type */
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
	, 8477/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_DUEL_REQUESTHandler_t2337_CG_DUEL_REQUESTHandler_Execute_m15002_ParameterInfos[] = 
{
	{"ipacket", 0, 134222156, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_DUEL_REQUESTHandler_t2337_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_DUEL_REQUESTHandler::Execute(PacketDistributed)
MethodInfo CG_DUEL_REQUESTHandler_Execute_m15002_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_DUEL_REQUESTHandler_Execute_m15002/* method */
	, &CG_DUEL_REQUESTHandler_t2337_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_DUEL_REQUESTHandler_t2337_CG_DUEL_REQUESTHandler_Execute_m15002_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8478/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_DUEL_REQUESTHandler_t2337_MethodInfos[] =
{
	&CG_DUEL_REQUESTHandler__ctor_m15001_MethodInfo,
	&CG_DUEL_REQUESTHandler_Execute_m15002_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_DUEL_REQUESTHandler_Execute_m15002_MethodInfo;
static MethodInfo* CG_DUEL_REQUESTHandler_t2337_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_DUEL_REQUESTHandler_Execute_m15002_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_DUEL_REQUESTHandler_t2337_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_DUEL_REQUESTHandler_t2337_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_DUEL_REQUESTHandler_t2337_0_0_0;
extern Il2CppType CG_DUEL_REQUESTHandler_t2337_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_DUEL_REQUESTHandler_t2337;
extern TypeInfo CG_DUEL_REQUESTHandler_t2337_il2cpp_TypeInfo;
TypeInfo CG_DUEL_REQUESTHandler_t2337_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_DUEL_REQUESTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_DUEL_REQUESTHandler_t2337_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_DUEL_REQUESTHandler_t2337_il2cpp_TypeInfo/* element_class */
	, CG_DUEL_REQUESTHandler_t2337_InterfacesTypeInfos/* implemented_interfaces */
	, CG_DUEL_REQUESTHandler_t2337_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_DUEL_REQUESTHandler_t2337_il2cpp_TypeInfo/* cast_class */
	, &CG_DUEL_REQUESTHandler_t2337_0_0_0/* byval_arg */
	, &CG_DUEL_REQUESTHandler_t2337_1_0_0/* this_arg */
	, CG_DUEL_REQUESTHandler_t2337_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_DUEL_REQUESTHandler_t2337)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_DUEL_RESPONSEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DUEL_RESPONSEHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_DUEL_RESPONSEHandler_t2338_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_DUEL_RESPONSEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_DUEL_RESPONSEHanMethodDeclarations.h"

// CG_DUEL_RESPONSE
#include "AssemblyU2DCSharp_CG_DUEL_RESPONSE.h"
extern TypeInfo CG_DUEL_RESPONSE_t3181_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_DUEL_RESPONSEHandler::.ctor()
extern MethodInfo CG_DUEL_RESPONSEHandler__ctor_m15003_MethodInfo;
 void CG_DUEL_RESPONSEHandler__ctor_m15003 (CG_DUEL_RESPONSEHandler_t2338 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_DUEL_RESPONSEHandler::Execute(PacketDistributed)
extern MethodInfo CG_DUEL_RESPONSEHandler_Execute_m15004_MethodInfo;
 uint32_t CG_DUEL_RESPONSEHandler_Execute_m15004 (CG_DUEL_RESPONSEHandler_t2338 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_DUEL_RESPONSE_t3181 * V_0 = {0};
	{
		V_0 = ((CG_DUEL_RESPONSE_t3181 *)Castclass(___ipacket, InitializedTypeInfo(&CG_DUEL_RESPONSE_t3181_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_DUEL_RESPONSEHandler
extern TypeInfo CG_DUEL_RESPONSEHandler_t2338_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_DUEL_RESPONSEHandler::.ctor()
MethodInfo CG_DUEL_RESPONSEHandler__ctor_m15003_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_DUEL_RESPONSEHandler__ctor_m15003/* method */
	, &CG_DUEL_RESPONSEHandler_t2338_il2cpp_TypeInfo/* declaring_type */
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
	, 8479/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_DUEL_RESPONSEHandler_t2338_CG_DUEL_RESPONSEHandler_Execute_m15004_ParameterInfos[] = 
{
	{"ipacket", 0, 134222157, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_DUEL_RESPONSEHandler_t2338_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_DUEL_RESPONSEHandler::Execute(PacketDistributed)
MethodInfo CG_DUEL_RESPONSEHandler_Execute_m15004_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_DUEL_RESPONSEHandler_Execute_m15004/* method */
	, &CG_DUEL_RESPONSEHandler_t2338_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_DUEL_RESPONSEHandler_t2338_CG_DUEL_RESPONSEHandler_Execute_m15004_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8480/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_DUEL_RESPONSEHandler_t2338_MethodInfos[] =
{
	&CG_DUEL_RESPONSEHandler__ctor_m15003_MethodInfo,
	&CG_DUEL_RESPONSEHandler_Execute_m15004_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_DUEL_RESPONSEHandler_Execute_m15004_MethodInfo;
static MethodInfo* CG_DUEL_RESPONSEHandler_t2338_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_DUEL_RESPONSEHandler_Execute_m15004_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_DUEL_RESPONSEHandler_t2338_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_DUEL_RESPONSEHandler_t2338_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_DUEL_RESPONSEHandler_t2338_0_0_0;
extern Il2CppType CG_DUEL_RESPONSEHandler_t2338_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_DUEL_RESPONSEHandler_t2338;
extern TypeInfo CG_DUEL_RESPONSEHandler_t2338_il2cpp_TypeInfo;
TypeInfo CG_DUEL_RESPONSEHandler_t2338_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_DUEL_RESPONSEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_DUEL_RESPONSEHandler_t2338_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_DUEL_RESPONSEHandler_t2338_il2cpp_TypeInfo/* element_class */
	, CG_DUEL_RESPONSEHandler_t2338_InterfacesTypeInfos/* implemented_interfaces */
	, CG_DUEL_RESPONSEHandler_t2338_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_DUEL_RESPONSEHandler_t2338_il2cpp_TypeInfo/* cast_class */
	, &CG_DUEL_RESPONSEHandler_t2338_0_0_0/* byval_arg */
	, &CG_DUEL_RESPONSEHandler_t2338_1_0_0/* this_arg */
	, CG_DUEL_RESPONSEHandler_t2338_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_DUEL_RESPONSEHandler_t2338)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_ENTER_SCENE_OKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_ENTER_SCENE_OKHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_ENTER_SCENE_OKHandler_t2339_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_ENTER_SCENE_OKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_ENTER_SCENE_OKHaMethodDeclarations.h"

// CG_ENTER_SCENE_OK
#include "AssemblyU2DCSharp_CG_ENTER_SCENE_OK.h"
extern TypeInfo CG_ENTER_SCENE_OK_t2946_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_ENTER_SCENE_OKHandler::.ctor()
extern MethodInfo CG_ENTER_SCENE_OKHandler__ctor_m15005_MethodInfo;
 void CG_ENTER_SCENE_OKHandler__ctor_m15005 (CG_ENTER_SCENE_OKHandler_t2339 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_ENTER_SCENE_OKHandler::Execute(PacketDistributed)
extern MethodInfo CG_ENTER_SCENE_OKHandler_Execute_m15006_MethodInfo;
 uint32_t CG_ENTER_SCENE_OKHandler_Execute_m15006 (CG_ENTER_SCENE_OKHandler_t2339 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_ENTER_SCENE_OK_t2946 * V_0 = {0};
	{
		V_0 = ((CG_ENTER_SCENE_OK_t2946 *)Castclass(___ipacket, InitializedTypeInfo(&CG_ENTER_SCENE_OK_t2946_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_ENTER_SCENE_OKHandler
extern TypeInfo CG_ENTER_SCENE_OKHandler_t2339_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_ENTER_SCENE_OKHandler::.ctor()
MethodInfo CG_ENTER_SCENE_OKHandler__ctor_m15005_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_ENTER_SCENE_OKHandler__ctor_m15005/* method */
	, &CG_ENTER_SCENE_OKHandler_t2339_il2cpp_TypeInfo/* declaring_type */
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
	, 8481/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_ENTER_SCENE_OKHandler_t2339_CG_ENTER_SCENE_OKHandler_Execute_m15006_ParameterInfos[] = 
{
	{"ipacket", 0, 134222158, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_ENTER_SCENE_OKHandler_t2339_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_ENTER_SCENE_OKHandler::Execute(PacketDistributed)
MethodInfo CG_ENTER_SCENE_OKHandler_Execute_m15006_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_ENTER_SCENE_OKHandler_Execute_m15006/* method */
	, &CG_ENTER_SCENE_OKHandler_t2339_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_ENTER_SCENE_OKHandler_t2339_CG_ENTER_SCENE_OKHandler_Execute_m15006_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8482/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_ENTER_SCENE_OKHandler_t2339_MethodInfos[] =
{
	&CG_ENTER_SCENE_OKHandler__ctor_m15005_MethodInfo,
	&CG_ENTER_SCENE_OKHandler_Execute_m15006_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_ENTER_SCENE_OKHandler_Execute_m15006_MethodInfo;
static MethodInfo* CG_ENTER_SCENE_OKHandler_t2339_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_ENTER_SCENE_OKHandler_Execute_m15006_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_ENTER_SCENE_OKHandler_t2339_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_ENTER_SCENE_OKHandler_t2339_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_ENTER_SCENE_OKHandler_t2339_0_0_0;
extern Il2CppType CG_ENTER_SCENE_OKHandler_t2339_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_ENTER_SCENE_OKHandler_t2339;
extern TypeInfo CG_ENTER_SCENE_OKHandler_t2339_il2cpp_TypeInfo;
TypeInfo CG_ENTER_SCENE_OKHandler_t2339_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_ENTER_SCENE_OKHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_ENTER_SCENE_OKHandler_t2339_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_ENTER_SCENE_OKHandler_t2339_il2cpp_TypeInfo/* element_class */
	, CG_ENTER_SCENE_OKHandler_t2339_InterfacesTypeInfos/* implemented_interfaces */
	, CG_ENTER_SCENE_OKHandler_t2339_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_ENTER_SCENE_OKHandler_t2339_il2cpp_TypeInfo/* cast_class */
	, &CG_ENTER_SCENE_OKHandler_t2339_0_0_0/* byval_arg */
	, &CG_ENTER_SCENE_OKHandler_t2339_1_0_0/* this_arg */
	, CG_ENTER_SCENE_OKHandler_t2339_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_ENTER_SCENE_OKHandler_t2339)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_EQUIP_ENCHANCEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_ENCHANCEHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_EQUIP_ENCHANCEHandler_t2340_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_EQUIP_ENCHANCEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_ENCHANCEHaMethodDeclarations.h"

// CG_EQUIP_ENCHANCE
#include "AssemblyU2DCSharp_CG_EQUIP_ENCHANCE.h"
extern TypeInfo CG_EQUIP_ENCHANCE_t3015_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_EQUIP_ENCHANCEHandler::.ctor()
extern MethodInfo CG_EQUIP_ENCHANCEHandler__ctor_m15007_MethodInfo;
 void CG_EQUIP_ENCHANCEHandler__ctor_m15007 (CG_EQUIP_ENCHANCEHandler_t2340 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_ENCHANCEHandler::Execute(PacketDistributed)
extern MethodInfo CG_EQUIP_ENCHANCEHandler_Execute_m15008_MethodInfo;
 uint32_t CG_EQUIP_ENCHANCEHandler_Execute_m15008 (CG_EQUIP_ENCHANCEHandler_t2340 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_EQUIP_ENCHANCE_t3015 * V_0 = {0};
	{
		V_0 = ((CG_EQUIP_ENCHANCE_t3015 *)Castclass(___ipacket, InitializedTypeInfo(&CG_EQUIP_ENCHANCE_t3015_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_EQUIP_ENCHANCEHandler
extern TypeInfo CG_EQUIP_ENCHANCEHandler_t2340_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_EQUIP_ENCHANCEHandler::.ctor()
MethodInfo CG_EQUIP_ENCHANCEHandler__ctor_m15007_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_EQUIP_ENCHANCEHandler__ctor_m15007/* method */
	, &CG_EQUIP_ENCHANCEHandler_t2340_il2cpp_TypeInfo/* declaring_type */
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
	, 8483/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_EQUIP_ENCHANCEHandler_t2340_CG_EQUIP_ENCHANCEHandler_Execute_m15008_ParameterInfos[] = 
{
	{"ipacket", 0, 134222159, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_EQUIP_ENCHANCEHandler_t2340_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_ENCHANCEHandler::Execute(PacketDistributed)
MethodInfo CG_EQUIP_ENCHANCEHandler_Execute_m15008_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_EQUIP_ENCHANCEHandler_Execute_m15008/* method */
	, &CG_EQUIP_ENCHANCEHandler_t2340_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_EQUIP_ENCHANCEHandler_t2340_CG_EQUIP_ENCHANCEHandler_Execute_m15008_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8484/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_EQUIP_ENCHANCEHandler_t2340_MethodInfos[] =
{
	&CG_EQUIP_ENCHANCEHandler__ctor_m15007_MethodInfo,
	&CG_EQUIP_ENCHANCEHandler_Execute_m15008_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_EQUIP_ENCHANCEHandler_Execute_m15008_MethodInfo;
static MethodInfo* CG_EQUIP_ENCHANCEHandler_t2340_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_EQUIP_ENCHANCEHandler_Execute_m15008_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_EQUIP_ENCHANCEHandler_t2340_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_EQUIP_ENCHANCEHandler_t2340_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_EQUIP_ENCHANCEHandler_t2340_0_0_0;
extern Il2CppType CG_EQUIP_ENCHANCEHandler_t2340_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_EQUIP_ENCHANCEHandler_t2340;
extern TypeInfo CG_EQUIP_ENCHANCEHandler_t2340_il2cpp_TypeInfo;
TypeInfo CG_EQUIP_ENCHANCEHandler_t2340_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_EQUIP_ENCHANCEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_EQUIP_ENCHANCEHandler_t2340_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_EQUIP_ENCHANCEHandler_t2340_il2cpp_TypeInfo/* element_class */
	, CG_EQUIP_ENCHANCEHandler_t2340_InterfacesTypeInfos/* implemented_interfaces */
	, CG_EQUIP_ENCHANCEHandler_t2340_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_EQUIP_ENCHANCEHandler_t2340_il2cpp_TypeInfo/* cast_class */
	, &CG_EQUIP_ENCHANCEHandler_t2340_0_0_0/* byval_arg */
	, &CG_EQUIP_ENCHANCEHandler_t2340_1_0_0/* this_arg */
	, CG_EQUIP_ENCHANCEHandler_t2340_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_EQUIP_ENCHANCEHandler_t2340)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_EQUIP_FELLOW_SKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_FELLOW_SKI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_EQUIP_FELLOW_SKILLHandler_t2341_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_EQUIP_FELLOW_SKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_FELLOW_SKIMethodDeclarations.h"

// CG_EQUIP_FELLOW_SKILL
#include "AssemblyU2DCSharp_CG_EQUIP_FELLOW_SKILL.h"
extern TypeInfo CG_EQUIP_FELLOW_SKILL_t3152_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_EQUIP_FELLOW_SKILLHandler::.ctor()
extern MethodInfo CG_EQUIP_FELLOW_SKILLHandler__ctor_m15009_MethodInfo;
 void CG_EQUIP_FELLOW_SKILLHandler__ctor_m15009 (CG_EQUIP_FELLOW_SKILLHandler_t2341 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_FELLOW_SKILLHandler::Execute(PacketDistributed)
extern MethodInfo CG_EQUIP_FELLOW_SKILLHandler_Execute_m15010_MethodInfo;
 uint32_t CG_EQUIP_FELLOW_SKILLHandler_Execute_m15010 (CG_EQUIP_FELLOW_SKILLHandler_t2341 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_EQUIP_FELLOW_SKILL_t3152 * V_0 = {0};
	{
		V_0 = ((CG_EQUIP_FELLOW_SKILL_t3152 *)Castclass(___ipacket, InitializedTypeInfo(&CG_EQUIP_FELLOW_SKILL_t3152_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_EQUIP_FELLOW_SKILLHandler
extern TypeInfo CG_EQUIP_FELLOW_SKILLHandler_t2341_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_EQUIP_FELLOW_SKILLHandler::.ctor()
MethodInfo CG_EQUIP_FELLOW_SKILLHandler__ctor_m15009_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_EQUIP_FELLOW_SKILLHandler__ctor_m15009/* method */
	, &CG_EQUIP_FELLOW_SKILLHandler_t2341_il2cpp_TypeInfo/* declaring_type */
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
	, 8485/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_EQUIP_FELLOW_SKILLHandler_t2341_CG_EQUIP_FELLOW_SKILLHandler_Execute_m15010_ParameterInfos[] = 
{
	{"ipacket", 0, 134222160, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_EQUIP_FELLOW_SKILLHandler_t2341_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_FELLOW_SKILLHandler::Execute(PacketDistributed)
MethodInfo CG_EQUIP_FELLOW_SKILLHandler_Execute_m15010_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_EQUIP_FELLOW_SKILLHandler_Execute_m15010/* method */
	, &CG_EQUIP_FELLOW_SKILLHandler_t2341_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_EQUIP_FELLOW_SKILLHandler_t2341_CG_EQUIP_FELLOW_SKILLHandler_Execute_m15010_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8486/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_EQUIP_FELLOW_SKILLHandler_t2341_MethodInfos[] =
{
	&CG_EQUIP_FELLOW_SKILLHandler__ctor_m15009_MethodInfo,
	&CG_EQUIP_FELLOW_SKILLHandler_Execute_m15010_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_EQUIP_FELLOW_SKILLHandler_Execute_m15010_MethodInfo;
static MethodInfo* CG_EQUIP_FELLOW_SKILLHandler_t2341_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_EQUIP_FELLOW_SKILLHandler_Execute_m15010_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_EQUIP_FELLOW_SKILLHandler_t2341_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_EQUIP_FELLOW_SKILLHandler_t2341_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_EQUIP_FELLOW_SKILLHandler_t2341_0_0_0;
extern Il2CppType CG_EQUIP_FELLOW_SKILLHandler_t2341_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_EQUIP_FELLOW_SKILLHandler_t2341;
extern TypeInfo CG_EQUIP_FELLOW_SKILLHandler_t2341_il2cpp_TypeInfo;
TypeInfo CG_EQUIP_FELLOW_SKILLHandler_t2341_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_EQUIP_FELLOW_SKILLHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_EQUIP_FELLOW_SKILLHandler_t2341_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_EQUIP_FELLOW_SKILLHandler_t2341_il2cpp_TypeInfo/* element_class */
	, CG_EQUIP_FELLOW_SKILLHandler_t2341_InterfacesTypeInfos/* implemented_interfaces */
	, CG_EQUIP_FELLOW_SKILLHandler_t2341_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_EQUIP_FELLOW_SKILLHandler_t2341_il2cpp_TypeInfo/* cast_class */
	, &CG_EQUIP_FELLOW_SKILLHandler_t2341_0_0_0/* byval_arg */
	, &CG_EQUIP_FELLOW_SKILLHandler_t2341_1_0_0/* this_arg */
	, CG_EQUIP_FELLOW_SKILLHandler_t2341_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_EQUIP_FELLOW_SKILLHandler_t2341)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_EQUIP_ITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_ITEMHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_EQUIP_ITEMHandler_t2342_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_EQUIP_ITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_ITEMHandleMethodDeclarations.h"

// CG_EQUIP_ITEM
#include "AssemblyU2DCSharp_CG_EQUIP_ITEM.h"
extern TypeInfo CG_EQUIP_ITEM_t2977_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_EQUIP_ITEMHandler::.ctor()
extern MethodInfo CG_EQUIP_ITEMHandler__ctor_m15011_MethodInfo;
 void CG_EQUIP_ITEMHandler__ctor_m15011 (CG_EQUIP_ITEMHandler_t2342 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_ITEMHandler::Execute(PacketDistributed)
extern MethodInfo CG_EQUIP_ITEMHandler_Execute_m15012_MethodInfo;
 uint32_t CG_EQUIP_ITEMHandler_Execute_m15012 (CG_EQUIP_ITEMHandler_t2342 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_EQUIP_ITEM_t2977 * V_0 = {0};
	{
		V_0 = ((CG_EQUIP_ITEM_t2977 *)Castclass(___ipacket, InitializedTypeInfo(&CG_EQUIP_ITEM_t2977_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_EQUIP_ITEMHandler
extern TypeInfo CG_EQUIP_ITEMHandler_t2342_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_EQUIP_ITEMHandler::.ctor()
MethodInfo CG_EQUIP_ITEMHandler__ctor_m15011_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_EQUIP_ITEMHandler__ctor_m15011/* method */
	, &CG_EQUIP_ITEMHandler_t2342_il2cpp_TypeInfo/* declaring_type */
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
	, 8487/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_EQUIP_ITEMHandler_t2342_CG_EQUIP_ITEMHandler_Execute_m15012_ParameterInfos[] = 
{
	{"ipacket", 0, 134222161, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_EQUIP_ITEMHandler_t2342_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_ITEMHandler::Execute(PacketDistributed)
MethodInfo CG_EQUIP_ITEMHandler_Execute_m15012_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_EQUIP_ITEMHandler_Execute_m15012/* method */
	, &CG_EQUIP_ITEMHandler_t2342_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_EQUIP_ITEMHandler_t2342_CG_EQUIP_ITEMHandler_Execute_m15012_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8488/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_EQUIP_ITEMHandler_t2342_MethodInfos[] =
{
	&CG_EQUIP_ITEMHandler__ctor_m15011_MethodInfo,
	&CG_EQUIP_ITEMHandler_Execute_m15012_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_EQUIP_ITEMHandler_Execute_m15012_MethodInfo;
static MethodInfo* CG_EQUIP_ITEMHandler_t2342_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_EQUIP_ITEMHandler_Execute_m15012_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_EQUIP_ITEMHandler_t2342_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_EQUIP_ITEMHandler_t2342_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_EQUIP_ITEMHandler_t2342_0_0_0;
extern Il2CppType CG_EQUIP_ITEMHandler_t2342_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_EQUIP_ITEMHandler_t2342;
extern TypeInfo CG_EQUIP_ITEMHandler_t2342_il2cpp_TypeInfo;
TypeInfo CG_EQUIP_ITEMHandler_t2342_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_EQUIP_ITEMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_EQUIP_ITEMHandler_t2342_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_EQUIP_ITEMHandler_t2342_il2cpp_TypeInfo/* element_class */
	, CG_EQUIP_ITEMHandler_t2342_InterfacesTypeInfos/* implemented_interfaces */
	, CG_EQUIP_ITEMHandler_t2342_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_EQUIP_ITEMHandler_t2342_il2cpp_TypeInfo/* cast_class */
	, &CG_EQUIP_ITEMHandler_t2342_0_0_0/* byval_arg */
	, &CG_EQUIP_ITEMHandler_t2342_1_0_0/* this_arg */
	, CG_EQUIP_ITEMHandler_t2342_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_EQUIP_ITEMHandler_t2342)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_EQUIP_STARHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_STARHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_EQUIP_STARHandler_t2343_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_EQUIP_STARHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_STARHandleMethodDeclarations.h"

// CG_EQUIP_STAR
#include "AssemblyU2DCSharp_CG_EQUIP_STAR.h"
extern TypeInfo CG_EQUIP_STAR_t3016_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_EQUIP_STARHandler::.ctor()
extern MethodInfo CG_EQUIP_STARHandler__ctor_m15013_MethodInfo;
 void CG_EQUIP_STARHandler__ctor_m15013 (CG_EQUIP_STARHandler_t2343 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_STARHandler::Execute(PacketDistributed)
extern MethodInfo CG_EQUIP_STARHandler_Execute_m15014_MethodInfo;
 uint32_t CG_EQUIP_STARHandler_Execute_m15014 (CG_EQUIP_STARHandler_t2343 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_EQUIP_STAR_t3016 * V_0 = {0};
	{
		V_0 = ((CG_EQUIP_STAR_t3016 *)Castclass(___ipacket, InitializedTypeInfo(&CG_EQUIP_STAR_t3016_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_EQUIP_STARHandler
extern TypeInfo CG_EQUIP_STARHandler_t2343_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_EQUIP_STARHandler::.ctor()
MethodInfo CG_EQUIP_STARHandler__ctor_m15013_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_EQUIP_STARHandler__ctor_m15013/* method */
	, &CG_EQUIP_STARHandler_t2343_il2cpp_TypeInfo/* declaring_type */
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
	, 8489/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_EQUIP_STARHandler_t2343_CG_EQUIP_STARHandler_Execute_m15014_ParameterInfos[] = 
{
	{"ipacket", 0, 134222162, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_EQUIP_STARHandler_t2343_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_STARHandler::Execute(PacketDistributed)
MethodInfo CG_EQUIP_STARHandler_Execute_m15014_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_EQUIP_STARHandler_Execute_m15014/* method */
	, &CG_EQUIP_STARHandler_t2343_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_EQUIP_STARHandler_t2343_CG_EQUIP_STARHandler_Execute_m15014_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8490/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_EQUIP_STARHandler_t2343_MethodInfos[] =
{
	&CG_EQUIP_STARHandler__ctor_m15013_MethodInfo,
	&CG_EQUIP_STARHandler_Execute_m15014_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_EQUIP_STARHandler_Execute_m15014_MethodInfo;
static MethodInfo* CG_EQUIP_STARHandler_t2343_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_EQUIP_STARHandler_Execute_m15014_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_EQUIP_STARHandler_t2343_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_EQUIP_STARHandler_t2343_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_EQUIP_STARHandler_t2343_0_0_0;
extern Il2CppType CG_EQUIP_STARHandler_t2343_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_EQUIP_STARHandler_t2343;
extern TypeInfo CG_EQUIP_STARHandler_t2343_il2cpp_TypeInfo;
TypeInfo CG_EQUIP_STARHandler_t2343_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_EQUIP_STARHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_EQUIP_STARHandler_t2343_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_EQUIP_STARHandler_t2343_il2cpp_TypeInfo/* element_class */
	, CG_EQUIP_STARHandler_t2343_InterfacesTypeInfos/* implemented_interfaces */
	, CG_EQUIP_STARHandler_t2343_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_EQUIP_STARHandler_t2343_il2cpp_TypeInfo/* cast_class */
	, &CG_EQUIP_STARHandler_t2343_0_0_0/* byval_arg */
	, &CG_EQUIP_STARHandler_t2343_1_0_0/* this_arg */
	, CG_EQUIP_STARHandler_t2343_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_EQUIP_STARHandler_t2343)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_EQUIP_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_SWORDSMANH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_EQUIP_SWORDSMANHandler_t2344_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_EQUIP_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_EQUIP_SWORDSMANHMethodDeclarations.h"

// CG_EQUIP_SWORDSMAN
#include "AssemblyU2DCSharp_CG_EQUIP_SWORDSMAN.h"
extern TypeInfo CG_EQUIP_SWORDSMAN_t3331_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_EQUIP_SWORDSMANHandler::.ctor()
extern MethodInfo CG_EQUIP_SWORDSMANHandler__ctor_m15015_MethodInfo;
 void CG_EQUIP_SWORDSMANHandler__ctor_m15015 (CG_EQUIP_SWORDSMANHandler_t2344 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_SWORDSMANHandler::Execute(PacketDistributed)
extern MethodInfo CG_EQUIP_SWORDSMANHandler_Execute_m15016_MethodInfo;
 uint32_t CG_EQUIP_SWORDSMANHandler_Execute_m15016 (CG_EQUIP_SWORDSMANHandler_t2344 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_EQUIP_SWORDSMAN_t3331 * V_0 = {0};
	{
		V_0 = ((CG_EQUIP_SWORDSMAN_t3331 *)Castclass(___ipacket, InitializedTypeInfo(&CG_EQUIP_SWORDSMAN_t3331_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_EQUIP_SWORDSMANHandler
extern TypeInfo CG_EQUIP_SWORDSMANHandler_t2344_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_EQUIP_SWORDSMANHandler::.ctor()
MethodInfo CG_EQUIP_SWORDSMANHandler__ctor_m15015_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_EQUIP_SWORDSMANHandler__ctor_m15015/* method */
	, &CG_EQUIP_SWORDSMANHandler_t2344_il2cpp_TypeInfo/* declaring_type */
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
	, 8491/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_EQUIP_SWORDSMANHandler_t2344_CG_EQUIP_SWORDSMANHandler_Execute_m15016_ParameterInfos[] = 
{
	{"ipacket", 0, 134222163, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_EQUIP_SWORDSMANHandler_t2344_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_EQUIP_SWORDSMANHandler::Execute(PacketDistributed)
MethodInfo CG_EQUIP_SWORDSMANHandler_Execute_m15016_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_EQUIP_SWORDSMANHandler_Execute_m15016/* method */
	, &CG_EQUIP_SWORDSMANHandler_t2344_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_EQUIP_SWORDSMANHandler_t2344_CG_EQUIP_SWORDSMANHandler_Execute_m15016_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8492/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_EQUIP_SWORDSMANHandler_t2344_MethodInfos[] =
{
	&CG_EQUIP_SWORDSMANHandler__ctor_m15015_MethodInfo,
	&CG_EQUIP_SWORDSMANHandler_Execute_m15016_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_EQUIP_SWORDSMANHandler_Execute_m15016_MethodInfo;
static MethodInfo* CG_EQUIP_SWORDSMANHandler_t2344_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_EQUIP_SWORDSMANHandler_Execute_m15016_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_EQUIP_SWORDSMANHandler_t2344_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_EQUIP_SWORDSMANHandler_t2344_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_EQUIP_SWORDSMANHandler_t2344_0_0_0;
extern Il2CppType CG_EQUIP_SWORDSMANHandler_t2344_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_EQUIP_SWORDSMANHandler_t2344;
extern TypeInfo CG_EQUIP_SWORDSMANHandler_t2344_il2cpp_TypeInfo;
TypeInfo CG_EQUIP_SWORDSMANHandler_t2344_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_EQUIP_SWORDSMANHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_EQUIP_SWORDSMANHandler_t2344_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_EQUIP_SWORDSMANHandler_t2344_il2cpp_TypeInfo/* element_class */
	, CG_EQUIP_SWORDSMANHandler_t2344_InterfacesTypeInfos/* implemented_interfaces */
	, CG_EQUIP_SWORDSMANHandler_t2344_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_EQUIP_SWORDSMANHandler_t2344_il2cpp_TypeInfo/* cast_class */
	, &CG_EQUIP_SWORDSMANHandler_t2344_0_0_0/* byval_arg */
	, &CG_EQUIP_SWORDSMANHandler_t2344_1_0_0/* this_arg */
	, CG_EQUIP_SWORDSMANHandler_t2344_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_EQUIP_SWORDSMANHandler_t2344)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_APPLY_POINTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_APPLY_POI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_APPLY_POINTHandler_t2345_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_APPLY_POINTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_APPLY_POIMethodDeclarations.h"

// CG_FELLOW_APPLY_POINT
#include "AssemblyU2DCSharp_CG_FELLOW_APPLY_POINT.h"
extern TypeInfo CG_FELLOW_APPLY_POINT_t3235_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_APPLY_POINTHandler::.ctor()
extern MethodInfo CG_FELLOW_APPLY_POINTHandler__ctor_m15017_MethodInfo;
 void CG_FELLOW_APPLY_POINTHandler__ctor_m15017 (CG_FELLOW_APPLY_POINTHandler_t2345 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_APPLY_POINTHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_APPLY_POINTHandler_Execute_m15018_MethodInfo;
 uint32_t CG_FELLOW_APPLY_POINTHandler_Execute_m15018 (CG_FELLOW_APPLY_POINTHandler_t2345 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_APPLY_POINT_t3235 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_APPLY_POINT_t3235 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_APPLY_POINT_t3235_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_APPLY_POINTHandler
extern TypeInfo CG_FELLOW_APPLY_POINTHandler_t2345_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_APPLY_POINTHandler::.ctor()
MethodInfo CG_FELLOW_APPLY_POINTHandler__ctor_m15017_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_APPLY_POINTHandler__ctor_m15017/* method */
	, &CG_FELLOW_APPLY_POINTHandler_t2345_il2cpp_TypeInfo/* declaring_type */
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
	, 8493/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_APPLY_POINTHandler_t2345_CG_FELLOW_APPLY_POINTHandler_Execute_m15018_ParameterInfos[] = 
{
	{"ipacket", 0, 134222164, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_APPLY_POINTHandler_t2345_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_APPLY_POINTHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_APPLY_POINTHandler_Execute_m15018_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_APPLY_POINTHandler_Execute_m15018/* method */
	, &CG_FELLOW_APPLY_POINTHandler_t2345_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_APPLY_POINTHandler_t2345_CG_FELLOW_APPLY_POINTHandler_Execute_m15018_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8494/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_APPLY_POINTHandler_t2345_MethodInfos[] =
{
	&CG_FELLOW_APPLY_POINTHandler__ctor_m15017_MethodInfo,
	&CG_FELLOW_APPLY_POINTHandler_Execute_m15018_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_APPLY_POINTHandler_Execute_m15018_MethodInfo;
static MethodInfo* CG_FELLOW_APPLY_POINTHandler_t2345_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_APPLY_POINTHandler_Execute_m15018_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_APPLY_POINTHandler_t2345_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_APPLY_POINTHandler_t2345_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_APPLY_POINTHandler_t2345_0_0_0;
extern Il2CppType CG_FELLOW_APPLY_POINTHandler_t2345_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_APPLY_POINTHandler_t2345;
extern TypeInfo CG_FELLOW_APPLY_POINTHandler_t2345_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_APPLY_POINTHandler_t2345_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_APPLY_POINTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_APPLY_POINTHandler_t2345_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_APPLY_POINTHandler_t2345_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_APPLY_POINTHandler_t2345_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_APPLY_POINTHandler_t2345_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_APPLY_POINTHandler_t2345_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_APPLY_POINTHandler_t2345_0_0_0/* byval_arg */
	, &CG_FELLOW_APPLY_POINTHandler_t2345_1_0_0/* this_arg */
	, CG_FELLOW_APPLY_POINTHandler_t2345_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_APPLY_POINTHandler_t2345)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_BREEDING_BEGINHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_BREEDING_BEGINHandler_t2346_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_BREEDING_BEGINHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING_MethodDeclarations.h"

// CG_FELLOW_BREEDING_BEGIN
#include "AssemblyU2DCSharp_CG_FELLOW_BREEDING_BEGIN.h"
extern TypeInfo CG_FELLOW_BREEDING_BEGIN_t3588_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_BEGINHandler::.ctor()
extern MethodInfo CG_FELLOW_BREEDING_BEGINHandler__ctor_m15019_MethodInfo;
 void CG_FELLOW_BREEDING_BEGINHandler__ctor_m15019 (CG_FELLOW_BREEDING_BEGINHandler_t2346 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_BEGINHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_BREEDING_BEGINHandler_Execute_m15020_MethodInfo;
 uint32_t CG_FELLOW_BREEDING_BEGINHandler_Execute_m15020 (CG_FELLOW_BREEDING_BEGINHandler_t2346 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_BREEDING_BEGIN_t3588 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_BREEDING_BEGIN_t3588 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_BREEDING_BEGIN_t3588_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_BREEDING_BEGINHandler
extern TypeInfo CG_FELLOW_BREEDING_BEGINHandler_t2346_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_BEGINHandler::.ctor()
MethodInfo CG_FELLOW_BREEDING_BEGINHandler__ctor_m15019_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_BEGINHandler__ctor_m15019/* method */
	, &CG_FELLOW_BREEDING_BEGINHandler_t2346_il2cpp_TypeInfo/* declaring_type */
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
	, 8495/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_BREEDING_BEGINHandler_t2346_CG_FELLOW_BREEDING_BEGINHandler_Execute_m15020_ParameterInfos[] = 
{
	{"ipacket", 0, 134222165, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_BREEDING_BEGINHandler_t2346_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_BEGINHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_BREEDING_BEGINHandler_Execute_m15020_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_BEGINHandler_Execute_m15020/* method */
	, &CG_FELLOW_BREEDING_BEGINHandler_t2346_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_BREEDING_BEGINHandler_t2346_CG_FELLOW_BREEDING_BEGINHandler_Execute_m15020_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8496/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_BREEDING_BEGINHandler_t2346_MethodInfos[] =
{
	&CG_FELLOW_BREEDING_BEGINHandler__ctor_m15019_MethodInfo,
	&CG_FELLOW_BREEDING_BEGINHandler_Execute_m15020_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_BREEDING_BEGINHandler_Execute_m15020_MethodInfo;
static MethodInfo* CG_FELLOW_BREEDING_BEGINHandler_t2346_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_BREEDING_BEGINHandler_Execute_m15020_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_BREEDING_BEGINHandler_t2346_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_BREEDING_BEGINHandler_t2346_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_BREEDING_BEGINHandler_t2346_0_0_0;
extern Il2CppType CG_FELLOW_BREEDING_BEGINHandler_t2346_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_BREEDING_BEGINHandler_t2346;
extern TypeInfo CG_FELLOW_BREEDING_BEGINHandler_t2346_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_BREEDING_BEGINHandler_t2346_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_BREEDING_BEGINHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_BREEDING_BEGINHandler_t2346_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_BREEDING_BEGINHandler_t2346_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_BREEDING_BEGINHandler_t2346_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_BREEDING_BEGINHandler_t2346_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_BREEDING_BEGINHandler_t2346_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_BREEDING_BEGINHandler_t2346_0_0_0/* byval_arg */
	, &CG_FELLOW_BREEDING_BEGINHandler_t2346_1_0_0/* this_arg */
	, CG_FELLOW_BREEDING_BEGINHandler_t2346_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_BREEDING_BEGINHandler_t2346)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_BREEDING_LOCKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING__0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_BREEDING_LOCKHandler_t2347_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_BREEDING_LOCKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING__0MethodDeclarations.h"

// CG_FELLOW_BREEDING_LOCK
#include "AssemblyU2DCSharp_CG_FELLOW_BREEDING_LOCK.h"
extern TypeInfo CG_FELLOW_BREEDING_LOCK_t3585_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_LOCKHandler::.ctor()
extern MethodInfo CG_FELLOW_BREEDING_LOCKHandler__ctor_m15021_MethodInfo;
 void CG_FELLOW_BREEDING_LOCKHandler__ctor_m15021 (CG_FELLOW_BREEDING_LOCKHandler_t2347 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_LOCKHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_BREEDING_LOCKHandler_Execute_m15022_MethodInfo;
 uint32_t CG_FELLOW_BREEDING_LOCKHandler_Execute_m15022 (CG_FELLOW_BREEDING_LOCKHandler_t2347 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_BREEDING_LOCK_t3585 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_BREEDING_LOCK_t3585 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_BREEDING_LOCK_t3585_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_BREEDING_LOCKHandler
extern TypeInfo CG_FELLOW_BREEDING_LOCKHandler_t2347_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_LOCKHandler::.ctor()
MethodInfo CG_FELLOW_BREEDING_LOCKHandler__ctor_m15021_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_LOCKHandler__ctor_m15021/* method */
	, &CG_FELLOW_BREEDING_LOCKHandler_t2347_il2cpp_TypeInfo/* declaring_type */
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
	, 8497/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_BREEDING_LOCKHandler_t2347_CG_FELLOW_BREEDING_LOCKHandler_Execute_m15022_ParameterInfos[] = 
{
	{"ipacket", 0, 134222166, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_BREEDING_LOCKHandler_t2347_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_LOCKHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_BREEDING_LOCKHandler_Execute_m15022_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_LOCKHandler_Execute_m15022/* method */
	, &CG_FELLOW_BREEDING_LOCKHandler_t2347_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_BREEDING_LOCKHandler_t2347_CG_FELLOW_BREEDING_LOCKHandler_Execute_m15022_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8498/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_BREEDING_LOCKHandler_t2347_MethodInfos[] =
{
	&CG_FELLOW_BREEDING_LOCKHandler__ctor_m15021_MethodInfo,
	&CG_FELLOW_BREEDING_LOCKHandler_Execute_m15022_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_BREEDING_LOCKHandler_Execute_m15022_MethodInfo;
static MethodInfo* CG_FELLOW_BREEDING_LOCKHandler_t2347_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_BREEDING_LOCKHandler_Execute_m15022_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_BREEDING_LOCKHandler_t2347_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_BREEDING_LOCKHandler_t2347_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_BREEDING_LOCKHandler_t2347_0_0_0;
extern Il2CppType CG_FELLOW_BREEDING_LOCKHandler_t2347_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_BREEDING_LOCKHandler_t2347;
extern TypeInfo CG_FELLOW_BREEDING_LOCKHandler_t2347_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_BREEDING_LOCKHandler_t2347_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_BREEDING_LOCKHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_BREEDING_LOCKHandler_t2347_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_BREEDING_LOCKHandler_t2347_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_BREEDING_LOCKHandler_t2347_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_BREEDING_LOCKHandler_t2347_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_BREEDING_LOCKHandler_t2347_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_BREEDING_LOCKHandler_t2347_0_0_0/* byval_arg */
	, &CG_FELLOW_BREEDING_LOCKHandler_t2347_1_0_0/* this_arg */
	, CG_FELLOW_BREEDING_LOCKHandler_t2347_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_BREEDING_LOCKHandler_t2347)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_BREEDING_RECEIVEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING__1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_BREEDING_RECEIVEHandler_t2348_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_BREEDING_RECEIVEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING__1MethodDeclarations.h"

// CG_FELLOW_BREEDING_RECEIVE
#include "AssemblyU2DCSharp_CG_FELLOW_BREEDING_RECEIVE.h"
extern TypeInfo CG_FELLOW_BREEDING_RECEIVE_t3591_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_RECEIVEHandler::.ctor()
extern MethodInfo CG_FELLOW_BREEDING_RECEIVEHandler__ctor_m15023_MethodInfo;
 void CG_FELLOW_BREEDING_RECEIVEHandler__ctor_m15023 (CG_FELLOW_BREEDING_RECEIVEHandler_t2348 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_RECEIVEHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_BREEDING_RECEIVEHandler_Execute_m15024_MethodInfo;
 uint32_t CG_FELLOW_BREEDING_RECEIVEHandler_Execute_m15024 (CG_FELLOW_BREEDING_RECEIVEHandler_t2348 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_BREEDING_RECEIVE_t3591 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_BREEDING_RECEIVE_t3591 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_BREEDING_RECEIVE_t3591_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_BREEDING_RECEIVEHandler
extern TypeInfo CG_FELLOW_BREEDING_RECEIVEHandler_t2348_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_RECEIVEHandler::.ctor()
MethodInfo CG_FELLOW_BREEDING_RECEIVEHandler__ctor_m15023_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_RECEIVEHandler__ctor_m15023/* method */
	, &CG_FELLOW_BREEDING_RECEIVEHandler_t2348_il2cpp_TypeInfo/* declaring_type */
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
	, 8499/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_BREEDING_RECEIVEHandler_t2348_CG_FELLOW_BREEDING_RECEIVEHandler_Execute_m15024_ParameterInfos[] = 
{
	{"ipacket", 0, 134222167, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_BREEDING_RECEIVEHandler_t2348_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_RECEIVEHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_BREEDING_RECEIVEHandler_Execute_m15024_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_RECEIVEHandler_Execute_m15024/* method */
	, &CG_FELLOW_BREEDING_RECEIVEHandler_t2348_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_BREEDING_RECEIVEHandler_t2348_CG_FELLOW_BREEDING_RECEIVEHandler_Execute_m15024_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8500/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_BREEDING_RECEIVEHandler_t2348_MethodInfos[] =
{
	&CG_FELLOW_BREEDING_RECEIVEHandler__ctor_m15023_MethodInfo,
	&CG_FELLOW_BREEDING_RECEIVEHandler_Execute_m15024_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_BREEDING_RECEIVEHandler_Execute_m15024_MethodInfo;
static MethodInfo* CG_FELLOW_BREEDING_RECEIVEHandler_t2348_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_BREEDING_RECEIVEHandler_Execute_m15024_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_BREEDING_RECEIVEHandler_t2348_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_BREEDING_RECEIVEHandler_t2348_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_BREEDING_RECEIVEHandler_t2348_0_0_0;
extern Il2CppType CG_FELLOW_BREEDING_RECEIVEHandler_t2348_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_BREEDING_RECEIVEHandler_t2348;
extern TypeInfo CG_FELLOW_BREEDING_RECEIVEHandler_t2348_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_BREEDING_RECEIVEHandler_t2348_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_BREEDING_RECEIVEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_BREEDING_RECEIVEHandler_t2348_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_BREEDING_RECEIVEHandler_t2348_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_BREEDING_RECEIVEHandler_t2348_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_BREEDING_RECEIVEHandler_t2348_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_BREEDING_RECEIVEHandler_t2348_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_BREEDING_RECEIVEHandler_t2348_0_0_0/* byval_arg */
	, &CG_FELLOW_BREEDING_RECEIVEHandler_t2348_1_0_0/* this_arg */
	, CG_FELLOW_BREEDING_RECEIVEHandler_t2348_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_BREEDING_RECEIVEHandler_t2348)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_BREEDING_SPEEDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING__2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_BREEDING_SPEEDHandler_t2349_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_BREEDING_SPEEDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING__2MethodDeclarations.h"

// CG_FELLOW_BREEDING_SPEED
#include "AssemblyU2DCSharp_CG_FELLOW_BREEDING_SPEED.h"
extern TypeInfo CG_FELLOW_BREEDING_SPEED_t3589_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_SPEEDHandler::.ctor()
extern MethodInfo CG_FELLOW_BREEDING_SPEEDHandler__ctor_m15025_MethodInfo;
 void CG_FELLOW_BREEDING_SPEEDHandler__ctor_m15025 (CG_FELLOW_BREEDING_SPEEDHandler_t2349 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_SPEEDHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_BREEDING_SPEEDHandler_Execute_m15026_MethodInfo;
 uint32_t CG_FELLOW_BREEDING_SPEEDHandler_Execute_m15026 (CG_FELLOW_BREEDING_SPEEDHandler_t2349 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_BREEDING_SPEED_t3589 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_BREEDING_SPEED_t3589 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_BREEDING_SPEED_t3589_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_BREEDING_SPEEDHandler
extern TypeInfo CG_FELLOW_BREEDING_SPEEDHandler_t2349_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_SPEEDHandler::.ctor()
MethodInfo CG_FELLOW_BREEDING_SPEEDHandler__ctor_m15025_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_SPEEDHandler__ctor_m15025/* method */
	, &CG_FELLOW_BREEDING_SPEEDHandler_t2349_il2cpp_TypeInfo/* declaring_type */
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
	, 8501/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_BREEDING_SPEEDHandler_t2349_CG_FELLOW_BREEDING_SPEEDHandler_Execute_m15026_ParameterInfos[] = 
{
	{"ipacket", 0, 134222168, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_BREEDING_SPEEDHandler_t2349_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_SPEEDHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_BREEDING_SPEEDHandler_Execute_m15026_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_SPEEDHandler_Execute_m15026/* method */
	, &CG_FELLOW_BREEDING_SPEEDHandler_t2349_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_BREEDING_SPEEDHandler_t2349_CG_FELLOW_BREEDING_SPEEDHandler_Execute_m15026_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8502/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_BREEDING_SPEEDHandler_t2349_MethodInfos[] =
{
	&CG_FELLOW_BREEDING_SPEEDHandler__ctor_m15025_MethodInfo,
	&CG_FELLOW_BREEDING_SPEEDHandler_Execute_m15026_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_BREEDING_SPEEDHandler_Execute_m15026_MethodInfo;
static MethodInfo* CG_FELLOW_BREEDING_SPEEDHandler_t2349_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_BREEDING_SPEEDHandler_Execute_m15026_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_BREEDING_SPEEDHandler_t2349_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_BREEDING_SPEEDHandler_t2349_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_BREEDING_SPEEDHandler_t2349_0_0_0;
extern Il2CppType CG_FELLOW_BREEDING_SPEEDHandler_t2349_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_BREEDING_SPEEDHandler_t2349;
extern TypeInfo CG_FELLOW_BREEDING_SPEEDHandler_t2349_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_BREEDING_SPEEDHandler_t2349_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_BREEDING_SPEEDHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_BREEDING_SPEEDHandler_t2349_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_BREEDING_SPEEDHandler_t2349_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_BREEDING_SPEEDHandler_t2349_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_BREEDING_SPEEDHandler_t2349_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_BREEDING_SPEEDHandler_t2349_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_BREEDING_SPEEDHandler_t2349_0_0_0/* byval_arg */
	, &CG_FELLOW_BREEDING_SPEEDHandler_t2349_1_0_0/* this_arg */
	, CG_FELLOW_BREEDING_SPEEDHandler_t2349_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_BREEDING_SPEEDHandler_t2349)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_BREEDING_UNLOCKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING__3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_BREEDING_UNLOCKHandler_t2350_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_BREEDING_UNLOCKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_BREEDING__3MethodDeclarations.h"

// CG_FELLOW_BREEDING_UNLOCK
#include "AssemblyU2DCSharp_CG_FELLOW_BREEDING_UNLOCK.h"
extern TypeInfo CG_FELLOW_BREEDING_UNLOCK_t3586_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_UNLOCKHandler::.ctor()
extern MethodInfo CG_FELLOW_BREEDING_UNLOCKHandler__ctor_m15027_MethodInfo;
 void CG_FELLOW_BREEDING_UNLOCKHandler__ctor_m15027 (CG_FELLOW_BREEDING_UNLOCKHandler_t2350 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_UNLOCKHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_BREEDING_UNLOCKHandler_Execute_m15028_MethodInfo;
 uint32_t CG_FELLOW_BREEDING_UNLOCKHandler_Execute_m15028 (CG_FELLOW_BREEDING_UNLOCKHandler_t2350 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_BREEDING_UNLOCK_t3586 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_BREEDING_UNLOCK_t3586 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_BREEDING_UNLOCK_t3586_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_BREEDING_UNLOCKHandler
extern TypeInfo CG_FELLOW_BREEDING_UNLOCKHandler_t2350_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_BREEDING_UNLOCKHandler::.ctor()
MethodInfo CG_FELLOW_BREEDING_UNLOCKHandler__ctor_m15027_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_UNLOCKHandler__ctor_m15027/* method */
	, &CG_FELLOW_BREEDING_UNLOCKHandler_t2350_il2cpp_TypeInfo/* declaring_type */
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
	, 8503/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_BREEDING_UNLOCKHandler_t2350_CG_FELLOW_BREEDING_UNLOCKHandler_Execute_m15028_ParameterInfos[] = 
{
	{"ipacket", 0, 134222169, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_BREEDING_UNLOCKHandler_t2350_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_BREEDING_UNLOCKHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_BREEDING_UNLOCKHandler_Execute_m15028_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_BREEDING_UNLOCKHandler_Execute_m15028/* method */
	, &CG_FELLOW_BREEDING_UNLOCKHandler_t2350_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_BREEDING_UNLOCKHandler_t2350_CG_FELLOW_BREEDING_UNLOCKHandler_Execute_m15028_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8504/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_BREEDING_UNLOCKHandler_t2350_MethodInfos[] =
{
	&CG_FELLOW_BREEDING_UNLOCKHandler__ctor_m15027_MethodInfo,
	&CG_FELLOW_BREEDING_UNLOCKHandler_Execute_m15028_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_BREEDING_UNLOCKHandler_Execute_m15028_MethodInfo;
static MethodInfo* CG_FELLOW_BREEDING_UNLOCKHandler_t2350_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_BREEDING_UNLOCKHandler_Execute_m15028_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_BREEDING_UNLOCKHandler_t2350_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_BREEDING_UNLOCKHandler_t2350_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_BREEDING_UNLOCKHandler_t2350_0_0_0;
extern Il2CppType CG_FELLOW_BREEDING_UNLOCKHandler_t2350_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_BREEDING_UNLOCKHandler_t2350;
extern TypeInfo CG_FELLOW_BREEDING_UNLOCKHandler_t2350_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_BREEDING_UNLOCKHandler_t2350_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_BREEDING_UNLOCKHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_BREEDING_UNLOCKHandler_t2350_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_BREEDING_UNLOCKHandler_t2350_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_BREEDING_UNLOCKHandler_t2350_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_BREEDING_UNLOCKHandler_t2350_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_BREEDING_UNLOCKHandler_t2350_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_BREEDING_UNLOCKHandler_t2350_0_0_0/* byval_arg */
	, &CG_FELLOW_BREEDING_UNLOCKHandler_t2350_1_0_0/* this_arg */
	, CG_FELLOW_BREEDING_UNLOCKHandler_t2350_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_BREEDING_UNLOCKHandler_t2350)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_CHANGE_NAMEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_CHANGE_NA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_CHANGE_NAMEHandler_t2351_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_CHANGE_NAMEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_CHANGE_NAMethodDeclarations.h"

// CG_FELLOW_CHANGE_NAME
#include "AssemblyU2DCSharp_CG_FELLOW_CHANGE_NAME.h"
extern TypeInfo CG_FELLOW_CHANGE_NAME_t3254_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_CHANGE_NAMEHandler::.ctor()
extern MethodInfo CG_FELLOW_CHANGE_NAMEHandler__ctor_m15029_MethodInfo;
 void CG_FELLOW_CHANGE_NAMEHandler__ctor_m15029 (CG_FELLOW_CHANGE_NAMEHandler_t2351 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_CHANGE_NAMEHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_CHANGE_NAMEHandler_Execute_m15030_MethodInfo;
 uint32_t CG_FELLOW_CHANGE_NAMEHandler_Execute_m15030 (CG_FELLOW_CHANGE_NAMEHandler_t2351 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_CHANGE_NAME_t3254 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_CHANGE_NAME_t3254 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_CHANGE_NAME_t3254_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_CHANGE_NAMEHandler
extern TypeInfo CG_FELLOW_CHANGE_NAMEHandler_t2351_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_CHANGE_NAMEHandler::.ctor()
MethodInfo CG_FELLOW_CHANGE_NAMEHandler__ctor_m15029_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_CHANGE_NAMEHandler__ctor_m15029/* method */
	, &CG_FELLOW_CHANGE_NAMEHandler_t2351_il2cpp_TypeInfo/* declaring_type */
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
	, 8505/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_CHANGE_NAMEHandler_t2351_CG_FELLOW_CHANGE_NAMEHandler_Execute_m15030_ParameterInfos[] = 
{
	{"ipacket", 0, 134222170, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_CHANGE_NAMEHandler_t2351_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_CHANGE_NAMEHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_CHANGE_NAMEHandler_Execute_m15030_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_CHANGE_NAMEHandler_Execute_m15030/* method */
	, &CG_FELLOW_CHANGE_NAMEHandler_t2351_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_CHANGE_NAMEHandler_t2351_CG_FELLOW_CHANGE_NAMEHandler_Execute_m15030_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8506/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_CHANGE_NAMEHandler_t2351_MethodInfos[] =
{
	&CG_FELLOW_CHANGE_NAMEHandler__ctor_m15029_MethodInfo,
	&CG_FELLOW_CHANGE_NAMEHandler_Execute_m15030_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_CHANGE_NAMEHandler_Execute_m15030_MethodInfo;
static MethodInfo* CG_FELLOW_CHANGE_NAMEHandler_t2351_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_CHANGE_NAMEHandler_Execute_m15030_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_CHANGE_NAMEHandler_t2351_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_CHANGE_NAMEHandler_t2351_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_CHANGE_NAMEHandler_t2351_0_0_0;
extern Il2CppType CG_FELLOW_CHANGE_NAMEHandler_t2351_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_CHANGE_NAMEHandler_t2351;
extern TypeInfo CG_FELLOW_CHANGE_NAMEHandler_t2351_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_CHANGE_NAMEHandler_t2351_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_CHANGE_NAMEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_CHANGE_NAMEHandler_t2351_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_CHANGE_NAMEHandler_t2351_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_CHANGE_NAMEHandler_t2351_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_CHANGE_NAMEHandler_t2351_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_CHANGE_NAMEHandler_t2351_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_CHANGE_NAMEHandler_t2351_0_0_0/* byval_arg */
	, &CG_FELLOW_CHANGE_NAMEHandler_t2351_1_0_0/* this_arg */
	, CG_FELLOW_CHANGE_NAMEHandler_t2351_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_CHANGE_NAMEHandler_t2351)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEARNHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_ELEMENTSK.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEARNHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_ELEMENTSKMethodDeclarations.h"

// CG_FELLOW_ELEMENTSKILL_LEARN
#include "AssemblyU2DCSharp_CG_FELLOW_ELEMENTSKILL_LEARN.h"
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEARN_t3580_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEARNHandler::.ctor()
extern MethodInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler__ctor_m15031_MethodInfo;
 void CG_FELLOW_ELEMENTSKILL_LEARNHandler__ctor_m15031 (CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEARNHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler_Execute_m15032_MethodInfo;
 uint32_t CG_FELLOW_ELEMENTSKILL_LEARNHandler_Execute_m15032 (CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_ELEMENTSKILL_LEARN_t3580 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_ELEMENTSKILL_LEARN_t3580 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_ELEMENTSKILL_LEARN_t3580_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEARNHandler
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEARNHandler::.ctor()
MethodInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler__ctor_m15031_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_ELEMENTSKILL_LEARNHandler__ctor_m15031/* method */
	, &CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_il2cpp_TypeInfo/* declaring_type */
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
	, 8507/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_CG_FELLOW_ELEMENTSKILL_LEARNHandler_Execute_m15032_ParameterInfos[] = 
{
	{"ipacket", 0, 134222171, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEARNHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler_Execute_m15032_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_ELEMENTSKILL_LEARNHandler_Execute_m15032/* method */
	, &CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_CG_FELLOW_ELEMENTSKILL_LEARNHandler_Execute_m15032_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8508/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_MethodInfos[] =
{
	&CG_FELLOW_ELEMENTSKILL_LEARNHandler__ctor_m15031_MethodInfo,
	&CG_FELLOW_ELEMENTSKILL_LEARNHandler_Execute_m15032_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler_Execute_m15032_MethodInfo;
static MethodInfo* CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_ELEMENTSKILL_LEARNHandler_Execute_m15032_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_0_0_0;
extern Il2CppType CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352;
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_ELEMENTSKILL_LEARNHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_0_0_0/* byval_arg */
	, &CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_1_0_0/* this_arg */
	, CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_ELEMENTSKILL_LEARNHandler_t2352)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEVELUPHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_ELEMENTSK_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEVELUPHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_ELEMENTSK_0MethodDeclarations.h"

// CG_FELLOW_ELEMENTSKILL_LEVELUP
#include "AssemblyU2DCSharp_CG_FELLOW_ELEMENTSKILL_LEVELUP.h"
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEVELUP_t3579_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEVELUPHandler::.ctor()
extern MethodInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler__ctor_m15033_MethodInfo;
 void CG_FELLOW_ELEMENTSKILL_LEVELUPHandler__ctor_m15033 (CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEVELUPHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_Execute_m15034_MethodInfo;
 uint32_t CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_Execute_m15034 (CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_ELEMENTSKILL_LEVELUP_t3579 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_ELEMENTSKILL_LEVELUP_t3579 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_ELEMENTSKILL_LEVELUP_t3579_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEVELUPHandler
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEVELUPHandler::.ctor()
MethodInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler__ctor_m15033_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_ELEMENTSKILL_LEVELUPHandler__ctor_m15033/* method */
	, &CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_il2cpp_TypeInfo/* declaring_type */
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
	, 8509/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_Execute_m15034_ParameterInfos[] = 
{
	{"ipacket", 0, 134222172, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_ELEMENTSKILL_LEVELUPHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_Execute_m15034_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_Execute_m15034/* method */
	, &CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_Execute_m15034_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8510/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_MethodInfos[] =
{
	&CG_FELLOW_ELEMENTSKILL_LEVELUPHandler__ctor_m15033_MethodInfo,
	&CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_Execute_m15034_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_Execute_m15034_MethodInfo;
static MethodInfo* CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_Execute_m15034_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_0_0_0;
extern Il2CppType CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353;
extern TypeInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_ELEMENTSKILL_LEVELUPHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_0_0_0/* byval_arg */
	, &CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_1_0_0/* this_arg */
	, CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_ELEMENTSKILL_LEVELUPHandler_t2353)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_ENCHANCEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_ENCHANCEH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_ENCHANCEHandler_t2354_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_ENCHANCEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_ENCHANCEHMethodDeclarations.h"

// CG_FELLOW_ENCHANCE
#include "AssemblyU2DCSharp_CG_FELLOW_ENCHANCE.h"
extern TypeInfo CG_FELLOW_ENCHANCE_t3233_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_ENCHANCEHandler::.ctor()
extern MethodInfo CG_FELLOW_ENCHANCEHandler__ctor_m15035_MethodInfo;
 void CG_FELLOW_ENCHANCEHandler__ctor_m15035 (CG_FELLOW_ENCHANCEHandler_t2354 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_ENCHANCEHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_ENCHANCEHandler_Execute_m15036_MethodInfo;
 uint32_t CG_FELLOW_ENCHANCEHandler_Execute_m15036 (CG_FELLOW_ENCHANCEHandler_t2354 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_ENCHANCE_t3233 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_ENCHANCE_t3233 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_ENCHANCE_t3233_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_ENCHANCEHandler
extern TypeInfo CG_FELLOW_ENCHANCEHandler_t2354_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_ENCHANCEHandler::.ctor()
MethodInfo CG_FELLOW_ENCHANCEHandler__ctor_m15035_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_ENCHANCEHandler__ctor_m15035/* method */
	, &CG_FELLOW_ENCHANCEHandler_t2354_il2cpp_TypeInfo/* declaring_type */
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
	, 8511/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_ENCHANCEHandler_t2354_CG_FELLOW_ENCHANCEHandler_Execute_m15036_ParameterInfos[] = 
{
	{"ipacket", 0, 134222173, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_ENCHANCEHandler_t2354_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_ENCHANCEHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_ENCHANCEHandler_Execute_m15036_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_ENCHANCEHandler_Execute_m15036/* method */
	, &CG_FELLOW_ENCHANCEHandler_t2354_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_ENCHANCEHandler_t2354_CG_FELLOW_ENCHANCEHandler_Execute_m15036_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8512/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_ENCHANCEHandler_t2354_MethodInfos[] =
{
	&CG_FELLOW_ENCHANCEHandler__ctor_m15035_MethodInfo,
	&CG_FELLOW_ENCHANCEHandler_Execute_m15036_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_ENCHANCEHandler_Execute_m15036_MethodInfo;
static MethodInfo* CG_FELLOW_ENCHANCEHandler_t2354_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_ENCHANCEHandler_Execute_m15036_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_ENCHANCEHandler_t2354_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_ENCHANCEHandler_t2354_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_ENCHANCEHandler_t2354_0_0_0;
extern Il2CppType CG_FELLOW_ENCHANCEHandler_t2354_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_ENCHANCEHandler_t2354;
extern TypeInfo CG_FELLOW_ENCHANCEHandler_t2354_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_ENCHANCEHandler_t2354_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_ENCHANCEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_ENCHANCEHandler_t2354_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_ENCHANCEHandler_t2354_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_ENCHANCEHandler_t2354_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_ENCHANCEHandler_t2354_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_ENCHANCEHandler_t2354_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_ENCHANCEHandler_t2354_0_0_0/* byval_arg */
	, &CG_FELLOW_ENCHANCEHandler_t2354_1_0_0/* this_arg */
	, CG_FELLOW_ENCHANCEHandler_t2354_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_ENCHANCEHandler_t2354)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_REBIRTHHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_REBIRTHHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_REBIRTHHandler_t2355_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_REBIRTHHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_REBIRTHHaMethodDeclarations.h"

// CG_FELLOW_REBIRTH
#include "AssemblyU2DCSharp_CG_FELLOW_REBIRTH.h"
extern TypeInfo CG_FELLOW_REBIRTH_t3577_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_REBIRTHHandler::.ctor()
extern MethodInfo CG_FELLOW_REBIRTHHandler__ctor_m15037_MethodInfo;
 void CG_FELLOW_REBIRTHHandler__ctor_m15037 (CG_FELLOW_REBIRTHHandler_t2355 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_REBIRTHHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_REBIRTHHandler_Execute_m15038_MethodInfo;
 uint32_t CG_FELLOW_REBIRTHHandler_Execute_m15038 (CG_FELLOW_REBIRTHHandler_t2355 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_REBIRTH_t3577 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_REBIRTH_t3577 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_REBIRTH_t3577_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_REBIRTHHandler
extern TypeInfo CG_FELLOW_REBIRTHHandler_t2355_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_REBIRTHHandler::.ctor()
MethodInfo CG_FELLOW_REBIRTHHandler__ctor_m15037_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_REBIRTHHandler__ctor_m15037/* method */
	, &CG_FELLOW_REBIRTHHandler_t2355_il2cpp_TypeInfo/* declaring_type */
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
	, 8513/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_REBIRTHHandler_t2355_CG_FELLOW_REBIRTHHandler_Execute_m15038_ParameterInfos[] = 
{
	{"ipacket", 0, 134222174, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_REBIRTHHandler_t2355_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_REBIRTHHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_REBIRTHHandler_Execute_m15038_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_REBIRTHHandler_Execute_m15038/* method */
	, &CG_FELLOW_REBIRTHHandler_t2355_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_REBIRTHHandler_t2355_CG_FELLOW_REBIRTHHandler_Execute_m15038_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8514/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_REBIRTHHandler_t2355_MethodInfos[] =
{
	&CG_FELLOW_REBIRTHHandler__ctor_m15037_MethodInfo,
	&CG_FELLOW_REBIRTHHandler_Execute_m15038_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_REBIRTHHandler_Execute_m15038_MethodInfo;
static MethodInfo* CG_FELLOW_REBIRTHHandler_t2355_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_REBIRTHHandler_Execute_m15038_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_REBIRTHHandler_t2355_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_REBIRTHHandler_t2355_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_REBIRTHHandler_t2355_0_0_0;
extern Il2CppType CG_FELLOW_REBIRTHHandler_t2355_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_REBIRTHHandler_t2355;
extern TypeInfo CG_FELLOW_REBIRTHHandler_t2355_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_REBIRTHHandler_t2355_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_REBIRTHHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_REBIRTHHandler_t2355_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_REBIRTHHandler_t2355_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_REBIRTHHandler_t2355_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_REBIRTHHandler_t2355_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_REBIRTHHandler_t2355_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_REBIRTHHandler_t2355_0_0_0/* byval_arg */
	, &CG_FELLOW_REBIRTHHandler_t2355_1_0_0/* this_arg */
	, CG_FELLOW_REBIRTHHandler_t2355_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_REBIRTHHandler_t2355)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_RESET_POINTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_RESET_POI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_RESET_POINTHandler_t2356_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_RESET_POINTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_RESET_POIMethodDeclarations.h"

// CG_FELLOW_RESET_POINT
#include "AssemblyU2DCSharp_CG_FELLOW_RESET_POINT.h"
extern TypeInfo CG_FELLOW_RESET_POINT_t3336_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_RESET_POINTHandler::.ctor()
extern MethodInfo CG_FELLOW_RESET_POINTHandler__ctor_m15039_MethodInfo;
 void CG_FELLOW_RESET_POINTHandler__ctor_m15039 (CG_FELLOW_RESET_POINTHandler_t2356 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_RESET_POINTHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_RESET_POINTHandler_Execute_m15040_MethodInfo;
 uint32_t CG_FELLOW_RESET_POINTHandler_Execute_m15040 (CG_FELLOW_RESET_POINTHandler_t2356 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_RESET_POINT_t3336 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_RESET_POINT_t3336 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_RESET_POINT_t3336_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_RESET_POINTHandler
extern TypeInfo CG_FELLOW_RESET_POINTHandler_t2356_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_RESET_POINTHandler::.ctor()
MethodInfo CG_FELLOW_RESET_POINTHandler__ctor_m15039_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_RESET_POINTHandler__ctor_m15039/* method */
	, &CG_FELLOW_RESET_POINTHandler_t2356_il2cpp_TypeInfo/* declaring_type */
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
	, 8515/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_RESET_POINTHandler_t2356_CG_FELLOW_RESET_POINTHandler_Execute_m15040_ParameterInfos[] = 
{
	{"ipacket", 0, 134222175, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_RESET_POINTHandler_t2356_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_RESET_POINTHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_RESET_POINTHandler_Execute_m15040_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_RESET_POINTHandler_Execute_m15040/* method */
	, &CG_FELLOW_RESET_POINTHandler_t2356_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_RESET_POINTHandler_t2356_CG_FELLOW_RESET_POINTHandler_Execute_m15040_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8516/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_RESET_POINTHandler_t2356_MethodInfos[] =
{
	&CG_FELLOW_RESET_POINTHandler__ctor_m15039_MethodInfo,
	&CG_FELLOW_RESET_POINTHandler_Execute_m15040_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_RESET_POINTHandler_Execute_m15040_MethodInfo;
static MethodInfo* CG_FELLOW_RESET_POINTHandler_t2356_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_RESET_POINTHandler_Execute_m15040_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_RESET_POINTHandler_t2356_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_RESET_POINTHandler_t2356_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_RESET_POINTHandler_t2356_0_0_0;
extern Il2CppType CG_FELLOW_RESET_POINTHandler_t2356_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_RESET_POINTHandler_t2356;
extern TypeInfo CG_FELLOW_RESET_POINTHandler_t2356_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_RESET_POINTHandler_t2356_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_RESET_POINTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_RESET_POINTHandler_t2356_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_RESET_POINTHandler_t2356_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_RESET_POINTHandler_t2356_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_RESET_POINTHandler_t2356_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_RESET_POINTHandler_t2356_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_RESET_POINTHandler_t2356_0_0_0/* byval_arg */
	, &CG_FELLOW_RESET_POINTHandler_t2356_1_0_0/* this_arg */
	, CG_FELLOW_RESET_POINTHandler_t2356_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_RESET_POINTHandler_t2356)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_STARHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_STARHandl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_STARHandler_t2357_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_STARHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_STARHandlMethodDeclarations.h"

// CG_FELLOW_STAR
#include "AssemblyU2DCSharp_CG_FELLOW_STAR.h"
extern TypeInfo CG_FELLOW_STAR_t3231_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_STARHandler::.ctor()
extern MethodInfo CG_FELLOW_STARHandler__ctor_m15041_MethodInfo;
 void CG_FELLOW_STARHandler__ctor_m15041 (CG_FELLOW_STARHandler_t2357 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_STARHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_STARHandler_Execute_m15042_MethodInfo;
 uint32_t CG_FELLOW_STARHandler_Execute_m15042 (CG_FELLOW_STARHandler_t2357 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_STAR_t3231 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_STAR_t3231 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_STAR_t3231_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_STARHandler
extern TypeInfo CG_FELLOW_STARHandler_t2357_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_STARHandler::.ctor()
MethodInfo CG_FELLOW_STARHandler__ctor_m15041_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_STARHandler__ctor_m15041/* method */
	, &CG_FELLOW_STARHandler_t2357_il2cpp_TypeInfo/* declaring_type */
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
	, 8517/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_STARHandler_t2357_CG_FELLOW_STARHandler_Execute_m15042_ParameterInfos[] = 
{
	{"ipacket", 0, 134222176, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_STARHandler_t2357_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_STARHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_STARHandler_Execute_m15042_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_STARHandler_Execute_m15042/* method */
	, &CG_FELLOW_STARHandler_t2357_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_STARHandler_t2357_CG_FELLOW_STARHandler_Execute_m15042_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8518/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_STARHandler_t2357_MethodInfos[] =
{
	&CG_FELLOW_STARHandler__ctor_m15041_MethodInfo,
	&CG_FELLOW_STARHandler_Execute_m15042_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_STARHandler_Execute_m15042_MethodInfo;
static MethodInfo* CG_FELLOW_STARHandler_t2357_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_STARHandler_Execute_m15042_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_STARHandler_t2357_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_STARHandler_t2357_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_STARHandler_t2357_0_0_0;
extern Il2CppType CG_FELLOW_STARHandler_t2357_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_STARHandler_t2357;
extern TypeInfo CG_FELLOW_STARHandler_t2357_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_STARHandler_t2357_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_STARHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_STARHandler_t2357_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_STARHandler_t2357_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_STARHandler_t2357_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_STARHandler_t2357_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_STARHandler_t2357_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_STARHandler_t2357_0_0_0/* byval_arg */
	, &CG_FELLOW_STARHandler_t2357_1_0_0/* this_arg */
	, CG_FELLOW_STARHandler_t2357_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_STARHandler_t2357)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_TALENTSKILL_LEVELUPHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_TALENTSKI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_TALENTSKILL_LEVELUPHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_TALENTSKIMethodDeclarations.h"

// CG_FELLOW_TALENTSKILL_LEVELUP
#include "AssemblyU2DCSharp_CG_FELLOW_TALENTSKILL_LEVELUP.h"
extern TypeInfo CG_FELLOW_TALENTSKILL_LEVELUP_t3584_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_TALENTSKILL_LEVELUPHandler::.ctor()
extern MethodInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler__ctor_m15043_MethodInfo;
 void CG_FELLOW_TALENTSKILL_LEVELUPHandler__ctor_m15043 (CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_TALENTSKILL_LEVELUPHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler_Execute_m15044_MethodInfo;
 uint32_t CG_FELLOW_TALENTSKILL_LEVELUPHandler_Execute_m15044 (CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_TALENTSKILL_LEVELUP_t3584 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_TALENTSKILL_LEVELUP_t3584 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_TALENTSKILL_LEVELUP_t3584_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_TALENTSKILL_LEVELUPHandler
extern TypeInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_TALENTSKILL_LEVELUPHandler::.ctor()
MethodInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler__ctor_m15043_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_TALENTSKILL_LEVELUPHandler__ctor_m15043/* method */
	, &CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_il2cpp_TypeInfo/* declaring_type */
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
	, 8519/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_CG_FELLOW_TALENTSKILL_LEVELUPHandler_Execute_m15044_ParameterInfos[] = 
{
	{"ipacket", 0, 134222177, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_TALENTSKILL_LEVELUPHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler_Execute_m15044_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_TALENTSKILL_LEVELUPHandler_Execute_m15044/* method */
	, &CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_CG_FELLOW_TALENTSKILL_LEVELUPHandler_Execute_m15044_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8520/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_MethodInfos[] =
{
	&CG_FELLOW_TALENTSKILL_LEVELUPHandler__ctor_m15043_MethodInfo,
	&CG_FELLOW_TALENTSKILL_LEVELUPHandler_Execute_m15044_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler_Execute_m15044_MethodInfo;
static MethodInfo* CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_TALENTSKILL_LEVELUPHandler_Execute_m15044_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_0_0_0;
extern Il2CppType CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358;
extern TypeInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_TALENTSKILL_LEVELUPHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_0_0_0/* byval_arg */
	, &CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_1_0_0/* this_arg */
	, CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_TALENTSKILL_LEVELUPHandler_t2358)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FELLOW_XISUIHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_XISUIHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FELLOW_XISUIHandler_t2359_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FELLOW_XISUIHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FELLOW_XISUIHandMethodDeclarations.h"

// CG_FELLOW_XISUI
#include "AssemblyU2DCSharp_CG_FELLOW_XISUI.h"
extern TypeInfo CG_FELLOW_XISUI_t3578_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FELLOW_XISUIHandler::.ctor()
extern MethodInfo CG_FELLOW_XISUIHandler__ctor_m15045_MethodInfo;
 void CG_FELLOW_XISUIHandler__ctor_m15045 (CG_FELLOW_XISUIHandler_t2359 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_XISUIHandler::Execute(PacketDistributed)
extern MethodInfo CG_FELLOW_XISUIHandler_Execute_m15046_MethodInfo;
 uint32_t CG_FELLOW_XISUIHandler_Execute_m15046 (CG_FELLOW_XISUIHandler_t2359 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FELLOW_XISUI_t3578 * V_0 = {0};
	{
		V_0 = ((CG_FELLOW_XISUI_t3578 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FELLOW_XISUI_t3578_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FELLOW_XISUIHandler
extern TypeInfo CG_FELLOW_XISUIHandler_t2359_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FELLOW_XISUIHandler::.ctor()
MethodInfo CG_FELLOW_XISUIHandler__ctor_m15045_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FELLOW_XISUIHandler__ctor_m15045/* method */
	, &CG_FELLOW_XISUIHandler_t2359_il2cpp_TypeInfo/* declaring_type */
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
	, 8521/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FELLOW_XISUIHandler_t2359_CG_FELLOW_XISUIHandler_Execute_m15046_ParameterInfos[] = 
{
	{"ipacket", 0, 134222178, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FELLOW_XISUIHandler_t2359_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FELLOW_XISUIHandler::Execute(PacketDistributed)
MethodInfo CG_FELLOW_XISUIHandler_Execute_m15046_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FELLOW_XISUIHandler_Execute_m15046/* method */
	, &CG_FELLOW_XISUIHandler_t2359_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FELLOW_XISUIHandler_t2359_CG_FELLOW_XISUIHandler_Execute_m15046_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8522/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FELLOW_XISUIHandler_t2359_MethodInfos[] =
{
	&CG_FELLOW_XISUIHandler__ctor_m15045_MethodInfo,
	&CG_FELLOW_XISUIHandler_Execute_m15046_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FELLOW_XISUIHandler_Execute_m15046_MethodInfo;
static MethodInfo* CG_FELLOW_XISUIHandler_t2359_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FELLOW_XISUIHandler_Execute_m15046_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FELLOW_XISUIHandler_t2359_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FELLOW_XISUIHandler_t2359_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FELLOW_XISUIHandler_t2359_0_0_0;
extern Il2CppType CG_FELLOW_XISUIHandler_t2359_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FELLOW_XISUIHandler_t2359;
extern TypeInfo CG_FELLOW_XISUIHandler_t2359_il2cpp_TypeInfo;
TypeInfo CG_FELLOW_XISUIHandler_t2359_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FELLOW_XISUIHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FELLOW_XISUIHandler_t2359_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FELLOW_XISUIHandler_t2359_il2cpp_TypeInfo/* element_class */
	, CG_FELLOW_XISUIHandler_t2359_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FELLOW_XISUIHandler_t2359_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FELLOW_XISUIHandler_t2359_il2cpp_TypeInfo/* cast_class */
	, &CG_FELLOW_XISUIHandler_t2359_0_0_0/* byval_arg */
	, &CG_FELLOW_XISUIHandler_t2359_1_0_0/* this_arg */
	, CG_FELLOW_XISUIHandler_t2359_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FELLOW_XISUIHandler_t2359)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FIGHTGUILDWARPOINTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FIGHTGUILDWARPOI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FIGHTGUILDWARPOINTHandler_t2360_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FIGHTGUILDWARPOINTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FIGHTGUILDWARPOIMethodDeclarations.h"

// CG_FIGHTGUILDWARPOINT
#include "AssemblyU2DCSharp_CG_FIGHTGUILDWARPOINT.h"
extern TypeInfo CG_FIGHTGUILDWARPOINT_t3309_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FIGHTGUILDWARPOINTHandler::.ctor()
extern MethodInfo CG_FIGHTGUILDWARPOINTHandler__ctor_m15047_MethodInfo;
 void CG_FIGHTGUILDWARPOINTHandler__ctor_m15047 (CG_FIGHTGUILDWARPOINTHandler_t2360 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FIGHTGUILDWARPOINTHandler::Execute(PacketDistributed)
extern MethodInfo CG_FIGHTGUILDWARPOINTHandler_Execute_m15048_MethodInfo;
 uint32_t CG_FIGHTGUILDWARPOINTHandler_Execute_m15048 (CG_FIGHTGUILDWARPOINTHandler_t2360 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FIGHTGUILDWARPOINT_t3309 * V_0 = {0};
	{
		V_0 = ((CG_FIGHTGUILDWARPOINT_t3309 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FIGHTGUILDWARPOINT_t3309_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FIGHTGUILDWARPOINTHandler
extern TypeInfo CG_FIGHTGUILDWARPOINTHandler_t2360_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FIGHTGUILDWARPOINTHandler::.ctor()
MethodInfo CG_FIGHTGUILDWARPOINTHandler__ctor_m15047_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FIGHTGUILDWARPOINTHandler__ctor_m15047/* method */
	, &CG_FIGHTGUILDWARPOINTHandler_t2360_il2cpp_TypeInfo/* declaring_type */
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
	, 8523/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FIGHTGUILDWARPOINTHandler_t2360_CG_FIGHTGUILDWARPOINTHandler_Execute_m15048_ParameterInfos[] = 
{
	{"ipacket", 0, 134222179, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FIGHTGUILDWARPOINTHandler_t2360_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FIGHTGUILDWARPOINTHandler::Execute(PacketDistributed)
MethodInfo CG_FIGHTGUILDWARPOINTHandler_Execute_m15048_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FIGHTGUILDWARPOINTHandler_Execute_m15048/* method */
	, &CG_FIGHTGUILDWARPOINTHandler_t2360_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FIGHTGUILDWARPOINTHandler_t2360_CG_FIGHTGUILDWARPOINTHandler_Execute_m15048_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8524/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FIGHTGUILDWARPOINTHandler_t2360_MethodInfos[] =
{
	&CG_FIGHTGUILDWARPOINTHandler__ctor_m15047_MethodInfo,
	&CG_FIGHTGUILDWARPOINTHandler_Execute_m15048_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FIGHTGUILDWARPOINTHandler_Execute_m15048_MethodInfo;
static MethodInfo* CG_FIGHTGUILDWARPOINTHandler_t2360_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FIGHTGUILDWARPOINTHandler_Execute_m15048_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FIGHTGUILDWARPOINTHandler_t2360_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FIGHTGUILDWARPOINTHandler_t2360_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FIGHTGUILDWARPOINTHandler_t2360_0_0_0;
extern Il2CppType CG_FIGHTGUILDWARPOINTHandler_t2360_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FIGHTGUILDWARPOINTHandler_t2360;
extern TypeInfo CG_FIGHTGUILDWARPOINTHandler_t2360_il2cpp_TypeInfo;
TypeInfo CG_FIGHTGUILDWARPOINTHandler_t2360_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FIGHTGUILDWARPOINTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FIGHTGUILDWARPOINTHandler_t2360_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FIGHTGUILDWARPOINTHandler_t2360_il2cpp_TypeInfo/* element_class */
	, CG_FIGHTGUILDWARPOINTHandler_t2360_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FIGHTGUILDWARPOINTHandler_t2360_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FIGHTGUILDWARPOINTHandler_t2360_il2cpp_TypeInfo/* cast_class */
	, &CG_FIGHTGUILDWARPOINTHandler_t2360_0_0_0/* byval_arg */
	, &CG_FIGHTGUILDWARPOINTHandler_t2360_1_0_0/* this_arg */
	, CG_FIGHTGUILDWARPOINTHandler_t2360_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FIGHTGUILDWARPOINTHandler_t2360)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_FINDPLAYERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FINDPLAYERHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_FINDPLAYERHandler_t2361_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_FINDPLAYERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_FINDPLAYERHandleMethodDeclarations.h"

// CG_FINDPLAYER
#include "AssemblyU2DCSharp_CG_FINDPLAYER.h"
extern TypeInfo CG_FINDPLAYER_t3041_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_FINDPLAYERHandler::.ctor()
extern MethodInfo CG_FINDPLAYERHandler__ctor_m15049_MethodInfo;
 void CG_FINDPLAYERHandler__ctor_m15049 (CG_FINDPLAYERHandler_t2361 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_FINDPLAYERHandler::Execute(PacketDistributed)
extern MethodInfo CG_FINDPLAYERHandler_Execute_m15050_MethodInfo;
 uint32_t CG_FINDPLAYERHandler_Execute_m15050 (CG_FINDPLAYERHandler_t2361 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_FINDPLAYER_t3041 * V_0 = {0};
	{
		V_0 = ((CG_FINDPLAYER_t3041 *)Castclass(___ipacket, InitializedTypeInfo(&CG_FINDPLAYER_t3041_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_FINDPLAYERHandler
extern TypeInfo CG_FINDPLAYERHandler_t2361_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_FINDPLAYERHandler::.ctor()
MethodInfo CG_FINDPLAYERHandler__ctor_m15049_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_FINDPLAYERHandler__ctor_m15049/* method */
	, &CG_FINDPLAYERHandler_t2361_il2cpp_TypeInfo/* declaring_type */
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
	, 8525/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_FINDPLAYERHandler_t2361_CG_FINDPLAYERHandler_Execute_m15050_ParameterInfos[] = 
{
	{"ipacket", 0, 134222180, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_FINDPLAYERHandler_t2361_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_FINDPLAYERHandler::Execute(PacketDistributed)
MethodInfo CG_FINDPLAYERHandler_Execute_m15050_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_FINDPLAYERHandler_Execute_m15050/* method */
	, &CG_FINDPLAYERHandler_t2361_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_FINDPLAYERHandler_t2361_CG_FINDPLAYERHandler_Execute_m15050_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8526/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_FINDPLAYERHandler_t2361_MethodInfos[] =
{
	&CG_FINDPLAYERHandler__ctor_m15049_MethodInfo,
	&CG_FINDPLAYERHandler_Execute_m15050_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_FINDPLAYERHandler_Execute_m15050_MethodInfo;
static MethodInfo* CG_FINDPLAYERHandler_t2361_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_FINDPLAYERHandler_Execute_m15050_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_FINDPLAYERHandler_t2361_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_FINDPLAYERHandler_t2361_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_FINDPLAYERHandler_t2361_0_0_0;
extern Il2CppType CG_FINDPLAYERHandler_t2361_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_FINDPLAYERHandler_t2361;
extern TypeInfo CG_FINDPLAYERHandler_t2361_il2cpp_TypeInfo;
TypeInfo CG_FINDPLAYERHandler_t2361_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_FINDPLAYERHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_FINDPLAYERHandler_t2361_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_FINDPLAYERHandler_t2361_il2cpp_TypeInfo/* element_class */
	, CG_FINDPLAYERHandler_t2361_InterfacesTypeInfos/* implemented_interfaces */
	, CG_FINDPLAYERHandler_t2361_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_FINDPLAYERHandler_t2361_il2cpp_TypeInfo/* cast_class */
	, &CG_FINDPLAYERHandler_t2361_0_0_0/* byval_arg */
	, &CG_FINDPLAYERHandler_t2361_1_0_0/* this_arg */
	, CG_FINDPLAYERHandler_t2361_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_FINDPLAYERHandler_t2361)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GET_BELLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GET_BELLEHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GET_BELLEHandler_t2362_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GET_BELLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GET_BELLEHandlerMethodDeclarations.h"

// CG_GET_BELLE
#include "AssemblyU2DCSharp_CG_GET_BELLE.h"
extern TypeInfo CG_GET_BELLE_t3581_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GET_BELLEHandler::.ctor()
extern MethodInfo CG_GET_BELLEHandler__ctor_m15051_MethodInfo;
 void CG_GET_BELLEHandler__ctor_m15051 (CG_GET_BELLEHandler_t2362 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GET_BELLEHandler::Execute(PacketDistributed)
extern MethodInfo CG_GET_BELLEHandler_Execute_m15052_MethodInfo;
 uint32_t CG_GET_BELLEHandler_Execute_m15052 (CG_GET_BELLEHandler_t2362 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GET_BELLE_t3581 * V_0 = {0};
	{
		V_0 = ((CG_GET_BELLE_t3581 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GET_BELLE_t3581_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GET_BELLEHandler
extern TypeInfo CG_GET_BELLEHandler_t2362_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GET_BELLEHandler::.ctor()
MethodInfo CG_GET_BELLEHandler__ctor_m15051_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GET_BELLEHandler__ctor_m15051/* method */
	, &CG_GET_BELLEHandler_t2362_il2cpp_TypeInfo/* declaring_type */
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
	, 8527/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GET_BELLEHandler_t2362_CG_GET_BELLEHandler_Execute_m15052_ParameterInfos[] = 
{
	{"ipacket", 0, 134222181, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GET_BELLEHandler_t2362_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GET_BELLEHandler::Execute(PacketDistributed)
MethodInfo CG_GET_BELLEHandler_Execute_m15052_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GET_BELLEHandler_Execute_m15052/* method */
	, &CG_GET_BELLEHandler_t2362_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GET_BELLEHandler_t2362_CG_GET_BELLEHandler_Execute_m15052_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8528/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GET_BELLEHandler_t2362_MethodInfos[] =
{
	&CG_GET_BELLEHandler__ctor_m15051_MethodInfo,
	&CG_GET_BELLEHandler_Execute_m15052_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GET_BELLEHandler_Execute_m15052_MethodInfo;
static MethodInfo* CG_GET_BELLEHandler_t2362_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GET_BELLEHandler_Execute_m15052_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GET_BELLEHandler_t2362_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GET_BELLEHandler_t2362_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GET_BELLEHandler_t2362_0_0_0;
extern Il2CppType CG_GET_BELLEHandler_t2362_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GET_BELLEHandler_t2362;
extern TypeInfo CG_GET_BELLEHandler_t2362_il2cpp_TypeInfo;
TypeInfo CG_GET_BELLEHandler_t2362_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GET_BELLEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GET_BELLEHandler_t2362_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GET_BELLEHandler_t2362_il2cpp_TypeInfo/* element_class */
	, CG_GET_BELLEHandler_t2362_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GET_BELLEHandler_t2362_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GET_BELLEHandler_t2362_il2cpp_TypeInfo/* cast_class */
	, &CG_GET_BELLEHandler_t2362_0_0_0/* byval_arg */
	, &CG_GET_BELLEHandler_t2362_1_0_0/* this_arg */
	, CG_GET_BELLEHandler_t2362_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GET_BELLEHandler_t2362)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GET_NEWSERVERMOUNTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GET_NEWSERVERMOU.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GET_NEWSERVERMOUNTHandler_t2363_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GET_NEWSERVERMOUNTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GET_NEWSERVERMOUMethodDeclarations.h"

// CG_GET_NEWSERVERMOUNT
#include "AssemblyU2DCSharp_CG_GET_NEWSERVERMOUNT.h"
extern TypeInfo CG_GET_NEWSERVERMOUNT_t3583_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GET_NEWSERVERMOUNTHandler::.ctor()
extern MethodInfo CG_GET_NEWSERVERMOUNTHandler__ctor_m15053_MethodInfo;
 void CG_GET_NEWSERVERMOUNTHandler__ctor_m15053 (CG_GET_NEWSERVERMOUNTHandler_t2363 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GET_NEWSERVERMOUNTHandler::Execute(PacketDistributed)
extern MethodInfo CG_GET_NEWSERVERMOUNTHandler_Execute_m15054_MethodInfo;
 uint32_t CG_GET_NEWSERVERMOUNTHandler_Execute_m15054 (CG_GET_NEWSERVERMOUNTHandler_t2363 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GET_NEWSERVERMOUNT_t3583 * V_0 = {0};
	{
		V_0 = ((CG_GET_NEWSERVERMOUNT_t3583 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GET_NEWSERVERMOUNT_t3583_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GET_NEWSERVERMOUNTHandler
extern TypeInfo CG_GET_NEWSERVERMOUNTHandler_t2363_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GET_NEWSERVERMOUNTHandler::.ctor()
MethodInfo CG_GET_NEWSERVERMOUNTHandler__ctor_m15053_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GET_NEWSERVERMOUNTHandler__ctor_m15053/* method */
	, &CG_GET_NEWSERVERMOUNTHandler_t2363_il2cpp_TypeInfo/* declaring_type */
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
	, 8529/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GET_NEWSERVERMOUNTHandler_t2363_CG_GET_NEWSERVERMOUNTHandler_Execute_m15054_ParameterInfos[] = 
{
	{"ipacket", 0, 134222182, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GET_NEWSERVERMOUNTHandler_t2363_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GET_NEWSERVERMOUNTHandler::Execute(PacketDistributed)
MethodInfo CG_GET_NEWSERVERMOUNTHandler_Execute_m15054_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GET_NEWSERVERMOUNTHandler_Execute_m15054/* method */
	, &CG_GET_NEWSERVERMOUNTHandler_t2363_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GET_NEWSERVERMOUNTHandler_t2363_CG_GET_NEWSERVERMOUNTHandler_Execute_m15054_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8530/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GET_NEWSERVERMOUNTHandler_t2363_MethodInfos[] =
{
	&CG_GET_NEWSERVERMOUNTHandler__ctor_m15053_MethodInfo,
	&CG_GET_NEWSERVERMOUNTHandler_Execute_m15054_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GET_NEWSERVERMOUNTHandler_Execute_m15054_MethodInfo;
static MethodInfo* CG_GET_NEWSERVERMOUNTHandler_t2363_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GET_NEWSERVERMOUNTHandler_Execute_m15054_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GET_NEWSERVERMOUNTHandler_t2363_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GET_NEWSERVERMOUNTHandler_t2363_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GET_NEWSERVERMOUNTHandler_t2363_0_0_0;
extern Il2CppType CG_GET_NEWSERVERMOUNTHandler_t2363_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GET_NEWSERVERMOUNTHandler_t2363;
extern TypeInfo CG_GET_NEWSERVERMOUNTHandler_t2363_il2cpp_TypeInfo;
TypeInfo CG_GET_NEWSERVERMOUNTHandler_t2363_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GET_NEWSERVERMOUNTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GET_NEWSERVERMOUNTHandler_t2363_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GET_NEWSERVERMOUNTHandler_t2363_il2cpp_TypeInfo/* element_class */
	, CG_GET_NEWSERVERMOUNTHandler_t2363_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GET_NEWSERVERMOUNTHandler_t2363_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GET_NEWSERVERMOUNTHandler_t2363_il2cpp_TypeInfo/* cast_class */
	, &CG_GET_NEWSERVERMOUNTHandler_t2363_0_0_0/* byval_arg */
	, &CG_GET_NEWSERVERMOUNTHandler_t2363_1_0_0/* this_arg */
	, CG_GET_NEWSERVERMOUNTHandler_t2363_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GET_NEWSERVERMOUNTHandler_t2363)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GIVE_CHARMITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GIVE_CHARMITEMHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GIVE_CHARMITEMHandler_t2364_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GIVE_CHARMITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GIVE_CHARMITEMHaMethodDeclarations.h"

// CG_GIVE_CHARMITEM
#include "AssemblyU2DCSharp_CG_GIVE_CHARMITEM.h"
extern TypeInfo CG_GIVE_CHARMITEM_t3546_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GIVE_CHARMITEMHandler::.ctor()
extern MethodInfo CG_GIVE_CHARMITEMHandler__ctor_m15055_MethodInfo;
 void CG_GIVE_CHARMITEMHandler__ctor_m15055 (CG_GIVE_CHARMITEMHandler_t2364 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GIVE_CHARMITEMHandler::Execute(PacketDistributed)
extern MethodInfo CG_GIVE_CHARMITEMHandler_Execute_m15056_MethodInfo;
 uint32_t CG_GIVE_CHARMITEMHandler_Execute_m15056 (CG_GIVE_CHARMITEMHandler_t2364 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GIVE_CHARMITEM_t3546 * V_0 = {0};
	{
		V_0 = ((CG_GIVE_CHARMITEM_t3546 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GIVE_CHARMITEM_t3546_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GIVE_CHARMITEMHandler
extern TypeInfo CG_GIVE_CHARMITEMHandler_t2364_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GIVE_CHARMITEMHandler::.ctor()
MethodInfo CG_GIVE_CHARMITEMHandler__ctor_m15055_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GIVE_CHARMITEMHandler__ctor_m15055/* method */
	, &CG_GIVE_CHARMITEMHandler_t2364_il2cpp_TypeInfo/* declaring_type */
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
	, 8531/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GIVE_CHARMITEMHandler_t2364_CG_GIVE_CHARMITEMHandler_Execute_m15056_ParameterInfos[] = 
{
	{"ipacket", 0, 134222183, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GIVE_CHARMITEMHandler_t2364_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GIVE_CHARMITEMHandler::Execute(PacketDistributed)
MethodInfo CG_GIVE_CHARMITEMHandler_Execute_m15056_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GIVE_CHARMITEMHandler_Execute_m15056/* method */
	, &CG_GIVE_CHARMITEMHandler_t2364_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GIVE_CHARMITEMHandler_t2364_CG_GIVE_CHARMITEMHandler_Execute_m15056_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8532/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GIVE_CHARMITEMHandler_t2364_MethodInfos[] =
{
	&CG_GIVE_CHARMITEMHandler__ctor_m15055_MethodInfo,
	&CG_GIVE_CHARMITEMHandler_Execute_m15056_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GIVE_CHARMITEMHandler_Execute_m15056_MethodInfo;
static MethodInfo* CG_GIVE_CHARMITEMHandler_t2364_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GIVE_CHARMITEMHandler_Execute_m15056_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GIVE_CHARMITEMHandler_t2364_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GIVE_CHARMITEMHandler_t2364_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GIVE_CHARMITEMHandler_t2364_0_0_0;
extern Il2CppType CG_GIVE_CHARMITEMHandler_t2364_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GIVE_CHARMITEMHandler_t2364;
extern TypeInfo CG_GIVE_CHARMITEMHandler_t2364_il2cpp_TypeInfo;
TypeInfo CG_GIVE_CHARMITEMHandler_t2364_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GIVE_CHARMITEMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GIVE_CHARMITEMHandler_t2364_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GIVE_CHARMITEMHandler_t2364_il2cpp_TypeInfo/* element_class */
	, CG_GIVE_CHARMITEMHandler_t2364_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GIVE_CHARMITEMHandler_t2364_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GIVE_CHARMITEMHandler_t2364_il2cpp_TypeInfo/* cast_class */
	, &CG_GIVE_CHARMITEMHandler_t2364_0_0_0/* byval_arg */
	, &CG_GIVE_CHARMITEMHandler_t2364_1_0_0/* this_arg */
	, CG_GIVE_CHARMITEMHandler_t2364_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GIVE_CHARMITEMHandler_t2364)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GMCOMMANDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GMCOMMANDHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GMCOMMANDHandler_t2365_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GMCOMMANDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GMCOMMANDHandlerMethodDeclarations.h"

// CG_GMCOMMAND
#include "AssemblyU2DCSharp_CG_GMCOMMAND.h"
extern TypeInfo CG_GMCOMMAND_t3045_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GMCOMMANDHandler::.ctor()
extern MethodInfo CG_GMCOMMANDHandler__ctor_m15057_MethodInfo;
 void CG_GMCOMMANDHandler__ctor_m15057 (CG_GMCOMMANDHandler_t2365 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GMCOMMANDHandler::Execute(PacketDistributed)
extern MethodInfo CG_GMCOMMANDHandler_Execute_m15058_MethodInfo;
 uint32_t CG_GMCOMMANDHandler_Execute_m15058 (CG_GMCOMMANDHandler_t2365 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GMCOMMAND_t3045 * V_0 = {0};
	{
		V_0 = ((CG_GMCOMMAND_t3045 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GMCOMMAND_t3045_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GMCOMMANDHandler
extern TypeInfo CG_GMCOMMANDHandler_t2365_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GMCOMMANDHandler::.ctor()
MethodInfo CG_GMCOMMANDHandler__ctor_m15057_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GMCOMMANDHandler__ctor_m15057/* method */
	, &CG_GMCOMMANDHandler_t2365_il2cpp_TypeInfo/* declaring_type */
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
	, 8533/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GMCOMMANDHandler_t2365_CG_GMCOMMANDHandler_Execute_m15058_ParameterInfos[] = 
{
	{"ipacket", 0, 134222184, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GMCOMMANDHandler_t2365_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GMCOMMANDHandler::Execute(PacketDistributed)
MethodInfo CG_GMCOMMANDHandler_Execute_m15058_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GMCOMMANDHandler_Execute_m15058/* method */
	, &CG_GMCOMMANDHandler_t2365_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GMCOMMANDHandler_t2365_CG_GMCOMMANDHandler_Execute_m15058_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8534/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GMCOMMANDHandler_t2365_MethodInfos[] =
{
	&CG_GMCOMMANDHandler__ctor_m15057_MethodInfo,
	&CG_GMCOMMANDHandler_Execute_m15058_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GMCOMMANDHandler_Execute_m15058_MethodInfo;
static MethodInfo* CG_GMCOMMANDHandler_t2365_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GMCOMMANDHandler_Execute_m15058_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GMCOMMANDHandler_t2365_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GMCOMMANDHandler_t2365_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GMCOMMANDHandler_t2365_0_0_0;
extern Il2CppType CG_GMCOMMANDHandler_t2365_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GMCOMMANDHandler_t2365;
extern TypeInfo CG_GMCOMMANDHandler_t2365_il2cpp_TypeInfo;
TypeInfo CG_GMCOMMANDHandler_t2365_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GMCOMMANDHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GMCOMMANDHandler_t2365_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GMCOMMANDHandler_t2365_il2cpp_TypeInfo/* element_class */
	, CG_GMCOMMANDHandler_t2365_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GMCOMMANDHandler_t2365_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GMCOMMANDHandler_t2365_il2cpp_TypeInfo/* cast_class */
	, &CG_GMCOMMANDHandler_t2365_0_0_0/* byval_arg */
	, &CG_GMCOMMANDHandler_t2365_1_0_0/* this_arg */
	, CG_GMCOMMANDHandler_t2365_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GMCOMMANDHandler_t2365)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GONGJISHOP_BUYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GONGJISHOP_BUYHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GONGJISHOP_BUYHandler_t2366_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GONGJISHOP_BUYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GONGJISHOP_BUYHaMethodDeclarations.h"

// CG_GONGJISHOP_BUY
#include "AssemblyU2DCSharp_CG_GONGJISHOP_BUY.h"
extern TypeInfo CG_GONGJISHOP_BUY_t3544_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GONGJISHOP_BUYHandler::.ctor()
extern MethodInfo CG_GONGJISHOP_BUYHandler__ctor_m15059_MethodInfo;
 void CG_GONGJISHOP_BUYHandler__ctor_m15059 (CG_GONGJISHOP_BUYHandler_t2366 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GONGJISHOP_BUYHandler::Execute(PacketDistributed)
extern MethodInfo CG_GONGJISHOP_BUYHandler_Execute_m15060_MethodInfo;
 uint32_t CG_GONGJISHOP_BUYHandler_Execute_m15060 (CG_GONGJISHOP_BUYHandler_t2366 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GONGJISHOP_BUY_t3544 * V_0 = {0};
	{
		V_0 = ((CG_GONGJISHOP_BUY_t3544 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GONGJISHOP_BUY_t3544_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GONGJISHOP_BUYHandler
extern TypeInfo CG_GONGJISHOP_BUYHandler_t2366_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GONGJISHOP_BUYHandler::.ctor()
MethodInfo CG_GONGJISHOP_BUYHandler__ctor_m15059_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GONGJISHOP_BUYHandler__ctor_m15059/* method */
	, &CG_GONGJISHOP_BUYHandler_t2366_il2cpp_TypeInfo/* declaring_type */
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
	, 8535/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GONGJISHOP_BUYHandler_t2366_CG_GONGJISHOP_BUYHandler_Execute_m15060_ParameterInfos[] = 
{
	{"ipacket", 0, 134222185, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GONGJISHOP_BUYHandler_t2366_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GONGJISHOP_BUYHandler::Execute(PacketDistributed)
MethodInfo CG_GONGJISHOP_BUYHandler_Execute_m15060_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GONGJISHOP_BUYHandler_Execute_m15060/* method */
	, &CG_GONGJISHOP_BUYHandler_t2366_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GONGJISHOP_BUYHandler_t2366_CG_GONGJISHOP_BUYHandler_Execute_m15060_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8536/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GONGJISHOP_BUYHandler_t2366_MethodInfos[] =
{
	&CG_GONGJISHOP_BUYHandler__ctor_m15059_MethodInfo,
	&CG_GONGJISHOP_BUYHandler_Execute_m15060_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GONGJISHOP_BUYHandler_Execute_m15060_MethodInfo;
static MethodInfo* CG_GONGJISHOP_BUYHandler_t2366_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GONGJISHOP_BUYHandler_Execute_m15060_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GONGJISHOP_BUYHandler_t2366_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GONGJISHOP_BUYHandler_t2366_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GONGJISHOP_BUYHandler_t2366_0_0_0;
extern Il2CppType CG_GONGJISHOP_BUYHandler_t2366_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GONGJISHOP_BUYHandler_t2366;
extern TypeInfo CG_GONGJISHOP_BUYHandler_t2366_il2cpp_TypeInfo;
TypeInfo CG_GONGJISHOP_BUYHandler_t2366_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GONGJISHOP_BUYHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GONGJISHOP_BUYHandler_t2366_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GONGJISHOP_BUYHandler_t2366_il2cpp_TypeInfo/* element_class */
	, CG_GONGJISHOP_BUYHandler_t2366_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GONGJISHOP_BUYHandler_t2366_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GONGJISHOP_BUYHandler_t2366_il2cpp_TypeInfo/* cast_class */
	, &CG_GONGJISHOP_BUYHandler_t2366_0_0_0/* byval_arg */
	, &CG_GONGJISHOP_BUYHandler_t2366_1_0_0/* this_arg */
	, CG_GONGJISHOP_BUYHandler_t2366_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GONGJISHOP_BUYHandler_t2366)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_APPROVE_RESERVEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_APPROVE_RE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_APPROVE_RESERVEHandler_t2367_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_APPROVE_RESERVEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_APPROVE_REMethodDeclarations.h"

// CG_GUILD_APPROVE_RESERVE
#include "AssemblyU2DCSharp_CG_GUILD_APPROVE_RESERVE.h"
extern TypeInfo CG_GUILD_APPROVE_RESERVE_t3250_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_APPROVE_RESERVEHandler::.ctor()
extern MethodInfo CG_GUILD_APPROVE_RESERVEHandler__ctor_m15061_MethodInfo;
 void CG_GUILD_APPROVE_RESERVEHandler__ctor_m15061 (CG_GUILD_APPROVE_RESERVEHandler_t2367 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_APPROVE_RESERVEHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_APPROVE_RESERVEHandler_Execute_m15062_MethodInfo;
 uint32_t CG_GUILD_APPROVE_RESERVEHandler_Execute_m15062 (CG_GUILD_APPROVE_RESERVEHandler_t2367 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_APPROVE_RESERVE_t3250 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_APPROVE_RESERVE_t3250 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_APPROVE_RESERVE_t3250_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_APPROVE_RESERVEHandler
extern TypeInfo CG_GUILD_APPROVE_RESERVEHandler_t2367_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_APPROVE_RESERVEHandler::.ctor()
MethodInfo CG_GUILD_APPROVE_RESERVEHandler__ctor_m15061_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_APPROVE_RESERVEHandler__ctor_m15061/* method */
	, &CG_GUILD_APPROVE_RESERVEHandler_t2367_il2cpp_TypeInfo/* declaring_type */
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
	, 8537/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_APPROVE_RESERVEHandler_t2367_CG_GUILD_APPROVE_RESERVEHandler_Execute_m15062_ParameterInfos[] = 
{
	{"ipacket", 0, 134222186, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_APPROVE_RESERVEHandler_t2367_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_APPROVE_RESERVEHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_APPROVE_RESERVEHandler_Execute_m15062_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_APPROVE_RESERVEHandler_Execute_m15062/* method */
	, &CG_GUILD_APPROVE_RESERVEHandler_t2367_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_APPROVE_RESERVEHandler_t2367_CG_GUILD_APPROVE_RESERVEHandler_Execute_m15062_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8538/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_APPROVE_RESERVEHandler_t2367_MethodInfos[] =
{
	&CG_GUILD_APPROVE_RESERVEHandler__ctor_m15061_MethodInfo,
	&CG_GUILD_APPROVE_RESERVEHandler_Execute_m15062_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_APPROVE_RESERVEHandler_Execute_m15062_MethodInfo;
static MethodInfo* CG_GUILD_APPROVE_RESERVEHandler_t2367_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_APPROVE_RESERVEHandler_Execute_m15062_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_APPROVE_RESERVEHandler_t2367_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_APPROVE_RESERVEHandler_t2367_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_APPROVE_RESERVEHandler_t2367_0_0_0;
extern Il2CppType CG_GUILD_APPROVE_RESERVEHandler_t2367_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_APPROVE_RESERVEHandler_t2367;
extern TypeInfo CG_GUILD_APPROVE_RESERVEHandler_t2367_il2cpp_TypeInfo;
TypeInfo CG_GUILD_APPROVE_RESERVEHandler_t2367_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_APPROVE_RESERVEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_APPROVE_RESERVEHandler_t2367_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_APPROVE_RESERVEHandler_t2367_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_APPROVE_RESERVEHandler_t2367_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_APPROVE_RESERVEHandler_t2367_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_APPROVE_RESERVEHandler_t2367_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_APPROVE_RESERVEHandler_t2367_0_0_0/* byval_arg */
	, &CG_GUILD_APPROVE_RESERVEHandler_t2367_1_0_0/* this_arg */
	, CG_GUILD_APPROVE_RESERVEHandler_t2367_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_APPROVE_RESERVEHandler_t2367)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_CHANGE_JOBNAMEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_CHANGE_JOB.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_CHANGE_JOBNAMEHandler_t2368_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_CHANGE_JOBNAMEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_CHANGE_JOBMethodDeclarations.h"

// CG_GUILD_CHANGE_JOBNAME
#include "AssemblyU2DCSharp_CG_GUILD_CHANGE_JOBNAME.h"
extern TypeInfo CG_GUILD_CHANGE_JOBNAME_t3608_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_CHANGE_JOBNAMEHandler::.ctor()
extern MethodInfo CG_GUILD_CHANGE_JOBNAMEHandler__ctor_m15063_MethodInfo;
 void CG_GUILD_CHANGE_JOBNAMEHandler__ctor_m15063 (CG_GUILD_CHANGE_JOBNAMEHandler_t2368 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_CHANGE_JOBNAMEHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_CHANGE_JOBNAMEHandler_Execute_m15064_MethodInfo;
 uint32_t CG_GUILD_CHANGE_JOBNAMEHandler_Execute_m15064 (CG_GUILD_CHANGE_JOBNAMEHandler_t2368 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_CHANGE_JOBNAME_t3608 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_CHANGE_JOBNAME_t3608 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_CHANGE_JOBNAME_t3608_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_CHANGE_JOBNAMEHandler
extern TypeInfo CG_GUILD_CHANGE_JOBNAMEHandler_t2368_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_CHANGE_JOBNAMEHandler::.ctor()
MethodInfo CG_GUILD_CHANGE_JOBNAMEHandler__ctor_m15063_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_CHANGE_JOBNAMEHandler__ctor_m15063/* method */
	, &CG_GUILD_CHANGE_JOBNAMEHandler_t2368_il2cpp_TypeInfo/* declaring_type */
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
	, 8539/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_CHANGE_JOBNAMEHandler_t2368_CG_GUILD_CHANGE_JOBNAMEHandler_Execute_m15064_ParameterInfos[] = 
{
	{"ipacket", 0, 134222187, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_CHANGE_JOBNAMEHandler_t2368_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_CHANGE_JOBNAMEHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_CHANGE_JOBNAMEHandler_Execute_m15064_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_CHANGE_JOBNAMEHandler_Execute_m15064/* method */
	, &CG_GUILD_CHANGE_JOBNAMEHandler_t2368_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_CHANGE_JOBNAMEHandler_t2368_CG_GUILD_CHANGE_JOBNAMEHandler_Execute_m15064_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8540/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_CHANGE_JOBNAMEHandler_t2368_MethodInfos[] =
{
	&CG_GUILD_CHANGE_JOBNAMEHandler__ctor_m15063_MethodInfo,
	&CG_GUILD_CHANGE_JOBNAMEHandler_Execute_m15064_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_CHANGE_JOBNAMEHandler_Execute_m15064_MethodInfo;
static MethodInfo* CG_GUILD_CHANGE_JOBNAMEHandler_t2368_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_CHANGE_JOBNAMEHandler_Execute_m15064_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_CHANGE_JOBNAMEHandler_t2368_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_CHANGE_JOBNAMEHandler_t2368_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_CHANGE_JOBNAMEHandler_t2368_0_0_0;
extern Il2CppType CG_GUILD_CHANGE_JOBNAMEHandler_t2368_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_CHANGE_JOBNAMEHandler_t2368;
extern TypeInfo CG_GUILD_CHANGE_JOBNAMEHandler_t2368_il2cpp_TypeInfo;
TypeInfo CG_GUILD_CHANGE_JOBNAMEHandler_t2368_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_CHANGE_JOBNAMEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_CHANGE_JOBNAMEHandler_t2368_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_CHANGE_JOBNAMEHandler_t2368_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_CHANGE_JOBNAMEHandler_t2368_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_CHANGE_JOBNAMEHandler_t2368_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_CHANGE_JOBNAMEHandler_t2368_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_CHANGE_JOBNAMEHandler_t2368_0_0_0/* byval_arg */
	, &CG_GUILD_CHANGE_JOBNAMEHandler_t2368_1_0_0/* this_arg */
	, CG_GUILD_CHANGE_JOBNAMEHandler_t2368_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_CHANGE_JOBNAMEHandler_t2368)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_CREATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_CREATEHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_CREATEHandler_t2369_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_CREATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_CREATEHandMethodDeclarations.h"

// CG_GUILD_CREATE
#include "AssemblyU2DCSharp_CG_GUILD_CREATE.h"
extern TypeInfo CG_GUILD_CREATE_t3242_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_CREATEHandler::.ctor()
extern MethodInfo CG_GUILD_CREATEHandler__ctor_m15065_MethodInfo;
 void CG_GUILD_CREATEHandler__ctor_m15065 (CG_GUILD_CREATEHandler_t2369 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_CREATEHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_CREATEHandler_Execute_m15066_MethodInfo;
 uint32_t CG_GUILD_CREATEHandler_Execute_m15066 (CG_GUILD_CREATEHandler_t2369 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_CREATE_t3242 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_CREATE_t3242 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_CREATE_t3242_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_CREATEHandler
extern TypeInfo CG_GUILD_CREATEHandler_t2369_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_CREATEHandler::.ctor()
MethodInfo CG_GUILD_CREATEHandler__ctor_m15065_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_CREATEHandler__ctor_m15065/* method */
	, &CG_GUILD_CREATEHandler_t2369_il2cpp_TypeInfo/* declaring_type */
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
	, 8541/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_CREATEHandler_t2369_CG_GUILD_CREATEHandler_Execute_m15066_ParameterInfos[] = 
{
	{"ipacket", 0, 134222188, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_CREATEHandler_t2369_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_CREATEHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_CREATEHandler_Execute_m15066_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_CREATEHandler_Execute_m15066/* method */
	, &CG_GUILD_CREATEHandler_t2369_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_CREATEHandler_t2369_CG_GUILD_CREATEHandler_Execute_m15066_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8542/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_CREATEHandler_t2369_MethodInfos[] =
{
	&CG_GUILD_CREATEHandler__ctor_m15065_MethodInfo,
	&CG_GUILD_CREATEHandler_Execute_m15066_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_CREATEHandler_Execute_m15066_MethodInfo;
static MethodInfo* CG_GUILD_CREATEHandler_t2369_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_CREATEHandler_Execute_m15066_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_CREATEHandler_t2369_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_CREATEHandler_t2369_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_CREATEHandler_t2369_0_0_0;
extern Il2CppType CG_GUILD_CREATEHandler_t2369_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_CREATEHandler_t2369;
extern TypeInfo CG_GUILD_CREATEHandler_t2369_il2cpp_TypeInfo;
TypeInfo CG_GUILD_CREATEHandler_t2369_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_CREATEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_CREATEHandler_t2369_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_CREATEHandler_t2369_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_CREATEHandler_t2369_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_CREATEHandler_t2369_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_CREATEHandler_t2369_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_CREATEHandler_t2369_0_0_0/* byval_arg */
	, &CG_GUILD_CREATEHandler_t2369_1_0_0/* this_arg */
	, CG_GUILD_CREATEHandler_t2369_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_CREATEHandler_t2369)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_FIND_HIDEANDSEEKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_FIND_HIDEA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_FIND_HIDEANDSEEKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_FIND_HIDEAMethodDeclarations.h"

// CG_GUILD_FIND_HIDEANDSEEK
#include "AssemblyU2DCSharp_CG_GUILD_FIND_HIDEANDSEEK.h"
extern TypeInfo CG_GUILD_FIND_HIDEANDSEEK_t3628_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_FIND_HIDEANDSEEKHandler::.ctor()
extern MethodInfo CG_GUILD_FIND_HIDEANDSEEKHandler__ctor_m15067_MethodInfo;
 void CG_GUILD_FIND_HIDEANDSEEKHandler__ctor_m15067 (CG_GUILD_FIND_HIDEANDSEEKHandler_t2370 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_FIND_HIDEANDSEEKHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_FIND_HIDEANDSEEKHandler_Execute_m15068_MethodInfo;
 uint32_t CG_GUILD_FIND_HIDEANDSEEKHandler_Execute_m15068 (CG_GUILD_FIND_HIDEANDSEEKHandler_t2370 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_FIND_HIDEANDSEEK_t3628 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_FIND_HIDEANDSEEK_t3628 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_FIND_HIDEANDSEEK_t3628_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_FIND_HIDEANDSEEKHandler
extern TypeInfo CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_FIND_HIDEANDSEEKHandler::.ctor()
MethodInfo CG_GUILD_FIND_HIDEANDSEEKHandler__ctor_m15067_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_FIND_HIDEANDSEEKHandler__ctor_m15067/* method */
	, &CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_il2cpp_TypeInfo/* declaring_type */
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
	, 8543/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_CG_GUILD_FIND_HIDEANDSEEKHandler_Execute_m15068_ParameterInfos[] = 
{
	{"ipacket", 0, 134222189, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_FIND_HIDEANDSEEKHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_FIND_HIDEANDSEEKHandler_Execute_m15068_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_FIND_HIDEANDSEEKHandler_Execute_m15068/* method */
	, &CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_CG_GUILD_FIND_HIDEANDSEEKHandler_Execute_m15068_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8544/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_MethodInfos[] =
{
	&CG_GUILD_FIND_HIDEANDSEEKHandler__ctor_m15067_MethodInfo,
	&CG_GUILD_FIND_HIDEANDSEEKHandler_Execute_m15068_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_FIND_HIDEANDSEEKHandler_Execute_m15068_MethodInfo;
static MethodInfo* CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_FIND_HIDEANDSEEKHandler_Execute_m15068_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_0_0_0;
extern Il2CppType CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_FIND_HIDEANDSEEKHandler_t2370;
extern TypeInfo CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_il2cpp_TypeInfo;
TypeInfo CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_FIND_HIDEANDSEEKHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_0_0_0/* byval_arg */
	, &CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_1_0_0/* this_arg */
	, CG_GUILD_FIND_HIDEANDSEEKHandler_t2370_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_FIND_HIDEANDSEEKHandler_t2370)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_INVITEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_INVITEHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_INVITEHandler_t2371_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_INVITEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_INVITEHandMethodDeclarations.h"

// CG_GUILD_INVITE
#include "AssemblyU2DCSharp_CG_GUILD_INVITE.h"
extern TypeInfo CG_GUILD_INVITE_t3372_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_INVITEHandler::.ctor()
extern MethodInfo CG_GUILD_INVITEHandler__ctor_m15069_MethodInfo;
 void CG_GUILD_INVITEHandler__ctor_m15069 (CG_GUILD_INVITEHandler_t2371 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_INVITEHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_INVITEHandler_Execute_m15070_MethodInfo;
 uint32_t CG_GUILD_INVITEHandler_Execute_m15070 (CG_GUILD_INVITEHandler_t2371 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_INVITE_t3372 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_INVITE_t3372 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_INVITE_t3372_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_INVITEHandler
extern TypeInfo CG_GUILD_INVITEHandler_t2371_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_INVITEHandler::.ctor()
MethodInfo CG_GUILD_INVITEHandler__ctor_m15069_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_INVITEHandler__ctor_m15069/* method */
	, &CG_GUILD_INVITEHandler_t2371_il2cpp_TypeInfo/* declaring_type */
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
	, 8545/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_INVITEHandler_t2371_CG_GUILD_INVITEHandler_Execute_m15070_ParameterInfos[] = 
{
	{"ipacket", 0, 134222190, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_INVITEHandler_t2371_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_INVITEHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_INVITEHandler_Execute_m15070_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_INVITEHandler_Execute_m15070/* method */
	, &CG_GUILD_INVITEHandler_t2371_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_INVITEHandler_t2371_CG_GUILD_INVITEHandler_Execute_m15070_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8546/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_INVITEHandler_t2371_MethodInfos[] =
{
	&CG_GUILD_INVITEHandler__ctor_m15069_MethodInfo,
	&CG_GUILD_INVITEHandler_Execute_m15070_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_INVITEHandler_Execute_m15070_MethodInfo;
static MethodInfo* CG_GUILD_INVITEHandler_t2371_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_INVITEHandler_Execute_m15070_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_INVITEHandler_t2371_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_INVITEHandler_t2371_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_INVITEHandler_t2371_0_0_0;
extern Il2CppType CG_GUILD_INVITEHandler_t2371_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_INVITEHandler_t2371;
extern TypeInfo CG_GUILD_INVITEHandler_t2371_il2cpp_TypeInfo;
TypeInfo CG_GUILD_INVITEHandler_t2371_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_INVITEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_INVITEHandler_t2371_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_INVITEHandler_t2371_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_INVITEHandler_t2371_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_INVITEHandler_t2371_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_INVITEHandler_t2371_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_INVITEHandler_t2371_0_0_0/* byval_arg */
	, &CG_GUILD_INVITEHandler_t2371_1_0_0/* this_arg */
	, CG_GUILD_INVITEHandler_t2371_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_INVITEHandler_t2371)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_INVITE_CONFIRMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_INVITE_CON.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_INVITE_CONFIRMHandler_t2372_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_INVITE_CONFIRMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_INVITE_CONMethodDeclarations.h"

// CG_GUILD_INVITE_CONFIRM
#include "AssemblyU2DCSharp_CG_GUILD_INVITE_CONFIRM.h"
extern TypeInfo CG_GUILD_INVITE_CONFIRM_t3374_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_INVITE_CONFIRMHandler::.ctor()
extern MethodInfo CG_GUILD_INVITE_CONFIRMHandler__ctor_m15071_MethodInfo;
 void CG_GUILD_INVITE_CONFIRMHandler__ctor_m15071 (CG_GUILD_INVITE_CONFIRMHandler_t2372 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_INVITE_CONFIRMHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_INVITE_CONFIRMHandler_Execute_m15072_MethodInfo;
 uint32_t CG_GUILD_INVITE_CONFIRMHandler_Execute_m15072 (CG_GUILD_INVITE_CONFIRMHandler_t2372 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_INVITE_CONFIRM_t3374 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_INVITE_CONFIRM_t3374 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_INVITE_CONFIRM_t3374_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_INVITE_CONFIRMHandler
extern TypeInfo CG_GUILD_INVITE_CONFIRMHandler_t2372_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_INVITE_CONFIRMHandler::.ctor()
MethodInfo CG_GUILD_INVITE_CONFIRMHandler__ctor_m15071_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_INVITE_CONFIRMHandler__ctor_m15071/* method */
	, &CG_GUILD_INVITE_CONFIRMHandler_t2372_il2cpp_TypeInfo/* declaring_type */
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
	, 8547/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_INVITE_CONFIRMHandler_t2372_CG_GUILD_INVITE_CONFIRMHandler_Execute_m15072_ParameterInfos[] = 
{
	{"ipacket", 0, 134222191, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_INVITE_CONFIRMHandler_t2372_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_INVITE_CONFIRMHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_INVITE_CONFIRMHandler_Execute_m15072_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_INVITE_CONFIRMHandler_Execute_m15072/* method */
	, &CG_GUILD_INVITE_CONFIRMHandler_t2372_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_INVITE_CONFIRMHandler_t2372_CG_GUILD_INVITE_CONFIRMHandler_Execute_m15072_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8548/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_INVITE_CONFIRMHandler_t2372_MethodInfos[] =
{
	&CG_GUILD_INVITE_CONFIRMHandler__ctor_m15071_MethodInfo,
	&CG_GUILD_INVITE_CONFIRMHandler_Execute_m15072_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_INVITE_CONFIRMHandler_Execute_m15072_MethodInfo;
static MethodInfo* CG_GUILD_INVITE_CONFIRMHandler_t2372_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_INVITE_CONFIRMHandler_Execute_m15072_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_INVITE_CONFIRMHandler_t2372_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_INVITE_CONFIRMHandler_t2372_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_INVITE_CONFIRMHandler_t2372_0_0_0;
extern Il2CppType CG_GUILD_INVITE_CONFIRMHandler_t2372_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_INVITE_CONFIRMHandler_t2372;
extern TypeInfo CG_GUILD_INVITE_CONFIRMHandler_t2372_il2cpp_TypeInfo;
TypeInfo CG_GUILD_INVITE_CONFIRMHandler_t2372_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_INVITE_CONFIRMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_INVITE_CONFIRMHandler_t2372_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_INVITE_CONFIRMHandler_t2372_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_INVITE_CONFIRMHandler_t2372_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_INVITE_CONFIRMHandler_t2372_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_INVITE_CONFIRMHandler_t2372_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_INVITE_CONFIRMHandler_t2372_0_0_0/* byval_arg */
	, &CG_GUILD_INVITE_CONFIRMHandler_t2372_1_0_0/* this_arg */
	, CG_GUILD_INVITE_CONFIRMHandler_t2372_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_INVITE_CONFIRMHandler_t2372)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_INVITE_MAILHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_INVITE_MAI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_INVITE_MAILHandler_t2373_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_INVITE_MAILHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_INVITE_MAIMethodDeclarations.h"

// CG_GUILD_INVITE_MAIL
#include "AssemblyU2DCSharp_CG_GUILD_INVITE_MAIL.h"
extern TypeInfo CG_GUILD_INVITE_MAIL_t3622_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_INVITE_MAILHandler::.ctor()
extern MethodInfo CG_GUILD_INVITE_MAILHandler__ctor_m15073_MethodInfo;
 void CG_GUILD_INVITE_MAILHandler__ctor_m15073 (CG_GUILD_INVITE_MAILHandler_t2373 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_INVITE_MAILHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_INVITE_MAILHandler_Execute_m15074_MethodInfo;
 uint32_t CG_GUILD_INVITE_MAILHandler_Execute_m15074 (CG_GUILD_INVITE_MAILHandler_t2373 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_INVITE_MAIL_t3622 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_INVITE_MAIL_t3622 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_INVITE_MAIL_t3622_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_INVITE_MAILHandler
extern TypeInfo CG_GUILD_INVITE_MAILHandler_t2373_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_INVITE_MAILHandler::.ctor()
MethodInfo CG_GUILD_INVITE_MAILHandler__ctor_m15073_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_INVITE_MAILHandler__ctor_m15073/* method */
	, &CG_GUILD_INVITE_MAILHandler_t2373_il2cpp_TypeInfo/* declaring_type */
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
	, 8549/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_INVITE_MAILHandler_t2373_CG_GUILD_INVITE_MAILHandler_Execute_m15074_ParameterInfos[] = 
{
	{"ipacket", 0, 134222192, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_INVITE_MAILHandler_t2373_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_INVITE_MAILHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_INVITE_MAILHandler_Execute_m15074_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_INVITE_MAILHandler_Execute_m15074/* method */
	, &CG_GUILD_INVITE_MAILHandler_t2373_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_INVITE_MAILHandler_t2373_CG_GUILD_INVITE_MAILHandler_Execute_m15074_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8550/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_INVITE_MAILHandler_t2373_MethodInfos[] =
{
	&CG_GUILD_INVITE_MAILHandler__ctor_m15073_MethodInfo,
	&CG_GUILD_INVITE_MAILHandler_Execute_m15074_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_INVITE_MAILHandler_Execute_m15074_MethodInfo;
static MethodInfo* CG_GUILD_INVITE_MAILHandler_t2373_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_INVITE_MAILHandler_Execute_m15074_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_INVITE_MAILHandler_t2373_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_INVITE_MAILHandler_t2373_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_INVITE_MAILHandler_t2373_0_0_0;
extern Il2CppType CG_GUILD_INVITE_MAILHandler_t2373_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_INVITE_MAILHandler_t2373;
extern TypeInfo CG_GUILD_INVITE_MAILHandler_t2373_il2cpp_TypeInfo;
TypeInfo CG_GUILD_INVITE_MAILHandler_t2373_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_INVITE_MAILHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_INVITE_MAILHandler_t2373_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_INVITE_MAILHandler_t2373_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_INVITE_MAILHandler_t2373_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_INVITE_MAILHandler_t2373_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_INVITE_MAILHandler_t2373_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_INVITE_MAILHandler_t2373_0_0_0/* byval_arg */
	, &CG_GUILD_INVITE_MAILHandler_t2373_1_0_0/* this_arg */
	, CG_GUILD_INVITE_MAILHandler_t2373_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_INVITE_MAILHandler_t2373)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_JOB_CHANGEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_JOB_CHANGE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_JOB_CHANGEHandler_t2374_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_JOB_CHANGEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_JOB_CHANGEMethodDeclarations.h"

// CG_GUILD_JOB_CHANGE
#include "AssemblyU2DCSharp_CG_GUILD_JOB_CHANGE.h"
extern TypeInfo CG_GUILD_JOB_CHANGE_t3249_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_JOB_CHANGEHandler::.ctor()
extern MethodInfo CG_GUILD_JOB_CHANGEHandler__ctor_m15075_MethodInfo;
 void CG_GUILD_JOB_CHANGEHandler__ctor_m15075 (CG_GUILD_JOB_CHANGEHandler_t2374 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_JOB_CHANGEHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_JOB_CHANGEHandler_Execute_m15076_MethodInfo;
 uint32_t CG_GUILD_JOB_CHANGEHandler_Execute_m15076 (CG_GUILD_JOB_CHANGEHandler_t2374 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_JOB_CHANGE_t3249 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_JOB_CHANGE_t3249 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_JOB_CHANGE_t3249_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_JOB_CHANGEHandler
extern TypeInfo CG_GUILD_JOB_CHANGEHandler_t2374_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_JOB_CHANGEHandler::.ctor()
MethodInfo CG_GUILD_JOB_CHANGEHandler__ctor_m15075_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_JOB_CHANGEHandler__ctor_m15075/* method */
	, &CG_GUILD_JOB_CHANGEHandler_t2374_il2cpp_TypeInfo/* declaring_type */
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
	, 8551/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_JOB_CHANGEHandler_t2374_CG_GUILD_JOB_CHANGEHandler_Execute_m15076_ParameterInfos[] = 
{
	{"ipacket", 0, 134222193, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_JOB_CHANGEHandler_t2374_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_JOB_CHANGEHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_JOB_CHANGEHandler_Execute_m15076_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_JOB_CHANGEHandler_Execute_m15076/* method */
	, &CG_GUILD_JOB_CHANGEHandler_t2374_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_JOB_CHANGEHandler_t2374_CG_GUILD_JOB_CHANGEHandler_Execute_m15076_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8552/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_JOB_CHANGEHandler_t2374_MethodInfos[] =
{
	&CG_GUILD_JOB_CHANGEHandler__ctor_m15075_MethodInfo,
	&CG_GUILD_JOB_CHANGEHandler_Execute_m15076_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_JOB_CHANGEHandler_Execute_m15076_MethodInfo;
static MethodInfo* CG_GUILD_JOB_CHANGEHandler_t2374_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_JOB_CHANGEHandler_Execute_m15076_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_JOB_CHANGEHandler_t2374_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_JOB_CHANGEHandler_t2374_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_JOB_CHANGEHandler_t2374_0_0_0;
extern Il2CppType CG_GUILD_JOB_CHANGEHandler_t2374_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_JOB_CHANGEHandler_t2374;
extern TypeInfo CG_GUILD_JOB_CHANGEHandler_t2374_il2cpp_TypeInfo;
TypeInfo CG_GUILD_JOB_CHANGEHandler_t2374_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_JOB_CHANGEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_JOB_CHANGEHandler_t2374_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_JOB_CHANGEHandler_t2374_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_JOB_CHANGEHandler_t2374_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_JOB_CHANGEHandler_t2374_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_JOB_CHANGEHandler_t2374_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_JOB_CHANGEHandler_t2374_0_0_0/* byval_arg */
	, &CG_GUILD_JOB_CHANGEHandler_t2374_1_0_0/* this_arg */
	, CG_GUILD_JOB_CHANGEHandler_t2374_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_JOB_CHANGEHandler_t2374)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_JOINHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_JOINHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_JOINHandler_t2375_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_JOINHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_JOINHandleMethodDeclarations.h"

// CG_GUILD_JOIN
#include "AssemblyU2DCSharp_CG_GUILD_JOIN.h"
extern TypeInfo CG_GUILD_JOIN_t3244_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_JOINHandler::.ctor()
extern MethodInfo CG_GUILD_JOINHandler__ctor_m15077_MethodInfo;
 void CG_GUILD_JOINHandler__ctor_m15077 (CG_GUILD_JOINHandler_t2375 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_JOINHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_JOINHandler_Execute_m15078_MethodInfo;
 uint32_t CG_GUILD_JOINHandler_Execute_m15078 (CG_GUILD_JOINHandler_t2375 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_JOIN_t3244 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_JOIN_t3244 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_JOIN_t3244_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_JOINHandler
extern TypeInfo CG_GUILD_JOINHandler_t2375_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_JOINHandler::.ctor()
MethodInfo CG_GUILD_JOINHandler__ctor_m15077_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_JOINHandler__ctor_m15077/* method */
	, &CG_GUILD_JOINHandler_t2375_il2cpp_TypeInfo/* declaring_type */
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
	, 8553/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_JOINHandler_t2375_CG_GUILD_JOINHandler_Execute_m15078_ParameterInfos[] = 
{
	{"ipacket", 0, 134222194, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_JOINHandler_t2375_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_JOINHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_JOINHandler_Execute_m15078_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_JOINHandler_Execute_m15078/* method */
	, &CG_GUILD_JOINHandler_t2375_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_JOINHandler_t2375_CG_GUILD_JOINHandler_Execute_m15078_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8554/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_JOINHandler_t2375_MethodInfos[] =
{
	&CG_GUILD_JOINHandler__ctor_m15077_MethodInfo,
	&CG_GUILD_JOINHandler_Execute_m15078_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_JOINHandler_Execute_m15078_MethodInfo;
static MethodInfo* CG_GUILD_JOINHandler_t2375_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_JOINHandler_Execute_m15078_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_JOINHandler_t2375_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_JOINHandler_t2375_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_JOINHandler_t2375_0_0_0;
extern Il2CppType CG_GUILD_JOINHandler_t2375_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_JOINHandler_t2375;
extern TypeInfo CG_GUILD_JOINHandler_t2375_il2cpp_TypeInfo;
TypeInfo CG_GUILD_JOINHandler_t2375_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_JOINHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_JOINHandler_t2375_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_JOINHandler_t2375_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_JOINHandler_t2375_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_JOINHandler_t2375_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_JOINHandler_t2375_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_JOINHandler_t2375_0_0_0/* byval_arg */
	, &CG_GUILD_JOINHandler_t2375_1_0_0/* this_arg */
	, CG_GUILD_JOINHandler_t2375_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_JOINHandler_t2375)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_JOINREQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_JOINREQHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_JOINREQHandler_t2376_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_JOINREQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_JOINREQHanMethodDeclarations.h"

// CG_GUILD_JOINREQ
#include "AssemblyU2DCSharp_CG_GUILD_JOINREQ.h"
extern TypeInfo CG_GUILD_JOINREQ_t3617_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_JOINREQHandler::.ctor()
extern MethodInfo CG_GUILD_JOINREQHandler__ctor_m15079_MethodInfo;
 void CG_GUILD_JOINREQHandler__ctor_m15079 (CG_GUILD_JOINREQHandler_t2376 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_JOINREQHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_JOINREQHandler_Execute_m15080_MethodInfo;
 uint32_t CG_GUILD_JOINREQHandler_Execute_m15080 (CG_GUILD_JOINREQHandler_t2376 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_JOINREQ_t3617 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_JOINREQ_t3617 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_JOINREQ_t3617_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_JOINREQHandler
extern TypeInfo CG_GUILD_JOINREQHandler_t2376_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_JOINREQHandler::.ctor()
MethodInfo CG_GUILD_JOINREQHandler__ctor_m15079_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_JOINREQHandler__ctor_m15079/* method */
	, &CG_GUILD_JOINREQHandler_t2376_il2cpp_TypeInfo/* declaring_type */
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
	, 8555/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_JOINREQHandler_t2376_CG_GUILD_JOINREQHandler_Execute_m15080_ParameterInfos[] = 
{
	{"ipacket", 0, 134222195, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_JOINREQHandler_t2376_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_JOINREQHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_JOINREQHandler_Execute_m15080_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_JOINREQHandler_Execute_m15080/* method */
	, &CG_GUILD_JOINREQHandler_t2376_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_JOINREQHandler_t2376_CG_GUILD_JOINREQHandler_Execute_m15080_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8556/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_JOINREQHandler_t2376_MethodInfos[] =
{
	&CG_GUILD_JOINREQHandler__ctor_m15079_MethodInfo,
	&CG_GUILD_JOINREQHandler_Execute_m15080_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_JOINREQHandler_Execute_m15080_MethodInfo;
static MethodInfo* CG_GUILD_JOINREQHandler_t2376_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_JOINREQHandler_Execute_m15080_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_JOINREQHandler_t2376_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_JOINREQHandler_t2376_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_JOINREQHandler_t2376_0_0_0;
extern Il2CppType CG_GUILD_JOINREQHandler_t2376_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_JOINREQHandler_t2376;
extern TypeInfo CG_GUILD_JOINREQHandler_t2376_il2cpp_TypeInfo;
TypeInfo CG_GUILD_JOINREQHandler_t2376_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_JOINREQHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_JOINREQHandler_t2376_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_JOINREQHandler_t2376_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_JOINREQHandler_t2376_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_JOINREQHandler_t2376_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_JOINREQHandler_t2376_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_JOINREQHandler_t2376_0_0_0/* byval_arg */
	, &CG_GUILD_JOINREQHandler_t2376_1_0_0/* this_arg */
	, CG_GUILD_JOINREQHandler_t2376_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_JOINREQHandler_t2376)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_JOIN_OTHERPLAYERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_JOIN_OTHER.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_JOIN_OTHERPLAYERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_JOIN_OTHERMethodDeclarations.h"

// CG_GUILD_JOIN_OTHERPLAYER
#include "AssemblyU2DCSharp_CG_GUILD_JOIN_OTHERPLAYER.h"
extern TypeInfo CG_GUILD_JOIN_OTHERPLAYER_t3417_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_JOIN_OTHERPLAYERHandler::.ctor()
extern MethodInfo CG_GUILD_JOIN_OTHERPLAYERHandler__ctor_m15081_MethodInfo;
 void CG_GUILD_JOIN_OTHERPLAYERHandler__ctor_m15081 (CG_GUILD_JOIN_OTHERPLAYERHandler_t2377 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_JOIN_OTHERPLAYERHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_JOIN_OTHERPLAYERHandler_Execute_m15082_MethodInfo;
 uint32_t CG_GUILD_JOIN_OTHERPLAYERHandler_Execute_m15082 (CG_GUILD_JOIN_OTHERPLAYERHandler_t2377 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_JOIN_OTHERPLAYER_t3417 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_JOIN_OTHERPLAYER_t3417 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_JOIN_OTHERPLAYER_t3417_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_JOIN_OTHERPLAYERHandler
extern TypeInfo CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_JOIN_OTHERPLAYERHandler::.ctor()
MethodInfo CG_GUILD_JOIN_OTHERPLAYERHandler__ctor_m15081_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_JOIN_OTHERPLAYERHandler__ctor_m15081/* method */
	, &CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_il2cpp_TypeInfo/* declaring_type */
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
	, 8557/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_CG_GUILD_JOIN_OTHERPLAYERHandler_Execute_m15082_ParameterInfos[] = 
{
	{"ipacket", 0, 134222196, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_JOIN_OTHERPLAYERHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_JOIN_OTHERPLAYERHandler_Execute_m15082_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_JOIN_OTHERPLAYERHandler_Execute_m15082/* method */
	, &CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_CG_GUILD_JOIN_OTHERPLAYERHandler_Execute_m15082_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8558/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_MethodInfos[] =
{
	&CG_GUILD_JOIN_OTHERPLAYERHandler__ctor_m15081_MethodInfo,
	&CG_GUILD_JOIN_OTHERPLAYERHandler_Execute_m15082_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_JOIN_OTHERPLAYERHandler_Execute_m15082_MethodInfo;
static MethodInfo* CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_JOIN_OTHERPLAYERHandler_Execute_m15082_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_0_0_0;
extern Il2CppType CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_JOIN_OTHERPLAYERHandler_t2377;
extern TypeInfo CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_il2cpp_TypeInfo;
TypeInfo CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_JOIN_OTHERPLAYERHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_0_0_0/* byval_arg */
	, &CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_1_0_0/* this_arg */
	, CG_GUILD_JOIN_OTHERPLAYERHandler_t2377_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_JOIN_OTHERPLAYERHandler_t2377)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_KICKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_KICKHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_KICKHandler_t2378_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_KICKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_KICKHandleMethodDeclarations.h"

// CG_GUILD_KICK
#include "AssemblyU2DCSharp_CG_GUILD_KICK.h"
extern TypeInfo CG_GUILD_KICK_t3248_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_KICKHandler::.ctor()
extern MethodInfo CG_GUILD_KICKHandler__ctor_m15083_MethodInfo;
 void CG_GUILD_KICKHandler__ctor_m15083 (CG_GUILD_KICKHandler_t2378 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_KICKHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_KICKHandler_Execute_m15084_MethodInfo;
 uint32_t CG_GUILD_KICKHandler_Execute_m15084 (CG_GUILD_KICKHandler_t2378 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_KICK_t3248 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_KICK_t3248 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_KICK_t3248_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_KICKHandler
extern TypeInfo CG_GUILD_KICKHandler_t2378_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_KICKHandler::.ctor()
MethodInfo CG_GUILD_KICKHandler__ctor_m15083_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_KICKHandler__ctor_m15083/* method */
	, &CG_GUILD_KICKHandler_t2378_il2cpp_TypeInfo/* declaring_type */
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
	, 8559/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_KICKHandler_t2378_CG_GUILD_KICKHandler_Execute_m15084_ParameterInfos[] = 
{
	{"ipacket", 0, 134222197, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_KICKHandler_t2378_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_KICKHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_KICKHandler_Execute_m15084_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_KICKHandler_Execute_m15084/* method */
	, &CG_GUILD_KICKHandler_t2378_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_KICKHandler_t2378_CG_GUILD_KICKHandler_Execute_m15084_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8560/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_KICKHandler_t2378_MethodInfos[] =
{
	&CG_GUILD_KICKHandler__ctor_m15083_MethodInfo,
	&CG_GUILD_KICKHandler_Execute_m15084_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_KICKHandler_Execute_m15084_MethodInfo;
static MethodInfo* CG_GUILD_KICKHandler_t2378_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_KICKHandler_Execute_m15084_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_KICKHandler_t2378_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_KICKHandler_t2378_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_KICKHandler_t2378_0_0_0;
extern Il2CppType CG_GUILD_KICKHandler_t2378_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_KICKHandler_t2378;
extern TypeInfo CG_GUILD_KICKHandler_t2378_il2cpp_TypeInfo;
TypeInfo CG_GUILD_KICKHandler_t2378_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_KICKHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_KICKHandler_t2378_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_KICKHandler_t2378_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_KICKHandler_t2378_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_KICKHandler_t2378_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_KICKHandler_t2378_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_KICKHandler_t2378_0_0_0/* byval_arg */
	, &CG_GUILD_KICKHandler_t2378_1_0_0/* this_arg */
	, CG_GUILD_KICKHandler_t2378_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_KICKHandler_t2378)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_LEAVEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_LEAVEHandl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_LEAVEHandler_t2379_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_LEAVEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_LEAVEHandlMethodDeclarations.h"

// CG_GUILD_LEAVE
#include "AssemblyU2DCSharp_CG_GUILD_LEAVE.h"
extern TypeInfo CG_GUILD_LEAVE_t3246_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_LEAVEHandler::.ctor()
extern MethodInfo CG_GUILD_LEAVEHandler__ctor_m15085_MethodInfo;
 void CG_GUILD_LEAVEHandler__ctor_m15085 (CG_GUILD_LEAVEHandler_t2379 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_LEAVEHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_LEAVEHandler_Execute_m15086_MethodInfo;
 uint32_t CG_GUILD_LEAVEHandler_Execute_m15086 (CG_GUILD_LEAVEHandler_t2379 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_LEAVE_t3246 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_LEAVE_t3246 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_LEAVE_t3246_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_LEAVEHandler
extern TypeInfo CG_GUILD_LEAVEHandler_t2379_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_LEAVEHandler::.ctor()
MethodInfo CG_GUILD_LEAVEHandler__ctor_m15085_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_LEAVEHandler__ctor_m15085/* method */
	, &CG_GUILD_LEAVEHandler_t2379_il2cpp_TypeInfo/* declaring_type */
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
	, 8561/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_LEAVEHandler_t2379_CG_GUILD_LEAVEHandler_Execute_m15086_ParameterInfos[] = 
{
	{"ipacket", 0, 134222198, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_LEAVEHandler_t2379_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_LEAVEHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_LEAVEHandler_Execute_m15086_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_LEAVEHandler_Execute_m15086/* method */
	, &CG_GUILD_LEAVEHandler_t2379_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_LEAVEHandler_t2379_CG_GUILD_LEAVEHandler_Execute_m15086_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8562/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_LEAVEHandler_t2379_MethodInfos[] =
{
	&CG_GUILD_LEAVEHandler__ctor_m15085_MethodInfo,
	&CG_GUILD_LEAVEHandler_Execute_m15086_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_LEAVEHandler_Execute_m15086_MethodInfo;
static MethodInfo* CG_GUILD_LEAVEHandler_t2379_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_LEAVEHandler_Execute_m15086_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_LEAVEHandler_t2379_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_LEAVEHandler_t2379_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_LEAVEHandler_t2379_0_0_0;
extern Il2CppType CG_GUILD_LEAVEHandler_t2379_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_LEAVEHandler_t2379;
extern TypeInfo CG_GUILD_LEAVEHandler_t2379_il2cpp_TypeInfo;
TypeInfo CG_GUILD_LEAVEHandler_t2379_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_LEAVEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_LEAVEHandler_t2379_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_LEAVEHandler_t2379_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_LEAVEHandler_t2379_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_LEAVEHandler_t2379_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_LEAVEHandler_t2379_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_LEAVEHandler_t2379_0_0_0/* byval_arg */
	, &CG_GUILD_LEAVEHandler_t2379_1_0_0/* this_arg */
	, CG_GUILD_LEAVEHandler_t2379_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_LEAVEHandler_t2379)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_OPEN_HIDEANDSEEKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_OPEN_HIDEA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_OPEN_HIDEANDSEEKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_OPEN_HIDEAMethodDeclarations.h"

// CG_GUILD_OPEN_HIDEANDSEEK
#include "AssemblyU2DCSharp_CG_GUILD_OPEN_HIDEANDSEEK.h"
extern TypeInfo CG_GUILD_OPEN_HIDEANDSEEK_t3626_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_OPEN_HIDEANDSEEKHandler::.ctor()
extern MethodInfo CG_GUILD_OPEN_HIDEANDSEEKHandler__ctor_m15087_MethodInfo;
 void CG_GUILD_OPEN_HIDEANDSEEKHandler__ctor_m15087 (CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_OPEN_HIDEANDSEEKHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_OPEN_HIDEANDSEEKHandler_Execute_m15088_MethodInfo;
 uint32_t CG_GUILD_OPEN_HIDEANDSEEKHandler_Execute_m15088 (CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_OPEN_HIDEANDSEEK_t3626 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_OPEN_HIDEANDSEEK_t3626 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_OPEN_HIDEANDSEEK_t3626_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_OPEN_HIDEANDSEEKHandler
extern TypeInfo CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_OPEN_HIDEANDSEEKHandler::.ctor()
MethodInfo CG_GUILD_OPEN_HIDEANDSEEKHandler__ctor_m15087_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_OPEN_HIDEANDSEEKHandler__ctor_m15087/* method */
	, &CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_il2cpp_TypeInfo/* declaring_type */
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
	, 8563/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_CG_GUILD_OPEN_HIDEANDSEEKHandler_Execute_m15088_ParameterInfos[] = 
{
	{"ipacket", 0, 134222199, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_OPEN_HIDEANDSEEKHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_OPEN_HIDEANDSEEKHandler_Execute_m15088_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_OPEN_HIDEANDSEEKHandler_Execute_m15088/* method */
	, &CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_CG_GUILD_OPEN_HIDEANDSEEKHandler_Execute_m15088_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8564/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_MethodInfos[] =
{
	&CG_GUILD_OPEN_HIDEANDSEEKHandler__ctor_m15087_MethodInfo,
	&CG_GUILD_OPEN_HIDEANDSEEKHandler_Execute_m15088_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_OPEN_HIDEANDSEEKHandler_Execute_m15088_MethodInfo;
static MethodInfo* CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_OPEN_HIDEANDSEEKHandler_Execute_m15088_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_0_0_0;
extern Il2CppType CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380;
extern TypeInfo CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_il2cpp_TypeInfo;
TypeInfo CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_OPEN_HIDEANDSEEKHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_0_0_0/* byval_arg */
	, &CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_1_0_0/* this_arg */
	, CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_OPEN_HIDEANDSEEKHandler_t2380)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_DECLARATIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_CHANGE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_DECLARATIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_CHANGEMethodDeclarations.h"

// CG_GUILD_REQ_CHANGE_DECLARATION
#include "AssemblyU2DCSharp_CG_GUILD_REQ_CHANGE_DECLARATION.h"
extern TypeInfo CG_GUILD_REQ_CHANGE_DECLARATION_t3621_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_DECLARATIONHandler::.ctor()
extern MethodInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler__ctor_m15089_MethodInfo;
 void CG_GUILD_REQ_CHANGE_DECLARATIONHandler__ctor_m15089 (CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_DECLARATIONHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler_Execute_m15090_MethodInfo;
 uint32_t CG_GUILD_REQ_CHANGE_DECLARATIONHandler_Execute_m15090 (CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_REQ_CHANGE_DECLARATION_t3621 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_REQ_CHANGE_DECLARATION_t3621 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_REQ_CHANGE_DECLARATION_t3621_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_DECLARATIONHandler
extern TypeInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_DECLARATIONHandler::.ctor()
MethodInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler__ctor_m15089_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_REQ_CHANGE_DECLARATIONHandler__ctor_m15089/* method */
	, &CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_il2cpp_TypeInfo/* declaring_type */
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
	, 8565/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_CG_GUILD_REQ_CHANGE_DECLARATIONHandler_Execute_m15090_ParameterInfos[] = 
{
	{"ipacket", 0, 134222200, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_DECLARATIONHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler_Execute_m15090_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_REQ_CHANGE_DECLARATIONHandler_Execute_m15090/* method */
	, &CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_CG_GUILD_REQ_CHANGE_DECLARATIONHandler_Execute_m15090_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8566/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_MethodInfos[] =
{
	&CG_GUILD_REQ_CHANGE_DECLARATIONHandler__ctor_m15089_MethodInfo,
	&CG_GUILD_REQ_CHANGE_DECLARATIONHandler_Execute_m15090_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler_Execute_m15090_MethodInfo;
static MethodInfo* CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_REQ_CHANGE_DECLARATIONHandler_Execute_m15090_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_0_0_0;
extern Il2CppType CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381;
extern TypeInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_il2cpp_TypeInfo;
TypeInfo CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_REQ_CHANGE_DECLARATIONHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_0_0_0/* byval_arg */
	, &CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_1_0_0/* this_arg */
	, CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_REQ_CHANGE_DECLARATIONHandler_t2381)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_NOTICEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_CHANGE_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_NOTICEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_CHANGE_0MethodDeclarations.h"

// CG_GUILD_REQ_CHANGE_NOTICE
#include "AssemblyU2DCSharp_CG_GUILD_REQ_CHANGE_NOTICE.h"
extern TypeInfo CG_GUILD_REQ_CHANGE_NOTICE_t3241_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_NOTICEHandler::.ctor()
extern MethodInfo CG_GUILD_REQ_CHANGE_NOTICEHandler__ctor_m15091_MethodInfo;
 void CG_GUILD_REQ_CHANGE_NOTICEHandler__ctor_m15091 (CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_NOTICEHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_REQ_CHANGE_NOTICEHandler_Execute_m15092_MethodInfo;
 uint32_t CG_GUILD_REQ_CHANGE_NOTICEHandler_Execute_m15092 (CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_REQ_CHANGE_NOTICE_t3241 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_REQ_CHANGE_NOTICE_t3241 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_REQ_CHANGE_NOTICE_t3241_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_NOTICEHandler
extern TypeInfo CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_NOTICEHandler::.ctor()
MethodInfo CG_GUILD_REQ_CHANGE_NOTICEHandler__ctor_m15091_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_REQ_CHANGE_NOTICEHandler__ctor_m15091/* method */
	, &CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_il2cpp_TypeInfo/* declaring_type */
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
	, 8567/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_CG_GUILD_REQ_CHANGE_NOTICEHandler_Execute_m15092_ParameterInfos[] = 
{
	{"ipacket", 0, 134222201, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_CHANGE_NOTICEHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_REQ_CHANGE_NOTICEHandler_Execute_m15092_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_REQ_CHANGE_NOTICEHandler_Execute_m15092/* method */
	, &CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_CG_GUILD_REQ_CHANGE_NOTICEHandler_Execute_m15092_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8568/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_MethodInfos[] =
{
	&CG_GUILD_REQ_CHANGE_NOTICEHandler__ctor_m15091_MethodInfo,
	&CG_GUILD_REQ_CHANGE_NOTICEHandler_Execute_m15092_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_REQ_CHANGE_NOTICEHandler_Execute_m15092_MethodInfo;
static MethodInfo* CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_REQ_CHANGE_NOTICEHandler_Execute_m15092_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_0_0_0;
extern Il2CppType CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382;
extern TypeInfo CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_il2cpp_TypeInfo;
TypeInfo CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_REQ_CHANGE_NOTICEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_0_0_0/* byval_arg */
	, &CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_1_0_0/* this_arg */
	, CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_REQ_CHANGE_NOTICEHandler_t2382)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_REQ_INFOHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_INFOHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_REQ_INFOHandler_t2383_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_REQ_INFOHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_INFOHaMethodDeclarations.h"

// CG_GUILD_REQ_INFO
#include "AssemblyU2DCSharp_CG_GUILD_REQ_INFO.h"
extern TypeInfo CG_GUILD_REQ_INFO_t3239_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_REQ_INFOHandler::.ctor()
extern MethodInfo CG_GUILD_REQ_INFOHandler__ctor_m15093_MethodInfo;
 void CG_GUILD_REQ_INFOHandler__ctor_m15093 (CG_GUILD_REQ_INFOHandler_t2383 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_INFOHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_REQ_INFOHandler_Execute_m15094_MethodInfo;
 uint32_t CG_GUILD_REQ_INFOHandler_Execute_m15094 (CG_GUILD_REQ_INFOHandler_t2383 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_REQ_INFO_t3239 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_REQ_INFO_t3239 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_REQ_INFO_t3239_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_REQ_INFOHandler
extern TypeInfo CG_GUILD_REQ_INFOHandler_t2383_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_REQ_INFOHandler::.ctor()
MethodInfo CG_GUILD_REQ_INFOHandler__ctor_m15093_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_REQ_INFOHandler__ctor_m15093/* method */
	, &CG_GUILD_REQ_INFOHandler_t2383_il2cpp_TypeInfo/* declaring_type */
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
	, 8569/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_REQ_INFOHandler_t2383_CG_GUILD_REQ_INFOHandler_Execute_m15094_ParameterInfos[] = 
{
	{"ipacket", 0, 134222202, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_REQ_INFOHandler_t2383_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_INFOHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_REQ_INFOHandler_Execute_m15094_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_REQ_INFOHandler_Execute_m15094/* method */
	, &CG_GUILD_REQ_INFOHandler_t2383_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_REQ_INFOHandler_t2383_CG_GUILD_REQ_INFOHandler_Execute_m15094_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8570/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_REQ_INFOHandler_t2383_MethodInfos[] =
{
	&CG_GUILD_REQ_INFOHandler__ctor_m15093_MethodInfo,
	&CG_GUILD_REQ_INFOHandler_Execute_m15094_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_REQ_INFOHandler_Execute_m15094_MethodInfo;
static MethodInfo* CG_GUILD_REQ_INFOHandler_t2383_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_REQ_INFOHandler_Execute_m15094_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_REQ_INFOHandler_t2383_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_REQ_INFOHandler_t2383_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_REQ_INFOHandler_t2383_0_0_0;
extern Il2CppType CG_GUILD_REQ_INFOHandler_t2383_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_REQ_INFOHandler_t2383;
extern TypeInfo CG_GUILD_REQ_INFOHandler_t2383_il2cpp_TypeInfo;
TypeInfo CG_GUILD_REQ_INFOHandler_t2383_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_REQ_INFOHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_REQ_INFOHandler_t2383_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_REQ_INFOHandler_t2383_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_REQ_INFOHandler_t2383_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_REQ_INFOHandler_t2383_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_REQ_INFOHandler_t2383_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_REQ_INFOHandler_t2383_0_0_0/* byval_arg */
	, &CG_GUILD_REQ_INFOHandler_t2383_1_0_0/* this_arg */
	, CG_GUILD_REQ_INFOHandler_t2383_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_REQ_INFOHandler_t2383)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_REQ_LEVELUPHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_LEVELU.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_REQ_LEVELUPHandler_t2384_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_REQ_LEVELUPHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_LEVELUMethodDeclarations.h"

// CG_GUILD_REQ_LEVELUP
#include "AssemblyU2DCSharp_CG_GUILD_REQ_LEVELUP.h"
extern TypeInfo CG_GUILD_REQ_LEVELUP_t3251_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_REQ_LEVELUPHandler::.ctor()
extern MethodInfo CG_GUILD_REQ_LEVELUPHandler__ctor_m15095_MethodInfo;
 void CG_GUILD_REQ_LEVELUPHandler__ctor_m15095 (CG_GUILD_REQ_LEVELUPHandler_t2384 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_LEVELUPHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_REQ_LEVELUPHandler_Execute_m15096_MethodInfo;
 uint32_t CG_GUILD_REQ_LEVELUPHandler_Execute_m15096 (CG_GUILD_REQ_LEVELUPHandler_t2384 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_REQ_LEVELUP_t3251 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_REQ_LEVELUP_t3251 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_REQ_LEVELUP_t3251_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_REQ_LEVELUPHandler
extern TypeInfo CG_GUILD_REQ_LEVELUPHandler_t2384_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_REQ_LEVELUPHandler::.ctor()
MethodInfo CG_GUILD_REQ_LEVELUPHandler__ctor_m15095_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_REQ_LEVELUPHandler__ctor_m15095/* method */
	, &CG_GUILD_REQ_LEVELUPHandler_t2384_il2cpp_TypeInfo/* declaring_type */
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
	, 8571/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_REQ_LEVELUPHandler_t2384_CG_GUILD_REQ_LEVELUPHandler_Execute_m15096_ParameterInfos[] = 
{
	{"ipacket", 0, 134222203, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_REQ_LEVELUPHandler_t2384_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_LEVELUPHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_REQ_LEVELUPHandler_Execute_m15096_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_REQ_LEVELUPHandler_Execute_m15096/* method */
	, &CG_GUILD_REQ_LEVELUPHandler_t2384_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_REQ_LEVELUPHandler_t2384_CG_GUILD_REQ_LEVELUPHandler_Execute_m15096_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8572/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_REQ_LEVELUPHandler_t2384_MethodInfos[] =
{
	&CG_GUILD_REQ_LEVELUPHandler__ctor_m15095_MethodInfo,
	&CG_GUILD_REQ_LEVELUPHandler_Execute_m15096_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_REQ_LEVELUPHandler_Execute_m15096_MethodInfo;
static MethodInfo* CG_GUILD_REQ_LEVELUPHandler_t2384_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_REQ_LEVELUPHandler_Execute_m15096_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_REQ_LEVELUPHandler_t2384_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_REQ_LEVELUPHandler_t2384_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_REQ_LEVELUPHandler_t2384_0_0_0;
extern Il2CppType CG_GUILD_REQ_LEVELUPHandler_t2384_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_REQ_LEVELUPHandler_t2384;
extern TypeInfo CG_GUILD_REQ_LEVELUPHandler_t2384_il2cpp_TypeInfo;
TypeInfo CG_GUILD_REQ_LEVELUPHandler_t2384_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_REQ_LEVELUPHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_REQ_LEVELUPHandler_t2384_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_REQ_LEVELUPHandler_t2384_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_REQ_LEVELUPHandler_t2384_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_REQ_LEVELUPHandler_t2384_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_REQ_LEVELUPHandler_t2384_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_REQ_LEVELUPHandler_t2384_0_0_0/* byval_arg */
	, &CG_GUILD_REQ_LEVELUPHandler_t2384_1_0_0/* this_arg */
	, CG_GUILD_REQ_LEVELUPHandler_t2384_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_REQ_LEVELUPHandler_t2384)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_REQ_LISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_LISTHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_REQ_LISTHandler_t2385_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_REQ_LISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_LISTHaMethodDeclarations.h"

// CG_GUILD_REQ_LIST
#include "AssemblyU2DCSharp_CG_GUILD_REQ_LIST.h"
extern TypeInfo CG_GUILD_REQ_LIST_t3237_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_REQ_LISTHandler::.ctor()
extern MethodInfo CG_GUILD_REQ_LISTHandler__ctor_m15097_MethodInfo;
 void CG_GUILD_REQ_LISTHandler__ctor_m15097 (CG_GUILD_REQ_LISTHandler_t2385 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_LISTHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_REQ_LISTHandler_Execute_m15098_MethodInfo;
 uint32_t CG_GUILD_REQ_LISTHandler_Execute_m15098 (CG_GUILD_REQ_LISTHandler_t2385 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_REQ_LIST_t3237 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_REQ_LIST_t3237 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_REQ_LIST_t3237_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_REQ_LISTHandler
extern TypeInfo CG_GUILD_REQ_LISTHandler_t2385_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_REQ_LISTHandler::.ctor()
MethodInfo CG_GUILD_REQ_LISTHandler__ctor_m15097_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_REQ_LISTHandler__ctor_m15097/* method */
	, &CG_GUILD_REQ_LISTHandler_t2385_il2cpp_TypeInfo/* declaring_type */
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
	, 8573/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_REQ_LISTHandler_t2385_CG_GUILD_REQ_LISTHandler_Execute_m15098_ParameterInfos[] = 
{
	{"ipacket", 0, 134222204, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_REQ_LISTHandler_t2385_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_LISTHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_REQ_LISTHandler_Execute_m15098_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_REQ_LISTHandler_Execute_m15098/* method */
	, &CG_GUILD_REQ_LISTHandler_t2385_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_REQ_LISTHandler_t2385_CG_GUILD_REQ_LISTHandler_Execute_m15098_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8574/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_REQ_LISTHandler_t2385_MethodInfos[] =
{
	&CG_GUILD_REQ_LISTHandler__ctor_m15097_MethodInfo,
	&CG_GUILD_REQ_LISTHandler_Execute_m15098_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_REQ_LISTHandler_Execute_m15098_MethodInfo;
static MethodInfo* CG_GUILD_REQ_LISTHandler_t2385_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_REQ_LISTHandler_Execute_m15098_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_REQ_LISTHandler_t2385_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_REQ_LISTHandler_t2385_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_REQ_LISTHandler_t2385_0_0_0;
extern Il2CppType CG_GUILD_REQ_LISTHandler_t2385_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_REQ_LISTHandler_t2385;
extern TypeInfo CG_GUILD_REQ_LISTHandler_t2385_il2cpp_TypeInfo;
TypeInfo CG_GUILD_REQ_LISTHandler_t2385_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_REQ_LISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_REQ_LISTHandler_t2385_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_REQ_LISTHandler_t2385_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_REQ_LISTHandler_t2385_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_REQ_LISTHandler_t2385_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_REQ_LISTHandler_t2385_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_REQ_LISTHandler_t2385_0_0_0/* byval_arg */
	, &CG_GUILD_REQ_LISTHandler_t2385_1_0_0/* this_arg */
	, CG_GUILD_REQ_LISTHandler_t2385_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_REQ_LISTHandler_t2385)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_REQ_WEEKREWARDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_WEEKRE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_REQ_WEEKREWARDHandler_t2386_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_REQ_WEEKREWARDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_REQ_WEEKREMethodDeclarations.h"

// CG_GUILD_REQ_WEEKREWARD
#include "AssemblyU2DCSharp_CG_GUILD_REQ_WEEKREWARD.h"
extern TypeInfo CG_GUILD_REQ_WEEKREWARD_t3609_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_REQ_WEEKREWARDHandler::.ctor()
extern MethodInfo CG_GUILD_REQ_WEEKREWARDHandler__ctor_m15099_MethodInfo;
 void CG_GUILD_REQ_WEEKREWARDHandler__ctor_m15099 (CG_GUILD_REQ_WEEKREWARDHandler_t2386 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_WEEKREWARDHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_REQ_WEEKREWARDHandler_Execute_m15100_MethodInfo;
 uint32_t CG_GUILD_REQ_WEEKREWARDHandler_Execute_m15100 (CG_GUILD_REQ_WEEKREWARDHandler_t2386 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_REQ_WEEKREWARD_t3609 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_REQ_WEEKREWARD_t3609 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_REQ_WEEKREWARD_t3609_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_REQ_WEEKREWARDHandler
extern TypeInfo CG_GUILD_REQ_WEEKREWARDHandler_t2386_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_REQ_WEEKREWARDHandler::.ctor()
MethodInfo CG_GUILD_REQ_WEEKREWARDHandler__ctor_m15099_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_REQ_WEEKREWARDHandler__ctor_m15099/* method */
	, &CG_GUILD_REQ_WEEKREWARDHandler_t2386_il2cpp_TypeInfo/* declaring_type */
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
	, 8575/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_REQ_WEEKREWARDHandler_t2386_CG_GUILD_REQ_WEEKREWARDHandler_Execute_m15100_ParameterInfos[] = 
{
	{"ipacket", 0, 134222205, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_REQ_WEEKREWARDHandler_t2386_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_REQ_WEEKREWARDHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_REQ_WEEKREWARDHandler_Execute_m15100_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_REQ_WEEKREWARDHandler_Execute_m15100/* method */
	, &CG_GUILD_REQ_WEEKREWARDHandler_t2386_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_REQ_WEEKREWARDHandler_t2386_CG_GUILD_REQ_WEEKREWARDHandler_Execute_m15100_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8576/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_REQ_WEEKREWARDHandler_t2386_MethodInfos[] =
{
	&CG_GUILD_REQ_WEEKREWARDHandler__ctor_m15099_MethodInfo,
	&CG_GUILD_REQ_WEEKREWARDHandler_Execute_m15100_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_REQ_WEEKREWARDHandler_Execute_m15100_MethodInfo;
static MethodInfo* CG_GUILD_REQ_WEEKREWARDHandler_t2386_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_REQ_WEEKREWARDHandler_Execute_m15100_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_REQ_WEEKREWARDHandler_t2386_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_REQ_WEEKREWARDHandler_t2386_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_REQ_WEEKREWARDHandler_t2386_0_0_0;
extern Il2CppType CG_GUILD_REQ_WEEKREWARDHandler_t2386_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_REQ_WEEKREWARDHandler_t2386;
extern TypeInfo CG_GUILD_REQ_WEEKREWARDHandler_t2386_il2cpp_TypeInfo;
TypeInfo CG_GUILD_REQ_WEEKREWARDHandler_t2386_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_REQ_WEEKREWARDHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_REQ_WEEKREWARDHandler_t2386_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_REQ_WEEKREWARDHandler_t2386_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_REQ_WEEKREWARDHandler_t2386_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_REQ_WEEKREWARDHandler_t2386_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_REQ_WEEKREWARDHandler_t2386_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_REQ_WEEKREWARDHandler_t2386_0_0_0/* byval_arg */
	, &CG_GUILD_REQ_WEEKREWARDHandler_t2386_1_0_0/* this_arg */
	, CG_GUILD_REQ_WEEKREWARDHandler_t2386_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_REQ_WEEKREWARDHandler_t2386)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_SEARCHHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SEARCHHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_SEARCHHandler_t2387_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_SEARCHHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SEARCHHandMethodDeclarations.h"

// CG_GUILD_SEARCH
#include "AssemblyU2DCSharp_CG_GUILD_SEARCH.h"
extern TypeInfo CG_GUILD_SEARCH_t3616_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_SEARCHHandler::.ctor()
extern MethodInfo CG_GUILD_SEARCHHandler__ctor_m15101_MethodInfo;
 void CG_GUILD_SEARCHHandler__ctor_m15101 (CG_GUILD_SEARCHHandler_t2387 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SEARCHHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_SEARCHHandler_Execute_m15102_MethodInfo;
 uint32_t CG_GUILD_SEARCHHandler_Execute_m15102 (CG_GUILD_SEARCHHandler_t2387 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_SEARCH_t3616 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_SEARCH_t3616 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_SEARCH_t3616_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_SEARCHHandler
extern TypeInfo CG_GUILD_SEARCHHandler_t2387_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_SEARCHHandler::.ctor()
MethodInfo CG_GUILD_SEARCHHandler__ctor_m15101_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_SEARCHHandler__ctor_m15101/* method */
	, &CG_GUILD_SEARCHHandler_t2387_il2cpp_TypeInfo/* declaring_type */
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
	, 8577/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_SEARCHHandler_t2387_CG_GUILD_SEARCHHandler_Execute_m15102_ParameterInfos[] = 
{
	{"ipacket", 0, 134222206, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_SEARCHHandler_t2387_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SEARCHHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_SEARCHHandler_Execute_m15102_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_SEARCHHandler_Execute_m15102/* method */
	, &CG_GUILD_SEARCHHandler_t2387_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_SEARCHHandler_t2387_CG_GUILD_SEARCHHandler_Execute_m15102_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8578/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_SEARCHHandler_t2387_MethodInfos[] =
{
	&CG_GUILD_SEARCHHandler__ctor_m15101_MethodInfo,
	&CG_GUILD_SEARCHHandler_Execute_m15102_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_SEARCHHandler_Execute_m15102_MethodInfo;
static MethodInfo* CG_GUILD_SEARCHHandler_t2387_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_SEARCHHandler_Execute_m15102_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_SEARCHHandler_t2387_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_SEARCHHandler_t2387_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_SEARCHHandler_t2387_0_0_0;
extern Il2CppType CG_GUILD_SEARCHHandler_t2387_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_SEARCHHandler_t2387;
extern TypeInfo CG_GUILD_SEARCHHandler_t2387_il2cpp_TypeInfo;
TypeInfo CG_GUILD_SEARCHHandler_t2387_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_SEARCHHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_SEARCHHandler_t2387_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_SEARCHHandler_t2387_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_SEARCHHandler_t2387_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_SEARCHHandler_t2387_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_SEARCHHandler_t2387_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_SEARCHHandler_t2387_0_0_0/* byval_arg */
	, &CG_GUILD_SEARCHHandler_t2387_1_0_0/* this_arg */
	, CG_GUILD_SEARCHHandler_t2387_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_SEARCHHandler_t2387)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_SET_AUTHORITYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SET_AUTHOR.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_SET_AUTHORITYHandler_t2388_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_SET_AUTHORITYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SET_AUTHORMethodDeclarations.h"

// CG_GUILD_SET_AUTHORITY
#include "AssemblyU2DCSharp_CG_GUILD_SET_AUTHORITY.h"
extern TypeInfo CG_GUILD_SET_AUTHORITY_t3607_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_SET_AUTHORITYHandler::.ctor()
extern MethodInfo CG_GUILD_SET_AUTHORITYHandler__ctor_m15103_MethodInfo;
 void CG_GUILD_SET_AUTHORITYHandler__ctor_m15103 (CG_GUILD_SET_AUTHORITYHandler_t2388 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SET_AUTHORITYHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_SET_AUTHORITYHandler_Execute_m15104_MethodInfo;
 uint32_t CG_GUILD_SET_AUTHORITYHandler_Execute_m15104 (CG_GUILD_SET_AUTHORITYHandler_t2388 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_SET_AUTHORITY_t3607 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_SET_AUTHORITY_t3607 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_SET_AUTHORITY_t3607_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_SET_AUTHORITYHandler
extern TypeInfo CG_GUILD_SET_AUTHORITYHandler_t2388_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_SET_AUTHORITYHandler::.ctor()
MethodInfo CG_GUILD_SET_AUTHORITYHandler__ctor_m15103_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_SET_AUTHORITYHandler__ctor_m15103/* method */
	, &CG_GUILD_SET_AUTHORITYHandler_t2388_il2cpp_TypeInfo/* declaring_type */
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
	, 8579/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_SET_AUTHORITYHandler_t2388_CG_GUILD_SET_AUTHORITYHandler_Execute_m15104_ParameterInfos[] = 
{
	{"ipacket", 0, 134222207, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_SET_AUTHORITYHandler_t2388_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SET_AUTHORITYHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_SET_AUTHORITYHandler_Execute_m15104_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_SET_AUTHORITYHandler_Execute_m15104/* method */
	, &CG_GUILD_SET_AUTHORITYHandler_t2388_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_SET_AUTHORITYHandler_t2388_CG_GUILD_SET_AUTHORITYHandler_Execute_m15104_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8580/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_SET_AUTHORITYHandler_t2388_MethodInfos[] =
{
	&CG_GUILD_SET_AUTHORITYHandler__ctor_m15103_MethodInfo,
	&CG_GUILD_SET_AUTHORITYHandler_Execute_m15104_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_SET_AUTHORITYHandler_Execute_m15104_MethodInfo;
static MethodInfo* CG_GUILD_SET_AUTHORITYHandler_t2388_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_SET_AUTHORITYHandler_Execute_m15104_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_SET_AUTHORITYHandler_t2388_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_SET_AUTHORITYHandler_t2388_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_SET_AUTHORITYHandler_t2388_0_0_0;
extern Il2CppType CG_GUILD_SET_AUTHORITYHandler_t2388_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_SET_AUTHORITYHandler_t2388;
extern TypeInfo CG_GUILD_SET_AUTHORITYHandler_t2388_il2cpp_TypeInfo;
TypeInfo CG_GUILD_SET_AUTHORITYHandler_t2388_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_SET_AUTHORITYHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_SET_AUTHORITYHandler_t2388_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_SET_AUTHORITYHandler_t2388_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_SET_AUTHORITYHandler_t2388_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_SET_AUTHORITYHandler_t2388_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_SET_AUTHORITYHandler_t2388_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_SET_AUTHORITYHandler_t2388_0_0_0/* byval_arg */
	, &CG_GUILD_SET_AUTHORITYHandler_t2388_1_0_0/* this_arg */
	, CG_GUILD_SET_AUTHORITYHandler_t2388_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_SET_AUTHORITYHandler_t2388)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_LISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SHOP_ITEM_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_SHOP_ITEM_LISTHandler_t2389_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_LISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SHOP_ITEM_MethodDeclarations.h"

// CG_GUILD_SHOP_ITEM_LIST
#include "AssemblyU2DCSharp_CG_GUILD_SHOP_ITEM_LIST.h"
extern TypeInfo CG_GUILD_SHOP_ITEM_LIST_t3444_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_LISTHandler::.ctor()
extern MethodInfo CG_GUILD_SHOP_ITEM_LISTHandler__ctor_m15105_MethodInfo;
 void CG_GUILD_SHOP_ITEM_LISTHandler__ctor_m15105 (CG_GUILD_SHOP_ITEM_LISTHandler_t2389 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_LISTHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_SHOP_ITEM_LISTHandler_Execute_m15106_MethodInfo;
 uint32_t CG_GUILD_SHOP_ITEM_LISTHandler_Execute_m15106 (CG_GUILD_SHOP_ITEM_LISTHandler_t2389 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_SHOP_ITEM_LIST_t3444 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_SHOP_ITEM_LIST_t3444 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_SHOP_ITEM_LIST_t3444_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_LISTHandler
extern TypeInfo CG_GUILD_SHOP_ITEM_LISTHandler_t2389_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_LISTHandler::.ctor()
MethodInfo CG_GUILD_SHOP_ITEM_LISTHandler__ctor_m15105_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_SHOP_ITEM_LISTHandler__ctor_m15105/* method */
	, &CG_GUILD_SHOP_ITEM_LISTHandler_t2389_il2cpp_TypeInfo/* declaring_type */
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
	, 8581/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_SHOP_ITEM_LISTHandler_t2389_CG_GUILD_SHOP_ITEM_LISTHandler_Execute_m15106_ParameterInfos[] = 
{
	{"ipacket", 0, 134222208, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_SHOP_ITEM_LISTHandler_t2389_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_LISTHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_SHOP_ITEM_LISTHandler_Execute_m15106_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_SHOP_ITEM_LISTHandler_Execute_m15106/* method */
	, &CG_GUILD_SHOP_ITEM_LISTHandler_t2389_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_SHOP_ITEM_LISTHandler_t2389_CG_GUILD_SHOP_ITEM_LISTHandler_Execute_m15106_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8582/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_SHOP_ITEM_LISTHandler_t2389_MethodInfos[] =
{
	&CG_GUILD_SHOP_ITEM_LISTHandler__ctor_m15105_MethodInfo,
	&CG_GUILD_SHOP_ITEM_LISTHandler_Execute_m15106_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_SHOP_ITEM_LISTHandler_Execute_m15106_MethodInfo;
static MethodInfo* CG_GUILD_SHOP_ITEM_LISTHandler_t2389_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_SHOP_ITEM_LISTHandler_Execute_m15106_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_SHOP_ITEM_LISTHandler_t2389_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_SHOP_ITEM_LISTHandler_t2389_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_SHOP_ITEM_LISTHandler_t2389_0_0_0;
extern Il2CppType CG_GUILD_SHOP_ITEM_LISTHandler_t2389_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_SHOP_ITEM_LISTHandler_t2389;
extern TypeInfo CG_GUILD_SHOP_ITEM_LISTHandler_t2389_il2cpp_TypeInfo;
TypeInfo CG_GUILD_SHOP_ITEM_LISTHandler_t2389_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_SHOP_ITEM_LISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_SHOP_ITEM_LISTHandler_t2389_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_SHOP_ITEM_LISTHandler_t2389_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_SHOP_ITEM_LISTHandler_t2389_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_SHOP_ITEM_LISTHandler_t2389_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_SHOP_ITEM_LISTHandler_t2389_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_SHOP_ITEM_LISTHandler_t2389_0_0_0/* byval_arg */
	, &CG_GUILD_SHOP_ITEM_LISTHandler_t2389_1_0_0/* this_arg */
	, CG_GUILD_SHOP_ITEM_LISTHandler_t2389_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_SHOP_ITEM_LISTHandler_t2389)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SHOP_ITEM__0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SHOP_ITEM__0MethodDeclarations.h"

// CG_GUILD_SHOP_ITEM_MAKE
#include "AssemblyU2DCSharp_CG_GUILD_SHOP_ITEM_MAKE.h"
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKE_t3452_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKEHandler::.ctor()
extern MethodInfo CG_GUILD_SHOP_ITEM_MAKEHandler__ctor_m15107_MethodInfo;
 void CG_GUILD_SHOP_ITEM_MAKEHandler__ctor_m15107 (CG_GUILD_SHOP_ITEM_MAKEHandler_t2390 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKEHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_SHOP_ITEM_MAKEHandler_Execute_m15108_MethodInfo;
 uint32_t CG_GUILD_SHOP_ITEM_MAKEHandler_Execute_m15108 (CG_GUILD_SHOP_ITEM_MAKEHandler_t2390 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_SHOP_ITEM_MAKE_t3452 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_SHOP_ITEM_MAKE_t3452 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_SHOP_ITEM_MAKE_t3452_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKEHandler
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKEHandler::.ctor()
MethodInfo CG_GUILD_SHOP_ITEM_MAKEHandler__ctor_m15107_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_SHOP_ITEM_MAKEHandler__ctor_m15107/* method */
	, &CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_il2cpp_TypeInfo/* declaring_type */
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
	, 8583/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_CG_GUILD_SHOP_ITEM_MAKEHandler_Execute_m15108_ParameterInfos[] = 
{
	{"ipacket", 0, 134222209, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKEHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_SHOP_ITEM_MAKEHandler_Execute_m15108_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_SHOP_ITEM_MAKEHandler_Execute_m15108/* method */
	, &CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_CG_GUILD_SHOP_ITEM_MAKEHandler_Execute_m15108_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8584/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_MethodInfos[] =
{
	&CG_GUILD_SHOP_ITEM_MAKEHandler__ctor_m15107_MethodInfo,
	&CG_GUILD_SHOP_ITEM_MAKEHandler_Execute_m15108_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_SHOP_ITEM_MAKEHandler_Execute_m15108_MethodInfo;
static MethodInfo* CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_SHOP_ITEM_MAKEHandler_Execute_m15108_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_0_0_0;
extern Il2CppType CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_SHOP_ITEM_MAKEHandler_t2390;
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_il2cpp_TypeInfo;
TypeInfo CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_SHOP_ITEM_MAKEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_0_0_0/* byval_arg */
	, &CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_1_0_0/* this_arg */
	, CG_GUILD_SHOP_ITEM_MAKEHandler_t2390_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_SHOP_ITEM_MAKEHandler_t2390)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKE_LISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SHOP_ITEM__1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKE_LISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_GUILD_SHOP_ITEM__1MethodDeclarations.h"

// CG_GUILD_SHOP_ITEM_MAKE_LIST
#include "AssemblyU2DCSharp_CG_GUILD_SHOP_ITEM_MAKE_LIST.h"
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKE_LIST_t3450_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKE_LISTHandler::.ctor()
extern MethodInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler__ctor_m15109_MethodInfo;
 void CG_GUILD_SHOP_ITEM_MAKE_LISTHandler__ctor_m15109 (CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKE_LISTHandler::Execute(PacketDistributed)
extern MethodInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_Execute_m15110_MethodInfo;
 uint32_t CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_Execute_m15110 (CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_GUILD_SHOP_ITEM_MAKE_LIST_t3450 * V_0 = {0};
	{
		V_0 = ((CG_GUILD_SHOP_ITEM_MAKE_LIST_t3450 *)Castclass(___ipacket, InitializedTypeInfo(&CG_GUILD_SHOP_ITEM_MAKE_LIST_t3450_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKE_LISTHandler
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKE_LISTHandler::.ctor()
MethodInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler__ctor_m15109_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_GUILD_SHOP_ITEM_MAKE_LISTHandler__ctor_m15109/* method */
	, &CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_il2cpp_TypeInfo/* declaring_type */
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
	, 8585/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_Execute_m15110_ParameterInfos[] = 
{
	{"ipacket", 0, 134222210, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_GUILD_SHOP_ITEM_MAKE_LISTHandler::Execute(PacketDistributed)
MethodInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_Execute_m15110_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_Execute_m15110/* method */
	, &CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_Execute_m15110_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8586/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_MethodInfos[] =
{
	&CG_GUILD_SHOP_ITEM_MAKE_LISTHandler__ctor_m15109_MethodInfo,
	&CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_Execute_m15110_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_Execute_m15110_MethodInfo;
static MethodInfo* CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_Execute_m15110_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_0_0_0;
extern Il2CppType CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391;
extern TypeInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_il2cpp_TypeInfo;
TypeInfo CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_GUILD_SHOP_ITEM_MAKE_LISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_il2cpp_TypeInfo/* element_class */
	, CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_InterfacesTypeInfos/* implemented_interfaces */
	, CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_il2cpp_TypeInfo/* cast_class */
	, &CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_0_0_0/* byval_arg */
	, &CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_1_0_0/* this_arg */
	, CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_GUILD_SHOP_ITEM_MAKE_LISTHandler_t2391)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.CG_HUASHAN_ASSIST_REQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_HUASHAN_ASSIST_R.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_HUASHAN_ASSIST_REQHandler_t2392_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_HUASHAN_ASSIST_REQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_HUASHAN_ASSIST_RMethodDeclarations.h"

// CG_HUASHAN_ASSIST_REQ
#include "AssemblyU2DCSharp_CG_HUASHAN_ASSIST_REQ.h"
extern TypeInfo CG_HUASHAN_ASSIST_REQ_t3178_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_HUASHAN_ASSIST_REQHandler::.ctor()
extern MethodInfo CG_HUASHAN_ASSIST_REQHandler__ctor_m15111_MethodInfo;
 void CG_HUASHAN_ASSIST_REQHandler__ctor_m15111 (CG_HUASHAN_ASSIST_REQHandler_t2392 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_HUASHAN_ASSIST_REQHandler::Execute(PacketDistributed)
extern MethodInfo CG_HUASHAN_ASSIST_REQHandler_Execute_m15112_MethodInfo;
 uint32_t CG_HUASHAN_ASSIST_REQHandler_Execute_m15112 (CG_HUASHAN_ASSIST_REQHandler_t2392 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_HUASHAN_ASSIST_REQ_t3178 * V_0 = {0};
	{
		V_0 = ((CG_HUASHAN_ASSIST_REQ_t3178 *)Castclass(___ipacket, InitializedTypeInfo(&CG_HUASHAN_ASSIST_REQ_t3178_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.CG_HUASHAN_ASSIST_REQHandler
extern TypeInfo CG_HUASHAN_ASSIST_REQHandler_t2392_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_HUASHAN_ASSIST_REQHandler::.ctor()
MethodInfo CG_HUASHAN_ASSIST_REQHandler__ctor_m15111_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_HUASHAN_ASSIST_REQHandler__ctor_m15111/* method */
	, &CG_HUASHAN_ASSIST_REQHandler_t2392_il2cpp_TypeInfo/* declaring_type */
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
	, 8587/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_HUASHAN_ASSIST_REQHandler_t2392_CG_HUASHAN_ASSIST_REQHandler_Execute_m15112_ParameterInfos[] = 
{
	{"ipacket", 0, 134222211, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_HUASHAN_ASSIST_REQHandler_t2392_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_HUASHAN_ASSIST_REQHandler::Execute(PacketDistributed)
MethodInfo CG_HUASHAN_ASSIST_REQHandler_Execute_m15112_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_HUASHAN_ASSIST_REQHandler_Execute_m15112/* method */
	, &CG_HUASHAN_ASSIST_REQHandler_t2392_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_HUASHAN_ASSIST_REQHandler_t2392_CG_HUASHAN_ASSIST_REQHandler_Execute_m15112_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8588/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_HUASHAN_ASSIST_REQHandler_t2392_MethodInfos[] =
{
	&CG_HUASHAN_ASSIST_REQHandler__ctor_m15111_MethodInfo,
	&CG_HUASHAN_ASSIST_REQHandler_Execute_m15112_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_HUASHAN_ASSIST_REQHandler_Execute_m15112_MethodInfo;
static MethodInfo* CG_HUASHAN_ASSIST_REQHandler_t2392_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_HUASHAN_ASSIST_REQHandler_Execute_m15112_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_HUASHAN_ASSIST_REQHandler_t2392_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_HUASHAN_ASSIST_REQHandler_t2392_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_HUASHAN_ASSIST_REQHandler_t2392_0_0_0;
extern Il2CppType CG_HUASHAN_ASSIST_REQHandler_t2392_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_HUASHAN_ASSIST_REQHandler_t2392;
extern TypeInfo CG_HUASHAN_ASSIST_REQHandler_t2392_il2cpp_TypeInfo;
TypeInfo CG_HUASHAN_ASSIST_REQHandler_t2392_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_HUASHAN_ASSIST_REQHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_HUASHAN_ASSIST_REQHandler_t2392_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_HUASHAN_ASSIST_REQHandler_t2392_il2cpp_TypeInfo/* element_class */
	, CG_HUASHAN_ASSIST_REQHandler_t2392_InterfacesTypeInfos/* implemented_interfaces */
	, CG_HUASHAN_ASSIST_REQHandler_t2392_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_HUASHAN_ASSIST_REQHandler_t2392_il2cpp_TypeInfo/* cast_class */
	, &CG_HUASHAN_ASSIST_REQHandler_t2392_0_0_0/* byval_arg */
	, &CG_HUASHAN_ASSIST_REQHandler_t2392_1_0_0/* this_arg */
	, CG_HUASHAN_ASSIST_REQHandler_t2392_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_HUASHAN_ASSIST_REQHandler_t2392)/* instance_size */
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
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
