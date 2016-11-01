#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// SPacket.SocketInstance.CG_SYSTEMSHOP_VIEWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_SYSTEMSHOP_VIEWH.h"
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
extern TypeInfo CG_SYSTEMSHOP_VIEWHandler_t2493_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_SYSTEMSHOP_VIEWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_SYSTEMSHOP_VIEWHMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributed.h"
// CG_SYSTEMSHOP_VIEW
#include "AssemblyU2DCSharp_CG_SYSTEMSHOP_VIEW.h"
extern TypeInfo CG_SYSTEMSHOP_VIEW_t2954_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void SPacket.SocketInstance.CG_SYSTEMSHOP_VIEWHandler::.ctor()
extern MethodInfo CG_SYSTEMSHOP_VIEWHandler__ctor_m15313_MethodInfo;
 void CG_SYSTEMSHOP_VIEWHandler__ctor_m15313 (CG_SYSTEMSHOP_VIEWHandler_t2493 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_SYSTEMSHOP_VIEWHandler::Execute(PacketDistributed)
extern MethodInfo CG_SYSTEMSHOP_VIEWHandler_Execute_m15314_MethodInfo;
 uint32_t CG_SYSTEMSHOP_VIEWHandler_Execute_m15314 (CG_SYSTEMSHOP_VIEWHandler_t2493 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_SYSTEMSHOP_VIEW_t2954 * V_0 = {0};
	{
		V_0 = ((CG_SYSTEMSHOP_VIEW_t2954 *)Castclass(___ipacket, InitializedTypeInfo(&CG_SYSTEMSHOP_VIEW_t2954_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_SYSTEMSHOP_VIEWHandler
extern TypeInfo CG_SYSTEMSHOP_VIEWHandler_t2493_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_SYSTEMSHOP_VIEWHandler::.ctor()
MethodInfo CG_SYSTEMSHOP_VIEWHandler__ctor_m15313_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_SYSTEMSHOP_VIEWHandler__ctor_m15313/* method */
	, &CG_SYSTEMSHOP_VIEWHandler_t2493_il2cpp_TypeInfo/* declaring_type */
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
	, 8789/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_SYSTEMSHOP_VIEWHandler_t2493_CG_SYSTEMSHOP_VIEWHandler_Execute_m15314_ParameterInfos[] = 
{
	{"ipacket", 0, 134222312, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_SYSTEMSHOP_VIEWHandler_t2493_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_SYSTEMSHOP_VIEWHandler::Execute(PacketDistributed)
MethodInfo CG_SYSTEMSHOP_VIEWHandler_Execute_m15314_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_SYSTEMSHOP_VIEWHandler_Execute_m15314/* method */
	, &CG_SYSTEMSHOP_VIEWHandler_t2493_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_SYSTEMSHOP_VIEWHandler_t2493_CG_SYSTEMSHOP_VIEWHandler_Execute_m15314_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8790/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_SYSTEMSHOP_VIEWHandler_t2493_MethodInfos[] =
{
	&CG_SYSTEMSHOP_VIEWHandler__ctor_m15313_MethodInfo,
	&CG_SYSTEMSHOP_VIEWHandler_Execute_m15314_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_SYSTEMSHOP_VIEWHandler_Execute_m15314_MethodInfo;
static MethodInfo* CG_SYSTEMSHOP_VIEWHandler_t2493_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_SYSTEMSHOP_VIEWHandler_Execute_m15314_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_SYSTEMSHOP_VIEWHandler_t2493_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_SYSTEMSHOP_VIEWHandler_t2493_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_SYSTEMSHOP_VIEWHandler_t2493_0_0_0;
extern Il2CppType CG_SYSTEMSHOP_VIEWHandler_t2493_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_SYSTEMSHOP_VIEWHandler_t2493;
extern TypeInfo CG_SYSTEMSHOP_VIEWHandler_t2493_il2cpp_TypeInfo;
TypeInfo CG_SYSTEMSHOP_VIEWHandler_t2493_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_SYSTEMSHOP_VIEWHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_SYSTEMSHOP_VIEWHandler_t2493_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_SYSTEMSHOP_VIEWHandler_t2493_il2cpp_TypeInfo/* element_class */
	, CG_SYSTEMSHOP_VIEWHandler_t2493_InterfacesTypeInfos/* implemented_interfaces */
	, CG_SYSTEMSHOP_VIEWHandler_t2493_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_SYSTEMSHOP_VIEWHandler_t2493_il2cpp_TypeInfo/* cast_class */
	, &CG_SYSTEMSHOP_VIEWHandler_t2493_0_0_0/* byval_arg */
	, &CG_SYSTEMSHOP_VIEWHandler_t2493_1_0_0/* this_arg */
	, CG_SYSTEMSHOP_VIEWHandler_t2493_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_SYSTEMSHOP_VIEWHandler_t2493)/* instance_size */
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
// SPacket.SocketInstance.CG_TAKEOFF_FASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TAKEOFF_FASHIONH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_TAKEOFF_FASHIONHandler_t2494_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_TAKEOFF_FASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TAKEOFF_FASHIONHMethodDeclarations.h"

// CG_TAKEOFF_FASHION
#include "AssemblyU2DCSharp_CG_TAKEOFF_FASHION.h"
extern TypeInfo CG_TAKEOFF_FASHION_t3224_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_TAKEOFF_FASHIONHandler::.ctor()
extern MethodInfo CG_TAKEOFF_FASHIONHandler__ctor_m15315_MethodInfo;
 void CG_TAKEOFF_FASHIONHandler__ctor_m15315 (CG_TAKEOFF_FASHIONHandler_t2494 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_TAKEOFF_FASHIONHandler::Execute(PacketDistributed)
extern MethodInfo CG_TAKEOFF_FASHIONHandler_Execute_m15316_MethodInfo;
 uint32_t CG_TAKEOFF_FASHIONHandler_Execute_m15316 (CG_TAKEOFF_FASHIONHandler_t2494 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_TAKEOFF_FASHION_t3224 * V_0 = {0};
	{
		V_0 = ((CG_TAKEOFF_FASHION_t3224 *)Castclass(___ipacket, InitializedTypeInfo(&CG_TAKEOFF_FASHION_t3224_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_TAKEOFF_FASHIONHandler
extern TypeInfo CG_TAKEOFF_FASHIONHandler_t2494_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_TAKEOFF_FASHIONHandler::.ctor()
MethodInfo CG_TAKEOFF_FASHIONHandler__ctor_m15315_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_TAKEOFF_FASHIONHandler__ctor_m15315/* method */
	, &CG_TAKEOFF_FASHIONHandler_t2494_il2cpp_TypeInfo/* declaring_type */
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
	, 8791/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_TAKEOFF_FASHIONHandler_t2494_CG_TAKEOFF_FASHIONHandler_Execute_m15316_ParameterInfos[] = 
{
	{"ipacket", 0, 134222313, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_TAKEOFF_FASHIONHandler_t2494_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_TAKEOFF_FASHIONHandler::Execute(PacketDistributed)
MethodInfo CG_TAKEOFF_FASHIONHandler_Execute_m15316_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_TAKEOFF_FASHIONHandler_Execute_m15316/* method */
	, &CG_TAKEOFF_FASHIONHandler_t2494_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_TAKEOFF_FASHIONHandler_t2494_CG_TAKEOFF_FASHIONHandler_Execute_m15316_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8792/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_TAKEOFF_FASHIONHandler_t2494_MethodInfos[] =
{
	&CG_TAKEOFF_FASHIONHandler__ctor_m15315_MethodInfo,
	&CG_TAKEOFF_FASHIONHandler_Execute_m15316_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_TAKEOFF_FASHIONHandler_Execute_m15316_MethodInfo;
static MethodInfo* CG_TAKEOFF_FASHIONHandler_t2494_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_TAKEOFF_FASHIONHandler_Execute_m15316_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_TAKEOFF_FASHIONHandler_t2494_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_TAKEOFF_FASHIONHandler_t2494_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_TAKEOFF_FASHIONHandler_t2494_0_0_0;
extern Il2CppType CG_TAKEOFF_FASHIONHandler_t2494_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_TAKEOFF_FASHIONHandler_t2494;
extern TypeInfo CG_TAKEOFF_FASHIONHandler_t2494_il2cpp_TypeInfo;
TypeInfo CG_TAKEOFF_FASHIONHandler_t2494_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_TAKEOFF_FASHIONHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_TAKEOFF_FASHIONHandler_t2494_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_TAKEOFF_FASHIONHandler_t2494_il2cpp_TypeInfo/* element_class */
	, CG_TAKEOFF_FASHIONHandler_t2494_InterfacesTypeInfos/* implemented_interfaces */
	, CG_TAKEOFF_FASHIONHandler_t2494_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_TAKEOFF_FASHIONHandler_t2494_il2cpp_TypeInfo/* cast_class */
	, &CG_TAKEOFF_FASHIONHandler_t2494_0_0_0/* byval_arg */
	, &CG_TAKEOFF_FASHIONHandler_t2494_1_0_0/* this_arg */
	, CG_TAKEOFF_FASHIONHandler_t2494_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_TAKEOFF_FASHIONHandler_t2494)/* instance_size */
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
// SPacket.SocketInstance.CG_TAKE_GEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TAKE_GEMHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_TAKE_GEMHandler_t2495_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_TAKE_GEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TAKE_GEMHandlerMethodDeclarations.h"

// CG_TAKE_GEM
#include "AssemblyU2DCSharp_CG_TAKE_GEM.h"
extern TypeInfo CG_TAKE_GEM_t3216_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_TAKE_GEMHandler::.ctor()
extern MethodInfo CG_TAKE_GEMHandler__ctor_m15317_MethodInfo;
 void CG_TAKE_GEMHandler__ctor_m15317 (CG_TAKE_GEMHandler_t2495 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_TAKE_GEMHandler::Execute(PacketDistributed)
extern MethodInfo CG_TAKE_GEMHandler_Execute_m15318_MethodInfo;
 uint32_t CG_TAKE_GEMHandler_Execute_m15318 (CG_TAKE_GEMHandler_t2495 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_TAKE_GEM_t3216 * V_0 = {0};
	{
		V_0 = ((CG_TAKE_GEM_t3216 *)Castclass(___ipacket, InitializedTypeInfo(&CG_TAKE_GEM_t3216_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_TAKE_GEMHandler
extern TypeInfo CG_TAKE_GEMHandler_t2495_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_TAKE_GEMHandler::.ctor()
MethodInfo CG_TAKE_GEMHandler__ctor_m15317_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_TAKE_GEMHandler__ctor_m15317/* method */
	, &CG_TAKE_GEMHandler_t2495_il2cpp_TypeInfo/* declaring_type */
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
	, 8793/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_TAKE_GEMHandler_t2495_CG_TAKE_GEMHandler_Execute_m15318_ParameterInfos[] = 
{
	{"ipacket", 0, 134222314, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_TAKE_GEMHandler_t2495_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_TAKE_GEMHandler::Execute(PacketDistributed)
MethodInfo CG_TAKE_GEMHandler_Execute_m15318_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_TAKE_GEMHandler_Execute_m15318/* method */
	, &CG_TAKE_GEMHandler_t2495_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_TAKE_GEMHandler_t2495_CG_TAKE_GEMHandler_Execute_m15318_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8794/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_TAKE_GEMHandler_t2495_MethodInfos[] =
{
	&CG_TAKE_GEMHandler__ctor_m15317_MethodInfo,
	&CG_TAKE_GEMHandler_Execute_m15318_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_TAKE_GEMHandler_Execute_m15318_MethodInfo;
static MethodInfo* CG_TAKE_GEMHandler_t2495_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_TAKE_GEMHandler_Execute_m15318_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_TAKE_GEMHandler_t2495_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_TAKE_GEMHandler_t2495_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_TAKE_GEMHandler_t2495_0_0_0;
extern Il2CppType CG_TAKE_GEMHandler_t2495_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_TAKE_GEMHandler_t2495;
extern TypeInfo CG_TAKE_GEMHandler_t2495_il2cpp_TypeInfo;
TypeInfo CG_TAKE_GEMHandler_t2495_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_TAKE_GEMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_TAKE_GEMHandler_t2495_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_TAKE_GEMHandler_t2495_il2cpp_TypeInfo/* element_class */
	, CG_TAKE_GEMHandler_t2495_InterfacesTypeInfos/* implemented_interfaces */
	, CG_TAKE_GEMHandler_t2495_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_TAKE_GEMHandler_t2495_il2cpp_TypeInfo/* cast_class */
	, &CG_TAKE_GEMHandler_t2495_0_0_0/* byval_arg */
	, &CG_TAKE_GEMHandler_t2495_1_0_0/* this_arg */
	, CG_TAKE_GEMHandler_t2495_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_TAKE_GEMHandler_t2495)/* instance_size */
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
// SPacket.SocketInstance.CG_TAKE_ITEM_STORAGEPACKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TAKE_ITEM_STORAG.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_TAKE_ITEM_STORAGEPACKHandler_t2496_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_TAKE_ITEM_STORAGEPACKHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TAKE_ITEM_STORAGMethodDeclarations.h"

// CG_TAKE_ITEM_STORAGEPACK
#include "AssemblyU2DCSharp_CG_TAKE_ITEM_STORAGEPACK.h"
extern TypeInfo CG_TAKE_ITEM_STORAGEPACK_t3388_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_TAKE_ITEM_STORAGEPACKHandler::.ctor()
extern MethodInfo CG_TAKE_ITEM_STORAGEPACKHandler__ctor_m15319_MethodInfo;
 void CG_TAKE_ITEM_STORAGEPACKHandler__ctor_m15319 (CG_TAKE_ITEM_STORAGEPACKHandler_t2496 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_TAKE_ITEM_STORAGEPACKHandler::Execute(PacketDistributed)
extern MethodInfo CG_TAKE_ITEM_STORAGEPACKHandler_Execute_m15320_MethodInfo;
 uint32_t CG_TAKE_ITEM_STORAGEPACKHandler_Execute_m15320 (CG_TAKE_ITEM_STORAGEPACKHandler_t2496 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_TAKE_ITEM_STORAGEPACK_t3388 * V_0 = {0};
	{
		V_0 = ((CG_TAKE_ITEM_STORAGEPACK_t3388 *)Castclass(___ipacket, InitializedTypeInfo(&CG_TAKE_ITEM_STORAGEPACK_t3388_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_TAKE_ITEM_STORAGEPACKHandler
extern TypeInfo CG_TAKE_ITEM_STORAGEPACKHandler_t2496_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_TAKE_ITEM_STORAGEPACKHandler::.ctor()
MethodInfo CG_TAKE_ITEM_STORAGEPACKHandler__ctor_m15319_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_TAKE_ITEM_STORAGEPACKHandler__ctor_m15319/* method */
	, &CG_TAKE_ITEM_STORAGEPACKHandler_t2496_il2cpp_TypeInfo/* declaring_type */
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
	, 8795/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_TAKE_ITEM_STORAGEPACKHandler_t2496_CG_TAKE_ITEM_STORAGEPACKHandler_Execute_m15320_ParameterInfos[] = 
{
	{"ipacket", 0, 134222315, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_TAKE_ITEM_STORAGEPACKHandler_t2496_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_TAKE_ITEM_STORAGEPACKHandler::Execute(PacketDistributed)
MethodInfo CG_TAKE_ITEM_STORAGEPACKHandler_Execute_m15320_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_TAKE_ITEM_STORAGEPACKHandler_Execute_m15320/* method */
	, &CG_TAKE_ITEM_STORAGEPACKHandler_t2496_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_TAKE_ITEM_STORAGEPACKHandler_t2496_CG_TAKE_ITEM_STORAGEPACKHandler_Execute_m15320_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8796/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_TAKE_ITEM_STORAGEPACKHandler_t2496_MethodInfos[] =
{
	&CG_TAKE_ITEM_STORAGEPACKHandler__ctor_m15319_MethodInfo,
	&CG_TAKE_ITEM_STORAGEPACKHandler_Execute_m15320_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_TAKE_ITEM_STORAGEPACKHandler_Execute_m15320_MethodInfo;
static MethodInfo* CG_TAKE_ITEM_STORAGEPACKHandler_t2496_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_TAKE_ITEM_STORAGEPACKHandler_Execute_m15320_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_TAKE_ITEM_STORAGEPACKHandler_t2496_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_TAKE_ITEM_STORAGEPACKHandler_t2496_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_TAKE_ITEM_STORAGEPACKHandler_t2496_0_0_0;
extern Il2CppType CG_TAKE_ITEM_STORAGEPACKHandler_t2496_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_TAKE_ITEM_STORAGEPACKHandler_t2496;
extern TypeInfo CG_TAKE_ITEM_STORAGEPACKHandler_t2496_il2cpp_TypeInfo;
TypeInfo CG_TAKE_ITEM_STORAGEPACKHandler_t2496_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_TAKE_ITEM_STORAGEPACKHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_TAKE_ITEM_STORAGEPACKHandler_t2496_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_TAKE_ITEM_STORAGEPACKHandler_t2496_il2cpp_TypeInfo/* element_class */
	, CG_TAKE_ITEM_STORAGEPACKHandler_t2496_InterfacesTypeInfos/* implemented_interfaces */
	, CG_TAKE_ITEM_STORAGEPACKHandler_t2496_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_TAKE_ITEM_STORAGEPACKHandler_t2496_il2cpp_TypeInfo/* cast_class */
	, &CG_TAKE_ITEM_STORAGEPACKHandler_t2496_0_0_0/* byval_arg */
	, &CG_TAKE_ITEM_STORAGEPACKHandler_t2496_1_0_0/* this_arg */
	, CG_TAKE_ITEM_STORAGEPACKHandler_t2496_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_TAKE_ITEM_STORAGEPACKHandler_t2496)/* instance_size */
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
// SPacket.SocketInstance.CG_TEAM_CALLMEMBERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_CALLMEMBERH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_TEAM_CALLMEMBERHandler_t2497_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_TEAM_CALLMEMBERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_CALLMEMBERHMethodDeclarations.h"

// CG_TEAM_CALLMEMBER
#include "AssemblyU2DCSharp_CG_TEAM_CALLMEMBER.h"
extern TypeInfo CG_TEAM_CALLMEMBER_t3506_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_TEAM_CALLMEMBERHandler::.ctor()
extern MethodInfo CG_TEAM_CALLMEMBERHandler__ctor_m15321_MethodInfo;
 void CG_TEAM_CALLMEMBERHandler__ctor_m15321 (CG_TEAM_CALLMEMBERHandler_t2497 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_TEAM_CALLMEMBERHandler::Execute(PacketDistributed)
extern MethodInfo CG_TEAM_CALLMEMBERHandler_Execute_m15322_MethodInfo;
 uint32_t CG_TEAM_CALLMEMBERHandler_Execute_m15322 (CG_TEAM_CALLMEMBERHandler_t2497 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_TEAM_CALLMEMBER_t3506 * V_0 = {0};
	{
		V_0 = ((CG_TEAM_CALLMEMBER_t3506 *)Castclass(___ipacket, InitializedTypeInfo(&CG_TEAM_CALLMEMBER_t3506_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_TEAM_CALLMEMBERHandler
extern TypeInfo CG_TEAM_CALLMEMBERHandler_t2497_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_TEAM_CALLMEMBERHandler::.ctor()
MethodInfo CG_TEAM_CALLMEMBERHandler__ctor_m15321_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_TEAM_CALLMEMBERHandler__ctor_m15321/* method */
	, &CG_TEAM_CALLMEMBERHandler_t2497_il2cpp_TypeInfo/* declaring_type */
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
	, 8797/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_TEAM_CALLMEMBERHandler_t2497_CG_TEAM_CALLMEMBERHandler_Execute_m15322_ParameterInfos[] = 
{
	{"ipacket", 0, 134222316, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_TEAM_CALLMEMBERHandler_t2497_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_TEAM_CALLMEMBERHandler::Execute(PacketDistributed)
MethodInfo CG_TEAM_CALLMEMBERHandler_Execute_m15322_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_TEAM_CALLMEMBERHandler_Execute_m15322/* method */
	, &CG_TEAM_CALLMEMBERHandler_t2497_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_TEAM_CALLMEMBERHandler_t2497_CG_TEAM_CALLMEMBERHandler_Execute_m15322_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8798/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_TEAM_CALLMEMBERHandler_t2497_MethodInfos[] =
{
	&CG_TEAM_CALLMEMBERHandler__ctor_m15321_MethodInfo,
	&CG_TEAM_CALLMEMBERHandler_Execute_m15322_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_TEAM_CALLMEMBERHandler_Execute_m15322_MethodInfo;
static MethodInfo* CG_TEAM_CALLMEMBERHandler_t2497_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_TEAM_CALLMEMBERHandler_Execute_m15322_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_TEAM_CALLMEMBERHandler_t2497_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_TEAM_CALLMEMBERHandler_t2497_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_TEAM_CALLMEMBERHandler_t2497_0_0_0;
extern Il2CppType CG_TEAM_CALLMEMBERHandler_t2497_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_TEAM_CALLMEMBERHandler_t2497;
extern TypeInfo CG_TEAM_CALLMEMBERHandler_t2497_il2cpp_TypeInfo;
TypeInfo CG_TEAM_CALLMEMBERHandler_t2497_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_TEAM_CALLMEMBERHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_TEAM_CALLMEMBERHandler_t2497_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_TEAM_CALLMEMBERHandler_t2497_il2cpp_TypeInfo/* element_class */
	, CG_TEAM_CALLMEMBERHandler_t2497_InterfacesTypeInfos/* implemented_interfaces */
	, CG_TEAM_CALLMEMBERHandler_t2497_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_TEAM_CALLMEMBERHandler_t2497_il2cpp_TypeInfo/* cast_class */
	, &CG_TEAM_CALLMEMBERHandler_t2497_0_0_0/* byval_arg */
	, &CG_TEAM_CALLMEMBERHandler_t2497_1_0_0/* this_arg */
	, CG_TEAM_CALLMEMBERHandler_t2497_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_TEAM_CALLMEMBERHandler_t2497)/* instance_size */
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
// SPacket.SocketInstance.CG_TEAM_CALLMEMBER_RESULTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_CALLMEMBER_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_TEAM_CALLMEMBER_RESULTHandler_t2498_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_TEAM_CALLMEMBER_RESULTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_CALLMEMBER_MethodDeclarations.h"

// CG_TEAM_CALLMEMBER_RESULT
#include "AssemblyU2DCSharp_CG_TEAM_CALLMEMBER_RESULT.h"
extern TypeInfo CG_TEAM_CALLMEMBER_RESULT_t3509_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_TEAM_CALLMEMBER_RESULTHandler::.ctor()
extern MethodInfo CG_TEAM_CALLMEMBER_RESULTHandler__ctor_m15323_MethodInfo;
 void CG_TEAM_CALLMEMBER_RESULTHandler__ctor_m15323 (CG_TEAM_CALLMEMBER_RESULTHandler_t2498 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_TEAM_CALLMEMBER_RESULTHandler::Execute(PacketDistributed)
extern MethodInfo CG_TEAM_CALLMEMBER_RESULTHandler_Execute_m15324_MethodInfo;
 uint32_t CG_TEAM_CALLMEMBER_RESULTHandler_Execute_m15324 (CG_TEAM_CALLMEMBER_RESULTHandler_t2498 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_TEAM_CALLMEMBER_RESULT_t3509 * V_0 = {0};
	{
		V_0 = ((CG_TEAM_CALLMEMBER_RESULT_t3509 *)Castclass(___ipacket, InitializedTypeInfo(&CG_TEAM_CALLMEMBER_RESULT_t3509_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_TEAM_CALLMEMBER_RESULTHandler
extern TypeInfo CG_TEAM_CALLMEMBER_RESULTHandler_t2498_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_TEAM_CALLMEMBER_RESULTHandler::.ctor()
MethodInfo CG_TEAM_CALLMEMBER_RESULTHandler__ctor_m15323_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_TEAM_CALLMEMBER_RESULTHandler__ctor_m15323/* method */
	, &CG_TEAM_CALLMEMBER_RESULTHandler_t2498_il2cpp_TypeInfo/* declaring_type */
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
	, 8799/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_TEAM_CALLMEMBER_RESULTHandler_t2498_CG_TEAM_CALLMEMBER_RESULTHandler_Execute_m15324_ParameterInfos[] = 
{
	{"ipacket", 0, 134222317, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_TEAM_CALLMEMBER_RESULTHandler_t2498_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_TEAM_CALLMEMBER_RESULTHandler::Execute(PacketDistributed)
MethodInfo CG_TEAM_CALLMEMBER_RESULTHandler_Execute_m15324_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_TEAM_CALLMEMBER_RESULTHandler_Execute_m15324/* method */
	, &CG_TEAM_CALLMEMBER_RESULTHandler_t2498_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_TEAM_CALLMEMBER_RESULTHandler_t2498_CG_TEAM_CALLMEMBER_RESULTHandler_Execute_m15324_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8800/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_TEAM_CALLMEMBER_RESULTHandler_t2498_MethodInfos[] =
{
	&CG_TEAM_CALLMEMBER_RESULTHandler__ctor_m15323_MethodInfo,
	&CG_TEAM_CALLMEMBER_RESULTHandler_Execute_m15324_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_TEAM_CALLMEMBER_RESULTHandler_Execute_m15324_MethodInfo;
static MethodInfo* CG_TEAM_CALLMEMBER_RESULTHandler_t2498_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_TEAM_CALLMEMBER_RESULTHandler_Execute_m15324_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_TEAM_CALLMEMBER_RESULTHandler_t2498_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_TEAM_CALLMEMBER_RESULTHandler_t2498_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_TEAM_CALLMEMBER_RESULTHandler_t2498_0_0_0;
extern Il2CppType CG_TEAM_CALLMEMBER_RESULTHandler_t2498_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_TEAM_CALLMEMBER_RESULTHandler_t2498;
extern TypeInfo CG_TEAM_CALLMEMBER_RESULTHandler_t2498_il2cpp_TypeInfo;
TypeInfo CG_TEAM_CALLMEMBER_RESULTHandler_t2498_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_TEAM_CALLMEMBER_RESULTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_TEAM_CALLMEMBER_RESULTHandler_t2498_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_TEAM_CALLMEMBER_RESULTHandler_t2498_il2cpp_TypeInfo/* element_class */
	, CG_TEAM_CALLMEMBER_RESULTHandler_t2498_InterfacesTypeInfos/* implemented_interfaces */
	, CG_TEAM_CALLMEMBER_RESULTHandler_t2498_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_TEAM_CALLMEMBER_RESULTHandler_t2498_il2cpp_TypeInfo/* cast_class */
	, &CG_TEAM_CALLMEMBER_RESULTHandler_t2498_0_0_0/* byval_arg */
	, &CG_TEAM_CALLMEMBER_RESULTHandler_t2498_1_0_0/* this_arg */
	, CG_TEAM_CALLMEMBER_RESULTHandler_t2498_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_TEAM_CALLMEMBER_RESULTHandler_t2498)/* instance_size */
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
// SPacket.SocketInstance.CG_TEAM_INVITEFOLLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_INVITEFOLLO.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_TEAM_INVITEFOLLOWHandler_t2499_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_TEAM_INVITEFOLLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_INVITEFOLLOMethodDeclarations.h"

// CG_TEAM_INVITEFOLLOW
#include "AssemblyU2DCSharp_CG_TEAM_INVITEFOLLOW.h"
extern TypeInfo CG_TEAM_INVITEFOLLOW_t3492_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_TEAM_INVITEFOLLOWHandler::.ctor()
extern MethodInfo CG_TEAM_INVITEFOLLOWHandler__ctor_m15325_MethodInfo;
 void CG_TEAM_INVITEFOLLOWHandler__ctor_m15325 (CG_TEAM_INVITEFOLLOWHandler_t2499 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_TEAM_INVITEFOLLOWHandler::Execute(PacketDistributed)
extern MethodInfo CG_TEAM_INVITEFOLLOWHandler_Execute_m15326_MethodInfo;
 uint32_t CG_TEAM_INVITEFOLLOWHandler_Execute_m15326 (CG_TEAM_INVITEFOLLOWHandler_t2499 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_TEAM_INVITEFOLLOW_t3492 * V_0 = {0};
	{
		V_0 = ((CG_TEAM_INVITEFOLLOW_t3492 *)Castclass(___ipacket, InitializedTypeInfo(&CG_TEAM_INVITEFOLLOW_t3492_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_TEAM_INVITEFOLLOWHandler
extern TypeInfo CG_TEAM_INVITEFOLLOWHandler_t2499_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_TEAM_INVITEFOLLOWHandler::.ctor()
MethodInfo CG_TEAM_INVITEFOLLOWHandler__ctor_m15325_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_TEAM_INVITEFOLLOWHandler__ctor_m15325/* method */
	, &CG_TEAM_INVITEFOLLOWHandler_t2499_il2cpp_TypeInfo/* declaring_type */
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
	, 8801/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_TEAM_INVITEFOLLOWHandler_t2499_CG_TEAM_INVITEFOLLOWHandler_Execute_m15326_ParameterInfos[] = 
{
	{"ipacket", 0, 134222318, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_TEAM_INVITEFOLLOWHandler_t2499_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_TEAM_INVITEFOLLOWHandler::Execute(PacketDistributed)
MethodInfo CG_TEAM_INVITEFOLLOWHandler_Execute_m15326_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_TEAM_INVITEFOLLOWHandler_Execute_m15326/* method */
	, &CG_TEAM_INVITEFOLLOWHandler_t2499_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_TEAM_INVITEFOLLOWHandler_t2499_CG_TEAM_INVITEFOLLOWHandler_Execute_m15326_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8802/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_TEAM_INVITEFOLLOWHandler_t2499_MethodInfos[] =
{
	&CG_TEAM_INVITEFOLLOWHandler__ctor_m15325_MethodInfo,
	&CG_TEAM_INVITEFOLLOWHandler_Execute_m15326_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_TEAM_INVITEFOLLOWHandler_Execute_m15326_MethodInfo;
static MethodInfo* CG_TEAM_INVITEFOLLOWHandler_t2499_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_TEAM_INVITEFOLLOWHandler_Execute_m15326_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_TEAM_INVITEFOLLOWHandler_t2499_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_TEAM_INVITEFOLLOWHandler_t2499_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_TEAM_INVITEFOLLOWHandler_t2499_0_0_0;
extern Il2CppType CG_TEAM_INVITEFOLLOWHandler_t2499_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_TEAM_INVITEFOLLOWHandler_t2499;
extern TypeInfo CG_TEAM_INVITEFOLLOWHandler_t2499_il2cpp_TypeInfo;
TypeInfo CG_TEAM_INVITEFOLLOWHandler_t2499_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_TEAM_INVITEFOLLOWHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_TEAM_INVITEFOLLOWHandler_t2499_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_TEAM_INVITEFOLLOWHandler_t2499_il2cpp_TypeInfo/* element_class */
	, CG_TEAM_INVITEFOLLOWHandler_t2499_InterfacesTypeInfos/* implemented_interfaces */
	, CG_TEAM_INVITEFOLLOWHandler_t2499_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_TEAM_INVITEFOLLOWHandler_t2499_il2cpp_TypeInfo/* cast_class */
	, &CG_TEAM_INVITEFOLLOWHandler_t2499_0_0_0/* byval_arg */
	, &CG_TEAM_INVITEFOLLOWHandler_t2499_1_0_0/* this_arg */
	, CG_TEAM_INVITEFOLLOWHandler_t2499_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_TEAM_INVITEFOLLOWHandler_t2499)/* instance_size */
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
// SPacket.SocketInstance.CG_TEAM_INVITEFOLLOW_RESULTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_INVITEFOLLO_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_TEAM_INVITEFOLLOW_RESULTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_INVITEFOLLO_0MethodDeclarations.h"

// CG_TEAM_INVITEFOLLOW_RESULT
#include "AssemblyU2DCSharp_CG_TEAM_INVITEFOLLOW_RESULT.h"
extern TypeInfo CG_TEAM_INVITEFOLLOW_RESULT_t3495_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_TEAM_INVITEFOLLOW_RESULTHandler::.ctor()
extern MethodInfo CG_TEAM_INVITEFOLLOW_RESULTHandler__ctor_m15327_MethodInfo;
 void CG_TEAM_INVITEFOLLOW_RESULTHandler__ctor_m15327 (CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_TEAM_INVITEFOLLOW_RESULTHandler::Execute(PacketDistributed)
extern MethodInfo CG_TEAM_INVITEFOLLOW_RESULTHandler_Execute_m15328_MethodInfo;
 uint32_t CG_TEAM_INVITEFOLLOW_RESULTHandler_Execute_m15328 (CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_TEAM_INVITEFOLLOW_RESULT_t3495 * V_0 = {0};
	{
		V_0 = ((CG_TEAM_INVITEFOLLOW_RESULT_t3495 *)Castclass(___ipacket, InitializedTypeInfo(&CG_TEAM_INVITEFOLLOW_RESULT_t3495_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_TEAM_INVITEFOLLOW_RESULTHandler
extern TypeInfo CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_TEAM_INVITEFOLLOW_RESULTHandler::.ctor()
MethodInfo CG_TEAM_INVITEFOLLOW_RESULTHandler__ctor_m15327_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_TEAM_INVITEFOLLOW_RESULTHandler__ctor_m15327/* method */
	, &CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_il2cpp_TypeInfo/* declaring_type */
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
	, 8803/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_CG_TEAM_INVITEFOLLOW_RESULTHandler_Execute_m15328_ParameterInfos[] = 
{
	{"ipacket", 0, 134222319, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_TEAM_INVITEFOLLOW_RESULTHandler::Execute(PacketDistributed)
MethodInfo CG_TEAM_INVITEFOLLOW_RESULTHandler_Execute_m15328_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_TEAM_INVITEFOLLOW_RESULTHandler_Execute_m15328/* method */
	, &CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_CG_TEAM_INVITEFOLLOW_RESULTHandler_Execute_m15328_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8804/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_MethodInfos[] =
{
	&CG_TEAM_INVITEFOLLOW_RESULTHandler__ctor_m15327_MethodInfo,
	&CG_TEAM_INVITEFOLLOW_RESULTHandler_Execute_m15328_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_TEAM_INVITEFOLLOW_RESULTHandler_Execute_m15328_MethodInfo;
static MethodInfo* CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_TEAM_INVITEFOLLOW_RESULTHandler_Execute_m15328_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_0_0_0;
extern Il2CppType CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500;
extern TypeInfo CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_il2cpp_TypeInfo;
TypeInfo CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_TEAM_INVITEFOLLOW_RESULTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_il2cpp_TypeInfo/* element_class */
	, CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_InterfacesTypeInfos/* implemented_interfaces */
	, CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_il2cpp_TypeInfo/* cast_class */
	, &CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_0_0_0/* byval_arg */
	, &CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_1_0_0/* this_arg */
	, CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_TEAM_INVITEFOLLOW_RESULTHandler_t2500)/* instance_size */
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
// SPacket.SocketInstance.CG_TEAM_TRANSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_TRANSHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_TEAM_TRANSHandler_t2501_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_TEAM_TRANSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TEAM_TRANSHandleMethodDeclarations.h"

// CG_TEAM_TRANS
#include "AssemblyU2DCSharp_CG_TEAM_TRANS.h"
extern TypeInfo CG_TEAM_TRANS_t3599_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_TEAM_TRANSHandler::.ctor()
extern MethodInfo CG_TEAM_TRANSHandler__ctor_m15329_MethodInfo;
 void CG_TEAM_TRANSHandler__ctor_m15329 (CG_TEAM_TRANSHandler_t2501 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_TEAM_TRANSHandler::Execute(PacketDistributed)
extern MethodInfo CG_TEAM_TRANSHandler_Execute_m15330_MethodInfo;
 uint32_t CG_TEAM_TRANSHandler_Execute_m15330 (CG_TEAM_TRANSHandler_t2501 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_TEAM_TRANS_t3599 * V_0 = {0};
	{
		V_0 = ((CG_TEAM_TRANS_t3599 *)Castclass(___ipacket, InitializedTypeInfo(&CG_TEAM_TRANS_t3599_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_TEAM_TRANSHandler
extern TypeInfo CG_TEAM_TRANSHandler_t2501_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_TEAM_TRANSHandler::.ctor()
MethodInfo CG_TEAM_TRANSHandler__ctor_m15329_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_TEAM_TRANSHandler__ctor_m15329/* method */
	, &CG_TEAM_TRANSHandler_t2501_il2cpp_TypeInfo/* declaring_type */
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
	, 8805/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_TEAM_TRANSHandler_t2501_CG_TEAM_TRANSHandler_Execute_m15330_ParameterInfos[] = 
{
	{"ipacket", 0, 134222320, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_TEAM_TRANSHandler_t2501_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_TEAM_TRANSHandler::Execute(PacketDistributed)
MethodInfo CG_TEAM_TRANSHandler_Execute_m15330_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_TEAM_TRANSHandler_Execute_m15330/* method */
	, &CG_TEAM_TRANSHandler_t2501_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_TEAM_TRANSHandler_t2501_CG_TEAM_TRANSHandler_Execute_m15330_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8806/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_TEAM_TRANSHandler_t2501_MethodInfos[] =
{
	&CG_TEAM_TRANSHandler__ctor_m15329_MethodInfo,
	&CG_TEAM_TRANSHandler_Execute_m15330_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_TEAM_TRANSHandler_Execute_m15330_MethodInfo;
static MethodInfo* CG_TEAM_TRANSHandler_t2501_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_TEAM_TRANSHandler_Execute_m15330_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_TEAM_TRANSHandler_t2501_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_TEAM_TRANSHandler_t2501_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_TEAM_TRANSHandler_t2501_0_0_0;
extern Il2CppType CG_TEAM_TRANSHandler_t2501_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_TEAM_TRANSHandler_t2501;
extern TypeInfo CG_TEAM_TRANSHandler_t2501_il2cpp_TypeInfo;
TypeInfo CG_TEAM_TRANSHandler_t2501_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_TEAM_TRANSHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_TEAM_TRANSHandler_t2501_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_TEAM_TRANSHandler_t2501_il2cpp_TypeInfo/* element_class */
	, CG_TEAM_TRANSHandler_t2501_InterfacesTypeInfos/* implemented_interfaces */
	, CG_TEAM_TRANSHandler_t2501_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_TEAM_TRANSHandler_t2501_il2cpp_TypeInfo/* cast_class */
	, &CG_TEAM_TRANSHandler_t2501_0_0_0/* byval_arg */
	, &CG_TEAM_TRANSHandler_t2501_1_0_0/* this_arg */
	, CG_TEAM_TRANSHandler_t2501_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_TEAM_TRANSHandler_t2501)/* instance_size */
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
// SPacket.SocketInstance.CG_THROW_ITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_THROW_ITEMHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_THROW_ITEMHandler_t2502_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_THROW_ITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_THROW_ITEMHandleMethodDeclarations.h"

// CG_THROW_ITEM
#include "AssemblyU2DCSharp_CG_THROW_ITEM.h"
extern TypeInfo CG_THROW_ITEM_t2987_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_THROW_ITEMHandler::.ctor()
extern MethodInfo CG_THROW_ITEMHandler__ctor_m15331_MethodInfo;
 void CG_THROW_ITEMHandler__ctor_m15331 (CG_THROW_ITEMHandler_t2502 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_THROW_ITEMHandler::Execute(PacketDistributed)
extern MethodInfo CG_THROW_ITEMHandler_Execute_m15332_MethodInfo;
 uint32_t CG_THROW_ITEMHandler_Execute_m15332 (CG_THROW_ITEMHandler_t2502 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_THROW_ITEM_t2987 * V_0 = {0};
	{
		V_0 = ((CG_THROW_ITEM_t2987 *)Castclass(___ipacket, InitializedTypeInfo(&CG_THROW_ITEM_t2987_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_THROW_ITEMHandler
extern TypeInfo CG_THROW_ITEMHandler_t2502_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_THROW_ITEMHandler::.ctor()
MethodInfo CG_THROW_ITEMHandler__ctor_m15331_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_THROW_ITEMHandler__ctor_m15331/* method */
	, &CG_THROW_ITEMHandler_t2502_il2cpp_TypeInfo/* declaring_type */
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
	, 8807/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_THROW_ITEMHandler_t2502_CG_THROW_ITEMHandler_Execute_m15332_ParameterInfos[] = 
{
	{"ipacket", 0, 134222321, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_THROW_ITEMHandler_t2502_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_THROW_ITEMHandler::Execute(PacketDistributed)
MethodInfo CG_THROW_ITEMHandler_Execute_m15332_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_THROW_ITEMHandler_Execute_m15332/* method */
	, &CG_THROW_ITEMHandler_t2502_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_THROW_ITEMHandler_t2502_CG_THROW_ITEMHandler_Execute_m15332_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8808/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_THROW_ITEMHandler_t2502_MethodInfos[] =
{
	&CG_THROW_ITEMHandler__ctor_m15331_MethodInfo,
	&CG_THROW_ITEMHandler_Execute_m15332_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_THROW_ITEMHandler_Execute_m15332_MethodInfo;
static MethodInfo* CG_THROW_ITEMHandler_t2502_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_THROW_ITEMHandler_Execute_m15332_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_THROW_ITEMHandler_t2502_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_THROW_ITEMHandler_t2502_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_THROW_ITEMHandler_t2502_0_0_0;
extern Il2CppType CG_THROW_ITEMHandler_t2502_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_THROW_ITEMHandler_t2502;
extern TypeInfo CG_THROW_ITEMHandler_t2502_il2cpp_TypeInfo;
TypeInfo CG_THROW_ITEMHandler_t2502_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_THROW_ITEMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_THROW_ITEMHandler_t2502_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_THROW_ITEMHandler_t2502_il2cpp_TypeInfo/* element_class */
	, CG_THROW_ITEMHandler_t2502_InterfacesTypeInfos/* implemented_interfaces */
	, CG_THROW_ITEMHandler_t2502_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_THROW_ITEMHandler_t2502_il2cpp_TypeInfo/* cast_class */
	, &CG_THROW_ITEMHandler_t2502_0_0_0/* byval_arg */
	, &CG_THROW_ITEMHandler_t2502_1_0_0/* this_arg */
	, CG_THROW_ITEMHandler_t2502_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_THROW_ITEMHandler_t2502)/* instance_size */
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
// SPacket.SocketInstance.CG_TRIGGER_ENTERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TRIGGER_ENTERHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_TRIGGER_ENTERHandler_t2503_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_TRIGGER_ENTERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_TRIGGER_ENTERHanMethodDeclarations.h"

// CG_TRIGGER_ENTER
#include "AssemblyU2DCSharp_CG_TRIGGER_ENTER.h"
extern TypeInfo CG_TRIGGER_ENTER_t3606_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_TRIGGER_ENTERHandler::.ctor()
extern MethodInfo CG_TRIGGER_ENTERHandler__ctor_m15333_MethodInfo;
 void CG_TRIGGER_ENTERHandler__ctor_m15333 (CG_TRIGGER_ENTERHandler_t2503 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_TRIGGER_ENTERHandler::Execute(PacketDistributed)
extern MethodInfo CG_TRIGGER_ENTERHandler_Execute_m15334_MethodInfo;
 uint32_t CG_TRIGGER_ENTERHandler_Execute_m15334 (CG_TRIGGER_ENTERHandler_t2503 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_TRIGGER_ENTER_t3606 * V_0 = {0};
	{
		V_0 = ((CG_TRIGGER_ENTER_t3606 *)Castclass(___ipacket, InitializedTypeInfo(&CG_TRIGGER_ENTER_t3606_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_TRIGGER_ENTERHandler
extern TypeInfo CG_TRIGGER_ENTERHandler_t2503_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_TRIGGER_ENTERHandler::.ctor()
MethodInfo CG_TRIGGER_ENTERHandler__ctor_m15333_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_TRIGGER_ENTERHandler__ctor_m15333/* method */
	, &CG_TRIGGER_ENTERHandler_t2503_il2cpp_TypeInfo/* declaring_type */
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
	, 8809/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_TRIGGER_ENTERHandler_t2503_CG_TRIGGER_ENTERHandler_Execute_m15334_ParameterInfos[] = 
{
	{"ipacket", 0, 134222322, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_TRIGGER_ENTERHandler_t2503_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_TRIGGER_ENTERHandler::Execute(PacketDistributed)
MethodInfo CG_TRIGGER_ENTERHandler_Execute_m15334_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_TRIGGER_ENTERHandler_Execute_m15334/* method */
	, &CG_TRIGGER_ENTERHandler_t2503_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_TRIGGER_ENTERHandler_t2503_CG_TRIGGER_ENTERHandler_Execute_m15334_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8810/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_TRIGGER_ENTERHandler_t2503_MethodInfos[] =
{
	&CG_TRIGGER_ENTERHandler__ctor_m15333_MethodInfo,
	&CG_TRIGGER_ENTERHandler_Execute_m15334_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_TRIGGER_ENTERHandler_Execute_m15334_MethodInfo;
static MethodInfo* CG_TRIGGER_ENTERHandler_t2503_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_TRIGGER_ENTERHandler_Execute_m15334_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_TRIGGER_ENTERHandler_t2503_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_TRIGGER_ENTERHandler_t2503_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_TRIGGER_ENTERHandler_t2503_0_0_0;
extern Il2CppType CG_TRIGGER_ENTERHandler_t2503_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_TRIGGER_ENTERHandler_t2503;
extern TypeInfo CG_TRIGGER_ENTERHandler_t2503_il2cpp_TypeInfo;
TypeInfo CG_TRIGGER_ENTERHandler_t2503_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_TRIGGER_ENTERHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_TRIGGER_ENTERHandler_t2503_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_TRIGGER_ENTERHandler_t2503_il2cpp_TypeInfo/* element_class */
	, CG_TRIGGER_ENTERHandler_t2503_InterfacesTypeInfos/* implemented_interfaces */
	, CG_TRIGGER_ENTERHandler_t2503_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_TRIGGER_ENTERHandler_t2503_il2cpp_TypeInfo/* cast_class */
	, &CG_TRIGGER_ENTERHandler_t2503_0_0_0/* byval_arg */
	, &CG_TRIGGER_ENTERHandler_t2503_1_0_0/* this_arg */
	, CG_TRIGGER_ENTERHandler_t2503_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_TRIGGER_ENTERHandler_t2503)/* instance_size */
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
// SPacket.SocketInstance.CG_UNCALL_FELLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNCALL_FELLOWHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_UNCALL_FELLOWHandler_t2504_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_UNCALL_FELLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNCALL_FELLOWHanMethodDeclarations.h"

// CG_UNCALL_FELLOW
#include "AssemblyU2DCSharp_CG_UNCALL_FELLOW.h"
extern TypeInfo CG_UNCALL_FELLOW_t3065_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_UNCALL_FELLOWHandler::.ctor()
extern MethodInfo CG_UNCALL_FELLOWHandler__ctor_m15335_MethodInfo;
 void CG_UNCALL_FELLOWHandler__ctor_m15335 (CG_UNCALL_FELLOWHandler_t2504 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_UNCALL_FELLOWHandler::Execute(PacketDistributed)
extern MethodInfo CG_UNCALL_FELLOWHandler_Execute_m15336_MethodInfo;
 uint32_t CG_UNCALL_FELLOWHandler_Execute_m15336 (CG_UNCALL_FELLOWHandler_t2504 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_UNCALL_FELLOW_t3065 * V_0 = {0};
	{
		V_0 = ((CG_UNCALL_FELLOW_t3065 *)Castclass(___ipacket, InitializedTypeInfo(&CG_UNCALL_FELLOW_t3065_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_UNCALL_FELLOWHandler
extern TypeInfo CG_UNCALL_FELLOWHandler_t2504_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_UNCALL_FELLOWHandler::.ctor()
MethodInfo CG_UNCALL_FELLOWHandler__ctor_m15335_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_UNCALL_FELLOWHandler__ctor_m15335/* method */
	, &CG_UNCALL_FELLOWHandler_t2504_il2cpp_TypeInfo/* declaring_type */
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
	, 8811/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_UNCALL_FELLOWHandler_t2504_CG_UNCALL_FELLOWHandler_Execute_m15336_ParameterInfos[] = 
{
	{"ipacket", 0, 134222323, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_UNCALL_FELLOWHandler_t2504_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_UNCALL_FELLOWHandler::Execute(PacketDistributed)
MethodInfo CG_UNCALL_FELLOWHandler_Execute_m15336_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_UNCALL_FELLOWHandler_Execute_m15336/* method */
	, &CG_UNCALL_FELLOWHandler_t2504_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_UNCALL_FELLOWHandler_t2504_CG_UNCALL_FELLOWHandler_Execute_m15336_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8812/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_UNCALL_FELLOWHandler_t2504_MethodInfos[] =
{
	&CG_UNCALL_FELLOWHandler__ctor_m15335_MethodInfo,
	&CG_UNCALL_FELLOWHandler_Execute_m15336_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_UNCALL_FELLOWHandler_Execute_m15336_MethodInfo;
static MethodInfo* CG_UNCALL_FELLOWHandler_t2504_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_UNCALL_FELLOWHandler_Execute_m15336_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_UNCALL_FELLOWHandler_t2504_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_UNCALL_FELLOWHandler_t2504_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_UNCALL_FELLOWHandler_t2504_0_0_0;
extern Il2CppType CG_UNCALL_FELLOWHandler_t2504_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_UNCALL_FELLOWHandler_t2504;
extern TypeInfo CG_UNCALL_FELLOWHandler_t2504_il2cpp_TypeInfo;
TypeInfo CG_UNCALL_FELLOWHandler_t2504_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_UNCALL_FELLOWHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_UNCALL_FELLOWHandler_t2504_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_UNCALL_FELLOWHandler_t2504_il2cpp_TypeInfo/* element_class */
	, CG_UNCALL_FELLOWHandler_t2504_InterfacesTypeInfos/* implemented_interfaces */
	, CG_UNCALL_FELLOWHandler_t2504_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_UNCALL_FELLOWHandler_t2504_il2cpp_TypeInfo/* cast_class */
	, &CG_UNCALL_FELLOWHandler_t2504_0_0_0/* byval_arg */
	, &CG_UNCALL_FELLOWHandler_t2504_1_0_0/* this_arg */
	, CG_UNCALL_FELLOWHandler_t2504_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_UNCALL_FELLOWHandler_t2504)/* instance_size */
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
// SPacket.SocketInstance.CG_UNEQUIP_FELLOW_SKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNEQUIP_FELLOW_S.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_UNEQUIP_FELLOW_SKILLHandler_t2505_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_UNEQUIP_FELLOW_SKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNEQUIP_FELLOW_SMethodDeclarations.h"

// CG_UNEQUIP_FELLOW_SKILL
#include "AssemblyU2DCSharp_CG_UNEQUIP_FELLOW_SKILL.h"
extern TypeInfo CG_UNEQUIP_FELLOW_SKILL_t3154_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_UNEQUIP_FELLOW_SKILLHandler::.ctor()
extern MethodInfo CG_UNEQUIP_FELLOW_SKILLHandler__ctor_m15337_MethodInfo;
 void CG_UNEQUIP_FELLOW_SKILLHandler__ctor_m15337 (CG_UNEQUIP_FELLOW_SKILLHandler_t2505 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_UNEQUIP_FELLOW_SKILLHandler::Execute(PacketDistributed)
extern MethodInfo CG_UNEQUIP_FELLOW_SKILLHandler_Execute_m15338_MethodInfo;
 uint32_t CG_UNEQUIP_FELLOW_SKILLHandler_Execute_m15338 (CG_UNEQUIP_FELLOW_SKILLHandler_t2505 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_UNEQUIP_FELLOW_SKILL_t3154 * V_0 = {0};
	{
		V_0 = ((CG_UNEQUIP_FELLOW_SKILL_t3154 *)Castclass(___ipacket, InitializedTypeInfo(&CG_UNEQUIP_FELLOW_SKILL_t3154_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_UNEQUIP_FELLOW_SKILLHandler
extern TypeInfo CG_UNEQUIP_FELLOW_SKILLHandler_t2505_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_UNEQUIP_FELLOW_SKILLHandler::.ctor()
MethodInfo CG_UNEQUIP_FELLOW_SKILLHandler__ctor_m15337_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_UNEQUIP_FELLOW_SKILLHandler__ctor_m15337/* method */
	, &CG_UNEQUIP_FELLOW_SKILLHandler_t2505_il2cpp_TypeInfo/* declaring_type */
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
	, 8813/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_UNEQUIP_FELLOW_SKILLHandler_t2505_CG_UNEQUIP_FELLOW_SKILLHandler_Execute_m15338_ParameterInfos[] = 
{
	{"ipacket", 0, 134222324, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_UNEQUIP_FELLOW_SKILLHandler_t2505_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_UNEQUIP_FELLOW_SKILLHandler::Execute(PacketDistributed)
MethodInfo CG_UNEQUIP_FELLOW_SKILLHandler_Execute_m15338_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_UNEQUIP_FELLOW_SKILLHandler_Execute_m15338/* method */
	, &CG_UNEQUIP_FELLOW_SKILLHandler_t2505_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_UNEQUIP_FELLOW_SKILLHandler_t2505_CG_UNEQUIP_FELLOW_SKILLHandler_Execute_m15338_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8814/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_UNEQUIP_FELLOW_SKILLHandler_t2505_MethodInfos[] =
{
	&CG_UNEQUIP_FELLOW_SKILLHandler__ctor_m15337_MethodInfo,
	&CG_UNEQUIP_FELLOW_SKILLHandler_Execute_m15338_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_UNEQUIP_FELLOW_SKILLHandler_Execute_m15338_MethodInfo;
static MethodInfo* CG_UNEQUIP_FELLOW_SKILLHandler_t2505_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_UNEQUIP_FELLOW_SKILLHandler_Execute_m15338_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_UNEQUIP_FELLOW_SKILLHandler_t2505_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_UNEQUIP_FELLOW_SKILLHandler_t2505_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_UNEQUIP_FELLOW_SKILLHandler_t2505_0_0_0;
extern Il2CppType CG_UNEQUIP_FELLOW_SKILLHandler_t2505_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_UNEQUIP_FELLOW_SKILLHandler_t2505;
extern TypeInfo CG_UNEQUIP_FELLOW_SKILLHandler_t2505_il2cpp_TypeInfo;
TypeInfo CG_UNEQUIP_FELLOW_SKILLHandler_t2505_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_UNEQUIP_FELLOW_SKILLHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_UNEQUIP_FELLOW_SKILLHandler_t2505_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_UNEQUIP_FELLOW_SKILLHandler_t2505_il2cpp_TypeInfo/* element_class */
	, CG_UNEQUIP_FELLOW_SKILLHandler_t2505_InterfacesTypeInfos/* implemented_interfaces */
	, CG_UNEQUIP_FELLOW_SKILLHandler_t2505_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_UNEQUIP_FELLOW_SKILLHandler_t2505_il2cpp_TypeInfo/* cast_class */
	, &CG_UNEQUIP_FELLOW_SKILLHandler_t2505_0_0_0/* byval_arg */
	, &CG_UNEQUIP_FELLOW_SKILLHandler_t2505_1_0_0/* this_arg */
	, CG_UNEQUIP_FELLOW_SKILLHandler_t2505_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_UNEQUIP_FELLOW_SKILLHandler_t2505)/* instance_size */
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
// SPacket.SocketInstance.CG_UNEQUIP_ITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNEQUIP_ITEMHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_UNEQUIP_ITEMHandler_t2506_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_UNEQUIP_ITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNEQUIP_ITEMHandMethodDeclarations.h"

// CG_UNEQUIP_ITEM
#include "AssemblyU2DCSharp_CG_UNEQUIP_ITEM.h"
extern TypeInfo CG_UNEQUIP_ITEM_t2978_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_UNEQUIP_ITEMHandler::.ctor()
extern MethodInfo CG_UNEQUIP_ITEMHandler__ctor_m15339_MethodInfo;
 void CG_UNEQUIP_ITEMHandler__ctor_m15339 (CG_UNEQUIP_ITEMHandler_t2506 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_UNEQUIP_ITEMHandler::Execute(PacketDistributed)
extern MethodInfo CG_UNEQUIP_ITEMHandler_Execute_m15340_MethodInfo;
 uint32_t CG_UNEQUIP_ITEMHandler_Execute_m15340 (CG_UNEQUIP_ITEMHandler_t2506 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_UNEQUIP_ITEM_t2978 * V_0 = {0};
	{
		V_0 = ((CG_UNEQUIP_ITEM_t2978 *)Castclass(___ipacket, InitializedTypeInfo(&CG_UNEQUIP_ITEM_t2978_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_UNEQUIP_ITEMHandler
extern TypeInfo CG_UNEQUIP_ITEMHandler_t2506_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_UNEQUIP_ITEMHandler::.ctor()
MethodInfo CG_UNEQUIP_ITEMHandler__ctor_m15339_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_UNEQUIP_ITEMHandler__ctor_m15339/* method */
	, &CG_UNEQUIP_ITEMHandler_t2506_il2cpp_TypeInfo/* declaring_type */
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
	, 8815/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_UNEQUIP_ITEMHandler_t2506_CG_UNEQUIP_ITEMHandler_Execute_m15340_ParameterInfos[] = 
{
	{"ipacket", 0, 134222325, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_UNEQUIP_ITEMHandler_t2506_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_UNEQUIP_ITEMHandler::Execute(PacketDistributed)
MethodInfo CG_UNEQUIP_ITEMHandler_Execute_m15340_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_UNEQUIP_ITEMHandler_Execute_m15340/* method */
	, &CG_UNEQUIP_ITEMHandler_t2506_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_UNEQUIP_ITEMHandler_t2506_CG_UNEQUIP_ITEMHandler_Execute_m15340_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8816/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_UNEQUIP_ITEMHandler_t2506_MethodInfos[] =
{
	&CG_UNEQUIP_ITEMHandler__ctor_m15339_MethodInfo,
	&CG_UNEQUIP_ITEMHandler_Execute_m15340_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_UNEQUIP_ITEMHandler_Execute_m15340_MethodInfo;
static MethodInfo* CG_UNEQUIP_ITEMHandler_t2506_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_UNEQUIP_ITEMHandler_Execute_m15340_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_UNEQUIP_ITEMHandler_t2506_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_UNEQUIP_ITEMHandler_t2506_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_UNEQUIP_ITEMHandler_t2506_0_0_0;
extern Il2CppType CG_UNEQUIP_ITEMHandler_t2506_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_UNEQUIP_ITEMHandler_t2506;
extern TypeInfo CG_UNEQUIP_ITEMHandler_t2506_il2cpp_TypeInfo;
TypeInfo CG_UNEQUIP_ITEMHandler_t2506_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_UNEQUIP_ITEMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_UNEQUIP_ITEMHandler_t2506_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_UNEQUIP_ITEMHandler_t2506_il2cpp_TypeInfo/* element_class */
	, CG_UNEQUIP_ITEMHandler_t2506_InterfacesTypeInfos/* implemented_interfaces */
	, CG_UNEQUIP_ITEMHandler_t2506_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_UNEQUIP_ITEMHandler_t2506_il2cpp_TypeInfo/* cast_class */
	, &CG_UNEQUIP_ITEMHandler_t2506_0_0_0/* byval_arg */
	, &CG_UNEQUIP_ITEMHandler_t2506_1_0_0/* this_arg */
	, CG_UNEQUIP_ITEMHandler_t2506_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_UNEQUIP_ITEMHandler_t2506)/* instance_size */
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
// SPacket.SocketInstance.CG_UNEQUIP_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNEQUIP_SWORDSMA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_UNEQUIP_SWORDSMANHandler_t2507_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_UNEQUIP_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNEQUIP_SWORDSMAMethodDeclarations.h"

// CG_UNEQUIP_SWORDSMAN
#include "AssemblyU2DCSharp_CG_UNEQUIP_SWORDSMAN.h"
extern TypeInfo CG_UNEQUIP_SWORDSMAN_t3332_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_UNEQUIP_SWORDSMANHandler::.ctor()
extern MethodInfo CG_UNEQUIP_SWORDSMANHandler__ctor_m15341_MethodInfo;
 void CG_UNEQUIP_SWORDSMANHandler__ctor_m15341 (CG_UNEQUIP_SWORDSMANHandler_t2507 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_UNEQUIP_SWORDSMANHandler::Execute(PacketDistributed)
extern MethodInfo CG_UNEQUIP_SWORDSMANHandler_Execute_m15342_MethodInfo;
 uint32_t CG_UNEQUIP_SWORDSMANHandler_Execute_m15342 (CG_UNEQUIP_SWORDSMANHandler_t2507 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_UNEQUIP_SWORDSMAN_t3332 * V_0 = {0};
	{
		V_0 = ((CG_UNEQUIP_SWORDSMAN_t3332 *)Castclass(___ipacket, InitializedTypeInfo(&CG_UNEQUIP_SWORDSMAN_t3332_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_UNEQUIP_SWORDSMANHandler
extern TypeInfo CG_UNEQUIP_SWORDSMANHandler_t2507_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_UNEQUIP_SWORDSMANHandler::.ctor()
MethodInfo CG_UNEQUIP_SWORDSMANHandler__ctor_m15341_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_UNEQUIP_SWORDSMANHandler__ctor_m15341/* method */
	, &CG_UNEQUIP_SWORDSMANHandler_t2507_il2cpp_TypeInfo/* declaring_type */
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
	, 8817/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_UNEQUIP_SWORDSMANHandler_t2507_CG_UNEQUIP_SWORDSMANHandler_Execute_m15342_ParameterInfos[] = 
{
	{"ipacket", 0, 134222326, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_UNEQUIP_SWORDSMANHandler_t2507_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_UNEQUIP_SWORDSMANHandler::Execute(PacketDistributed)
MethodInfo CG_UNEQUIP_SWORDSMANHandler_Execute_m15342_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_UNEQUIP_SWORDSMANHandler_Execute_m15342/* method */
	, &CG_UNEQUIP_SWORDSMANHandler_t2507_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_UNEQUIP_SWORDSMANHandler_t2507_CG_UNEQUIP_SWORDSMANHandler_Execute_m15342_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8818/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_UNEQUIP_SWORDSMANHandler_t2507_MethodInfos[] =
{
	&CG_UNEQUIP_SWORDSMANHandler__ctor_m15341_MethodInfo,
	&CG_UNEQUIP_SWORDSMANHandler_Execute_m15342_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_UNEQUIP_SWORDSMANHandler_Execute_m15342_MethodInfo;
static MethodInfo* CG_UNEQUIP_SWORDSMANHandler_t2507_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_UNEQUIP_SWORDSMANHandler_Execute_m15342_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_UNEQUIP_SWORDSMANHandler_t2507_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_UNEQUIP_SWORDSMANHandler_t2507_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_UNEQUIP_SWORDSMANHandler_t2507_0_0_0;
extern Il2CppType CG_UNEQUIP_SWORDSMANHandler_t2507_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_UNEQUIP_SWORDSMANHandler_t2507;
extern TypeInfo CG_UNEQUIP_SWORDSMANHandler_t2507_il2cpp_TypeInfo;
TypeInfo CG_UNEQUIP_SWORDSMANHandler_t2507_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_UNEQUIP_SWORDSMANHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_UNEQUIP_SWORDSMANHandler_t2507_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_UNEQUIP_SWORDSMANHandler_t2507_il2cpp_TypeInfo/* element_class */
	, CG_UNEQUIP_SWORDSMANHandler_t2507_InterfacesTypeInfos/* implemented_interfaces */
	, CG_UNEQUIP_SWORDSMANHandler_t2507_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_UNEQUIP_SWORDSMANHandler_t2507_il2cpp_TypeInfo/* cast_class */
	, &CG_UNEQUIP_SWORDSMANHandler_t2507_0_0_0/* byval_arg */
	, &CG_UNEQUIP_SWORDSMANHandler_t2507_1_0_0/* this_arg */
	, CG_UNEQUIP_SWORDSMANHandler_t2507_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_UNEQUIP_SWORDSMANHandler_t2507)/* instance_size */
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
// SPacket.SocketInstance.CG_UNLOCK_FELLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNLOCK_FELLOWHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_UNLOCK_FELLOWHandler_t2508_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_UNLOCK_FELLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNLOCK_FELLOWHanMethodDeclarations.h"

// CG_UNLOCK_FELLOW
#include "AssemblyU2DCSharp_CG_UNLOCK_FELLOW.h"
extern TypeInfo CG_UNLOCK_FELLOW_t3147_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_UNLOCK_FELLOWHandler::.ctor()
extern MethodInfo CG_UNLOCK_FELLOWHandler__ctor_m15343_MethodInfo;
 void CG_UNLOCK_FELLOWHandler__ctor_m15343 (CG_UNLOCK_FELLOWHandler_t2508 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_UNLOCK_FELLOWHandler::Execute(PacketDistributed)
extern MethodInfo CG_UNLOCK_FELLOWHandler_Execute_m15344_MethodInfo;
 uint32_t CG_UNLOCK_FELLOWHandler_Execute_m15344 (CG_UNLOCK_FELLOWHandler_t2508 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_UNLOCK_FELLOW_t3147 * V_0 = {0};
	{
		V_0 = ((CG_UNLOCK_FELLOW_t3147 *)Castclass(___ipacket, InitializedTypeInfo(&CG_UNLOCK_FELLOW_t3147_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_UNLOCK_FELLOWHandler
extern TypeInfo CG_UNLOCK_FELLOWHandler_t2508_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_UNLOCK_FELLOWHandler::.ctor()
MethodInfo CG_UNLOCK_FELLOWHandler__ctor_m15343_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_UNLOCK_FELLOWHandler__ctor_m15343/* method */
	, &CG_UNLOCK_FELLOWHandler_t2508_il2cpp_TypeInfo/* declaring_type */
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
	, 8819/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_UNLOCK_FELLOWHandler_t2508_CG_UNLOCK_FELLOWHandler_Execute_m15344_ParameterInfos[] = 
{
	{"ipacket", 0, 134222327, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_UNLOCK_FELLOWHandler_t2508_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_UNLOCK_FELLOWHandler::Execute(PacketDistributed)
MethodInfo CG_UNLOCK_FELLOWHandler_Execute_m15344_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_UNLOCK_FELLOWHandler_Execute_m15344/* method */
	, &CG_UNLOCK_FELLOWHandler_t2508_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_UNLOCK_FELLOWHandler_t2508_CG_UNLOCK_FELLOWHandler_Execute_m15344_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8820/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_UNLOCK_FELLOWHandler_t2508_MethodInfos[] =
{
	&CG_UNLOCK_FELLOWHandler__ctor_m15343_MethodInfo,
	&CG_UNLOCK_FELLOWHandler_Execute_m15344_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_UNLOCK_FELLOWHandler_Execute_m15344_MethodInfo;
static MethodInfo* CG_UNLOCK_FELLOWHandler_t2508_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_UNLOCK_FELLOWHandler_Execute_m15344_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_UNLOCK_FELLOWHandler_t2508_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_UNLOCK_FELLOWHandler_t2508_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_UNLOCK_FELLOWHandler_t2508_0_0_0;
extern Il2CppType CG_UNLOCK_FELLOWHandler_t2508_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_UNLOCK_FELLOWHandler_t2508;
extern TypeInfo CG_UNLOCK_FELLOWHandler_t2508_il2cpp_TypeInfo;
TypeInfo CG_UNLOCK_FELLOWHandler_t2508_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_UNLOCK_FELLOWHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_UNLOCK_FELLOWHandler_t2508_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_UNLOCK_FELLOWHandler_t2508_il2cpp_TypeInfo/* element_class */
	, CG_UNLOCK_FELLOWHandler_t2508_InterfacesTypeInfos/* implemented_interfaces */
	, CG_UNLOCK_FELLOWHandler_t2508_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_UNLOCK_FELLOWHandler_t2508_il2cpp_TypeInfo/* cast_class */
	, &CG_UNLOCK_FELLOWHandler_t2508_0_0_0/* byval_arg */
	, &CG_UNLOCK_FELLOWHandler_t2508_1_0_0/* this_arg */
	, CG_UNLOCK_FELLOWHandler_t2508_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_UNLOCK_FELLOWHandler_t2508)/* instance_size */
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
// SPacket.SocketInstance.CG_UNLOCK_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNLOCK_SWORDSMAN.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_UNLOCK_SWORDSMANHandler_t2509_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_UNLOCK_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_UNLOCK_SWORDSMANMethodDeclarations.h"

// CG_UNLOCK_SWORDSMAN
#include "AssemblyU2DCSharp_CG_UNLOCK_SWORDSMAN.h"
extern TypeInfo CG_UNLOCK_SWORDSMAN_t3357_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_UNLOCK_SWORDSMANHandler::.ctor()
extern MethodInfo CG_UNLOCK_SWORDSMANHandler__ctor_m15345_MethodInfo;
 void CG_UNLOCK_SWORDSMANHandler__ctor_m15345 (CG_UNLOCK_SWORDSMANHandler_t2509 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_UNLOCK_SWORDSMANHandler::Execute(PacketDistributed)
extern MethodInfo CG_UNLOCK_SWORDSMANHandler_Execute_m15346_MethodInfo;
 uint32_t CG_UNLOCK_SWORDSMANHandler_Execute_m15346 (CG_UNLOCK_SWORDSMANHandler_t2509 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_UNLOCK_SWORDSMAN_t3357 * V_0 = {0};
	{
		V_0 = ((CG_UNLOCK_SWORDSMAN_t3357 *)Castclass(___ipacket, InitializedTypeInfo(&CG_UNLOCK_SWORDSMAN_t3357_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_UNLOCK_SWORDSMANHandler
extern TypeInfo CG_UNLOCK_SWORDSMANHandler_t2509_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_UNLOCK_SWORDSMANHandler::.ctor()
MethodInfo CG_UNLOCK_SWORDSMANHandler__ctor_m15345_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_UNLOCK_SWORDSMANHandler__ctor_m15345/* method */
	, &CG_UNLOCK_SWORDSMANHandler_t2509_il2cpp_TypeInfo/* declaring_type */
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
	, 8821/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_UNLOCK_SWORDSMANHandler_t2509_CG_UNLOCK_SWORDSMANHandler_Execute_m15346_ParameterInfos[] = 
{
	{"ipacket", 0, 134222328, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_UNLOCK_SWORDSMANHandler_t2509_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_UNLOCK_SWORDSMANHandler::Execute(PacketDistributed)
MethodInfo CG_UNLOCK_SWORDSMANHandler_Execute_m15346_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_UNLOCK_SWORDSMANHandler_Execute_m15346/* method */
	, &CG_UNLOCK_SWORDSMANHandler_t2509_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_UNLOCK_SWORDSMANHandler_t2509_CG_UNLOCK_SWORDSMANHandler_Execute_m15346_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8822/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_UNLOCK_SWORDSMANHandler_t2509_MethodInfos[] =
{
	&CG_UNLOCK_SWORDSMANHandler__ctor_m15345_MethodInfo,
	&CG_UNLOCK_SWORDSMANHandler_Execute_m15346_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_UNLOCK_SWORDSMANHandler_Execute_m15346_MethodInfo;
static MethodInfo* CG_UNLOCK_SWORDSMANHandler_t2509_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_UNLOCK_SWORDSMANHandler_Execute_m15346_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_UNLOCK_SWORDSMANHandler_t2509_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_UNLOCK_SWORDSMANHandler_t2509_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_UNLOCK_SWORDSMANHandler_t2509_0_0_0;
extern Il2CppType CG_UNLOCK_SWORDSMANHandler_t2509_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_UNLOCK_SWORDSMANHandler_t2509;
extern TypeInfo CG_UNLOCK_SWORDSMANHandler_t2509_il2cpp_TypeInfo;
TypeInfo CG_UNLOCK_SWORDSMANHandler_t2509_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_UNLOCK_SWORDSMANHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_UNLOCK_SWORDSMANHandler_t2509_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_UNLOCK_SWORDSMANHandler_t2509_il2cpp_TypeInfo/* element_class */
	, CG_UNLOCK_SWORDSMANHandler_t2509_InterfacesTypeInfos/* implemented_interfaces */
	, CG_UNLOCK_SWORDSMANHandler_t2509_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_UNLOCK_SWORDSMANHandler_t2509_il2cpp_TypeInfo/* cast_class */
	, &CG_UNLOCK_SWORDSMANHandler_t2509_0_0_0/* byval_arg */
	, &CG_UNLOCK_SWORDSMANHandler_t2509_1_0_0/* this_arg */
	, CG_UNLOCK_SWORDSMANHandler_t2509_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_UNLOCK_SWORDSMANHandler_t2509)/* instance_size */
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
// SPacket.SocketInstance.CG_USER_BEHAVIORHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USER_BEHAVIORHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_USER_BEHAVIORHandler_t2510_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_USER_BEHAVIORHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USER_BEHAVIORHanMethodDeclarations.h"

// CG_USER_BEHAVIOR
#include "AssemblyU2DCSharp_CG_USER_BEHAVIOR.h"
extern TypeInfo CG_USER_BEHAVIOR_t3120_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_USER_BEHAVIORHandler::.ctor()
extern MethodInfo CG_USER_BEHAVIORHandler__ctor_m15347_MethodInfo;
 void CG_USER_BEHAVIORHandler__ctor_m15347 (CG_USER_BEHAVIORHandler_t2510 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_USER_BEHAVIORHandler::Execute(PacketDistributed)
extern MethodInfo CG_USER_BEHAVIORHandler_Execute_m15348_MethodInfo;
 uint32_t CG_USER_BEHAVIORHandler_Execute_m15348 (CG_USER_BEHAVIORHandler_t2510 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_USER_BEHAVIOR_t3120 * V_0 = {0};
	{
		V_0 = ((CG_USER_BEHAVIOR_t3120 *)Castclass(___ipacket, InitializedTypeInfo(&CG_USER_BEHAVIOR_t3120_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_USER_BEHAVIORHandler
extern TypeInfo CG_USER_BEHAVIORHandler_t2510_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_USER_BEHAVIORHandler::.ctor()
MethodInfo CG_USER_BEHAVIORHandler__ctor_m15347_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_USER_BEHAVIORHandler__ctor_m15347/* method */
	, &CG_USER_BEHAVIORHandler_t2510_il2cpp_TypeInfo/* declaring_type */
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
	, 8823/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_USER_BEHAVIORHandler_t2510_CG_USER_BEHAVIORHandler_Execute_m15348_ParameterInfos[] = 
{
	{"ipacket", 0, 134222329, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_USER_BEHAVIORHandler_t2510_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_USER_BEHAVIORHandler::Execute(PacketDistributed)
MethodInfo CG_USER_BEHAVIORHandler_Execute_m15348_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_USER_BEHAVIORHandler_Execute_m15348/* method */
	, &CG_USER_BEHAVIORHandler_t2510_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_USER_BEHAVIORHandler_t2510_CG_USER_BEHAVIORHandler_Execute_m15348_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8824/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_USER_BEHAVIORHandler_t2510_MethodInfos[] =
{
	&CG_USER_BEHAVIORHandler__ctor_m15347_MethodInfo,
	&CG_USER_BEHAVIORHandler_Execute_m15348_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_USER_BEHAVIORHandler_Execute_m15348_MethodInfo;
static MethodInfo* CG_USER_BEHAVIORHandler_t2510_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_USER_BEHAVIORHandler_Execute_m15348_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_USER_BEHAVIORHandler_t2510_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_USER_BEHAVIORHandler_t2510_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_USER_BEHAVIORHandler_t2510_0_0_0;
extern Il2CppType CG_USER_BEHAVIORHandler_t2510_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_USER_BEHAVIORHandler_t2510;
extern TypeInfo CG_USER_BEHAVIORHandler_t2510_il2cpp_TypeInfo;
TypeInfo CG_USER_BEHAVIORHandler_t2510_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_USER_BEHAVIORHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_USER_BEHAVIORHandler_t2510_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_USER_BEHAVIORHandler_t2510_il2cpp_TypeInfo/* element_class */
	, CG_USER_BEHAVIORHandler_t2510_InterfacesTypeInfos/* implemented_interfaces */
	, CG_USER_BEHAVIORHandler_t2510_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_USER_BEHAVIORHandler_t2510_il2cpp_TypeInfo/* cast_class */
	, &CG_USER_BEHAVIORHandler_t2510_0_0_0/* byval_arg */
	, &CG_USER_BEHAVIORHandler_t2510_1_0_0/* this_arg */
	, CG_USER_BEHAVIORHandler_t2510_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_USER_BEHAVIORHandler_t2510)/* instance_size */
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
// SPacket.SocketInstance.CG_USE_HEROCODEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USE_HEROCODEHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_USE_HEROCODEHandler_t2511_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_USE_HEROCODEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USE_HEROCODEHandMethodDeclarations.h"

// CG_USE_HEROCODE
#include "AssemblyU2DCSharp_CG_USE_HEROCODE.h"
extern TypeInfo CG_USE_HEROCODE_t3555_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_USE_HEROCODEHandler::.ctor()
extern MethodInfo CG_USE_HEROCODEHandler__ctor_m15349_MethodInfo;
 void CG_USE_HEROCODEHandler__ctor_m15349 (CG_USE_HEROCODEHandler_t2511 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_USE_HEROCODEHandler::Execute(PacketDistributed)
extern MethodInfo CG_USE_HEROCODEHandler_Execute_m15350_MethodInfo;
 uint32_t CG_USE_HEROCODEHandler_Execute_m15350 (CG_USE_HEROCODEHandler_t2511 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_USE_HEROCODE_t3555 * V_0 = {0};
	{
		V_0 = ((CG_USE_HEROCODE_t3555 *)Castclass(___ipacket, InitializedTypeInfo(&CG_USE_HEROCODE_t3555_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_USE_HEROCODEHandler
extern TypeInfo CG_USE_HEROCODEHandler_t2511_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_USE_HEROCODEHandler::.ctor()
MethodInfo CG_USE_HEROCODEHandler__ctor_m15349_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_USE_HEROCODEHandler__ctor_m15349/* method */
	, &CG_USE_HEROCODEHandler_t2511_il2cpp_TypeInfo/* declaring_type */
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
	, 8825/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_USE_HEROCODEHandler_t2511_CG_USE_HEROCODEHandler_Execute_m15350_ParameterInfos[] = 
{
	{"ipacket", 0, 134222330, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_USE_HEROCODEHandler_t2511_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_USE_HEROCODEHandler::Execute(PacketDistributed)
MethodInfo CG_USE_HEROCODEHandler_Execute_m15350_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_USE_HEROCODEHandler_Execute_m15350/* method */
	, &CG_USE_HEROCODEHandler_t2511_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_USE_HEROCODEHandler_t2511_CG_USE_HEROCODEHandler_Execute_m15350_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8826/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_USE_HEROCODEHandler_t2511_MethodInfos[] =
{
	&CG_USE_HEROCODEHandler__ctor_m15349_MethodInfo,
	&CG_USE_HEROCODEHandler_Execute_m15350_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_USE_HEROCODEHandler_Execute_m15350_MethodInfo;
static MethodInfo* CG_USE_HEROCODEHandler_t2511_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_USE_HEROCODEHandler_Execute_m15350_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_USE_HEROCODEHandler_t2511_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_USE_HEROCODEHandler_t2511_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_USE_HEROCODEHandler_t2511_0_0_0;
extern Il2CppType CG_USE_HEROCODEHandler_t2511_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_USE_HEROCODEHandler_t2511;
extern TypeInfo CG_USE_HEROCODEHandler_t2511_il2cpp_TypeInfo;
TypeInfo CG_USE_HEROCODEHandler_t2511_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_USE_HEROCODEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_USE_HEROCODEHandler_t2511_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_USE_HEROCODEHandler_t2511_il2cpp_TypeInfo/* element_class */
	, CG_USE_HEROCODEHandler_t2511_InterfacesTypeInfos/* implemented_interfaces */
	, CG_USE_HEROCODEHandler_t2511_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_USE_HEROCODEHandler_t2511_il2cpp_TypeInfo/* cast_class */
	, &CG_USE_HEROCODEHandler_t2511_0_0_0/* byval_arg */
	, &CG_USE_HEROCODEHandler_t2511_1_0_0/* this_arg */
	, CG_USE_HEROCODEHandler_t2511_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_USE_HEROCODEHandler_t2511)/* instance_size */
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
// SPacket.SocketInstance.CG_USE_ITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USE_ITEMHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_USE_ITEMHandler_t2512_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_USE_ITEMHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USE_ITEMHandlerMethodDeclarations.h"

// CG_USE_ITEM
#include "AssemblyU2DCSharp_CG_USE_ITEM.h"
extern TypeInfo CG_USE_ITEM_t2976_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_USE_ITEMHandler::.ctor()
extern MethodInfo CG_USE_ITEMHandler__ctor_m15351_MethodInfo;
 void CG_USE_ITEMHandler__ctor_m15351 (CG_USE_ITEMHandler_t2512 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_USE_ITEMHandler::Execute(PacketDistributed)
extern MethodInfo CG_USE_ITEMHandler_Execute_m15352_MethodInfo;
 uint32_t CG_USE_ITEMHandler_Execute_m15352 (CG_USE_ITEMHandler_t2512 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_USE_ITEM_t2976 * V_0 = {0};
	{
		V_0 = ((CG_USE_ITEM_t2976 *)Castclass(___ipacket, InitializedTypeInfo(&CG_USE_ITEM_t2976_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_USE_ITEMHandler
extern TypeInfo CG_USE_ITEMHandler_t2512_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_USE_ITEMHandler::.ctor()
MethodInfo CG_USE_ITEMHandler__ctor_m15351_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_USE_ITEMHandler__ctor_m15351/* method */
	, &CG_USE_ITEMHandler_t2512_il2cpp_TypeInfo/* declaring_type */
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
	, 8827/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_USE_ITEMHandler_t2512_CG_USE_ITEMHandler_Execute_m15352_ParameterInfos[] = 
{
	{"ipacket", 0, 134222331, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_USE_ITEMHandler_t2512_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_USE_ITEMHandler::Execute(PacketDistributed)
MethodInfo CG_USE_ITEMHandler_Execute_m15352_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_USE_ITEMHandler_Execute_m15352/* method */
	, &CG_USE_ITEMHandler_t2512_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_USE_ITEMHandler_t2512_CG_USE_ITEMHandler_Execute_m15352_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8828/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_USE_ITEMHandler_t2512_MethodInfos[] =
{
	&CG_USE_ITEMHandler__ctor_m15351_MethodInfo,
	&CG_USE_ITEMHandler_Execute_m15352_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_USE_ITEMHandler_Execute_m15352_MethodInfo;
static MethodInfo* CG_USE_ITEMHandler_t2512_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_USE_ITEMHandler_Execute_m15352_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_USE_ITEMHandler_t2512_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_USE_ITEMHandler_t2512_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_USE_ITEMHandler_t2512_0_0_0;
extern Il2CppType CG_USE_ITEMHandler_t2512_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_USE_ITEMHandler_t2512;
extern TypeInfo CG_USE_ITEMHandler_t2512_il2cpp_TypeInfo;
TypeInfo CG_USE_ITEMHandler_t2512_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_USE_ITEMHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_USE_ITEMHandler_t2512_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_USE_ITEMHandler_t2512_il2cpp_TypeInfo/* element_class */
	, CG_USE_ITEMHandler_t2512_InterfacesTypeInfos/* implemented_interfaces */
	, CG_USE_ITEMHandler_t2512_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_USE_ITEMHandler_t2512_il2cpp_TypeInfo/* cast_class */
	, &CG_USE_ITEMHandler_t2512_0_0_0/* byval_arg */
	, &CG_USE_ITEMHandler_t2512_1_0_0/* this_arg */
	, CG_USE_ITEMHandler_t2512_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_USE_ITEMHandler_t2512)/* instance_size */
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
// SPacket.SocketInstance.CG_USE_LIGHT_SKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USE_LIGHT_SKILLH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_USE_LIGHT_SKILLHandler_t2513_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_USE_LIGHT_SKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USE_LIGHT_SKILLHMethodDeclarations.h"

// CG_USE_LIGHT_SKILL
#include "AssemblyU2DCSharp_CG_USE_LIGHT_SKILL.h"
extern TypeInfo CG_USE_LIGHT_SKILL_t3460_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_USE_LIGHT_SKILLHandler::.ctor()
extern MethodInfo CG_USE_LIGHT_SKILLHandler__ctor_m15353_MethodInfo;
 void CG_USE_LIGHT_SKILLHandler__ctor_m15353 (CG_USE_LIGHT_SKILLHandler_t2513 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_USE_LIGHT_SKILLHandler::Execute(PacketDistributed)
extern MethodInfo CG_USE_LIGHT_SKILLHandler_Execute_m15354_MethodInfo;
 uint32_t CG_USE_LIGHT_SKILLHandler_Execute_m15354 (CG_USE_LIGHT_SKILLHandler_t2513 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_USE_LIGHT_SKILL_t3460 * V_0 = {0};
	{
		V_0 = ((CG_USE_LIGHT_SKILL_t3460 *)Castclass(___ipacket, InitializedTypeInfo(&CG_USE_LIGHT_SKILL_t3460_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_USE_LIGHT_SKILLHandler
extern TypeInfo CG_USE_LIGHT_SKILLHandler_t2513_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_USE_LIGHT_SKILLHandler::.ctor()
MethodInfo CG_USE_LIGHT_SKILLHandler__ctor_m15353_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_USE_LIGHT_SKILLHandler__ctor_m15353/* method */
	, &CG_USE_LIGHT_SKILLHandler_t2513_il2cpp_TypeInfo/* declaring_type */
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
	, 8829/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_USE_LIGHT_SKILLHandler_t2513_CG_USE_LIGHT_SKILLHandler_Execute_m15354_ParameterInfos[] = 
{
	{"ipacket", 0, 134222332, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_USE_LIGHT_SKILLHandler_t2513_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_USE_LIGHT_SKILLHandler::Execute(PacketDistributed)
MethodInfo CG_USE_LIGHT_SKILLHandler_Execute_m15354_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_USE_LIGHT_SKILLHandler_Execute_m15354/* method */
	, &CG_USE_LIGHT_SKILLHandler_t2513_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_USE_LIGHT_SKILLHandler_t2513_CG_USE_LIGHT_SKILLHandler_Execute_m15354_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8830/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_USE_LIGHT_SKILLHandler_t2513_MethodInfos[] =
{
	&CG_USE_LIGHT_SKILLHandler__ctor_m15353_MethodInfo,
	&CG_USE_LIGHT_SKILLHandler_Execute_m15354_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_USE_LIGHT_SKILLHandler_Execute_m15354_MethodInfo;
static MethodInfo* CG_USE_LIGHT_SKILLHandler_t2513_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_USE_LIGHT_SKILLHandler_Execute_m15354_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_USE_LIGHT_SKILLHandler_t2513_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_USE_LIGHT_SKILLHandler_t2513_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_USE_LIGHT_SKILLHandler_t2513_0_0_0;
extern Il2CppType CG_USE_LIGHT_SKILLHandler_t2513_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_USE_LIGHT_SKILLHandler_t2513;
extern TypeInfo CG_USE_LIGHT_SKILLHandler_t2513_il2cpp_TypeInfo;
TypeInfo CG_USE_LIGHT_SKILLHandler_t2513_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_USE_LIGHT_SKILLHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_USE_LIGHT_SKILLHandler_t2513_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_USE_LIGHT_SKILLHandler_t2513_il2cpp_TypeInfo/* element_class */
	, CG_USE_LIGHT_SKILLHandler_t2513_InterfacesTypeInfos/* implemented_interfaces */
	, CG_USE_LIGHT_SKILLHandler_t2513_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_USE_LIGHT_SKILLHandler_t2513_il2cpp_TypeInfo/* cast_class */
	, &CG_USE_LIGHT_SKILLHandler_t2513_0_0_0/* byval_arg */
	, &CG_USE_LIGHT_SKILLHandler_t2513_1_0_0/* this_arg */
	, CG_USE_LIGHT_SKILLHandler_t2513_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_USE_LIGHT_SKILLHandler_t2513)/* instance_size */
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
// SPacket.SocketInstance.CG_USE_LIVINGSKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USE_LIVINGSKILLH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_USE_LIVINGSKILLHandler_t2514_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_USE_LIVINGSKILLHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_USE_LIVINGSKILLHMethodDeclarations.h"

// CG_USE_LIVINGSKILL
#include "AssemblyU2DCSharp_CG_USE_LIVINGSKILL.h"
extern TypeInfo CG_USE_LIVINGSKILL_t3295_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_USE_LIVINGSKILLHandler::.ctor()
extern MethodInfo CG_USE_LIVINGSKILLHandler__ctor_m15355_MethodInfo;
 void CG_USE_LIVINGSKILLHandler__ctor_m15355 (CG_USE_LIVINGSKILLHandler_t2514 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_USE_LIVINGSKILLHandler::Execute(PacketDistributed)
extern MethodInfo CG_USE_LIVINGSKILLHandler_Execute_m15356_MethodInfo;
 uint32_t CG_USE_LIVINGSKILLHandler_Execute_m15356 (CG_USE_LIVINGSKILLHandler_t2514 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_USE_LIVINGSKILL_t3295 * V_0 = {0};
	{
		V_0 = ((CG_USE_LIVINGSKILL_t3295 *)Castclass(___ipacket, InitializedTypeInfo(&CG_USE_LIVINGSKILL_t3295_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_USE_LIVINGSKILLHandler
extern TypeInfo CG_USE_LIVINGSKILLHandler_t2514_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_USE_LIVINGSKILLHandler::.ctor()
MethodInfo CG_USE_LIVINGSKILLHandler__ctor_m15355_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_USE_LIVINGSKILLHandler__ctor_m15355/* method */
	, &CG_USE_LIVINGSKILLHandler_t2514_il2cpp_TypeInfo/* declaring_type */
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
	, 8831/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_USE_LIVINGSKILLHandler_t2514_CG_USE_LIVINGSKILLHandler_Execute_m15356_ParameterInfos[] = 
{
	{"ipacket", 0, 134222333, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_USE_LIVINGSKILLHandler_t2514_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_USE_LIVINGSKILLHandler::Execute(PacketDistributed)
MethodInfo CG_USE_LIVINGSKILLHandler_Execute_m15356_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_USE_LIVINGSKILLHandler_Execute_m15356/* method */
	, &CG_USE_LIVINGSKILLHandler_t2514_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_USE_LIVINGSKILLHandler_t2514_CG_USE_LIVINGSKILLHandler_Execute_m15356_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8832/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_USE_LIVINGSKILLHandler_t2514_MethodInfos[] =
{
	&CG_USE_LIVINGSKILLHandler__ctor_m15355_MethodInfo,
	&CG_USE_LIVINGSKILLHandler_Execute_m15356_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_USE_LIVINGSKILLHandler_Execute_m15356_MethodInfo;
static MethodInfo* CG_USE_LIVINGSKILLHandler_t2514_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_USE_LIVINGSKILLHandler_Execute_m15356_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_USE_LIVINGSKILLHandler_t2514_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_USE_LIVINGSKILLHandler_t2514_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_USE_LIVINGSKILLHandler_t2514_0_0_0;
extern Il2CppType CG_USE_LIVINGSKILLHandler_t2514_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_USE_LIVINGSKILLHandler_t2514;
extern TypeInfo CG_USE_LIVINGSKILLHandler_t2514_il2cpp_TypeInfo;
TypeInfo CG_USE_LIVINGSKILLHandler_t2514_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_USE_LIVINGSKILLHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_USE_LIVINGSKILLHandler_t2514_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_USE_LIVINGSKILLHandler_t2514_il2cpp_TypeInfo/* element_class */
	, CG_USE_LIVINGSKILLHandler_t2514_InterfacesTypeInfos/* implemented_interfaces */
	, CG_USE_LIVINGSKILLHandler_t2514_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_USE_LIVINGSKILLHandler_t2514_il2cpp_TypeInfo/* cast_class */
	, &CG_USE_LIVINGSKILLHandler_t2514_0_0_0/* byval_arg */
	, &CG_USE_LIVINGSKILLHandler_t2514_1_0_0/* this_arg */
	, CG_USE_LIVINGSKILLHandler_t2514_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_USE_LIVINGSKILLHandler_t2514)/* instance_size */
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
// SPacket.SocketInstance.CG_VISIT_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_VISIT_SWORDSMANH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_VISIT_SWORDSMANHandler_t2515_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_VISIT_SWORDSMANHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_VISIT_SWORDSMANHMethodDeclarations.h"

// CG_VISIT_SWORDSMAN
#include "AssemblyU2DCSharp_CG_VISIT_SWORDSMAN.h"
extern TypeInfo CG_VISIT_SWORDSMAN_t3328_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_VISIT_SWORDSMANHandler::.ctor()
extern MethodInfo CG_VISIT_SWORDSMANHandler__ctor_m15357_MethodInfo;
 void CG_VISIT_SWORDSMANHandler__ctor_m15357 (CG_VISIT_SWORDSMANHandler_t2515 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_VISIT_SWORDSMANHandler::Execute(PacketDistributed)
extern MethodInfo CG_VISIT_SWORDSMANHandler_Execute_m15358_MethodInfo;
 uint32_t CG_VISIT_SWORDSMANHandler_Execute_m15358 (CG_VISIT_SWORDSMANHandler_t2515 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_VISIT_SWORDSMAN_t3328 * V_0 = {0};
	{
		V_0 = ((CG_VISIT_SWORDSMAN_t3328 *)Castclass(___ipacket, InitializedTypeInfo(&CG_VISIT_SWORDSMAN_t3328_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_VISIT_SWORDSMANHandler
extern TypeInfo CG_VISIT_SWORDSMANHandler_t2515_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_VISIT_SWORDSMANHandler::.ctor()
MethodInfo CG_VISIT_SWORDSMANHandler__ctor_m15357_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_VISIT_SWORDSMANHandler__ctor_m15357/* method */
	, &CG_VISIT_SWORDSMANHandler_t2515_il2cpp_TypeInfo/* declaring_type */
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
	, 8833/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_VISIT_SWORDSMANHandler_t2515_CG_VISIT_SWORDSMANHandler_Execute_m15358_ParameterInfos[] = 
{
	{"ipacket", 0, 134222334, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_VISIT_SWORDSMANHandler_t2515_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_VISIT_SWORDSMANHandler::Execute(PacketDistributed)
MethodInfo CG_VISIT_SWORDSMANHandler_Execute_m15358_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_VISIT_SWORDSMANHandler_Execute_m15358/* method */
	, &CG_VISIT_SWORDSMANHandler_t2515_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_VISIT_SWORDSMANHandler_t2515_CG_VISIT_SWORDSMANHandler_Execute_m15358_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_VISIT_SWORDSMANHandler_t2515_MethodInfos[] =
{
	&CG_VISIT_SWORDSMANHandler__ctor_m15357_MethodInfo,
	&CG_VISIT_SWORDSMANHandler_Execute_m15358_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_VISIT_SWORDSMANHandler_Execute_m15358_MethodInfo;
static MethodInfo* CG_VISIT_SWORDSMANHandler_t2515_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_VISIT_SWORDSMANHandler_Execute_m15358_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_VISIT_SWORDSMANHandler_t2515_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_VISIT_SWORDSMANHandler_t2515_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_VISIT_SWORDSMANHandler_t2515_0_0_0;
extern Il2CppType CG_VISIT_SWORDSMANHandler_t2515_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_VISIT_SWORDSMANHandler_t2515;
extern TypeInfo CG_VISIT_SWORDSMANHandler_t2515_il2cpp_TypeInfo;
TypeInfo CG_VISIT_SWORDSMANHandler_t2515_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_VISIT_SWORDSMANHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_VISIT_SWORDSMANHandler_t2515_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_VISIT_SWORDSMANHandler_t2515_il2cpp_TypeInfo/* element_class */
	, CG_VISIT_SWORDSMANHandler_t2515_InterfacesTypeInfos/* implemented_interfaces */
	, CG_VISIT_SWORDSMANHandler_t2515_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_VISIT_SWORDSMANHandler_t2515_il2cpp_TypeInfo/* cast_class */
	, &CG_VISIT_SWORDSMANHandler_t2515_0_0_0/* byval_arg */
	, &CG_VISIT_SWORDSMANHandler_t2515_1_0_0/* this_arg */
	, CG_VISIT_SWORDSMANHandler_t2515_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_VISIT_SWORDSMANHandler_t2515)/* instance_size */
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
// SPacket.SocketInstance.CG_VOICE_CHATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_VOICE_CHATHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_VOICE_CHATHandler_t2516_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_VOICE_CHATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_VOICE_CHATHandleMethodDeclarations.h"

// CG_VOICE_CHAT
#include "AssemblyU2DCSharp_CG_VOICE_CHAT.h"
extern TypeInfo CG_VOICE_CHAT_t3437_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_VOICE_CHATHandler::.ctor()
extern MethodInfo CG_VOICE_CHATHandler__ctor_m15359_MethodInfo;
 void CG_VOICE_CHATHandler__ctor_m15359 (CG_VOICE_CHATHandler_t2516 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_VOICE_CHATHandler::Execute(PacketDistributed)
extern MethodInfo CG_VOICE_CHATHandler_Execute_m15360_MethodInfo;
 uint32_t CG_VOICE_CHATHandler_Execute_m15360 (CG_VOICE_CHATHandler_t2516 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_VOICE_CHAT_t3437 * V_0 = {0};
	{
		V_0 = ((CG_VOICE_CHAT_t3437 *)Castclass(___ipacket, InitializedTypeInfo(&CG_VOICE_CHAT_t3437_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_VOICE_CHATHandler
extern TypeInfo CG_VOICE_CHATHandler_t2516_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_VOICE_CHATHandler::.ctor()
MethodInfo CG_VOICE_CHATHandler__ctor_m15359_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_VOICE_CHATHandler__ctor_m15359/* method */
	, &CG_VOICE_CHATHandler_t2516_il2cpp_TypeInfo/* declaring_type */
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
	, 8835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_VOICE_CHATHandler_t2516_CG_VOICE_CHATHandler_Execute_m15360_ParameterInfos[] = 
{
	{"ipacket", 0, 134222335, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_VOICE_CHATHandler_t2516_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_VOICE_CHATHandler::Execute(PacketDistributed)
MethodInfo CG_VOICE_CHATHandler_Execute_m15360_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_VOICE_CHATHandler_Execute_m15360/* method */
	, &CG_VOICE_CHATHandler_t2516_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_VOICE_CHATHandler_t2516_CG_VOICE_CHATHandler_Execute_m15360_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_VOICE_CHATHandler_t2516_MethodInfos[] =
{
	&CG_VOICE_CHATHandler__ctor_m15359_MethodInfo,
	&CG_VOICE_CHATHandler_Execute_m15360_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_VOICE_CHATHandler_Execute_m15360_MethodInfo;
static MethodInfo* CG_VOICE_CHATHandler_t2516_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_VOICE_CHATHandler_Execute_m15360_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_VOICE_CHATHandler_t2516_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_VOICE_CHATHandler_t2516_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_VOICE_CHATHandler_t2516_0_0_0;
extern Il2CppType CG_VOICE_CHATHandler_t2516_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_VOICE_CHATHandler_t2516;
extern TypeInfo CG_VOICE_CHATHandler_t2516_il2cpp_TypeInfo;
TypeInfo CG_VOICE_CHATHandler_t2516_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_VOICE_CHATHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_VOICE_CHATHandler_t2516_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_VOICE_CHATHandler_t2516_il2cpp_TypeInfo/* element_class */
	, CG_VOICE_CHATHandler_t2516_InterfacesTypeInfos/* implemented_interfaces */
	, CG_VOICE_CHATHandler_t2516_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_VOICE_CHATHandler_t2516_il2cpp_TypeInfo/* cast_class */
	, &CG_VOICE_CHATHandler_t2516_0_0_0/* byval_arg */
	, &CG_VOICE_CHATHandler_t2516_1_0_0/* this_arg */
	, CG_VOICE_CHATHandler_t2516_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_VOICE_CHATHandler_t2516)/* instance_size */
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
// SPacket.SocketInstance.CG_WEAR_FASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WEAR_FASHIONHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_WEAR_FASHIONHandler_t2517_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_WEAR_FASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WEAR_FASHIONHandMethodDeclarations.h"

// CG_WEAR_FASHION
#include "AssemblyU2DCSharp_CG_WEAR_FASHION.h"
extern TypeInfo CG_WEAR_FASHION_t3223_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_WEAR_FASHIONHandler::.ctor()
extern MethodInfo CG_WEAR_FASHIONHandler__ctor_m15361_MethodInfo;
 void CG_WEAR_FASHIONHandler__ctor_m15361 (CG_WEAR_FASHIONHandler_t2517 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_WEAR_FASHIONHandler::Execute(PacketDistributed)
extern MethodInfo CG_WEAR_FASHIONHandler_Execute_m15362_MethodInfo;
 uint32_t CG_WEAR_FASHIONHandler_Execute_m15362 (CG_WEAR_FASHIONHandler_t2517 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_WEAR_FASHION_t3223 * V_0 = {0};
	{
		V_0 = ((CG_WEAR_FASHION_t3223 *)Castclass(___ipacket, InitializedTypeInfo(&CG_WEAR_FASHION_t3223_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_WEAR_FASHIONHandler
extern TypeInfo CG_WEAR_FASHIONHandler_t2517_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_WEAR_FASHIONHandler::.ctor()
MethodInfo CG_WEAR_FASHIONHandler__ctor_m15361_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_WEAR_FASHIONHandler__ctor_m15361/* method */
	, &CG_WEAR_FASHIONHandler_t2517_il2cpp_TypeInfo/* declaring_type */
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
	, 8837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_WEAR_FASHIONHandler_t2517_CG_WEAR_FASHIONHandler_Execute_m15362_ParameterInfos[] = 
{
	{"ipacket", 0, 134222336, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_WEAR_FASHIONHandler_t2517_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_WEAR_FASHIONHandler::Execute(PacketDistributed)
MethodInfo CG_WEAR_FASHIONHandler_Execute_m15362_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_WEAR_FASHIONHandler_Execute_m15362/* method */
	, &CG_WEAR_FASHIONHandler_t2517_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_WEAR_FASHIONHandler_t2517_CG_WEAR_FASHIONHandler_Execute_m15362_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_WEAR_FASHIONHandler_t2517_MethodInfos[] =
{
	&CG_WEAR_FASHIONHandler__ctor_m15361_MethodInfo,
	&CG_WEAR_FASHIONHandler_Execute_m15362_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_WEAR_FASHIONHandler_Execute_m15362_MethodInfo;
static MethodInfo* CG_WEAR_FASHIONHandler_t2517_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_WEAR_FASHIONHandler_Execute_m15362_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_WEAR_FASHIONHandler_t2517_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_WEAR_FASHIONHandler_t2517_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_WEAR_FASHIONHandler_t2517_0_0_0;
extern Il2CppType CG_WEAR_FASHIONHandler_t2517_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_WEAR_FASHIONHandler_t2517;
extern TypeInfo CG_WEAR_FASHIONHandler_t2517_il2cpp_TypeInfo;
TypeInfo CG_WEAR_FASHIONHandler_t2517_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_WEAR_FASHIONHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_WEAR_FASHIONHandler_t2517_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_WEAR_FASHIONHandler_t2517_il2cpp_TypeInfo/* element_class */
	, CG_WEAR_FASHIONHandler_t2517_InterfacesTypeInfos/* implemented_interfaces */
	, CG_WEAR_FASHIONHandler_t2517_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_WEAR_FASHIONHandler_t2517_il2cpp_TypeInfo/* cast_class */
	, &CG_WEAR_FASHIONHandler_t2517_0_0_0/* byval_arg */
	, &CG_WEAR_FASHIONHandler_t2517_1_0_0/* this_arg */
	, CG_WEAR_FASHIONHandler_t2517_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_WEAR_FASHIONHandler_t2517)/* instance_size */
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
// SPacket.SocketInstance.CG_WISHINGWELL_FETCHHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WISHINGWELL_FETC.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_WISHINGWELL_FETCHHandler_t2518_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_WISHINGWELL_FETCHHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WISHINGWELL_FETCMethodDeclarations.h"

// CG_WISHINGWELL_FETCH
#include "AssemblyU2DCSharp_CG_WISHINGWELL_FETCH.h"
extern TypeInfo CG_WISHINGWELL_FETCH_t3466_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_WISHINGWELL_FETCHHandler::.ctor()
extern MethodInfo CG_WISHINGWELL_FETCHHandler__ctor_m15363_MethodInfo;
 void CG_WISHINGWELL_FETCHHandler__ctor_m15363 (CG_WISHINGWELL_FETCHHandler_t2518 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_WISHINGWELL_FETCHHandler::Execute(PacketDistributed)
extern MethodInfo CG_WISHINGWELL_FETCHHandler_Execute_m15364_MethodInfo;
 uint32_t CG_WISHINGWELL_FETCHHandler_Execute_m15364 (CG_WISHINGWELL_FETCHHandler_t2518 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_WISHINGWELL_FETCH_t3466 * V_0 = {0};
	{
		V_0 = ((CG_WISHINGWELL_FETCH_t3466 *)Castclass(___ipacket, InitializedTypeInfo(&CG_WISHINGWELL_FETCH_t3466_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_WISHINGWELL_FETCHHandler
extern TypeInfo CG_WISHINGWELL_FETCHHandler_t2518_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_WISHINGWELL_FETCHHandler::.ctor()
MethodInfo CG_WISHINGWELL_FETCHHandler__ctor_m15363_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_WISHINGWELL_FETCHHandler__ctor_m15363/* method */
	, &CG_WISHINGWELL_FETCHHandler_t2518_il2cpp_TypeInfo/* declaring_type */
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
	, 8839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_WISHINGWELL_FETCHHandler_t2518_CG_WISHINGWELL_FETCHHandler_Execute_m15364_ParameterInfos[] = 
{
	{"ipacket", 0, 134222337, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_WISHINGWELL_FETCHHandler_t2518_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_WISHINGWELL_FETCHHandler::Execute(PacketDistributed)
MethodInfo CG_WISHINGWELL_FETCHHandler_Execute_m15364_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_WISHINGWELL_FETCHHandler_Execute_m15364/* method */
	, &CG_WISHINGWELL_FETCHHandler_t2518_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_WISHINGWELL_FETCHHandler_t2518_CG_WISHINGWELL_FETCHHandler_Execute_m15364_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_WISHINGWELL_FETCHHandler_t2518_MethodInfos[] =
{
	&CG_WISHINGWELL_FETCHHandler__ctor_m15363_MethodInfo,
	&CG_WISHINGWELL_FETCHHandler_Execute_m15364_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_WISHINGWELL_FETCHHandler_Execute_m15364_MethodInfo;
static MethodInfo* CG_WISHINGWELL_FETCHHandler_t2518_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_WISHINGWELL_FETCHHandler_Execute_m15364_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_WISHINGWELL_FETCHHandler_t2518_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_WISHINGWELL_FETCHHandler_t2518_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_WISHINGWELL_FETCHHandler_t2518_0_0_0;
extern Il2CppType CG_WISHINGWELL_FETCHHandler_t2518_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_WISHINGWELL_FETCHHandler_t2518;
extern TypeInfo CG_WISHINGWELL_FETCHHandler_t2518_il2cpp_TypeInfo;
TypeInfo CG_WISHINGWELL_FETCHHandler_t2518_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_WISHINGWELL_FETCHHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_WISHINGWELL_FETCHHandler_t2518_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_WISHINGWELL_FETCHHandler_t2518_il2cpp_TypeInfo/* element_class */
	, CG_WISHINGWELL_FETCHHandler_t2518_InterfacesTypeInfos/* implemented_interfaces */
	, CG_WISHINGWELL_FETCHHandler_t2518_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_WISHINGWELL_FETCHHandler_t2518_il2cpp_TypeInfo/* cast_class */
	, &CG_WISHINGWELL_FETCHHandler_t2518_0_0_0/* byval_arg */
	, &CG_WISHINGWELL_FETCHHandler_t2518_1_0_0/* this_arg */
	, CG_WISHINGWELL_FETCHHandler_t2518_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_WISHINGWELL_FETCHHandler_t2518)/* instance_size */
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
// SPacket.SocketInstance.CG_WISHINGWELL_WISHHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WISHINGWELL_WISH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_WISHINGWELL_WISHHandler_t2519_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_WISHINGWELL_WISHHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WISHINGWELL_WISHMethodDeclarations.h"

// CG_WISHINGWELL_WISH
#include "AssemblyU2DCSharp_CG_WISHINGWELL_WISH.h"
extern TypeInfo CG_WISHINGWELL_WISH_t3465_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_WISHINGWELL_WISHHandler::.ctor()
extern MethodInfo CG_WISHINGWELL_WISHHandler__ctor_m15365_MethodInfo;
 void CG_WISHINGWELL_WISHHandler__ctor_m15365 (CG_WISHINGWELL_WISHHandler_t2519 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_WISHINGWELL_WISHHandler::Execute(PacketDistributed)
extern MethodInfo CG_WISHINGWELL_WISHHandler_Execute_m15366_MethodInfo;
 uint32_t CG_WISHINGWELL_WISHHandler_Execute_m15366 (CG_WISHINGWELL_WISHHandler_t2519 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_WISHINGWELL_WISH_t3465 * V_0 = {0};
	{
		V_0 = ((CG_WISHINGWELL_WISH_t3465 *)Castclass(___ipacket, InitializedTypeInfo(&CG_WISHINGWELL_WISH_t3465_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_WISHINGWELL_WISHHandler
extern TypeInfo CG_WISHINGWELL_WISHHandler_t2519_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_WISHINGWELL_WISHHandler::.ctor()
MethodInfo CG_WISHINGWELL_WISHHandler__ctor_m15365_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_WISHINGWELL_WISHHandler__ctor_m15365/* method */
	, &CG_WISHINGWELL_WISHHandler_t2519_il2cpp_TypeInfo/* declaring_type */
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
	, 8841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_WISHINGWELL_WISHHandler_t2519_CG_WISHINGWELL_WISHHandler_Execute_m15366_ParameterInfos[] = 
{
	{"ipacket", 0, 134222338, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_WISHINGWELL_WISHHandler_t2519_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_WISHINGWELL_WISHHandler::Execute(PacketDistributed)
MethodInfo CG_WISHINGWELL_WISHHandler_Execute_m15366_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_WISHINGWELL_WISHHandler_Execute_m15366/* method */
	, &CG_WISHINGWELL_WISHHandler_t2519_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_WISHINGWELL_WISHHandler_t2519_CG_WISHINGWELL_WISHHandler_Execute_m15366_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_WISHINGWELL_WISHHandler_t2519_MethodInfos[] =
{
	&CG_WISHINGWELL_WISHHandler__ctor_m15365_MethodInfo,
	&CG_WISHINGWELL_WISHHandler_Execute_m15366_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_WISHINGWELL_WISHHandler_Execute_m15366_MethodInfo;
static MethodInfo* CG_WISHINGWELL_WISHHandler_t2519_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_WISHINGWELL_WISHHandler_Execute_m15366_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_WISHINGWELL_WISHHandler_t2519_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_WISHINGWELL_WISHHandler_t2519_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_WISHINGWELL_WISHHandler_t2519_0_0_0;
extern Il2CppType CG_WISHINGWELL_WISHHandler_t2519_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_WISHINGWELL_WISHHandler_t2519;
extern TypeInfo CG_WISHINGWELL_WISHHandler_t2519_il2cpp_TypeInfo;
TypeInfo CG_WISHINGWELL_WISHHandler_t2519_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_WISHINGWELL_WISHHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_WISHINGWELL_WISHHandler_t2519_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_WISHINGWELL_WISHHandler_t2519_il2cpp_TypeInfo/* element_class */
	, CG_WISHINGWELL_WISHHandler_t2519_InterfacesTypeInfos/* implemented_interfaces */
	, CG_WISHINGWELL_WISHHandler_t2519_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_WISHINGWELL_WISHHandler_t2519_il2cpp_TypeInfo/* cast_class */
	, &CG_WISHINGWELL_WISHHandler_t2519_0_0_0/* byval_arg */
	, &CG_WISHINGWELL_WISHHandler_t2519_1_0_0/* this_arg */
	, CG_WISHINGWELL_WISHHandler_t2519_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_WISHINGWELL_WISHHandler_t2519)/* instance_size */
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
// SPacket.SocketInstance.CG_WORLDBOSS_CHALLENGEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WORLDBOSS_CHALLE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_WORLDBOSS_CHALLENGEHandler_t2520_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_WORLDBOSS_CHALLENGEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WORLDBOSS_CHALLEMethodDeclarations.h"

// CG_WORLDBOSS_CHALLENGE
#include "AssemblyU2DCSharp_CG_WORLDBOSS_CHALLENGE.h"
extern TypeInfo CG_WORLDBOSS_CHALLENGE_t3193_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_WORLDBOSS_CHALLENGEHandler::.ctor()
extern MethodInfo CG_WORLDBOSS_CHALLENGEHandler__ctor_m15367_MethodInfo;
 void CG_WORLDBOSS_CHALLENGEHandler__ctor_m15367 (CG_WORLDBOSS_CHALLENGEHandler_t2520 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_WORLDBOSS_CHALLENGEHandler::Execute(PacketDistributed)
extern MethodInfo CG_WORLDBOSS_CHALLENGEHandler_Execute_m15368_MethodInfo;
 uint32_t CG_WORLDBOSS_CHALLENGEHandler_Execute_m15368 (CG_WORLDBOSS_CHALLENGEHandler_t2520 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_WORLDBOSS_CHALLENGE_t3193 * V_0 = {0};
	{
		V_0 = ((CG_WORLDBOSS_CHALLENGE_t3193 *)Castclass(___ipacket, InitializedTypeInfo(&CG_WORLDBOSS_CHALLENGE_t3193_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_WORLDBOSS_CHALLENGEHandler
extern TypeInfo CG_WORLDBOSS_CHALLENGEHandler_t2520_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_WORLDBOSS_CHALLENGEHandler::.ctor()
MethodInfo CG_WORLDBOSS_CHALLENGEHandler__ctor_m15367_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_WORLDBOSS_CHALLENGEHandler__ctor_m15367/* method */
	, &CG_WORLDBOSS_CHALLENGEHandler_t2520_il2cpp_TypeInfo/* declaring_type */
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
	, 8843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_WORLDBOSS_CHALLENGEHandler_t2520_CG_WORLDBOSS_CHALLENGEHandler_Execute_m15368_ParameterInfos[] = 
{
	{"ipacket", 0, 134222339, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_WORLDBOSS_CHALLENGEHandler_t2520_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_WORLDBOSS_CHALLENGEHandler::Execute(PacketDistributed)
MethodInfo CG_WORLDBOSS_CHALLENGEHandler_Execute_m15368_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_WORLDBOSS_CHALLENGEHandler_Execute_m15368/* method */
	, &CG_WORLDBOSS_CHALLENGEHandler_t2520_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_WORLDBOSS_CHALLENGEHandler_t2520_CG_WORLDBOSS_CHALLENGEHandler_Execute_m15368_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_WORLDBOSS_CHALLENGEHandler_t2520_MethodInfos[] =
{
	&CG_WORLDBOSS_CHALLENGEHandler__ctor_m15367_MethodInfo,
	&CG_WORLDBOSS_CHALLENGEHandler_Execute_m15368_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_WORLDBOSS_CHALLENGEHandler_Execute_m15368_MethodInfo;
static MethodInfo* CG_WORLDBOSS_CHALLENGEHandler_t2520_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_WORLDBOSS_CHALLENGEHandler_Execute_m15368_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_WORLDBOSS_CHALLENGEHandler_t2520_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_WORLDBOSS_CHALLENGEHandler_t2520_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_WORLDBOSS_CHALLENGEHandler_t2520_0_0_0;
extern Il2CppType CG_WORLDBOSS_CHALLENGEHandler_t2520_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_WORLDBOSS_CHALLENGEHandler_t2520;
extern TypeInfo CG_WORLDBOSS_CHALLENGEHandler_t2520_il2cpp_TypeInfo;
TypeInfo CG_WORLDBOSS_CHALLENGEHandler_t2520_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_WORLDBOSS_CHALLENGEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_WORLDBOSS_CHALLENGEHandler_t2520_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_WORLDBOSS_CHALLENGEHandler_t2520_il2cpp_TypeInfo/* element_class */
	, CG_WORLDBOSS_CHALLENGEHandler_t2520_InterfacesTypeInfos/* implemented_interfaces */
	, CG_WORLDBOSS_CHALLENGEHandler_t2520_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_WORLDBOSS_CHALLENGEHandler_t2520_il2cpp_TypeInfo/* cast_class */
	, &CG_WORLDBOSS_CHALLENGEHandler_t2520_0_0_0/* byval_arg */
	, &CG_WORLDBOSS_CHALLENGEHandler_t2520_1_0_0/* this_arg */
	, CG_WORLDBOSS_CHALLENGEHandler_t2520_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_WORLDBOSS_CHALLENGEHandler_t2520)/* instance_size */
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
// SPacket.SocketInstance.CG_WORLDBOSS_CHALL_RESPONSEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WORLDBOSS_CHALL_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_WORLDBOSS_CHALL_RESPONSEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WORLDBOSS_CHALL_MethodDeclarations.h"

// CG_WORLDBOSS_CHALL_RESPONSE
#include "AssemblyU2DCSharp_CG_WORLDBOSS_CHALL_RESPONSE.h"
extern TypeInfo CG_WORLDBOSS_CHALL_RESPONSE_t3396_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_WORLDBOSS_CHALL_RESPONSEHandler::.ctor()
extern MethodInfo CG_WORLDBOSS_CHALL_RESPONSEHandler__ctor_m15369_MethodInfo;
 void CG_WORLDBOSS_CHALL_RESPONSEHandler__ctor_m15369 (CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_WORLDBOSS_CHALL_RESPONSEHandler::Execute(PacketDistributed)
extern MethodInfo CG_WORLDBOSS_CHALL_RESPONSEHandler_Execute_m15370_MethodInfo;
 uint32_t CG_WORLDBOSS_CHALL_RESPONSEHandler_Execute_m15370 (CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_WORLDBOSS_CHALL_RESPONSE_t3396 * V_0 = {0};
	{
		V_0 = ((CG_WORLDBOSS_CHALL_RESPONSE_t3396 *)Castclass(___ipacket, InitializedTypeInfo(&CG_WORLDBOSS_CHALL_RESPONSE_t3396_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_WORLDBOSS_CHALL_RESPONSEHandler
extern TypeInfo CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_WORLDBOSS_CHALL_RESPONSEHandler::.ctor()
MethodInfo CG_WORLDBOSS_CHALL_RESPONSEHandler__ctor_m15369_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_WORLDBOSS_CHALL_RESPONSEHandler__ctor_m15369/* method */
	, &CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_il2cpp_TypeInfo/* declaring_type */
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
	, 8845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_CG_WORLDBOSS_CHALL_RESPONSEHandler_Execute_m15370_ParameterInfos[] = 
{
	{"ipacket", 0, 134222340, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_WORLDBOSS_CHALL_RESPONSEHandler::Execute(PacketDistributed)
MethodInfo CG_WORLDBOSS_CHALL_RESPONSEHandler_Execute_m15370_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_WORLDBOSS_CHALL_RESPONSEHandler_Execute_m15370/* method */
	, &CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_CG_WORLDBOSS_CHALL_RESPONSEHandler_Execute_m15370_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_MethodInfos[] =
{
	&CG_WORLDBOSS_CHALL_RESPONSEHandler__ctor_m15369_MethodInfo,
	&CG_WORLDBOSS_CHALL_RESPONSEHandler_Execute_m15370_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_WORLDBOSS_CHALL_RESPONSEHandler_Execute_m15370_MethodInfo;
static MethodInfo* CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_WORLDBOSS_CHALL_RESPONSEHandler_Execute_m15370_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_0_0_0;
extern Il2CppType CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521;
extern TypeInfo CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_il2cpp_TypeInfo;
TypeInfo CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_WORLDBOSS_CHALL_RESPONSEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_il2cpp_TypeInfo/* element_class */
	, CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_InterfacesTypeInfos/* implemented_interfaces */
	, CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_il2cpp_TypeInfo/* cast_class */
	, &CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_0_0_0/* byval_arg */
	, &CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_1_0_0/* this_arg */
	, CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_WORLDBOSS_CHALL_RESPONSEHandler_t2521)/* instance_size */
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
// SPacket.SocketInstance.CG_WORLDBOSS_JOINHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WORLDBOSS_JOINHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_WORLDBOSS_JOINHandler_t2522_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_WORLDBOSS_JOINHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WORLDBOSS_JOINHaMethodDeclarations.h"

// CG_WORLDBOSS_JOIN
#include "AssemblyU2DCSharp_CG_WORLDBOSS_JOIN.h"
extern TypeInfo CG_WORLDBOSS_JOIN_t3194_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_WORLDBOSS_JOINHandler::.ctor()
extern MethodInfo CG_WORLDBOSS_JOINHandler__ctor_m15371_MethodInfo;
 void CG_WORLDBOSS_JOINHandler__ctor_m15371 (CG_WORLDBOSS_JOINHandler_t2522 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_WORLDBOSS_JOINHandler::Execute(PacketDistributed)
extern MethodInfo CG_WORLDBOSS_JOINHandler_Execute_m15372_MethodInfo;
 uint32_t CG_WORLDBOSS_JOINHandler_Execute_m15372 (CG_WORLDBOSS_JOINHandler_t2522 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_WORLDBOSS_JOIN_t3194 * V_0 = {0};
	{
		V_0 = ((CG_WORLDBOSS_JOIN_t3194 *)Castclass(___ipacket, InitializedTypeInfo(&CG_WORLDBOSS_JOIN_t3194_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_WORLDBOSS_JOINHandler
extern TypeInfo CG_WORLDBOSS_JOINHandler_t2522_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_WORLDBOSS_JOINHandler::.ctor()
MethodInfo CG_WORLDBOSS_JOINHandler__ctor_m15371_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_WORLDBOSS_JOINHandler__ctor_m15371/* method */
	, &CG_WORLDBOSS_JOINHandler_t2522_il2cpp_TypeInfo/* declaring_type */
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
	, 8847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_WORLDBOSS_JOINHandler_t2522_CG_WORLDBOSS_JOINHandler_Execute_m15372_ParameterInfos[] = 
{
	{"ipacket", 0, 134222341, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_WORLDBOSS_JOINHandler_t2522_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_WORLDBOSS_JOINHandler::Execute(PacketDistributed)
MethodInfo CG_WORLDBOSS_JOINHandler_Execute_m15372_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_WORLDBOSS_JOINHandler_Execute_m15372/* method */
	, &CG_WORLDBOSS_JOINHandler_t2522_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_WORLDBOSS_JOINHandler_t2522_CG_WORLDBOSS_JOINHandler_Execute_m15372_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_WORLDBOSS_JOINHandler_t2522_MethodInfos[] =
{
	&CG_WORLDBOSS_JOINHandler__ctor_m15371_MethodInfo,
	&CG_WORLDBOSS_JOINHandler_Execute_m15372_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_WORLDBOSS_JOINHandler_Execute_m15372_MethodInfo;
static MethodInfo* CG_WORLDBOSS_JOINHandler_t2522_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_WORLDBOSS_JOINHandler_Execute_m15372_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_WORLDBOSS_JOINHandler_t2522_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_WORLDBOSS_JOINHandler_t2522_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_WORLDBOSS_JOINHandler_t2522_0_0_0;
extern Il2CppType CG_WORLDBOSS_JOINHandler_t2522_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_WORLDBOSS_JOINHandler_t2522;
extern TypeInfo CG_WORLDBOSS_JOINHandler_t2522_il2cpp_TypeInfo;
TypeInfo CG_WORLDBOSS_JOINHandler_t2522_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_WORLDBOSS_JOINHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_WORLDBOSS_JOINHandler_t2522_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_WORLDBOSS_JOINHandler_t2522_il2cpp_TypeInfo/* element_class */
	, CG_WORLDBOSS_JOINHandler_t2522_InterfacesTypeInfos/* implemented_interfaces */
	, CG_WORLDBOSS_JOINHandler_t2522_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_WORLDBOSS_JOINHandler_t2522_il2cpp_TypeInfo/* cast_class */
	, &CG_WORLDBOSS_JOINHandler_t2522_0_0_0/* byval_arg */
	, &CG_WORLDBOSS_JOINHandler_t2522_1_0_0/* this_arg */
	, CG_WORLDBOSS_JOINHandler_t2522_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_WORLDBOSS_JOINHandler_t2522)/* instance_size */
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
// SPacket.SocketInstance.CG_WORLDBOSS_TEAMLIST_REQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WORLDBOSS_TEAMLI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_WORLDBOSS_TEAMLIST_REQHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WORLDBOSS_TEAMLIMethodDeclarations.h"

// CG_WORLDBOSS_TEAMLIST_REQ
#include "AssemblyU2DCSharp_CG_WORLDBOSS_TEAMLIST_REQ.h"
extern TypeInfo CG_WORLDBOSS_TEAMLIST_REQ_t3190_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_WORLDBOSS_TEAMLIST_REQHandler::.ctor()
extern MethodInfo CG_WORLDBOSS_TEAMLIST_REQHandler__ctor_m15373_MethodInfo;
 void CG_WORLDBOSS_TEAMLIST_REQHandler__ctor_m15373 (CG_WORLDBOSS_TEAMLIST_REQHandler_t2523 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_WORLDBOSS_TEAMLIST_REQHandler::Execute(PacketDistributed)
extern MethodInfo CG_WORLDBOSS_TEAMLIST_REQHandler_Execute_m15374_MethodInfo;
 uint32_t CG_WORLDBOSS_TEAMLIST_REQHandler_Execute_m15374 (CG_WORLDBOSS_TEAMLIST_REQHandler_t2523 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_WORLDBOSS_TEAMLIST_REQ_t3190 * V_0 = {0};
	{
		V_0 = ((CG_WORLDBOSS_TEAMLIST_REQ_t3190 *)Castclass(___ipacket, InitializedTypeInfo(&CG_WORLDBOSS_TEAMLIST_REQ_t3190_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_WORLDBOSS_TEAMLIST_REQHandler
extern TypeInfo CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_WORLDBOSS_TEAMLIST_REQHandler::.ctor()
MethodInfo CG_WORLDBOSS_TEAMLIST_REQHandler__ctor_m15373_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_WORLDBOSS_TEAMLIST_REQHandler__ctor_m15373/* method */
	, &CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_il2cpp_TypeInfo/* declaring_type */
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
	, 8849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_CG_WORLDBOSS_TEAMLIST_REQHandler_Execute_m15374_ParameterInfos[] = 
{
	{"ipacket", 0, 134222342, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_WORLDBOSS_TEAMLIST_REQHandler::Execute(PacketDistributed)
MethodInfo CG_WORLDBOSS_TEAMLIST_REQHandler_Execute_m15374_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_WORLDBOSS_TEAMLIST_REQHandler_Execute_m15374/* method */
	, &CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_CG_WORLDBOSS_TEAMLIST_REQHandler_Execute_m15374_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_MethodInfos[] =
{
	&CG_WORLDBOSS_TEAMLIST_REQHandler__ctor_m15373_MethodInfo,
	&CG_WORLDBOSS_TEAMLIST_REQHandler_Execute_m15374_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_WORLDBOSS_TEAMLIST_REQHandler_Execute_m15374_MethodInfo;
static MethodInfo* CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_WORLDBOSS_TEAMLIST_REQHandler_Execute_m15374_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_0_0_0;
extern Il2CppType CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_WORLDBOSS_TEAMLIST_REQHandler_t2523;
extern TypeInfo CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_il2cpp_TypeInfo;
TypeInfo CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_WORLDBOSS_TEAMLIST_REQHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_il2cpp_TypeInfo/* element_class */
	, CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_InterfacesTypeInfos/* implemented_interfaces */
	, CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_il2cpp_TypeInfo/* cast_class */
	, &CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_0_0_0/* byval_arg */
	, &CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_1_0_0/* this_arg */
	, CG_WORLDBOSS_TEAMLIST_REQHandler_t2523_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_WORLDBOSS_TEAMLIST_REQHandler_t2523)/* instance_size */
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
// SPacket.SocketInstance.CG_WULIN_MEMBERLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WULIN_MEMBERLIST.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_WULIN_MEMBERLISTHandler_t2524_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_WULIN_MEMBERLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WULIN_MEMBERLISTMethodDeclarations.h"

// CG_WULIN_MEMBERLIST
#include "AssemblyU2DCSharp_CG_WULIN_MEMBERLIST.h"
extern TypeInfo CG_WULIN_MEMBERLIST_t3499_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_WULIN_MEMBERLISTHandler::.ctor()
extern MethodInfo CG_WULIN_MEMBERLISTHandler__ctor_m15375_MethodInfo;
 void CG_WULIN_MEMBERLISTHandler__ctor_m15375 (CG_WULIN_MEMBERLISTHandler_t2524 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_WULIN_MEMBERLISTHandler::Execute(PacketDistributed)
extern MethodInfo CG_WULIN_MEMBERLISTHandler_Execute_m15376_MethodInfo;
 uint32_t CG_WULIN_MEMBERLISTHandler_Execute_m15376 (CG_WULIN_MEMBERLISTHandler_t2524 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_WULIN_MEMBERLIST_t3499 * V_0 = {0};
	{
		V_0 = ((CG_WULIN_MEMBERLIST_t3499 *)Castclass(___ipacket, InitializedTypeInfo(&CG_WULIN_MEMBERLIST_t3499_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_WULIN_MEMBERLISTHandler
extern TypeInfo CG_WULIN_MEMBERLISTHandler_t2524_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_WULIN_MEMBERLISTHandler::.ctor()
MethodInfo CG_WULIN_MEMBERLISTHandler__ctor_m15375_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_WULIN_MEMBERLISTHandler__ctor_m15375/* method */
	, &CG_WULIN_MEMBERLISTHandler_t2524_il2cpp_TypeInfo/* declaring_type */
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
	, 8851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_WULIN_MEMBERLISTHandler_t2524_CG_WULIN_MEMBERLISTHandler_Execute_m15376_ParameterInfos[] = 
{
	{"ipacket", 0, 134222343, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_WULIN_MEMBERLISTHandler_t2524_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_WULIN_MEMBERLISTHandler::Execute(PacketDistributed)
MethodInfo CG_WULIN_MEMBERLISTHandler_Execute_m15376_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_WULIN_MEMBERLISTHandler_Execute_m15376/* method */
	, &CG_WULIN_MEMBERLISTHandler_t2524_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_WULIN_MEMBERLISTHandler_t2524_CG_WULIN_MEMBERLISTHandler_Execute_m15376_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_WULIN_MEMBERLISTHandler_t2524_MethodInfos[] =
{
	&CG_WULIN_MEMBERLISTHandler__ctor_m15375_MethodInfo,
	&CG_WULIN_MEMBERLISTHandler_Execute_m15376_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_WULIN_MEMBERLISTHandler_Execute_m15376_MethodInfo;
static MethodInfo* CG_WULIN_MEMBERLISTHandler_t2524_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_WULIN_MEMBERLISTHandler_Execute_m15376_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_WULIN_MEMBERLISTHandler_t2524_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_WULIN_MEMBERLISTHandler_t2524_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_WULIN_MEMBERLISTHandler_t2524_0_0_0;
extern Il2CppType CG_WULIN_MEMBERLISTHandler_t2524_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_WULIN_MEMBERLISTHandler_t2524;
extern TypeInfo CG_WULIN_MEMBERLISTHandler_t2524_il2cpp_TypeInfo;
TypeInfo CG_WULIN_MEMBERLISTHandler_t2524_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_WULIN_MEMBERLISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_WULIN_MEMBERLISTHandler_t2524_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_WULIN_MEMBERLISTHandler_t2524_il2cpp_TypeInfo/* element_class */
	, CG_WULIN_MEMBERLISTHandler_t2524_InterfacesTypeInfos/* implemented_interfaces */
	, CG_WULIN_MEMBERLISTHandler_t2524_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_WULIN_MEMBERLISTHandler_t2524_il2cpp_TypeInfo/* cast_class */
	, &CG_WULIN_MEMBERLISTHandler_t2524_0_0_0/* byval_arg */
	, &CG_WULIN_MEMBERLISTHandler_t2524_1_0_0/* this_arg */
	, CG_WULIN_MEMBERLISTHandler_t2524_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_WULIN_MEMBERLISTHandler_t2524)/* instance_size */
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
// SPacket.SocketInstance.CG_WULIN_REGISTERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WULIN_REGISTERHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CG_WULIN_REGISTERHandler_t2525_il2cpp_TypeInfo;
// SPacket.SocketInstance.CG_WULIN_REGISTERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CG_WULIN_REGISTERHaMethodDeclarations.h"

// CG_WULIN_REGISTER
#include "AssemblyU2DCSharp_CG_WULIN_REGISTER.h"
extern TypeInfo CG_WULIN_REGISTER_t3498_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CG_WULIN_REGISTERHandler::.ctor()
extern MethodInfo CG_WULIN_REGISTERHandler__ctor_m15377_MethodInfo;
 void CG_WULIN_REGISTERHandler__ctor_m15377 (CG_WULIN_REGISTERHandler_t2525 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CG_WULIN_REGISTERHandler::Execute(PacketDistributed)
extern MethodInfo CG_WULIN_REGISTERHandler_Execute_m15378_MethodInfo;
 uint32_t CG_WULIN_REGISTERHandler_Execute_m15378 (CG_WULIN_REGISTERHandler_t2525 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CG_WULIN_REGISTER_t3498 * V_0 = {0};
	{
		V_0 = ((CG_WULIN_REGISTER_t3498 *)Castclass(___ipacket, InitializedTypeInfo(&CG_WULIN_REGISTER_t3498_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CG_WULIN_REGISTERHandler
extern TypeInfo CG_WULIN_REGISTERHandler_t2525_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CG_WULIN_REGISTERHandler::.ctor()
MethodInfo CG_WULIN_REGISTERHandler__ctor_m15377_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CG_WULIN_REGISTERHandler__ctor_m15377/* method */
	, &CG_WULIN_REGISTERHandler_t2525_il2cpp_TypeInfo/* declaring_type */
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
	, 8853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CG_WULIN_REGISTERHandler_t2525_CG_WULIN_REGISTERHandler_Execute_m15378_ParameterInfos[] = 
{
	{"ipacket", 0, 134222344, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CG_WULIN_REGISTERHandler_t2525_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CG_WULIN_REGISTERHandler::Execute(PacketDistributed)
MethodInfo CG_WULIN_REGISTERHandler_Execute_m15378_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CG_WULIN_REGISTERHandler_Execute_m15378/* method */
	, &CG_WULIN_REGISTERHandler_t2525_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CG_WULIN_REGISTERHandler_t2525_CG_WULIN_REGISTERHandler_Execute_m15378_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CG_WULIN_REGISTERHandler_t2525_MethodInfos[] =
{
	&CG_WULIN_REGISTERHandler__ctor_m15377_MethodInfo,
	&CG_WULIN_REGISTERHandler_Execute_m15378_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CG_WULIN_REGISTERHandler_Execute_m15378_MethodInfo;
static MethodInfo* CG_WULIN_REGISTERHandler_t2525_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CG_WULIN_REGISTERHandler_Execute_m15378_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CG_WULIN_REGISTERHandler_t2525_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CG_WULIN_REGISTERHandler_t2525_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CG_WULIN_REGISTERHandler_t2525_0_0_0;
extern Il2CppType CG_WULIN_REGISTERHandler_t2525_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CG_WULIN_REGISTERHandler_t2525;
extern TypeInfo CG_WULIN_REGISTERHandler_t2525_il2cpp_TypeInfo;
TypeInfo CG_WULIN_REGISTERHandler_t2525_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CG_WULIN_REGISTERHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CG_WULIN_REGISTERHandler_t2525_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CG_WULIN_REGISTERHandler_t2525_il2cpp_TypeInfo/* element_class */
	, CG_WULIN_REGISTERHandler_t2525_InterfacesTypeInfos/* implemented_interfaces */
	, CG_WULIN_REGISTERHandler_t2525_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CG_WULIN_REGISTERHandler_t2525_il2cpp_TypeInfo/* cast_class */
	, &CG_WULIN_REGISTERHandler_t2525_0_0_0/* byval_arg */
	, &CG_WULIN_REGISTERHandler_t2525_1_0_0/* this_arg */
	, CG_WULIN_REGISTERHandler_t2525_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CG_WULIN_REGISTERHandler_t2525)/* instance_size */
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
// SPacket.SocketInstance.CM_PACKETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CM_PACKETHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CM_PACKETHandler_t2526_il2cpp_TypeInfo;
// SPacket.SocketInstance.CM_PACKETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_CM_PACKETHandlerMethodDeclarations.h"

// CM_PACKET
#include "AssemblyU2DCSharp_CM_PACKET.h"
extern TypeInfo CM_PACKET_t3652_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.CM_PACKETHandler::.ctor()
extern MethodInfo CM_PACKETHandler__ctor_m15379_MethodInfo;
 void CM_PACKETHandler__ctor_m15379 (CM_PACKETHandler_t2526 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.CM_PACKETHandler::Execute(PacketDistributed)
extern MethodInfo CM_PACKETHandler_Execute_m15380_MethodInfo;
 uint32_t CM_PACKETHandler_Execute_m15380 (CM_PACKETHandler_t2526 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	CM_PACKET_t3652 * V_0 = {0};
	{
		V_0 = ((CM_PACKET_t3652 *)Castclass(___ipacket, InitializedTypeInfo(&CM_PACKET_t3652_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.CM_PACKETHandler
extern TypeInfo CM_PACKETHandler_t2526_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.CM_PACKETHandler::.ctor()
MethodInfo CM_PACKETHandler__ctor_m15379_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CM_PACKETHandler__ctor_m15379/* method */
	, &CM_PACKETHandler_t2526_il2cpp_TypeInfo/* declaring_type */
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
	, 8855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo CM_PACKETHandler_t2526_CM_PACKETHandler_Execute_m15380_ParameterInfos[] = 
{
	{"ipacket", 0, 134222345, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo CM_PACKETHandler_t2526_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.CM_PACKETHandler::Execute(PacketDistributed)
MethodInfo CM_PACKETHandler_Execute_m15380_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&CM_PACKETHandler_Execute_m15380/* method */
	, &CM_PACKETHandler_t2526_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, CM_PACKETHandler_t2526_CM_PACKETHandler_Execute_m15380_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CM_PACKETHandler_t2526_MethodInfos[] =
{
	&CM_PACKETHandler__ctor_m15379_MethodInfo,
	&CM_PACKETHandler_Execute_m15380_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CM_PACKETHandler_Execute_m15380_MethodInfo;
static MethodInfo* CM_PACKETHandler_t2526_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CM_PACKETHandler_Execute_m15380_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* CM_PACKETHandler_t2526_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CM_PACKETHandler_t2526_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CM_PACKETHandler_t2526_0_0_0;
extern Il2CppType CM_PACKETHandler_t2526_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CM_PACKETHandler_t2526;
extern TypeInfo CM_PACKETHandler_t2526_il2cpp_TypeInfo;
TypeInfo CM_PACKETHandler_t2526_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CM_PACKETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, CM_PACKETHandler_t2526_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CM_PACKETHandler_t2526_il2cpp_TypeInfo/* element_class */
	, CM_PACKETHandler_t2526_InterfacesTypeInfos/* implemented_interfaces */
	, CM_PACKETHandler_t2526_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CM_PACKETHandler_t2526_il2cpp_TypeInfo/* cast_class */
	, &CM_PACKETHandler_t2526_0_0_0/* byval_arg */
	, &CM_PACKETHandler_t2526_1_0_0/* this_arg */
	, CM_PACKETHandler_t2526_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CM_PACKETHandler_t2526)/* instance_size */
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
// SPacket.SocketInstance.GCLoginRet
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GCLoginRet.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GCLoginRet_t2527_il2cpp_TypeInfo;
// SPacket.SocketInstance.GCLoginRet
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GCLoginRetMethodDeclarations.h"

// MessageID
#include "AssemblyU2DCSharp_MessageID.h"
// SPacket.SocketInstance.GCLoginRetHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GCLoginRetHandler.h"
extern TypeInfo GCLoginRetHandler_t2530_il2cpp_TypeInfo;
// SPacket.SocketInstance.GCLoginRetHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GCLoginRetHandlerMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GCLoginRetHandler__ctor_m15384_MethodInfo;


// System.Void SPacket.SocketInstance.GCLoginRet::.ctor()
extern MethodInfo GCLoginRet__ctor_m15381_MethodInfo;
 void GCLoginRet__ctor_m15381 (GCLoginRet_t2527 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// MessageID SPacket.SocketInstance.GCLoginRet::GetPacketID()
extern MethodInfo GCLoginRet_GetPacketID_m15382_MethodInfo;
 uint16_t GCLoginRet_GetPacketID_m15382 (GCLoginRet_t2527 * __this, MethodInfo* method){
	{
		return (uint16_t)(2);
	}
}
// SPacket.SocketInstance.Ipacket SPacket.SocketInstance.GCLoginRet::CreatePacket()
extern MethodInfo GCLoginRet_CreatePacket_m15383_MethodInfo;
 Object_t * GCLoginRet_CreatePacket_m15383 (GCLoginRet_t2527 * __this, MethodInfo* method){
	{
		GCLoginRetHandler_t2530 * L_0 = (GCLoginRetHandler_t2530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GCLoginRetHandler_t2530_il2cpp_TypeInfo));
		GCLoginRetHandler__ctor_m15384(L_0, /*hidden argument*/&GCLoginRetHandler__ctor_m15384_MethodInfo);
		return L_0;
	}
}
// Metadata Definition SPacket.SocketInstance.GCLoginRet
extern TypeInfo GCLoginRet_t2527_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GCLoginRet::.ctor()
MethodInfo GCLoginRet__ctor_m15381_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GCLoginRet__ctor_m15381/* method */
	, &GCLoginRet_t2527_il2cpp_TypeInfo/* declaring_type */
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
	, 8857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo GCLoginRet_t2527_il2cpp_TypeInfo;
extern Il2CppType MessageID_t2915_0_0_0;
extern void* RuntimeInvoker_MessageID_t2915 (MethodInfo* method, void* obj, void** args);
// MessageID SPacket.SocketInstance.GCLoginRet::GetPacketID()
MethodInfo GCLoginRet_GetPacketID_m15382_MethodInfo = 
{
	"GetPacketID"/* name */
	, (methodPointerType)&GCLoginRet_GetPacketID_m15382/* method */
	, &GCLoginRet_t2527_il2cpp_TypeInfo/* declaring_type */
	, &MessageID_t2915_0_0_0/* return_type */
	, RuntimeInvoker_MessageID_t2915/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo GCLoginRet_t2527_il2cpp_TypeInfo;
extern Il2CppType Ipacket_t2528_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// SPacket.SocketInstance.Ipacket SPacket.SocketInstance.GCLoginRet::CreatePacket()
MethodInfo GCLoginRet_CreatePacket_m15383_MethodInfo = 
{
	"CreatePacket"/* name */
	, (methodPointerType)&GCLoginRet_CreatePacket_m15383/* method */
	, &GCLoginRet_t2527_il2cpp_TypeInfo/* declaring_type */
	, &Ipacket_t2528_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GCLoginRet_t2527_MethodInfos[] =
{
	&GCLoginRet__ctor_m15381_MethodInfo,
	&GCLoginRet_GetPacketID_m15382_MethodInfo,
	&GCLoginRet_CreatePacket_m15383_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GCLoginRet_GetPacketID_m15382_MethodInfo;
static MethodInfo* GCLoginRet_t2527_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GCLoginRet_GetPacketID_m15382_MethodInfo,
};
extern TypeInfo PacketFactory_t4374_il2cpp_TypeInfo;
static TypeInfo* GCLoginRet_t2527_InterfacesTypeInfos[] = 
{
	&PacketFactory_t4374_il2cpp_TypeInfo,
};
extern TypeInfo PacketFactory_t4374_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GCLoginRet_t2527_InterfacesOffsets[] = 
{
	{ &PacketFactory_t4374_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GCLoginRet_t2527_0_0_0;
extern Il2CppType GCLoginRet_t2527_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GCLoginRet_t2527;
extern TypeInfo GCLoginRet_t2527_il2cpp_TypeInfo;
TypeInfo GCLoginRet_t2527_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GCLoginRet"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GCLoginRet_t2527_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GCLoginRet_t2527_il2cpp_TypeInfo/* element_class */
	, GCLoginRet_t2527_InterfacesTypeInfos/* implemented_interfaces */
	, GCLoginRet_t2527_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GCLoginRet_t2527_il2cpp_TypeInfo/* cast_class */
	, &GCLoginRet_t2527_0_0_0/* byval_arg */
	, &GCLoginRet_t2527_1_0_0/* this_arg */
	, GCLoginRet_t2527_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GCLoginRet_t2527)/* instance_size */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.LOGINSTATUS_ID
#include "AssemblyU2DCSharp_SPacket_SocketInstance_LOGINSTATUS_ID.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LOGINSTATUS_ID_t2529_il2cpp_TypeInfo;
// SPacket.SocketInstance.LOGINSTATUS_ID
#include "AssemblyU2DCSharp_SPacket_SocketInstance_LOGINSTATUS_IDMethodDeclarations.h"



// Metadata Definition SPacket.SocketInstance.LOGINSTATUS_ID
extern Il2CppType Int32_t73_0_0_1542;
FieldInfo LOGINSTATUS_ID_t2529____value___FieldInfo = 
{
	"value__"/* name */
	, &Int32_t73_0_0_1542/* type */
	, &LOGINSTATUS_ID_t2529_il2cpp_TypeInfo/* parent */
	, offsetof(LOGINSTATUS_ID_t2529, ___value__) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType LOGINSTATUS_ID_t2529_0_0_32854;
FieldInfo LOGINSTATUS_ID_t2529____RET_PASSWORDERROR_FieldInfo = 
{
	"RET_PASSWORDERROR"/* name */
	, &LOGINSTATUS_ID_t2529_0_0_32854/* type */
	, &LOGINSTATUS_ID_t2529_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType LOGINSTATUS_ID_t2529_0_0_32854;
FieldInfo LOGINSTATUS_ID_t2529____RET_USERNOTEXISTS_FieldInfo = 
{
	"RET_USERNOTEXISTS"/* name */
	, &LOGINSTATUS_ID_t2529_0_0_32854/* type */
	, &LOGINSTATUS_ID_t2529_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType LOGINSTATUS_ID_t2529_0_0_32854;
FieldInfo LOGINSTATUS_ID_t2529____RET_UIDERROR_FieldInfo = 
{
	"RET_UIDERROR"/* name */
	, &LOGINSTATUS_ID_t2529_0_0_32854/* type */
	, &LOGINSTATUS_ID_t2529_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType LOGINSTATUS_ID_t2529_0_0_32854;
FieldInfo LOGINSTATUS_ID_t2529____RET_SUCCESS_FieldInfo = 
{
	"RET_SUCCESS"/* name */
	, &LOGINSTATUS_ID_t2529_0_0_32854/* type */
	, &LOGINSTATUS_ID_t2529_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* LOGINSTATUS_ID_t2529_FieldInfos[] =
{
	&LOGINSTATUS_ID_t2529____value___FieldInfo,
	&LOGINSTATUS_ID_t2529____RET_PASSWORDERROR_FieldInfo,
	&LOGINSTATUS_ID_t2529____RET_USERNOTEXISTS_FieldInfo,
	&LOGINSTATUS_ID_t2529____RET_UIDERROR_FieldInfo,
	&LOGINSTATUS_ID_t2529____RET_SUCCESS_FieldInfo,
	NULL
};
static const int32_t LOGINSTATUS_ID_t2529____RET_PASSWORDERROR_DefaultValueData = -1;
extern Il2CppType Int32_t73_0_0_0;
static Il2CppFieldDefaultValueEntry LOGINSTATUS_ID_t2529____RET_PASSWORDERROR_DefaultValue = 
{
	&LOGINSTATUS_ID_t2529____RET_PASSWORDERROR_FieldInfo/* field */
	, { (char*)&LOGINSTATUS_ID_t2529____RET_PASSWORDERROR_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t LOGINSTATUS_ID_t2529____RET_USERNOTEXISTS_DefaultValueData = -2;
extern Il2CppType Int32_t73_0_0_0;
static Il2CppFieldDefaultValueEntry LOGINSTATUS_ID_t2529____RET_USERNOTEXISTS_DefaultValue = 
{
	&LOGINSTATUS_ID_t2529____RET_USERNOTEXISTS_FieldInfo/* field */
	, { (char*)&LOGINSTATUS_ID_t2529____RET_USERNOTEXISTS_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t LOGINSTATUS_ID_t2529____RET_UIDERROR_DefaultValueData = -3;
extern Il2CppType Int32_t73_0_0_0;
static Il2CppFieldDefaultValueEntry LOGINSTATUS_ID_t2529____RET_UIDERROR_DefaultValue = 
{
	&LOGINSTATUS_ID_t2529____RET_UIDERROR_FieldInfo/* field */
	, { (char*)&LOGINSTATUS_ID_t2529____RET_UIDERROR_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t LOGINSTATUS_ID_t2529____RET_SUCCESS_DefaultValueData = 1;
extern Il2CppType Int32_t73_0_0_0;
static Il2CppFieldDefaultValueEntry LOGINSTATUS_ID_t2529____RET_SUCCESS_DefaultValue = 
{
	&LOGINSTATUS_ID_t2529____RET_SUCCESS_FieldInfo/* field */
	, { (char*)&LOGINSTATUS_ID_t2529____RET_SUCCESS_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* LOGINSTATUS_ID_t2529_FieldDefaultValues[] = 
{
	&LOGINSTATUS_ID_t2529____RET_PASSWORDERROR_DefaultValue,
	&LOGINSTATUS_ID_t2529____RET_USERNOTEXISTS_DefaultValue,
	&LOGINSTATUS_ID_t2529____RET_UIDERROR_DefaultValue,
	&LOGINSTATUS_ID_t2529____RET_SUCCESS_DefaultValue,
	NULL
};
static MethodInfo* LOGINSTATUS_ID_t2529_MethodInfos[] =
{
	NULL
};
extern MethodInfo Enum_Equals_m4040_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Enum_GetHashCode_m4042_MethodInfo;
extern MethodInfo Enum_ToString_m4043_MethodInfo;
extern MethodInfo Enum_ToString_m4044_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToBoolean_m4045_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToByte_m4046_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToChar_m4047_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDateTime_m4048_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDecimal_m4049_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDouble_m4050_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt16_m4051_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt32_m4052_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt64_m4053_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSByte_m4054_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSingle_m4055_MethodInfo;
extern MethodInfo Enum_ToString_m4056_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToType_m4057_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt16_m4058_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt32_m4059_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt64_m4060_MethodInfo;
extern MethodInfo Enum_CompareTo_m4061_MethodInfo;
extern MethodInfo Enum_GetTypeCode_m4062_MethodInfo;
static MethodInfo* LOGINSTATUS_ID_t2529_VTable[] =
{
	&Enum_Equals_m4040_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Enum_GetHashCode_m4042_MethodInfo,
	&Enum_ToString_m4043_MethodInfo,
	&Enum_ToString_m4044_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m4045_MethodInfo,
	&Enum_System_IConvertible_ToByte_m4046_MethodInfo,
	&Enum_System_IConvertible_ToChar_m4047_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m4048_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m4049_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m4050_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m4051_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m4052_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m4053_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m4054_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m4055_MethodInfo,
	&Enum_ToString_m4056_MethodInfo,
	&Enum_System_IConvertible_ToType_m4057_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m4058_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m4059_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m4060_MethodInfo,
	&Enum_CompareTo_m4061_MethodInfo,
	&Enum_GetTypeCode_m4062_MethodInfo,
};
extern TypeInfo IFormattable_t946_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t947_il2cpp_TypeInfo;
extern TypeInfo IComparable_t948_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair LOGINSTATUS_ID_t2529_InterfacesOffsets[] = 
{
	{ &IFormattable_t946_il2cpp_TypeInfo, 4},
	{ &IConvertible_t947_il2cpp_TypeInfo, 5},
	{ &IComparable_t948_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType LOGINSTATUS_ID_t2529_0_0_0;
extern Il2CppType LOGINSTATUS_ID_t2529_1_0_0;
extern TypeInfo Enum_t949_il2cpp_TypeInfo;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
TypeInfo LOGINSTATUS_ID_t2529_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "LOGINSTATUS_ID"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, LOGINSTATUS_ID_t2529_MethodInfos/* methods */
	, NULL/* properties */
	, LOGINSTATUS_ID_t2529_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t949_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t73_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, LOGINSTATUS_ID_t2529_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t73_il2cpp_TypeInfo/* cast_class */
	, &LOGINSTATUS_ID_t2529_0_0_0/* byval_arg */
	, &LOGINSTATUS_ID_t2529_1_0_0/* this_arg */
	, LOGINSTATUS_ID_t2529_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, LOGINSTATUS_ID_t2529_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LOGINSTATUS_ID_t2529)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, true/* enumtype */
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
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GCLoginRetHandler_t2530_il2cpp_TypeInfo;

// GC_LOGIN_RET
#include "AssemblyU2DCSharp_GC_LOGIN_RET.h"
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo GC_LOGIN_RET_t2925_il2cpp_TypeInfo;
extern TypeInfo Console_t5684_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Console
#include "mscorlib_System_ConsoleMethodDeclarations.h"
// GC_LOGIN_RET
#include "AssemblyU2DCSharp_GC_LOGIN_RETMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Console_WriteLine_m40323_MethodInfo;
extern MethodInfo Console_WriteLine_m40321_MethodInfo;
extern MethodInfo GC_LOGIN_RET_get_Result_m16268_MethodInfo;
extern MethodInfo String_Concat_m4072_MethodInfo;


// System.Void SPacket.SocketInstance.GCLoginRetHandler::.ctor()
extern MethodInfo GCLoginRetHandler__ctor_m15384_MethodInfo;
 void GCLoginRetHandler__ctor_m15384 (GCLoginRetHandler_t2530 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GCLoginRetHandler::Execute(PacketDistributed)
extern MethodInfo GCLoginRetHandler_Execute_m15385_MethodInfo;
 uint32_t GCLoginRetHandler_Execute_m15385 (GCLoginRetHandler_t2530 * __this, PacketDistributed_t2209 * ___packet, MethodInfo* method){
	GC_LOGIN_RET_t2925 * V_0 = {0};
	{
		V_0 = ((GC_LOGIN_RET_t2925 *)Castclass(___packet, InitializedTypeInfo(&GC_LOGIN_RET_t2925_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Console_t5684_il2cpp_TypeInfo));
		Console_WriteLine_m40323(NULL /*static, unused*/, /*hidden argument*/&Console_WriteLine_m40323_MethodInfo);
		Console_WriteLine_m40321(NULL /*static, unused*/, (String_t*) &_stringLiteral2779, /*hidden argument*/&Console_WriteLine_m40321_MethodInfo);
		NullCheck(V_0);
		int32_t L_0 = GC_LOGIN_RET_get_Result_m16268(V_0, /*hidden argument*/&GC_LOGIN_RET_get_Result_m16268_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m4072(NULL /*static, unused*/, (String_t*) &_stringLiteral2780, L_2, /*hidden argument*/&String_Concat_m4072_MethodInfo);
		Console_WriteLine_m40321(NULL /*static, unused*/, L_3, /*hidden argument*/&Console_WriteLine_m40321_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GCLoginRetHandler
extern TypeInfo GCLoginRetHandler_t2530_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GCLoginRetHandler::.ctor()
MethodInfo GCLoginRetHandler__ctor_m15384_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GCLoginRetHandler__ctor_m15384/* method */
	, &GCLoginRetHandler_t2530_il2cpp_TypeInfo/* declaring_type */
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
	, 8860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GCLoginRetHandler_t2530_GCLoginRetHandler_Execute_m15385_ParameterInfos[] = 
{
	{"packet", 0, 134222346, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GCLoginRetHandler_t2530_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GCLoginRetHandler::Execute(PacketDistributed)
MethodInfo GCLoginRetHandler_Execute_m15385_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GCLoginRetHandler_Execute_m15385/* method */
	, &GCLoginRetHandler_t2530_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GCLoginRetHandler_t2530_GCLoginRetHandler_Execute_m15385_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GCLoginRetHandler_t2530_MethodInfos[] =
{
	&GCLoginRetHandler__ctor_m15384_MethodInfo,
	&GCLoginRetHandler_Execute_m15385_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GCLoginRetHandler_Execute_m15385_MethodInfo;
static MethodInfo* GCLoginRetHandler_t2530_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GCLoginRetHandler_Execute_m15385_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GCLoginRetHandler_t2530_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GCLoginRetHandler_t2530_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GCLoginRetHandler_t2530_0_0_0;
extern Il2CppType GCLoginRetHandler_t2530_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GCLoginRetHandler_t2530;
extern TypeInfo GCLoginRetHandler_t2530_il2cpp_TypeInfo;
TypeInfo GCLoginRetHandler_t2530_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GCLoginRetHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GCLoginRetHandler_t2530_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GCLoginRetHandler_t2530_il2cpp_TypeInfo/* element_class */
	, GCLoginRetHandler_t2530_InterfacesTypeInfos/* implemented_interfaces */
	, GCLoginRetHandler_t2530_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GCLoginRetHandler_t2530_il2cpp_TypeInfo/* cast_class */
	, &GCLoginRetHandler_t2530_0_0_0/* byval_arg */
	, &GCLoginRetHandler_t2530_1_0_0/* this_arg */
	, GCLoginRetHandler_t2530_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GCLoginRetHandler_t2530)/* instance_size */
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
// SPacket.SocketInstance.GC_ABANDONMISSION_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ABANDONMISSION_R.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ABANDONMISSION_RETHandler_t2531_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ABANDONMISSION_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ABANDONMISSION_RMethodDeclarations.h"

// GC_ABANDONMISSION_RET
#include "AssemblyU2DCSharp_GC_ABANDONMISSION_RET.h"
// GameManager
#include "AssemblyU2DCSharp_GameManager.h"
// Games.Mission.MissionManager
#include "AssemblyU2DCSharp_Games_Mission_MissionManager.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo GC_ABANDONMISSION_RET_t2940_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
// GC_ABANDONMISSION_RET
#include "AssemblyU2DCSharp_GC_ABANDONMISSION_RETMethodDeclarations.h"
// GameManager
#include "AssemblyU2DCSharp_GameManagerMethodDeclarations.h"
// Games.Mission.MissionManager
#include "AssemblyU2DCSharp_Games_Mission_MissionManagerMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_ABANDONMISSION_RET_get_MissionID_m16438_MethodInfo;
extern MethodInfo GC_ABANDONMISSION_RET_get_Ret_m16442_MethodInfo;
extern MethodInfo GameManager_get_MissionManager_m14614_MethodInfo;
extern MethodInfo MissionManager_AbandonMissionOver_m33971_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ABANDONMISSION_RETHandler::.ctor()
extern MethodInfo GC_ABANDONMISSION_RETHandler__ctor_m15386_MethodInfo;
 void GC_ABANDONMISSION_RETHandler__ctor_m15386 (GC_ABANDONMISSION_RETHandler_t2531 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ABANDONMISSION_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_ABANDONMISSION_RETHandler_Execute_m15387_MethodInfo;
 uint32_t GC_ABANDONMISSION_RETHandler_Execute_m15387 (GC_ABANDONMISSION_RETHandler_t2531 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ABANDONMISSION_RET_t2940 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((GC_ABANDONMISSION_RET_t2940 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ABANDONMISSION_RET_t2940_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_ABANDONMISSION_RET_get_MissionID_m16438(V_0, /*hidden argument*/&GC_ABANDONMISSION_RET_get_MissionID_m16438_MethodInfo);
		V_1 = L_0;
		NullCheck(V_0);
		int32_t L_1 = GC_ABANDONMISSION_RET_get_Ret_m16442(V_0, /*hidden argument*/&GC_ABANDONMISSION_RET_get_Ret_m16442_MethodInfo);
		V_2 = L_1;
		if ((((uint32_t)V_2) != ((uint32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		MissionManager_t1565 * L_2 = GameManager_get_MissionManager_m14614((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_MissionManager_m14614_MethodInfo);
		NullCheck(L_2);
		MissionManager_AbandonMissionOver_m33971(L_2, V_1, /*hidden argument*/&MissionManager_AbandonMissionOver_m33971_MethodInfo);
	}

IL_0035:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ABANDONMISSION_RETHandler
extern TypeInfo GC_ABANDONMISSION_RETHandler_t2531_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ABANDONMISSION_RETHandler::.ctor()
MethodInfo GC_ABANDONMISSION_RETHandler__ctor_m15386_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ABANDONMISSION_RETHandler__ctor_m15386/* method */
	, &GC_ABANDONMISSION_RETHandler_t2531_il2cpp_TypeInfo/* declaring_type */
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
	, 8862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ABANDONMISSION_RETHandler_t2531_GC_ABANDONMISSION_RETHandler_Execute_m15387_ParameterInfos[] = 
{
	{"ipacket", 0, 134222347, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ABANDONMISSION_RETHandler_t2531_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ABANDONMISSION_RETHandler::Execute(PacketDistributed)
MethodInfo GC_ABANDONMISSION_RETHandler_Execute_m15387_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ABANDONMISSION_RETHandler_Execute_m15387/* method */
	, &GC_ABANDONMISSION_RETHandler_t2531_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ABANDONMISSION_RETHandler_t2531_GC_ABANDONMISSION_RETHandler_Execute_m15387_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ABANDONMISSION_RETHandler_t2531_MethodInfos[] =
{
	&GC_ABANDONMISSION_RETHandler__ctor_m15386_MethodInfo,
	&GC_ABANDONMISSION_RETHandler_Execute_m15387_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ABANDONMISSION_RETHandler_Execute_m15387_MethodInfo;
static MethodInfo* GC_ABANDONMISSION_RETHandler_t2531_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ABANDONMISSION_RETHandler_Execute_m15387_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ABANDONMISSION_RETHandler_t2531_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ABANDONMISSION_RETHandler_t2531_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ABANDONMISSION_RETHandler_t2531_0_0_0;
extern Il2CppType GC_ABANDONMISSION_RETHandler_t2531_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ABANDONMISSION_RETHandler_t2531;
extern TypeInfo GC_ABANDONMISSION_RETHandler_t2531_il2cpp_TypeInfo;
TypeInfo GC_ABANDONMISSION_RETHandler_t2531_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ABANDONMISSION_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ABANDONMISSION_RETHandler_t2531_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ABANDONMISSION_RETHandler_t2531_il2cpp_TypeInfo/* element_class */
	, GC_ABANDONMISSION_RETHandler_t2531_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ABANDONMISSION_RETHandler_t2531_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ABANDONMISSION_RETHandler_t2531_il2cpp_TypeInfo/* cast_class */
	, &GC_ABANDONMISSION_RETHandler_t2531_0_0_0/* byval_arg */
	, &GC_ABANDONMISSION_RETHandler_t2531_1_0_0/* this_arg */
	, GC_ABANDONMISSION_RETHandler_t2531_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ABANDONMISSION_RETHandler_t2531)/* instance_size */
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
// SPacket.SocketInstance.GC_ACCEPTMISSION_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ACCEPTMISSION_RE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ACCEPTMISSION_RETHandler_t2532_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ACCEPTMISSION_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ACCEPTMISSION_REMethodDeclarations.h"

// GC_ACCEPTMISSION_RET
#include "AssemblyU2DCSharp_GC_ACCEPTMISSION_RET.h"
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo GC_ACCEPTMISSION_RET_t2936_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
// GC_ACCEPTMISSION_RET
#include "AssemblyU2DCSharp_GC_ACCEPTMISSION_RETMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_ACCEPTMISSION_RET_get_MissionID_m16390_MethodInfo;
extern MethodInfo GC_ACCEPTMISSION_RET_get_QualityType_m16394_MethodInfo;
extern MethodInfo GC_ACCEPTMISSION_RET_get_Ret_m16398_MethodInfo;
extern MethodInfo GameManager_get_MissionManager_m14614_MethodInfo;
extern MethodInfo MissionManager_AddMissionToUser_m33967_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ACCEPTMISSION_RETHandler::.ctor()
extern MethodInfo GC_ACCEPTMISSION_RETHandler__ctor_m15388_MethodInfo;
 void GC_ACCEPTMISSION_RETHandler__ctor_m15388 (GC_ACCEPTMISSION_RETHandler_t2532 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ACCEPTMISSION_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_ACCEPTMISSION_RETHandler_Execute_m15389_MethodInfo;
 uint32_t GC_ACCEPTMISSION_RETHandler_Execute_m15389 (GC_ACCEPTMISSION_RETHandler_t2532 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ACCEPTMISSION_RET_t2936 * V_0 = {0};
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	{
		V_0 = ((GC_ACCEPTMISSION_RET_t2936 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ACCEPTMISSION_RET_t2936_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_ACCEPTMISSION_RET_get_MissionID_m16390(V_0, /*hidden argument*/&GC_ACCEPTMISSION_RET_get_MissionID_m16390_MethodInfo);
		V_1 = L_0;
		NullCheck(V_0);
		int32_t L_1 = GC_ACCEPTMISSION_RET_get_QualityType_m16394(V_0, /*hidden argument*/&GC_ACCEPTMISSION_RET_get_QualityType_m16394_MethodInfo);
		V_2 = (((uint8_t)L_1));
		NullCheck(V_0);
		int32_t L_2 = GC_ACCEPTMISSION_RET_get_Ret_m16398(V_0, /*hidden argument*/&GC_ACCEPTMISSION_RET_get_Ret_m16398_MethodInfo);
		V_3 = L_2;
		if ((((uint32_t)V_3) != ((uint32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		MissionManager_t1565 * L_3 = GameManager_get_MissionManager_m14614((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_MissionManager_m14614_MethodInfo);
		NullCheck(L_3);
		MissionManager_AddMissionToUser_m33967(L_3, V_1, V_2, /*hidden argument*/&MissionManager_AddMissionToUser_m33967_MethodInfo);
	}

IL_003e:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ACCEPTMISSION_RETHandler
extern TypeInfo GC_ACCEPTMISSION_RETHandler_t2532_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ACCEPTMISSION_RETHandler::.ctor()
MethodInfo GC_ACCEPTMISSION_RETHandler__ctor_m15388_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ACCEPTMISSION_RETHandler__ctor_m15388/* method */
	, &GC_ACCEPTMISSION_RETHandler_t2532_il2cpp_TypeInfo/* declaring_type */
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
	, 8864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ACCEPTMISSION_RETHandler_t2532_GC_ACCEPTMISSION_RETHandler_Execute_m15389_ParameterInfos[] = 
{
	{"ipacket", 0, 134222348, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ACCEPTMISSION_RETHandler_t2532_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ACCEPTMISSION_RETHandler::Execute(PacketDistributed)
MethodInfo GC_ACCEPTMISSION_RETHandler_Execute_m15389_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ACCEPTMISSION_RETHandler_Execute_m15389/* method */
	, &GC_ACCEPTMISSION_RETHandler_t2532_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ACCEPTMISSION_RETHandler_t2532_GC_ACCEPTMISSION_RETHandler_Execute_m15389_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ACCEPTMISSION_RETHandler_t2532_MethodInfos[] =
{
	&GC_ACCEPTMISSION_RETHandler__ctor_m15388_MethodInfo,
	&GC_ACCEPTMISSION_RETHandler_Execute_m15389_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ACCEPTMISSION_RETHandler_Execute_m15389_MethodInfo;
static MethodInfo* GC_ACCEPTMISSION_RETHandler_t2532_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ACCEPTMISSION_RETHandler_Execute_m15389_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ACCEPTMISSION_RETHandler_t2532_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ACCEPTMISSION_RETHandler_t2532_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ACCEPTMISSION_RETHandler_t2532_0_0_0;
extern Il2CppType GC_ACCEPTMISSION_RETHandler_t2532_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ACCEPTMISSION_RETHandler_t2532;
extern TypeInfo GC_ACCEPTMISSION_RETHandler_t2532_il2cpp_TypeInfo;
TypeInfo GC_ACCEPTMISSION_RETHandler_t2532_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ACCEPTMISSION_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ACCEPTMISSION_RETHandler_t2532_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ACCEPTMISSION_RETHandler_t2532_il2cpp_TypeInfo/* element_class */
	, GC_ACCEPTMISSION_RETHandler_t2532_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ACCEPTMISSION_RETHandler_t2532_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ACCEPTMISSION_RETHandler_t2532_il2cpp_TypeInfo/* cast_class */
	, &GC_ACCEPTMISSION_RETHandler_t2532_0_0_0/* byval_arg */
	, &GC_ACCEPTMISSION_RETHandler_t2532_1_0_0/* this_arg */
	, GC_ACCEPTMISSION_RETHandler_t2532_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ACCEPTMISSION_RETHandler_t2532)/* instance_size */
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
// SPacket.SocketInstance.GC_ACTIVE_TITLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ACTIVE_TITLEHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ACTIVE_TITLEHandler_t2533_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ACTIVE_TITLEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ACTIVE_TITLEHandMethodDeclarations.h"

// GC_ACTIVE_TITLE
#include "AssemblyU2DCSharp_GC_ACTIVE_TITLE.h"
// PlayerData
#include "AssemblyU2DCSharp_PlayerData.h"
// Games.TitleInvestitive.GameTitleInvestitive
#include "AssemblyU2DCSharp_Games_TitleInvestitive_GameTitleInvestitiv.h"
// ObjManager
#include "AssemblyU2DCSharp_ObjManager.h"
// Games.LogicObj.Obj_MainPlayer
#include "AssemblyU2DCSharp_Games_LogicObj_Obj_MainPlayer.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// TitleInvestitiveLogic
#include "AssemblyU2DCSharp_TitleInvestitiveLogic.h"
extern TypeInfo GC_ACTIVE_TITLE_t3007_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo TitleInvestitiveLogic_t1779_il2cpp_TypeInfo;
// GC_ACTIVE_TITLE
#include "AssemblyU2DCSharp_GC_ACTIVE_TITLEMethodDeclarations.h"
// PlayerData
#include "AssemblyU2DCSharp_PlayerDataMethodDeclarations.h"
// Games.TitleInvestitive.GameTitleInvestitive
#include "AssemblyU2DCSharp_Games_TitleInvestitive_GameTitleInvestitivMethodDeclarations.h"
// Singleton`1<ObjManager>
#include "AssemblyU2DCSharp_Singleton_1_gen_0MethodDeclarations.h"
// ObjManager
#include "AssemblyU2DCSharp_ObjManagerMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// Games.LogicObj.Obj_MainPlayer
#include "AssemblyU2DCSharp_Games_LogicObj_Obj_MainPlayerMethodDeclarations.h"
// TitleInvestitiveLogic
#include "AssemblyU2DCSharp_TitleInvestitiveLogicMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_ACTIVE_TITLE_get_TitleIndex_m17924_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_TitleInvestitive_m35111_MethodInfo;
extern MethodInfo GameTitleInvestitive_ChangeTitle_m34448_MethodInfo;
extern MethodInfo Singleton_1_get_Instance_m39004_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Object_op_Implicit_m4087_MethodInfo;
extern MethodInfo Obj_MainPlayer_ShowPlayerTitleInvestitive_m31680_MethodInfo;
extern MethodInfo TitleInvestitiveLogic_Instance_m11781_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo TitleInvestitiveLogic_HandleActiveTitle_m11794_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ACTIVE_TITLEHandler::.ctor()
extern MethodInfo GC_ACTIVE_TITLEHandler__ctor_m15390_MethodInfo;
 void GC_ACTIVE_TITLEHandler__ctor_m15390 (GC_ACTIVE_TITLEHandler_t2533 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ACTIVE_TITLEHandler::Execute(PacketDistributed)
extern MethodInfo GC_ACTIVE_TITLEHandler_Execute_m15391_MethodInfo;
 uint32_t GC_ACTIVE_TITLEHandler_Execute_m15391 (GC_ACTIVE_TITLEHandler_t2533 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ACTIVE_TITLE_t3007 * V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = ((GC_ACTIVE_TITLE_t3007 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ACTIVE_TITLE_t3007_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_ACTIVE_TITLE_get_TitleIndex_m17924(V_0, /*hidden argument*/&GC_ACTIVE_TITLE_get_TitleIndex_m17924_MethodInfo);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_1 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_1);
		GameTitleInvestitive_t4841 * L_2 = PlayerData_get_TitleInvestitive_m35111(L_1, /*hidden argument*/&PlayerData_get_TitleInvestitive_m35111_MethodInfo);
		NullCheck(L_2);
		GameTitleInvestitive_ChangeTitle_m34448(L_2, V_1, /*hidden argument*/&GameTitleInvestitive_ChangeTitle_m34448_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_3 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_3);
		Obj_MainPlayer_t1732 * L_4 = ObjManager_get_MainPlayer_m31308(L_3, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		bool L_5 = Object_op_Implicit_m4087(NULL /*static, unused*/, L_4, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_6 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_6);
		Obj_MainPlayer_t1732 * L_7 = ObjManager_get_MainPlayer_m31308(L_6, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_7);
		Obj_MainPlayer_ShowPlayerTitleInvestitive_m31680(L_7, /*hidden argument*/&Obj_MainPlayer_ShowPlayerTitleInvestitive_m31680_MethodInfo);
	}

IL_004f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TitleInvestitiveLogic_t1779_il2cpp_TypeInfo));
		TitleInvestitiveLogic_t1779 * L_8 = TitleInvestitiveLogic_Instance_m11781(NULL /*static, unused*/, /*hidden argument*/&TitleInvestitiveLogic_Instance_m11781_MethodInfo);
		bool L_9 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_8, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TitleInvestitiveLogic_t1779_il2cpp_TypeInfo));
		TitleInvestitiveLogic_t1779 * L_10 = TitleInvestitiveLogic_Instance_m11781(NULL /*static, unused*/, /*hidden argument*/&TitleInvestitiveLogic_Instance_m11781_MethodInfo);
		NullCheck(L_10);
		TitleInvestitiveLogic_HandleActiveTitle_m11794(L_10, /*hidden argument*/&TitleInvestitiveLogic_HandleActiveTitle_m11794_MethodInfo);
	}

IL_0069:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ACTIVE_TITLEHandler
extern TypeInfo GC_ACTIVE_TITLEHandler_t2533_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ACTIVE_TITLEHandler::.ctor()
MethodInfo GC_ACTIVE_TITLEHandler__ctor_m15390_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ACTIVE_TITLEHandler__ctor_m15390/* method */
	, &GC_ACTIVE_TITLEHandler_t2533_il2cpp_TypeInfo/* declaring_type */
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
	, 8866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ACTIVE_TITLEHandler_t2533_GC_ACTIVE_TITLEHandler_Execute_m15391_ParameterInfos[] = 
{
	{"ipacket", 0, 134222349, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ACTIVE_TITLEHandler_t2533_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ACTIVE_TITLEHandler::Execute(PacketDistributed)
MethodInfo GC_ACTIVE_TITLEHandler_Execute_m15391_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ACTIVE_TITLEHandler_Execute_m15391/* method */
	, &GC_ACTIVE_TITLEHandler_t2533_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ACTIVE_TITLEHandler_t2533_GC_ACTIVE_TITLEHandler_Execute_m15391_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ACTIVE_TITLEHandler_t2533_MethodInfos[] =
{
	&GC_ACTIVE_TITLEHandler__ctor_m15390_MethodInfo,
	&GC_ACTIVE_TITLEHandler_Execute_m15391_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ACTIVE_TITLEHandler_Execute_m15391_MethodInfo;
static MethodInfo* GC_ACTIVE_TITLEHandler_t2533_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ACTIVE_TITLEHandler_Execute_m15391_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ACTIVE_TITLEHandler_t2533_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ACTIVE_TITLEHandler_t2533_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ACTIVE_TITLEHandler_t2533_0_0_0;
extern Il2CppType GC_ACTIVE_TITLEHandler_t2533_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ACTIVE_TITLEHandler_t2533;
extern TypeInfo GC_ACTIVE_TITLEHandler_t2533_il2cpp_TypeInfo;
TypeInfo GC_ACTIVE_TITLEHandler_t2533_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ACTIVE_TITLEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ACTIVE_TITLEHandler_t2533_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ACTIVE_TITLEHandler_t2533_il2cpp_TypeInfo/* element_class */
	, GC_ACTIVE_TITLEHandler_t2533_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ACTIVE_TITLEHandler_t2533_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ACTIVE_TITLEHandler_t2533_il2cpp_TypeInfo/* cast_class */
	, &GC_ACTIVE_TITLEHandler_t2533_0_0_0/* byval_arg */
	, &GC_ACTIVE_TITLEHandler_t2533_1_0_0/* this_arg */
	, GC_ACTIVE_TITLEHandler_t2533_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ACTIVE_TITLEHandler_t2533)/* instance_size */
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
// SPacket.SocketInstance.GC_ACTIVITYNOTICEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ACTIVITYNOTICEHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ACTIVITYNOTICEHandler_t2534_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ACTIVITYNOTICEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ACTIVITYNOTICEHaMethodDeclarations.h"

// GC_ACTIVITYNOTICE
#include "AssemblyU2DCSharp_GC_ACTIVITYNOTICE.h"
// RollNotice
#include "AssemblyU2DCSharp_RollNotice.h"
extern TypeInfo GC_ACTIVITYNOTICE_t3335_il2cpp_TypeInfo;
// RollNotice
#include "AssemblyU2DCSharp_RollNoticeMethodDeclarations.h"
// GC_ACTIVITYNOTICE
#include "AssemblyU2DCSharp_GC_ACTIVITYNOTICEMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo RollNotice_Instance_m11104_MethodInfo;
extern MethodInfo Object_op_Implicit_m4087_MethodInfo;
extern MethodInfo GC_ACTIVITYNOTICE_get_HasStrNotice_m23763_MethodInfo;
extern MethodInfo GC_ACTIVITYNOTICE_get_StrNotice_m23764_MethodInfo;
extern MethodInfo RollNotice_AddRollNotice_m11105_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ACTIVITYNOTICEHandler::.ctor()
extern MethodInfo GC_ACTIVITYNOTICEHandler__ctor_m15392_MethodInfo;
 void GC_ACTIVITYNOTICEHandler__ctor_m15392 (GC_ACTIVITYNOTICEHandler_t2534 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ACTIVITYNOTICEHandler::Execute(PacketDistributed)
extern MethodInfo GC_ACTIVITYNOTICEHandler_Execute_m15393_MethodInfo;
 uint32_t GC_ACTIVITYNOTICEHandler_Execute_m15393 (GC_ACTIVITYNOTICEHandler_t2534 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ACTIVITYNOTICE_t3335 * V_0 = {0};
	{
		V_0 = ((GC_ACTIVITYNOTICE_t3335 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ACTIVITYNOTICE_t3335_il2cpp_TypeInfo)));
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
		RollNotice_t1704 * L_0 = RollNotice_Instance_m11104(NULL /*static, unused*/, /*hidden argument*/&RollNotice_Instance_m11104_MethodInfo);
		bool L_1 = Object_op_Implicit_m4087(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		NullCheck(V_0);
		bool L_2 = GC_ACTIVITYNOTICE_get_HasStrNotice_m23763(V_0, /*hidden argument*/&GC_ACTIVITYNOTICE_get_HasStrNotice_m23763_MethodInfo);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		RollNotice_t1704 * L_3 = RollNotice_Instance_m11104(NULL /*static, unused*/, /*hidden argument*/&RollNotice_Instance_m11104_MethodInfo);
		NullCheck(V_0);
		String_t* L_4 = GC_ACTIVITYNOTICE_get_StrNotice_m23764(V_0, /*hidden argument*/&GC_ACTIVITYNOTICE_get_StrNotice_m23764_MethodInfo);
		NullCheck(L_3);
		RollNotice_AddRollNotice_m11105(L_3, L_4, /*hidden argument*/&RollNotice_AddRollNotice_m11105_MethodInfo);
	}

IL_0039:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ACTIVITYNOTICEHandler
extern TypeInfo GC_ACTIVITYNOTICEHandler_t2534_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ACTIVITYNOTICEHandler::.ctor()
MethodInfo GC_ACTIVITYNOTICEHandler__ctor_m15392_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ACTIVITYNOTICEHandler__ctor_m15392/* method */
	, &GC_ACTIVITYNOTICEHandler_t2534_il2cpp_TypeInfo/* declaring_type */
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
	, 8868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ACTIVITYNOTICEHandler_t2534_GC_ACTIVITYNOTICEHandler_Execute_m15393_ParameterInfos[] = 
{
	{"ipacket", 0, 134222350, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ACTIVITYNOTICEHandler_t2534_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ACTIVITYNOTICEHandler::Execute(PacketDistributed)
MethodInfo GC_ACTIVITYNOTICEHandler_Execute_m15393_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ACTIVITYNOTICEHandler_Execute_m15393/* method */
	, &GC_ACTIVITYNOTICEHandler_t2534_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ACTIVITYNOTICEHandler_t2534_GC_ACTIVITYNOTICEHandler_Execute_m15393_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ACTIVITYNOTICEHandler_t2534_MethodInfos[] =
{
	&GC_ACTIVITYNOTICEHandler__ctor_m15392_MethodInfo,
	&GC_ACTIVITYNOTICEHandler_Execute_m15393_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ACTIVITYNOTICEHandler_Execute_m15393_MethodInfo;
static MethodInfo* GC_ACTIVITYNOTICEHandler_t2534_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ACTIVITYNOTICEHandler_Execute_m15393_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ACTIVITYNOTICEHandler_t2534_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ACTIVITYNOTICEHandler_t2534_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ACTIVITYNOTICEHandler_t2534_0_0_0;
extern Il2CppType GC_ACTIVITYNOTICEHandler_t2534_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ACTIVITYNOTICEHandler_t2534;
extern TypeInfo GC_ACTIVITYNOTICEHandler_t2534_il2cpp_TypeInfo;
TypeInfo GC_ACTIVITYNOTICEHandler_t2534_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ACTIVITYNOTICEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ACTIVITYNOTICEHandler_t2534_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ACTIVITYNOTICEHandler_t2534_il2cpp_TypeInfo/* element_class */
	, GC_ACTIVITYNOTICEHandler_t2534_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ACTIVITYNOTICEHandler_t2534_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ACTIVITYNOTICEHandler_t2534_il2cpp_TypeInfo/* cast_class */
	, &GC_ACTIVITYNOTICEHandler_t2534_0_0_0/* byval_arg */
	, &GC_ACTIVITYNOTICEHandler_t2534_1_0_0/* this_arg */
	, GC_ACTIVITYNOTICEHandler_t2534_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ACTIVITYNOTICEHandler_t2534)/* instance_size */
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
// SPacket.SocketInstance.GC_ADDBLACKLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADDBLACKLISTHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ADDBLACKLISTHandler_t2535_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ADDBLACKLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADDBLACKLISTHandMethodDeclarations.h"

// GC_ADDBLACKLIST
#include "AssemblyU2DCSharp_GC_ADDBLACKLIST.h"
// Relation
#include "AssemblyU2DCSharp_Relation.h"
// RelationList
#include "AssemblyU2DCSharp_RelationList.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo GC_ADDBLACKLIST_t3037_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo Relation_t1442_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
// Relation
#include "AssemblyU2DCSharp_RelationMethodDeclarations.h"
// GC_ADDBLACKLIST
#include "AssemblyU2DCSharp_GC_ADDBLACKLISTMethodDeclarations.h"
// RelationList
#include "AssemblyU2DCSharp_RelationListMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_BlackList_m35131_MethodInfo;
extern MethodInfo Relation__ctor_m34165_MethodInfo;
extern MethodInfo GC_ADDBLACKLIST_get_Guid_m18445_MethodInfo;
extern MethodInfo Relation_set_Guid_m34167_MethodInfo;
extern MethodInfo GC_ADDBLACKLIST_get_Name_m18449_MethodInfo;
extern MethodInfo Relation_set_Name_m34169_MethodInfo;
extern MethodInfo GC_ADDBLACKLIST_get_Level_m18453_MethodInfo;
extern MethodInfo Relation_set_Level_m34171_MethodInfo;
extern MethodInfo GC_ADDBLACKLIST_get_Prof_m18457_MethodInfo;
extern MethodInfo Relation_set_Profession_m34173_MethodInfo;
extern MethodInfo GC_ADDBLACKLIST_get_Combat_m18461_MethodInfo;
extern MethodInfo Relation_set_CombatNum_m34175_MethodInfo;
extern MethodInfo GC_ADDBLACKLIST_get_State_m18465_MethodInfo;
extern MethodInfo Relation_set_State_m34177_MethodInfo;
extern MethodInfo GC_ADDBLACKLIST_get_TimeInfo_m18469_MethodInfo;
extern MethodInfo Relation_set_TimeInfo_m34180_MethodInfo;
extern MethodInfo RelationList_AddRelation_m34185_MethodInfo;
extern MethodInfo Singleton_1_get_Instance_m39004_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo Obj_MainPlayer_SendNoticMsg_m31723_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ADDBLACKLISTHandler::.ctor()
extern MethodInfo GC_ADDBLACKLISTHandler__ctor_m15394_MethodInfo;
 void GC_ADDBLACKLISTHandler__ctor_m15394 (GC_ADDBLACKLISTHandler_t2535 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ADDBLACKLISTHandler::Execute(PacketDistributed)
extern MethodInfo GC_ADDBLACKLISTHandler_Execute_m15395_MethodInfo;
 uint32_t GC_ADDBLACKLISTHandler_Execute_m15395 (GC_ADDBLACKLISTHandler_t2535 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ADDBLACKLIST_t3037 * V_0 = {0};
	Relation_t1442 * V_1 = {0};
	{
		V_0 = ((GC_ADDBLACKLIST_t3037 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ADDBLACKLIST_t3037_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_0);
		RelationList_t4805 * L_1 = PlayerData_get_BlackList_m35131(L_0, /*hidden argument*/&PlayerData_get_BlackList_m35131_MethodInfo);
		if (!L_1)
		{
			goto IL_00c7;
		}
	}
	{
		Relation_t1442 * L_2 = (Relation_t1442 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Relation_t1442_il2cpp_TypeInfo));
		Relation__ctor_m34165(L_2, /*hidden argument*/&Relation__ctor_m34165_MethodInfo);
		V_1 = L_2;
		NullCheck(V_0);
		uint64_t L_3 = GC_ADDBLACKLIST_get_Guid_m18445(V_0, /*hidden argument*/&GC_ADDBLACKLIST_get_Guid_m18445_MethodInfo);
		NullCheck(V_1);
		Relation_set_Guid_m34167(V_1, L_3, /*hidden argument*/&Relation_set_Guid_m34167_MethodInfo);
		NullCheck(V_0);
		String_t* L_4 = GC_ADDBLACKLIST_get_Name_m18449(V_0, /*hidden argument*/&GC_ADDBLACKLIST_get_Name_m18449_MethodInfo);
		NullCheck(V_1);
		Relation_set_Name_m34169(V_1, L_4, /*hidden argument*/&Relation_set_Name_m34169_MethodInfo);
		NullCheck(V_0);
		int32_t L_5 = GC_ADDBLACKLIST_get_Level_m18453(V_0, /*hidden argument*/&GC_ADDBLACKLIST_get_Level_m18453_MethodInfo);
		NullCheck(V_1);
		Relation_set_Level_m34171(V_1, L_5, /*hidden argument*/&Relation_set_Level_m34171_MethodInfo);
		NullCheck(V_0);
		int32_t L_6 = GC_ADDBLACKLIST_get_Prof_m18457(V_0, /*hidden argument*/&GC_ADDBLACKLIST_get_Prof_m18457_MethodInfo);
		NullCheck(V_1);
		Relation_set_Profession_m34173(V_1, L_6, /*hidden argument*/&Relation_set_Profession_m34173_MethodInfo);
		NullCheck(V_0);
		int32_t L_7 = GC_ADDBLACKLIST_get_Combat_m18461(V_0, /*hidden argument*/&GC_ADDBLACKLIST_get_Combat_m18461_MethodInfo);
		NullCheck(V_1);
		Relation_set_CombatNum_m34175(V_1, L_7, /*hidden argument*/&Relation_set_CombatNum_m34175_MethodInfo);
		NullCheck(V_0);
		int32_t L_8 = GC_ADDBLACKLIST_get_State_m18465(V_0, /*hidden argument*/&GC_ADDBLACKLIST_get_State_m18465_MethodInfo);
		NullCheck(V_1);
		Relation_set_State_m34177(V_1, L_8, /*hidden argument*/&Relation_set_State_m34177_MethodInfo);
		NullCheck(V_0);
		uint32_t L_9 = GC_ADDBLACKLIST_get_TimeInfo_m18469(V_0, /*hidden argument*/&GC_ADDBLACKLIST_get_TimeInfo_m18469_MethodInfo);
		NullCheck(V_1);
		Relation_set_TimeInfo_m34180(V_1, L_9, /*hidden argument*/&Relation_set_TimeInfo_m34180_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_10 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_10);
		RelationList_t4805 * L_11 = PlayerData_get_BlackList_m35131(L_10, /*hidden argument*/&PlayerData_get_BlackList_m35131_MethodInfo);
		NullCheck(L_11);
		bool L_12 = RelationList_AddRelation_m34185(L_11, V_1, /*hidden argument*/&RelationList_AddRelation_m34185_MethodInfo);
		if (!L_12)
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_13 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_13);
		Obj_MainPlayer_t1732 * L_14 = ObjManager_get_MainPlayer_m31308(L_13, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		bool L_15 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_14, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_15)
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_16 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_16);
		Obj_MainPlayer_t1732 * L_17 = ObjManager_get_MainPlayer_m31308(L_16, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_17);
		Obj_MainPlayer_SendNoticMsg_m31723(L_17, 0, (String_t*) &_stringLiteral2781, ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 0)), /*hidden argument*/&Obj_MainPlayer_SendNoticMsg_m31723_MethodInfo);
	}

IL_00c7:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ADDBLACKLISTHandler
extern TypeInfo GC_ADDBLACKLISTHandler_t2535_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ADDBLACKLISTHandler::.ctor()
MethodInfo GC_ADDBLACKLISTHandler__ctor_m15394_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ADDBLACKLISTHandler__ctor_m15394/* method */
	, &GC_ADDBLACKLISTHandler_t2535_il2cpp_TypeInfo/* declaring_type */
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
	, 8870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ADDBLACKLISTHandler_t2535_GC_ADDBLACKLISTHandler_Execute_m15395_ParameterInfos[] = 
{
	{"ipacket", 0, 134222351, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ADDBLACKLISTHandler_t2535_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ADDBLACKLISTHandler::Execute(PacketDistributed)
MethodInfo GC_ADDBLACKLISTHandler_Execute_m15395_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ADDBLACKLISTHandler_Execute_m15395/* method */
	, &GC_ADDBLACKLISTHandler_t2535_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ADDBLACKLISTHandler_t2535_GC_ADDBLACKLISTHandler_Execute_m15395_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ADDBLACKLISTHandler_t2535_MethodInfos[] =
{
	&GC_ADDBLACKLISTHandler__ctor_m15394_MethodInfo,
	&GC_ADDBLACKLISTHandler_Execute_m15395_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ADDBLACKLISTHandler_Execute_m15395_MethodInfo;
static MethodInfo* GC_ADDBLACKLISTHandler_t2535_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ADDBLACKLISTHandler_Execute_m15395_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ADDBLACKLISTHandler_t2535_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ADDBLACKLISTHandler_t2535_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ADDBLACKLISTHandler_t2535_0_0_0;
extern Il2CppType GC_ADDBLACKLISTHandler_t2535_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ADDBLACKLISTHandler_t2535;
extern TypeInfo GC_ADDBLACKLISTHandler_t2535_il2cpp_TypeInfo;
TypeInfo GC_ADDBLACKLISTHandler_t2535_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ADDBLACKLISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ADDBLACKLISTHandler_t2535_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ADDBLACKLISTHandler_t2535_il2cpp_TypeInfo/* element_class */
	, GC_ADDBLACKLISTHandler_t2535_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ADDBLACKLISTHandler_t2535_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ADDBLACKLISTHandler_t2535_il2cpp_TypeInfo/* cast_class */
	, &GC_ADDBLACKLISTHandler_t2535_0_0_0/* byval_arg */
	, &GC_ADDBLACKLISTHandler_t2535_1_0_0/* this_arg */
	, GC_ADDBLACKLISTHandler_t2535_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ADDBLACKLISTHandler_t2535)/* instance_size */
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
// SPacket.SocketInstance.GC_ADDFRIENDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADDFRIENDHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ADDFRIENDHandler_t2536_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ADDFRIENDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADDFRIENDHandlerMethodDeclarations.h"

// GC_ADDFRIEND
#include "AssemblyU2DCSharp_GC_ADDFRIEND.h"
// GUIData
#include "AssemblyU2DCSharp_GUIData.h"
// GUIData/FriendDataUpdateDelegate
#include "AssemblyU2DCSharp_GUIData_FriendDataUpdateDelegate.h"
extern TypeInfo GC_ADDFRIEND_t3027_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo Relation_t1442_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo GUIData_t4888_il2cpp_TypeInfo;
extern TypeInfo FriendDataUpdateDelegate_t4874_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// GC_ADDFRIEND
#include "AssemblyU2DCSharp_GC_ADDFRIENDMethodDeclarations.h"
// GCGame.Table.StrDictionary
#include "AssemblyU2DCSharp_GCGame_Table_StrDictionaryMethodDeclarations.h"
// GUIData
#include "AssemblyU2DCSharp_GUIDataMethodDeclarations.h"
// GUIData/FriendDataUpdateDelegate
#include "AssemblyU2DCSharp_GUIData_FriendDataUpdateDelegateMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_FriendList_m35129_MethodInfo;
extern MethodInfo Relation__ctor_m34165_MethodInfo;
extern MethodInfo GC_ADDFRIEND_get_Guid_m18239_MethodInfo;
extern MethodInfo Relation_set_Guid_m34167_MethodInfo;
extern MethodInfo GC_ADDFRIEND_get_Name_m18243_MethodInfo;
extern MethodInfo Relation_set_Name_m34169_MethodInfo;
extern MethodInfo GC_ADDFRIEND_get_Level_m18247_MethodInfo;
extern MethodInfo Relation_set_Level_m34171_MethodInfo;
extern MethodInfo GC_ADDFRIEND_get_Prof_m18251_MethodInfo;
extern MethodInfo Relation_set_Profession_m34173_MethodInfo;
extern MethodInfo GC_ADDFRIEND_get_Combat_m18255_MethodInfo;
extern MethodInfo Relation_set_CombatNum_m34175_MethodInfo;
extern MethodInfo GC_ADDFRIEND_get_State_m18259_MethodInfo;
extern MethodInfo Relation_set_State_m34177_MethodInfo;
extern MethodInfo GC_ADDFRIEND_get_TimeInfo_m18263_MethodInfo;
extern MethodInfo Relation_set_TimeInfo_m34180_MethodInfo;
extern MethodInfo Relation_get_Level_m34170_MethodInfo;
extern MethodInfo Relation_get_Profession_m34172_MethodInfo;
extern MethodInfo Relation_get_CombatNum_m34174_MethodInfo;
extern MethodInfo Relation_get_Name_m34168_MethodInfo;
extern MethodInfo StrDictionary_GetClientDictionaryString_m6943_MethodInfo;
extern MethodInfo Singleton_1_get_Instance_m39004_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Obj_MainPlayer_SendNoticMsg_m31723_MethodInfo;
extern MethodInfo RelationList_AddRelation_m34185_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo FriendDataUpdateDelegate_Invoke_m34620_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ADDFRIENDHandler::.ctor()
extern MethodInfo GC_ADDFRIENDHandler__ctor_m15396_MethodInfo;
 void GC_ADDFRIENDHandler__ctor_m15396 (GC_ADDFRIENDHandler_t2536 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ADDFRIENDHandler::Execute(PacketDistributed)
extern MethodInfo GC_ADDFRIENDHandler_Execute_m15397_MethodInfo;
 uint32_t GC_ADDFRIENDHandler_Execute_m15397 (GC_ADDFRIENDHandler_t2536 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ADDFRIEND_t3027 * V_0 = {0};
	Relation_t1442 * V_1 = {0};
	String_t* V_2 = {0};
	{
		V_0 = ((GC_ADDFRIEND_t3027 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ADDFRIEND_t3027_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_0);
		RelationList_t4805 * L_1 = PlayerData_get_FriendList_m35129(L_0, /*hidden argument*/&PlayerData_get_FriendList_m35129_MethodInfo);
		if (!L_1)
		{
			goto IL_011e;
		}
	}
	{
		Relation_t1442 * L_2 = (Relation_t1442 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Relation_t1442_il2cpp_TypeInfo));
		Relation__ctor_m34165(L_2, /*hidden argument*/&Relation__ctor_m34165_MethodInfo);
		V_1 = L_2;
		NullCheck(V_0);
		uint64_t L_3 = GC_ADDFRIEND_get_Guid_m18239(V_0, /*hidden argument*/&GC_ADDFRIEND_get_Guid_m18239_MethodInfo);
		NullCheck(V_1);
		Relation_set_Guid_m34167(V_1, L_3, /*hidden argument*/&Relation_set_Guid_m34167_MethodInfo);
		NullCheck(V_0);
		String_t* L_4 = GC_ADDFRIEND_get_Name_m18243(V_0, /*hidden argument*/&GC_ADDFRIEND_get_Name_m18243_MethodInfo);
		NullCheck(V_1);
		Relation_set_Name_m34169(V_1, L_4, /*hidden argument*/&Relation_set_Name_m34169_MethodInfo);
		NullCheck(V_0);
		int32_t L_5 = GC_ADDFRIEND_get_Level_m18247(V_0, /*hidden argument*/&GC_ADDFRIEND_get_Level_m18247_MethodInfo);
		NullCheck(V_1);
		Relation_set_Level_m34171(V_1, L_5, /*hidden argument*/&Relation_set_Level_m34171_MethodInfo);
		NullCheck(V_0);
		int32_t L_6 = GC_ADDFRIEND_get_Prof_m18251(V_0, /*hidden argument*/&GC_ADDFRIEND_get_Prof_m18251_MethodInfo);
		NullCheck(V_1);
		Relation_set_Profession_m34173(V_1, L_6, /*hidden argument*/&Relation_set_Profession_m34173_MethodInfo);
		NullCheck(V_0);
		int32_t L_7 = GC_ADDFRIEND_get_Combat_m18255(V_0, /*hidden argument*/&GC_ADDFRIEND_get_Combat_m18255_MethodInfo);
		NullCheck(V_1);
		Relation_set_CombatNum_m34175(V_1, L_7, /*hidden argument*/&Relation_set_CombatNum_m34175_MethodInfo);
		NullCheck(V_0);
		int32_t L_8 = GC_ADDFRIEND_get_State_m18259(V_0, /*hidden argument*/&GC_ADDFRIEND_get_State_m18259_MethodInfo);
		NullCheck(V_1);
		Relation_set_State_m34177(V_1, L_8, /*hidden argument*/&Relation_set_State_m34177_MethodInfo);
		NullCheck(V_0);
		uint32_t L_9 = GC_ADDFRIEND_get_TimeInfo_m18263(V_0, /*hidden argument*/&GC_ADDFRIEND_get_TimeInfo_m18263_MethodInfo);
		NullCheck(V_1);
		Relation_set_TimeInfo_m34180(V_1, L_9, /*hidden argument*/&Relation_set_TimeInfo_m34180_MethodInfo);
		NullCheck(V_1);
		int32_t L_10 = Relation_get_Level_m34170(V_1, /*hidden argument*/&Relation_get_Level_m34170_MethodInfo);
		if ((((uint32_t)L_10) != ((uint32_t)(-1))))
		{
			goto IL_00d4;
		}
	}
	{
		NullCheck(V_1);
		int32_t L_11 = Relation_get_Profession_m34172(V_1, /*hidden argument*/&Relation_get_Profession_m34172_MethodInfo);
		if ((((uint32_t)L_11) != ((uint32_t)(-1))))
		{
			goto IL_00d4;
		}
	}
	{
		NullCheck(V_1);
		int32_t L_12 = Relation_get_CombatNum_m34174(V_1, /*hidden argument*/&Relation_get_CombatNum_m34174_MethodInfo);
		if ((((uint32_t)L_12) != ((uint32_t)(-1))))
		{
			goto IL_00d4;
		}
	}
	{
		ObjectU5BU5D_t142* L_13 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 1));
		NullCheck(V_1);
		String_t* L_14 = Relation_get_Name_m34168(V_1, /*hidden argument*/&Relation_get_Name_m34168_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
		ArrayElementTypeCheck (L_13, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 0)) = (Object_t *)L_14;
		String_t* L_15 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2782, L_13, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		V_2 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_16 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_16);
		Obj_MainPlayer_t1732 * L_17 = ObjManager_get_MainPlayer_m31308(L_16, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_17);
		Obj_MainPlayer_SendNoticMsg_m31723(L_17, 0, V_2, ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 0)), /*hidden argument*/&Obj_MainPlayer_SendNoticMsg_m31723_MethodInfo);
		return 2;
	}

IL_00d4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_18 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_18);
		RelationList_t4805 * L_19 = PlayerData_get_FriendList_m35129(L_18, /*hidden argument*/&PlayerData_get_FriendList_m35129_MethodInfo);
		NullCheck(L_19);
		bool L_20 = RelationList_AddRelation_m34185(L_19, V_1, /*hidden argument*/&RelationList_AddRelation_m34185_MethodInfo);
		if (!L_20)
		{
			goto IL_011e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_21 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_21);
		Obj_MainPlayer_t1732 * L_22 = ObjManager_get_MainPlayer_m31308(L_21, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		bool L_23 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_22, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_23)
		{
			goto IL_011e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_24 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_24);
		Obj_MainPlayer_t1732 * L_25 = ObjManager_get_MainPlayer_m31308(L_24, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_25);
		Obj_MainPlayer_SendNoticMsg_m31723(L_25, 0, (String_t*) &_stringLiteral2783, ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 0)), /*hidden argument*/&Obj_MainPlayer_SendNoticMsg_m31723_MethodInfo);
	}

IL_011e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIData_t4888_il2cpp_TypeInfo));
		if (!(((GUIData_t4888_StaticFields*)InitializedTypeInfo(&GUIData_t4888_il2cpp_TypeInfo)->static_fields)->___delFriendDataUpdate))
		{
			goto IL_0132;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIData_t4888_il2cpp_TypeInfo));
		NullCheck((((GUIData_t4888_StaticFields*)InitializedTypeInfo(&GUIData_t4888_il2cpp_TypeInfo)->static_fields)->___delFriendDataUpdate));
		VirtActionInvoker0::Invoke(&FriendDataUpdateDelegate_Invoke_m34620_MethodInfo, (((GUIData_t4888_StaticFields*)InitializedTypeInfo(&GUIData_t4888_il2cpp_TypeInfo)->static_fields)->___delFriendDataUpdate));
	}

IL_0132:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ADDFRIENDHandler
extern TypeInfo GC_ADDFRIENDHandler_t2536_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ADDFRIENDHandler::.ctor()
MethodInfo GC_ADDFRIENDHandler__ctor_m15396_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ADDFRIENDHandler__ctor_m15396/* method */
	, &GC_ADDFRIENDHandler_t2536_il2cpp_TypeInfo/* declaring_type */
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
	, 8872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ADDFRIENDHandler_t2536_GC_ADDFRIENDHandler_Execute_m15397_ParameterInfos[] = 
{
	{"ipacket", 0, 134222352, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ADDFRIENDHandler_t2536_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ADDFRIENDHandler::Execute(PacketDistributed)
MethodInfo GC_ADDFRIENDHandler_Execute_m15397_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ADDFRIENDHandler_Execute_m15397/* method */
	, &GC_ADDFRIENDHandler_t2536_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ADDFRIENDHandler_t2536_GC_ADDFRIENDHandler_Execute_m15397_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8873/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ADDFRIENDHandler_t2536_MethodInfos[] =
{
	&GC_ADDFRIENDHandler__ctor_m15396_MethodInfo,
	&GC_ADDFRIENDHandler_Execute_m15397_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ADDFRIENDHandler_Execute_m15397_MethodInfo;
static MethodInfo* GC_ADDFRIENDHandler_t2536_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ADDFRIENDHandler_Execute_m15397_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ADDFRIENDHandler_t2536_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ADDFRIENDHandler_t2536_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ADDFRIENDHandler_t2536_0_0_0;
extern Il2CppType GC_ADDFRIENDHandler_t2536_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ADDFRIENDHandler_t2536;
extern TypeInfo GC_ADDFRIENDHandler_t2536_il2cpp_TypeInfo;
TypeInfo GC_ADDFRIENDHandler_t2536_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ADDFRIENDHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ADDFRIENDHandler_t2536_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ADDFRIENDHandler_t2536_il2cpp_TypeInfo/* element_class */
	, GC_ADDFRIENDHandler_t2536_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ADDFRIENDHandler_t2536_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ADDFRIENDHandler_t2536_il2cpp_TypeInfo/* cast_class */
	, &GC_ADDFRIENDHandler_t2536_0_0_0/* byval_arg */
	, &GC_ADDFRIENDHandler_t2536_1_0_0/* this_arg */
	, GC_ADDFRIENDHandler_t2536_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ADDFRIENDHandler_t2536)/* instance_size */
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
// SPacket.SocketInstance.GC_ADDHATELISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADDHATELISTHandl.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ADDHATELISTHandler_t2537_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ADDHATELISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADDHATELISTHandlMethodDeclarations.h"

// GC_ADDHATELIST
#include "AssemblyU2DCSharp_GC_ADDHATELIST.h"
extern TypeInfo GC_ADDHATELIST_t3414_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo Relation_t1442_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
// GC_ADDHATELIST
#include "AssemblyU2DCSharp_GC_ADDHATELISTMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_HateList_m35133_MethodInfo;
extern MethodInfo Relation__ctor_m34165_MethodInfo;
extern MethodInfo GC_ADDHATELIST_get_Guid_m24966_MethodInfo;
extern MethodInfo Relation_set_Guid_m34167_MethodInfo;
extern MethodInfo GC_ADDHATELIST_get_Name_m24970_MethodInfo;
extern MethodInfo Relation_set_Name_m34169_MethodInfo;
extern MethodInfo GC_ADDHATELIST_get_Level_m24974_MethodInfo;
extern MethodInfo Relation_set_Level_m34171_MethodInfo;
extern MethodInfo GC_ADDHATELIST_get_Prof_m24978_MethodInfo;
extern MethodInfo Relation_set_Profession_m34173_MethodInfo;
extern MethodInfo GC_ADDHATELIST_get_Combat_m24982_MethodInfo;
extern MethodInfo Relation_set_CombatNum_m34175_MethodInfo;
extern MethodInfo GC_ADDHATELIST_get_State_m24986_MethodInfo;
extern MethodInfo Relation_set_State_m34177_MethodInfo;
extern MethodInfo GC_ADDHATELIST_get_TimeInfo_m24990_MethodInfo;
extern MethodInfo Relation_set_TimeInfo_m34180_MethodInfo;
extern MethodInfo RelationList_AddRelation_m34185_MethodInfo;
extern MethodInfo Singleton_1_get_Instance_m39004_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo Obj_MainPlayer_SendNoticMsg_m31723_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ADDHATELISTHandler::.ctor()
extern MethodInfo GC_ADDHATELISTHandler__ctor_m15398_MethodInfo;
 void GC_ADDHATELISTHandler__ctor_m15398 (GC_ADDHATELISTHandler_t2537 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ADDHATELISTHandler::Execute(PacketDistributed)
extern MethodInfo GC_ADDHATELISTHandler_Execute_m15399_MethodInfo;
 uint32_t GC_ADDHATELISTHandler_Execute_m15399 (GC_ADDHATELISTHandler_t2537 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ADDHATELIST_t3414 * V_0 = {0};
	Relation_t1442 * V_1 = {0};
	{
		V_0 = ((GC_ADDHATELIST_t3414 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ADDHATELIST_t3414_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_0);
		RelationList_t4805 * L_1 = PlayerData_get_HateList_m35133(L_0, /*hidden argument*/&PlayerData_get_HateList_m35133_MethodInfo);
		if (!L_1)
		{
			goto IL_00c7;
		}
	}
	{
		Relation_t1442 * L_2 = (Relation_t1442 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Relation_t1442_il2cpp_TypeInfo));
		Relation__ctor_m34165(L_2, /*hidden argument*/&Relation__ctor_m34165_MethodInfo);
		V_1 = L_2;
		NullCheck(V_0);
		uint64_t L_3 = GC_ADDHATELIST_get_Guid_m24966(V_0, /*hidden argument*/&GC_ADDHATELIST_get_Guid_m24966_MethodInfo);
		NullCheck(V_1);
		Relation_set_Guid_m34167(V_1, L_3, /*hidden argument*/&Relation_set_Guid_m34167_MethodInfo);
		NullCheck(V_0);
		String_t* L_4 = GC_ADDHATELIST_get_Name_m24970(V_0, /*hidden argument*/&GC_ADDHATELIST_get_Name_m24970_MethodInfo);
		NullCheck(V_1);
		Relation_set_Name_m34169(V_1, L_4, /*hidden argument*/&Relation_set_Name_m34169_MethodInfo);
		NullCheck(V_0);
		int32_t L_5 = GC_ADDHATELIST_get_Level_m24974(V_0, /*hidden argument*/&GC_ADDHATELIST_get_Level_m24974_MethodInfo);
		NullCheck(V_1);
		Relation_set_Level_m34171(V_1, L_5, /*hidden argument*/&Relation_set_Level_m34171_MethodInfo);
		NullCheck(V_0);
		int32_t L_6 = GC_ADDHATELIST_get_Prof_m24978(V_0, /*hidden argument*/&GC_ADDHATELIST_get_Prof_m24978_MethodInfo);
		NullCheck(V_1);
		Relation_set_Profession_m34173(V_1, L_6, /*hidden argument*/&Relation_set_Profession_m34173_MethodInfo);
		NullCheck(V_0);
		int32_t L_7 = GC_ADDHATELIST_get_Combat_m24982(V_0, /*hidden argument*/&GC_ADDHATELIST_get_Combat_m24982_MethodInfo);
		NullCheck(V_1);
		Relation_set_CombatNum_m34175(V_1, L_7, /*hidden argument*/&Relation_set_CombatNum_m34175_MethodInfo);
		NullCheck(V_0);
		int32_t L_8 = GC_ADDHATELIST_get_State_m24986(V_0, /*hidden argument*/&GC_ADDHATELIST_get_State_m24986_MethodInfo);
		NullCheck(V_1);
		Relation_set_State_m34177(V_1, L_8, /*hidden argument*/&Relation_set_State_m34177_MethodInfo);
		NullCheck(V_0);
		uint32_t L_9 = GC_ADDHATELIST_get_TimeInfo_m24990(V_0, /*hidden argument*/&GC_ADDHATELIST_get_TimeInfo_m24990_MethodInfo);
		NullCheck(V_1);
		Relation_set_TimeInfo_m34180(V_1, L_9, /*hidden argument*/&Relation_set_TimeInfo_m34180_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_10 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_10);
		RelationList_t4805 * L_11 = PlayerData_get_HateList_m35133(L_10, /*hidden argument*/&PlayerData_get_HateList_m35133_MethodInfo);
		NullCheck(L_11);
		bool L_12 = RelationList_AddRelation_m34185(L_11, V_1, /*hidden argument*/&RelationList_AddRelation_m34185_MethodInfo);
		if (!L_12)
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_13 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_13);
		Obj_MainPlayer_t1732 * L_14 = ObjManager_get_MainPlayer_m31308(L_13, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		bool L_15 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_14, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_15)
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_16 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_16);
		Obj_MainPlayer_t1732 * L_17 = ObjManager_get_MainPlayer_m31308(L_16, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_17);
		Obj_MainPlayer_SendNoticMsg_m31723(L_17, 0, (String_t*) &_stringLiteral2784, ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 0)), /*hidden argument*/&Obj_MainPlayer_SendNoticMsg_m31723_MethodInfo);
	}

IL_00c7:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ADDHATELISTHandler
extern TypeInfo GC_ADDHATELISTHandler_t2537_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ADDHATELISTHandler::.ctor()
MethodInfo GC_ADDHATELISTHandler__ctor_m15398_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ADDHATELISTHandler__ctor_m15398/* method */
	, &GC_ADDHATELISTHandler_t2537_il2cpp_TypeInfo/* declaring_type */
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
	, 8874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ADDHATELISTHandler_t2537_GC_ADDHATELISTHandler_Execute_m15399_ParameterInfos[] = 
{
	{"ipacket", 0, 134222353, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ADDHATELISTHandler_t2537_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ADDHATELISTHandler::Execute(PacketDistributed)
MethodInfo GC_ADDHATELISTHandler_Execute_m15399_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ADDHATELISTHandler_Execute_m15399/* method */
	, &GC_ADDHATELISTHandler_t2537_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ADDHATELISTHandler_t2537_GC_ADDHATELISTHandler_Execute_m15399_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ADDHATELISTHandler_t2537_MethodInfos[] =
{
	&GC_ADDHATELISTHandler__ctor_m15398_MethodInfo,
	&GC_ADDHATELISTHandler_Execute_m15399_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ADDHATELISTHandler_Execute_m15399_MethodInfo;
static MethodInfo* GC_ADDHATELISTHandler_t2537_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ADDHATELISTHandler_Execute_m15399_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ADDHATELISTHandler_t2537_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ADDHATELISTHandler_t2537_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ADDHATELISTHandler_t2537_0_0_0;
extern Il2CppType GC_ADDHATELISTHandler_t2537_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ADDHATELISTHandler_t2537;
extern TypeInfo GC_ADDHATELISTHandler_t2537_il2cpp_TypeInfo;
TypeInfo GC_ADDHATELISTHandler_t2537_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ADDHATELISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ADDHATELISTHandler_t2537_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ADDHATELISTHandler_t2537_il2cpp_TypeInfo/* element_class */
	, GC_ADDHATELISTHandler_t2537_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ADDHATELISTHandler_t2537_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ADDHATELISTHandler_t2537_il2cpp_TypeInfo/* cast_class */
	, &GC_ADDHATELISTHandler_t2537_0_0_0/* byval_arg */
	, &GC_ADDHATELISTHandler_t2537_1_0_0/* this_arg */
	, GC_ADDHATELISTHandler_t2537_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ADDHATELISTHandler_t2537)/* instance_size */
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
// SPacket.SocketInstance.GC_ADDITIONINFO_UPDATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADDITIONINFO_UPD.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ADDITIONINFO_UPDATEHandler_t2538_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ADDITIONINFO_UPDATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADDITIONINFO_UPDMethodDeclarations.h"

// GC_ADDITIONINFO_UPDATE
#include "AssemblyU2DCSharp_GC_ADDITIONINFO_UPDATE.h"
extern TypeInfo GC_ADDITIONINFO_UPDATE_t3056_il2cpp_TypeInfo;
extern TypeInfo AdditionData_t4842_il2cpp_TypeInfo;
// AdditionData
#include "AssemblyU2DCSharp_AdditionDataMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo AdditionData_UpdateAdditionData_m34456_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ADDITIONINFO_UPDATEHandler::.ctor()
extern MethodInfo GC_ADDITIONINFO_UPDATEHandler__ctor_m15400_MethodInfo;
 void GC_ADDITIONINFO_UPDATEHandler__ctor_m15400 (GC_ADDITIONINFO_UPDATEHandler_t2538 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ADDITIONINFO_UPDATEHandler::Execute(PacketDistributed)
extern MethodInfo GC_ADDITIONINFO_UPDATEHandler_Execute_m15401_MethodInfo;
 uint32_t GC_ADDITIONINFO_UPDATEHandler_Execute_m15401 (GC_ADDITIONINFO_UPDATEHandler_t2538 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ADDITIONINFO_UPDATE_t3056 * V_0 = {0};
	{
		V_0 = ((GC_ADDITIONINFO_UPDATE_t3056 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ADDITIONINFO_UPDATE_t3056_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&AdditionData_t4842_il2cpp_TypeInfo));
		AdditionData_UpdateAdditionData_m34456(NULL /*static, unused*/, V_0, /*hidden argument*/&AdditionData_UpdateAdditionData_m34456_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ADDITIONINFO_UPDATEHandler
extern TypeInfo GC_ADDITIONINFO_UPDATEHandler_t2538_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ADDITIONINFO_UPDATEHandler::.ctor()
MethodInfo GC_ADDITIONINFO_UPDATEHandler__ctor_m15400_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ADDITIONINFO_UPDATEHandler__ctor_m15400/* method */
	, &GC_ADDITIONINFO_UPDATEHandler_t2538_il2cpp_TypeInfo/* declaring_type */
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
	, 8876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ADDITIONINFO_UPDATEHandler_t2538_GC_ADDITIONINFO_UPDATEHandler_Execute_m15401_ParameterInfos[] = 
{
	{"ipacket", 0, 134222354, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ADDITIONINFO_UPDATEHandler_t2538_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ADDITIONINFO_UPDATEHandler::Execute(PacketDistributed)
MethodInfo GC_ADDITIONINFO_UPDATEHandler_Execute_m15401_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ADDITIONINFO_UPDATEHandler_Execute_m15401/* method */
	, &GC_ADDITIONINFO_UPDATEHandler_t2538_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ADDITIONINFO_UPDATEHandler_t2538_GC_ADDITIONINFO_UPDATEHandler_Execute_m15401_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ADDITIONINFO_UPDATEHandler_t2538_MethodInfos[] =
{
	&GC_ADDITIONINFO_UPDATEHandler__ctor_m15400_MethodInfo,
	&GC_ADDITIONINFO_UPDATEHandler_Execute_m15401_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ADDITIONINFO_UPDATEHandler_Execute_m15401_MethodInfo;
static MethodInfo* GC_ADDITIONINFO_UPDATEHandler_t2538_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ADDITIONINFO_UPDATEHandler_Execute_m15401_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ADDITIONINFO_UPDATEHandler_t2538_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ADDITIONINFO_UPDATEHandler_t2538_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ADDITIONINFO_UPDATEHandler_t2538_0_0_0;
extern Il2CppType GC_ADDITIONINFO_UPDATEHandler_t2538_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ADDITIONINFO_UPDATEHandler_t2538;
extern TypeInfo GC_ADDITIONINFO_UPDATEHandler_t2538_il2cpp_TypeInfo;
TypeInfo GC_ADDITIONINFO_UPDATEHandler_t2538_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ADDITIONINFO_UPDATEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ADDITIONINFO_UPDATEHandler_t2538_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ADDITIONINFO_UPDATEHandler_t2538_il2cpp_TypeInfo/* element_class */
	, GC_ADDITIONINFO_UPDATEHandler_t2538_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ADDITIONINFO_UPDATEHandler_t2538_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ADDITIONINFO_UPDATEHandler_t2538_il2cpp_TypeInfo/* cast_class */
	, &GC_ADDITIONINFO_UPDATEHandler_t2538_0_0_0/* byval_arg */
	, &GC_ADDITIONINFO_UPDATEHandler_t2538_1_0_0/* this_arg */
	, GC_ADDITIONINFO_UPDATEHandler_t2538_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ADDITIONINFO_UPDATEHandler_t2538)/* instance_size */
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
// SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_PRESENTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADD_SHOPPINGLIST.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_PRESENTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADD_SHOPPINGLISTMethodDeclarations.h"

// GC_ADD_SHOPPINGLIST_PRESENT
#include "AssemblyU2DCSharp_GC_ADD_SHOPPINGLIST_PRESENT.h"
// Games.YuanBaoShopData.ShoppingList
#include "AssemblyU2DCSharp_Games_YuanBaoShopData_ShoppingList.h"
// Games.YuanBaoShopData.ShoppingListRecord
#include "AssemblyU2DCSharp_Games_YuanBaoShopData_ShoppingListRecord.h"
// PresentRootLogic
#include "AssemblyU2DCSharp_PresentRootLogic.h"
extern TypeInfo GC_ADD_SHOPPINGLIST_PRESENT_t3480_il2cpp_TypeInfo;
extern TypeInfo ShoppingList_t1669_il2cpp_TypeInfo;
extern TypeInfo IList_1_t2927_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
// Games.YuanBaoShopData.ShoppingList
#include "AssemblyU2DCSharp_Games_YuanBaoShopData_ShoppingListMethodDeclarations.h"
// GC_ADD_SHOPPINGLIST_PRESENT
#include "AssemblyU2DCSharp_GC_ADD_SHOPPINGLIST_PRESENTMethodDeclarations.h"
// Games.YuanBaoShopData.ShoppingListRecord
#include "AssemblyU2DCSharp_Games_YuanBaoShopData_ShoppingListRecordMethodDeclarations.h"
// UIControllerBase`1<PresentRootLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_20MethodDeclarations.h"
// PresentRootLogic
#include "AssemblyU2DCSharp_PresentRootLogicMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo ShoppingList__ctor_m35801_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_PRESENT_get_Guid_m26148_MethodInfo;
extern MethodInfo ShoppingList_set_Guid_m35809_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_PRESENT_get_SenderName_m26152_MethodInfo;
extern MethodInfo ShoppingList_set_SenderName_m35811_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_PRESENT_get_CreateTime_m26156_MethodInfo;
extern MethodInfo ShoppingList_set_CreateTime_m35813_MethodInfo;
extern MethodInfo ShoppingList_get_GoodsID_m35814_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_PRESENT_get_GoodsIDList_m26159_MethodInfo;
extern MethodInfo IList_1_get_Item_m40071_MethodInfo;
extern MethodInfo ShoppingList_get_GoodsCount_m35816_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_PRESENT_get_GoodsCountList_m26163_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_PresentRecord_m35358_MethodInfo;
extern MethodInfo ShoppingListRecord_AddShoppingList_m35822_MethodInfo;
extern MethodInfo UIControllerBase_1_Instance_m39602_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo PresentRootLogic_UpdateTabShow_m10739_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_PRESENTHandler::.ctor()
extern MethodInfo GC_ADD_SHOPPINGLIST_PRESENTHandler__ctor_m15402_MethodInfo;
 void GC_ADD_SHOPPINGLIST_PRESENTHandler__ctor_m15402 (GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_PRESENTHandler::Execute(PacketDistributed)
extern MethodInfo GC_ADD_SHOPPINGLIST_PRESENTHandler_Execute_m15403_MethodInfo;
 uint32_t GC_ADD_SHOPPINGLIST_PRESENTHandler_Execute_m15403 (GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ADD_SHOPPINGLIST_PRESENT_t3480 * V_0 = {0};
	ShoppingList_t1669 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = ((GC_ADD_SHOPPINGLIST_PRESENT_t3480 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ADD_SHOPPINGLIST_PRESENT_t3480_il2cpp_TypeInfo)));
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
		ShoppingList_t1669 * L_0 = (ShoppingList_t1669 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ShoppingList_t1669_il2cpp_TypeInfo));
		ShoppingList__ctor_m35801(L_0, /*hidden argument*/&ShoppingList__ctor_m35801_MethodInfo);
		V_1 = L_0;
		NullCheck(V_0);
		uint64_t L_1 = GC_ADD_SHOPPINGLIST_PRESENT_get_Guid_m26148(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_PRESENT_get_Guid_m26148_MethodInfo);
		NullCheck(V_1);
		ShoppingList_set_Guid_m35809(V_1, L_1, /*hidden argument*/&ShoppingList_set_Guid_m35809_MethodInfo);
		NullCheck(V_0);
		String_t* L_2 = GC_ADD_SHOPPINGLIST_PRESENT_get_SenderName_m26152(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_PRESENT_get_SenderName_m26152_MethodInfo);
		NullCheck(V_1);
		ShoppingList_set_SenderName_m35811(V_1, L_2, /*hidden argument*/&ShoppingList_set_SenderName_m35811_MethodInfo);
		NullCheck(V_0);
		int32_t L_3 = GC_ADD_SHOPPINGLIST_PRESENT_get_CreateTime_m26156(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_PRESENT_get_CreateTime_m26156_MethodInfo);
		NullCheck(V_1);
		ShoppingList_set_CreateTime_m35813(V_1, L_3, /*hidden argument*/&ShoppingList_set_CreateTime_m35813_MethodInfo);
		V_2 = 0;
		goto IL_006c;
	}

IL_0040:
	{
		NullCheck(V_1);
		Int32U5BU5D_t116* L_4 = ShoppingList_get_GoodsID_m35814(V_1, /*hidden argument*/&ShoppingList_get_GoodsID_m35814_MethodInfo);
		NullCheck(V_0);
		Object_t* L_5 = GC_ADD_SHOPPINGLIST_PRESENT_get_GoodsIDList_m26159(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_PRESENT_get_GoodsIDList_m26159_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&IList_1_get_Item_m40071_MethodInfo, L_5, V_2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, V_2)) = (int32_t)L_6;
		NullCheck(V_1);
		Int32U5BU5D_t116* L_7 = ShoppingList_get_GoodsCount_m35816(V_1, /*hidden argument*/&ShoppingList_get_GoodsCount_m35816_MethodInfo);
		NullCheck(V_0);
		Object_t* L_8 = GC_ADD_SHOPPINGLIST_PRESENT_get_GoodsCountList_m26163(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_PRESENT_get_GoodsCountList_m26163_MethodInfo);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&IList_1_get_Item_m40071_MethodInfo, L_8, V_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, V_2)) = (int32_t)L_9;
		V_2 = ((int32_t)(V_2+1));
	}

IL_006c:
	{
		if ((((int32_t)V_2) < ((int32_t)5)))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_10 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_10);
		ShoppingListRecord_t1673 * L_11 = PlayerData_get_PresentRecord_m35358(L_10, /*hidden argument*/&PlayerData_get_PresentRecord_m35358_MethodInfo);
		NullCheck(L_11);
		ShoppingListRecord_AddShoppingList_m35822(L_11, V_1, /*hidden argument*/&ShoppingListRecord_AddShoppingList_m35822_MethodInfo);
		PresentRootLogic_t1671 * L_12 = UIControllerBase_1_Instance_m39602(NULL /*static, unused*/, /*hidden argument*/&UIControllerBase_1_Instance_m39602_MethodInfo);
		bool L_13 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_12, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		PresentRootLogic_t1671 * L_14 = UIControllerBase_1_Instance_m39602(NULL /*static, unused*/, /*hidden argument*/&UIControllerBase_1_Instance_m39602_MethodInfo);
		NullCheck(L_14);
		PresentRootLogic_UpdateTabShow_m10739(L_14, 1, /*hidden argument*/&PresentRootLogic_UpdateTabShow_m10739_MethodInfo);
	}

IL_00a3:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_PRESENTHandler
extern TypeInfo GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_PRESENTHandler::.ctor()
MethodInfo GC_ADD_SHOPPINGLIST_PRESENTHandler__ctor_m15402_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ADD_SHOPPINGLIST_PRESENTHandler__ctor_m15402/* method */
	, &GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_il2cpp_TypeInfo/* declaring_type */
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
	, 8878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_GC_ADD_SHOPPINGLIST_PRESENTHandler_Execute_m15403_ParameterInfos[] = 
{
	{"ipacket", 0, 134222355, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_PRESENTHandler::Execute(PacketDistributed)
MethodInfo GC_ADD_SHOPPINGLIST_PRESENTHandler_Execute_m15403_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ADD_SHOPPINGLIST_PRESENTHandler_Execute_m15403/* method */
	, &GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_GC_ADD_SHOPPINGLIST_PRESENTHandler_Execute_m15403_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_MethodInfos[] =
{
	&GC_ADD_SHOPPINGLIST_PRESENTHandler__ctor_m15402_MethodInfo,
	&GC_ADD_SHOPPINGLIST_PRESENTHandler_Execute_m15403_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_PRESENTHandler_Execute_m15403_MethodInfo;
static MethodInfo* GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ADD_SHOPPINGLIST_PRESENTHandler_Execute_m15403_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_0_0_0;
extern Il2CppType GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539;
extern TypeInfo GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_il2cpp_TypeInfo;
TypeInfo GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ADD_SHOPPINGLIST_PRESENTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_il2cpp_TypeInfo/* element_class */
	, GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_il2cpp_TypeInfo/* cast_class */
	, &GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_0_0_0/* byval_arg */
	, &GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_1_0_0/* this_arg */
	, GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ADD_SHOPPINGLIST_PRESENTHandler_t2539)/* instance_size */
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
// SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_WAITPAYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADD_SHOPPINGLIST_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_WAITPAYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ADD_SHOPPINGLIST_0MethodDeclarations.h"

// GC_ADD_SHOPPINGLIST_WAITPAY
#include "AssemblyU2DCSharp_GC_ADD_SHOPPINGLIST_WAITPAY.h"
extern TypeInfo GC_ADD_SHOPPINGLIST_WAITPAY_t3485_il2cpp_TypeInfo;
extern TypeInfo ShoppingList_t1669_il2cpp_TypeInfo;
extern TypeInfo IList_1_t2927_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
// GC_ADD_SHOPPINGLIST_WAITPAY
#include "AssemblyU2DCSharp_GC_ADD_SHOPPINGLIST_WAITPAYMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo ShoppingList__ctor_m35801_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_WAITPAY_get_Guid_m26237_MethodInfo;
extern MethodInfo ShoppingList_set_Guid_m35809_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_WAITPAY_get_SenderName_m26241_MethodInfo;
extern MethodInfo ShoppingList_set_SenderName_m35811_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_WAITPAY_get_CreateTime_m26245_MethodInfo;
extern MethodInfo ShoppingList_set_CreateTime_m35813_MethodInfo;
extern MethodInfo ShoppingList_get_GoodsID_m35814_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_WAITPAY_get_GoodsIDList_m26248_MethodInfo;
extern MethodInfo IList_1_get_Item_m40071_MethodInfo;
extern MethodInfo ShoppingList_get_GoodsCount_m35816_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_WAITPAY_get_GoodsCountList_m26252_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_WaitPayRecord_m35360_MethodInfo;
extern MethodInfo ShoppingListRecord_AddShoppingList_m35822_MethodInfo;
extern MethodInfo UIControllerBase_1_Instance_m39602_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo PresentRootLogic_UpdateTabShow_m10739_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_WAITPAYHandler::.ctor()
extern MethodInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler__ctor_m15404_MethodInfo;
 void GC_ADD_SHOPPINGLIST_WAITPAYHandler__ctor_m15404 (GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_WAITPAYHandler::Execute(PacketDistributed)
extern MethodInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler_Execute_m15405_MethodInfo;
 uint32_t GC_ADD_SHOPPINGLIST_WAITPAYHandler_Execute_m15405 (GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ADD_SHOPPINGLIST_WAITPAY_t3485 * V_0 = {0};
	ShoppingList_t1669 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = ((GC_ADD_SHOPPINGLIST_WAITPAY_t3485 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ADD_SHOPPINGLIST_WAITPAY_t3485_il2cpp_TypeInfo)));
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
		ShoppingList_t1669 * L_0 = (ShoppingList_t1669 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ShoppingList_t1669_il2cpp_TypeInfo));
		ShoppingList__ctor_m35801(L_0, /*hidden argument*/&ShoppingList__ctor_m35801_MethodInfo);
		V_1 = L_0;
		NullCheck(V_0);
		uint64_t L_1 = GC_ADD_SHOPPINGLIST_WAITPAY_get_Guid_m26237(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_WAITPAY_get_Guid_m26237_MethodInfo);
		NullCheck(V_1);
		ShoppingList_set_Guid_m35809(V_1, L_1, /*hidden argument*/&ShoppingList_set_Guid_m35809_MethodInfo);
		NullCheck(V_0);
		String_t* L_2 = GC_ADD_SHOPPINGLIST_WAITPAY_get_SenderName_m26241(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_WAITPAY_get_SenderName_m26241_MethodInfo);
		NullCheck(V_1);
		ShoppingList_set_SenderName_m35811(V_1, L_2, /*hidden argument*/&ShoppingList_set_SenderName_m35811_MethodInfo);
		NullCheck(V_0);
		int32_t L_3 = GC_ADD_SHOPPINGLIST_WAITPAY_get_CreateTime_m26245(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_WAITPAY_get_CreateTime_m26245_MethodInfo);
		NullCheck(V_1);
		ShoppingList_set_CreateTime_m35813(V_1, L_3, /*hidden argument*/&ShoppingList_set_CreateTime_m35813_MethodInfo);
		V_2 = 0;
		goto IL_006c;
	}

IL_0040:
	{
		NullCheck(V_1);
		Int32U5BU5D_t116* L_4 = ShoppingList_get_GoodsID_m35814(V_1, /*hidden argument*/&ShoppingList_get_GoodsID_m35814_MethodInfo);
		NullCheck(V_0);
		Object_t* L_5 = GC_ADD_SHOPPINGLIST_WAITPAY_get_GoodsIDList_m26248(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_WAITPAY_get_GoodsIDList_m26248_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&IList_1_get_Item_m40071_MethodInfo, L_5, V_2);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, V_2)) = (int32_t)L_6;
		NullCheck(V_1);
		Int32U5BU5D_t116* L_7 = ShoppingList_get_GoodsCount_m35816(V_1, /*hidden argument*/&ShoppingList_get_GoodsCount_m35816_MethodInfo);
		NullCheck(V_0);
		Object_t* L_8 = GC_ADD_SHOPPINGLIST_WAITPAY_get_GoodsCountList_m26252(V_0, /*hidden argument*/&GC_ADD_SHOPPINGLIST_WAITPAY_get_GoodsCountList_m26252_MethodInfo);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&IList_1_get_Item_m40071_MethodInfo, L_8, V_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, V_2)) = (int32_t)L_9;
		V_2 = ((int32_t)(V_2+1));
	}

IL_006c:
	{
		if ((((int32_t)V_2) < ((int32_t)5)))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_10 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_10);
		ShoppingListRecord_t1673 * L_11 = PlayerData_get_WaitPayRecord_m35360(L_10, /*hidden argument*/&PlayerData_get_WaitPayRecord_m35360_MethodInfo);
		NullCheck(L_11);
		ShoppingListRecord_AddShoppingList_m35822(L_11, V_1, /*hidden argument*/&ShoppingListRecord_AddShoppingList_m35822_MethodInfo);
		PresentRootLogic_t1671 * L_12 = UIControllerBase_1_Instance_m39602(NULL /*static, unused*/, /*hidden argument*/&UIControllerBase_1_Instance_m39602_MethodInfo);
		bool L_13 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_12, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		PresentRootLogic_t1671 * L_14 = UIControllerBase_1_Instance_m39602(NULL /*static, unused*/, /*hidden argument*/&UIControllerBase_1_Instance_m39602_MethodInfo);
		NullCheck(L_14);
		PresentRootLogic_UpdateTabShow_m10739(L_14, 1, /*hidden argument*/&PresentRootLogic_UpdateTabShow_m10739_MethodInfo);
	}

IL_00a3:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_WAITPAYHandler
extern TypeInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_WAITPAYHandler::.ctor()
MethodInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler__ctor_m15404_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ADD_SHOPPINGLIST_WAITPAYHandler__ctor_m15404/* method */
	, &GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_il2cpp_TypeInfo/* declaring_type */
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
	, 8880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_GC_ADD_SHOPPINGLIST_WAITPAYHandler_Execute_m15405_ParameterInfos[] = 
{
	{"ipacket", 0, 134222356, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ADD_SHOPPINGLIST_WAITPAYHandler::Execute(PacketDistributed)
MethodInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler_Execute_m15405_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ADD_SHOPPINGLIST_WAITPAYHandler_Execute_m15405/* method */
	, &GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_GC_ADD_SHOPPINGLIST_WAITPAYHandler_Execute_m15405_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_MethodInfos[] =
{
	&GC_ADD_SHOPPINGLIST_WAITPAYHandler__ctor_m15404_MethodInfo,
	&GC_ADD_SHOPPINGLIST_WAITPAYHandler_Execute_m15405_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler_Execute_m15405_MethodInfo;
static MethodInfo* GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ADD_SHOPPINGLIST_WAITPAYHandler_Execute_m15405_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_0_0_0;
extern Il2CppType GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540;
extern TypeInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_il2cpp_TypeInfo;
TypeInfo GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ADD_SHOPPINGLIST_WAITPAYHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_il2cpp_TypeInfo/* element_class */
	, GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_il2cpp_TypeInfo/* cast_class */
	, &GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_0_0_0/* byval_arg */
	, &GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_1_0_0/* this_arg */
	, GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ADD_SHOPPINGLIST_WAITPAYHandler_t2540)/* instance_size */
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
// SPacket.SocketInstance.GC_APPLY_STAGE_CHANGEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_APPLY_STAGE_CHAN.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_APPLY_STAGE_CHANGEHandler_t2541_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_APPLY_STAGE_CHANGEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_APPLY_STAGE_CHANMethodDeclarations.h"

// GC_APPLY_STAGE_CHANGE
#include "AssemblyU2DCSharp_GC_APPLY_STAGE_CHANGE.h"
extern TypeInfo GC_APPLY_STAGE_CHANGE_t3571_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.GC_APPLY_STAGE_CHANGEHandler::.ctor()
extern MethodInfo GC_APPLY_STAGE_CHANGEHandler__ctor_m15406_MethodInfo;
 void GC_APPLY_STAGE_CHANGEHandler__ctor_m15406 (GC_APPLY_STAGE_CHANGEHandler_t2541 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_APPLY_STAGE_CHANGEHandler::Execute(PacketDistributed)
extern MethodInfo GC_APPLY_STAGE_CHANGEHandler_Execute_m15407_MethodInfo;
 uint32_t GC_APPLY_STAGE_CHANGEHandler_Execute_m15407 (GC_APPLY_STAGE_CHANGEHandler_t2541 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_APPLY_STAGE_CHANGE_t3571 * V_0 = {0};
	{
		V_0 = ((GC_APPLY_STAGE_CHANGE_t3571 *)Castclass(___ipacket, InitializedTypeInfo(&GC_APPLY_STAGE_CHANGE_t3571_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.GC_APPLY_STAGE_CHANGEHandler
extern TypeInfo GC_APPLY_STAGE_CHANGEHandler_t2541_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_APPLY_STAGE_CHANGEHandler::.ctor()
MethodInfo GC_APPLY_STAGE_CHANGEHandler__ctor_m15406_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_APPLY_STAGE_CHANGEHandler__ctor_m15406/* method */
	, &GC_APPLY_STAGE_CHANGEHandler_t2541_il2cpp_TypeInfo/* declaring_type */
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
	, 8882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_APPLY_STAGE_CHANGEHandler_t2541_GC_APPLY_STAGE_CHANGEHandler_Execute_m15407_ParameterInfos[] = 
{
	{"ipacket", 0, 134222357, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_APPLY_STAGE_CHANGEHandler_t2541_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_APPLY_STAGE_CHANGEHandler::Execute(PacketDistributed)
MethodInfo GC_APPLY_STAGE_CHANGEHandler_Execute_m15407_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_APPLY_STAGE_CHANGEHandler_Execute_m15407/* method */
	, &GC_APPLY_STAGE_CHANGEHandler_t2541_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_APPLY_STAGE_CHANGEHandler_t2541_GC_APPLY_STAGE_CHANGEHandler_Execute_m15407_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_APPLY_STAGE_CHANGEHandler_t2541_MethodInfos[] =
{
	&GC_APPLY_STAGE_CHANGEHandler__ctor_m15406_MethodInfo,
	&GC_APPLY_STAGE_CHANGEHandler_Execute_m15407_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_APPLY_STAGE_CHANGEHandler_Execute_m15407_MethodInfo;
static MethodInfo* GC_APPLY_STAGE_CHANGEHandler_t2541_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_APPLY_STAGE_CHANGEHandler_Execute_m15407_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_APPLY_STAGE_CHANGEHandler_t2541_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_APPLY_STAGE_CHANGEHandler_t2541_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_APPLY_STAGE_CHANGEHandler_t2541_0_0_0;
extern Il2CppType GC_APPLY_STAGE_CHANGEHandler_t2541_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_APPLY_STAGE_CHANGEHandler_t2541;
extern TypeInfo GC_APPLY_STAGE_CHANGEHandler_t2541_il2cpp_TypeInfo;
TypeInfo GC_APPLY_STAGE_CHANGEHandler_t2541_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_APPLY_STAGE_CHANGEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_APPLY_STAGE_CHANGEHandler_t2541_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_APPLY_STAGE_CHANGEHandler_t2541_il2cpp_TypeInfo/* element_class */
	, GC_APPLY_STAGE_CHANGEHandler_t2541_InterfacesTypeInfos/* implemented_interfaces */
	, GC_APPLY_STAGE_CHANGEHandler_t2541_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_APPLY_STAGE_CHANGEHandler_t2541_il2cpp_TypeInfo/* cast_class */
	, &GC_APPLY_STAGE_CHANGEHandler_t2541_0_0_0/* byval_arg */
	, &GC_APPLY_STAGE_CHANGEHandler_t2541_1_0_0/* this_arg */
	, GC_APPLY_STAGE_CHANGEHandler_t2541_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_APPLY_STAGE_CHANGEHandler_t2541)/* instance_size */
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
// SPacket.SocketInstance.GC_ASK_ACTIVENESSAWARD_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_ACTIVENESSAW.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ASK_ACTIVENESSAWARD_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_ACTIVENESSAWMethodDeclarations.h"

// GC_ASK_ACTIVENESSAWARD_RET
#include "AssemblyU2DCSharp_GC_ASK_ACTIVENESSAWARD_RET.h"
extern TypeInfo GC_ASK_ACTIVENESSAWARD_RET_t3074_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_HandlePacket_m35167_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ASK_ACTIVENESSAWARD_RETHandler::.ctor()
extern MethodInfo GC_ASK_ACTIVENESSAWARD_RETHandler__ctor_m15408_MethodInfo;
 void GC_ASK_ACTIVENESSAWARD_RETHandler__ctor_m15408 (GC_ASK_ACTIVENESSAWARD_RETHandler_t2542 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ASK_ACTIVENESSAWARD_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_ASK_ACTIVENESSAWARD_RETHandler_Execute_m15409_MethodInfo;
 uint32_t GC_ASK_ACTIVENESSAWARD_RETHandler_Execute_m15409 (GC_ASK_ACTIVENESSAWARD_RETHandler_t2542 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ASK_ACTIVENESSAWARD_RET_t3074 * V_0 = {0};
	{
		V_0 = ((GC_ASK_ACTIVENESSAWARD_RET_t3074 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ASK_ACTIVENESSAWARD_RET_t3074_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_0);
		PlayerData_HandlePacket_m35167(L_0, V_0, /*hidden argument*/&PlayerData_HandlePacket_m35167_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ASK_ACTIVENESSAWARD_RETHandler
extern TypeInfo GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ASK_ACTIVENESSAWARD_RETHandler::.ctor()
MethodInfo GC_ASK_ACTIVENESSAWARD_RETHandler__ctor_m15408_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ASK_ACTIVENESSAWARD_RETHandler__ctor_m15408/* method */
	, &GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_il2cpp_TypeInfo/* declaring_type */
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
	, 8884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_GC_ASK_ACTIVENESSAWARD_RETHandler_Execute_m15409_ParameterInfos[] = 
{
	{"ipacket", 0, 134222358, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ASK_ACTIVENESSAWARD_RETHandler::Execute(PacketDistributed)
MethodInfo GC_ASK_ACTIVENESSAWARD_RETHandler_Execute_m15409_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ASK_ACTIVENESSAWARD_RETHandler_Execute_m15409/* method */
	, &GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_GC_ASK_ACTIVENESSAWARD_RETHandler_Execute_m15409_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8885/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_MethodInfos[] =
{
	&GC_ASK_ACTIVENESSAWARD_RETHandler__ctor_m15408_MethodInfo,
	&GC_ASK_ACTIVENESSAWARD_RETHandler_Execute_m15409_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ASK_ACTIVENESSAWARD_RETHandler_Execute_m15409_MethodInfo;
static MethodInfo* GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ASK_ACTIVENESSAWARD_RETHandler_Execute_m15409_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_0_0_0;
extern Il2CppType GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ASK_ACTIVENESSAWARD_RETHandler_t2542;
extern TypeInfo GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_il2cpp_TypeInfo;
TypeInfo GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ASK_ACTIVENESSAWARD_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_il2cpp_TypeInfo/* element_class */
	, GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_il2cpp_TypeInfo/* cast_class */
	, &GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_0_0_0/* byval_arg */
	, &GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_1_0_0/* this_arg */
	, GC_ASK_ACTIVENESSAWARD_RETHandler_t2542_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ASK_ACTIVENESSAWARD_RETHandler_t2542)/* instance_size */
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
// SPacket.SocketInstance.GC_ASK_COMMONFLAG_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_COMMONFLAG_R.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ASK_COMMONFLAG_RETHandler_t2543_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ASK_COMMONFLAG_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_COMMONFLAG_RMethodDeclarations.h"

// GC_ASK_COMMONFLAG_RET
#include "AssemblyU2DCSharp_GC_ASK_COMMONFLAG_RET.h"
// Games.UserCommonData.UserCommonData
#include "AssemblyU2DCSharp_Games_UserCommonData_UserCommonData.h"
// AwardLogic
#include "AssemblyU2DCSharp_AwardLogic.h"
// FunctionButtonLogic
#include "AssemblyU2DCSharp_FunctionButtonLogic.h"
// PlayerFrameLogic
#include "AssemblyU2DCSharp_PlayerFrameLogic.h"
// MenuBarLogic
#include "AssemblyU2DCSharp_MenuBarLogic.h"
// SystemAndAutoFightLogic
#include "AssemblyU2DCSharp_SystemAndAutoFightLogic.h"
// AutoFightLogic
#include "AssemblyU2DCSharp_AutoFightLogic.h"
// RoleViewLogic
#include "AssemblyU2DCSharp_RoleViewLogic.h"
// GemLogic
#include "AssemblyU2DCSharp_GemLogic.h"
extern TypeInfo GC_ASK_COMMONFLAG_RET_t3207_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo FunctionButtonLogic_t1415_il2cpp_TypeInfo;
extern TypeInfo PlayerFrameLogic_t1653_il2cpp_TypeInfo;
extern TypeInfo MenuBarLogic_t1544_il2cpp_TypeInfo;
extern TypeInfo SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo;
extern TypeInfo AutoFightLogic_t1218_il2cpp_TypeInfo;
extern TypeInfo RoleViewLogic_t1702_il2cpp_TypeInfo;
extern TypeInfo GemLogic_t1424_il2cpp_TypeInfo;
// Games.UserCommonData.UserCommonData
#include "AssemblyU2DCSharp_Games_UserCommonData_UserCommonDataMethodDeclarations.h"
// UIControllerBase`1<AwardLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_0MethodDeclarations.h"
// AwardLogic
#include "AssemblyU2DCSharp_AwardLogicMethodDeclarations.h"
// FunctionButtonLogic
#include "AssemblyU2DCSharp_FunctionButtonLogicMethodDeclarations.h"
// PlayerFrameLogic
#include "AssemblyU2DCSharp_PlayerFrameLogicMethodDeclarations.h"
// MenuBarLogic
#include "AssemblyU2DCSharp_MenuBarLogicMethodDeclarations.h"
// SystemAndAutoFightLogic
#include "AssemblyU2DCSharp_SystemAndAutoFightLogicMethodDeclarations.h"
// AutoFightLogic
#include "AssemblyU2DCSharp_AutoFightLogicMethodDeclarations.h"
// RoleViewLogic
#include "AssemblyU2DCSharp_RoleViewLogicMethodDeclarations.h"
// GemLogic
#include "AssemblyU2DCSharp_GemLogicMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_CommonData_m35184_MethodInfo;
extern MethodInfo UserCommonData_HandlePacket_m35659_MethodInfo;
extern MethodInfo UIControllerBase_1_Instance_m39248_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo AwardLogic_UpdateTip_m7293_MethodInfo;
extern MethodInfo FunctionButtonLogic_Instance_m8620_MethodInfo;
extern MethodInfo FunctionButtonLogic_UpdateButtonAwardTips_m8642_MethodInfo;
extern MethodInfo PlayerFrameLogic_Instance_m10530_MethodInfo;
extern MethodInfo PlayerFrameLogic_UpdateRemainNum_m10561_MethodInfo;
extern MethodInfo MenuBarLogic_Instance_m9540_MethodInfo;
extern MethodInfo MenuBarLogic_UpdateSystemCountTip_m9595_MethodInfo;
extern MethodInfo MenuBarLogic_UpdateRoleCountTip_m9596_MethodInfo;
extern MethodInfo SystemAndAutoFightLogic_Instance_m11648_MethodInfo;
extern MethodInfo SystemAndAutoFightLogic_updateRemindPoint_m11654_MethodInfo;
extern MethodInfo AutoFightLogic_Instance_m7200_MethodInfo;
extern MethodInfo AutoFightLogic_updateRemindPoint_m7205_MethodInfo;
extern MethodInfo RoleViewLogic_Instance_m11003_MethodInfo;
extern MethodInfo RoleViewLogic_updateGemRemindPoint_m11102_MethodInfo;
extern MethodInfo GemLogic_Instance_m8714_MethodInfo;
extern MethodInfo GemLogic_updateGemRemindPoint_m8719_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ASK_COMMONFLAG_RETHandler::.ctor()
extern MethodInfo GC_ASK_COMMONFLAG_RETHandler__ctor_m15410_MethodInfo;
 void GC_ASK_COMMONFLAG_RETHandler__ctor_m15410 (GC_ASK_COMMONFLAG_RETHandler_t2543 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ASK_COMMONFLAG_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_ASK_COMMONFLAG_RETHandler_Execute_m15411_MethodInfo;
 uint32_t GC_ASK_COMMONFLAG_RETHandler_Execute_m15411 (GC_ASK_COMMONFLAG_RETHandler_t2543 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ASK_COMMONFLAG_RET_t3207 * V_0 = {0};
	{
		V_0 = ((GC_ASK_COMMONFLAG_RET_t3207 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ASK_COMMONFLAG_RET_t3207_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_0);
		UserCommonData_t4952 * L_1 = PlayerData_get_CommonData_m35184(L_0, /*hidden argument*/&PlayerData_get_CommonData_m35184_MethodInfo);
		NullCheck(L_1);
		UserCommonData_HandlePacket_m35659(L_1, V_0, /*hidden argument*/&UserCommonData_HandlePacket_m35659_MethodInfo);
		AwardLogic_t1233 * L_2 = UIControllerBase_1_Instance_m39248(NULL /*static, unused*/, /*hidden argument*/&UIControllerBase_1_Instance_m39248_MethodInfo);
		bool L_3 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, L_2, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		AwardLogic_t1233 * L_4 = UIControllerBase_1_Instance_m39248(NULL /*static, unused*/, /*hidden argument*/&UIControllerBase_1_Instance_m39248_MethodInfo);
		NullCheck(L_4);
		AwardLogic_UpdateTip_m7293(L_4, /*hidden argument*/&AwardLogic_UpdateTip_m7293_MethodInfo);
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&FunctionButtonLogic_t1415_il2cpp_TypeInfo));
		FunctionButtonLogic_t1415 * L_5 = FunctionButtonLogic_Instance_m8620(NULL /*static, unused*/, /*hidden argument*/&FunctionButtonLogic_Instance_m8620_MethodInfo);
		bool L_6 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, L_5, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&FunctionButtonLogic_t1415_il2cpp_TypeInfo));
		FunctionButtonLogic_t1415 * L_7 = FunctionButtonLogic_Instance_m8620(NULL /*static, unused*/, /*hidden argument*/&FunctionButtonLogic_Instance_m8620_MethodInfo);
		NullCheck(L_7);
		FunctionButtonLogic_UpdateButtonAwardTips_m8642(L_7, /*hidden argument*/&FunctionButtonLogic_UpdateButtonAwardTips_m8642_MethodInfo);
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PlayerFrameLogic_t1653_il2cpp_TypeInfo));
		PlayerFrameLogic_t1653 * L_8 = PlayerFrameLogic_Instance_m10530(NULL /*static, unused*/, /*hidden argument*/&PlayerFrameLogic_Instance_m10530_MethodInfo);
		bool L_9 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, L_8, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PlayerFrameLogic_t1653_il2cpp_TypeInfo));
		PlayerFrameLogic_t1653 * L_10 = PlayerFrameLogic_Instance_m10530(NULL /*static, unused*/, /*hidden argument*/&PlayerFrameLogic_Instance_m10530_MethodInfo);
		NullCheck(L_10);
		PlayerFrameLogic_UpdateRemainNum_m10561(L_10, /*hidden argument*/&PlayerFrameLogic_UpdateRemainNum_m10561_MethodInfo);
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MenuBarLogic_t1544_il2cpp_TypeInfo));
		MenuBarLogic_t1544 * L_11 = MenuBarLogic_Instance_m9540(NULL /*static, unused*/, /*hidden argument*/&MenuBarLogic_Instance_m9540_MethodInfo);
		bool L_12 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, L_11, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_12)
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MenuBarLogic_t1544_il2cpp_TypeInfo));
		MenuBarLogic_t1544 * L_13 = MenuBarLogic_Instance_m9540(NULL /*static, unused*/, /*hidden argument*/&MenuBarLogic_Instance_m9540_MethodInfo);
		NullCheck(L_13);
		MenuBarLogic_UpdateSystemCountTip_m9595(L_13, /*hidden argument*/&MenuBarLogic_UpdateSystemCountTip_m9595_MethodInfo);
		MenuBarLogic_t1544 * L_14 = MenuBarLogic_Instance_m9540(NULL /*static, unused*/, /*hidden argument*/&MenuBarLogic_Instance_m9540_MethodInfo);
		NullCheck(L_14);
		MenuBarLogic_UpdateRoleCountTip_m9596(L_14, /*hidden argument*/&MenuBarLogic_UpdateRoleCountTip_m9596_MethodInfo);
	}

IL_0096:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo));
		SystemAndAutoFightLogic_t1768 * L_15 = SystemAndAutoFightLogic_Instance_m11648(NULL /*static, unused*/, /*hidden argument*/&SystemAndAutoFightLogic_Instance_m11648_MethodInfo);
		bool L_16 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, L_15, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_16)
		{
			goto IL_00b0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo));
		SystemAndAutoFightLogic_t1768 * L_17 = SystemAndAutoFightLogic_Instance_m11648(NULL /*static, unused*/, /*hidden argument*/&SystemAndAutoFightLogic_Instance_m11648_MethodInfo);
		NullCheck(L_17);
		SystemAndAutoFightLogic_updateRemindPoint_m11654(L_17, /*hidden argument*/&SystemAndAutoFightLogic_updateRemindPoint_m11654_MethodInfo);
	}

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&AutoFightLogic_t1218_il2cpp_TypeInfo));
		AutoFightLogic_t1218 * L_18 = AutoFightLogic_Instance_m7200(NULL /*static, unused*/, /*hidden argument*/&AutoFightLogic_Instance_m7200_MethodInfo);
		bool L_19 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, L_18, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_19)
		{
			goto IL_00ca;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&AutoFightLogic_t1218_il2cpp_TypeInfo));
		AutoFightLogic_t1218 * L_20 = AutoFightLogic_Instance_m7200(NULL /*static, unused*/, /*hidden argument*/&AutoFightLogic_Instance_m7200_MethodInfo);
		NullCheck(L_20);
		AutoFightLogic_updateRemindPoint_m7205(L_20, /*hidden argument*/&AutoFightLogic_updateRemindPoint_m7205_MethodInfo);
	}

IL_00ca:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RoleViewLogic_t1702_il2cpp_TypeInfo));
		RoleViewLogic_t1702 * L_21 = RoleViewLogic_Instance_m11003(NULL /*static, unused*/, /*hidden argument*/&RoleViewLogic_Instance_m11003_MethodInfo);
		bool L_22 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, L_21, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_22)
		{
			goto IL_00e4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RoleViewLogic_t1702_il2cpp_TypeInfo));
		RoleViewLogic_t1702 * L_23 = RoleViewLogic_Instance_m11003(NULL /*static, unused*/, /*hidden argument*/&RoleViewLogic_Instance_m11003_MethodInfo);
		NullCheck(L_23);
		RoleViewLogic_updateGemRemindPoint_m11102(L_23, /*hidden argument*/&RoleViewLogic_updateGemRemindPoint_m11102_MethodInfo);
	}

IL_00e4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GemLogic_t1424_il2cpp_TypeInfo));
		GemLogic_t1424 * L_24 = GemLogic_Instance_m8714(NULL /*static, unused*/, /*hidden argument*/&GemLogic_Instance_m8714_MethodInfo);
		bool L_25 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, L_24, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_25)
		{
			goto IL_00fe;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GemLogic_t1424_il2cpp_TypeInfo));
		GemLogic_t1424 * L_26 = GemLogic_Instance_m8714(NULL /*static, unused*/, /*hidden argument*/&GemLogic_Instance_m8714_MethodInfo);
		NullCheck(L_26);
		GemLogic_updateGemRemindPoint_m8719(L_26, /*hidden argument*/&GemLogic_updateGemRemindPoint_m8719_MethodInfo);
	}

IL_00fe:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ASK_COMMONFLAG_RETHandler
extern TypeInfo GC_ASK_COMMONFLAG_RETHandler_t2543_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ASK_COMMONFLAG_RETHandler::.ctor()
MethodInfo GC_ASK_COMMONFLAG_RETHandler__ctor_m15410_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ASK_COMMONFLAG_RETHandler__ctor_m15410/* method */
	, &GC_ASK_COMMONFLAG_RETHandler_t2543_il2cpp_TypeInfo/* declaring_type */
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
	, 8886/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ASK_COMMONFLAG_RETHandler_t2543_GC_ASK_COMMONFLAG_RETHandler_Execute_m15411_ParameterInfos[] = 
{
	{"ipacket", 0, 134222359, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ASK_COMMONFLAG_RETHandler_t2543_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ASK_COMMONFLAG_RETHandler::Execute(PacketDistributed)
MethodInfo GC_ASK_COMMONFLAG_RETHandler_Execute_m15411_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ASK_COMMONFLAG_RETHandler_Execute_m15411/* method */
	, &GC_ASK_COMMONFLAG_RETHandler_t2543_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ASK_COMMONFLAG_RETHandler_t2543_GC_ASK_COMMONFLAG_RETHandler_Execute_m15411_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8887/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ASK_COMMONFLAG_RETHandler_t2543_MethodInfos[] =
{
	&GC_ASK_COMMONFLAG_RETHandler__ctor_m15410_MethodInfo,
	&GC_ASK_COMMONFLAG_RETHandler_Execute_m15411_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ASK_COMMONFLAG_RETHandler_Execute_m15411_MethodInfo;
static MethodInfo* GC_ASK_COMMONFLAG_RETHandler_t2543_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ASK_COMMONFLAG_RETHandler_Execute_m15411_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ASK_COMMONFLAG_RETHandler_t2543_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ASK_COMMONFLAG_RETHandler_t2543_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ASK_COMMONFLAG_RETHandler_t2543_0_0_0;
extern Il2CppType GC_ASK_COMMONFLAG_RETHandler_t2543_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ASK_COMMONFLAG_RETHandler_t2543;
extern TypeInfo GC_ASK_COMMONFLAG_RETHandler_t2543_il2cpp_TypeInfo;
TypeInfo GC_ASK_COMMONFLAG_RETHandler_t2543_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ASK_COMMONFLAG_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ASK_COMMONFLAG_RETHandler_t2543_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ASK_COMMONFLAG_RETHandler_t2543_il2cpp_TypeInfo/* element_class */
	, GC_ASK_COMMONFLAG_RETHandler_t2543_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ASK_COMMONFLAG_RETHandler_t2543_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ASK_COMMONFLAG_RETHandler_t2543_il2cpp_TypeInfo/* cast_class */
	, &GC_ASK_COMMONFLAG_RETHandler_t2543_0_0_0/* byval_arg */
	, &GC_ASK_COMMONFLAG_RETHandler_t2543_1_0_0/* this_arg */
	, GC_ASK_COMMONFLAG_RETHandler_t2543_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ASK_COMMONFLAG_RETHandler_t2543)/* instance_size */
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
// SPacket.SocketInstance.GC_ASK_GAIN_10_FELLOW_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_GAIN_10_FELL.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ASK_GAIN_10_FELLOW_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_GAIN_10_FELLMethodDeclarations.h"

// GC_ASK_GAIN_10_FELLOW_RET
#include "AssemblyU2DCSharp_GC_ASK_GAIN_10_FELLOW_RET.h"
extern TypeInfo GC_ASK_GAIN_10_FELLOW_RET_t3371_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ASK_GAIN_10_FELLOW_RETHandler::.ctor()
extern MethodInfo GC_ASK_GAIN_10_FELLOW_RETHandler__ctor_m15412_MethodInfo;
 void GC_ASK_GAIN_10_FELLOW_RETHandler__ctor_m15412 (GC_ASK_GAIN_10_FELLOW_RETHandler_t2544 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ASK_GAIN_10_FELLOW_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_ASK_GAIN_10_FELLOW_RETHandler_Execute_m15413_MethodInfo;
 uint32_t GC_ASK_GAIN_10_FELLOW_RETHandler_Execute_m15413 (GC_ASK_GAIN_10_FELLOW_RETHandler_t2544 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ASK_GAIN_10_FELLOW_RET_t3371 * V_0 = {0};
	{
		V_0 = ((GC_ASK_GAIN_10_FELLOW_RET_t3371 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ASK_GAIN_10_FELLOW_RET_t3371_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.GC_ASK_GAIN_10_FELLOW_RETHandler
extern TypeInfo GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ASK_GAIN_10_FELLOW_RETHandler::.ctor()
MethodInfo GC_ASK_GAIN_10_FELLOW_RETHandler__ctor_m15412_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ASK_GAIN_10_FELLOW_RETHandler__ctor_m15412/* method */
	, &GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_il2cpp_TypeInfo/* declaring_type */
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
	, 8888/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_GC_ASK_GAIN_10_FELLOW_RETHandler_Execute_m15413_ParameterInfos[] = 
{
	{"ipacket", 0, 134222360, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ASK_GAIN_10_FELLOW_RETHandler::Execute(PacketDistributed)
MethodInfo GC_ASK_GAIN_10_FELLOW_RETHandler_Execute_m15413_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ASK_GAIN_10_FELLOW_RETHandler_Execute_m15413/* method */
	, &GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_GC_ASK_GAIN_10_FELLOW_RETHandler_Execute_m15413_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8889/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_MethodInfos[] =
{
	&GC_ASK_GAIN_10_FELLOW_RETHandler__ctor_m15412_MethodInfo,
	&GC_ASK_GAIN_10_FELLOW_RETHandler_Execute_m15413_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ASK_GAIN_10_FELLOW_RETHandler_Execute_m15413_MethodInfo;
static MethodInfo* GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ASK_GAIN_10_FELLOW_RETHandler_Execute_m15413_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_0_0_0;
extern Il2CppType GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ASK_GAIN_10_FELLOW_RETHandler_t2544;
extern TypeInfo GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_il2cpp_TypeInfo;
TypeInfo GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ASK_GAIN_10_FELLOW_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_il2cpp_TypeInfo/* element_class */
	, GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_il2cpp_TypeInfo/* cast_class */
	, &GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_0_0_0/* byval_arg */
	, &GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_1_0_0/* this_arg */
	, GC_ASK_GAIN_10_FELLOW_RETHandler_t2544_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ASK_GAIN_10_FELLOW_RETHandler_t2544)/* instance_size */
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
// SPacket.SocketInstance.GC_ASK_GAIN_FELLOW_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_GAIN_FELLOW_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ASK_GAIN_FELLOW_RETHandler_t2545_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ASK_GAIN_FELLOW_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_GAIN_FELLOW_MethodDeclarations.h"

// GC_ASK_GAIN_FELLOW_RET
#include "AssemblyU2DCSharp_GC_ASK_GAIN_FELLOW_RET.h"
extern TypeInfo GC_ASK_GAIN_FELLOW_RET_t3167_il2cpp_TypeInfo;
// GC_ASK_GAIN_FELLOW_RET
#include "AssemblyU2DCSharp_GC_ASK_GAIN_FELLOW_RETMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_ASK_GAIN_FELLOW_RET_get_Fellowid_m20644_MethodInfo;
extern MethodInfo GC_ASK_GAIN_FELLOW_RET_get_Fellowstarlevel_m20652_MethodInfo;
extern MethodInfo GC_ASK_GAIN_FELLOW_RET_get_Fellowguid_m20648_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ASK_GAIN_FELLOW_RETHandler::.ctor()
extern MethodInfo GC_ASK_GAIN_FELLOW_RETHandler__ctor_m15414_MethodInfo;
 void GC_ASK_GAIN_FELLOW_RETHandler__ctor_m15414 (GC_ASK_GAIN_FELLOW_RETHandler_t2545 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ASK_GAIN_FELLOW_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_ASK_GAIN_FELLOW_RETHandler_Execute_m15415_MethodInfo;
 uint32_t GC_ASK_GAIN_FELLOW_RETHandler_Execute_m15415 (GC_ASK_GAIN_FELLOW_RETHandler_t2545 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ASK_GAIN_FELLOW_RET_t3167 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		V_0 = ((GC_ASK_GAIN_FELLOW_RET_t3167 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ASK_GAIN_FELLOW_RET_t3167_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_ASK_GAIN_FELLOW_RET_get_Fellowid_m20644(V_0, /*hidden argument*/&GC_ASK_GAIN_FELLOW_RET_get_Fellowid_m20644_MethodInfo);
		V_1 = L_0;
		NullCheck(V_0);
		int32_t L_1 = GC_ASK_GAIN_FELLOW_RET_get_Fellowstarlevel_m20652(V_0, /*hidden argument*/&GC_ASK_GAIN_FELLOW_RET_get_Fellowstarlevel_m20652_MethodInfo);
		V_2 = L_1;
		NullCheck(V_0);
		uint64_t L_2 = GC_ASK_GAIN_FELLOW_RET_get_Fellowguid_m20648(V_0, /*hidden argument*/&GC_ASK_GAIN_FELLOW_RET_get_Fellowguid_m20648_MethodInfo);
		V_3 = L_2;
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ASK_GAIN_FELLOW_RETHandler
extern TypeInfo GC_ASK_GAIN_FELLOW_RETHandler_t2545_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ASK_GAIN_FELLOW_RETHandler::.ctor()
MethodInfo GC_ASK_GAIN_FELLOW_RETHandler__ctor_m15414_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ASK_GAIN_FELLOW_RETHandler__ctor_m15414/* method */
	, &GC_ASK_GAIN_FELLOW_RETHandler_t2545_il2cpp_TypeInfo/* declaring_type */
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
	, 8890/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ASK_GAIN_FELLOW_RETHandler_t2545_GC_ASK_GAIN_FELLOW_RETHandler_Execute_m15415_ParameterInfos[] = 
{
	{"ipacket", 0, 134222361, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ASK_GAIN_FELLOW_RETHandler_t2545_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ASK_GAIN_FELLOW_RETHandler::Execute(PacketDistributed)
MethodInfo GC_ASK_GAIN_FELLOW_RETHandler_Execute_m15415_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ASK_GAIN_FELLOW_RETHandler_Execute_m15415/* method */
	, &GC_ASK_GAIN_FELLOW_RETHandler_t2545_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ASK_GAIN_FELLOW_RETHandler_t2545_GC_ASK_GAIN_FELLOW_RETHandler_Execute_m15415_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8891/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ASK_GAIN_FELLOW_RETHandler_t2545_MethodInfos[] =
{
	&GC_ASK_GAIN_FELLOW_RETHandler__ctor_m15414_MethodInfo,
	&GC_ASK_GAIN_FELLOW_RETHandler_Execute_m15415_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ASK_GAIN_FELLOW_RETHandler_Execute_m15415_MethodInfo;
static MethodInfo* GC_ASK_GAIN_FELLOW_RETHandler_t2545_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ASK_GAIN_FELLOW_RETHandler_Execute_m15415_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ASK_GAIN_FELLOW_RETHandler_t2545_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ASK_GAIN_FELLOW_RETHandler_t2545_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ASK_GAIN_FELLOW_RETHandler_t2545_0_0_0;
extern Il2CppType GC_ASK_GAIN_FELLOW_RETHandler_t2545_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ASK_GAIN_FELLOW_RETHandler_t2545;
extern TypeInfo GC_ASK_GAIN_FELLOW_RETHandler_t2545_il2cpp_TypeInfo;
TypeInfo GC_ASK_GAIN_FELLOW_RETHandler_t2545_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ASK_GAIN_FELLOW_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ASK_GAIN_FELLOW_RETHandler_t2545_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ASK_GAIN_FELLOW_RETHandler_t2545_il2cpp_TypeInfo/* element_class */
	, GC_ASK_GAIN_FELLOW_RETHandler_t2545_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ASK_GAIN_FELLOW_RETHandler_t2545_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ASK_GAIN_FELLOW_RETHandler_t2545_il2cpp_TypeInfo/* cast_class */
	, &GC_ASK_GAIN_FELLOW_RETHandler_t2545_0_0_0/* byval_arg */
	, &GC_ASK_GAIN_FELLOW_RETHandler_t2545_1_0_0/* this_arg */
	, GC_ASK_GAIN_FELLOW_RETHandler_t2545_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ASK_GAIN_FELLOW_RETHandler_t2545)/* instance_size */
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
// SPacket.SocketInstance.GC_ASK_LOUDSPEAKER_CONTENTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_LOUDSPEAKER_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ASK_LOUDSPEAKER_CONTENTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_LOUDSPEAKER_MethodDeclarations.h"

// GC_ASK_LOUDSPEAKER_CONTENT
#include "AssemblyU2DCSharp_GC_ASK_LOUDSPEAKER_CONTENT.h"
// LoudSpeakerLogic
#include "AssemblyU2DCSharp_LoudSpeakerLogic.h"
extern TypeInfo GC_ASK_LOUDSPEAKER_CONTENT_t3165_il2cpp_TypeInfo;
extern TypeInfo LoudSpeakerLogic_t1303_il2cpp_TypeInfo;
// LoudSpeakerLogic
#include "AssemblyU2DCSharp_LoudSpeakerLogicMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo LoudSpeakerLogic_Instance_m9426_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo LoudSpeakerLogic_SendLoudSpeakerInfo_m9463_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ASK_LOUDSPEAKER_CONTENTHandler::.ctor()
extern MethodInfo GC_ASK_LOUDSPEAKER_CONTENTHandler__ctor_m15416_MethodInfo;
 void GC_ASK_LOUDSPEAKER_CONTENTHandler__ctor_m15416 (GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ASK_LOUDSPEAKER_CONTENTHandler::Execute(PacketDistributed)
extern MethodInfo GC_ASK_LOUDSPEAKER_CONTENTHandler_Execute_m15417_MethodInfo;
 uint32_t GC_ASK_LOUDSPEAKER_CONTENTHandler_Execute_m15417 (GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ASK_LOUDSPEAKER_CONTENT_t3165 * V_0 = {0};
	{
		V_0 = ((GC_ASK_LOUDSPEAKER_CONTENT_t3165 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ASK_LOUDSPEAKER_CONTENT_t3165_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LoudSpeakerLogic_t1303_il2cpp_TypeInfo));
		LoudSpeakerLogic_t1303 * L_0 = LoudSpeakerLogic_Instance_m9426(NULL /*static, unused*/, /*hidden argument*/&LoudSpeakerLogic_Instance_m9426_MethodInfo);
		bool L_1 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_0, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LoudSpeakerLogic_t1303_il2cpp_TypeInfo));
		LoudSpeakerLogic_t1303 * L_2 = LoudSpeakerLogic_Instance_m9426(NULL /*static, unused*/, /*hidden argument*/&LoudSpeakerLogic_Instance_m9426_MethodInfo);
		NullCheck(L_2);
		LoudSpeakerLogic_SendLoudSpeakerInfo_m9463(L_2, /*hidden argument*/&LoudSpeakerLogic_SendLoudSpeakerInfo_m9463_MethodInfo);
	}

IL_0029:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ASK_LOUDSPEAKER_CONTENTHandler
extern TypeInfo GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ASK_LOUDSPEAKER_CONTENTHandler::.ctor()
MethodInfo GC_ASK_LOUDSPEAKER_CONTENTHandler__ctor_m15416_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ASK_LOUDSPEAKER_CONTENTHandler__ctor_m15416/* method */
	, &GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_il2cpp_TypeInfo/* declaring_type */
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
	, 8892/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_GC_ASK_LOUDSPEAKER_CONTENTHandler_Execute_m15417_ParameterInfos[] = 
{
	{"ipacket", 0, 134222362, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ASK_LOUDSPEAKER_CONTENTHandler::Execute(PacketDistributed)
MethodInfo GC_ASK_LOUDSPEAKER_CONTENTHandler_Execute_m15417_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ASK_LOUDSPEAKER_CONTENTHandler_Execute_m15417/* method */
	, &GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_GC_ASK_LOUDSPEAKER_CONTENTHandler_Execute_m15417_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8893/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_MethodInfos[] =
{
	&GC_ASK_LOUDSPEAKER_CONTENTHandler__ctor_m15416_MethodInfo,
	&GC_ASK_LOUDSPEAKER_CONTENTHandler_Execute_m15417_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ASK_LOUDSPEAKER_CONTENTHandler_Execute_m15417_MethodInfo;
static MethodInfo* GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ASK_LOUDSPEAKER_CONTENTHandler_Execute_m15417_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_0_0_0;
extern Il2CppType GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546;
extern TypeInfo GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_il2cpp_TypeInfo;
TypeInfo GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ASK_LOUDSPEAKER_CONTENTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_il2cpp_TypeInfo/* element_class */
	, GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_il2cpp_TypeInfo/* cast_class */
	, &GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_0_0_0/* byval_arg */
	, &GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_1_0_0/* this_arg */
	, GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ASK_LOUDSPEAKER_CONTENTHandler_t2546)/* instance_size */
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
// SPacket.SocketInstance.GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_PAY_ACTIVITY.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_PAY_ACTIVITYMethodDeclarations.h"

// GC_ASK_PAY_ACTIVITY_PRIZE_RET
#include "AssemblyU2DCSharp_GC_ASK_PAY_ACTIVITY_PRIZE_RET.h"
// PayActivityData
#include "AssemblyU2DCSharp_PayActivityData.h"
extern TypeInfo GC_ASK_PAY_ACTIVITY_PRIZE_RET_t3379_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
// PayActivityData
#include "AssemblyU2DCSharp_PayActivityDataMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_PayActivity_m35290_MethodInfo;
extern MethodInfo PayActivityData_HandlePacket_m35016_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler::.ctor()
extern MethodInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler__ctor_m15418_MethodInfo;
 void GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler__ctor_m15418 (GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_Execute_m15419_MethodInfo;
 uint32_t GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_Execute_m15419 (GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ASK_PAY_ACTIVITY_PRIZE_RET_t3379 * V_0 = {0};
	PayActivityData_t4938  V_1 = {0};
	{
		V_0 = ((GC_ASK_PAY_ACTIVITY_PRIZE_RET_t3379 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ASK_PAY_ACTIVITY_PRIZE_RET_t3379_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_1 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_1);
		PayActivityData_t4938  L_2 = PlayerData_get_PayActivity_m35290(L_1, /*hidden argument*/&PlayerData_get_PayActivity_m35290_MethodInfo);
		V_1 = L_2;
		PayActivityData_HandlePacket_m35016((&V_1), V_0, /*hidden argument*/&PayActivityData_HandlePacket_m35016_MethodInfo);
	}

IL_0036:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler
extern TypeInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler::.ctor()
MethodInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler__ctor_m15418_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler__ctor_m15418/* method */
	, &GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_il2cpp_TypeInfo/* declaring_type */
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
	, 8894/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_Execute_m15419_ParameterInfos[] = 
{
	{"ipacket", 0, 134222363, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler::Execute(PacketDistributed)
MethodInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_Execute_m15419_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_Execute_m15419/* method */
	, &GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_Execute_m15419_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8895/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_MethodInfos[] =
{
	&GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler__ctor_m15418_MethodInfo,
	&GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_Execute_m15419_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_Execute_m15419_MethodInfo;
static MethodInfo* GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_Execute_m15419_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_0_0_0;
extern Il2CppType GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547;
extern TypeInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_il2cpp_TypeInfo;
TypeInfo GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_il2cpp_TypeInfo/* element_class */
	, GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_il2cpp_TypeInfo/* cast_class */
	, &GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_0_0_0/* byval_arg */
	, &GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_1_0_0/* this_arg */
	, GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ASK_PAY_ACTIVITY_PRIZE_RETHandler_t2547)/* instance_size */
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
// SPacket.SocketInstance.GC_ASK_STARTGUILDWARHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_STARTGUILDWA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ASK_STARTGUILDWARHandler_t2548_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ASK_STARTGUILDWARHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_STARTGUILDWAMethodDeclarations.h"

// GC_ASK_STARTGUILDWAR
#include "AssemblyU2DCSharp_GC_ASK_STARTGUILDWAR.h"
extern TypeInfo GC_ASK_STARTGUILDWAR_t3302_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ASK_STARTGUILDWARHandler::.ctor()
extern MethodInfo GC_ASK_STARTGUILDWARHandler__ctor_m15420_MethodInfo;
 void GC_ASK_STARTGUILDWARHandler__ctor_m15420 (GC_ASK_STARTGUILDWARHandler_t2548 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ASK_STARTGUILDWARHandler::Execute(PacketDistributed)
extern MethodInfo GC_ASK_STARTGUILDWARHandler_Execute_m15421_MethodInfo;
 uint32_t GC_ASK_STARTGUILDWARHandler_Execute_m15421 (GC_ASK_STARTGUILDWARHandler_t2548 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ASK_STARTGUILDWAR_t3302 * V_0 = {0};
	{
		V_0 = ((GC_ASK_STARTGUILDWAR_t3302 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ASK_STARTGUILDWAR_t3302_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.GC_ASK_STARTGUILDWARHandler
extern TypeInfo GC_ASK_STARTGUILDWARHandler_t2548_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ASK_STARTGUILDWARHandler::.ctor()
MethodInfo GC_ASK_STARTGUILDWARHandler__ctor_m15420_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ASK_STARTGUILDWARHandler__ctor_m15420/* method */
	, &GC_ASK_STARTGUILDWARHandler_t2548_il2cpp_TypeInfo/* declaring_type */
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
	, 8896/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ASK_STARTGUILDWARHandler_t2548_GC_ASK_STARTGUILDWARHandler_Execute_m15421_ParameterInfos[] = 
{
	{"ipacket", 0, 134222364, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ASK_STARTGUILDWARHandler_t2548_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ASK_STARTGUILDWARHandler::Execute(PacketDistributed)
MethodInfo GC_ASK_STARTGUILDWARHandler_Execute_m15421_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ASK_STARTGUILDWARHandler_Execute_m15421/* method */
	, &GC_ASK_STARTGUILDWARHandler_t2548_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ASK_STARTGUILDWARHandler_t2548_GC_ASK_STARTGUILDWARHandler_Execute_m15421_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8897/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ASK_STARTGUILDWARHandler_t2548_MethodInfos[] =
{
	&GC_ASK_STARTGUILDWARHandler__ctor_m15420_MethodInfo,
	&GC_ASK_STARTGUILDWARHandler_Execute_m15421_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ASK_STARTGUILDWARHandler_Execute_m15421_MethodInfo;
static MethodInfo* GC_ASK_STARTGUILDWARHandler_t2548_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ASK_STARTGUILDWARHandler_Execute_m15421_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ASK_STARTGUILDWARHandler_t2548_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ASK_STARTGUILDWARHandler_t2548_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ASK_STARTGUILDWARHandler_t2548_0_0_0;
extern Il2CppType GC_ASK_STARTGUILDWARHandler_t2548_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ASK_STARTGUILDWARHandler_t2548;
extern TypeInfo GC_ASK_STARTGUILDWARHandler_t2548_il2cpp_TypeInfo;
TypeInfo GC_ASK_STARTGUILDWARHandler_t2548_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ASK_STARTGUILDWARHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ASK_STARTGUILDWARHandler_t2548_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ASK_STARTGUILDWARHandler_t2548_il2cpp_TypeInfo/* element_class */
	, GC_ASK_STARTGUILDWARHandler_t2548_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ASK_STARTGUILDWARHandler_t2548_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ASK_STARTGUILDWARHandler_t2548_il2cpp_TypeInfo/* cast_class */
	, &GC_ASK_STARTGUILDWARHandler_t2548_0_0_0/* byval_arg */
	, &GC_ASK_STARTGUILDWARHandler_t2548_1_0_0/* this_arg */
	, GC_ASK_STARTGUILDWARHandler_t2548_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ASK_STARTGUILDWARHandler_t2548)/* instance_size */
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
// SPacket.SocketInstance.GC_ASK_UPDATE_STORAGEPACK_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_UPDATE_STORA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ASK_UPDATE_STORAGEPACK_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ASK_UPDATE_STORAMethodDeclarations.h"

// GC_ASK_UPDATE_STORAGEPACK_RET
#include "AssemblyU2DCSharp_GC_ASK_UPDATE_STORAGEPACK_RET.h"
extern TypeInfo GC_ASK_UPDATE_STORAGEPACK_RET_t3385_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ASK_UPDATE_STORAGEPACK_RETHandler::.ctor()
extern MethodInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler__ctor_m15422_MethodInfo;
 void GC_ASK_UPDATE_STORAGEPACK_RETHandler__ctor_m15422 (GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ASK_UPDATE_STORAGEPACK_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler_Execute_m15423_MethodInfo;
 uint32_t GC_ASK_UPDATE_STORAGEPACK_RETHandler_Execute_m15423 (GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ASK_UPDATE_STORAGEPACK_RET_t3385 * V_0 = {0};
	{
		V_0 = ((GC_ASK_UPDATE_STORAGEPACK_RET_t3385 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ASK_UPDATE_STORAGEPACK_RET_t3385_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.GC_ASK_UPDATE_STORAGEPACK_RETHandler
extern TypeInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ASK_UPDATE_STORAGEPACK_RETHandler::.ctor()
MethodInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler__ctor_m15422_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ASK_UPDATE_STORAGEPACK_RETHandler__ctor_m15422/* method */
	, &GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_il2cpp_TypeInfo/* declaring_type */
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
	, 8898/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_GC_ASK_UPDATE_STORAGEPACK_RETHandler_Execute_m15423_ParameterInfos[] = 
{
	{"ipacket", 0, 134222365, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ASK_UPDATE_STORAGEPACK_RETHandler::Execute(PacketDistributed)
MethodInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler_Execute_m15423_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ASK_UPDATE_STORAGEPACK_RETHandler_Execute_m15423/* method */
	, &GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_GC_ASK_UPDATE_STORAGEPACK_RETHandler_Execute_m15423_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8899/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_MethodInfos[] =
{
	&GC_ASK_UPDATE_STORAGEPACK_RETHandler__ctor_m15422_MethodInfo,
	&GC_ASK_UPDATE_STORAGEPACK_RETHandler_Execute_m15423_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler_Execute_m15423_MethodInfo;
static MethodInfo* GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ASK_UPDATE_STORAGEPACK_RETHandler_Execute_m15423_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_0_0_0;
extern Il2CppType GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549;
extern TypeInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_il2cpp_TypeInfo;
TypeInfo GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ASK_UPDATE_STORAGEPACK_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_il2cpp_TypeInfo/* element_class */
	, GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_il2cpp_TypeInfo/* cast_class */
	, &GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_0_0_0/* byval_arg */
	, &GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_1_0_0/* this_arg */
	, GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ASK_UPDATE_STORAGEPACK_RETHandler_t2549)/* instance_size */
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
// SPacket.SocketInstance.GC_ATTACKFLYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ATTACKFLYHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_ATTACKFLYHandler_t2550_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_ATTACKFLYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_ATTACKFLYHandlerMethodDeclarations.h"

// GC_ATTACKFLY
#include "AssemblyU2DCSharp_GC_ATTACKFLY.h"
// Games.LogicObj.Obj_Character
#include "AssemblyU2DCSharp_Games_LogicObj_Obj_Character.h"
// Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_ANI.h"
// System.Single
#include "mscorlib_System_Single.h"
extern TypeInfo GC_ATTACKFLY_t3131_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
// GC_ATTACKFLY
#include "AssemblyU2DCSharp_GC_ATTACKFLYMethodDeclarations.h"
// Games.LogicObj.Obj_Character
#include "AssemblyU2DCSharp_Games_LogicObj_Obj_CharacterMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo GC_ATTACKFLY_get_ObjId_m20260_MethodInfo;
extern MethodInfo ObjManager_FindObjCharacterInScene_m31348_MethodInfo;
extern MethodInfo Object_op_Implicit_m4087_MethodInfo;
extern MethodInfo Obj_Character_set_CurObjAnimState_m31478_MethodInfo;
extern MethodInfo GC_ATTACKFLY_get_Dis_m20264_MethodInfo;
extern MethodInfo GC_ATTACKFLY_get_Hight_m20268_MethodInfo;
extern MethodInfo GC_ATTACKFLY_get_FlyTime_m20272_MethodInfo;
extern MethodInfo Obj_Character_AttackFly_m31494_MethodInfo;


// System.Void SPacket.SocketInstance.GC_ATTACKFLYHandler::.ctor()
extern MethodInfo GC_ATTACKFLYHandler__ctor_m15424_MethodInfo;
 void GC_ATTACKFLYHandler__ctor_m15424 (GC_ATTACKFLYHandler_t2550 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_ATTACKFLYHandler::Execute(PacketDistributed)
extern MethodInfo GC_ATTACKFLYHandler_Execute_m15425_MethodInfo;
 uint32_t GC_ATTACKFLYHandler_Execute_m15425 (GC_ATTACKFLYHandler_t2550 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_ATTACKFLY_t3131 * V_0 = {0};
	Obj_Character_t1772 * V_1 = {0};
	{
		V_0 = ((GC_ATTACKFLY_t3131 *)Castclass(___ipacket, InitializedTypeInfo(&GC_ATTACKFLY_t3131_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_0 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_1 = GC_ATTACKFLY_get_ObjId_m20260(V_0, /*hidden argument*/&GC_ATTACKFLY_get_ObjId_m20260_MethodInfo);
		NullCheck(L_0);
		Obj_Character_t1772 * L_2 = ObjManager_FindObjCharacterInScene_m31348(L_0, L_1, /*hidden argument*/&ObjManager_FindObjCharacterInScene_m31348_MethodInfo);
		V_1 = L_2;
		bool L_3 = Object_op_Implicit_m4087(NULL /*static, unused*/, V_1, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		NullCheck(V_1);
		Obj_Character_set_CurObjAnimState_m31478(V_1, 4, /*hidden argument*/&Obj_Character_set_CurObjAnimState_m31478_MethodInfo);
		NullCheck(V_0);
		int32_t L_4 = GC_ATTACKFLY_get_Dis_m20264(V_0, /*hidden argument*/&GC_ATTACKFLY_get_Dis_m20264_MethodInfo);
		NullCheck(V_0);
		int32_t L_5 = GC_ATTACKFLY_get_Hight_m20268(V_0, /*hidden argument*/&GC_ATTACKFLY_get_Hight_m20268_MethodInfo);
		NullCheck(V_0);
		int32_t L_6 = GC_ATTACKFLY_get_FlyTime_m20272(V_0, /*hidden argument*/&GC_ATTACKFLY_get_FlyTime_m20272_MethodInfo);
		NullCheck(V_1);
		Obj_Character_AttackFly_m31494(V_1, L_4, L_5, ((float)((((float)L_6))/(1000.0f))), /*hidden argument*/&Obj_Character_AttackFly_m31494_MethodInfo);
	}

IL_0051:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_ATTACKFLYHandler
extern TypeInfo GC_ATTACKFLYHandler_t2550_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_ATTACKFLYHandler::.ctor()
MethodInfo GC_ATTACKFLYHandler__ctor_m15424_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_ATTACKFLYHandler__ctor_m15424/* method */
	, &GC_ATTACKFLYHandler_t2550_il2cpp_TypeInfo/* declaring_type */
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
	, 8900/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_ATTACKFLYHandler_t2550_GC_ATTACKFLYHandler_Execute_m15425_ParameterInfos[] = 
{
	{"ipacket", 0, 134222366, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_ATTACKFLYHandler_t2550_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_ATTACKFLYHandler::Execute(PacketDistributed)
MethodInfo GC_ATTACKFLYHandler_Execute_m15425_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_ATTACKFLYHandler_Execute_m15425/* method */
	, &GC_ATTACKFLYHandler_t2550_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_ATTACKFLYHandler_t2550_GC_ATTACKFLYHandler_Execute_m15425_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8901/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_ATTACKFLYHandler_t2550_MethodInfos[] =
{
	&GC_ATTACKFLYHandler__ctor_m15424_MethodInfo,
	&GC_ATTACKFLYHandler_Execute_m15425_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_ATTACKFLYHandler_Execute_m15425_MethodInfo;
static MethodInfo* GC_ATTACKFLYHandler_t2550_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_ATTACKFLYHandler_Execute_m15425_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_ATTACKFLYHandler_t2550_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_ATTACKFLYHandler_t2550_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_ATTACKFLYHandler_t2550_0_0_0;
extern Il2CppType GC_ATTACKFLYHandler_t2550_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_ATTACKFLYHandler_t2550;
extern TypeInfo GC_ATTACKFLYHandler_t2550_il2cpp_TypeInfo;
TypeInfo GC_ATTACKFLYHandler_t2550_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_ATTACKFLYHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_ATTACKFLYHandler_t2550_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_ATTACKFLYHandler_t2550_il2cpp_TypeInfo/* element_class */
	, GC_ATTACKFLYHandler_t2550_InterfacesTypeInfos/* implemented_interfaces */
	, GC_ATTACKFLYHandler_t2550_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_ATTACKFLYHandler_t2550_il2cpp_TypeInfo/* cast_class */
	, &GC_ATTACKFLYHandler_t2550_0_0_0/* byval_arg */
	, &GC_ATTACKFLYHandler_t2550_1_0_0/* this_arg */
	, GC_ATTACKFLYHandler_t2550_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_ATTACKFLYHandler_t2550)/* instance_size */
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
// SPacket.SocketInstance.GC_BACKPACK_RESIZEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BACKPACK_RESIZEH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BACKPACK_RESIZEHandler_t2551_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BACKPACK_RESIZEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BACKPACK_RESIZEHMethodDeclarations.h"

// GC_BACKPACK_RESIZE
#include "AssemblyU2DCSharp_GC_BACKPACK_RESIZE.h"
// Games.Item.GameItemContainer
#include "AssemblyU2DCSharp_Games_Item_GameItemContainer.h"
// BackPackLogic
#include "AssemblyU2DCSharp_BackPackLogic.h"
// CangKuLogic
#include "AssemblyU2DCSharp_CangKuLogic.h"
extern TypeInfo GC_BACKPACK_RESIZE_t3135_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo BackPackLogic_t1240_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CangKuLogic_t1272_il2cpp_TypeInfo;
// GC_BACKPACK_RESIZE
#include "AssemblyU2DCSharp_GC_BACKPACK_RESIZEMethodDeclarations.h"
// Games.Item.GameItemContainer
#include "AssemblyU2DCSharp_Games_Item_GameItemContainerMethodDeclarations.h"
// BackPackLogic
#include "AssemblyU2DCSharp_BackPackLogicMethodDeclarations.h"
// CangKuLogic
#include "AssemblyU2DCSharp_CangKuLogicMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_BACKPACK_RESIZE_get_Packtype_m20316_MethodInfo;
extern MethodInfo GC_BACKPACK_RESIZE_get_Size_m20312_MethodInfo;
extern MethodInfo GC_BACKPACK_RESIZE_get_Type_m20308_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_BackPack_m35084_MethodInfo;
extern MethodInfo GameItemContainer_get_ContainerSize_m33766_MethodInfo;
extern MethodInfo GameItemContainer_AddContainerSize_m33767_MethodInfo;
extern MethodInfo BackPackLogic_Instance_m7325_MethodInfo;
extern MethodInfo Object_op_Implicit_m4087_MethodInfo;
extern MethodInfo BackPackLogic_UpdateBackPack_m7340_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Obj_MainPlayer_SendNoticMsg_m31723_MethodInfo;
extern MethodInfo PlayerData_get_StoragePack_m35090_MethodInfo;
extern MethodInfo CangKuLogic_Instance_m7471_MethodInfo;
extern MethodInfo CangKuLogic_UpdateCangKu_m7477_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BACKPACK_RESIZEHandler::.ctor()
extern MethodInfo GC_BACKPACK_RESIZEHandler__ctor_m15426_MethodInfo;
 void GC_BACKPACK_RESIZEHandler__ctor_m15426 (GC_BACKPACK_RESIZEHandler_t2551 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BACKPACK_RESIZEHandler::Execute(PacketDistributed)
extern MethodInfo GC_BACKPACK_RESIZEHandler_Execute_m15427_MethodInfo;
 uint32_t GC_BACKPACK_RESIZEHandler_Execute_m15427 (GC_BACKPACK_RESIZEHandler_t2551 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BACKPACK_RESIZE_t3135 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		V_0 = ((GC_BACKPACK_RESIZE_t3135 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BACKPACK_RESIZE_t3135_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_BACKPACK_RESIZE_get_Packtype_m20316(V_0, /*hidden argument*/&GC_BACKPACK_RESIZE_get_Packtype_m20316_MethodInfo);
		V_1 = L_0;
		NullCheck(V_0);
		int32_t L_1 = GC_BACKPACK_RESIZE_get_Size_m20312(V_0, /*hidden argument*/&GC_BACKPACK_RESIZE_get_Size_m20312_MethodInfo);
		V_2 = L_1;
		NullCheck(V_0);
		int32_t L_2 = GC_BACKPACK_RESIZE_get_Type_m20308(V_0, /*hidden argument*/&GC_BACKPACK_RESIZE_get_Type_m20308_MethodInfo);
		V_3 = L_2;
		if (V_1)
		{
			goto IL_00a4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_3 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_3);
		GameItemContainer_t1340 * L_4 = PlayerData_get_BackPack_m35084(L_3, /*hidden argument*/&PlayerData_get_BackPack_m35084_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = GameItemContainer_get_ContainerSize_m33766(L_4, /*hidden argument*/&GameItemContainer_get_ContainerSize_m33766_MethodInfo);
		V_4 = L_5;
		if ((((int32_t)V_2) <= ((int32_t)V_4)))
		{
			goto IL_009f;
		}
	}
	{
		V_5 = ((int32_t)(V_2-V_4));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_6 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_6);
		GameItemContainer_t1340 * L_7 = PlayerData_get_BackPack_m35084(L_6, /*hidden argument*/&PlayerData_get_BackPack_m35084_MethodInfo);
		NullCheck(L_7);
		GameItemContainer_AddContainerSize_m33767(L_7, V_5, /*hidden argument*/&GameItemContainer_AddContainerSize_m33767_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BackPackLogic_t1240_il2cpp_TypeInfo));
		BackPackLogic_t1240 * L_8 = BackPackLogic_Instance_m7325(NULL /*static, unused*/, /*hidden argument*/&BackPackLogic_Instance_m7325_MethodInfo);
		bool L_9 = Object_op_Implicit_m4087(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BackPackLogic_t1240_il2cpp_TypeInfo));
		BackPackLogic_t1240 * L_10 = BackPackLogic_Instance_m7325(NULL /*static, unused*/, /*hidden argument*/&BackPackLogic_Instance_m7325_MethodInfo);
		NullCheck(L_10);
		BackPackLogic_UpdateBackPack_m7340(L_10, /*hidden argument*/&BackPackLogic_UpdateBackPack_m7340_MethodInfo);
	}

IL_007d:
	{
		if ((((uint32_t)V_3) != ((uint32_t)1)))
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_11 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_11);
		Obj_MainPlayer_t1732 * L_12 = ObjManager_get_MainPlayer_m31308(L_11, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_12);
		Obj_MainPlayer_SendNoticMsg_m31723(L_12, 0, (String_t*) &_stringLiteral2785, ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 0)), /*hidden argument*/&Obj_MainPlayer_SendNoticMsg_m31723_MethodInfo);
	}

IL_009f:
	{
		goto IL_00fe;
	}

IL_00a4:
	{
		if ((((uint32_t)V_1) != ((uint32_t)3)))
		{
			goto IL_00fe;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_13 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_13);
		GameItemContainer_t1340 * L_14 = PlayerData_get_StoragePack_m35090(L_13, /*hidden argument*/&PlayerData_get_StoragePack_m35090_MethodInfo);
		NullCheck(L_14);
		int32_t L_15 = GameItemContainer_get_ContainerSize_m33766(L_14, /*hidden argument*/&GameItemContainer_get_ContainerSize_m33766_MethodInfo);
		V_6 = L_15;
		if ((((int32_t)V_2) <= ((int32_t)V_6)))
		{
			goto IL_00fe;
		}
	}
	{
		V_7 = ((int32_t)(V_2-V_6));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_16 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_16);
		GameItemContainer_t1340 * L_17 = PlayerData_get_StoragePack_m35090(L_16, /*hidden argument*/&PlayerData_get_StoragePack_m35090_MethodInfo);
		NullCheck(L_17);
		GameItemContainer_AddContainerSize_m33767(L_17, V_7, /*hidden argument*/&GameItemContainer_AddContainerSize_m33767_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CangKuLogic_t1272_il2cpp_TypeInfo));
		CangKuLogic_t1272 * L_18 = CangKuLogic_Instance_m7471(NULL /*static, unused*/, /*hidden argument*/&CangKuLogic_Instance_m7471_MethodInfo);
		bool L_19 = Object_op_Implicit_m4087(NULL /*static, unused*/, L_18, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_19)
		{
			goto IL_00fe;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CangKuLogic_t1272_il2cpp_TypeInfo));
		CangKuLogic_t1272 * L_20 = CangKuLogic_Instance_m7471(NULL /*static, unused*/, /*hidden argument*/&CangKuLogic_Instance_m7471_MethodInfo);
		NullCheck(L_20);
		CangKuLogic_UpdateCangKu_m7477(L_20, /*hidden argument*/&CangKuLogic_UpdateCangKu_m7477_MethodInfo);
	}

IL_00fe:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BACKPACK_RESIZEHandler
extern TypeInfo GC_BACKPACK_RESIZEHandler_t2551_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BACKPACK_RESIZEHandler::.ctor()
MethodInfo GC_BACKPACK_RESIZEHandler__ctor_m15426_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BACKPACK_RESIZEHandler__ctor_m15426/* method */
	, &GC_BACKPACK_RESIZEHandler_t2551_il2cpp_TypeInfo/* declaring_type */
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
	, 8902/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BACKPACK_RESIZEHandler_t2551_GC_BACKPACK_RESIZEHandler_Execute_m15427_ParameterInfos[] = 
{
	{"ipacket", 0, 134222367, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BACKPACK_RESIZEHandler_t2551_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BACKPACK_RESIZEHandler::Execute(PacketDistributed)
MethodInfo GC_BACKPACK_RESIZEHandler_Execute_m15427_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BACKPACK_RESIZEHandler_Execute_m15427/* method */
	, &GC_BACKPACK_RESIZEHandler_t2551_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BACKPACK_RESIZEHandler_t2551_GC_BACKPACK_RESIZEHandler_Execute_m15427_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8903/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BACKPACK_RESIZEHandler_t2551_MethodInfos[] =
{
	&GC_BACKPACK_RESIZEHandler__ctor_m15426_MethodInfo,
	&GC_BACKPACK_RESIZEHandler_Execute_m15427_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BACKPACK_RESIZEHandler_Execute_m15427_MethodInfo;
static MethodInfo* GC_BACKPACK_RESIZEHandler_t2551_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BACKPACK_RESIZEHandler_Execute_m15427_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BACKPACK_RESIZEHandler_t2551_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BACKPACK_RESIZEHandler_t2551_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BACKPACK_RESIZEHandler_t2551_0_0_0;
extern Il2CppType GC_BACKPACK_RESIZEHandler_t2551_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BACKPACK_RESIZEHandler_t2551;
extern TypeInfo GC_BACKPACK_RESIZEHandler_t2551_il2cpp_TypeInfo;
TypeInfo GC_BACKPACK_RESIZEHandler_t2551_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BACKPACK_RESIZEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BACKPACK_RESIZEHandler_t2551_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BACKPACK_RESIZEHandler_t2551_il2cpp_TypeInfo/* element_class */
	, GC_BACKPACK_RESIZEHandler_t2551_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BACKPACK_RESIZEHandler_t2551_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BACKPACK_RESIZEHandler_t2551_il2cpp_TypeInfo/* cast_class */
	, &GC_BACKPACK_RESIZEHandler_t2551_0_0_0/* byval_arg */
	, &GC_BACKPACK_RESIZEHandler_t2551_1_0_0/* this_arg */
	, GC_BACKPACK_RESIZEHandler_t2551_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BACKPACK_RESIZEHandler_t2551)/* instance_size */
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
// SPacket.SocketInstance.GC_BELLE_ACTIVEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_ACTIVEHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BELLE_ACTIVEHandler_t2552_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BELLE_ACTIVEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_ACTIVEHandMethodDeclarations.h"

// GC_BELLE_ACTIVE
#include "AssemblyU2DCSharp_GC_BELLE_ACTIVE.h"
extern TypeInfo GC_BELLE_ACTIVE_t3001_il2cpp_TypeInfo;
extern TypeInfo BelleData_t4862_il2cpp_TypeInfo;
// GC_BELLE_ACTIVE
#include "AssemblyU2DCSharp_GC_BELLE_ACTIVEMethodDeclarations.h"
// BelleData
#include "AssemblyU2DCSharp_BelleDataMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_BELLE_ACTIVE_get_BelleID_m17830_MethodInfo;
extern MethodInfo BelleData_AddBelle_m34538_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BELLE_ACTIVEHandler::.ctor()
extern MethodInfo GC_BELLE_ACTIVEHandler__ctor_m15428_MethodInfo;
 void GC_BELLE_ACTIVEHandler__ctor_m15428 (GC_BELLE_ACTIVEHandler_t2552 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BELLE_ACTIVEHandler::Execute(PacketDistributed)
extern MethodInfo GC_BELLE_ACTIVEHandler_Execute_m15429_MethodInfo;
 uint32_t GC_BELLE_ACTIVEHandler_Execute_m15429 (GC_BELLE_ACTIVEHandler_t2552 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BELLE_ACTIVE_t3001 * V_0 = {0};
	{
		V_0 = ((GC_BELLE_ACTIVE_t3001 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BELLE_ACTIVE_t3001_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_BELLE_ACTIVE_get_BelleID_m17830(V_0, /*hidden argument*/&GC_BELLE_ACTIVE_get_BelleID_m17830_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BelleData_t4862_il2cpp_TypeInfo));
		BelleData_AddBelle_m34538(NULL /*static, unused*/, L_0, /*hidden argument*/&BelleData_AddBelle_m34538_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BELLE_ACTIVEHandler
extern TypeInfo GC_BELLE_ACTIVEHandler_t2552_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BELLE_ACTIVEHandler::.ctor()
MethodInfo GC_BELLE_ACTIVEHandler__ctor_m15428_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BELLE_ACTIVEHandler__ctor_m15428/* method */
	, &GC_BELLE_ACTIVEHandler_t2552_il2cpp_TypeInfo/* declaring_type */
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
	, 8904/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BELLE_ACTIVEHandler_t2552_GC_BELLE_ACTIVEHandler_Execute_m15429_ParameterInfos[] = 
{
	{"ipacket", 0, 134222368, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BELLE_ACTIVEHandler_t2552_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BELLE_ACTIVEHandler::Execute(PacketDistributed)
MethodInfo GC_BELLE_ACTIVEHandler_Execute_m15429_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BELLE_ACTIVEHandler_Execute_m15429/* method */
	, &GC_BELLE_ACTIVEHandler_t2552_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BELLE_ACTIVEHandler_t2552_GC_BELLE_ACTIVEHandler_Execute_m15429_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8905/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BELLE_ACTIVEHandler_t2552_MethodInfos[] =
{
	&GC_BELLE_ACTIVEHandler__ctor_m15428_MethodInfo,
	&GC_BELLE_ACTIVEHandler_Execute_m15429_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BELLE_ACTIVEHandler_Execute_m15429_MethodInfo;
static MethodInfo* GC_BELLE_ACTIVEHandler_t2552_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BELLE_ACTIVEHandler_Execute_m15429_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BELLE_ACTIVEHandler_t2552_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BELLE_ACTIVEHandler_t2552_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BELLE_ACTIVEHandler_t2552_0_0_0;
extern Il2CppType GC_BELLE_ACTIVEHandler_t2552_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BELLE_ACTIVEHandler_t2552;
extern TypeInfo GC_BELLE_ACTIVEHandler_t2552_il2cpp_TypeInfo;
TypeInfo GC_BELLE_ACTIVEHandler_t2552_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BELLE_ACTIVEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BELLE_ACTIVEHandler_t2552_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BELLE_ACTIVEHandler_t2552_il2cpp_TypeInfo/* element_class */
	, GC_BELLE_ACTIVEHandler_t2552_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BELLE_ACTIVEHandler_t2552_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BELLE_ACTIVEHandler_t2552_il2cpp_TypeInfo/* cast_class */
	, &GC_BELLE_ACTIVEHandler_t2552_0_0_0/* byval_arg */
	, &GC_BELLE_ACTIVEHandler_t2552_1_0_0/* this_arg */
	, GC_BELLE_ACTIVEHandler_t2552_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BELLE_ACTIVEHandler_t2552)/* instance_size */
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
// SPacket.SocketInstance.GC_BELLE_ACTIVEMATRIX_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_ACTIVEMATR.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BELLE_ACTIVEMATRIX_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_ACTIVEMATRMethodDeclarations.h"

// GC_BELLE_ACTIVEMATRIX_RET
#include "AssemblyU2DCSharp_GC_BELLE_ACTIVEMATRIX_RET.h"
extern TypeInfo GC_BELLE_ACTIVEMATRIX_RET_t3000_il2cpp_TypeInfo;
extern TypeInfo BelleData_t4862_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo BelleData_UpdateActiveMatrixData_m34537_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BELLE_ACTIVEMATRIX_RETHandler::.ctor()
extern MethodInfo GC_BELLE_ACTIVEMATRIX_RETHandler__ctor_m15430_MethodInfo;
 void GC_BELLE_ACTIVEMATRIX_RETHandler__ctor_m15430 (GC_BELLE_ACTIVEMATRIX_RETHandler_t2553 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BELLE_ACTIVEMATRIX_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_BELLE_ACTIVEMATRIX_RETHandler_Execute_m15431_MethodInfo;
 uint32_t GC_BELLE_ACTIVEMATRIX_RETHandler_Execute_m15431 (GC_BELLE_ACTIVEMATRIX_RETHandler_t2553 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BELLE_ACTIVEMATRIX_RET_t3000 * V_0 = {0};
	{
		V_0 = ((GC_BELLE_ACTIVEMATRIX_RET_t3000 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BELLE_ACTIVEMATRIX_RET_t3000_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BelleData_t4862_il2cpp_TypeInfo));
		BelleData_UpdateActiveMatrixData_m34537(NULL /*static, unused*/, V_0, /*hidden argument*/&BelleData_UpdateActiveMatrixData_m34537_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BELLE_ACTIVEMATRIX_RETHandler
extern TypeInfo GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BELLE_ACTIVEMATRIX_RETHandler::.ctor()
MethodInfo GC_BELLE_ACTIVEMATRIX_RETHandler__ctor_m15430_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BELLE_ACTIVEMATRIX_RETHandler__ctor_m15430/* method */
	, &GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_il2cpp_TypeInfo/* declaring_type */
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
	, 8906/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_GC_BELLE_ACTIVEMATRIX_RETHandler_Execute_m15431_ParameterInfos[] = 
{
	{"ipacket", 0, 134222369, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BELLE_ACTIVEMATRIX_RETHandler::Execute(PacketDistributed)
MethodInfo GC_BELLE_ACTIVEMATRIX_RETHandler_Execute_m15431_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BELLE_ACTIVEMATRIX_RETHandler_Execute_m15431/* method */
	, &GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_GC_BELLE_ACTIVEMATRIX_RETHandler_Execute_m15431_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8907/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_MethodInfos[] =
{
	&GC_BELLE_ACTIVEMATRIX_RETHandler__ctor_m15430_MethodInfo,
	&GC_BELLE_ACTIVEMATRIX_RETHandler_Execute_m15431_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BELLE_ACTIVEMATRIX_RETHandler_Execute_m15431_MethodInfo;
static MethodInfo* GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BELLE_ACTIVEMATRIX_RETHandler_Execute_m15431_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_0_0_0;
extern Il2CppType GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BELLE_ACTIVEMATRIX_RETHandler_t2553;
extern TypeInfo GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_il2cpp_TypeInfo;
TypeInfo GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BELLE_ACTIVEMATRIX_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_il2cpp_TypeInfo/* element_class */
	, GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_il2cpp_TypeInfo/* cast_class */
	, &GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_0_0_0/* byval_arg */
	, &GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_1_0_0/* this_arg */
	, GC_BELLE_ACTIVEMATRIX_RETHandler_t2553_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BELLE_ACTIVEMATRIX_RETHandler_t2553)/* instance_size */
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
// SPacket.SocketInstance.GC_BELLE_BATTLE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_BATTLE_RET.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BELLE_BATTLE_RETHandler_t2554_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BELLE_BATTLE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_BATTLE_RETMethodDeclarations.h"

// GC_BELLE_BATTLE_RET
#include "AssemblyU2DCSharp_GC_BELLE_BATTLE_RET.h"
extern TypeInfo GC_BELLE_BATTLE_RET_t2996_il2cpp_TypeInfo;
extern TypeInfo BelleData_t4862_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo BelleData_UpdateBattleData_m34535_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BELLE_BATTLE_RETHandler::.ctor()
extern MethodInfo GC_BELLE_BATTLE_RETHandler__ctor_m15432_MethodInfo;
 void GC_BELLE_BATTLE_RETHandler__ctor_m15432 (GC_BELLE_BATTLE_RETHandler_t2554 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BELLE_BATTLE_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_BELLE_BATTLE_RETHandler_Execute_m15433_MethodInfo;
 uint32_t GC_BELLE_BATTLE_RETHandler_Execute_m15433 (GC_BELLE_BATTLE_RETHandler_t2554 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BELLE_BATTLE_RET_t2996 * V_0 = {0};
	{
		V_0 = ((GC_BELLE_BATTLE_RET_t2996 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BELLE_BATTLE_RET_t2996_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BelleData_t4862_il2cpp_TypeInfo));
		BelleData_UpdateBattleData_m34535(NULL /*static, unused*/, V_0, /*hidden argument*/&BelleData_UpdateBattleData_m34535_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BELLE_BATTLE_RETHandler
extern TypeInfo GC_BELLE_BATTLE_RETHandler_t2554_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BELLE_BATTLE_RETHandler::.ctor()
MethodInfo GC_BELLE_BATTLE_RETHandler__ctor_m15432_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BELLE_BATTLE_RETHandler__ctor_m15432/* method */
	, &GC_BELLE_BATTLE_RETHandler_t2554_il2cpp_TypeInfo/* declaring_type */
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
	, 8908/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BELLE_BATTLE_RETHandler_t2554_GC_BELLE_BATTLE_RETHandler_Execute_m15433_ParameterInfos[] = 
{
	{"ipacket", 0, 134222370, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BELLE_BATTLE_RETHandler_t2554_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BELLE_BATTLE_RETHandler::Execute(PacketDistributed)
MethodInfo GC_BELLE_BATTLE_RETHandler_Execute_m15433_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BELLE_BATTLE_RETHandler_Execute_m15433/* method */
	, &GC_BELLE_BATTLE_RETHandler_t2554_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BELLE_BATTLE_RETHandler_t2554_GC_BELLE_BATTLE_RETHandler_Execute_m15433_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8909/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BELLE_BATTLE_RETHandler_t2554_MethodInfos[] =
{
	&GC_BELLE_BATTLE_RETHandler__ctor_m15432_MethodInfo,
	&GC_BELLE_BATTLE_RETHandler_Execute_m15433_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BELLE_BATTLE_RETHandler_Execute_m15433_MethodInfo;
static MethodInfo* GC_BELLE_BATTLE_RETHandler_t2554_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BELLE_BATTLE_RETHandler_Execute_m15433_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BELLE_BATTLE_RETHandler_t2554_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BELLE_BATTLE_RETHandler_t2554_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BELLE_BATTLE_RETHandler_t2554_0_0_0;
extern Il2CppType GC_BELLE_BATTLE_RETHandler_t2554_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BELLE_BATTLE_RETHandler_t2554;
extern TypeInfo GC_BELLE_BATTLE_RETHandler_t2554_il2cpp_TypeInfo;
TypeInfo GC_BELLE_BATTLE_RETHandler_t2554_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BELLE_BATTLE_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BELLE_BATTLE_RETHandler_t2554_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BELLE_BATTLE_RETHandler_t2554_il2cpp_TypeInfo/* element_class */
	, GC_BELLE_BATTLE_RETHandler_t2554_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BELLE_BATTLE_RETHandler_t2554_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BELLE_BATTLE_RETHandler_t2554_il2cpp_TypeInfo/* cast_class */
	, &GC_BELLE_BATTLE_RETHandler_t2554_0_0_0/* byval_arg */
	, &GC_BELLE_BATTLE_RETHandler_t2554_1_0_0/* this_arg */
	, GC_BELLE_BATTLE_RETHandler_t2554_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BELLE_BATTLE_RETHandler_t2554)/* instance_size */
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
// SPacket.SocketInstance.GC_BELLE_CLOSE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_CLOSE_RETH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BELLE_CLOSE_RETHandler_t2555_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BELLE_CLOSE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_CLOSE_RETHMethodDeclarations.h"

// GC_BELLE_CLOSE_RET
#include "AssemblyU2DCSharp_GC_BELLE_CLOSE_RET.h"
extern TypeInfo GC_BELLE_CLOSE_RET_t2990_il2cpp_TypeInfo;
extern TypeInfo BelleData_t4862_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo BelleData_UpdateCloseData_m34531_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BELLE_CLOSE_RETHandler::.ctor()
extern MethodInfo GC_BELLE_CLOSE_RETHandler__ctor_m15434_MethodInfo;
 void GC_BELLE_CLOSE_RETHandler__ctor_m15434 (GC_BELLE_CLOSE_RETHandler_t2555 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BELLE_CLOSE_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_BELLE_CLOSE_RETHandler_Execute_m15435_MethodInfo;
 uint32_t GC_BELLE_CLOSE_RETHandler_Execute_m15435 (GC_BELLE_CLOSE_RETHandler_t2555 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BELLE_CLOSE_RET_t2990 * V_0 = {0};
	{
		V_0 = ((GC_BELLE_CLOSE_RET_t2990 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BELLE_CLOSE_RET_t2990_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BelleData_t4862_il2cpp_TypeInfo));
		BelleData_UpdateCloseData_m34531(NULL /*static, unused*/, V_0, /*hidden argument*/&BelleData_UpdateCloseData_m34531_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BELLE_CLOSE_RETHandler
extern TypeInfo GC_BELLE_CLOSE_RETHandler_t2555_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BELLE_CLOSE_RETHandler::.ctor()
MethodInfo GC_BELLE_CLOSE_RETHandler__ctor_m15434_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BELLE_CLOSE_RETHandler__ctor_m15434/* method */
	, &GC_BELLE_CLOSE_RETHandler_t2555_il2cpp_TypeInfo/* declaring_type */
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
	, 8910/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BELLE_CLOSE_RETHandler_t2555_GC_BELLE_CLOSE_RETHandler_Execute_m15435_ParameterInfos[] = 
{
	{"ipacket", 0, 134222371, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BELLE_CLOSE_RETHandler_t2555_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BELLE_CLOSE_RETHandler::Execute(PacketDistributed)
MethodInfo GC_BELLE_CLOSE_RETHandler_Execute_m15435_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BELLE_CLOSE_RETHandler_Execute_m15435/* method */
	, &GC_BELLE_CLOSE_RETHandler_t2555_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BELLE_CLOSE_RETHandler_t2555_GC_BELLE_CLOSE_RETHandler_Execute_m15435_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8911/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BELLE_CLOSE_RETHandler_t2555_MethodInfos[] =
{
	&GC_BELLE_CLOSE_RETHandler__ctor_m15434_MethodInfo,
	&GC_BELLE_CLOSE_RETHandler_Execute_m15435_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BELLE_CLOSE_RETHandler_Execute_m15435_MethodInfo;
static MethodInfo* GC_BELLE_CLOSE_RETHandler_t2555_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BELLE_CLOSE_RETHandler_Execute_m15435_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BELLE_CLOSE_RETHandler_t2555_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BELLE_CLOSE_RETHandler_t2555_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BELLE_CLOSE_RETHandler_t2555_0_0_0;
extern Il2CppType GC_BELLE_CLOSE_RETHandler_t2555_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BELLE_CLOSE_RETHandler_t2555;
extern TypeInfo GC_BELLE_CLOSE_RETHandler_t2555_il2cpp_TypeInfo;
TypeInfo GC_BELLE_CLOSE_RETHandler_t2555_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BELLE_CLOSE_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BELLE_CLOSE_RETHandler_t2555_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BELLE_CLOSE_RETHandler_t2555_il2cpp_TypeInfo/* element_class */
	, GC_BELLE_CLOSE_RETHandler_t2555_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BELLE_CLOSE_RETHandler_t2555_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BELLE_CLOSE_RETHandler_t2555_il2cpp_TypeInfo/* cast_class */
	, &GC_BELLE_CLOSE_RETHandler_t2555_0_0_0/* byval_arg */
	, &GC_BELLE_CLOSE_RETHandler_t2555_1_0_0/* this_arg */
	, GC_BELLE_CLOSE_RETHandler_t2555_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BELLE_CLOSE_RETHandler_t2555)/* instance_size */
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
// SPacket.SocketInstance.GC_BELLE_DATAHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_DATAHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BELLE_DATAHandler_t2556_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BELLE_DATAHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_DATAHandleMethodDeclarations.h"

// GC_BELLE_DATA
#include "AssemblyU2DCSharp_GC_BELLE_DATA.h"
extern TypeInfo GC_BELLE_DATA_t2988_il2cpp_TypeInfo;
extern TypeInfo BelleData_t4862_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo BelleData_UpdateBelleData_m34530_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BELLE_DATAHandler::.ctor()
extern MethodInfo GC_BELLE_DATAHandler__ctor_m15436_MethodInfo;
 void GC_BELLE_DATAHandler__ctor_m15436 (GC_BELLE_DATAHandler_t2556 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BELLE_DATAHandler::Execute(PacketDistributed)
extern MethodInfo GC_BELLE_DATAHandler_Execute_m15437_MethodInfo;
 uint32_t GC_BELLE_DATAHandler_Execute_m15437 (GC_BELLE_DATAHandler_t2556 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BELLE_DATA_t2988 * V_0 = {0};
	{
		V_0 = ((GC_BELLE_DATA_t2988 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BELLE_DATA_t2988_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BelleData_t4862_il2cpp_TypeInfo));
		BelleData_UpdateBelleData_m34530(NULL /*static, unused*/, V_0, /*hidden argument*/&BelleData_UpdateBelleData_m34530_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BELLE_DATAHandler
extern TypeInfo GC_BELLE_DATAHandler_t2556_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BELLE_DATAHandler::.ctor()
MethodInfo GC_BELLE_DATAHandler__ctor_m15436_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BELLE_DATAHandler__ctor_m15436/* method */
	, &GC_BELLE_DATAHandler_t2556_il2cpp_TypeInfo/* declaring_type */
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
	, 8912/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BELLE_DATAHandler_t2556_GC_BELLE_DATAHandler_Execute_m15437_ParameterInfos[] = 
{
	{"ipacket", 0, 134222372, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BELLE_DATAHandler_t2556_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BELLE_DATAHandler::Execute(PacketDistributed)
MethodInfo GC_BELLE_DATAHandler_Execute_m15437_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BELLE_DATAHandler_Execute_m15437/* method */
	, &GC_BELLE_DATAHandler_t2556_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BELLE_DATAHandler_t2556_GC_BELLE_DATAHandler_Execute_m15437_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8913/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BELLE_DATAHandler_t2556_MethodInfos[] =
{
	&GC_BELLE_DATAHandler__ctor_m15436_MethodInfo,
	&GC_BELLE_DATAHandler_Execute_m15437_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BELLE_DATAHandler_Execute_m15437_MethodInfo;
static MethodInfo* GC_BELLE_DATAHandler_t2556_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BELLE_DATAHandler_Execute_m15437_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BELLE_DATAHandler_t2556_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BELLE_DATAHandler_t2556_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BELLE_DATAHandler_t2556_0_0_0;
extern Il2CppType GC_BELLE_DATAHandler_t2556_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BELLE_DATAHandler_t2556;
extern TypeInfo GC_BELLE_DATAHandler_t2556_il2cpp_TypeInfo;
TypeInfo GC_BELLE_DATAHandler_t2556_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BELLE_DATAHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BELLE_DATAHandler_t2556_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BELLE_DATAHandler_t2556_il2cpp_TypeInfo/* element_class */
	, GC_BELLE_DATAHandler_t2556_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BELLE_DATAHandler_t2556_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BELLE_DATAHandler_t2556_il2cpp_TypeInfo/* cast_class */
	, &GC_BELLE_DATAHandler_t2556_0_0_0/* byval_arg */
	, &GC_BELLE_DATAHandler_t2556_1_0_0/* this_arg */
	, GC_BELLE_DATAHandler_t2556_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BELLE_DATAHandler_t2556)/* instance_size */
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
// SPacket.SocketInstance.GC_BELLE_EVOLUTIONRAPID_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_EVOLUTIONR.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BELLE_EVOLUTIONRAPID_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_EVOLUTIONRMethodDeclarations.h"

// GC_BELLE_EVOLUTIONRAPID_RET
#include "AssemblyU2DCSharp_GC_BELLE_EVOLUTIONRAPID_RET.h"
extern TypeInfo GC_BELLE_EVOLUTIONRAPID_RET_t2994_il2cpp_TypeInfo;
extern TypeInfo BelleData_t4862_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo BelleData_UpdateEvolutionRapidData_m34533_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BELLE_EVOLUTIONRAPID_RETHandler::.ctor()
extern MethodInfo GC_BELLE_EVOLUTIONRAPID_RETHandler__ctor_m15438_MethodInfo;
 void GC_BELLE_EVOLUTIONRAPID_RETHandler__ctor_m15438 (GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BELLE_EVOLUTIONRAPID_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_BELLE_EVOLUTIONRAPID_RETHandler_Execute_m15439_MethodInfo;
 uint32_t GC_BELLE_EVOLUTIONRAPID_RETHandler_Execute_m15439 (GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BELLE_EVOLUTIONRAPID_RET_t2994 * V_0 = {0};
	{
		V_0 = ((GC_BELLE_EVOLUTIONRAPID_RET_t2994 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BELLE_EVOLUTIONRAPID_RET_t2994_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BelleData_t4862_il2cpp_TypeInfo));
		BelleData_UpdateEvolutionRapidData_m34533(NULL /*static, unused*/, V_0, /*hidden argument*/&BelleData_UpdateEvolutionRapidData_m34533_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BELLE_EVOLUTIONRAPID_RETHandler
extern TypeInfo GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BELLE_EVOLUTIONRAPID_RETHandler::.ctor()
MethodInfo GC_BELLE_EVOLUTIONRAPID_RETHandler__ctor_m15438_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BELLE_EVOLUTIONRAPID_RETHandler__ctor_m15438/* method */
	, &GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_il2cpp_TypeInfo/* declaring_type */
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
	, 8914/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_GC_BELLE_EVOLUTIONRAPID_RETHandler_Execute_m15439_ParameterInfos[] = 
{
	{"ipacket", 0, 134222373, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BELLE_EVOLUTIONRAPID_RETHandler::Execute(PacketDistributed)
MethodInfo GC_BELLE_EVOLUTIONRAPID_RETHandler_Execute_m15439_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BELLE_EVOLUTIONRAPID_RETHandler_Execute_m15439/* method */
	, &GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_GC_BELLE_EVOLUTIONRAPID_RETHandler_Execute_m15439_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8915/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_MethodInfos[] =
{
	&GC_BELLE_EVOLUTIONRAPID_RETHandler__ctor_m15438_MethodInfo,
	&GC_BELLE_EVOLUTIONRAPID_RETHandler_Execute_m15439_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BELLE_EVOLUTIONRAPID_RETHandler_Execute_m15439_MethodInfo;
static MethodInfo* GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BELLE_EVOLUTIONRAPID_RETHandler_Execute_m15439_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_0_0_0;
extern Il2CppType GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557;
extern TypeInfo GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_il2cpp_TypeInfo;
TypeInfo GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BELLE_EVOLUTIONRAPID_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_il2cpp_TypeInfo/* element_class */
	, GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_il2cpp_TypeInfo/* cast_class */
	, &GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_0_0_0/* byval_arg */
	, &GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_1_0_0/* this_arg */
	, GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BELLE_EVOLUTIONRAPID_RETHandler_t2557)/* instance_size */
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
// SPacket.SocketInstance.GC_BELLE_EVOLUTION_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_EVOLUTION_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BELLE_EVOLUTION_RETHandler_t2558_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BELLE_EVOLUTION_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_EVOLUTION_MethodDeclarations.h"

// GC_BELLE_EVOLUTION_RET
#include "AssemblyU2DCSharp_GC_BELLE_EVOLUTION_RET.h"
extern TypeInfo GC_BELLE_EVOLUTION_RET_t2992_il2cpp_TypeInfo;
extern TypeInfo BelleData_t4862_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo BelleData_UpdateEvolutionData_m34532_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BELLE_EVOLUTION_RETHandler::.ctor()
extern MethodInfo GC_BELLE_EVOLUTION_RETHandler__ctor_m15440_MethodInfo;
 void GC_BELLE_EVOLUTION_RETHandler__ctor_m15440 (GC_BELLE_EVOLUTION_RETHandler_t2558 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BELLE_EVOLUTION_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_BELLE_EVOLUTION_RETHandler_Execute_m15441_MethodInfo;
 uint32_t GC_BELLE_EVOLUTION_RETHandler_Execute_m15441 (GC_BELLE_EVOLUTION_RETHandler_t2558 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BELLE_EVOLUTION_RET_t2992 * V_0 = {0};
	{
		V_0 = ((GC_BELLE_EVOLUTION_RET_t2992 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BELLE_EVOLUTION_RET_t2992_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BelleData_t4862_il2cpp_TypeInfo));
		BelleData_UpdateEvolutionData_m34532(NULL /*static, unused*/, V_0, /*hidden argument*/&BelleData_UpdateEvolutionData_m34532_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BELLE_EVOLUTION_RETHandler
extern TypeInfo GC_BELLE_EVOLUTION_RETHandler_t2558_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BELLE_EVOLUTION_RETHandler::.ctor()
MethodInfo GC_BELLE_EVOLUTION_RETHandler__ctor_m15440_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BELLE_EVOLUTION_RETHandler__ctor_m15440/* method */
	, &GC_BELLE_EVOLUTION_RETHandler_t2558_il2cpp_TypeInfo/* declaring_type */
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
	, 8916/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BELLE_EVOLUTION_RETHandler_t2558_GC_BELLE_EVOLUTION_RETHandler_Execute_m15441_ParameterInfos[] = 
{
	{"ipacket", 0, 134222374, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BELLE_EVOLUTION_RETHandler_t2558_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BELLE_EVOLUTION_RETHandler::Execute(PacketDistributed)
MethodInfo GC_BELLE_EVOLUTION_RETHandler_Execute_m15441_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BELLE_EVOLUTION_RETHandler_Execute_m15441/* method */
	, &GC_BELLE_EVOLUTION_RETHandler_t2558_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BELLE_EVOLUTION_RETHandler_t2558_GC_BELLE_EVOLUTION_RETHandler_Execute_m15441_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8917/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BELLE_EVOLUTION_RETHandler_t2558_MethodInfos[] =
{
	&GC_BELLE_EVOLUTION_RETHandler__ctor_m15440_MethodInfo,
	&GC_BELLE_EVOLUTION_RETHandler_Execute_m15441_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BELLE_EVOLUTION_RETHandler_Execute_m15441_MethodInfo;
static MethodInfo* GC_BELLE_EVOLUTION_RETHandler_t2558_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BELLE_EVOLUTION_RETHandler_Execute_m15441_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BELLE_EVOLUTION_RETHandler_t2558_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BELLE_EVOLUTION_RETHandler_t2558_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BELLE_EVOLUTION_RETHandler_t2558_0_0_0;
extern Il2CppType GC_BELLE_EVOLUTION_RETHandler_t2558_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BELLE_EVOLUTION_RETHandler_t2558;
extern TypeInfo GC_BELLE_EVOLUTION_RETHandler_t2558_il2cpp_TypeInfo;
TypeInfo GC_BELLE_EVOLUTION_RETHandler_t2558_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BELLE_EVOLUTION_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BELLE_EVOLUTION_RETHandler_t2558_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BELLE_EVOLUTION_RETHandler_t2558_il2cpp_TypeInfo/* element_class */
	, GC_BELLE_EVOLUTION_RETHandler_t2558_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BELLE_EVOLUTION_RETHandler_t2558_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BELLE_EVOLUTION_RETHandler_t2558_il2cpp_TypeInfo/* cast_class */
	, &GC_BELLE_EVOLUTION_RETHandler_t2558_0_0_0/* byval_arg */
	, &GC_BELLE_EVOLUTION_RETHandler_t2558_1_0_0/* this_arg */
	, GC_BELLE_EVOLUTION_RETHandler_t2558_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BELLE_EVOLUTION_RETHandler_t2558)/* instance_size */
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
// SPacket.SocketInstance.GC_BELLE_REST_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_REST_RETHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BELLE_REST_RETHandler_t2559_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BELLE_REST_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BELLE_REST_RETHaMethodDeclarations.h"

// GC_BELLE_REST_RET
#include "AssemblyU2DCSharp_GC_BELLE_REST_RET.h"
extern TypeInfo GC_BELLE_REST_RET_t2998_il2cpp_TypeInfo;
extern TypeInfo BelleData_t4862_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo BelleData_UpdateRestData_m34536_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BELLE_REST_RETHandler::.ctor()
extern MethodInfo GC_BELLE_REST_RETHandler__ctor_m15442_MethodInfo;
 void GC_BELLE_REST_RETHandler__ctor_m15442 (GC_BELLE_REST_RETHandler_t2559 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BELLE_REST_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_BELLE_REST_RETHandler_Execute_m15443_MethodInfo;
 uint32_t GC_BELLE_REST_RETHandler_Execute_m15443 (GC_BELLE_REST_RETHandler_t2559 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BELLE_REST_RET_t2998 * V_0 = {0};
	{
		V_0 = ((GC_BELLE_REST_RET_t2998 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BELLE_REST_RET_t2998_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BelleData_t4862_il2cpp_TypeInfo));
		BelleData_UpdateRestData_m34536(NULL /*static, unused*/, V_0, /*hidden argument*/&BelleData_UpdateRestData_m34536_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BELLE_REST_RETHandler
extern TypeInfo GC_BELLE_REST_RETHandler_t2559_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BELLE_REST_RETHandler::.ctor()
MethodInfo GC_BELLE_REST_RETHandler__ctor_m15442_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BELLE_REST_RETHandler__ctor_m15442/* method */
	, &GC_BELLE_REST_RETHandler_t2559_il2cpp_TypeInfo/* declaring_type */
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
	, 8918/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BELLE_REST_RETHandler_t2559_GC_BELLE_REST_RETHandler_Execute_m15443_ParameterInfos[] = 
{
	{"ipacket", 0, 134222375, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BELLE_REST_RETHandler_t2559_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BELLE_REST_RETHandler::Execute(PacketDistributed)
MethodInfo GC_BELLE_REST_RETHandler_Execute_m15443_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BELLE_REST_RETHandler_Execute_m15443/* method */
	, &GC_BELLE_REST_RETHandler_t2559_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BELLE_REST_RETHandler_t2559_GC_BELLE_REST_RETHandler_Execute_m15443_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8919/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BELLE_REST_RETHandler_t2559_MethodInfos[] =
{
	&GC_BELLE_REST_RETHandler__ctor_m15442_MethodInfo,
	&GC_BELLE_REST_RETHandler_Execute_m15443_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BELLE_REST_RETHandler_Execute_m15443_MethodInfo;
static MethodInfo* GC_BELLE_REST_RETHandler_t2559_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BELLE_REST_RETHandler_Execute_m15443_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BELLE_REST_RETHandler_t2559_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BELLE_REST_RETHandler_t2559_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BELLE_REST_RETHandler_t2559_0_0_0;
extern Il2CppType GC_BELLE_REST_RETHandler_t2559_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BELLE_REST_RETHandler_t2559;
extern TypeInfo GC_BELLE_REST_RETHandler_t2559_il2cpp_TypeInfo;
TypeInfo GC_BELLE_REST_RETHandler_t2559_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BELLE_REST_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BELLE_REST_RETHandler_t2559_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BELLE_REST_RETHandler_t2559_il2cpp_TypeInfo/* element_class */
	, GC_BELLE_REST_RETHandler_t2559_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BELLE_REST_RETHandler_t2559_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BELLE_REST_RETHandler_t2559_il2cpp_TypeInfo/* cast_class */
	, &GC_BELLE_REST_RETHandler_t2559_0_0_0/* byval_arg */
	, &GC_BELLE_REST_RETHandler_t2559_1_0_0/* this_arg */
	, GC_BELLE_REST_RETHandler_t2559_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BELLE_REST_RETHandler_t2559)/* instance_size */
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
// SPacket.SocketInstance.GC_BROADCASTPSSTATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BROADCASTPSSTATE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BROADCASTPSSTATEHandler_t2560_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BROADCASTPSSTATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BROADCASTPSSTATEMethodDeclarations.h"

// GC_BROADCASTPSSTATE
#include "AssemblyU2DCSharp_GC_BROADCASTPSSTATE.h"
// Games.LogicObj.Obj_OtherPlayer
#include "AssemblyU2DCSharp_Games_LogicObj_Obj_OtherPlayer.h"
// ReliveLogic
#include "AssemblyU2DCSharp_ReliveLogic.h"
extern TypeInfo GC_BROADCASTPSSTATE_t3459_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo Obj_OtherPlayer_t1655_il2cpp_TypeInfo;
extern TypeInfo ReliveLogic_t1685_il2cpp_TypeInfo;
// GC_BROADCASTPSSTATE
#include "AssemblyU2DCSharp_GC_BROADCASTPSSTATEMethodDeclarations.h"
// Games.LogicObj.Obj_OtherPlayer
#include "AssemblyU2DCSharp_Games_LogicObj_Obj_OtherPlayerMethodDeclarations.h"
// ReliveLogic
#include "AssemblyU2DCSharp_ReliveLogicMethodDeclarations.h"
// Games.LogicObj.Obj
#include "AssemblyU2DCSharp_Games_LogicObj_ObjMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo GC_BROADCASTPSSTATE_get_ObjId_m25722_MethodInfo;
extern MethodInfo ObjManager_FindObjCharacterInScene_m31348_MethodInfo;
extern MethodInfo Object_op_Implicit_m4087_MethodInfo;
extern MethodInfo GC_BROADCASTPSSTATE_get_State_m25726_MethodInfo;
extern MethodInfo Obj_OtherPlayer_set_PaoShangState_m32161_MethodInfo;
extern MethodInfo Obj_OtherPlayer_get_PaoShangState_m32160_MethodInfo;
extern MethodInfo Obj_OtherPlayer_UpdatePaoShangStateEffect_m32162_MethodInfo;
extern MethodInfo ReliveLogic_Instance_m10888_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Obj_get_ServerID_m31248_MethodInfo;
extern MethodInfo ReliveLogic_ChangeShowInfoPaoShangChange_m10892_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BROADCASTPSSTATEHandler::.ctor()
extern MethodInfo GC_BROADCASTPSSTATEHandler__ctor_m15444_MethodInfo;
 void GC_BROADCASTPSSTATEHandler__ctor_m15444 (GC_BROADCASTPSSTATEHandler_t2560 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BROADCASTPSSTATEHandler::Execute(PacketDistributed)
extern MethodInfo GC_BROADCASTPSSTATEHandler_Execute_m15445_MethodInfo;
 uint32_t GC_BROADCASTPSSTATEHandler_Execute_m15445 (GC_BROADCASTPSSTATEHandler_t2560 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BROADCASTPSSTATE_t3459 * V_0 = {0};
	Obj_OtherPlayer_t1655 * V_1 = {0};
	{
		V_0 = ((GC_BROADCASTPSSTATE_t3459 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BROADCASTPSSTATE_t3459_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_0 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_1 = GC_BROADCASTPSSTATE_get_ObjId_m25722(V_0, /*hidden argument*/&GC_BROADCASTPSSTATE_get_ObjId_m25722_MethodInfo);
		NullCheck(L_0);
		Obj_Character_t1772 * L_2 = ObjManager_FindObjCharacterInScene_m31348(L_0, L_1, /*hidden argument*/&ObjManager_FindObjCharacterInScene_m31348_MethodInfo);
		V_1 = ((Obj_OtherPlayer_t1655 *)IsInst(L_2, InitializedTypeInfo(&Obj_OtherPlayer_t1655_il2cpp_TypeInfo)));
		bool L_3 = Object_op_Implicit_m4087(NULL /*static, unused*/, V_1, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_4 = GC_BROADCASTPSSTATE_get_State_m25726(V_0, /*hidden argument*/&GC_BROADCASTPSSTATE_get_State_m25726_MethodInfo);
		NullCheck(V_1);
		Obj_OtherPlayer_set_PaoShangState_m32161(V_1, L_4, /*hidden argument*/&Obj_OtherPlayer_set_PaoShangState_m32161_MethodInfo);
		NullCheck(V_1);
		int32_t L_5 = Obj_OtherPlayer_get_PaoShangState_m32160(V_1, /*hidden argument*/&Obj_OtherPlayer_get_PaoShangState_m32160_MethodInfo);
		NullCheck(V_1);
		Obj_OtherPlayer_UpdatePaoShangStateEffect_m32162(V_1, L_5, /*hidden argument*/&Obj_OtherPlayer_UpdatePaoShangStateEffect_m32162_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReliveLogic_t1685_il2cpp_TypeInfo));
		ReliveLogic_t1685 * L_6 = ReliveLogic_Instance_m10888(NULL /*static, unused*/, /*hidden argument*/&ReliveLogic_Instance_m10888_MethodInfo);
		bool L_7 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_6, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_7)
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_8 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_8);
		Obj_MainPlayer_t1732 * L_9 = ObjManager_get_MainPlayer_m31308(L_8, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		bool L_10 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_9, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_10)
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_11 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_11);
		Obj_MainPlayer_t1732 * L_12 = ObjManager_get_MainPlayer_m31308(L_11, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_12);
		int32_t L_13 = Obj_get_ServerID_m31248(L_12, /*hidden argument*/&Obj_get_ServerID_m31248_MethodInfo);
		NullCheck(V_1);
		int32_t L_14 = Obj_get_ServerID_m31248(V_1, /*hidden argument*/&Obj_get_ServerID_m31248_MethodInfo);
		if ((((uint32_t)L_13) != ((uint32_t)L_14)))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ReliveLogic_t1685_il2cpp_TypeInfo));
		ReliveLogic_t1685 * L_15 = ReliveLogic_Instance_m10888(NULL /*static, unused*/, /*hidden argument*/&ReliveLogic_Instance_m10888_MethodInfo);
		NullCheck(L_15);
		ReliveLogic_ChangeShowInfoPaoShangChange_m10892(L_15, /*hidden argument*/&ReliveLogic_ChangeShowInfoPaoShangChange_m10892_MethodInfo);
	}

IL_0091:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BROADCASTPSSTATEHandler
extern TypeInfo GC_BROADCASTPSSTATEHandler_t2560_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BROADCASTPSSTATEHandler::.ctor()
MethodInfo GC_BROADCASTPSSTATEHandler__ctor_m15444_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BROADCASTPSSTATEHandler__ctor_m15444/* method */
	, &GC_BROADCASTPSSTATEHandler_t2560_il2cpp_TypeInfo/* declaring_type */
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
	, 8920/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BROADCASTPSSTATEHandler_t2560_GC_BROADCASTPSSTATEHandler_Execute_m15445_ParameterInfos[] = 
{
	{"ipacket", 0, 134222376, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BROADCASTPSSTATEHandler_t2560_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BROADCASTPSSTATEHandler::Execute(PacketDistributed)
MethodInfo GC_BROADCASTPSSTATEHandler_Execute_m15445_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BROADCASTPSSTATEHandler_Execute_m15445/* method */
	, &GC_BROADCASTPSSTATEHandler_t2560_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BROADCASTPSSTATEHandler_t2560_GC_BROADCASTPSSTATEHandler_Execute_m15445_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8921/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BROADCASTPSSTATEHandler_t2560_MethodInfos[] =
{
	&GC_BROADCASTPSSTATEHandler__ctor_m15444_MethodInfo,
	&GC_BROADCASTPSSTATEHandler_Execute_m15445_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BROADCASTPSSTATEHandler_Execute_m15445_MethodInfo;
static MethodInfo* GC_BROADCASTPSSTATEHandler_t2560_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BROADCASTPSSTATEHandler_Execute_m15445_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BROADCASTPSSTATEHandler_t2560_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BROADCASTPSSTATEHandler_t2560_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BROADCASTPSSTATEHandler_t2560_0_0_0;
extern Il2CppType GC_BROADCASTPSSTATEHandler_t2560_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BROADCASTPSSTATEHandler_t2560;
extern TypeInfo GC_BROADCASTPSSTATEHandler_t2560_il2cpp_TypeInfo;
TypeInfo GC_BROADCASTPSSTATEHandler_t2560_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BROADCASTPSSTATEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BROADCASTPSSTATEHandler_t2560_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BROADCASTPSSTATEHandler_t2560_il2cpp_TypeInfo/* element_class */
	, GC_BROADCASTPSSTATEHandler_t2560_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BROADCASTPSSTATEHandler_t2560_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BROADCASTPSSTATEHandler_t2560_il2cpp_TypeInfo/* cast_class */
	, &GC_BROADCASTPSSTATEHandler_t2560_0_0_0/* byval_arg */
	, &GC_BROADCASTPSSTATEHandler_t2560_1_0_0/* this_arg */
	, GC_BROADCASTPSSTATEHandler_t2560_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BROADCASTPSSTATEHandler_t2560)/* instance_size */
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
// SPacket.SocketInstance.GC_BROADCAST_ATTRHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BROADCAST_ATTRHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BROADCAST_ATTRHandler_t2561_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BROADCAST_ATTRHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BROADCAST_ATTRHaMethodDeclarations.h"

// GC_BROADCAST_ATTR
#include "AssemblyU2DCSharp_GC_BROADCAST_ATTR.h"
extern TypeInfo GC_BROADCAST_ATTR_t2985_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo Obj_Character_t1772_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// GC_BROADCAST_ATTR
#include "AssemblyU2DCSharp_GC_BROADCAST_ATTRMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_BROADCAST_ATTR_get_ObjId_m17418_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_FindObjCharacterInScene_m31348_MethodInfo;
extern MethodInfo Object_op_Equality_m4263_MethodInfo;
extern MethodInfo Obj_Character_UpdateAttrBroadcastPackt_m31510_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BROADCAST_ATTRHandler::.ctor()
extern MethodInfo GC_BROADCAST_ATTRHandler__ctor_m15446_MethodInfo;
 void GC_BROADCAST_ATTRHandler__ctor_m15446 (GC_BROADCAST_ATTRHandler_t2561 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BROADCAST_ATTRHandler::Execute(PacketDistributed)
extern MethodInfo GC_BROADCAST_ATTRHandler_Execute_m15447_MethodInfo;
 uint32_t GC_BROADCAST_ATTRHandler_Execute_m15447 (GC_BROADCAST_ATTRHandler_t2561 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BROADCAST_ATTR_t2985 * V_0 = {0};
	int32_t V_1 = 0;
	Obj_Character_t1772 * V_2 = {0};
	{
		V_0 = ((GC_BROADCAST_ATTR_t2985 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BROADCAST_ATTR_t2985_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_BROADCAST_ATTR_get_ObjId_m17418(V_0, /*hidden argument*/&GC_BROADCAST_ATTR_get_ObjId_m17418_MethodInfo);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_1 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_1);
		Obj_Character_t1772 * L_2 = ObjManager_FindObjCharacterInScene_m31348(L_1, V_1, /*hidden argument*/&ObjManager_FindObjCharacterInScene_m31348_MethodInfo);
		V_2 = L_2;
		bool L_3 = Object_op_Equality_m4263(NULL /*static, unused*/, V_2, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Equality_m4263_MethodInfo);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		return 2;
	}

IL_0030:
	{
		NullCheck(V_2);
		VirtActionInvoker1< GC_BROADCAST_ATTR_t2985 * >::Invoke(&Obj_Character_UpdateAttrBroadcastPackt_m31510_MethodInfo, V_2, V_0);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_BROADCAST_ATTRHandler
extern TypeInfo GC_BROADCAST_ATTRHandler_t2561_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BROADCAST_ATTRHandler::.ctor()
MethodInfo GC_BROADCAST_ATTRHandler__ctor_m15446_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BROADCAST_ATTRHandler__ctor_m15446/* method */
	, &GC_BROADCAST_ATTRHandler_t2561_il2cpp_TypeInfo/* declaring_type */
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
	, 8922/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BROADCAST_ATTRHandler_t2561_GC_BROADCAST_ATTRHandler_Execute_m15447_ParameterInfos[] = 
{
	{"ipacket", 0, 134222377, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BROADCAST_ATTRHandler_t2561_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BROADCAST_ATTRHandler::Execute(PacketDistributed)
MethodInfo GC_BROADCAST_ATTRHandler_Execute_m15447_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BROADCAST_ATTRHandler_Execute_m15447/* method */
	, &GC_BROADCAST_ATTRHandler_t2561_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BROADCAST_ATTRHandler_t2561_GC_BROADCAST_ATTRHandler_Execute_m15447_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8923/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BROADCAST_ATTRHandler_t2561_MethodInfos[] =
{
	&GC_BROADCAST_ATTRHandler__ctor_m15446_MethodInfo,
	&GC_BROADCAST_ATTRHandler_Execute_m15447_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BROADCAST_ATTRHandler_Execute_m15447_MethodInfo;
static MethodInfo* GC_BROADCAST_ATTRHandler_t2561_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BROADCAST_ATTRHandler_Execute_m15447_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BROADCAST_ATTRHandler_t2561_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BROADCAST_ATTRHandler_t2561_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BROADCAST_ATTRHandler_t2561_0_0_0;
extern Il2CppType GC_BROADCAST_ATTRHandler_t2561_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BROADCAST_ATTRHandler_t2561;
extern TypeInfo GC_BROADCAST_ATTRHandler_t2561_il2cpp_TypeInfo;
TypeInfo GC_BROADCAST_ATTRHandler_t2561_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BROADCAST_ATTRHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BROADCAST_ATTRHandler_t2561_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BROADCAST_ATTRHandler_t2561_il2cpp_TypeInfo/* element_class */
	, GC_BROADCAST_ATTRHandler_t2561_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BROADCAST_ATTRHandler_t2561_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BROADCAST_ATTRHandler_t2561_il2cpp_TypeInfo/* cast_class */
	, &GC_BROADCAST_ATTRHandler_t2561_0_0_0/* byval_arg */
	, &GC_BROADCAST_ATTRHandler_t2561_1_0_0/* this_arg */
	, GC_BROADCAST_ATTRHandler_t2561_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BROADCAST_ATTRHandler_t2561)/* instance_size */
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
// SPacket.SocketInstance.GC_BUY_GUILDGOODSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BUY_GUILDGOODSHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_BUY_GUILDGOODSHandler_t2562_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_BUY_GUILDGOODSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_BUY_GUILDGOODSHaMethodDeclarations.h"

// GC_BUY_GUILDGOODS
#include "AssemblyU2DCSharp_GC_BUY_GUILDGOODS.h"
extern TypeInfo GC_BUY_GUILDGOODS_t3341_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.GC_BUY_GUILDGOODSHandler::.ctor()
extern MethodInfo GC_BUY_GUILDGOODSHandler__ctor_m15448_MethodInfo;
 void GC_BUY_GUILDGOODSHandler__ctor_m15448 (GC_BUY_GUILDGOODSHandler_t2562 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_BUY_GUILDGOODSHandler::Execute(PacketDistributed)
extern MethodInfo GC_BUY_GUILDGOODSHandler_Execute_m15449_MethodInfo;
 uint32_t GC_BUY_GUILDGOODSHandler_Execute_m15449 (GC_BUY_GUILDGOODSHandler_t2562 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_BUY_GUILDGOODS_t3341 * V_0 = {0};
	{
		V_0 = ((GC_BUY_GUILDGOODS_t3341 *)Castclass(___ipacket, InitializedTypeInfo(&GC_BUY_GUILDGOODS_t3341_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.GC_BUY_GUILDGOODSHandler
extern TypeInfo GC_BUY_GUILDGOODSHandler_t2562_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_BUY_GUILDGOODSHandler::.ctor()
MethodInfo GC_BUY_GUILDGOODSHandler__ctor_m15448_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_BUY_GUILDGOODSHandler__ctor_m15448/* method */
	, &GC_BUY_GUILDGOODSHandler_t2562_il2cpp_TypeInfo/* declaring_type */
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
	, 8924/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_BUY_GUILDGOODSHandler_t2562_GC_BUY_GUILDGOODSHandler_Execute_m15449_ParameterInfos[] = 
{
	{"ipacket", 0, 134222378, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_BUY_GUILDGOODSHandler_t2562_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_BUY_GUILDGOODSHandler::Execute(PacketDistributed)
MethodInfo GC_BUY_GUILDGOODSHandler_Execute_m15449_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_BUY_GUILDGOODSHandler_Execute_m15449/* method */
	, &GC_BUY_GUILDGOODSHandler_t2562_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_BUY_GUILDGOODSHandler_t2562_GC_BUY_GUILDGOODSHandler_Execute_m15449_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8925/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_BUY_GUILDGOODSHandler_t2562_MethodInfos[] =
{
	&GC_BUY_GUILDGOODSHandler__ctor_m15448_MethodInfo,
	&GC_BUY_GUILDGOODSHandler_Execute_m15449_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_BUY_GUILDGOODSHandler_Execute_m15449_MethodInfo;
static MethodInfo* GC_BUY_GUILDGOODSHandler_t2562_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_BUY_GUILDGOODSHandler_Execute_m15449_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_BUY_GUILDGOODSHandler_t2562_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_BUY_GUILDGOODSHandler_t2562_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_BUY_GUILDGOODSHandler_t2562_0_0_0;
extern Il2CppType GC_BUY_GUILDGOODSHandler_t2562_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_BUY_GUILDGOODSHandler_t2562;
extern TypeInfo GC_BUY_GUILDGOODSHandler_t2562_il2cpp_TypeInfo;
TypeInfo GC_BUY_GUILDGOODSHandler_t2562_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_BUY_GUILDGOODSHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_BUY_GUILDGOODSHandler_t2562_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_BUY_GUILDGOODSHandler_t2562_il2cpp_TypeInfo/* element_class */
	, GC_BUY_GUILDGOODSHandler_t2562_InterfacesTypeInfos/* implemented_interfaces */
	, GC_BUY_GUILDGOODSHandler_t2562_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_BUY_GUILDGOODSHandler_t2562_il2cpp_TypeInfo/* cast_class */
	, &GC_BUY_GUILDGOODSHandler_t2562_0_0_0/* byval_arg */
	, &GC_BUY_GUILDGOODSHandler_t2562_1_0_0/* this_arg */
	, GC_BUY_GUILDGOODSHandler_t2562_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_BUY_GUILDGOODSHandler_t2562)/* instance_size */
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
// SPacket.SocketInstance.GC_CALL_FELLOW_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CALL_FELLOW_RETH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CALL_FELLOW_RETHandler_t2563_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CALL_FELLOW_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CALL_FELLOW_RETHMethodDeclarations.h"

// GC_CALL_FELLOW_RET
#include "AssemblyU2DCSharp_GC_CALL_FELLOW_RET.h"
// Games.Fellow.FellowContainer
#include "AssemblyU2DCSharp_Games_Fellow_FellowContainer.h"
// Games.Fellow.Fellow
#include "AssemblyU2DCSharp_Games_Fellow_Fellow.h"
// PartnerFrameLogic
#include "AssemblyU2DCSharp_PartnerFrameLogic.h"
// PartnerFrameLogic_Info
#include "AssemblyU2DCSharp_PartnerFrameLogic_Info.h"
extern TypeInfo GC_CALL_FELLOW_RET_t3064_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo PartnerFrameLogic_t1626_il2cpp_TypeInfo;
extern TypeInfo PartnerFrameLogic_Info_t1627_il2cpp_TypeInfo;
extern TypeInfo MenuBarLogic_t1544_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
// GC_CALL_FELLOW_RET
#include "AssemblyU2DCSharp_GC_CALL_FELLOW_RETMethodDeclarations.h"
// Games.Fellow.FellowContainer
#include "AssemblyU2DCSharp_Games_Fellow_FellowContainerMethodDeclarations.h"
// Games.Fellow.Fellow
#include "AssemblyU2DCSharp_Games_Fellow_FellowMethodDeclarations.h"
// PartnerFrameLogic
#include "AssemblyU2DCSharp_PartnerFrameLogicMethodDeclarations.h"
// PartnerFrameLogic_Info
#include "AssemblyU2DCSharp_PartnerFrameLogic_InfoMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_CALL_FELLOW_RET_get_Guid_m19167_MethodInfo;
extern MethodInfo GC_CALL_FELLOW_RET_get_Objid_m19171_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_FellowContainer_m35135_MethodInfo;
extern MethodInfo FellowContainer_GetFellowByGuid_m33400_MethodInfo;
extern MethodInfo Fellow_set_Called_m33333_MethodInfo;
extern MethodInfo PartnerFrameLogic_Instance_m10276_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo PartnerFrameLogic_Info_Instance_m10364_MethodInfo;
extern MethodInfo PartnerFrameLogic_Info_UpdateFellowInfo_m10368_MethodInfo;
extern MethodInfo PartnerFrameLogic_get_NewPlayerGuideFlag_Step_m10293_MethodInfo;
extern MethodInfo MenuBarLogic_Instance_m9540_MethodInfo;
extern MethodInfo Object_op_Implicit_m4087_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Obj_MainPlayer_set_CurFellowObjId_m31696_MethodInfo;
extern MethodInfo Obj_MainPlayer_set_CurFellowObjGuid_m31698_MethodInfo;
extern MethodInfo PlayerData_set_FellowPlayerEffect_m35150_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CALL_FELLOW_RETHandler::.ctor()
extern MethodInfo GC_CALL_FELLOW_RETHandler__ctor_m15450_MethodInfo;
 void GC_CALL_FELLOW_RETHandler__ctor_m15450 (GC_CALL_FELLOW_RETHandler_t2563 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CALL_FELLOW_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_CALL_FELLOW_RETHandler_Execute_m15451_MethodInfo;
 uint32_t GC_CALL_FELLOW_RETHandler_Execute_m15451 (GC_CALL_FELLOW_RETHandler_t2563 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CALL_FELLOW_RET_t3064 * V_0 = {0};
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	FellowContainer_t4724 * V_3 = {0};
	Fellow_t1174 * V_4 = {0};
	{
		V_0 = ((GC_CALL_FELLOW_RET_t3064 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CALL_FELLOW_RET_t3064_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		uint64_t L_0 = GC_CALL_FELLOW_RET_get_Guid_m19167(V_0, /*hidden argument*/&GC_CALL_FELLOW_RET_get_Guid_m19167_MethodInfo);
		V_1 = L_0;
		NullCheck(V_0);
		int32_t L_1 = GC_CALL_FELLOW_RET_get_Objid_m19171(V_0, /*hidden argument*/&GC_CALL_FELLOW_RET_get_Objid_m19171_MethodInfo);
		V_2 = L_1;
		if ((((uint64_t)V_1) != ((uint64_t)(((int64_t)(-1))))))
		{
			goto IL_0027;
		}
	}
	{
		return 0;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_2 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_2);
		FellowContainer_t4724 * L_3 = PlayerData_get_FellowContainer_m35135(L_2, /*hidden argument*/&PlayerData_get_FellowContainer_m35135_MethodInfo);
		V_3 = L_3;
		if (!V_3)
		{
			goto IL_00a0;
		}
	}
	{
		NullCheck(V_3);
		Fellow_t1174 * L_4 = FellowContainer_GetFellowByGuid_m33400(V_3, V_1, /*hidden argument*/&FellowContainer_GetFellowByGuid_m33400_MethodInfo);
		V_4 = L_4;
		if (!V_4)
		{
			goto IL_00a0;
		}
	}
	{
		NullCheck(V_4);
		Fellow_set_Called_m33333(V_4, 1, /*hidden argument*/&Fellow_set_Called_m33333_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PartnerFrameLogic_t1626_il2cpp_TypeInfo));
		PartnerFrameLogic_t1626 * L_5 = PartnerFrameLogic_Instance_m10276(NULL /*static, unused*/, /*hidden argument*/&PartnerFrameLogic_Instance_m10276_MethodInfo);
		bool L_6 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_5, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_6)
		{
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PartnerFrameLogic_Info_t1627_il2cpp_TypeInfo));
		PartnerFrameLogic_Info_t1627 * L_7 = PartnerFrameLogic_Info_Instance_m10364(NULL /*static, unused*/, /*hidden argument*/&PartnerFrameLogic_Info_Instance_m10364_MethodInfo);
		bool L_8 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_7, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PartnerFrameLogic_Info_t1627_il2cpp_TypeInfo));
		PartnerFrameLogic_Info_t1627 * L_9 = PartnerFrameLogic_Info_Instance_m10364(NULL /*static, unused*/, /*hidden argument*/&PartnerFrameLogic_Info_Instance_m10364_MethodInfo);
		NullCheck(L_9);
		PartnerFrameLogic_Info_UpdateFellowInfo_m10368(L_9, V_4, /*hidden argument*/&PartnerFrameLogic_Info_UpdateFellowInfo_m10368_MethodInfo);
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PartnerFrameLogic_t1626_il2cpp_TypeInfo));
		PartnerFrameLogic_t1626 * L_10 = PartnerFrameLogic_Instance_m10276(NULL /*static, unused*/, /*hidden argument*/&PartnerFrameLogic_Instance_m10276_MethodInfo);
		NullCheck(L_10);
		int32_t L_11 = PartnerFrameLogic_get_NewPlayerGuideFlag_Step_m10293(L_10, /*hidden argument*/&PartnerFrameLogic_get_NewPlayerGuideFlag_Step_m10293_MethodInfo);
		if ((((uint32_t)L_11) != ((uint32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MenuBarLogic_t1544_il2cpp_TypeInfo));
		MenuBarLogic_t1544 * L_12 = MenuBarLogic_Instance_m9540(NULL /*static, unused*/, /*hidden argument*/&MenuBarLogic_Instance_m9540_MethodInfo);
		bool L_13 = Object_op_Implicit_m4087(NULL /*static, unused*/, L_12, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_13)
		{
			goto IL_00a0;
		}
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_14 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_14);
		Obj_MainPlayer_t1732 * L_15 = ObjManager_get_MainPlayer_m31308(L_14, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_15);
		Obj_MainPlayer_set_CurFellowObjId_m31696(L_15, V_2, /*hidden argument*/&Obj_MainPlayer_set_CurFellowObjId_m31696_MethodInfo);
		ObjManager_t4461 * L_16 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_16);
		Obj_MainPlayer_t1732 * L_17 = ObjManager_get_MainPlayer_m31308(L_16, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_17);
		Obj_MainPlayer_set_CurFellowObjGuid_m31698(L_17, V_1, /*hidden argument*/&Obj_MainPlayer_set_CurFellowObjGuid_m31698_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_18 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_18);
		PlayerData_set_FellowPlayerEffect_m35150(L_18, 1, /*hidden argument*/&PlayerData_set_FellowPlayerEffect_m35150_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CALL_FELLOW_RETHandler
extern TypeInfo GC_CALL_FELLOW_RETHandler_t2563_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CALL_FELLOW_RETHandler::.ctor()
MethodInfo GC_CALL_FELLOW_RETHandler__ctor_m15450_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CALL_FELLOW_RETHandler__ctor_m15450/* method */
	, &GC_CALL_FELLOW_RETHandler_t2563_il2cpp_TypeInfo/* declaring_type */
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
	, 8926/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CALL_FELLOW_RETHandler_t2563_GC_CALL_FELLOW_RETHandler_Execute_m15451_ParameterInfos[] = 
{
	{"ipacket", 0, 134222379, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CALL_FELLOW_RETHandler_t2563_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CALL_FELLOW_RETHandler::Execute(PacketDistributed)
MethodInfo GC_CALL_FELLOW_RETHandler_Execute_m15451_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CALL_FELLOW_RETHandler_Execute_m15451/* method */
	, &GC_CALL_FELLOW_RETHandler_t2563_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CALL_FELLOW_RETHandler_t2563_GC_CALL_FELLOW_RETHandler_Execute_m15451_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8927/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CALL_FELLOW_RETHandler_t2563_MethodInfos[] =
{
	&GC_CALL_FELLOW_RETHandler__ctor_m15450_MethodInfo,
	&GC_CALL_FELLOW_RETHandler_Execute_m15451_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CALL_FELLOW_RETHandler_Execute_m15451_MethodInfo;
static MethodInfo* GC_CALL_FELLOW_RETHandler_t2563_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CALL_FELLOW_RETHandler_Execute_m15451_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CALL_FELLOW_RETHandler_t2563_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CALL_FELLOW_RETHandler_t2563_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CALL_FELLOW_RETHandler_t2563_0_0_0;
extern Il2CppType GC_CALL_FELLOW_RETHandler_t2563_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CALL_FELLOW_RETHandler_t2563;
extern TypeInfo GC_CALL_FELLOW_RETHandler_t2563_il2cpp_TypeInfo;
TypeInfo GC_CALL_FELLOW_RETHandler_t2563_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CALL_FELLOW_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CALL_FELLOW_RETHandler_t2563_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CALL_FELLOW_RETHandler_t2563_il2cpp_TypeInfo/* element_class */
	, GC_CALL_FELLOW_RETHandler_t2563_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CALL_FELLOW_RETHandler_t2563_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CALL_FELLOW_RETHandler_t2563_il2cpp_TypeInfo/* cast_class */
	, &GC_CALL_FELLOW_RETHandler_t2563_0_0_0/* byval_arg */
	, &GC_CALL_FELLOW_RETHandler_t2563_1_0_0/* this_arg */
	, GC_CALL_FELLOW_RETHandler_t2563_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CALL_FELLOW_RETHandler_t2563)/* instance_size */
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
// SPacket.SocketInstance.GC_CDTIME_UPDATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CDTIME_UPDATEHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CDTIME_UPDATEHandler_t2564_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CDTIME_UPDATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CDTIME_UPDATEHanMethodDeclarations.h"

// GC_CDTIME_UPDATE
#include "AssemblyU2DCSharp_GC_CDTIME_UPDATE.h"
extern TypeInfo GC_CDTIME_UPDATE_t2984_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CDTIME_UPDATEHandler::.ctor()
extern MethodInfo GC_CDTIME_UPDATEHandler__ctor_m15452_MethodInfo;
 void GC_CDTIME_UPDATEHandler__ctor_m15452 (GC_CDTIME_UPDATEHandler_t2564 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CDTIME_UPDATEHandler::Execute(PacketDistributed)
extern MethodInfo GC_CDTIME_UPDATEHandler_Execute_m15453_MethodInfo;
 uint32_t GC_CDTIME_UPDATEHandler_Execute_m15453 (GC_CDTIME_UPDATEHandler_t2564 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CDTIME_UPDATE_t2984 * V_0 = {0};
	{
		V_0 = ((GC_CDTIME_UPDATE_t2984 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CDTIME_UPDATE_t2984_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.GC_CDTIME_UPDATEHandler
extern TypeInfo GC_CDTIME_UPDATEHandler_t2564_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CDTIME_UPDATEHandler::.ctor()
MethodInfo GC_CDTIME_UPDATEHandler__ctor_m15452_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CDTIME_UPDATEHandler__ctor_m15452/* method */
	, &GC_CDTIME_UPDATEHandler_t2564_il2cpp_TypeInfo/* declaring_type */
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
	, 8928/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CDTIME_UPDATEHandler_t2564_GC_CDTIME_UPDATEHandler_Execute_m15453_ParameterInfos[] = 
{
	{"ipacket", 0, 134222380, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CDTIME_UPDATEHandler_t2564_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CDTIME_UPDATEHandler::Execute(PacketDistributed)
MethodInfo GC_CDTIME_UPDATEHandler_Execute_m15453_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CDTIME_UPDATEHandler_Execute_m15453/* method */
	, &GC_CDTIME_UPDATEHandler_t2564_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CDTIME_UPDATEHandler_t2564_GC_CDTIME_UPDATEHandler_Execute_m15453_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8929/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CDTIME_UPDATEHandler_t2564_MethodInfos[] =
{
	&GC_CDTIME_UPDATEHandler__ctor_m15452_MethodInfo,
	&GC_CDTIME_UPDATEHandler_Execute_m15453_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CDTIME_UPDATEHandler_Execute_m15453_MethodInfo;
static MethodInfo* GC_CDTIME_UPDATEHandler_t2564_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CDTIME_UPDATEHandler_Execute_m15453_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CDTIME_UPDATEHandler_t2564_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CDTIME_UPDATEHandler_t2564_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CDTIME_UPDATEHandler_t2564_0_0_0;
extern Il2CppType GC_CDTIME_UPDATEHandler_t2564_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CDTIME_UPDATEHandler_t2564;
extern TypeInfo GC_CDTIME_UPDATEHandler_t2564_il2cpp_TypeInfo;
TypeInfo GC_CDTIME_UPDATEHandler_t2564_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CDTIME_UPDATEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CDTIME_UPDATEHandler_t2564_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CDTIME_UPDATEHandler_t2564_il2cpp_TypeInfo/* element_class */
	, GC_CDTIME_UPDATEHandler_t2564_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CDTIME_UPDATEHandler_t2564_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CDTIME_UPDATEHandler_t2564_il2cpp_TypeInfo/* cast_class */
	, &GC_CDTIME_UPDATEHandler_t2564_0_0_0/* byval_arg */
	, &GC_CDTIME_UPDATEHandler_t2564_1_0_0/* this_arg */
	, GC_CDTIME_UPDATEHandler_t2564_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CDTIME_UPDATEHandler_t2564)/* instance_size */
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
// SPacket.SocketInstance.GC_CHALLENGERANKLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHALLENGERANKLIS.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CHALLENGERANKLISTHandler_t2565_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CHALLENGERANKLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHALLENGERANKLISMethodDeclarations.h"

// GC_CHALLENGERANKLIST
#include "AssemblyU2DCSharp_GC_CHALLENGERANKLIST.h"
extern TypeInfo GC_CHALLENGERANKLIST_t3108_il2cpp_TypeInfo;
extern TypeInfo PVPData_t4936_il2cpp_TypeInfo;
// PVPData
#include "AssemblyU2DCSharp_PVPDataMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo PVPData_UpdatePvPRankList_m34959_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CHALLENGERANKLISTHandler::.ctor()
extern MethodInfo GC_CHALLENGERANKLISTHandler__ctor_m15454_MethodInfo;
 void GC_CHALLENGERANKLISTHandler__ctor_m15454 (GC_CHALLENGERANKLISTHandler_t2565 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CHALLENGERANKLISTHandler::Execute(PacketDistributed)
extern MethodInfo GC_CHALLENGERANKLISTHandler_Execute_m15455_MethodInfo;
 uint32_t GC_CHALLENGERANKLISTHandler_Execute_m15455 (GC_CHALLENGERANKLISTHandler_t2565 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CHALLENGERANKLIST_t3108 * V_0 = {0};
	{
		V_0 = ((GC_CHALLENGERANKLIST_t3108 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CHALLENGERANKLIST_t3108_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PVPData_t4936_il2cpp_TypeInfo));
		PVPData_UpdatePvPRankList_m34959(NULL /*static, unused*/, V_0, /*hidden argument*/&PVPData_UpdatePvPRankList_m34959_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CHALLENGERANKLISTHandler
extern TypeInfo GC_CHALLENGERANKLISTHandler_t2565_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CHALLENGERANKLISTHandler::.ctor()
MethodInfo GC_CHALLENGERANKLISTHandler__ctor_m15454_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CHALLENGERANKLISTHandler__ctor_m15454/* method */
	, &GC_CHALLENGERANKLISTHandler_t2565_il2cpp_TypeInfo/* declaring_type */
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
	, 8930/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CHALLENGERANKLISTHandler_t2565_GC_CHALLENGERANKLISTHandler_Execute_m15455_ParameterInfos[] = 
{
	{"ipacket", 0, 134222381, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CHALLENGERANKLISTHandler_t2565_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CHALLENGERANKLISTHandler::Execute(PacketDistributed)
MethodInfo GC_CHALLENGERANKLISTHandler_Execute_m15455_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CHALLENGERANKLISTHandler_Execute_m15455/* method */
	, &GC_CHALLENGERANKLISTHandler_t2565_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CHALLENGERANKLISTHandler_t2565_GC_CHALLENGERANKLISTHandler_Execute_m15455_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8931/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CHALLENGERANKLISTHandler_t2565_MethodInfos[] =
{
	&GC_CHALLENGERANKLISTHandler__ctor_m15454_MethodInfo,
	&GC_CHALLENGERANKLISTHandler_Execute_m15455_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CHALLENGERANKLISTHandler_Execute_m15455_MethodInfo;
static MethodInfo* GC_CHALLENGERANKLISTHandler_t2565_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CHALLENGERANKLISTHandler_Execute_m15455_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CHALLENGERANKLISTHandler_t2565_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CHALLENGERANKLISTHandler_t2565_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CHALLENGERANKLISTHandler_t2565_0_0_0;
extern Il2CppType GC_CHALLENGERANKLISTHandler_t2565_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CHALLENGERANKLISTHandler_t2565;
extern TypeInfo GC_CHALLENGERANKLISTHandler_t2565_il2cpp_TypeInfo;
TypeInfo GC_CHALLENGERANKLISTHandler_t2565_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CHALLENGERANKLISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CHALLENGERANKLISTHandler_t2565_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CHALLENGERANKLISTHandler_t2565_il2cpp_TypeInfo/* element_class */
	, GC_CHALLENGERANKLISTHandler_t2565_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CHALLENGERANKLISTHandler_t2565_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CHALLENGERANKLISTHandler_t2565_il2cpp_TypeInfo/* cast_class */
	, &GC_CHALLENGERANKLISTHandler_t2565_0_0_0/* byval_arg */
	, &GC_CHALLENGERANKLISTHandler_t2565_1_0_0/* this_arg */
	, GC_CHALLENGERANKLISTHandler_t2565_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CHALLENGERANKLISTHandler_t2565)/* instance_size */
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
// SPacket.SocketInstance.GC_CHALLENGE_HISTORYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHALLENGE_HISTOR.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CHALLENGE_HISTORYHandler_t2566_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CHALLENGE_HISTORYHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHALLENGE_HISTORMethodDeclarations.h"

// GC_CHALLENGE_HISTORY
#include "AssemblyU2DCSharp_GC_CHALLENGE_HISTORY.h"
extern TypeInfo GC_CHALLENGE_HISTORY_t3112_il2cpp_TypeInfo;
extern TypeInfo PVPData_t4936_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo PVPData_UpdateChallengeHistory_m34943_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CHALLENGE_HISTORYHandler::.ctor()
extern MethodInfo GC_CHALLENGE_HISTORYHandler__ctor_m15456_MethodInfo;
 void GC_CHALLENGE_HISTORYHandler__ctor_m15456 (GC_CHALLENGE_HISTORYHandler_t2566 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CHALLENGE_HISTORYHandler::Execute(PacketDistributed)
extern MethodInfo GC_CHALLENGE_HISTORYHandler_Execute_m15457_MethodInfo;
 uint32_t GC_CHALLENGE_HISTORYHandler_Execute_m15457 (GC_CHALLENGE_HISTORYHandler_t2566 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CHALLENGE_HISTORY_t3112 * V_0 = {0};
	{
		V_0 = ((GC_CHALLENGE_HISTORY_t3112 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CHALLENGE_HISTORY_t3112_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PVPData_t4936_il2cpp_TypeInfo));
		PVPData_UpdateChallengeHistory_m34943(NULL /*static, unused*/, V_0, /*hidden argument*/&PVPData_UpdateChallengeHistory_m34943_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CHALLENGE_HISTORYHandler
extern TypeInfo GC_CHALLENGE_HISTORYHandler_t2566_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CHALLENGE_HISTORYHandler::.ctor()
MethodInfo GC_CHALLENGE_HISTORYHandler__ctor_m15456_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CHALLENGE_HISTORYHandler__ctor_m15456/* method */
	, &GC_CHALLENGE_HISTORYHandler_t2566_il2cpp_TypeInfo/* declaring_type */
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
	, 8932/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CHALLENGE_HISTORYHandler_t2566_GC_CHALLENGE_HISTORYHandler_Execute_m15457_ParameterInfos[] = 
{
	{"ipacket", 0, 134222382, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CHALLENGE_HISTORYHandler_t2566_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CHALLENGE_HISTORYHandler::Execute(PacketDistributed)
MethodInfo GC_CHALLENGE_HISTORYHandler_Execute_m15457_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CHALLENGE_HISTORYHandler_Execute_m15457/* method */
	, &GC_CHALLENGE_HISTORYHandler_t2566_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CHALLENGE_HISTORYHandler_t2566_GC_CHALLENGE_HISTORYHandler_Execute_m15457_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8933/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CHALLENGE_HISTORYHandler_t2566_MethodInfos[] =
{
	&GC_CHALLENGE_HISTORYHandler__ctor_m15456_MethodInfo,
	&GC_CHALLENGE_HISTORYHandler_Execute_m15457_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CHALLENGE_HISTORYHandler_Execute_m15457_MethodInfo;
static MethodInfo* GC_CHALLENGE_HISTORYHandler_t2566_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CHALLENGE_HISTORYHandler_Execute_m15457_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CHALLENGE_HISTORYHandler_t2566_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CHALLENGE_HISTORYHandler_t2566_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CHALLENGE_HISTORYHandler_t2566_0_0_0;
extern Il2CppType GC_CHALLENGE_HISTORYHandler_t2566_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CHALLENGE_HISTORYHandler_t2566;
extern TypeInfo GC_CHALLENGE_HISTORYHandler_t2566_il2cpp_TypeInfo;
TypeInfo GC_CHALLENGE_HISTORYHandler_t2566_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CHALLENGE_HISTORYHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CHALLENGE_HISTORYHandler_t2566_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CHALLENGE_HISTORYHandler_t2566_il2cpp_TypeInfo/* element_class */
	, GC_CHALLENGE_HISTORYHandler_t2566_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CHALLENGE_HISTORYHandler_t2566_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CHALLENGE_HISTORYHandler_t2566_il2cpp_TypeInfo/* cast_class */
	, &GC_CHALLENGE_HISTORYHandler_t2566_0_0_0/* byval_arg */
	, &GC_CHALLENGE_HISTORYHandler_t2566_1_0_0/* this_arg */
	, GC_CHALLENGE_HISTORYHandler_t2566_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CHALLENGE_HISTORYHandler_t2566)/* instance_size */
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
// SPacket.SocketInstance.GC_CHALLENGE_MYDATAHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHALLENGE_MYDATA.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CHALLENGE_MYDATAHandler_t2567_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CHALLENGE_MYDATAHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHALLENGE_MYDATAMethodDeclarations.h"

// GC_CHALLENGE_MYDATA
#include "AssemblyU2DCSharp_GC_CHALLENGE_MYDATA.h"
extern TypeInfo GC_CHALLENGE_MYDATA_t3104_il2cpp_TypeInfo;
extern TypeInfo PVPData_t4936_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo PVPData_UpdateMyData_m34942_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CHALLENGE_MYDATAHandler::.ctor()
extern MethodInfo GC_CHALLENGE_MYDATAHandler__ctor_m15458_MethodInfo;
 void GC_CHALLENGE_MYDATAHandler__ctor_m15458 (GC_CHALLENGE_MYDATAHandler_t2567 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CHALLENGE_MYDATAHandler::Execute(PacketDistributed)
extern MethodInfo GC_CHALLENGE_MYDATAHandler_Execute_m15459_MethodInfo;
 uint32_t GC_CHALLENGE_MYDATAHandler_Execute_m15459 (GC_CHALLENGE_MYDATAHandler_t2567 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CHALLENGE_MYDATA_t3104 * V_0 = {0};
	{
		V_0 = ((GC_CHALLENGE_MYDATA_t3104 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CHALLENGE_MYDATA_t3104_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PVPData_t4936_il2cpp_TypeInfo));
		PVPData_UpdateMyData_m34942(NULL /*static, unused*/, V_0, /*hidden argument*/&PVPData_UpdateMyData_m34942_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CHALLENGE_MYDATAHandler
extern TypeInfo GC_CHALLENGE_MYDATAHandler_t2567_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CHALLENGE_MYDATAHandler::.ctor()
MethodInfo GC_CHALLENGE_MYDATAHandler__ctor_m15458_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CHALLENGE_MYDATAHandler__ctor_m15458/* method */
	, &GC_CHALLENGE_MYDATAHandler_t2567_il2cpp_TypeInfo/* declaring_type */
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
	, 8934/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CHALLENGE_MYDATAHandler_t2567_GC_CHALLENGE_MYDATAHandler_Execute_m15459_ParameterInfos[] = 
{
	{"ipacket", 0, 134222383, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CHALLENGE_MYDATAHandler_t2567_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CHALLENGE_MYDATAHandler::Execute(PacketDistributed)
MethodInfo GC_CHALLENGE_MYDATAHandler_Execute_m15459_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CHALLENGE_MYDATAHandler_Execute_m15459/* method */
	, &GC_CHALLENGE_MYDATAHandler_t2567_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CHALLENGE_MYDATAHandler_t2567_GC_CHALLENGE_MYDATAHandler_Execute_m15459_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8935/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CHALLENGE_MYDATAHandler_t2567_MethodInfos[] =
{
	&GC_CHALLENGE_MYDATAHandler__ctor_m15458_MethodInfo,
	&GC_CHALLENGE_MYDATAHandler_Execute_m15459_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CHALLENGE_MYDATAHandler_Execute_m15459_MethodInfo;
static MethodInfo* GC_CHALLENGE_MYDATAHandler_t2567_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CHALLENGE_MYDATAHandler_Execute_m15459_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CHALLENGE_MYDATAHandler_t2567_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CHALLENGE_MYDATAHandler_t2567_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CHALLENGE_MYDATAHandler_t2567_0_0_0;
extern Il2CppType GC_CHALLENGE_MYDATAHandler_t2567_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CHALLENGE_MYDATAHandler_t2567;
extern TypeInfo GC_CHALLENGE_MYDATAHandler_t2567_il2cpp_TypeInfo;
TypeInfo GC_CHALLENGE_MYDATAHandler_t2567_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CHALLENGE_MYDATAHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CHALLENGE_MYDATAHandler_t2567_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CHALLENGE_MYDATAHandler_t2567_il2cpp_TypeInfo/* element_class */
	, GC_CHALLENGE_MYDATAHandler_t2567_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CHALLENGE_MYDATAHandler_t2567_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CHALLENGE_MYDATAHandler_t2567_il2cpp_TypeInfo/* cast_class */
	, &GC_CHALLENGE_MYDATAHandler_t2567_0_0_0/* byval_arg */
	, &GC_CHALLENGE_MYDATAHandler_t2567_1_0_0/* this_arg */
	, GC_CHALLENGE_MYDATAHandler_t2567_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CHALLENGE_MYDATAHandler_t2567)/* instance_size */
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
// SPacket.SocketInstance.GC_CHALLENGE_REWARDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHALLENGE_REWARD.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CHALLENGE_REWARDHandler_t2568_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CHALLENGE_REWARDHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHALLENGE_REWARDMethodDeclarations.h"

// GC_CHALLENGE_REWARD
#include "AssemblyU2DCSharp_GC_CHALLENGE_REWARD.h"
extern TypeInfo GC_CHALLENGE_REWARD_t3111_il2cpp_TypeInfo;
extern TypeInfo PVPData_t4936_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo PVPData_UpdateChallengeReward_m34952_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CHALLENGE_REWARDHandler::.ctor()
extern MethodInfo GC_CHALLENGE_REWARDHandler__ctor_m15460_MethodInfo;
 void GC_CHALLENGE_REWARDHandler__ctor_m15460 (GC_CHALLENGE_REWARDHandler_t2568 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CHALLENGE_REWARDHandler::Execute(PacketDistributed)
extern MethodInfo GC_CHALLENGE_REWARDHandler_Execute_m15461_MethodInfo;
 uint32_t GC_CHALLENGE_REWARDHandler_Execute_m15461 (GC_CHALLENGE_REWARDHandler_t2568 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CHALLENGE_REWARD_t3111 * V_0 = {0};
	{
		V_0 = ((GC_CHALLENGE_REWARD_t3111 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CHALLENGE_REWARD_t3111_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PVPData_t4936_il2cpp_TypeInfo));
		PVPData_UpdateChallengeReward_m34952(NULL /*static, unused*/, V_0, /*hidden argument*/&PVPData_UpdateChallengeReward_m34952_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CHALLENGE_REWARDHandler
extern TypeInfo GC_CHALLENGE_REWARDHandler_t2568_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CHALLENGE_REWARDHandler::.ctor()
MethodInfo GC_CHALLENGE_REWARDHandler__ctor_m15460_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CHALLENGE_REWARDHandler__ctor_m15460/* method */
	, &GC_CHALLENGE_REWARDHandler_t2568_il2cpp_TypeInfo/* declaring_type */
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
	, 8936/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CHALLENGE_REWARDHandler_t2568_GC_CHALLENGE_REWARDHandler_Execute_m15461_ParameterInfos[] = 
{
	{"ipacket", 0, 134222384, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CHALLENGE_REWARDHandler_t2568_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CHALLENGE_REWARDHandler::Execute(PacketDistributed)
MethodInfo GC_CHALLENGE_REWARDHandler_Execute_m15461_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CHALLENGE_REWARDHandler_Execute_m15461/* method */
	, &GC_CHALLENGE_REWARDHandler_t2568_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CHALLENGE_REWARDHandler_t2568_GC_CHALLENGE_REWARDHandler_Execute_m15461_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8937/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CHALLENGE_REWARDHandler_t2568_MethodInfos[] =
{
	&GC_CHALLENGE_REWARDHandler__ctor_m15460_MethodInfo,
	&GC_CHALLENGE_REWARDHandler_Execute_m15461_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CHALLENGE_REWARDHandler_Execute_m15461_MethodInfo;
static MethodInfo* GC_CHALLENGE_REWARDHandler_t2568_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CHALLENGE_REWARDHandler_Execute_m15461_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CHALLENGE_REWARDHandler_t2568_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CHALLENGE_REWARDHandler_t2568_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CHALLENGE_REWARDHandler_t2568_0_0_0;
extern Il2CppType GC_CHALLENGE_REWARDHandler_t2568_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CHALLENGE_REWARDHandler_t2568;
extern TypeInfo GC_CHALLENGE_REWARDHandler_t2568_il2cpp_TypeInfo;
TypeInfo GC_CHALLENGE_REWARDHandler_t2568_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CHALLENGE_REWARDHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CHALLENGE_REWARDHandler_t2568_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CHALLENGE_REWARDHandler_t2568_il2cpp_TypeInfo/* element_class */
	, GC_CHALLENGE_REWARDHandler_t2568_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CHALLENGE_REWARDHandler_t2568_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CHALLENGE_REWARDHandler_t2568_il2cpp_TypeInfo/* cast_class */
	, &GC_CHALLENGE_REWARDHandler_t2568_0_0_0/* byval_arg */
	, &GC_CHALLENGE_REWARDHandler_t2568_1_0_0/* this_arg */
	, GC_CHALLENGE_REWARDHandler_t2568_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CHALLENGE_REWARDHandler_t2568)/* instance_size */
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
// SPacket.SocketInstance.GC_CHANGENAMEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHANGENAMEHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CHANGENAMEHandler_t2569_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CHANGENAMEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHANGENAMEHandleMethodDeclarations.h"

// GC_CHANGENAME
#include "AssemblyU2DCSharp_GC_CHANGENAME.h"
// ChangeNameLogic/ChangeNameType
#include "AssemblyU2DCSharp_ChangeNameLogic_ChangeNameType.h"
extern TypeInfo GC_CHANGENAME_t3400_il2cpp_TypeInfo;
// GC_CHANGENAME
#include "AssemblyU2DCSharp_GC_CHANGENAMEMethodDeclarations.h"
// ChangeNameLogic
#include "AssemblyU2DCSharp_ChangeNameLogicMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_CHANGENAME_get_Nametype_m24715_MethodInfo;
extern MethodInfo ChangeNameLogic_ShowChangeName_m7513_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CHANGENAMEHandler::.ctor()
extern MethodInfo GC_CHANGENAMEHandler__ctor_m15462_MethodInfo;
 void GC_CHANGENAMEHandler__ctor_m15462 (GC_CHANGENAMEHandler_t2569 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CHANGENAMEHandler::Execute(PacketDistributed)
extern MethodInfo GC_CHANGENAMEHandler_Execute_m15463_MethodInfo;
 uint32_t GC_CHANGENAMEHandler_Execute_m15463 (GC_CHANGENAMEHandler_t2569 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CHANGENAME_t3400 * V_0 = {0};
	{
		V_0 = ((GC_CHANGENAME_t3400 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CHANGENAME_t3400_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_CHANGENAME_get_Nametype_m24715(V_0, /*hidden argument*/&GC_CHANGENAME_get_Nametype_m24715_MethodInfo);
		ChangeNameLogic_ShowChangeName_m7513(NULL /*static, unused*/, L_0, /*hidden argument*/&ChangeNameLogic_ShowChangeName_m7513_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CHANGENAMEHandler
extern TypeInfo GC_CHANGENAMEHandler_t2569_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CHANGENAMEHandler::.ctor()
MethodInfo GC_CHANGENAMEHandler__ctor_m15462_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CHANGENAMEHandler__ctor_m15462/* method */
	, &GC_CHANGENAMEHandler_t2569_il2cpp_TypeInfo/* declaring_type */
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
	, 8938/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CHANGENAMEHandler_t2569_GC_CHANGENAMEHandler_Execute_m15463_ParameterInfos[] = 
{
	{"ipacket", 0, 134222385, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CHANGENAMEHandler_t2569_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CHANGENAMEHandler::Execute(PacketDistributed)
MethodInfo GC_CHANGENAMEHandler_Execute_m15463_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CHANGENAMEHandler_Execute_m15463/* method */
	, &GC_CHANGENAMEHandler_t2569_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CHANGENAMEHandler_t2569_GC_CHANGENAMEHandler_Execute_m15463_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8939/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CHANGENAMEHandler_t2569_MethodInfos[] =
{
	&GC_CHANGENAMEHandler__ctor_m15462_MethodInfo,
	&GC_CHANGENAMEHandler_Execute_m15463_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CHANGENAMEHandler_Execute_m15463_MethodInfo;
static MethodInfo* GC_CHANGENAMEHandler_t2569_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CHANGENAMEHandler_Execute_m15463_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CHANGENAMEHandler_t2569_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CHANGENAMEHandler_t2569_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CHANGENAMEHandler_t2569_0_0_0;
extern Il2CppType GC_CHANGENAMEHandler_t2569_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CHANGENAMEHandler_t2569;
extern TypeInfo GC_CHANGENAMEHandler_t2569_il2cpp_TypeInfo;
TypeInfo GC_CHANGENAMEHandler_t2569_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CHANGENAMEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CHANGENAMEHandler_t2569_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CHANGENAMEHandler_t2569_il2cpp_TypeInfo/* element_class */
	, GC_CHANGENAMEHandler_t2569_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CHANGENAMEHandler_t2569_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CHANGENAMEHandler_t2569_il2cpp_TypeInfo/* cast_class */
	, &GC_CHANGENAMEHandler_t2569_0_0_0/* byval_arg */
	, &GC_CHANGENAMEHandler_t2569_1_0_0/* this_arg */
	, GC_CHANGENAMEHandler_t2569_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CHANGENAMEHandler_t2569)/* instance_size */
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
// SPacket.SocketInstance.GC_CHANGE_PKLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHANGE_PKLISTHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CHANGE_PKLISTHandler_t2570_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CHANGE_PKLISTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHANGE_PKLISTHanMethodDeclarations.h"

// GC_CHANGE_PKLIST
#include "AssemblyU2DCSharp_GC_CHANGE_PKLIST.h"
// Games.LogicObj.Obj
#include "AssemblyU2DCSharp_Games_LogicObj_Obj.h"
// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_TYP.h"
extern TypeInfo GC_CHANGE_PKLIST_t3095_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo Obj_Character_t1772_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// GC_CHANGE_PKLIST
#include "AssemblyU2DCSharp_GC_CHANGE_PKLISTMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo GC_CHANGE_PKLIST_get_IsPKListEmpty_m19640_MethodInfo;
extern MethodInfo PlayerData_set_IsCanPKLegal_m35050_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Object_op_Implicit_m4087_MethodInfo;
extern MethodInfo Obj_Character_SetNameBoardColor_m31403_MethodInfo;
extern MethodInfo GC_CHANGE_PKLIST_get_ObjId_m19632_MethodInfo;
extern MethodInfo ObjManager_FindObjInScene_m31347_MethodInfo;
extern MethodInfo Object_op_Equality_m4263_MethodInfo;
extern MethodInfo Obj_get_ObjType_m31245_MethodInfo;
extern MethodInfo Component_GetComponent_TisObj_OtherPlayer_t1655_m40324_MethodInfo;
extern MethodInfo GC_CHANGE_PKLIST_get_IsInPkList_m19636_MethodInfo;
extern MethodInfo Obj_OtherPlayer_set_IsInMainPlayerPKList_m32114_MethodInfo;
struct Component_t955;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// Declaration !!0 UnityEngine.Component::GetComponent<Games.LogicObj.Obj_OtherPlayer>()
// !!0 UnityEngine.Component::GetComponent<Games.LogicObj.Obj_OtherPlayer>()
 Obj_OtherPlayer_t1655 * Component_GetComponent_TisObj_OtherPlayer_t1655_m40324 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Component_GetComponent_TisObj_OtherPlayer_t1655_m40324_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CHANGE_PKLISTHandler::.ctor()
extern MethodInfo GC_CHANGE_PKLISTHandler__ctor_m15464_MethodInfo;
 void GC_CHANGE_PKLISTHandler__ctor_m15464 (GC_CHANGE_PKLISTHandler_t2570 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CHANGE_PKLISTHandler::Execute(PacketDistributed)
extern MethodInfo GC_CHANGE_PKLISTHandler_Execute_m15465_MethodInfo;
 uint32_t GC_CHANGE_PKLISTHandler_Execute_m15465 (GC_CHANGE_PKLISTHandler_t2570 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CHANGE_PKLIST_t3095 * V_0 = {0};
	Obj_MainPlayer_t1732 * V_1 = {0};
	int32_t V_2 = 0;
	Obj_t2130 * V_3 = {0};
	Obj_OtherPlayer_t1655 * V_4 = {0};
	PlayerData_t2179 * G_B4_0 = {0};
	PlayerData_t2179 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	PlayerData_t2179 * G_B5_1 = {0};
	Obj_OtherPlayer_t1655 * G_B14_0 = {0};
	Obj_OtherPlayer_t1655 * G_B13_0 = {0};
	int32_t G_B15_0 = 0;
	Obj_OtherPlayer_t1655 * G_B15_1 = {0};
	{
		V_0 = ((GC_CHANGE_PKLIST_t3095 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CHANGE_PKLIST_t3095_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(V_0);
		int32_t L_1 = GC_CHANGE_PKLIST_get_IsPKListEmpty_m19640(V_0, /*hidden argument*/&GC_CHANGE_PKLIST_get_IsPKListEmpty_m19640_MethodInfo);
		G_B3_0 = L_0;
		if (L_1)
		{
			G_B4_0 = L_0;
			goto IL_002a;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		goto IL_002b;
	}

IL_002a:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_002b:
	{
		NullCheck(G_B5_1);
		PlayerData_set_IsCanPKLegal_m35050(G_B5_1, G_B5_0, /*hidden argument*/&PlayerData_set_IsCanPKLegal_m35050_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_2 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_2);
		Obj_MainPlayer_t1732 * L_3 = ObjManager_get_MainPlayer_m31308(L_2, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		V_1 = L_3;
		bool L_4 = Object_op_Implicit_m4087(NULL /*static, unused*/, V_1, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		NullCheck(V_1);
		VirtActionInvoker0::Invoke(&Obj_Character_SetNameBoardColor_m31403_MethodInfo, V_1);
	}

IL_004c:
	{
		NullCheck(V_0);
		int32_t L_5 = GC_CHANGE_PKLIST_get_ObjId_m19632(V_0, /*hidden argument*/&GC_CHANGE_PKLIST_get_ObjId_m19632_MethodInfo);
		V_2 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_6 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_6);
		Obj_t2130 * L_7 = ObjManager_FindObjInScene_m31347(L_6, V_2, /*hidden argument*/&ObjManager_FindObjInScene_m31347_MethodInfo);
		V_3 = L_7;
		bool L_8 = Object_op_Equality_m4263(NULL /*static, unused*/, V_3, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Equality_m4263_MethodInfo);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		return 2;
	}

IL_006d:
	{
		NullCheck(V_3);
		int32_t L_9 = Obj_get_ObjType_m31245(V_3, /*hidden argument*/&Obj_get_ObjType_m31245_MethodInfo);
		if ((((uint32_t)L_9) != ((uint32_t)4)))
		{
			goto IL_00ba;
		}
	}
	{
		NullCheck(V_3);
		int32_t L_10 = Obj_get_ObjType_m31245(V_3, /*hidden argument*/&Obj_get_ObjType_m31245_MethodInfo);
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_00ba;
		}
	}
	{
		NullCheck(V_3);
		Obj_OtherPlayer_t1655 * L_11 = Component_GetComponent_TisObj_OtherPlayer_t1655_m40324(V_3, /*hidden argument*/&Component_GetComponent_TisObj_OtherPlayer_t1655_m40324_MethodInfo);
		V_4 = L_11;
		bool L_12 = Object_op_Implicit_m4087(NULL /*static, unused*/, V_4, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_12)
		{
			goto IL_00ba;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_13 = GC_CHANGE_PKLIST_get_IsInPkList_m19636(V_0, /*hidden argument*/&GC_CHANGE_PKLIST_get_IsInPkList_m19636_MethodInfo);
		G_B13_0 = V_4;
		if ((((uint32_t)L_13) != ((uint32_t)1)))
		{
			G_B14_0 = V_4;
			goto IL_00ad;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
	}

IL_00ae:
	{
		NullCheck(G_B15_1);
		Obj_OtherPlayer_set_IsInMainPlayerPKList_m32114(G_B15_1, G_B15_0, /*hidden argument*/&Obj_OtherPlayer_set_IsInMainPlayerPKList_m32114_MethodInfo);
		NullCheck(V_4);
		VirtActionInvoker0::Invoke(&Obj_Character_SetNameBoardColor_m31403_MethodInfo, V_4);
	}

IL_00ba:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CHANGE_PKLISTHandler
extern TypeInfo GC_CHANGE_PKLISTHandler_t2570_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CHANGE_PKLISTHandler::.ctor()
MethodInfo GC_CHANGE_PKLISTHandler__ctor_m15464_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CHANGE_PKLISTHandler__ctor_m15464/* method */
	, &GC_CHANGE_PKLISTHandler_t2570_il2cpp_TypeInfo/* declaring_type */
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
	, 8940/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CHANGE_PKLISTHandler_t2570_GC_CHANGE_PKLISTHandler_Execute_m15465_ParameterInfos[] = 
{
	{"ipacket", 0, 134222386, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CHANGE_PKLISTHandler_t2570_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CHANGE_PKLISTHandler::Execute(PacketDistributed)
MethodInfo GC_CHANGE_PKLISTHandler_Execute_m15465_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CHANGE_PKLISTHandler_Execute_m15465/* method */
	, &GC_CHANGE_PKLISTHandler_t2570_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CHANGE_PKLISTHandler_t2570_GC_CHANGE_PKLISTHandler_Execute_m15465_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8941/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CHANGE_PKLISTHandler_t2570_MethodInfos[] =
{
	&GC_CHANGE_PKLISTHandler__ctor_m15464_MethodInfo,
	&GC_CHANGE_PKLISTHandler_Execute_m15465_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CHANGE_PKLISTHandler_Execute_m15465_MethodInfo;
static MethodInfo* GC_CHANGE_PKLISTHandler_t2570_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CHANGE_PKLISTHandler_Execute_m15465_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CHANGE_PKLISTHandler_t2570_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CHANGE_PKLISTHandler_t2570_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CHANGE_PKLISTHandler_t2570_0_0_0;
extern Il2CppType GC_CHANGE_PKLISTHandler_t2570_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CHANGE_PKLISTHandler_t2570;
extern TypeInfo GC_CHANGE_PKLISTHandler_t2570_il2cpp_TypeInfo;
TypeInfo GC_CHANGE_PKLISTHandler_t2570_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CHANGE_PKLISTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CHANGE_PKLISTHandler_t2570_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CHANGE_PKLISTHandler_t2570_il2cpp_TypeInfo/* element_class */
	, GC_CHANGE_PKLISTHandler_t2570_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CHANGE_PKLISTHandler_t2570_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CHANGE_PKLISTHandler_t2570_il2cpp_TypeInfo/* cast_class */
	, &GC_CHANGE_PKLISTHandler_t2570_0_0_0/* byval_arg */
	, &GC_CHANGE_PKLISTHandler_t2570_1_0_0/* this_arg */
	, GC_CHANGE_PKLISTHandler_t2570_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CHANGE_PKLISTHandler_t2570)/* instance_size */
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
// SPacket.SocketInstance.GC_CHANGE_SHOWFASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHANGE_SHOWFASHI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CHANGE_SHOWFASHIONHandler_t2571_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CHANGE_SHOWFASHIONHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHANGE_SHOWFASHIMethodDeclarations.h"

// GC_CHANGE_SHOWFASHION
#include "AssemblyU2DCSharp_GC_CHANGE_SHOWFASHION.h"
extern TypeInfo GC_CHANGE_SHOWFASHION_t3294_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
// GC_CHANGE_SHOWFASHION
#include "AssemblyU2DCSharp_GC_CHANGE_SHOWFASHIONMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo GC_CHANGE_SHOWFASHION_get_ShowFashion_m22980_MethodInfo;
extern MethodInfo PlayerData_set_ShowFashion_m35202_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CHANGE_SHOWFASHIONHandler::.ctor()
extern MethodInfo GC_CHANGE_SHOWFASHIONHandler__ctor_m15466_MethodInfo;
 void GC_CHANGE_SHOWFASHIONHandler__ctor_m15466 (GC_CHANGE_SHOWFASHIONHandler_t2571 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CHANGE_SHOWFASHIONHandler::Execute(PacketDistributed)
extern MethodInfo GC_CHANGE_SHOWFASHIONHandler_Execute_m15467_MethodInfo;
 uint32_t GC_CHANGE_SHOWFASHIONHandler_Execute_m15467 (GC_CHANGE_SHOWFASHIONHandler_t2571 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CHANGE_SHOWFASHION_t3294 * V_0 = {0};
	PlayerData_t2179 * G_B4_0 = {0};
	PlayerData_t2179 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	PlayerData_t2179 * G_B5_1 = {0};
	{
		V_0 = ((GC_CHANGE_SHOWFASHION_t3294 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CHANGE_SHOWFASHION_t3294_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(V_0);
		int32_t L_1 = GC_CHANGE_SHOWFASHION_get_ShowFashion_m22980(V_0, /*hidden argument*/&GC_CHANGE_SHOWFASHION_get_ShowFashion_m22980_MethodInfo);
		G_B3_0 = L_0;
		if ((((uint32_t)L_1) != ((uint32_t)1)))
		{
			G_B4_0 = L_0;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_002c:
	{
		NullCheck(G_B5_1);
		PlayerData_set_ShowFashion_m35202(G_B5_1, G_B5_0, /*hidden argument*/&PlayerData_set_ShowFashion_m35202_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CHANGE_SHOWFASHIONHandler
extern TypeInfo GC_CHANGE_SHOWFASHIONHandler_t2571_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CHANGE_SHOWFASHIONHandler::.ctor()
MethodInfo GC_CHANGE_SHOWFASHIONHandler__ctor_m15466_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CHANGE_SHOWFASHIONHandler__ctor_m15466/* method */
	, &GC_CHANGE_SHOWFASHIONHandler_t2571_il2cpp_TypeInfo/* declaring_type */
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
	, 8942/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CHANGE_SHOWFASHIONHandler_t2571_GC_CHANGE_SHOWFASHIONHandler_Execute_m15467_ParameterInfos[] = 
{
	{"ipacket", 0, 134222387, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CHANGE_SHOWFASHIONHandler_t2571_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CHANGE_SHOWFASHIONHandler::Execute(PacketDistributed)
MethodInfo GC_CHANGE_SHOWFASHIONHandler_Execute_m15467_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CHANGE_SHOWFASHIONHandler_Execute_m15467/* method */
	, &GC_CHANGE_SHOWFASHIONHandler_t2571_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CHANGE_SHOWFASHIONHandler_t2571_GC_CHANGE_SHOWFASHIONHandler_Execute_m15467_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8943/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CHANGE_SHOWFASHIONHandler_t2571_MethodInfos[] =
{
	&GC_CHANGE_SHOWFASHIONHandler__ctor_m15466_MethodInfo,
	&GC_CHANGE_SHOWFASHIONHandler_Execute_m15467_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CHANGE_SHOWFASHIONHandler_Execute_m15467_MethodInfo;
static MethodInfo* GC_CHANGE_SHOWFASHIONHandler_t2571_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CHANGE_SHOWFASHIONHandler_Execute_m15467_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CHANGE_SHOWFASHIONHandler_t2571_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CHANGE_SHOWFASHIONHandler_t2571_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CHANGE_SHOWFASHIONHandler_t2571_0_0_0;
extern Il2CppType GC_CHANGE_SHOWFASHIONHandler_t2571_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CHANGE_SHOWFASHIONHandler_t2571;
extern TypeInfo GC_CHANGE_SHOWFASHIONHandler_t2571_il2cpp_TypeInfo;
TypeInfo GC_CHANGE_SHOWFASHIONHandler_t2571_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CHANGE_SHOWFASHIONHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CHANGE_SHOWFASHIONHandler_t2571_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CHANGE_SHOWFASHIONHandler_t2571_il2cpp_TypeInfo/* element_class */
	, GC_CHANGE_SHOWFASHIONHandler_t2571_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CHANGE_SHOWFASHIONHandler_t2571_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CHANGE_SHOWFASHIONHandler_t2571_il2cpp_TypeInfo/* cast_class */
	, &GC_CHANGE_SHOWFASHIONHandler_t2571_0_0_0/* byval_arg */
	, &GC_CHANGE_SHOWFASHIONHandler_t2571_1_0_0/* this_arg */
	, GC_CHANGE_SHOWFASHIONHandler_t2571_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CHANGE_SHOWFASHIONHandler_t2571)/* instance_size */
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
// SPacket.SocketInstance.GC_CHATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHATHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CHATHandler_t2572_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CHATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CHATHandlerMethodDeclarations.h"

// GC_CHAT
#include "AssemblyU2DCSharp_GC_CHAT.h"
// Games.ChatHistory.GameChatHistory
#include "AssemblyU2DCSharp_Games_ChatHistory_GameChatHistory.h"
// ChatFrameLogic
#include "AssemblyU2DCSharp_ChatFrameLogic.h"
// ChatInfoLogic
#include "AssemblyU2DCSharp_ChatInfoLogic.h"
// LastSpeakerChatLogic
#include "AssemblyU2DCSharp_LastSpeakerChatLogic.h"
extern TypeInfo GC_CHAT_t1292_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo ChatFrameLogic_t1290_il2cpp_TypeInfo;
extern TypeInfo LastSpeakerChatLogic_t1295_il2cpp_TypeInfo;
// GC_CHAT
#include "AssemblyU2DCSharp_GC_CHATMethodDeclarations.h"
// Games.ChatHistory.GameChatHistory
#include "AssemblyU2DCSharp_Games_ChatHistory_GameChatHistoryMethodDeclarations.h"
// ChatFrameLogic
#include "AssemblyU2DCSharp_ChatFrameLogicMethodDeclarations.h"
// UIControllerBase`1<ChatInfoLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_3MethodDeclarations.h"
// ChatInfoLogic
#include "AssemblyU2DCSharp_ChatInfoLogicMethodDeclarations.h"
// LastSpeakerChatLogic
#include "AssemblyU2DCSharp_LastSpeakerChatLogicMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_BlackList_m35131_MethodInfo;
extern MethodInfo GC_CHAT_get_HasSenderguid_m18172_MethodInfo;
extern MethodInfo GC_CHAT_get_Senderguid_m18173_MethodInfo;
extern MethodInfo RelationList_IsExist_m34197_MethodInfo;
extern MethodInfo PlayerData_get_ChatHistory_m35115_MethodInfo;
extern MethodInfo GameChatHistory_OnReceiveChat_m32769_MethodInfo;
extern MethodInfo ChatFrameLogic_Instance_m7598_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo ChatFrameLogic_OnReceiveChat_m7608_MethodInfo;
extern MethodInfo UIControllerBase_1_Instance_m38959_MethodInfo;
extern MethodInfo ChatInfoLogic_OnReceiveChat_m7730_MethodInfo;
extern MethodInfo LastSpeakerChatLogic_Instance_m9219_MethodInfo;
extern MethodInfo LastSpeakerChatLogic_OnReceiveChat_m9225_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CHATHandler::.ctor()
extern MethodInfo GC_CHATHandler__ctor_m15468_MethodInfo;
 void GC_CHATHandler__ctor_m15468 (GC_CHATHandler_t2572 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CHATHandler::Execute(PacketDistributed)
extern MethodInfo GC_CHATHandler_Execute_m15469_MethodInfo;
 uint32_t GC_CHATHandler_Execute_m15469 (GC_CHATHandler_t2572 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CHAT_t1292 * V_0 = {0};
	{
		V_0 = ((GC_CHAT_t1292 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CHAT_t1292_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_0);
		RelationList_t4805 * L_1 = PlayerData_get_BlackList_m35131(L_0, /*hidden argument*/&PlayerData_get_BlackList_m35131_MethodInfo);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		return 2;
	}

IL_0025:
	{
		NullCheck(V_0);
		bool L_2 = GC_CHAT_get_HasSenderguid_m18172(V_0, /*hidden argument*/&GC_CHAT_get_HasSenderguid_m18172_MethodInfo);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_3 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_3);
		RelationList_t4805 * L_4 = PlayerData_get_BlackList_m35131(L_3, /*hidden argument*/&PlayerData_get_BlackList_m35131_MethodInfo);
		NullCheck(V_0);
		uint64_t L_5 = GC_CHAT_get_Senderguid_m18173(V_0, /*hidden argument*/&GC_CHAT_get_Senderguid_m18173_MethodInfo);
		NullCheck(L_4);
		bool L_6 = RelationList_IsExist_m34197(L_4, L_5, /*hidden argument*/&RelationList_IsExist_m34197_MethodInfo);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		return 2;
	}

IL_0051:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_7 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_7);
		GameChatHistory_t4557 * L_8 = PlayerData_get_ChatHistory_m35115(L_7, /*hidden argument*/&PlayerData_get_ChatHistory_m35115_MethodInfo);
		NullCheck(L_8);
		bool L_9 = GameChatHistory_OnReceiveChat_m32769(L_8, V_0, /*hidden argument*/&GameChatHistory_OnReceiveChat_m32769_MethodInfo);
		if (!L_9)
		{
			goto IL_00ba;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChatFrameLogic_t1290_il2cpp_TypeInfo));
		ChatFrameLogic_t1290 * L_10 = ChatFrameLogic_Instance_m7598(NULL /*static, unused*/, /*hidden argument*/&ChatFrameLogic_Instance_m7598_MethodInfo);
		bool L_11 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_10, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ChatFrameLogic_t1290_il2cpp_TypeInfo));
		ChatFrameLogic_t1290 * L_12 = ChatFrameLogic_Instance_m7598(NULL /*static, unused*/, /*hidden argument*/&ChatFrameLogic_Instance_m7598_MethodInfo);
		NullCheck(L_12);
		ChatFrameLogic_OnReceiveChat_m7608(L_12, V_0, /*hidden argument*/&ChatFrameLogic_OnReceiveChat_m7608_MethodInfo);
	}

IL_0086:
	{
		ChatInfoLogic_t1294 * L_13 = UIControllerBase_1_Instance_m38959(NULL /*static, unused*/, /*hidden argument*/&UIControllerBase_1_Instance_m38959_MethodInfo);
		bool L_14 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_13, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_14)
		{
			goto IL_00a0;
		}
	}
	{
		ChatInfoLogic_t1294 * L_15 = UIControllerBase_1_Instance_m38959(NULL /*static, unused*/, /*hidden argument*/&UIControllerBase_1_Instance_m38959_MethodInfo);
		NullCheck(L_15);
		ChatInfoLogic_OnReceiveChat_m7730(L_15, /*hidden argument*/&ChatInfoLogic_OnReceiveChat_m7730_MethodInfo);
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LastSpeakerChatLogic_t1295_il2cpp_TypeInfo));
		LastSpeakerChatLogic_t1295 * L_16 = LastSpeakerChatLogic_Instance_m9219(NULL /*static, unused*/, /*hidden argument*/&LastSpeakerChatLogic_Instance_m9219_MethodInfo);
		bool L_17 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_16, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LastSpeakerChatLogic_t1295_il2cpp_TypeInfo));
		LastSpeakerChatLogic_t1295 * L_18 = LastSpeakerChatLogic_Instance_m9219(NULL /*static, unused*/, /*hidden argument*/&LastSpeakerChatLogic_Instance_m9219_MethodInfo);
		NullCheck(L_18);
		LastSpeakerChatLogic_OnReceiveChat_m9225(L_18, /*hidden argument*/&LastSpeakerChatLogic_OnReceiveChat_m9225_MethodInfo);
	}

IL_00ba:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CHATHandler
extern TypeInfo GC_CHATHandler_t2572_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CHATHandler::.ctor()
MethodInfo GC_CHATHandler__ctor_m15468_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CHATHandler__ctor_m15468/* method */
	, &GC_CHATHandler_t2572_il2cpp_TypeInfo/* declaring_type */
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
	, 8944/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CHATHandler_t2572_GC_CHATHandler_Execute_m15469_ParameterInfos[] = 
{
	{"ipacket", 0, 134222388, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CHATHandler_t2572_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CHATHandler::Execute(PacketDistributed)
MethodInfo GC_CHATHandler_Execute_m15469_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CHATHandler_Execute_m15469/* method */
	, &GC_CHATHandler_t2572_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CHATHandler_t2572_GC_CHATHandler_Execute_m15469_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8945/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CHATHandler_t2572_MethodInfos[] =
{
	&GC_CHATHandler__ctor_m15468_MethodInfo,
	&GC_CHATHandler_Execute_m15469_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CHATHandler_Execute_m15469_MethodInfo;
static MethodInfo* GC_CHATHandler_t2572_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CHATHandler_Execute_m15469_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CHATHandler_t2572_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CHATHandler_t2572_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CHATHandler_t2572_0_0_0;
extern Il2CppType GC_CHATHandler_t2572_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CHATHandler_t2572;
extern TypeInfo GC_CHATHandler_t2572_il2cpp_TypeInfo;
TypeInfo GC_CHATHandler_t2572_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CHATHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CHATHandler_t2572_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CHATHandler_t2572_il2cpp_TypeInfo/* element_class */
	, GC_CHATHandler_t2572_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CHATHandler_t2572_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CHATHandler_t2572_il2cpp_TypeInfo/* cast_class */
	, &GC_CHATHandler_t2572_0_0_0/* byval_arg */
	, &GC_CHATHandler_t2572_1_0_0/* this_arg */
	, GC_CHATHandler_t2572_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CHATHandler_t2572)/* instance_size */
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
// SPacket.SocketInstance.GC_CJG_EXTRA_REWARD_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CJG_EXTRA_REWARD.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CJG_EXTRA_REWARD_RETHandler_t2573_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CJG_EXTRA_REWARD_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CJG_EXTRA_REWARDMethodDeclarations.h"

// GC_CJG_EXTRA_REWARD_RET
#include "AssemblyU2DCSharp_GC_CJG_EXTRA_REWARD_RET.h"
// CangJingGeWindow
#include "AssemblyU2DCSharp_CangJingGeWindow.h"
extern TypeInfo GC_CJG_EXTRA_REWARD_RET_t3615_il2cpp_TypeInfo;
extern TypeInfo CangJingGeWindow_t1790_il2cpp_TypeInfo;
// GC_CJG_EXTRA_REWARD_RET
#include "AssemblyU2DCSharp_GC_CJG_EXTRA_REWARD_RETMethodDeclarations.h"
// CangJingGeWindow
#include "AssemblyU2DCSharp_CangJingGeWindowMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_CJG_EXTRA_REWARD_RET_get_NResult_m28182_MethodInfo;
extern MethodInfo CangJingGeWindow_Instance_m12944_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo CangJingGeWindow_UpdateCangJingGeExtraRewardPanel_m12971_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CJG_EXTRA_REWARD_RETHandler::.ctor()
extern MethodInfo GC_CJG_EXTRA_REWARD_RETHandler__ctor_m15470_MethodInfo;
 void GC_CJG_EXTRA_REWARD_RETHandler__ctor_m15470 (GC_CJG_EXTRA_REWARD_RETHandler_t2573 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CJG_EXTRA_REWARD_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_CJG_EXTRA_REWARD_RETHandler_Execute_m15471_MethodInfo;
 uint32_t GC_CJG_EXTRA_REWARD_RETHandler_Execute_m15471 (GC_CJG_EXTRA_REWARD_RETHandler_t2573 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CJG_EXTRA_REWARD_RET_t3615 * V_0 = {0};
	{
		V_0 = ((GC_CJG_EXTRA_REWARD_RET_t3615 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CJG_EXTRA_REWARD_RET_t3615_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_CJG_EXTRA_REWARD_RET_get_NResult_m28182(V_0, /*hidden argument*/&GC_CJG_EXTRA_REWARD_RET_get_NResult_m28182_MethodInfo);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CangJingGeWindow_t1790_il2cpp_TypeInfo));
		CangJingGeWindow_t1790 * L_1 = CangJingGeWindow_Instance_m12944(NULL /*static, unused*/, /*hidden argument*/&CangJingGeWindow_Instance_m12944_MethodInfo);
		bool L_2 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, L_1, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CangJingGeWindow_t1790_il2cpp_TypeInfo));
		CangJingGeWindow_t1790 * L_3 = CangJingGeWindow_Instance_m12944(NULL /*static, unused*/, /*hidden argument*/&CangJingGeWindow_Instance_m12944_MethodInfo);
		NullCheck(L_3);
		CangJingGeWindow_UpdateCangJingGeExtraRewardPanel_m12971(L_3, /*hidden argument*/&CangJingGeWindow_UpdateCangJingGeExtraRewardPanel_m12971_MethodInfo);
	}

IL_0034:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CJG_EXTRA_REWARD_RETHandler
extern TypeInfo GC_CJG_EXTRA_REWARD_RETHandler_t2573_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CJG_EXTRA_REWARD_RETHandler::.ctor()
MethodInfo GC_CJG_EXTRA_REWARD_RETHandler__ctor_m15470_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CJG_EXTRA_REWARD_RETHandler__ctor_m15470/* method */
	, &GC_CJG_EXTRA_REWARD_RETHandler_t2573_il2cpp_TypeInfo/* declaring_type */
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
	, 8946/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CJG_EXTRA_REWARD_RETHandler_t2573_GC_CJG_EXTRA_REWARD_RETHandler_Execute_m15471_ParameterInfos[] = 
{
	{"ipacket", 0, 134222389, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CJG_EXTRA_REWARD_RETHandler_t2573_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CJG_EXTRA_REWARD_RETHandler::Execute(PacketDistributed)
MethodInfo GC_CJG_EXTRA_REWARD_RETHandler_Execute_m15471_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CJG_EXTRA_REWARD_RETHandler_Execute_m15471/* method */
	, &GC_CJG_EXTRA_REWARD_RETHandler_t2573_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CJG_EXTRA_REWARD_RETHandler_t2573_GC_CJG_EXTRA_REWARD_RETHandler_Execute_m15471_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8947/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CJG_EXTRA_REWARD_RETHandler_t2573_MethodInfos[] =
{
	&GC_CJG_EXTRA_REWARD_RETHandler__ctor_m15470_MethodInfo,
	&GC_CJG_EXTRA_REWARD_RETHandler_Execute_m15471_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CJG_EXTRA_REWARD_RETHandler_Execute_m15471_MethodInfo;
static MethodInfo* GC_CJG_EXTRA_REWARD_RETHandler_t2573_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CJG_EXTRA_REWARD_RETHandler_Execute_m15471_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CJG_EXTRA_REWARD_RETHandler_t2573_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CJG_EXTRA_REWARD_RETHandler_t2573_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CJG_EXTRA_REWARD_RETHandler_t2573_0_0_0;
extern Il2CppType GC_CJG_EXTRA_REWARD_RETHandler_t2573_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CJG_EXTRA_REWARD_RETHandler_t2573;
extern TypeInfo GC_CJG_EXTRA_REWARD_RETHandler_t2573_il2cpp_TypeInfo;
TypeInfo GC_CJG_EXTRA_REWARD_RETHandler_t2573_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CJG_EXTRA_REWARD_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CJG_EXTRA_REWARD_RETHandler_t2573_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CJG_EXTRA_REWARD_RETHandler_t2573_il2cpp_TypeInfo/* element_class */
	, GC_CJG_EXTRA_REWARD_RETHandler_t2573_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CJG_EXTRA_REWARD_RETHandler_t2573_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CJG_EXTRA_REWARD_RETHandler_t2573_il2cpp_TypeInfo/* cast_class */
	, &GC_CJG_EXTRA_REWARD_RETHandler_t2573_0_0_0/* byval_arg */
	, &GC_CJG_EXTRA_REWARD_RETHandler_t2573_1_0_0/* this_arg */
	, GC_CJG_EXTRA_REWARD_RETHandler_t2573_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CJG_EXTRA_REWARD_RETHandler_t2573)/* instance_size */
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
// SPacket.SocketInstance.GC_CLOSE_BLACKMARKETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CLOSE_BLACKMARKE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CLOSE_BLACKMARKETHandler_t2574_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CLOSE_BLACKMARKETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CLOSE_BLACKMARKEMethodDeclarations.h"

// GC_CLOSE_BLACKMARKET
#include "AssemblyU2DCSharp_GC_CLOSE_BLACKMARKET.h"
// BlackMarketLogic
#include "AssemblyU2DCSharp_BlackMarketLogic.h"
extern TypeInfo GC_CLOSE_BLACKMARKET_t3403_il2cpp_TypeInfo;
extern TypeInfo BlackMarketLogic_t1248_il2cpp_TypeInfo;
// BlackMarketLogic
#include "AssemblyU2DCSharp_BlackMarketLogicMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo BlackMarketLogic_Instance_m7397_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo BlackMarketLogic_CloseWindow_m7403_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CLOSE_BLACKMARKETHandler::.ctor()
extern MethodInfo GC_CLOSE_BLACKMARKETHandler__ctor_m15472_MethodInfo;
 void GC_CLOSE_BLACKMARKETHandler__ctor_m15472 (GC_CLOSE_BLACKMARKETHandler_t2574 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CLOSE_BLACKMARKETHandler::Execute(PacketDistributed)
extern MethodInfo GC_CLOSE_BLACKMARKETHandler_Execute_m15473_MethodInfo;
 uint32_t GC_CLOSE_BLACKMARKETHandler_Execute_m15473 (GC_CLOSE_BLACKMARKETHandler_t2574 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CLOSE_BLACKMARKET_t3403 * V_0 = {0};
	{
		V_0 = ((GC_CLOSE_BLACKMARKET_t3403 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CLOSE_BLACKMARKET_t3403_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BlackMarketLogic_t1248_il2cpp_TypeInfo));
		BlackMarketLogic_t1248 * L_0 = BlackMarketLogic_Instance_m7397(NULL /*static, unused*/, /*hidden argument*/&BlackMarketLogic_Instance_m7397_MethodInfo);
		bool L_1 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_0, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BlackMarketLogic_t1248_il2cpp_TypeInfo));
		BlackMarketLogic_t1248 * L_2 = BlackMarketLogic_Instance_m7397(NULL /*static, unused*/, /*hidden argument*/&BlackMarketLogic_Instance_m7397_MethodInfo);
		NullCheck(L_2);
		BlackMarketLogic_CloseWindow_m7403(L_2, /*hidden argument*/&BlackMarketLogic_CloseWindow_m7403_MethodInfo);
	}

IL_0029:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CLOSE_BLACKMARKETHandler
extern TypeInfo GC_CLOSE_BLACKMARKETHandler_t2574_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CLOSE_BLACKMARKETHandler::.ctor()
MethodInfo GC_CLOSE_BLACKMARKETHandler__ctor_m15472_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CLOSE_BLACKMARKETHandler__ctor_m15472/* method */
	, &GC_CLOSE_BLACKMARKETHandler_t2574_il2cpp_TypeInfo/* declaring_type */
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
	, 8948/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CLOSE_BLACKMARKETHandler_t2574_GC_CLOSE_BLACKMARKETHandler_Execute_m15473_ParameterInfos[] = 
{
	{"ipacket", 0, 134222390, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CLOSE_BLACKMARKETHandler_t2574_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CLOSE_BLACKMARKETHandler::Execute(PacketDistributed)
MethodInfo GC_CLOSE_BLACKMARKETHandler_Execute_m15473_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CLOSE_BLACKMARKETHandler_Execute_m15473/* method */
	, &GC_CLOSE_BLACKMARKETHandler_t2574_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CLOSE_BLACKMARKETHandler_t2574_GC_CLOSE_BLACKMARKETHandler_Execute_m15473_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8949/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CLOSE_BLACKMARKETHandler_t2574_MethodInfos[] =
{
	&GC_CLOSE_BLACKMARKETHandler__ctor_m15472_MethodInfo,
	&GC_CLOSE_BLACKMARKETHandler_Execute_m15473_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CLOSE_BLACKMARKETHandler_Execute_m15473_MethodInfo;
static MethodInfo* GC_CLOSE_BLACKMARKETHandler_t2574_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CLOSE_BLACKMARKETHandler_Execute_m15473_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CLOSE_BLACKMARKETHandler_t2574_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CLOSE_BLACKMARKETHandler_t2574_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CLOSE_BLACKMARKETHandler_t2574_0_0_0;
extern Il2CppType GC_CLOSE_BLACKMARKETHandler_t2574_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CLOSE_BLACKMARKETHandler_t2574;
extern TypeInfo GC_CLOSE_BLACKMARKETHandler_t2574_il2cpp_TypeInfo;
TypeInfo GC_CLOSE_BLACKMARKETHandler_t2574_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CLOSE_BLACKMARKETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CLOSE_BLACKMARKETHandler_t2574_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CLOSE_BLACKMARKETHandler_t2574_il2cpp_TypeInfo/* element_class */
	, GC_CLOSE_BLACKMARKETHandler_t2574_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CLOSE_BLACKMARKETHandler_t2574_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CLOSE_BLACKMARKETHandler_t2574_il2cpp_TypeInfo/* cast_class */
	, &GC_CLOSE_BLACKMARKETHandler_t2574_0_0_0/* byval_arg */
	, &GC_CLOSE_BLACKMARKETHandler_t2574_1_0_0/* this_arg */
	, GC_CLOSE_BLACKMARKETHandler_t2574_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CLOSE_BLACKMARKETHandler_t2574)/* instance_size */
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
// SPacket.SocketInstance.GC_COMBATVALUE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COMBATVALUE_RETH.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_COMBATVALUE_RETHandler_t2575_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_COMBATVALUE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COMBATVALUE_RETHMethodDeclarations.h"

// GC_COMBATVALUE_RET
#include "AssemblyU2DCSharp_GC_COMBATVALUE_RET.h"
// BaseAttr
#include "AssemblyU2DCSharp_BaseAttr.h"
// PVPPowerWindow
#include "AssemblyU2DCSharp_PVPPowerWindow.h"
// FlyWingRoot
#include "AssemblyU2DCSharp_FlyWingRoot.h"
extern TypeInfo GC_COMBATVALUE_RET_t3089_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo Obj_MainPlayer_t1732_il2cpp_TypeInfo;
extern TypeInfo BaseAttr_t4471_il2cpp_TypeInfo;
extern TypeInfo PowerRemindLogic_t1665_il2cpp_TypeInfo;
extern TypeInfo BackPackLogic_t1240_il2cpp_TypeInfo;
extern TypeInfo PVPPowerWindow_t1913_il2cpp_TypeInfo;
extern TypeInfo RoleViewLogic_t1702_il2cpp_TypeInfo;
extern TypeInfo FlyWingRoot_t1985_il2cpp_TypeInfo;
extern TypeInfo PlayerFrameLogic_t1653_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
// GC_COMBATVALUE_RET
#include "AssemblyU2DCSharp_GC_COMBATVALUE_RETMethodDeclarations.h"
// BaseAttr
#include "AssemblyU2DCSharp_BaseAttrMethodDeclarations.h"
// PowerRemindLogic
#include "AssemblyU2DCSharp_PowerRemindLogicMethodDeclarations.h"
// PVPPowerWindow
#include "AssemblyU2DCSharp_PVPPowerWindowMethodDeclarations.h"
// FlyWingRoot
#include "AssemblyU2DCSharp_FlyWingRootMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo GC_COMBATVALUE_RET_get_ShowPowerRemind_m19554_MethodInfo;
extern MethodInfo GC_COMBATVALUE_RET_get_CombatValue_m19550_MethodInfo;
extern MethodInfo Obj_MainPlayer_get_BaseAttr_m31675_MethodInfo;
extern MethodInfo BaseAttr_get_CombatValue_m32688_MethodInfo;
extern MethodInfo PowerRemindLogic_InitPowerInfo_m10707_MethodInfo;
extern MethodInfo BaseAttr_set_CombatValue_m32689_MethodInfo;
extern MethodInfo BackPackLogic_Instance_m7325_MethodInfo;
extern MethodInfo Object_op_Implicit_m4087_MethodInfo;
extern MethodInfo BackPackLogic_UpdatePlayerInfo_m7334_MethodInfo;
extern MethodInfo PVPPowerWindow_Instance_m13586_MethodInfo;
extern MethodInfo PVPPowerWindow_UpdateCombatValue_m13590_MethodInfo;
extern MethodInfo RoleViewLogic_Instance_m11003_MethodInfo;
extern MethodInfo RoleViewLogic_OnCombatChange_m11065_MethodInfo;
extern MethodInfo FlyWingRoot_Instance_m13110_MethodInfo;
extern MethodInfo FlyWingRoot_SetFlightVlue_m13117_MethodInfo;
extern MethodInfo PlayerFrameLogic_Instance_m10530_MethodInfo;
extern MethodInfo PlayerFrameLogic_ChangeCombatValue_m10545_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_MainPlayerBaseAttr_m35077_MethodInfo;


// System.Void SPacket.SocketInstance.GC_COMBATVALUE_RETHandler::.ctor()
extern MethodInfo GC_COMBATVALUE_RETHandler__ctor_m15474_MethodInfo;
 void GC_COMBATVALUE_RETHandler__ctor_m15474 (GC_COMBATVALUE_RETHandler_t2575 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_COMBATVALUE_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_COMBATVALUE_RETHandler_Execute_m15475_MethodInfo;
 uint32_t GC_COMBATVALUE_RETHandler_Execute_m15475 (GC_COMBATVALUE_RETHandler_t2575 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_COMBATVALUE_RET_t3089 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((GC_COMBATVALUE_RET_t3089 *)Castclass(___ipacket, InitializedTypeInfo(&GC_COMBATVALUE_RET_t3089_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_0 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_0);
		Obj_MainPlayer_t1732 * L_1 = ObjManager_get_MainPlayer_m31308(L_0, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		bool L_2 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_1, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_2)
		{
			goto IL_0106;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_3 = GC_COMBATVALUE_RET_get_ShowPowerRemind_m19554(V_0, /*hidden argument*/&GC_COMBATVALUE_RET_get_ShowPowerRemind_m19554_MethodInfo);
		if ((((uint32_t)L_3) != ((uint32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_4 = GC_COMBATVALUE_RET_get_CombatValue_m19550(V_0, /*hidden argument*/&GC_COMBATVALUE_RET_get_CombatValue_m19550_MethodInfo);
		V_1 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_5 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_5);
		Obj_MainPlayer_t1732 * L_6 = ObjManager_get_MainPlayer_m31308(L_5, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_6);
		BaseAttr_t4471 * L_7 = (BaseAttr_t4471 *)VirtFuncInvoker0< BaseAttr_t4471 * >::Invoke(&Obj_MainPlayer_get_BaseAttr_m31675_MethodInfo, L_6);
		NullCheck(L_7);
		int32_t L_8 = BaseAttr_get_CombatValue_m32688(L_7, /*hidden argument*/&BaseAttr_get_CombatValue_m32688_MethodInfo);
		V_2 = ((int32_t)(V_1-L_8));
		if ((((int32_t)V_2) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PowerRemindLogic_t1665_il2cpp_TypeInfo));
		PowerRemindLogic_InitPowerInfo_m10707(NULL /*static, unused*/, V_1, V_2, /*hidden argument*/&PowerRemindLogic_InitPowerInfo_m10707_MethodInfo);
	}

IL_005c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_9 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_9);
		Obj_MainPlayer_t1732 * L_10 = ObjManager_get_MainPlayer_m31308(L_9, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		NullCheck(L_10);
		BaseAttr_t4471 * L_11 = (BaseAttr_t4471 *)VirtFuncInvoker0< BaseAttr_t4471 * >::Invoke(&Obj_MainPlayer_get_BaseAttr_m31675_MethodInfo, L_10);
		NullCheck(V_0);
		int32_t L_12 = GC_COMBATVALUE_RET_get_CombatValue_m19550(V_0, /*hidden argument*/&GC_COMBATVALUE_RET_get_CombatValue_m19550_MethodInfo);
		NullCheck(L_11);
		BaseAttr_set_CombatValue_m32689(L_11, L_12, /*hidden argument*/&BaseAttr_set_CombatValue_m32689_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BackPackLogic_t1240_il2cpp_TypeInfo));
		BackPackLogic_t1240 * L_13 = BackPackLogic_Instance_m7325(NULL /*static, unused*/, /*hidden argument*/&BackPackLogic_Instance_m7325_MethodInfo);
		bool L_14 = Object_op_Implicit_m4087(NULL /*static, unused*/, L_13, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BackPackLogic_t1240_il2cpp_TypeInfo));
		BackPackLogic_t1240 * L_15 = BackPackLogic_Instance_m7325(NULL /*static, unused*/, /*hidden argument*/&BackPackLogic_Instance_m7325_MethodInfo);
		NullCheck(L_15);
		BackPackLogic_UpdatePlayerInfo_m7334(L_15, /*hidden argument*/&BackPackLogic_UpdatePlayerInfo_m7334_MethodInfo);
	}

IL_008f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PVPPowerWindow_t1913_il2cpp_TypeInfo));
		PVPPowerWindow_t1913 * L_16 = PVPPowerWindow_Instance_m13586(NULL /*static, unused*/, /*hidden argument*/&PVPPowerWindow_Instance_m13586_MethodInfo);
		bool L_17 = Object_op_Implicit_m4087(NULL /*static, unused*/, L_16, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_17)
		{
			goto IL_00a8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PVPPowerWindow_t1913_il2cpp_TypeInfo));
		PVPPowerWindow_t1913 * L_18 = PVPPowerWindow_Instance_m13586(NULL /*static, unused*/, /*hidden argument*/&PVPPowerWindow_Instance_m13586_MethodInfo);
		NullCheck(L_18);
		PVPPowerWindow_UpdateCombatValue_m13590(L_18, /*hidden argument*/&PVPPowerWindow_UpdateCombatValue_m13590_MethodInfo);
	}

IL_00a8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RoleViewLogic_t1702_il2cpp_TypeInfo));
		RoleViewLogic_t1702 * L_19 = RoleViewLogic_Instance_m11003(NULL /*static, unused*/, /*hidden argument*/&RoleViewLogic_Instance_m11003_MethodInfo);
		bool L_20 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_19, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_20)
		{
			goto IL_00c2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RoleViewLogic_t1702_il2cpp_TypeInfo));
		RoleViewLogic_t1702 * L_21 = RoleViewLogic_Instance_m11003(NULL /*static, unused*/, /*hidden argument*/&RoleViewLogic_Instance_m11003_MethodInfo);
		NullCheck(L_21);
		RoleViewLogic_OnCombatChange_m11065(L_21, /*hidden argument*/&RoleViewLogic_OnCombatChange_m11065_MethodInfo);
	}

IL_00c2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&FlyWingRoot_t1985_il2cpp_TypeInfo));
		FlyWingRoot_t1985 * L_22 = FlyWingRoot_Instance_m13110(NULL /*static, unused*/, /*hidden argument*/&FlyWingRoot_Instance_m13110_MethodInfo);
		bool L_23 = Object_op_Inequality_m4092(NULL /*static, unused*/, L_22, (Object_t982 *)NULL, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_23)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&FlyWingRoot_t1985_il2cpp_TypeInfo));
		FlyWingRoot_t1985 * L_24 = FlyWingRoot_Instance_m13110(NULL /*static, unused*/, /*hidden argument*/&FlyWingRoot_Instance_m13110_MethodInfo);
		NullCheck(V_0);
		int32_t L_25 = GC_COMBATVALUE_RET_get_CombatValue_m19550(V_0, /*hidden argument*/&GC_COMBATVALUE_RET_get_CombatValue_m19550_MethodInfo);
		NullCheck(L_24);
		FlyWingRoot_SetFlightVlue_m13117(L_24, L_25, /*hidden argument*/&FlyWingRoot_SetFlightVlue_m13117_MethodInfo);
	}

IL_00e2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PlayerFrameLogic_t1653_il2cpp_TypeInfo));
		PlayerFrameLogic_t1653 * L_26 = PlayerFrameLogic_Instance_m10530(NULL /*static, unused*/, /*hidden argument*/&PlayerFrameLogic_Instance_m10530_MethodInfo);
		bool L_27 = Object_op_Implicit_m4087(NULL /*static, unused*/, L_26, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_27)
		{
			goto IL_0101;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PlayerFrameLogic_t1653_il2cpp_TypeInfo));
		PlayerFrameLogic_t1653 * L_28 = PlayerFrameLogic_Instance_m10530(NULL /*static, unused*/, /*hidden argument*/&PlayerFrameLogic_Instance_m10530_MethodInfo);
		NullCheck(V_0);
		int32_t L_29 = GC_COMBATVALUE_RET_get_CombatValue_m19550(V_0, /*hidden argument*/&GC_COMBATVALUE_RET_get_CombatValue_m19550_MethodInfo);
		NullCheck(L_28);
		PlayerFrameLogic_ChangeCombatValue_m10545(L_28, L_29, /*hidden argument*/&PlayerFrameLogic_ChangeCombatValue_m10545_MethodInfo);
	}

IL_0101:
	{
		goto IL_0120;
	}

IL_0106:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_30 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_30);
		BaseAttr_t4471 * L_31 = PlayerData_get_MainPlayerBaseAttr_m35077(L_30, /*hidden argument*/&PlayerData_get_MainPlayerBaseAttr_m35077_MethodInfo);
		NullCheck(V_0);
		int32_t L_32 = GC_COMBATVALUE_RET_get_CombatValue_m19550(V_0, /*hidden argument*/&GC_COMBATVALUE_RET_get_CombatValue_m19550_MethodInfo);
		NullCheck(L_31);
		BaseAttr_set_CombatValue_m32689(L_31, L_32, /*hidden argument*/&BaseAttr_set_CombatValue_m32689_MethodInfo);
	}

IL_0120:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_COMBATVALUE_RETHandler
extern TypeInfo GC_COMBATVALUE_RETHandler_t2575_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_COMBATVALUE_RETHandler::.ctor()
MethodInfo GC_COMBATVALUE_RETHandler__ctor_m15474_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_COMBATVALUE_RETHandler__ctor_m15474/* method */
	, &GC_COMBATVALUE_RETHandler_t2575_il2cpp_TypeInfo/* declaring_type */
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
	, 8950/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_COMBATVALUE_RETHandler_t2575_GC_COMBATVALUE_RETHandler_Execute_m15475_ParameterInfos[] = 
{
	{"ipacket", 0, 134222391, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_COMBATVALUE_RETHandler_t2575_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_COMBATVALUE_RETHandler::Execute(PacketDistributed)
MethodInfo GC_COMBATVALUE_RETHandler_Execute_m15475_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_COMBATVALUE_RETHandler_Execute_m15475/* method */
	, &GC_COMBATVALUE_RETHandler_t2575_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_COMBATVALUE_RETHandler_t2575_GC_COMBATVALUE_RETHandler_Execute_m15475_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8951/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_COMBATVALUE_RETHandler_t2575_MethodInfos[] =
{
	&GC_COMBATVALUE_RETHandler__ctor_m15474_MethodInfo,
	&GC_COMBATVALUE_RETHandler_Execute_m15475_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_COMBATVALUE_RETHandler_Execute_m15475_MethodInfo;
static MethodInfo* GC_COMBATVALUE_RETHandler_t2575_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_COMBATVALUE_RETHandler_Execute_m15475_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_COMBATVALUE_RETHandler_t2575_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_COMBATVALUE_RETHandler_t2575_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_COMBATVALUE_RETHandler_t2575_0_0_0;
extern Il2CppType GC_COMBATVALUE_RETHandler_t2575_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_COMBATVALUE_RETHandler_t2575;
extern TypeInfo GC_COMBATVALUE_RETHandler_t2575_il2cpp_TypeInfo;
TypeInfo GC_COMBATVALUE_RETHandler_t2575_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_COMBATVALUE_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_COMBATVALUE_RETHandler_t2575_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_COMBATVALUE_RETHandler_t2575_il2cpp_TypeInfo/* element_class */
	, GC_COMBATVALUE_RETHandler_t2575_InterfacesTypeInfos/* implemented_interfaces */
	, GC_COMBATVALUE_RETHandler_t2575_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_COMBATVALUE_RETHandler_t2575_il2cpp_TypeInfo/* cast_class */
	, &GC_COMBATVALUE_RETHandler_t2575_0_0_0/* byval_arg */
	, &GC_COMBATVALUE_RETHandler_t2575_1_0_0/* this_arg */
	, GC_COMBATVALUE_RETHandler_t2575_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_COMBATVALUE_RETHandler_t2575)/* instance_size */
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
// SPacket.SocketInstance.GC_COMPLETEMISSION_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COMPLETEMISSION_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_COMPLETEMISSION_RETHandler_t2576_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_COMPLETEMISSION_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COMPLETEMISSION_MethodDeclarations.h"

// GC_COMPLETEMISSION_RET
#include "AssemblyU2DCSharp_GC_COMPLETEMISSION_RET.h"
extern TypeInfo GC_COMPLETEMISSION_RET_t2938_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
// GC_COMPLETEMISSION_RET
#include "AssemblyU2DCSharp_GC_COMPLETEMISSION_RETMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_COMPLETEMISSION_RET_get_MissionID_m16416_MethodInfo;
extern MethodInfo GC_COMPLETEMISSION_RET_get_Ret_m16420_MethodInfo;
extern MethodInfo GameManager_get_MissionManager_m14614_MethodInfo;
extern MethodInfo MissionManager_CompleteMissionOver_m33969_MethodInfo;


// System.Void SPacket.SocketInstance.GC_COMPLETEMISSION_RETHandler::.ctor()
extern MethodInfo GC_COMPLETEMISSION_RETHandler__ctor_m15476_MethodInfo;
 void GC_COMPLETEMISSION_RETHandler__ctor_m15476 (GC_COMPLETEMISSION_RETHandler_t2576 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_COMPLETEMISSION_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_COMPLETEMISSION_RETHandler_Execute_m15477_MethodInfo;
 uint32_t GC_COMPLETEMISSION_RETHandler_Execute_m15477 (GC_COMPLETEMISSION_RETHandler_t2576 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_COMPLETEMISSION_RET_t2938 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((GC_COMPLETEMISSION_RET_t2938 *)Castclass(___ipacket, InitializedTypeInfo(&GC_COMPLETEMISSION_RET_t2938_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_COMPLETEMISSION_RET_get_MissionID_m16416(V_0, /*hidden argument*/&GC_COMPLETEMISSION_RET_get_MissionID_m16416_MethodInfo);
		V_1 = L_0;
		NullCheck(V_0);
		int32_t L_1 = GC_COMPLETEMISSION_RET_get_Ret_m16420(V_0, /*hidden argument*/&GC_COMPLETEMISSION_RET_get_Ret_m16420_MethodInfo);
		V_2 = L_1;
		if ((((uint32_t)V_2) != ((uint32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		MissionManager_t1565 * L_2 = GameManager_get_MissionManager_m14614((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_MissionManager_m14614_MethodInfo);
		NullCheck(L_2);
		MissionManager_CompleteMissionOver_m33969(L_2, V_1, /*hidden argument*/&MissionManager_CompleteMissionOver_m33969_MethodInfo);
	}

IL_0035:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_COMPLETEMISSION_RETHandler
extern TypeInfo GC_COMPLETEMISSION_RETHandler_t2576_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_COMPLETEMISSION_RETHandler::.ctor()
MethodInfo GC_COMPLETEMISSION_RETHandler__ctor_m15476_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_COMPLETEMISSION_RETHandler__ctor_m15476/* method */
	, &GC_COMPLETEMISSION_RETHandler_t2576_il2cpp_TypeInfo/* declaring_type */
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
	, 8952/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_COMPLETEMISSION_RETHandler_t2576_GC_COMPLETEMISSION_RETHandler_Execute_m15477_ParameterInfos[] = 
{
	{"ipacket", 0, 134222392, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_COMPLETEMISSION_RETHandler_t2576_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_COMPLETEMISSION_RETHandler::Execute(PacketDistributed)
MethodInfo GC_COMPLETEMISSION_RETHandler_Execute_m15477_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_COMPLETEMISSION_RETHandler_Execute_m15477/* method */
	, &GC_COMPLETEMISSION_RETHandler_t2576_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_COMPLETEMISSION_RETHandler_t2576_GC_COMPLETEMISSION_RETHandler_Execute_m15477_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8953/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_COMPLETEMISSION_RETHandler_t2576_MethodInfos[] =
{
	&GC_COMPLETEMISSION_RETHandler__ctor_m15476_MethodInfo,
	&GC_COMPLETEMISSION_RETHandler_Execute_m15477_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_COMPLETEMISSION_RETHandler_Execute_m15477_MethodInfo;
static MethodInfo* GC_COMPLETEMISSION_RETHandler_t2576_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_COMPLETEMISSION_RETHandler_Execute_m15477_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_COMPLETEMISSION_RETHandler_t2576_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_COMPLETEMISSION_RETHandler_t2576_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_COMPLETEMISSION_RETHandler_t2576_0_0_0;
extern Il2CppType GC_COMPLETEMISSION_RETHandler_t2576_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_COMPLETEMISSION_RETHandler_t2576;
extern TypeInfo GC_COMPLETEMISSION_RETHandler_t2576_il2cpp_TypeInfo;
TypeInfo GC_COMPLETEMISSION_RETHandler_t2576_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_COMPLETEMISSION_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_COMPLETEMISSION_RETHandler_t2576_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_COMPLETEMISSION_RETHandler_t2576_il2cpp_TypeInfo/* element_class */
	, GC_COMPLETEMISSION_RETHandler_t2576_InterfacesTypeInfos/* implemented_interfaces */
	, GC_COMPLETEMISSION_RETHandler_t2576_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_COMPLETEMISSION_RETHandler_t2576_il2cpp_TypeInfo/* cast_class */
	, &GC_COMPLETEMISSION_RETHandler_t2576_0_0_0/* byval_arg */
	, &GC_COMPLETEMISSION_RETHandler_t2576_1_0_0/* this_arg */
	, GC_COMPLETEMISSION_RETHandler_t2576_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_COMPLETEMISSION_RETHandler_t2576)/* instance_size */
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
// SPacket.SocketInstance.GC_CONNECTED_HEARTBEATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CONNECTED_HEARTB.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CONNECTED_HEARTBEATHandler_t2577_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CONNECTED_HEARTBEATHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CONNECTED_HEARTBMethodDeclarations.h"

// GC_CONNECTED_HEARTBEAT
#include "AssemblyU2DCSharp_GC_CONNECTED_HEARTBEAT.h"
// CG_CONNECTED_HEARTBEAT
#include "AssemblyU2DCSharp_CG_CONNECTED_HEARTBEAT.h"
// GlobalData
#include "AssemblyU2DCSharp_GlobalData.h"
extern TypeInfo GC_CONNECTED_HEARTBEAT_t2930_il2cpp_TypeInfo;
extern TypeInfo GlobalData_t4889_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo Obj_MainPlayer_t1732_il2cpp_TypeInfo;
extern TypeInfo CG_CONNECTED_HEARTBEAT_t2929_il2cpp_TypeInfo;
// GC_CONNECTED_HEARTBEAT
#include "AssemblyU2DCSharp_GC_CONNECTED_HEARTBEATMethodDeclarations.h"
// GlobalData
#include "AssemblyU2DCSharp_GlobalDataMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// PacketDistributed
#include "AssemblyU2DCSharp_PacketDistributedMethodDeclarations.h"
// CG_CONNECTED_HEARTBEAT
#include "AssemblyU2DCSharp_CG_CONNECTED_HEARTBEATMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_CONNECTED_HEARTBEAT_get_Serveransitime_m16334_MethodInfo;
extern MethodInfo Singleton_1_get_Instance_m39004_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Object_op_Inequality_m4092_MethodInfo;
extern MethodInfo Obj_MainPlayer_SynServerDateTime_m31650_MethodInfo;
extern MethodInfo Time_get_time_m4106_MethodInfo;
extern MethodInfo PacketDistributed_CreatePacket_m29413_MethodInfo;
extern MethodInfo CG_CONNECTED_HEARTBEAT_SetIsresponse_m16327_MethodInfo;
extern MethodInfo PacketDistributed_SendPacket_m29414_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CONNECTED_HEARTBEATHandler::.ctor()
extern MethodInfo GC_CONNECTED_HEARTBEATHandler__ctor_m15478_MethodInfo;
 void GC_CONNECTED_HEARTBEATHandler__ctor_m15478 (GC_CONNECTED_HEARTBEATHandler_t2577 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CONNECTED_HEARTBEATHandler::Execute(PacketDistributed)
extern MethodInfo GC_CONNECTED_HEARTBEATHandler_Execute_m15479_MethodInfo;
 uint32_t GC_CONNECTED_HEARTBEATHandler_Execute_m15479 (GC_CONNECTED_HEARTBEATHandler_t2577 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CONNECTED_HEARTBEAT_t2930 * V_0 = {0};
	Obj_MainPlayer_t1732 * V_1 = {0};
	CG_CONNECTED_HEARTBEAT_t2929 * V_2 = {0};
	{
		V_0 = ((GC_CONNECTED_HEARTBEAT_t2930 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CONNECTED_HEARTBEAT_t2930_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_CONNECTED_HEARTBEAT_get_Serveransitime_m16334(V_0, /*hidden argument*/&GC_CONNECTED_HEARTBEAT_get_Serveransitime_m16334_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GlobalData_t4889_il2cpp_TypeInfo));
		((GlobalData_t4889_StaticFields*)InitializedTypeInfo(&GlobalData_t4889_il2cpp_TypeInfo)->static_fields)->___ServerAnsiTime = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_1 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_1);
		Obj_MainPlayer_t1732 * L_2 = ObjManager_get_MainPlayer_m31308(L_1, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		V_1 = L_2;
		bool L_3 = Object_op_Inequality_m4092(NULL /*static, unused*/, (Object_t982 *)NULL, V_1, /*hidden argument*/&Object_op_Inequality_m4092_MethodInfo);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		NullCheck(V_1);
		Obj_MainPlayer_SynServerDateTime_m31650(V_1, /*hidden argument*/&Obj_MainPlayer_SynServerDateTime_m31650_MethodInfo);
		float L_4 = Time_get_time_m4106(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m4106_MethodInfo);
		NullCheck(V_1);
		V_1->___LastHeartBeatTime = L_4;
	}

IL_0042:
	{
		PacketDistributed_t2209 * L_5 = PacketDistributed_CreatePacket_m29413(NULL /*static, unused*/, 3, /*hidden argument*/&PacketDistributed_CreatePacket_m29413_MethodInfo);
		V_2 = ((CG_CONNECTED_HEARTBEAT_t2929 *)Castclass(L_5, InitializedTypeInfo(&CG_CONNECTED_HEARTBEAT_t2929_il2cpp_TypeInfo)));
		NullCheck(V_2);
		CG_CONNECTED_HEARTBEAT_SetIsresponse_m16327(V_2, 1, /*hidden argument*/&CG_CONNECTED_HEARTBEAT_SetIsresponse_m16327_MethodInfo);
		NullCheck(V_2);
		PacketDistributed_SendPacket_m29414(V_2, /*hidden argument*/&PacketDistributed_SendPacket_m29414_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CONNECTED_HEARTBEATHandler
extern TypeInfo GC_CONNECTED_HEARTBEATHandler_t2577_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CONNECTED_HEARTBEATHandler::.ctor()
MethodInfo GC_CONNECTED_HEARTBEATHandler__ctor_m15478_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CONNECTED_HEARTBEATHandler__ctor_m15478/* method */
	, &GC_CONNECTED_HEARTBEATHandler_t2577_il2cpp_TypeInfo/* declaring_type */
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
	, 8954/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CONNECTED_HEARTBEATHandler_t2577_GC_CONNECTED_HEARTBEATHandler_Execute_m15479_ParameterInfos[] = 
{
	{"ipacket", 0, 134222393, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CONNECTED_HEARTBEATHandler_t2577_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CONNECTED_HEARTBEATHandler::Execute(PacketDistributed)
MethodInfo GC_CONNECTED_HEARTBEATHandler_Execute_m15479_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CONNECTED_HEARTBEATHandler_Execute_m15479/* method */
	, &GC_CONNECTED_HEARTBEATHandler_t2577_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CONNECTED_HEARTBEATHandler_t2577_GC_CONNECTED_HEARTBEATHandler_Execute_m15479_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8955/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CONNECTED_HEARTBEATHandler_t2577_MethodInfos[] =
{
	&GC_CONNECTED_HEARTBEATHandler__ctor_m15478_MethodInfo,
	&GC_CONNECTED_HEARTBEATHandler_Execute_m15479_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CONNECTED_HEARTBEATHandler_Execute_m15479_MethodInfo;
static MethodInfo* GC_CONNECTED_HEARTBEATHandler_t2577_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CONNECTED_HEARTBEATHandler_Execute_m15479_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CONNECTED_HEARTBEATHandler_t2577_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CONNECTED_HEARTBEATHandler_t2577_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CONNECTED_HEARTBEATHandler_t2577_0_0_0;
extern Il2CppType GC_CONNECTED_HEARTBEATHandler_t2577_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CONNECTED_HEARTBEATHandler_t2577;
extern TypeInfo GC_CONNECTED_HEARTBEATHandler_t2577_il2cpp_TypeInfo;
TypeInfo GC_CONNECTED_HEARTBEATHandler_t2577_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CONNECTED_HEARTBEATHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CONNECTED_HEARTBEATHandler_t2577_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CONNECTED_HEARTBEATHandler_t2577_il2cpp_TypeInfo/* element_class */
	, GC_CONNECTED_HEARTBEATHandler_t2577_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CONNECTED_HEARTBEATHandler_t2577_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CONNECTED_HEARTBEATHandler_t2577_il2cpp_TypeInfo/* cast_class */
	, &GC_CONNECTED_HEARTBEATHandler_t2577_0_0_0/* byval_arg */
	, &GC_CONNECTED_HEARTBEATHandler_t2577_1_0_0/* this_arg */
	, GC_CONNECTED_HEARTBEATHandler_t2577_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CONNECTED_HEARTBEATHandler_t2577)/* instance_size */
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
// SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COPYSCENE_INVITE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COPYSCENE_INVITEMethodDeclarations.h"

// GC_COPYSCENE_INVITE
#include "AssemblyU2DCSharp_GC_COPYSCENE_INVITE.h"
// GCGame.Table.Tab_SceneClass
#include "AssemblyU2DCSharpU2Dfirstpass_GCGame_Table_Tab_SceneClass.h"
// MessageBoxLogic/OnOKClick
#include "AssemblyU2DCSharp_MessageBoxLogic_OnOKClick.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// MessageBoxLogic/OnCancelClick
#include "AssemblyU2DCSharp_MessageBoxLogic_OnCancelClick.h"
// MessageBoxLogic/PASSWORD
#include "AssemblyU2DCSharp_MessageBoxLogic_PASSWORD.h"
// CG_COPYSCENE_INVITE_RET
#include "AssemblyU2DCSharp_CG_COPYSCENE_INVITE_RET.h"
extern TypeInfo GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo;
extern TypeInfo GC_COPYSCENE_INVITE_t3078_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo OnOKClick_t1546_il2cpp_TypeInfo;
extern TypeInfo OnCancelClick_t1547_il2cpp_TypeInfo;
extern TypeInfo MessageBoxLogic_t1552_il2cpp_TypeInfo;
extern TypeInfo TableManager_t332_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CG_COPYSCENE_INVITE_RET_t3080_il2cpp_TypeInfo;
// GC_COPYSCENE_INVITE
#include "AssemblyU2DCSharp_GC_COPYSCENE_INVITEMethodDeclarations.h"
// MessageBoxLogic/OnOKClick
#include "AssemblyU2DCSharp_MessageBoxLogic_OnOKClickMethodDeclarations.h"
// MessageBoxLogic/OnCancelClick
#include "AssemblyU2DCSharp_MessageBoxLogic_OnCancelClickMethodDeclarations.h"
// MessageBoxLogic
#include "AssemblyU2DCSharp_MessageBoxLogicMethodDeclarations.h"
// GCGame.Table.TableManager
#include "AssemblyU2DCSharpU2Dfirstpass_GCGame_Table_TableManagerMethodDeclarations.h"
// GCGame.Table.Tab_SceneClass
#include "AssemblyU2DCSharpU2Dfirstpass_GCGame_Table_Tab_SceneClassMethodDeclarations.h"
// CG_COPYSCENE_INVITE_RET
#include "AssemblyU2DCSharp_CG_COPYSCENE_INVITE_RETMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_get_MainPlayer_m31308_MethodInfo;
extern MethodInfo Object_op_Equality_m4263_MethodInfo;
extern MethodInfo GC_COPYSCENE_INVITE_get_SceneID_m19345_MethodInfo;
extern MethodInfo GC_COPYSCENE_INVITE_get_Difficult_m19353_MethodInfo;
extern MethodInfo GC_COPYSCENE_INVITE_get_InviterName_m19349_MethodInfo;
extern MethodInfo Obj_MainPlayer_SpliceTeamMemberCJGInviteDescription_m31754_MethodInfo;
extern MethodInfo GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo;
extern MethodInfo OnOKClick__ctor_m9601_MethodInfo;
extern MethodInfo GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo;
extern MethodInfo OnCancelClick__ctor_m9605_MethodInfo;
extern MethodInfo MessageBoxLogic_OpenOKCancelBox_m9634_MethodInfo;
extern MethodInfo GC_COPYSCENE_INVITE_get_HasMultipleType_m19356_MethodInfo;
extern MethodInfo GC_COPYSCENE_INVITE_get_MultipleType_m19357_MethodInfo;
extern MethodInfo TableManager_GetSceneClassByID_m1070_MethodInfo;
extern MethodInfo Tab_SceneClass_get_Name_m3087_MethodInfo;
extern MethodInfo StrDictionary_GetClientDictionaryString_m6943_MethodInfo;
extern MethodInfo Singleton_1_get_Instance_m39004_MethodInfo;
extern MethodInfo Object_op_Implicit_m4087_MethodInfo;
extern MethodInfo Obj_MainPlayer_get_AutoActivityAccept_m31825_MethodInfo;
extern MethodInfo MessageBoxLogic_OpenCancelBox_m9630_MethodInfo;
extern MethodInfo PacketDistributed_CreatePacket_m29413_MethodInfo;
extern MethodInfo CG_COPYSCENE_INVITE_RET_set_SceneID_m19367_MethodInfo;
extern MethodInfo CG_COPYSCENE_INVITE_RET_set_InviteResult_m19371_MethodInfo;
extern MethodInfo CG_COPYSCENE_INVITE_RET_set_Difficult_m19375_MethodInfo;
extern MethodInfo PacketDistributed_SendPacket_m29414_MethodInfo;


// System.Void SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler::.ctor()
extern MethodInfo GC_COPYSCENE_INVITEHandler__ctor_m15480_MethodInfo;
 void GC_COPYSCENE_INVITEHandler__ctor_m15480 (GC_COPYSCENE_INVITEHandler_t2578 * __this, MethodInfo* method){
	{
		__this->___m_nSceneId = (-1);
		__this->___m_nDifficult = (-1);
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler::Execute(PacketDistributed)
extern MethodInfo GC_COPYSCENE_INVITEHandler_Execute_m15481_MethodInfo;
 uint32_t GC_COPYSCENE_INVITEHandler_Execute_m15481 (GC_COPYSCENE_INVITEHandler_t2578 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_COPYSCENE_INVITE_t3078 * V_0 = {0};
	Obj_MainPlayer_t1732 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	Tab_SceneClass_t621 * V_7 = {0};
	Obj_MainPlayer_t1732 * V_8 = {0};
	Obj_MainPlayer_t1732 * V_9 = {0};
	Obj_MainPlayer_t1732 * V_10 = {0};
	{
		V_0 = ((GC_COPYSCENE_INVITE_t3078 *)Castclass(___ipacket, InitializedTypeInfo(&GC_COPYSCENE_INVITE_t3078_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_0 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_0);
		Obj_MainPlayer_t1732 * L_1 = ObjManager_get_MainPlayer_m31308(L_0, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		V_1 = L_1;
		bool L_2 = Object_op_Equality_m4263(NULL /*static, unused*/, (Object_t982 *)NULL, V_1, /*hidden argument*/&Object_op_Equality_m4263_MethodInfo);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		V_2 = 0;
		V_3 = 1;
		NullCheck(V_0);
		int32_t L_3 = GC_COPYSCENE_INVITE_get_SceneID_m19345(V_0, /*hidden argument*/&GC_COPYSCENE_INVITE_get_SceneID_m19345_MethodInfo);
		__this->___m_nSceneId = L_3;
		NullCheck(V_0);
		int32_t L_4 = GC_COPYSCENE_INVITE_get_Difficult_m19353(V_0, /*hidden argument*/&GC_COPYSCENE_INVITE_get_Difficult_m19353_MethodInfo);
		__this->___m_nDifficult = L_4;
		NullCheck(V_0);
		String_t* L_5 = GC_COPYSCENE_INVITE_get_InviterName_m19349(V_0, /*hidden argument*/&GC_COPYSCENE_INVITE_get_InviterName_m19349_MethodInfo);
		V_4 = L_5;
		int32_t L_6 = (__this->___m_nSceneId);
		if ((((uint32_t)L_6) != ((uint32_t)6)))
		{
			goto IL_008c;
		}
	}
	{
		NullCheck(V_1);
		String_t* L_7 = Obj_MainPlayer_SpliceTeamMemberCJGInviteDescription_m31754(V_1, V_4, /*hidden argument*/&Obj_MainPlayer_SpliceTeamMemberCJGInviteDescription_m31754_MethodInfo);
		V_5 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_8 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_9 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_9, __this, L_8, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_10 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_11 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_11, __this, L_10, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenOKCancelBox_m9634(NULL /*static, unused*/, V_5, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_9, L_11, ((int32_t)20), (-1), (-1), /*hidden argument*/&MessageBoxLogic_OpenOKCancelBox_m9634_MethodInfo);
		return 2;
	}

IL_008c:
	{
		V_6 = V_2;
		NullCheck(V_0);
		bool L_12 = GC_COPYSCENE_INVITE_get_HasMultipleType_m19356(V_0, /*hidden argument*/&GC_COPYSCENE_INVITE_get_HasMultipleType_m19356_MethodInfo);
		if (!L_12)
		{
			goto IL_00a2;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_13 = GC_COPYSCENE_INVITE_get_MultipleType_m19357(V_0, /*hidden argument*/&GC_COPYSCENE_INVITE_get_MultipleType_m19357_MethodInfo);
		V_6 = L_13;
	}

IL_00a2:
	{
		int32_t L_14 = (__this->___m_nSceneId);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TableManager_t332_il2cpp_TypeInfo));
		Tab_SceneClass_t621 * L_15 = TableManager_GetSceneClassByID_m1070(NULL /*static, unused*/, L_14, 0, /*hidden argument*/&TableManager_GetSceneClassByID_m1070_MethodInfo);
		V_7 = L_15;
		if (!V_7)
		{
			goto IL_03fd;
		}
	}
	{
		int32_t L_16 = (__this->___m_nDifficult);
		if ((((uint32_t)L_16) != ((uint32_t)1)))
		{
			goto IL_01d0;
		}
	}
	{
		if ((((uint32_t)V_6) != ((uint32_t)V_3)))
		{
			goto IL_0115;
		}
	}
	{
		ObjectU5BU5D_t142* L_17 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 2));
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 0);
		ArrayElementTypeCheck (L_17, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 0)) = (Object_t *)V_4;
		ObjectU5BU5D_t142* L_18 = L_17;
		NullCheck(V_7);
		String_t* L_19 = Tab_SceneClass_get_Name_m3087(V_7, /*hidden argument*/&Tab_SceneClass_get_Name_m3087_MethodInfo);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 1);
		ArrayElementTypeCheck (L_18, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 1)) = (Object_t *)L_19;
		String_t* L_20 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2786, L_18, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_21 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_22 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_22, __this, L_21, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_23 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_24 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_24, __this, L_23, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenOKCancelBox_m9634(NULL /*static, unused*/, L_20, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_22, L_24, ((int32_t)20), (-1), (-1), /*hidden argument*/&MessageBoxLogic_OpenOKCancelBox_m9634_MethodInfo);
		goto IL_01cb;
	}

IL_0115:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_25 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_25);
		Obj_MainPlayer_t1732 * L_26 = ObjManager_get_MainPlayer_m31308(L_25, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		V_8 = L_26;
		bool L_27 = Object_op_Implicit_m4087(NULL /*static, unused*/, V_8, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_27)
		{
			goto IL_0186;
		}
	}
	{
		NullCheck(V_8);
		bool L_28 = Obj_MainPlayer_get_AutoActivityAccept_m31825(V_8, /*hidden argument*/&Obj_MainPlayer_get_AutoActivityAccept_m31825_MethodInfo);
		if (!L_28)
		{
			goto IL_0186;
		}
	}
	{
		ObjectU5BU5D_t142* L_29 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 2));
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
		ArrayElementTypeCheck (L_29, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, 0)) = (Object_t *)V_4;
		ObjectU5BU5D_t142* L_30 = L_29;
		NullCheck(V_7);
		String_t* L_31 = Tab_SceneClass_get_Name_m3087(V_7, /*hidden argument*/&Tab_SceneClass_get_Name_m3087_MethodInfo);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 1);
		ArrayElementTypeCheck (L_30, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 1)) = (Object_t *)L_31;
		String_t* L_32 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2787, L_30, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_33 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_34 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_34, __this, L_33, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_35 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_36 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_36, __this, L_35, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenCancelBox_m9630(NULL /*static, unused*/, L_32, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_34, L_36, 5, (-1), ((int32_t)5559), /*hidden argument*/&MessageBoxLogic_OpenCancelBox_m9630_MethodInfo);
		goto IL_01cb;
	}

IL_0186:
	{
		ObjectU5BU5D_t142* L_37 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 2));
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		ArrayElementTypeCheck (L_37, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 0)) = (Object_t *)V_4;
		ObjectU5BU5D_t142* L_38 = L_37;
		NullCheck(V_7);
		String_t* L_39 = Tab_SceneClass_get_Name_m3087(V_7, /*hidden argument*/&Tab_SceneClass_get_Name_m3087_MethodInfo);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 1);
		ArrayElementTypeCheck (L_38, L_39);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 1)) = (Object_t *)L_39;
		String_t* L_40 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2787, L_38, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_41 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_42 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_42, __this, L_41, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_43 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_44 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_44, __this, L_43, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenOKCancelBox_m9634(NULL /*static, unused*/, L_40, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_42, L_44, ((int32_t)20), (-1), (-1), /*hidden argument*/&MessageBoxLogic_OpenOKCancelBox_m9634_MethodInfo);
	}

IL_01cb:
	{
		goto IL_03fd;
	}

IL_01d0:
	{
		int32_t L_45 = (__this->___m_nDifficult);
		if ((((uint32_t)L_45) != ((uint32_t)2)))
		{
			goto IL_02e9;
		}
	}
	{
		if ((((uint32_t)V_6) != ((uint32_t)V_3)))
		{
			goto IL_022e;
		}
	}
	{
		ObjectU5BU5D_t142* L_46 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 2));
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 0);
		ArrayElementTypeCheck (L_46, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 0)) = (Object_t *)V_4;
		ObjectU5BU5D_t142* L_47 = L_46;
		NullCheck(V_7);
		String_t* L_48 = Tab_SceneClass_get_Name_m3087(V_7, /*hidden argument*/&Tab_SceneClass_get_Name_m3087_MethodInfo);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 1);
		ArrayElementTypeCheck (L_47, L_48);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_47, 1)) = (Object_t *)L_48;
		String_t* L_49 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2788, L_47, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_50 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_51 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_51, __this, L_50, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_52 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_53 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_53, __this, L_52, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenOKCancelBox_m9634(NULL /*static, unused*/, L_49, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_51, L_53, ((int32_t)20), (-1), (-1), /*hidden argument*/&MessageBoxLogic_OpenOKCancelBox_m9634_MethodInfo);
		goto IL_02e4;
	}

IL_022e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_54 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_54);
		Obj_MainPlayer_t1732 * L_55 = ObjManager_get_MainPlayer_m31308(L_54, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		V_9 = L_55;
		bool L_56 = Object_op_Implicit_m4087(NULL /*static, unused*/, V_9, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_56)
		{
			goto IL_029f;
		}
	}
	{
		NullCheck(V_9);
		bool L_57 = Obj_MainPlayer_get_AutoActivityAccept_m31825(V_9, /*hidden argument*/&Obj_MainPlayer_get_AutoActivityAccept_m31825_MethodInfo);
		if (!L_57)
		{
			goto IL_029f;
		}
	}
	{
		ObjectU5BU5D_t142* L_58 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 2));
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
		ArrayElementTypeCheck (L_58, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_58, 0)) = (Object_t *)V_4;
		ObjectU5BU5D_t142* L_59 = L_58;
		NullCheck(V_7);
		String_t* L_60 = Tab_SceneClass_get_Name_m3087(V_7, /*hidden argument*/&Tab_SceneClass_get_Name_m3087_MethodInfo);
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, 1);
		ArrayElementTypeCheck (L_59, L_60);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_59, 1)) = (Object_t *)L_60;
		String_t* L_61 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2789, L_59, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_62 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_63 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_63, __this, L_62, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_64 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_65 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_65, __this, L_64, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenCancelBox_m9630(NULL /*static, unused*/, L_61, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_63, L_65, 5, (-1), ((int32_t)5559), /*hidden argument*/&MessageBoxLogic_OpenCancelBox_m9630_MethodInfo);
		goto IL_02e4;
	}

IL_029f:
	{
		ObjectU5BU5D_t142* L_66 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 2));
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, 0);
		ArrayElementTypeCheck (L_66, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_66, 0)) = (Object_t *)V_4;
		ObjectU5BU5D_t142* L_67 = L_66;
		NullCheck(V_7);
		String_t* L_68 = Tab_SceneClass_get_Name_m3087(V_7, /*hidden argument*/&Tab_SceneClass_get_Name_m3087_MethodInfo);
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, 1);
		ArrayElementTypeCheck (L_67, L_68);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_67, 1)) = (Object_t *)L_68;
		String_t* L_69 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2789, L_67, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_70 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_71 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_71, __this, L_70, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_72 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_73 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_73, __this, L_72, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenOKCancelBox_m9634(NULL /*static, unused*/, L_69, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_71, L_73, ((int32_t)20), (-1), (-1), /*hidden argument*/&MessageBoxLogic_OpenOKCancelBox_m9634_MethodInfo);
	}

IL_02e4:
	{
		goto IL_03fd;
	}

IL_02e9:
	{
		int32_t L_74 = (__this->___m_nDifficult);
		if ((((uint32_t)L_74) != ((uint32_t)3)))
		{
			goto IL_03fd;
		}
	}
	{
		if ((((uint32_t)V_6) != ((uint32_t)V_3)))
		{
			goto IL_0347;
		}
	}
	{
		ObjectU5BU5D_t142* L_75 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 2));
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, 0);
		ArrayElementTypeCheck (L_75, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_75, 0)) = (Object_t *)V_4;
		ObjectU5BU5D_t142* L_76 = L_75;
		NullCheck(V_7);
		String_t* L_77 = Tab_SceneClass_get_Name_m3087(V_7, /*hidden argument*/&Tab_SceneClass_get_Name_m3087_MethodInfo);
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, 1);
		ArrayElementTypeCheck (L_76, L_77);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_76, 1)) = (Object_t *)L_77;
		String_t* L_78 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2790, L_76, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_79 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_80 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_80, __this, L_79, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_81 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_82 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_82, __this, L_81, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenOKCancelBox_m9634(NULL /*static, unused*/, L_78, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_80, L_82, ((int32_t)20), (-1), (-1), /*hidden argument*/&MessageBoxLogic_OpenOKCancelBox_m9634_MethodInfo);
		goto IL_03fd;
	}

IL_0347:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_83 = Singleton_1_get_Instance_m39004(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_get_Instance_m39004_MethodInfo);
		NullCheck(L_83);
		Obj_MainPlayer_t1732 * L_84 = ObjManager_get_MainPlayer_m31308(L_83, /*hidden argument*/&ObjManager_get_MainPlayer_m31308_MethodInfo);
		V_10 = L_84;
		bool L_85 = Object_op_Implicit_m4087(NULL /*static, unused*/, V_10, /*hidden argument*/&Object_op_Implicit_m4087_MethodInfo);
		if (!L_85)
		{
			goto IL_03b8;
		}
	}
	{
		NullCheck(V_10);
		bool L_86 = Obj_MainPlayer_get_AutoActivityAccept_m31825(V_10, /*hidden argument*/&Obj_MainPlayer_get_AutoActivityAccept_m31825_MethodInfo);
		if (!L_86)
		{
			goto IL_03b8;
		}
	}
	{
		ObjectU5BU5D_t142* L_87 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 2));
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 0);
		ArrayElementTypeCheck (L_87, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_87, 0)) = (Object_t *)V_4;
		ObjectU5BU5D_t142* L_88 = L_87;
		NullCheck(V_7);
		String_t* L_89 = Tab_SceneClass_get_Name_m3087(V_7, /*hidden argument*/&Tab_SceneClass_get_Name_m3087_MethodInfo);
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, 1);
		ArrayElementTypeCheck (L_88, L_89);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_88, 1)) = (Object_t *)L_89;
		String_t* L_90 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2791, L_88, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_91 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_92 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_92, __this, L_91, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_93 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_94 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_94, __this, L_93, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenCancelBox_m9630(NULL /*static, unused*/, L_90, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_92, L_94, 5, (-1), ((int32_t)5559), /*hidden argument*/&MessageBoxLogic_OpenCancelBox_m9630_MethodInfo);
		goto IL_03fd;
	}

IL_03b8:
	{
		ObjectU5BU5D_t142* L_95 = ((ObjectU5BU5D_t142*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t142_il2cpp_TypeInfo), 2));
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, 0);
		ArrayElementTypeCheck (L_95, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_95, 0)) = (Object_t *)V_4;
		ObjectU5BU5D_t142* L_96 = L_95;
		NullCheck(V_7);
		String_t* L_97 = Tab_SceneClass_get_Name_m3087(V_7, /*hidden argument*/&Tab_SceneClass_get_Name_m3087_MethodInfo);
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, 1);
		ArrayElementTypeCheck (L_96, L_97);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_96, 1)) = (Object_t *)L_97;
		String_t* L_98 = StrDictionary_GetClientDictionaryString_m6943(NULL /*static, unused*/, (String_t*) &_stringLiteral2791, L_96, /*hidden argument*/&StrDictionary_GetClientDictionaryString_m6943_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		IntPtr_t24 L_99 = { &GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo };
		OnOKClick_t1546 * L_100 = (OnOKClick_t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnOKClick_t1546_il2cpp_TypeInfo));
		OnOKClick__ctor_m9601(L_100, __this, L_99, /*hidden argument*/&OnOKClick__ctor_m9601_MethodInfo);
		IntPtr_t24 L_101 = { &GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo };
		OnCancelClick_t1547 * L_102 = (OnCancelClick_t1547 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnCancelClick_t1547_il2cpp_TypeInfo));
		OnCancelClick__ctor_m9605(L_102, __this, L_101, /*hidden argument*/&OnCancelClick__ctor_m9605_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MessageBoxLogic_t1552_il2cpp_TypeInfo));
		MessageBoxLogic_OpenOKCancelBox_m9634(NULL /*static, unused*/, L_98, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty), L_100, L_102, ((int32_t)20), (-1), (-1), /*hidden argument*/&MessageBoxLogic_OpenOKCancelBox_m9634_MethodInfo);
	}

IL_03fd:
	{
		return 2;
	}
}
// System.Void SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler::AgreeCopySceneInvite()
extern MethodInfo GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo;
 void GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482 (GC_COPYSCENE_INVITEHandler_t2578 * __this, MethodInfo* method){
	CG_COPYSCENE_INVITE_RET_t3080 * V_0 = {0};
	{
		PacketDistributed_t2209 * L_0 = PacketDistributed_CreatePacket_m29413(NULL /*static, unused*/, ((int32_t)144), /*hidden argument*/&PacketDistributed_CreatePacket_m29413_MethodInfo);
		V_0 = ((CG_COPYSCENE_INVITE_RET_t3080 *)Castclass(L_0, InitializedTypeInfo(&CG_COPYSCENE_INVITE_RET_t3080_il2cpp_TypeInfo)));
		int32_t L_1 = (__this->___m_nSceneId);
		NullCheck(V_0);
		CG_COPYSCENE_INVITE_RET_set_SceneID_m19367(V_0, L_1, /*hidden argument*/&CG_COPYSCENE_INVITE_RET_set_SceneID_m19367_MethodInfo);
		NullCheck(V_0);
		CG_COPYSCENE_INVITE_RET_set_InviteResult_m19371(V_0, 2, /*hidden argument*/&CG_COPYSCENE_INVITE_RET_set_InviteResult_m19371_MethodInfo);
		int32_t L_2 = (__this->___m_nDifficult);
		NullCheck(V_0);
		CG_COPYSCENE_INVITE_RET_set_Difficult_m19375(V_0, L_2, /*hidden argument*/&CG_COPYSCENE_INVITE_RET_set_Difficult_m19375_MethodInfo);
		NullCheck(V_0);
		PacketDistributed_SendPacket_m29414(V_0, /*hidden argument*/&PacketDistributed_SendPacket_m29414_MethodInfo);
		__this->___m_nSceneId = (-1);
		__this->___m_nDifficult = (-1);
		return;
	}
}
// System.Void SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler::DisagreeCopySceneInvite()
extern MethodInfo GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo;
 void GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483 (GC_COPYSCENE_INVITEHandler_t2578 * __this, MethodInfo* method){
	CG_COPYSCENE_INVITE_RET_t3080 * V_0 = {0};
	{
		PacketDistributed_t2209 * L_0 = PacketDistributed_CreatePacket_m29413(NULL /*static, unused*/, ((int32_t)144), /*hidden argument*/&PacketDistributed_CreatePacket_m29413_MethodInfo);
		V_0 = ((CG_COPYSCENE_INVITE_RET_t3080 *)Castclass(L_0, InitializedTypeInfo(&CG_COPYSCENE_INVITE_RET_t3080_il2cpp_TypeInfo)));
		int32_t L_1 = (__this->___m_nSceneId);
		NullCheck(V_0);
		CG_COPYSCENE_INVITE_RET_set_SceneID_m19367(V_0, L_1, /*hidden argument*/&CG_COPYSCENE_INVITE_RET_set_SceneID_m19367_MethodInfo);
		NullCheck(V_0);
		CG_COPYSCENE_INVITE_RET_set_InviteResult_m19371(V_0, 3, /*hidden argument*/&CG_COPYSCENE_INVITE_RET_set_InviteResult_m19371_MethodInfo);
		int32_t L_2 = (__this->___m_nDifficult);
		NullCheck(V_0);
		CG_COPYSCENE_INVITE_RET_set_Difficult_m19375(V_0, L_2, /*hidden argument*/&CG_COPYSCENE_INVITE_RET_set_Difficult_m19375_MethodInfo);
		NullCheck(V_0);
		PacketDistributed_SendPacket_m29414(V_0, /*hidden argument*/&PacketDistributed_SendPacket_m29414_MethodInfo);
		__this->___m_nSceneId = (-1);
		__this->___m_nDifficult = (-1);
		return;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler
extern Il2CppType Int32_t73_0_0_1;
FieldInfo GC_COPYSCENE_INVITEHandler_t2578____m_nSceneId_FieldInfo = 
{
	"m_nSceneId"/* name */
	, &Int32_t73_0_0_1/* type */
	, &GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo/* parent */
	, offsetof(GC_COPYSCENE_INVITEHandler_t2578, ___m_nSceneId)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo GC_COPYSCENE_INVITEHandler_t2578____m_nDifficult_FieldInfo = 
{
	"m_nDifficult"/* name */
	, &Int32_t73_0_0_1/* type */
	, &GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo/* parent */
	, offsetof(GC_COPYSCENE_INVITEHandler_t2578, ___m_nDifficult)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* GC_COPYSCENE_INVITEHandler_t2578_FieldInfos[] =
{
	&GC_COPYSCENE_INVITEHandler_t2578____m_nSceneId_FieldInfo,
	&GC_COPYSCENE_INVITEHandler_t2578____m_nDifficult_FieldInfo,
	NULL
};
extern TypeInfo GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler::.ctor()
MethodInfo GC_COPYSCENE_INVITEHandler__ctor_m15480_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_COPYSCENE_INVITEHandler__ctor_m15480/* method */
	, &GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo/* declaring_type */
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
	, 8956/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_COPYSCENE_INVITEHandler_t2578_GC_COPYSCENE_INVITEHandler_Execute_m15481_ParameterInfos[] = 
{
	{"ipacket", 0, 134222394, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler::Execute(PacketDistributed)
MethodInfo GC_COPYSCENE_INVITEHandler_Execute_m15481_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_COPYSCENE_INVITEHandler_Execute_m15481/* method */
	, &GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_COPYSCENE_INVITEHandler_t2578_GC_COPYSCENE_INVITEHandler_Execute_m15481_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8957/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler::AgreeCopySceneInvite()
MethodInfo GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo = 
{
	"AgreeCopySceneInvite"/* name */
	, (methodPointerType)&GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482/* method */
	, &GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8958/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_COPYSCENE_INVITEHandler::DisagreeCopySceneInvite()
MethodInfo GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo = 
{
	"DisagreeCopySceneInvite"/* name */
	, (methodPointerType)&GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483/* method */
	, &GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8959/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_COPYSCENE_INVITEHandler_t2578_MethodInfos[] =
{
	&GC_COPYSCENE_INVITEHandler__ctor_m15480_MethodInfo,
	&GC_COPYSCENE_INVITEHandler_Execute_m15481_MethodInfo,
	&GC_COPYSCENE_INVITEHandler_AgreeCopySceneInvite_m15482_MethodInfo,
	&GC_COPYSCENE_INVITEHandler_DisagreeCopySceneInvite_m15483_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_COPYSCENE_INVITEHandler_Execute_m15481_MethodInfo;
static MethodInfo* GC_COPYSCENE_INVITEHandler_t2578_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_COPYSCENE_INVITEHandler_Execute_m15481_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_COPYSCENE_INVITEHandler_t2578_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_COPYSCENE_INVITEHandler_t2578_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_COPYSCENE_INVITEHandler_t2578_0_0_0;
extern Il2CppType GC_COPYSCENE_INVITEHandler_t2578_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_COPYSCENE_INVITEHandler_t2578;
extern TypeInfo GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo;
TypeInfo GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_COPYSCENE_INVITEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_COPYSCENE_INVITEHandler_t2578_MethodInfos/* methods */
	, NULL/* properties */
	, GC_COPYSCENE_INVITEHandler_t2578_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo/* element_class */
	, GC_COPYSCENE_INVITEHandler_t2578_InterfacesTypeInfos/* implemented_interfaces */
	, GC_COPYSCENE_INVITEHandler_t2578_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_COPYSCENE_INVITEHandler_t2578_il2cpp_TypeInfo/* cast_class */
	, &GC_COPYSCENE_INVITEHandler_t2578_0_0_0/* byval_arg */
	, &GC_COPYSCENE_INVITEHandler_t2578_1_0_0/* this_arg */
	, GC_COPYSCENE_INVITEHandler_t2578_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_COPYSCENE_INVITEHandler_t2578)/* instance_size */
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
	, 4/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.GC_COPYSCENE_RESULTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COPYSCENE_RESULT.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_COPYSCENE_RESULTHandler_t2579_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_COPYSCENE_RESULTHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COPYSCENE_RESULTMethodDeclarations.h"

// GC_COPYSCENE_RESULT
#include "AssemblyU2DCSharp_GC_COPYSCENE_RESULT.h"
// VictoryScoreRoot
#include "AssemblyU2DCSharp_VictoryScoreRoot.h"
// UIInfo
#include "AssemblyU2DCSharp_UIInfo.h"
// UIPathData
#include "AssemblyU2DCSharp_UIPathData.h"
// UIManager/OnOpenUIDelegate
#include "AssemblyU2DCSharp_UIManager_OnOpenUIDelegate.h"
extern TypeInfo GC_COPYSCENE_RESULT_t3082_il2cpp_TypeInfo;
extern TypeInfo VictoryScoreRoot_t1856_il2cpp_TypeInfo;
extern TypeInfo UIInfo_t1961_il2cpp_TypeInfo;
// VictoryScoreRoot
#include "AssemblyU2DCSharp_VictoryScoreRootMethodDeclarations.h"
// GC_COPYSCENE_RESULT
#include "AssemblyU2DCSharp_GC_COPYSCENE_RESULTMethodDeclarations.h"
// UIInfo
#include "AssemblyU2DCSharp_UIInfoMethodDeclarations.h"
// UIManager
#include "AssemblyU2DCSharp_UIManagerMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo VictoryScoreRoot_Clear_m12257_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_Result_m19383_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_SceneID_m19387_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_Difficult_m19395_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_IsSolo_m19391_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_Star_m19399_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_Score_m19403_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_Carom_m19407_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_Time_m19411_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_Exp_m19415_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_Money_m19423_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_DrawIndex_m19451_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_DrawIndexTwo_m19459_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_PetExp_m19463_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_GetRewardType_m19428_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_GetRewardItemId_m19432_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_GetRewardCount_m19436_MethodInfo;
extern MethodInfo VictoryScoreRoot_addRewardList_m12261_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_RewardTypeCount_m19427_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_GetDrawType_m19440_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_GetDrawItemId_m19444_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_GetDrawCount_m19448_MethodInfo;
extern MethodInfo VictoryScoreRoot_addDrawList_m12260_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_DrawTypeCount_m19439_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_GetUserInScene_m19456_MethodInfo;
extern MethodInfo VictoryScoreRoot_addUserInScene_m12258_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULT_get_UserInSceneCount_m19455_MethodInfo;
extern MethodInfo UIManager_ShowUI_m12740_MethodInfo;


// System.Void SPacket.SocketInstance.GC_COPYSCENE_RESULTHandler::.ctor()
extern MethodInfo GC_COPYSCENE_RESULTHandler__ctor_m15484_MethodInfo;
 void GC_COPYSCENE_RESULTHandler__ctor_m15484 (GC_COPYSCENE_RESULTHandler_t2579 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_COPYSCENE_RESULTHandler::Execute(PacketDistributed)
extern MethodInfo GC_COPYSCENE_RESULTHandler_Execute_m15485_MethodInfo;
 uint32_t GC_COPYSCENE_RESULTHandler_Execute_m15485 (GC_COPYSCENE_RESULTHandler_t2579 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_COPYSCENE_RESULT_t3082 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = ((GC_COPYSCENE_RESULT_t3082 *)Castclass(___ipacket, InitializedTypeInfo(&GC_COPYSCENE_RESULT_t3082_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo));
		VictoryScoreRoot_Clear_m12257(NULL /*static, unused*/, /*hidden argument*/&VictoryScoreRoot_Clear_m12257_MethodInfo);
		NullCheck(V_0);
		int32_t L_0 = GC_COPYSCENE_RESULT_get_Result_m19383(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_Result_m19383_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nResult = L_0;
		NullCheck(V_0);
		int32_t L_1 = GC_COPYSCENE_RESULT_get_SceneID_m19387(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_SceneID_m19387_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nSceneId = L_1;
		NullCheck(V_0);
		int32_t L_2 = GC_COPYSCENE_RESULT_get_Difficult_m19395(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_Difficult_m19395_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_Difficult = L_2;
		NullCheck(V_0);
		int32_t L_3 = GC_COPYSCENE_RESULT_get_IsSolo_m19391(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_IsSolo_m19391_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nSolo = L_3;
		NullCheck(V_0);
		int32_t L_4 = GC_COPYSCENE_RESULT_get_Star_m19399(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_Star_m19399_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nStar = L_4;
		NullCheck(V_0);
		int32_t L_5 = GC_COPYSCENE_RESULT_get_Score_m19403(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_Score_m19403_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nScore = L_5;
		NullCheck(V_0);
		int32_t L_6 = GC_COPYSCENE_RESULT_get_Carom_m19407(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_Carom_m19407_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nCarom = L_6;
		NullCheck(V_0);
		int32_t L_7 = GC_COPYSCENE_RESULT_get_Time_m19411(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_Time_m19411_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nTime = L_7;
		NullCheck(V_0);
		int32_t L_8 = GC_COPYSCENE_RESULT_get_Exp_m19415(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_Exp_m19415_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nExp = L_8;
		NullCheck(V_0);
		int32_t L_9 = GC_COPYSCENE_RESULT_get_Money_m19423(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_Money_m19423_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nMoney = L_9;
		NullCheck(V_0);
		int32_t L_10 = GC_COPYSCENE_RESULT_get_DrawIndex_m19451(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_DrawIndex_m19451_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nDrawIndex = L_10;
		NullCheck(V_0);
		int32_t L_11 = GC_COPYSCENE_RESULT_get_DrawIndexTwo_m19459(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_DrawIndexTwo_m19459_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nDrawIndexTwo = L_11;
		NullCheck(V_0);
		int32_t L_12 = GC_COPYSCENE_RESULT_get_PetExp_m19463(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_PetExp_m19463_MethodInfo);
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nPetExp = L_12;
		if ((((int32_t)(((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nStar)) >= ((int32_t)5)))
		{
			goto IL_00b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo));
		((VictoryScoreRoot_t1856_StaticFields*)InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo)->static_fields)->___m_nDrawIndexTwo = (-1);
	}

IL_00b4:
	{
		V_1 = 0;
		goto IL_00d9;
	}

IL_00bb:
	{
		NullCheck(V_0);
		int32_t L_13 = GC_COPYSCENE_RESULT_GetRewardType_m19428(V_0, V_1, /*hidden argument*/&GC_COPYSCENE_RESULT_GetRewardType_m19428_MethodInfo);
		NullCheck(V_0);
		int32_t L_14 = GC_COPYSCENE_RESULT_GetRewardItemId_m19432(V_0, V_1, /*hidden argument*/&GC_COPYSCENE_RESULT_GetRewardItemId_m19432_MethodInfo);
		NullCheck(V_0);
		int32_t L_15 = GC_COPYSCENE_RESULT_GetRewardCount_m19436(V_0, V_1, /*hidden argument*/&GC_COPYSCENE_RESULT_GetRewardCount_m19436_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo));
		VictoryScoreRoot_addRewardList_m12261(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/&VictoryScoreRoot_addRewardList_m12261_MethodInfo);
		V_1 = ((int32_t)(V_1+1));
	}

IL_00d9:
	{
		NullCheck(V_0);
		int32_t L_16 = GC_COPYSCENE_RESULT_get_RewardTypeCount_m19427(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_RewardTypeCount_m19427_MethodInfo);
		if ((((int32_t)V_1) < ((int32_t)L_16)))
		{
			goto IL_00bb;
		}
	}
	{
		V_2 = 0;
		goto IL_010a;
	}

IL_00ec:
	{
		NullCheck(V_0);
		int32_t L_17 = GC_COPYSCENE_RESULT_GetDrawType_m19440(V_0, V_2, /*hidden argument*/&GC_COPYSCENE_RESULT_GetDrawType_m19440_MethodInfo);
		NullCheck(V_0);
		int32_t L_18 = GC_COPYSCENE_RESULT_GetDrawItemId_m19444(V_0, V_2, /*hidden argument*/&GC_COPYSCENE_RESULT_GetDrawItemId_m19444_MethodInfo);
		NullCheck(V_0);
		int32_t L_19 = GC_COPYSCENE_RESULT_GetDrawCount_m19448(V_0, V_2, /*hidden argument*/&GC_COPYSCENE_RESULT_GetDrawCount_m19448_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo));
		VictoryScoreRoot_addDrawList_m12260(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/&VictoryScoreRoot_addDrawList_m12260_MethodInfo);
		V_2 = ((int32_t)(V_2+1));
	}

IL_010a:
	{
		NullCheck(V_0);
		int32_t L_20 = GC_COPYSCENE_RESULT_get_DrawTypeCount_m19439(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_DrawTypeCount_m19439_MethodInfo);
		if ((((int32_t)V_2) < ((int32_t)L_20)))
		{
			goto IL_00ec;
		}
	}
	{
		V_3 = 0;
		goto IL_013b;
	}

IL_011d:
	{
		NullCheck(V_0);
		uint64_t L_21 = GC_COPYSCENE_RESULT_GetUserInScene_m19456(V_0, V_3, /*hidden argument*/&GC_COPYSCENE_RESULT_GetUserInScene_m19456_MethodInfo);
		if ((((int64_t)L_21) == ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_0137;
		}
	}
	{
		NullCheck(V_0);
		uint64_t L_22 = GC_COPYSCENE_RESULT_GetUserInScene_m19456(V_0, V_3, /*hidden argument*/&GC_COPYSCENE_RESULT_GetUserInScene_m19456_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&VictoryScoreRoot_t1856_il2cpp_TypeInfo));
		VictoryScoreRoot_addUserInScene_m12258(NULL /*static, unused*/, L_22, /*hidden argument*/&VictoryScoreRoot_addUserInScene_m12258_MethodInfo);
	}

IL_0137:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_013b:
	{
		NullCheck(V_0);
		int32_t L_23 = GC_COPYSCENE_RESULT_get_UserInSceneCount_m19455(V_0, /*hidden argument*/&GC_COPYSCENE_RESULT_get_UserInSceneCount_m19455_MethodInfo);
		if ((((int32_t)V_3) < ((int32_t)L_23)))
		{
			goto IL_011d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UIInfo_t1961_il2cpp_TypeInfo));
		UIManager_ShowUI_m12740(NULL /*static, unused*/, (((UIInfo_t1961_StaticFields*)InitializedTypeInfo(&UIInfo_t1961_il2cpp_TypeInfo)->static_fields)->___VictoryScoreRoot), (OnOpenUIDelegate_t1396 *)NULL, NULL, /*hidden argument*/&UIManager_ShowUI_m12740_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_COPYSCENE_RESULTHandler
extern TypeInfo GC_COPYSCENE_RESULTHandler_t2579_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_COPYSCENE_RESULTHandler::.ctor()
MethodInfo GC_COPYSCENE_RESULTHandler__ctor_m15484_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_COPYSCENE_RESULTHandler__ctor_m15484/* method */
	, &GC_COPYSCENE_RESULTHandler_t2579_il2cpp_TypeInfo/* declaring_type */
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
	, 8960/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_COPYSCENE_RESULTHandler_t2579_GC_COPYSCENE_RESULTHandler_Execute_m15485_ParameterInfos[] = 
{
	{"ipacket", 0, 134222395, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_COPYSCENE_RESULTHandler_t2579_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_COPYSCENE_RESULTHandler::Execute(PacketDistributed)
MethodInfo GC_COPYSCENE_RESULTHandler_Execute_m15485_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_COPYSCENE_RESULTHandler_Execute_m15485/* method */
	, &GC_COPYSCENE_RESULTHandler_t2579_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_COPYSCENE_RESULTHandler_t2579_GC_COPYSCENE_RESULTHandler_Execute_m15485_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8961/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_COPYSCENE_RESULTHandler_t2579_MethodInfos[] =
{
	&GC_COPYSCENE_RESULTHandler__ctor_m15484_MethodInfo,
	&GC_COPYSCENE_RESULTHandler_Execute_m15485_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_COPYSCENE_RESULTHandler_Execute_m15485_MethodInfo;
static MethodInfo* GC_COPYSCENE_RESULTHandler_t2579_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_COPYSCENE_RESULTHandler_Execute_m15485_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_COPYSCENE_RESULTHandler_t2579_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_COPYSCENE_RESULTHandler_t2579_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_COPYSCENE_RESULTHandler_t2579_0_0_0;
extern Il2CppType GC_COPYSCENE_RESULTHandler_t2579_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_COPYSCENE_RESULTHandler_t2579;
extern TypeInfo GC_COPYSCENE_RESULTHandler_t2579_il2cpp_TypeInfo;
TypeInfo GC_COPYSCENE_RESULTHandler_t2579_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_COPYSCENE_RESULTHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_COPYSCENE_RESULTHandler_t2579_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_COPYSCENE_RESULTHandler_t2579_il2cpp_TypeInfo/* element_class */
	, GC_COPYSCENE_RESULTHandler_t2579_InterfacesTypeInfos/* implemented_interfaces */
	, GC_COPYSCENE_RESULTHandler_t2579_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_COPYSCENE_RESULTHandler_t2579_il2cpp_TypeInfo/* cast_class */
	, &GC_COPYSCENE_RESULTHandler_t2579_0_0_0/* byval_arg */
	, &GC_COPYSCENE_RESULTHandler_t2579_1_0_0/* this_arg */
	, GC_COPYSCENE_RESULTHandler_t2579_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_COPYSCENE_RESULTHandler_t2579)/* instance_size */
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
// SPacket.SocketInstance.GC_COUNTDOWNHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COUNTDOWNHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_COUNTDOWNHandler_t2580_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_COUNTDOWNHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_COUNTDOWNHandlerMethodDeclarations.h"

// GC_COUNTDOWN
#include "AssemblyU2DCSharp_GC_COUNTDOWN.h"
extern TypeInfo GC_COUNTDOWN_t3132_il2cpp_TypeInfo;
// GC_COUNTDOWN
#include "AssemblyU2DCSharp_GC_COUNTDOWNMethodDeclarations.h"
// CountDownLogic
#include "AssemblyU2DCSharp_CountDownLogicMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_COUNTDOWN_get_CountDownSecond_m20281_MethodInfo;
extern MethodInfo CountDownLogic_ShowCountDown_m8108_MethodInfo;


// System.Void SPacket.SocketInstance.GC_COUNTDOWNHandler::.ctor()
extern MethodInfo GC_COUNTDOWNHandler__ctor_m15486_MethodInfo;
 void GC_COUNTDOWNHandler__ctor_m15486 (GC_COUNTDOWNHandler_t2580 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_COUNTDOWNHandler::Execute(PacketDistributed)
extern MethodInfo GC_COUNTDOWNHandler_Execute_m15487_MethodInfo;
 uint32_t GC_COUNTDOWNHandler_Execute_m15487 (GC_COUNTDOWNHandler_t2580 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_COUNTDOWN_t3132 * V_0 = {0};
	{
		V_0 = ((GC_COUNTDOWN_t3132 *)Castclass(___ipacket, InitializedTypeInfo(&GC_COUNTDOWN_t3132_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_COUNTDOWN_get_CountDownSecond_m20281(V_0, /*hidden argument*/&GC_COUNTDOWN_get_CountDownSecond_m20281_MethodInfo);
		CountDownLogic_ShowCountDown_m8108(NULL /*static, unused*/, L_0, /*hidden argument*/&CountDownLogic_ShowCountDown_m8108_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_COUNTDOWNHandler
extern TypeInfo GC_COUNTDOWNHandler_t2580_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_COUNTDOWNHandler::.ctor()
MethodInfo GC_COUNTDOWNHandler__ctor_m15486_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_COUNTDOWNHandler__ctor_m15486/* method */
	, &GC_COUNTDOWNHandler_t2580_il2cpp_TypeInfo/* declaring_type */
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
	, 8962/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_COUNTDOWNHandler_t2580_GC_COUNTDOWNHandler_Execute_m15487_ParameterInfos[] = 
{
	{"ipacket", 0, 134222396, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_COUNTDOWNHandler_t2580_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_COUNTDOWNHandler::Execute(PacketDistributed)
MethodInfo GC_COUNTDOWNHandler_Execute_m15487_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_COUNTDOWNHandler_Execute_m15487/* method */
	, &GC_COUNTDOWNHandler_t2580_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_COUNTDOWNHandler_t2580_GC_COUNTDOWNHandler_Execute_m15487_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8963/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_COUNTDOWNHandler_t2580_MethodInfos[] =
{
	&GC_COUNTDOWNHandler__ctor_m15486_MethodInfo,
	&GC_COUNTDOWNHandler_Execute_m15487_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_COUNTDOWNHandler_Execute_m15487_MethodInfo;
static MethodInfo* GC_COUNTDOWNHandler_t2580_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_COUNTDOWNHandler_Execute_m15487_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_COUNTDOWNHandler_t2580_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_COUNTDOWNHandler_t2580_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_COUNTDOWNHandler_t2580_0_0_0;
extern Il2CppType GC_COUNTDOWNHandler_t2580_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_COUNTDOWNHandler_t2580;
extern TypeInfo GC_COUNTDOWNHandler_t2580_il2cpp_TypeInfo;
TypeInfo GC_COUNTDOWNHandler_t2580_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_COUNTDOWNHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_COUNTDOWNHandler_t2580_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_COUNTDOWNHandler_t2580_il2cpp_TypeInfo/* element_class */
	, GC_COUNTDOWNHandler_t2580_InterfacesTypeInfos/* implemented_interfaces */
	, GC_COUNTDOWNHandler_t2580_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_COUNTDOWNHandler_t2580_il2cpp_TypeInfo/* cast_class */
	, &GC_COUNTDOWNHandler_t2580_0_0_0/* byval_arg */
	, &GC_COUNTDOWNHandler_t2580_1_0_0/* this_arg */
	, GC_COUNTDOWNHandler_t2580_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_COUNTDOWNHandler_t2580)/* instance_size */
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
// SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATEROLE_RETHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CreateRoltFailRet_t2582_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATEROLE_RETHaMethodDeclarations.h"

// GC_CREATEROLE_RET/CREATEROLE_RESULT
#include "AssemblyU2DCSharp_GC_CREATEROLE_RET_CREATEROLE_RESULT.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet::.ctor(System.Object,System.IntPtr)
extern MethodInfo CreateRoltFailRet__ctor_m15488_MethodInfo;
 void CreateRoltFailRet__ctor_m15488 (CreateRoltFailRet_t2582 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Void SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet::Invoke(GC_CREATEROLE_RET/CREATEROLE_RESULT)
extern MethodInfo CreateRoltFailRet_Invoke_m15489_MethodInfo;
 void CreateRoltFailRet_Invoke_m15489 (CreateRoltFailRet_t2582 * __this, int32_t ___result, MethodInfo* method){
	// runtime
	typedef  void (*FunctionPointerType) (Object_t * __this, int32_t ___result, MethodInfo* method);
	if (__this->___prev)
		CreateRoltFailRet_Invoke_m15489((CreateRoltFailRet_t2582 *)__this->___prev,  ___result, method);
	((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___result, (MethodInfo*)(__this->___method.___m_value));
}
void pinvoke_delegate_wrapper_CreateRoltFailRet_t2582(Il2CppObject* delegate, int32_t ___result)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___result' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___result);

	// Marshaling cleanup of parameter '___result' native representation

}
// System.IAsyncResult SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet::BeginInvoke(GC_CREATEROLE_RET/CREATEROLE_RESULT,System.AsyncCallback,System.Object)
extern MethodInfo CreateRoltFailRet_BeginInvoke_m15490_MethodInfo;
 Object_t * CreateRoltFailRet_BeginInvoke_m15490 (CreateRoltFailRet_t2582 * __this, int32_t ___result, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&CREATEROLE_RESULT_t2581_il2cpp_TypeInfo), &___result);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet::EndInvoke(System.IAsyncResult)
extern MethodInfo CreateRoltFailRet_EndInvoke_m15491_MethodInfo;
 void CreateRoltFailRet_EndInvoke_m15491 (CreateRoltFailRet_t2582 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Metadata Definition SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo CreateRoltFailRet_t2582_CreateRoltFailRet__ctor_m15488_ParameterInfos[] = 
{
	{"object", 0, 134222398, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134222399, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo CreateRoltFailRet_t2582_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet::.ctor(System.Object,System.IntPtr)
MethodInfo CreateRoltFailRet__ctor_m15488_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CreateRoltFailRet__ctor_m15488/* method */
	, &CreateRoltFailRet_t2582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, CreateRoltFailRet_t2582_CreateRoltFailRet__ctor_m15488_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8966/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType CREATEROLE_RESULT_t2581_0_0_0;
static ParameterInfo CreateRoltFailRet_t2582_CreateRoltFailRet_Invoke_m15489_ParameterInfos[] = 
{
	{"result", 0, 134222400, &EmptyCustomAttributesCache, &CREATEROLE_RESULT_t2581_0_0_0},
};
extern TypeInfo CreateRoltFailRet_t2582_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet::Invoke(GC_CREATEROLE_RET/CREATEROLE_RESULT)
MethodInfo CreateRoltFailRet_Invoke_m15489_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CreateRoltFailRet_Invoke_m15489/* method */
	, &CreateRoltFailRet_t2582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, CreateRoltFailRet_t2582_CreateRoltFailRet_Invoke_m15489_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8967/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType CREATEROLE_RESULT_t2581_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CreateRoltFailRet_t2582_CreateRoltFailRet_BeginInvoke_m15490_ParameterInfos[] = 
{
	{"result", 0, 134222401, &EmptyCustomAttributesCache, &CREATEROLE_RESULT_t2581_0_0_0},
	{"callback", 1, 134222402, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134222403, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo CreateRoltFailRet_t2582_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet::BeginInvoke(GC_CREATEROLE_RET/CREATEROLE_RESULT,System.AsyncCallback,System.Object)
MethodInfo CreateRoltFailRet_BeginInvoke_m15490_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CreateRoltFailRet_BeginInvoke_m15490/* method */
	, &CreateRoltFailRet_t2582_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73_Object_t_Object_t/* invoker_method */
	, CreateRoltFailRet_t2582_CreateRoltFailRet_BeginInvoke_m15490_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8968/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo CreateRoltFailRet_t2582_CreateRoltFailRet_EndInvoke_m15491_ParameterInfos[] = 
{
	{"result", 0, 134222404, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo CreateRoltFailRet_t2582_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATEROLE_RETHandler/CreateRoltFailRet::EndInvoke(System.IAsyncResult)
MethodInfo CreateRoltFailRet_EndInvoke_m15491_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CreateRoltFailRet_EndInvoke_m15491/* method */
	, &CreateRoltFailRet_t2582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CreateRoltFailRet_t2582_CreateRoltFailRet_EndInvoke_m15491_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8969/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CreateRoltFailRet_t2582_MethodInfos[] =
{
	&CreateRoltFailRet__ctor_m15488_MethodInfo,
	&CreateRoltFailRet_Invoke_m15489_MethodInfo,
	&CreateRoltFailRet_BeginInvoke_m15490_MethodInfo,
	&CreateRoltFailRet_EndInvoke_m15491_MethodInfo,
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
extern MethodInfo CreateRoltFailRet_Invoke_m15489_MethodInfo;
extern MethodInfo CreateRoltFailRet_BeginInvoke_m15490_MethodInfo;
extern MethodInfo CreateRoltFailRet_EndInvoke_m15491_MethodInfo;
static MethodInfo* CreateRoltFailRet_t2582_VTable[] =
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
	&CreateRoltFailRet_Invoke_m15489_MethodInfo,
	&CreateRoltFailRet_BeginInvoke_m15490_MethodInfo,
	&CreateRoltFailRet_EndInvoke_m15491_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair CreateRoltFailRet_t2582_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType CreateRoltFailRet_t2582_0_0_0;
extern Il2CppType CreateRoltFailRet_t2582_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct CreateRoltFailRet_t2582;
extern TypeInfo CreateRoltFailRet_t2582_il2cpp_TypeInfo;
extern TypeInfo GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo;
TypeInfo CreateRoltFailRet_t2582_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "CreateRoltFailRet"/* name */
	, ""/* namespaze */
	, CreateRoltFailRet_t2582_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo/* nested_in */
	, &CreateRoltFailRet_t2582_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CreateRoltFailRet_t2582_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CreateRoltFailRet_t2582_il2cpp_TypeInfo/* cast_class */
	, &CreateRoltFailRet_t2582_0_0_0/* byval_arg */
	, &CreateRoltFailRet_t2582_1_0_0/* this_arg */
	, CreateRoltFailRet_t2582_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CreateRoltFailRet_t2582/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CreateRoltFailRet_t2582)/* instance_size */
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
// SPacket.SocketInstance.GC_CREATEROLE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATEROLE_RETHa_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CREATEROLE_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATEROLE_RETHa_0MethodDeclarations.h"

// GC_CREATEROLE_RET
#include "AssemblyU2DCSharp_GC_CREATEROLE_RET.h"
// LoginData
#include "AssemblyU2DCSharp_LoginData.h"
// System.Collections.Generic.List`1<LoginData/PlayerRoleData>
#include "mscorlib_System_Collections_Generic_List_1_gen_231.h"
// LoginData/PlayerRoleData
#include "AssemblyU2DCSharp_LoginData_PlayerRoleData.h"
// PlayerEnterSceneCache
#include "AssemblyU2DCSharp_PlayerEnterSceneCache.h"
extern TypeInfo GC_CREATEROLE_RET_t2980_il2cpp_TypeInfo;
extern TypeInfo LoginData_t4919_il2cpp_TypeInfo;
extern TypeInfo PlayerRoleData_t4913_il2cpp_TypeInfo;
extern TypeInfo List_1_t1936_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo UserConfigData_t4982_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo Utils_t1170_il2cpp_TypeInfo;
extern TypeInfo GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo;
extern TypeInfo CreateRoltFailRet_t2582_il2cpp_TypeInfo;
extern TypeInfo CREATEROLE_RESULT_t2581_il2cpp_TypeInfo;
// GC_CREATEROLE_RET
#include "AssemblyU2DCSharp_GC_CREATEROLE_RETMethodDeclarations.h"
// LoginData
#include "AssemblyU2DCSharp_LoginDataMethodDeclarations.h"
// LoginData/PlayerRoleData
#include "AssemblyU2DCSharp_LoginData_PlayerRoleDataMethodDeclarations.h"
// System.Collections.Generic.List`1<LoginData/PlayerRoleData>
#include "mscorlib_System_Collections_Generic_List_1_gen_231MethodDeclarations.h"
// PlatformHelper
#include "AssemblyU2DCSharp_PlatformHelperMethodDeclarations.h"
// UserConfigData
#include "AssemblyU2DCSharp_UserConfigDataMethodDeclarations.h"
// PlayerEnterSceneCache
#include "AssemblyU2DCSharp_PlayerEnterSceneCacheMethodDeclarations.h"
// GCGame.Utils
#include "AssemblyU2DCSharp_GCGame_UtilsMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_CREATEROLE_RET_get_Result_m17349_MethodInfo;
extern MethodInfo GC_CREATEROLE_RET_get_PlayerGuid_m17357_MethodInfo;
extern MethodInfo GC_CREATEROLE_RET_get_Profession_m17353_MethodInfo;
extern MethodInfo GC_CREATEROLE_RET_get_PlayerName_m17361_MethodInfo;
extern MethodInfo PlayerRoleData__ctor_m34811_MethodInfo;
extern MethodInfo List_1_Add_m40325_MethodInfo;
extern MethodInfo PlatformHelper_OnRoleCreate_m32307_MethodInfo;
extern MethodInfo UserConfigData_AddRoleInfo_m35670_MethodInfo;
extern MethodInfo LoginData_UpdateLoginRoleInfo_m34828_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_EnterSceneCache_m35081_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_set_Profession_m35406_MethodInfo;
extern MethodInfo Utils_SetPVXSkillIndexByProfession_m7068_MethodInfo;
extern MethodInfo CreateRoltFailRet_Invoke_m15489_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CREATEROLE_RETHandler::.ctor()
extern MethodInfo GC_CREATEROLE_RETHandler__ctor_m15492_MethodInfo;
 void GC_CREATEROLE_RETHandler__ctor_m15492 (GC_CREATEROLE_RETHandler_t2583 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CREATEROLE_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_CREATEROLE_RETHandler_Execute_m15493_MethodInfo;
 uint32_t GC_CREATEROLE_RETHandler_Execute_m15493 (GC_CREATEROLE_RETHandler_t2583 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CREATEROLE_RET_t2980 * V_0 = {0};
	{
		V_0 = ((GC_CREATEROLE_RET_t2980 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CREATEROLE_RET_t2980_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_CREATEROLE_RET_get_Result_m17349(V_0, /*hidden argument*/&GC_CREATEROLE_RET_get_Result_m17349_MethodInfo);
		if (L_0)
		{
			goto IL_0089;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&LoginData_t4919_il2cpp_TypeInfo));
		NullCheck(V_0);
		uint64_t L_1 = GC_CREATEROLE_RET_get_PlayerGuid_m17357(V_0, /*hidden argument*/&GC_CREATEROLE_RET_get_PlayerGuid_m17357_MethodInfo);
		NullCheck(V_0);
		int32_t L_2 = GC_CREATEROLE_RET_get_Profession_m17353(V_0, /*hidden argument*/&GC_CREATEROLE_RET_get_Profession_m17353_MethodInfo);
		NullCheck(V_0);
		String_t* L_3 = GC_CREATEROLE_RET_get_PlayerName_m17361(V_0, /*hidden argument*/&GC_CREATEROLE_RET_get_PlayerName_m17361_MethodInfo);
		PlayerRoleData_t4913 * L_4 = (PlayerRoleData_t4913 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PlayerRoleData_t4913_il2cpp_TypeInfo));
		PlayerRoleData__ctor_m34811(L_4, L_1, L_2, L_3, 1, (-1), (-1), (-1), /*hidden argument*/&PlayerRoleData__ctor_m34811_MethodInfo);
		NullCheck((((LoginData_t4919_StaticFields*)InitializedTypeInfo(&LoginData_t4919_il2cpp_TypeInfo)->static_fields)->___loginRoleList));
		VirtActionInvoker1< PlayerRoleData_t4913 * >::Invoke(&List_1_Add_m40325_MethodInfo, (((LoginData_t4919_StaticFields*)InitializedTypeInfo(&LoginData_t4919_il2cpp_TypeInfo)->static_fields)->___loginRoleList), L_4);
		NullCheck(V_0);
		String_t* L_5 = GC_CREATEROLE_RET_get_PlayerName_m17361(V_0, /*hidden argument*/&GC_CREATEROLE_RET_get_PlayerName_m17361_MethodInfo);
		PlatformHelper_OnRoleCreate_m32307(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral388, /*hidden argument*/&PlatformHelper_OnRoleCreate_m32307_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UserConfigData_t4982_il2cpp_TypeInfo));
		UserConfigData_AddRoleInfo_m35670(NULL /*static, unused*/, /*hidden argument*/&UserConfigData_AddRoleInfo_m35670_MethodInfo);
		NullCheck(V_0);
		uint64_t L_6 = GC_CREATEROLE_RET_get_PlayerGuid_m17357(V_0, /*hidden argument*/&GC_CREATEROLE_RET_get_PlayerGuid_m17357_MethodInfo);
		LoginData_UpdateLoginRoleInfo_m34828(NULL /*static, unused*/, L_6, /*hidden argument*/&LoginData_UpdateLoginRoleInfo_m34828_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_7 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_7);
		PlayerEnterSceneCache_t4949 * L_8 = PlayerData_get_EnterSceneCache_m35081(L_7, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(V_0);
		int32_t L_9 = GC_CREATEROLE_RET_get_Profession_m17353(V_0, /*hidden argument*/&GC_CREATEROLE_RET_get_Profession_m17353_MethodInfo);
		NullCheck(L_8);
		PlayerEnterSceneCache_set_Profession_m35406(L_8, L_9, /*hidden argument*/&PlayerEnterSceneCache_set_Profession_m35406_MethodInfo);
		NullCheck(V_0);
		int32_t L_10 = GC_CREATEROLE_RET_get_Profession_m17353(V_0, /*hidden argument*/&GC_CREATEROLE_RET_get_Profession_m17353_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utils_t1170_il2cpp_TypeInfo));
		Utils_SetPVXSkillIndexByProfession_m7068(NULL /*static, unused*/, L_10, /*hidden argument*/&Utils_SetPVXSkillIndexByProfession_m7068_MethodInfo);
		goto IL_00a3;
	}

IL_0089:
	{
		if (!(((GC_CREATEROLE_RETHandler_t2583_StaticFields*)InitializedTypeInfo(&GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo)->static_fields)->___retCreateRoleFail))
		{
			goto IL_00a3;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_11 = GC_CREATEROLE_RET_get_Result_m17349(V_0, /*hidden argument*/&GC_CREATEROLE_RET_get_Result_m17349_MethodInfo);
		NullCheck((((GC_CREATEROLE_RETHandler_t2583_StaticFields*)InitializedTypeInfo(&GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo)->static_fields)->___retCreateRoleFail));
		VirtActionInvoker1< int32_t >::Invoke(&CreateRoltFailRet_Invoke_m15489_MethodInfo, (((GC_CREATEROLE_RETHandler_t2583_StaticFields*)InitializedTypeInfo(&GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo)->static_fields)->___retCreateRoleFail), L_11);
	}

IL_00a3:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CREATEROLE_RETHandler
extern Il2CppType CreateRoltFailRet_t2582_0_0_22;
FieldInfo GC_CREATEROLE_RETHandler_t2583____retCreateRoleFail_FieldInfo = 
{
	"retCreateRoleFail"/* name */
	, &CreateRoltFailRet_t2582_0_0_22/* type */
	, &GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo/* parent */
	, offsetof(GC_CREATEROLE_RETHandler_t2583_StaticFields, ___retCreateRoleFail)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* GC_CREATEROLE_RETHandler_t2583_FieldInfos[] =
{
	&GC_CREATEROLE_RETHandler_t2583____retCreateRoleFail_FieldInfo,
	NULL
};
extern TypeInfo GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATEROLE_RETHandler::.ctor()
MethodInfo GC_CREATEROLE_RETHandler__ctor_m15492_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CREATEROLE_RETHandler__ctor_m15492/* method */
	, &GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo/* declaring_type */
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
	, 8964/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CREATEROLE_RETHandler_t2583_GC_CREATEROLE_RETHandler_Execute_m15493_ParameterInfos[] = 
{
	{"ipacket", 0, 134222397, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CREATEROLE_RETHandler::Execute(PacketDistributed)
MethodInfo GC_CREATEROLE_RETHandler_Execute_m15493_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CREATEROLE_RETHandler_Execute_m15493/* method */
	, &GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CREATEROLE_RETHandler_t2583_GC_CREATEROLE_RETHandler_Execute_m15493_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8965/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CREATEROLE_RETHandler_t2583_MethodInfos[] =
{
	&GC_CREATEROLE_RETHandler__ctor_m15492_MethodInfo,
	&GC_CREATEROLE_RETHandler_Execute_m15493_MethodInfo,
	NULL
};
extern TypeInfo CreateRoltFailRet_t2582_il2cpp_TypeInfo;
static TypeInfo* GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo__nestedTypes[2] =
{
	&CreateRoltFailRet_t2582_il2cpp_TypeInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CREATEROLE_RETHandler_Execute_m15493_MethodInfo;
static MethodInfo* GC_CREATEROLE_RETHandler_t2583_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CREATEROLE_RETHandler_Execute_m15493_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CREATEROLE_RETHandler_t2583_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CREATEROLE_RETHandler_t2583_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CREATEROLE_RETHandler_t2583_0_0_0;
extern Il2CppType GC_CREATEROLE_RETHandler_t2583_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CREATEROLE_RETHandler_t2583;
extern TypeInfo GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo;
TypeInfo GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CREATEROLE_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CREATEROLE_RETHandler_t2583_MethodInfos/* methods */
	, NULL/* properties */
	, GC_CREATEROLE_RETHandler_t2583_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo/* element_class */
	, GC_CREATEROLE_RETHandler_t2583_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CREATEROLE_RETHandler_t2583_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CREATEROLE_RETHandler_t2583_il2cpp_TypeInfo/* cast_class */
	, &GC_CREATEROLE_RETHandler_t2583_0_0_0/* byval_arg */
	, &GC_CREATEROLE_RETHandler_t2583_1_0_0/* this_arg */
	, GC_CREATEROLE_RETHandler_t2583_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CREATEROLE_RETHandler_t2583)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(GC_CREATEROLE_RETHandler_t2583_StaticFields)/* static_fields_size */
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
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// SPacket.SocketInstance.GC_CREATE_FELLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_FELLOWHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CREATE_FELLOWHandler_t2584_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CREATE_FELLOWHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_FELLOWHanMethodDeclarations.h"

// GC_CREATE_FELLOW
#include "AssemblyU2DCSharp_GC_CREATE_FELLOW.h"
// Obj_Init_Data
#include "AssemblyU2DCSharp_Obj_Init_Data.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
extern TypeInfo GC_CREATE_FELLOW_t3060_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo Obj_Init_Data_t4391_il2cpp_TypeInfo;
extern TypeInfo List_1_t90_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
// GC_CREATE_FELLOW
#include "AssemblyU2DCSharp_GC_CREATE_FELLOWMethodDeclarations.h"
// Obj_Init_Data
#include "AssemblyU2DCSharp_Obj_Init_DataMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_ServerId_m18979_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_IsObjExist_m31351_MethodInfo;
extern MethodInfo ObjManager_RemoveObj_m31352_MethodInfo;
extern MethodInfo Obj_Init_Data__ctor_m31291_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_PosX_m18999_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_PosZ_m19003_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_DataId_m18991_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_Curforce_m19007_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_Name_m19011_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_Guid_m18995_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_Ownerobjid_m19019_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_Movespeed_m19023_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_Facedir_m19015_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_StealthLev_m19027_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_Quality_m19031_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_HasBindparent_m19034_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_Bindparent_m19035_MethodInfo;
extern MethodInfo List_1_Clear_m4325_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_get_bindchildrenCount_m19039_MethodInfo;
extern MethodInfo GC_CREATE_FELLOW_GetBindchildren_m19040_MethodInfo;
extern MethodInfo List_1_Add_m4326_MethodInfo;
extern MethodInfo ObjManager_NewCharacterObj_m31345_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CREATE_FELLOWHandler::.ctor()
extern MethodInfo GC_CREATE_FELLOWHandler__ctor_m15494_MethodInfo;
 void GC_CREATE_FELLOWHandler__ctor_m15494 (GC_CREATE_FELLOWHandler_t2584 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CREATE_FELLOWHandler::Execute(PacketDistributed)
extern MethodInfo GC_CREATE_FELLOWHandler_Execute_m15495_MethodInfo;
 uint32_t GC_CREATE_FELLOWHandler_Execute_m15495 (GC_CREATE_FELLOWHandler_t2584 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CREATE_FELLOW_t3060 * V_0 = {0};
	Obj_Init_Data_t4391 * V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = ((GC_CREATE_FELLOW_t3060 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CREATE_FELLOW_t3060_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_CREATE_FELLOW_get_ServerId_m18979(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_ServerId_m18979_MethodInfo);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		return 2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_1 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_2 = GC_CREATE_FELLOW_get_ServerId_m18979(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_ServerId_m18979_MethodInfo);
		NullCheck(L_1);
		bool L_3 = ObjManager_IsObjExist_m31351(L_1, L_2, /*hidden argument*/&ObjManager_IsObjExist_m31351_MethodInfo);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_4 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_5 = GC_CREATE_FELLOW_get_ServerId_m18979(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_ServerId_m18979_MethodInfo);
		NullCheck(L_4);
		ObjManager_RemoveObj_m31352(L_4, L_5, /*hidden argument*/&ObjManager_RemoveObj_m31352_MethodInfo);
	}

IL_0043:
	{
		Obj_Init_Data_t4391 * L_6 = (Obj_Init_Data_t4391 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Obj_Init_Data_t4391_il2cpp_TypeInfo));
		Obj_Init_Data__ctor_m31291(L_6, /*hidden argument*/&Obj_Init_Data__ctor_m31291_MethodInfo);
		V_1 = L_6;
		NullCheck(V_0);
		int32_t L_7 = GC_CREATE_FELLOW_get_ServerId_m18979(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_ServerId_m18979_MethodInfo);
		NullCheck(V_1);
		V_1->___m_ServerID = L_7;
		NullCheck(V_0);
		int32_t L_8 = GC_CREATE_FELLOW_get_PosX_m18999(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_PosX_m18999_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fX = ((float)((((float)L_8))/(100.0f)));
		NullCheck(V_0);
		int32_t L_9 = GC_CREATE_FELLOW_get_PosZ_m19003(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_PosZ_m19003_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fZ = ((float)((((float)L_9))/(100.0f)));
		NullCheck(V_0);
		int32_t L_10 = GC_CREATE_FELLOW_get_DataId_m18991(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_DataId_m18991_MethodInfo);
		NullCheck(V_1);
		V_1->___m_RoleBaseID = L_10;
		NullCheck(V_0);
		int32_t L_11 = GC_CREATE_FELLOW_get_Curforce_m19007(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_Curforce_m19007_MethodInfo);
		NullCheck(V_1);
		V_1->___m_Force = L_11;
		NullCheck(V_0);
		String_t* L_12 = GC_CREATE_FELLOW_get_Name_m19011(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_Name_m19011_MethodInfo);
		NullCheck(V_1);
		V_1->___m_StrName = L_12;
		NullCheck(V_0);
		uint64_t L_13 = GC_CREATE_FELLOW_get_Guid_m18995(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_Guid_m18995_MethodInfo);
		NullCheck(V_1);
		V_1->___m_Guid = L_13;
		NullCheck(V_0);
		int32_t L_14 = GC_CREATE_FELLOW_get_Ownerobjid_m19019(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_Ownerobjid_m19019_MethodInfo);
		NullCheck(V_1);
		V_1->___m_OwnerObjId = L_14;
		NullCheck(V_0);
		int32_t L_15 = GC_CREATE_FELLOW_get_Movespeed_m19023(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_Movespeed_m19023_MethodInfo);
		NullCheck(V_1);
		V_1->___m_MoveSpeed = ((float)((((float)L_15))/(100.0f)));
		NullCheck(V_0);
		int32_t L_16 = GC_CREATE_FELLOW_get_Facedir_m19015(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_Facedir_m19015_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fDir = ((float)((((float)L_16))/(100.0f)));
		NullCheck(V_0);
		int32_t L_17 = GC_CREATE_FELLOW_get_StealthLev_m19027(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_StealthLev_m19027_MethodInfo);
		NullCheck(V_1);
		V_1->___m_StealthLev = L_17;
		NullCheck(V_0);
		int32_t L_18 = GC_CREATE_FELLOW_get_Quality_m19031(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_Quality_m19031_MethodInfo);
		NullCheck(V_1);
		V_1->___m_FellowQuality = L_18;
		NullCheck(V_0);
		bool L_19 = GC_CREATE_FELLOW_get_HasBindparent_m19034(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_HasBindparent_m19034_MethodInfo);
		if (!L_19)
		{
			goto IL_010c;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_20 = GC_CREATE_FELLOW_get_Bindparent_m19035(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_Bindparent_m19035_MethodInfo);
		NullCheck(V_1);
		V_1->___m_BindParent = L_20;
	}

IL_010c:
	{
		NullCheck(V_1);
		List_1_t90 * L_21 = (V_1->___m_BindChildren);
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(&List_1_Clear_m4325_MethodInfo, L_21);
		V_2 = 0;
		goto IL_0151;
	}

IL_011e:
	{
		NullCheck(V_0);
		int32_t L_22 = GC_CREATE_FELLOW_get_bindchildrenCount_m19039(V_0, /*hidden argument*/&GC_CREATE_FELLOW_get_bindchildrenCount_m19039_MethodInfo);
		if ((((int32_t)V_2) >= ((int32_t)L_22)))
		{
			goto IL_0141;
		}
	}
	{
		NullCheck(V_1);
		List_1_t90 * L_23 = (V_1->___m_BindChildren);
		NullCheck(V_0);
		int32_t L_24 = GC_CREATE_FELLOW_GetBindchildren_m19040(V_0, V_2, /*hidden argument*/&GC_CREATE_FELLOW_GetBindchildren_m19040_MethodInfo);
		NullCheck(L_23);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_23, L_24);
		goto IL_014d;
	}

IL_0141:
	{
		NullCheck(V_1);
		List_1_t90 * L_25 = (V_1->___m_BindChildren);
		NullCheck(L_25);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_25, (-1));
	}

IL_014d:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_0151:
	{
		if ((((int32_t)V_2) < ((int32_t)4)))
		{
			goto IL_011e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_26 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_26);
		ObjManager_NewCharacterObj_m31345(L_26, 3, V_1, /*hidden argument*/&ObjManager_NewCharacterObj_m31345_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CREATE_FELLOWHandler
extern TypeInfo GC_CREATE_FELLOWHandler_t2584_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATE_FELLOWHandler::.ctor()
MethodInfo GC_CREATE_FELLOWHandler__ctor_m15494_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CREATE_FELLOWHandler__ctor_m15494/* method */
	, &GC_CREATE_FELLOWHandler_t2584_il2cpp_TypeInfo/* declaring_type */
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
	, 8970/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CREATE_FELLOWHandler_t2584_GC_CREATE_FELLOWHandler_Execute_m15495_ParameterInfos[] = 
{
	{"ipacket", 0, 134222405, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CREATE_FELLOWHandler_t2584_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CREATE_FELLOWHandler::Execute(PacketDistributed)
MethodInfo GC_CREATE_FELLOWHandler_Execute_m15495_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CREATE_FELLOWHandler_Execute_m15495/* method */
	, &GC_CREATE_FELLOWHandler_t2584_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CREATE_FELLOWHandler_t2584_GC_CREATE_FELLOWHandler_Execute_m15495_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8971/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CREATE_FELLOWHandler_t2584_MethodInfos[] =
{
	&GC_CREATE_FELLOWHandler__ctor_m15494_MethodInfo,
	&GC_CREATE_FELLOWHandler_Execute_m15495_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CREATE_FELLOWHandler_Execute_m15495_MethodInfo;
static MethodInfo* GC_CREATE_FELLOWHandler_t2584_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CREATE_FELLOWHandler_Execute_m15495_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CREATE_FELLOWHandler_t2584_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CREATE_FELLOWHandler_t2584_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CREATE_FELLOWHandler_t2584_0_0_0;
extern Il2CppType GC_CREATE_FELLOWHandler_t2584_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CREATE_FELLOWHandler_t2584;
extern TypeInfo GC_CREATE_FELLOWHandler_t2584_il2cpp_TypeInfo;
TypeInfo GC_CREATE_FELLOWHandler_t2584_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CREATE_FELLOWHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CREATE_FELLOWHandler_t2584_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CREATE_FELLOWHandler_t2584_il2cpp_TypeInfo/* element_class */
	, GC_CREATE_FELLOWHandler_t2584_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CREATE_FELLOWHandler_t2584_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CREATE_FELLOWHandler_t2584_il2cpp_TypeInfo/* cast_class */
	, &GC_CREATE_FELLOWHandler_t2584_0_0_0/* byval_arg */
	, &GC_CREATE_FELLOWHandler_t2584_1_0_0/* this_arg */
	, GC_CREATE_FELLOWHandler_t2584_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CREATE_FELLOWHandler_t2584)/* instance_size */
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
// SPacket.SocketInstance.GC_CREATE_NPCHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_NPCHandle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CREATE_NPCHandler_t2585_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CREATE_NPCHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_NPCHandleMethodDeclarations.h"

// GC_CREATE_NPC
#include "AssemblyU2DCSharp_GC_CREATE_NPC.h"
extern TypeInfo GC_CREATE_NPC_t3044_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo Obj_Init_Data_t4391_il2cpp_TypeInfo;
extern TypeInfo List_1_t90_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
// GC_CREATE_NPC
#include "AssemblyU2DCSharp_GC_CREATE_NPCMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_ServerId_m18612_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_IsObjExist_m31351_MethodInfo;
extern MethodInfo ObjManager_RemoveObj_m31352_MethodInfo;
extern MethodInfo Obj_Init_Data__ctor_m31291_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_PosX_m18628_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_PosZ_m18632_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_DataId_m18624_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_Curforce_m18636_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_Name_m18640_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_IsDie_m18648_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_Movespeed_m18652_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_Facedir_m18644_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_StealthLeve_m18668_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_IsBorn_m18672_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_HasModelVisualID_m18655_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_ModelVisualID_m18656_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_HasWeaponDataID_m18659_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_WeaponDataID_m18660_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_HasProfession_m18663_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_Profession_m18664_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_HasBindparent_m18675_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_Bindparent_m18676_MethodInfo;
extern MethodInfo List_1_Clear_m4325_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_bindchildrenCount_m18680_MethodInfo;
extern MethodInfo GC_CREATE_NPC_GetBindchildren_m18681_MethodInfo;
extern MethodInfo List_1_Add_m4326_MethodInfo;
extern MethodInfo GC_CREATE_NPC_get_SceneNpcId_m18684_MethodInfo;
extern MethodInfo ObjManager_NewCharacterObj_m31345_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CREATE_NPCHandler::.ctor()
extern MethodInfo GC_CREATE_NPCHandler__ctor_m15496_MethodInfo;
 void GC_CREATE_NPCHandler__ctor_m15496 (GC_CREATE_NPCHandler_t2585 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CREATE_NPCHandler::Execute(PacketDistributed)
extern MethodInfo GC_CREATE_NPCHandler_Execute_m15497_MethodInfo;
 uint32_t GC_CREATE_NPCHandler_Execute_m15497 (GC_CREATE_NPCHandler_t2585 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CREATE_NPC_t3044 * V_0 = {0};
	Obj_Init_Data_t4391 * V_1 = {0};
	int32_t V_2 = 0;
	Obj_Init_Data_t4391 * G_B8_0 = {0};
	Obj_Init_Data_t4391 * G_B7_0 = {0};
	int32_t G_B9_0 = 0;
	Obj_Init_Data_t4391 * G_B9_1 = {0};
	Obj_Init_Data_t4391 * G_B11_0 = {0};
	Obj_Init_Data_t4391 * G_B10_0 = {0};
	int32_t G_B12_0 = 0;
	Obj_Init_Data_t4391 * G_B12_1 = {0};
	{
		V_0 = ((GC_CREATE_NPC_t3044 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CREATE_NPC_t3044_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_CREATE_NPC_get_ServerId_m18612(V_0, /*hidden argument*/&GC_CREATE_NPC_get_ServerId_m18612_MethodInfo);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		return 2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_1 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_2 = GC_CREATE_NPC_get_ServerId_m18612(V_0, /*hidden argument*/&GC_CREATE_NPC_get_ServerId_m18612_MethodInfo);
		NullCheck(L_1);
		bool L_3 = ObjManager_IsObjExist_m31351(L_1, L_2, /*hidden argument*/&ObjManager_IsObjExist_m31351_MethodInfo);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_4 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_5 = GC_CREATE_NPC_get_ServerId_m18612(V_0, /*hidden argument*/&GC_CREATE_NPC_get_ServerId_m18612_MethodInfo);
		NullCheck(L_4);
		ObjManager_RemoveObj_m31352(L_4, L_5, /*hidden argument*/&ObjManager_RemoveObj_m31352_MethodInfo);
	}

IL_0043:
	{
		Obj_Init_Data_t4391 * L_6 = (Obj_Init_Data_t4391 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Obj_Init_Data_t4391_il2cpp_TypeInfo));
		Obj_Init_Data__ctor_m31291(L_6, /*hidden argument*/&Obj_Init_Data__ctor_m31291_MethodInfo);
		V_1 = L_6;
		NullCheck(V_0);
		int32_t L_7 = GC_CREATE_NPC_get_ServerId_m18612(V_0, /*hidden argument*/&GC_CREATE_NPC_get_ServerId_m18612_MethodInfo);
		NullCheck(V_1);
		V_1->___m_ServerID = L_7;
		NullCheck(V_0);
		int32_t L_8 = GC_CREATE_NPC_get_PosX_m18628(V_0, /*hidden argument*/&GC_CREATE_NPC_get_PosX_m18628_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fX = ((float)((((float)L_8))/(100.0f)));
		NullCheck(V_0);
		int32_t L_9 = GC_CREATE_NPC_get_PosZ_m18632(V_0, /*hidden argument*/&GC_CREATE_NPC_get_PosZ_m18632_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fZ = ((float)((((float)L_9))/(100.0f)));
		NullCheck(V_0);
		int32_t L_10 = GC_CREATE_NPC_get_DataId_m18624(V_0, /*hidden argument*/&GC_CREATE_NPC_get_DataId_m18624_MethodInfo);
		NullCheck(V_1);
		V_1->___m_RoleBaseID = L_10;
		NullCheck(V_0);
		int32_t L_11 = GC_CREATE_NPC_get_Curforce_m18636(V_0, /*hidden argument*/&GC_CREATE_NPC_get_Curforce_m18636_MethodInfo);
		NullCheck(V_1);
		V_1->___m_Force = L_11;
		NullCheck(V_0);
		String_t* L_12 = GC_CREATE_NPC_get_Name_m18640(V_0, /*hidden argument*/&GC_CREATE_NPC_get_Name_m18640_MethodInfo);
		NullCheck(V_1);
		V_1->___m_StrName = L_12;
		NullCheck(V_0);
		int32_t L_13 = GC_CREATE_NPC_get_IsDie_m18648(V_0, /*hidden argument*/&GC_CREATE_NPC_get_IsDie_m18648_MethodInfo);
		G_B7_0 = V_1;
		if ((((uint32_t)L_13) != ((uint32_t)1)))
		{
			G_B8_0 = V_1;
			goto IL_00b2;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_00b3;
	}

IL_00b2:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_00b3:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_IsDie = G_B9_0;
		NullCheck(V_0);
		int32_t L_14 = GC_CREATE_NPC_get_Movespeed_m18652(V_0, /*hidden argument*/&GC_CREATE_NPC_get_Movespeed_m18652_MethodInfo);
		NullCheck(V_1);
		V_1->___m_MoveSpeed = ((float)((((float)L_14))/(100.0f)));
		NullCheck(V_0);
		int32_t L_15 = GC_CREATE_NPC_get_Facedir_m18644(V_0, /*hidden argument*/&GC_CREATE_NPC_get_Facedir_m18644_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fDir = ((float)((((float)L_15))/(100.0f)));
		NullCheck(V_0);
		int32_t L_16 = GC_CREATE_NPC_get_StealthLeve_m18668(V_0, /*hidden argument*/&GC_CREATE_NPC_get_StealthLeve_m18668_MethodInfo);
		NullCheck(V_1);
		V_1->___m_StealthLev = L_16;
		NullCheck(V_0);
		int32_t L_17 = GC_CREATE_NPC_get_IsBorn_m18672(V_0, /*hidden argument*/&GC_CREATE_NPC_get_IsBorn_m18672_MethodInfo);
		G_B10_0 = V_1;
		if ((((uint32_t)L_17) != ((uint32_t)1)))
		{
			G_B11_0 = V_1;
			goto IL_00fd;
		}
	}
	{
		G_B12_0 = 1;
		G_B12_1 = G_B10_0;
		goto IL_00fe;
	}

IL_00fd:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_00fe:
	{
		NullCheck(G_B12_1);
		G_B12_1->___m_bNpcBornCreate = G_B12_0;
		NullCheck(V_0);
		bool L_18 = GC_CREATE_NPC_get_HasModelVisualID_m18655(V_0, /*hidden argument*/&GC_CREATE_NPC_get_HasModelVisualID_m18655_MethodInfo);
		if (!L_18)
		{
			goto IL_011a;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_19 = GC_CREATE_NPC_get_ModelVisualID_m18656(V_0, /*hidden argument*/&GC_CREATE_NPC_get_ModelVisualID_m18656_MethodInfo);
		NullCheck(V_1);
		V_1->___m_ModelVisualID = L_19;
	}

IL_011a:
	{
		NullCheck(V_0);
		bool L_20 = GC_CREATE_NPC_get_HasWeaponDataID_m18659(V_0, /*hidden argument*/&GC_CREATE_NPC_get_HasWeaponDataID_m18659_MethodInfo);
		if (!L_20)
		{
			goto IL_0131;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_21 = GC_CREATE_NPC_get_WeaponDataID_m18660(V_0, /*hidden argument*/&GC_CREATE_NPC_get_WeaponDataID_m18660_MethodInfo);
		NullCheck(V_1);
		V_1->___m_WeaponDataID = L_21;
	}

IL_0131:
	{
		NullCheck(V_0);
		bool L_22 = GC_CREATE_NPC_get_HasProfession_m18663(V_0, /*hidden argument*/&GC_CREATE_NPC_get_HasProfession_m18663_MethodInfo);
		if (!L_22)
		{
			goto IL_0148;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_23 = GC_CREATE_NPC_get_Profession_m18664(V_0, /*hidden argument*/&GC_CREATE_NPC_get_Profession_m18664_MethodInfo);
		NullCheck(V_1);
		V_1->___m_nProfession = L_23;
	}

IL_0148:
	{
		NullCheck(V_0);
		bool L_24 = GC_CREATE_NPC_get_HasBindparent_m18675(V_0, /*hidden argument*/&GC_CREATE_NPC_get_HasBindparent_m18675_MethodInfo);
		if (!L_24)
		{
			goto IL_015f;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_25 = GC_CREATE_NPC_get_Bindparent_m18676(V_0, /*hidden argument*/&GC_CREATE_NPC_get_Bindparent_m18676_MethodInfo);
		NullCheck(V_1);
		V_1->___m_BindParent = L_25;
	}

IL_015f:
	{
		NullCheck(V_1);
		List_1_t90 * L_26 = (V_1->___m_BindChildren);
		NullCheck(L_26);
		VirtActionInvoker0::Invoke(&List_1_Clear_m4325_MethodInfo, L_26);
		V_2 = 0;
		goto IL_01a4;
	}

IL_0171:
	{
		NullCheck(V_0);
		int32_t L_27 = GC_CREATE_NPC_get_bindchildrenCount_m18680(V_0, /*hidden argument*/&GC_CREATE_NPC_get_bindchildrenCount_m18680_MethodInfo);
		if ((((int32_t)V_2) >= ((int32_t)L_27)))
		{
			goto IL_0194;
		}
	}
	{
		NullCheck(V_1);
		List_1_t90 * L_28 = (V_1->___m_BindChildren);
		NullCheck(V_0);
		int32_t L_29 = GC_CREATE_NPC_GetBindchildren_m18681(V_0, V_2, /*hidden argument*/&GC_CREATE_NPC_GetBindchildren_m18681_MethodInfo);
		NullCheck(L_28);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_28, L_29);
		goto IL_01a0;
	}

IL_0194:
	{
		NullCheck(V_1);
		List_1_t90 * L_30 = (V_1->___m_BindChildren);
		NullCheck(L_30);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_30, (-1));
	}

IL_01a0:
	{
		V_2 = ((int32_t)(V_2+1));
	}

IL_01a4:
	{
		if ((((int32_t)V_2) < ((int32_t)4)))
		{
			goto IL_0171;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_31 = GC_CREATE_NPC_get_SceneNpcId_m18684(V_0, /*hidden argument*/&GC_CREATE_NPC_get_SceneNpcId_m18684_MethodInfo);
		NullCheck(V_1);
		V_1->___m_SceneNpcId = L_31;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_32 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_32);
		ObjManager_NewCharacterObj_m31345(L_32, 2, V_1, /*hidden argument*/&ObjManager_NewCharacterObj_m31345_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CREATE_NPCHandler
extern TypeInfo GC_CREATE_NPCHandler_t2585_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATE_NPCHandler::.ctor()
MethodInfo GC_CREATE_NPCHandler__ctor_m15496_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CREATE_NPCHandler__ctor_m15496/* method */
	, &GC_CREATE_NPCHandler_t2585_il2cpp_TypeInfo/* declaring_type */
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
	, 8972/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CREATE_NPCHandler_t2585_GC_CREATE_NPCHandler_Execute_m15497_ParameterInfos[] = 
{
	{"ipacket", 0, 134222406, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CREATE_NPCHandler_t2585_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CREATE_NPCHandler::Execute(PacketDistributed)
MethodInfo GC_CREATE_NPCHandler_Execute_m15497_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CREATE_NPCHandler_Execute_m15497/* method */
	, &GC_CREATE_NPCHandler_t2585_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CREATE_NPCHandler_t2585_GC_CREATE_NPCHandler_Execute_m15497_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8973/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CREATE_NPCHandler_t2585_MethodInfos[] =
{
	&GC_CREATE_NPCHandler__ctor_m15496_MethodInfo,
	&GC_CREATE_NPCHandler_Execute_m15497_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CREATE_NPCHandler_Execute_m15497_MethodInfo;
static MethodInfo* GC_CREATE_NPCHandler_t2585_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CREATE_NPCHandler_Execute_m15497_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CREATE_NPCHandler_t2585_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CREATE_NPCHandler_t2585_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CREATE_NPCHandler_t2585_0_0_0;
extern Il2CppType GC_CREATE_NPCHandler_t2585_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CREATE_NPCHandler_t2585;
extern TypeInfo GC_CREATE_NPCHandler_t2585_il2cpp_TypeInfo;
TypeInfo GC_CREATE_NPCHandler_t2585_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CREATE_NPCHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CREATE_NPCHandler_t2585_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CREATE_NPCHandler_t2585_il2cpp_TypeInfo/* element_class */
	, GC_CREATE_NPCHandler_t2585_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CREATE_NPCHandler_t2585_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CREATE_NPCHandler_t2585_il2cpp_TypeInfo/* cast_class */
	, &GC_CREATE_NPCHandler_t2585_0_0_0/* byval_arg */
	, &GC_CREATE_NPCHandler_t2585_1_0_0/* this_arg */
	, GC_CREATE_NPCHandler_t2585_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CREATE_NPCHandler_t2585)/* instance_size */
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
// SPacket.SocketInstance.GC_CREATE_PLAYERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_PLAYERHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CREATE_PLAYERHandler_t2586_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CREATE_PLAYERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_PLAYERHanMethodDeclarations.h"

// GC_CREATE_PLAYER
#include "AssemblyU2DCSharp_GC_CREATE_PLAYER.h"
// GCGame.Table.Tab_RoleBaseAttr
#include "AssemblyU2DCSharpU2Dfirstpass_GCGame_Table_Tab_RoleBaseAttr.h"
// Games.MountModule.MountParam
#include "AssemblyU2DCSharp_Games_MountModule_MountParam.h"
extern TypeInfo GC_CREATE_PLAYER_t2947_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern TypeInfo PlayerData_t2179_il2cpp_TypeInfo;
extern TypeInfo TableManager_t332_il2cpp_TypeInfo;
extern TypeInfo List_1_t90_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo Obj_Init_Data_t4391_il2cpp_TypeInfo;
// GC_CREATE_PLAYER
#include "AssemblyU2DCSharp_GC_CREATE_PLAYERMethodDeclarations.h"
// Games.MountModule.MountParam
#include "AssemblyU2DCSharp_Games_MountModule_MountParamMethodDeclarations.h"
// GCGame.Table.Tab_RoleBaseAttr
#include "AssemblyU2DCSharpU2Dfirstpass_GCGame_Table_Tab_RoleBaseAttrMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_EnterSceneCache_m35081_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_get_EnterSceneServerID_m35397_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_ServerId_m16544_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_get_EnterSceneSceneID_m35399_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_SceneClass_m16556_MethodInfo;
extern MethodInfo PlayerData_get_MainPlayerBaseAttr_m35077_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_DataId_m16560_MethodInfo;
extern MethodInfo BaseAttr_set_RoleBaseID_m32679_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_Name_m16576_MethodInfo;
extern MethodInfo BaseAttr_set_RoleName_m32673_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_Curforce_m16572_MethodInfo;
extern MethodInfo BaseAttr_set_Force_m32681_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_IsDie_m16596_MethodInfo;
extern MethodInfo BaseAttr_set_Die_m32685_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_set_EnterSceneRoleBaseID_m35402_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_Guid_m16548_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_set_Guid_m35408_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_CurProfession_m16580_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_set_Profession_m35406_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_PKModle_m16604_MethodInfo;
extern MethodInfo PlayerData_set_PkModle_m35052_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_MountID_m16608_MethodInfo;
extern MethodInfo MountParam_set_MountID_m34077_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_MoveSpeed_m16612_MethodInfo;
extern MethodInfo BaseAttr_set_MoveSpeed_m32683_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_StealthLev_m16632_MethodInfo;
extern MethodInfo PlayerData_set_StealthLev_m35062_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_HasReliveTime_m16599_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_ReliveTime_m16600_MethodInfo;
extern MethodInfo PlayerData_set_ReliveEntryTime_m35183_MethodInfo;
extern MethodInfo TableManager_GetRoleBaseAttrByID_m1061_MethodInfo;
extern MethodInfo Tab_RoleBaseAttr_get_CharModelID_m3016_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_set_EnterSceneCharModelID_m35404_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_ModelVisualID_m16616_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_set_ModelVisualID_m35414_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_WeaponDataID_m16620_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_set_WeaponDataID_m35412_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_WeaponEffectGem_m16624_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_set_WeaponEffectGem_m35416_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_HasPaoshangState_m16659_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_PaoshangState_m16660_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_set_PaoShangState_m35418_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_HasVipCost_m16635_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_VipCost_m16636_MethodInfo;
extern MethodInfo PlayerData_set_VipCost_m35068_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_HasCombatValue_m16643_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_CombatValue_m16644_MethodInfo;
extern MethodInfo PlayerData_set_PoolCombatValue_m35070_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_HasBindparent_m16647_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_Bindparent_m16648_MethodInfo;
extern MethodInfo PlayerData_set_MainBindParent_m35074_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_HasLightSkillLevel_m16663_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_LightSkillLevel_m16664_MethodInfo;
extern MethodInfo BaseAttr_set_LightSkillLevel_m32695_MethodInfo;
extern MethodInfo PlayerData_get_MainBindChildren_m35075_MethodInfo;
extern MethodInfo List_1_Clear_m4325_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_bindchildrenCount_m16652_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_GetBindchildren_m16653_MethodInfo;
extern MethodInfo List_1_Add_m4326_MethodInfo;
extern MethodInfo GameManager_get_RunningScene_m14627_MethodInfo;
extern MethodInfo PlayerEnterSceneCache_get_EnterSceneRoleBaseID_m35401_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_CreateMainPlayer_m31325_MethodInfo;
extern MethodInfo Obj_Init_Data__ctor_m31291_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_PosX_m16564_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_PosZ_m16568_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_Titlename_m16588_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_CurTitleID_m16628_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_IsInPkList_m16592_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_Facedir_m16584_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_GuildGuid_m16640_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_IsEnemy2Self_m16656_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_HasFollowState_m16667_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_FollowState_m16668_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_ChangeState_m16672_MethodInfo;
extern MethodInfo GC_CREATE_PLAYER_get_FlyWingId_m16676_MethodInfo;
extern MethodInfo ObjManager_NewCharacterObj_m31345_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CREATE_PLAYERHandler::.ctor()
extern MethodInfo GC_CREATE_PLAYERHandler__ctor_m15498_MethodInfo;
 void GC_CREATE_PLAYERHandler__ctor_m15498 (GC_CREATE_PLAYERHandler_t2586 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CREATE_PLAYERHandler::Execute(PacketDistributed)
extern MethodInfo GC_CREATE_PLAYERHandler_Execute_m15499_MethodInfo;
 uint32_t GC_CREATE_PLAYERHandler_Execute_m15499 (GC_CREATE_PLAYERHandler_t2586 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CREATE_PLAYER_t2947 * V_0 = {0};
	PlayerData_t2179 * V_1 = {0};
	Tab_RoleBaseAttr_t615 * V_2 = {0};
	int32_t V_3 = 0;
	Obj_Init_Data_t4391 * V_4 = {0};
	Tab_RoleBaseAttr_t615 * V_5 = {0};
	int32_t V_6 = 0;
	BaseAttr_t4471 * G_B6_0 = {0};
	BaseAttr_t4471 * G_B5_0 = {0};
	int32_t G_B7_0 = 0;
	BaseAttr_t4471 * G_B7_1 = {0};
	Obj_Init_Data_t4391 * G_B40_0 = {0};
	Obj_Init_Data_t4391 * G_B39_0 = {0};
	int32_t G_B41_0 = 0;
	Obj_Init_Data_t4391 * G_B41_1 = {0};
	Obj_Init_Data_t4391 * G_B43_0 = {0};
	Obj_Init_Data_t4391 * G_B42_0 = {0};
	int32_t G_B44_0 = 0;
	Obj_Init_Data_t4391 * G_B44_1 = {0};
	Obj_Init_Data_t4391 * G_B61_0 = {0};
	Obj_Init_Data_t4391 * G_B60_0 = {0};
	int32_t G_B62_0 = 0;
	Obj_Init_Data_t4391 * G_B62_1 = {0};
	{
		V_0 = ((GC_CREATE_PLAYER_t2947 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CREATE_PLAYER_t2947_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		V_1 = L_0;
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_1 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = PlayerEnterSceneCache_get_EnterSceneServerID_m35397(L_1, /*hidden argument*/&PlayerEnterSceneCache_get_EnterSceneServerID_m35397_MethodInfo);
		NullCheck(V_0);
		int32_t L_3 = GC_CREATE_PLAYER_get_ServerId_m16544(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_ServerId_m16544_MethodInfo);
		if ((((uint32_t)L_2) != ((uint32_t)L_3)))
		{
			goto IL_02c4;
		}
	}
	{
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_4 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = PlayerEnterSceneCache_get_EnterSceneSceneID_m35399(L_4, /*hidden argument*/&PlayerEnterSceneCache_get_EnterSceneSceneID_m35399_MethodInfo);
		NullCheck(V_0);
		int32_t L_6 = GC_CREATE_PLAYER_get_SceneClass_m16556(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_SceneClass_m16556_MethodInfo);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_02c4;
		}
	}
	{
		NullCheck(V_1);
		BaseAttr_t4471 * L_7 = PlayerData_get_MainPlayerBaseAttr_m35077(V_1, /*hidden argument*/&PlayerData_get_MainPlayerBaseAttr_m35077_MethodInfo);
		NullCheck(V_0);
		int32_t L_8 = GC_CREATE_PLAYER_get_DataId_m16560(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_DataId_m16560_MethodInfo);
		NullCheck(L_7);
		BaseAttr_set_RoleBaseID_m32679(L_7, L_8, /*hidden argument*/&BaseAttr_set_RoleBaseID_m32679_MethodInfo);
		NullCheck(V_1);
		BaseAttr_t4471 * L_9 = PlayerData_get_MainPlayerBaseAttr_m35077(V_1, /*hidden argument*/&PlayerData_get_MainPlayerBaseAttr_m35077_MethodInfo);
		NullCheck(V_0);
		String_t* L_10 = GC_CREATE_PLAYER_get_Name_m16576(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Name_m16576_MethodInfo);
		NullCheck(L_9);
		BaseAttr_set_RoleName_m32673(L_9, L_10, /*hidden argument*/&BaseAttr_set_RoleName_m32673_MethodInfo);
		NullCheck(V_1);
		BaseAttr_t4471 * L_11 = PlayerData_get_MainPlayerBaseAttr_m35077(V_1, /*hidden argument*/&PlayerData_get_MainPlayerBaseAttr_m35077_MethodInfo);
		NullCheck(V_0);
		int32_t L_12 = GC_CREATE_PLAYER_get_Curforce_m16572(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Curforce_m16572_MethodInfo);
		NullCheck(L_11);
		BaseAttr_set_Force_m32681(L_11, L_12, /*hidden argument*/&BaseAttr_set_Force_m32681_MethodInfo);
		NullCheck(V_1);
		BaseAttr_t4471 * L_13 = PlayerData_get_MainPlayerBaseAttr_m35077(V_1, /*hidden argument*/&PlayerData_get_MainPlayerBaseAttr_m35077_MethodInfo);
		NullCheck(V_0);
		int32_t L_14 = GC_CREATE_PLAYER_get_IsDie_m16596(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_IsDie_m16596_MethodInfo);
		G_B5_0 = L_13;
		if ((((uint32_t)L_14) != ((uint32_t)1)))
		{
			G_B6_0 = L_13;
			goto IL_0091;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		goto IL_0092;
	}

IL_0091:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_0092:
	{
		NullCheck(G_B7_1);
		BaseAttr_set_Die_m32685(G_B7_1, G_B7_0, /*hidden argument*/&BaseAttr_set_Die_m32685_MethodInfo);
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_15 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(V_0);
		int32_t L_16 = GC_CREATE_PLAYER_get_DataId_m16560(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_DataId_m16560_MethodInfo);
		NullCheck(L_15);
		PlayerEnterSceneCache_set_EnterSceneRoleBaseID_m35402(L_15, L_16, /*hidden argument*/&PlayerEnterSceneCache_set_EnterSceneRoleBaseID_m35402_MethodInfo);
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_17 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(V_0);
		uint64_t L_18 = GC_CREATE_PLAYER_get_Guid_m16548(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Guid_m16548_MethodInfo);
		NullCheck(L_17);
		PlayerEnterSceneCache_set_Guid_m35408(L_17, L_18, /*hidden argument*/&PlayerEnterSceneCache_set_Guid_m35408_MethodInfo);
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_19 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(V_0);
		int32_t L_20 = GC_CREATE_PLAYER_get_CurProfession_m16580(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_CurProfession_m16580_MethodInfo);
		NullCheck(L_19);
		PlayerEnterSceneCache_set_Profession_m35406(L_19, L_20, /*hidden argument*/&PlayerEnterSceneCache_set_Profession_m35406_MethodInfo);
		NullCheck(V_0);
		int32_t L_21 = GC_CREATE_PLAYER_get_PKModle_m16604(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_PKModle_m16604_MethodInfo);
		NullCheck(V_1);
		PlayerData_set_PkModle_m35052(V_1, L_21, /*hidden argument*/&PlayerData_set_PkModle_m35052_MethodInfo);
		NullCheck(V_1);
		MountParam_t4800 * L_22 = &(V_1->___m_objMountParam);
		NullCheck(V_0);
		int32_t L_23 = GC_CREATE_PLAYER_get_MountID_m16608(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_MountID_m16608_MethodInfo);
		MountParam_set_MountID_m34077(L_22, L_23, /*hidden argument*/&MountParam_set_MountID_m34077_MethodInfo);
		NullCheck(V_1);
		BaseAttr_t4471 * L_24 = PlayerData_get_MainPlayerBaseAttr_m35077(V_1, /*hidden argument*/&PlayerData_get_MainPlayerBaseAttr_m35077_MethodInfo);
		NullCheck(V_0);
		int32_t L_25 = GC_CREATE_PLAYER_get_MoveSpeed_m16612(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_MoveSpeed_m16612_MethodInfo);
		NullCheck(L_24);
		BaseAttr_set_MoveSpeed_m32683(L_24, (((float)((int32_t)(L_25/((int32_t)100))))), /*hidden argument*/&BaseAttr_set_MoveSpeed_m32683_MethodInfo);
		NullCheck(V_0);
		int32_t L_26 = GC_CREATE_PLAYER_get_StealthLev_m16632(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_StealthLev_m16632_MethodInfo);
		NullCheck(V_1);
		PlayerData_set_StealthLev_m35062(V_1, L_26, /*hidden argument*/&PlayerData_set_StealthLev_m35062_MethodInfo);
		NullCheck(V_0);
		bool L_27 = GC_CREATE_PLAYER_get_HasReliveTime_m16599(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasReliveTime_m16599_MethodInfo);
		if (!L_27)
		{
			goto IL_011f;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_28 = GC_CREATE_PLAYER_get_ReliveTime_m16600(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_ReliveTime_m16600_MethodInfo);
		NullCheck(V_1);
		PlayerData_set_ReliveEntryTime_m35183(V_1, L_28, /*hidden argument*/&PlayerData_set_ReliveEntryTime_m35183_MethodInfo);
	}

IL_011f:
	{
		NullCheck(V_0);
		int32_t L_29 = GC_CREATE_PLAYER_get_DataId_m16560(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_DataId_m16560_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TableManager_t332_il2cpp_TypeInfo));
		Tab_RoleBaseAttr_t615 * L_30 = TableManager_GetRoleBaseAttrByID_m1061(NULL /*static, unused*/, L_29, 0, /*hidden argument*/&TableManager_GetRoleBaseAttrByID_m1061_MethodInfo);
		V_2 = L_30;
		if (!V_2)
		{
			goto IL_0143;
		}
	}
	{
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_31 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(V_2);
		int32_t L_32 = Tab_RoleBaseAttr_get_CharModelID_m3016(V_2, /*hidden argument*/&Tab_RoleBaseAttr_get_CharModelID_m3016_MethodInfo);
		NullCheck(L_31);
		PlayerEnterSceneCache_set_EnterSceneCharModelID_m35404(L_31, L_32, /*hidden argument*/&PlayerEnterSceneCache_set_EnterSceneCharModelID_m35404_MethodInfo);
	}

IL_0143:
	{
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_33 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(V_0);
		int32_t L_34 = GC_CREATE_PLAYER_get_ModelVisualID_m16616(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_ModelVisualID_m16616_MethodInfo);
		NullCheck(L_33);
		PlayerEnterSceneCache_set_ModelVisualID_m35414(L_33, L_34, /*hidden argument*/&PlayerEnterSceneCache_set_ModelVisualID_m35414_MethodInfo);
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_35 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(V_0);
		int32_t L_36 = GC_CREATE_PLAYER_get_WeaponDataID_m16620(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_WeaponDataID_m16620_MethodInfo);
		NullCheck(L_35);
		PlayerEnterSceneCache_set_WeaponDataID_m35412(L_35, L_36, /*hidden argument*/&PlayerEnterSceneCache_set_WeaponDataID_m35412_MethodInfo);
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_37 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(V_0);
		int32_t L_38 = GC_CREATE_PLAYER_get_WeaponEffectGem_m16624(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_WeaponEffectGem_m16624_MethodInfo);
		NullCheck(L_37);
		PlayerEnterSceneCache_set_WeaponEffectGem_m35416(L_37, L_38, /*hidden argument*/&PlayerEnterSceneCache_set_WeaponEffectGem_m35416_MethodInfo);
		NullCheck(V_0);
		bool L_39 = GC_CREATE_PLAYER_get_HasPaoshangState_m16659(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasPaoshangState_m16659_MethodInfo);
		if (!L_39)
		{
			goto IL_0192;
		}
	}
	{
		NullCheck(V_1);
		PlayerEnterSceneCache_t4949 * L_40 = PlayerData_get_EnterSceneCache_m35081(V_1, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(V_0);
		int32_t L_41 = GC_CREATE_PLAYER_get_PaoshangState_m16660(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_PaoshangState_m16660_MethodInfo);
		NullCheck(L_40);
		PlayerEnterSceneCache_set_PaoShangState_m35418(L_40, L_41, /*hidden argument*/&PlayerEnterSceneCache_set_PaoShangState_m35418_MethodInfo);
	}

IL_0192:
	{
		NullCheck(V_0);
		bool L_42 = GC_CREATE_PLAYER_get_HasVipCost_m16635(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasVipCost_m16635_MethodInfo);
		if (!L_42)
		{
			goto IL_01a9;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_43 = GC_CREATE_PLAYER_get_VipCost_m16636(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_VipCost_m16636_MethodInfo);
		NullCheck(V_1);
		PlayerData_set_VipCost_m35068(V_1, L_43, /*hidden argument*/&PlayerData_set_VipCost_m35068_MethodInfo);
	}

IL_01a9:
	{
		NullCheck(V_0);
		bool L_44 = GC_CREATE_PLAYER_get_HasCombatValue_m16643(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasCombatValue_m16643_MethodInfo);
		if (!L_44)
		{
			goto IL_01c0;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_45 = GC_CREATE_PLAYER_get_CombatValue_m16644(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_CombatValue_m16644_MethodInfo);
		NullCheck(V_1);
		PlayerData_set_PoolCombatValue_m35070(V_1, L_45, /*hidden argument*/&PlayerData_set_PoolCombatValue_m35070_MethodInfo);
	}

IL_01c0:
	{
		NullCheck(V_0);
		bool L_46 = GC_CREATE_PLAYER_get_HasBindparent_m16647(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasBindparent_m16647_MethodInfo);
		if (!L_46)
		{
			goto IL_01d7;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_47 = GC_CREATE_PLAYER_get_Bindparent_m16648(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Bindparent_m16648_MethodInfo);
		NullCheck(V_1);
		PlayerData_set_MainBindParent_m35074(V_1, L_47, /*hidden argument*/&PlayerData_set_MainBindParent_m35074_MethodInfo);
	}

IL_01d7:
	{
		NullCheck(V_0);
		bool L_48 = GC_CREATE_PLAYER_get_HasLightSkillLevel_m16663(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasLightSkillLevel_m16663_MethodInfo);
		if (!L_48)
		{
			goto IL_01f3;
		}
	}
	{
		NullCheck(V_1);
		BaseAttr_t4471 * L_49 = PlayerData_get_MainPlayerBaseAttr_m35077(V_1, /*hidden argument*/&PlayerData_get_MainPlayerBaseAttr_m35077_MethodInfo);
		NullCheck(V_0);
		int32_t L_50 = GC_CREATE_PLAYER_get_LightSkillLevel_m16664(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_LightSkillLevel_m16664_MethodInfo);
		NullCheck(L_49);
		BaseAttr_set_LightSkillLevel_m32695(L_49, L_50, /*hidden argument*/&BaseAttr_set_LightSkillLevel_m32695_MethodInfo);
	}

IL_01f3:
	{
		NullCheck(V_1);
		List_1_t90 * L_51 = PlayerData_get_MainBindChildren_m35075(V_1, /*hidden argument*/&PlayerData_get_MainBindChildren_m35075_MethodInfo);
		NullCheck(L_51);
		VirtActionInvoker0::Invoke(&List_1_Clear_m4325_MethodInfo, L_51);
		V_3 = 0;
		goto IL_0238;
	}

IL_0205:
	{
		NullCheck(V_0);
		int32_t L_52 = GC_CREATE_PLAYER_get_bindchildrenCount_m16652(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_bindchildrenCount_m16652_MethodInfo);
		if ((((int32_t)V_3) >= ((int32_t)L_52)))
		{
			goto IL_0228;
		}
	}
	{
		NullCheck(V_1);
		List_1_t90 * L_53 = PlayerData_get_MainBindChildren_m35075(V_1, /*hidden argument*/&PlayerData_get_MainBindChildren_m35075_MethodInfo);
		NullCheck(V_0);
		int32_t L_54 = GC_CREATE_PLAYER_GetBindchildren_m16653(V_0, V_3, /*hidden argument*/&GC_CREATE_PLAYER_GetBindchildren_m16653_MethodInfo);
		NullCheck(L_53);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_53, L_54);
		goto IL_0234;
	}

IL_0228:
	{
		NullCheck(V_1);
		List_1_t90 * L_55 = PlayerData_get_MainBindChildren_m35075(V_1, /*hidden argument*/&PlayerData_get_MainBindChildren_m35075_MethodInfo);
		NullCheck(L_55);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_55, (-1));
	}

IL_0234:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0238:
	{
		if ((((int32_t)V_3) < ((int32_t)4)))
		{
			goto IL_0205;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		int32_t L_56 = GameManager_get_RunningScene_m14627((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_RunningScene_m14627_MethodInfo);
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_57 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_57);
		PlayerEnterSceneCache_t4949 * L_58 = PlayerData_get_EnterSceneCache_m35081(L_57, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(L_58);
		int32_t L_59 = PlayerEnterSceneCache_get_EnterSceneSceneID_m35399(L_58, /*hidden argument*/&PlayerEnterSceneCache_get_EnterSceneSceneID_m35399_MethodInfo);
		if ((((uint32_t)L_56) != ((uint32_t)L_59)))
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_60 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_60);
		PlayerEnterSceneCache_t4949 * L_61 = PlayerData_get_EnterSceneCache_m35081(L_60, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(L_61);
		int32_t L_62 = PlayerEnterSceneCache_get_EnterSceneServerID_m35397(L_61, /*hidden argument*/&PlayerEnterSceneCache_get_EnterSceneServerID_m35397_MethodInfo);
		if ((((int32_t)L_62) == ((int32_t)(-1))))
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_63 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_63);
		PlayerEnterSceneCache_t4949 * L_64 = PlayerData_get_EnterSceneCache_m35081(L_63, /*hidden argument*/&PlayerData_get_EnterSceneCache_m35081_MethodInfo);
		NullCheck(L_64);
		int32_t L_65 = PlayerEnterSceneCache_get_EnterSceneRoleBaseID_m35401(L_64, /*hidden argument*/&PlayerEnterSceneCache_get_EnterSceneRoleBaseID_m35401_MethodInfo);
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		int32_t L_66 = GameManager_get_RunningScene_m14627((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_RunningScene_m14627_MethodInfo);
		if (!L_66)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		int32_t L_67 = GameManager_get_RunningScene_m14627((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_RunningScene_m14627_MethodInfo);
		if ((((int32_t)L_67) == ((int32_t)2)))
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_68 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_68);
		ObjManager_CreateMainPlayer_m31325(L_68, /*hidden argument*/&ObjManager_CreateMainPlayer_m31325_MethodInfo);
	}

IL_02bf:
	{
		goto IL_055e;
	}

IL_02c4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		int32_t L_69 = GameManager_get_RunningScene_m14627((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_RunningScene_m14627_MethodInfo);
		NullCheck(V_0);
		int32_t L_70 = GC_CREATE_PLAYER_get_SceneClass_m16556(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_SceneClass_m16556_MethodInfo);
		if ((((int32_t)L_69) == ((int32_t)L_70)))
		{
			goto IL_02db;
		}
	}
	{
		return 2;
	}

IL_02db:
	{
		Obj_Init_Data_t4391 * L_71 = (Obj_Init_Data_t4391 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Obj_Init_Data_t4391_il2cpp_TypeInfo));
		Obj_Init_Data__ctor_m31291(L_71, /*hidden argument*/&Obj_Init_Data__ctor_m31291_MethodInfo);
		V_4 = L_71;
		NullCheck(V_0);
		int32_t L_72 = GC_CREATE_PLAYER_get_ServerId_m16544(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_ServerId_m16544_MethodInfo);
		NullCheck(V_4);
		V_4->___m_ServerID = L_72;
		NullCheck(V_0);
		uint64_t L_73 = GC_CREATE_PLAYER_get_Guid_m16548(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Guid_m16548_MethodInfo);
		NullCheck(V_4);
		V_4->___m_Guid = L_73;
		NullCheck(V_0);
		int32_t L_74 = GC_CREATE_PLAYER_get_PosX_m16564(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_PosX_m16564_MethodInfo);
		NullCheck(V_4);
		V_4->___m_fX = ((float)((((float)L_74))/(100.0f)));
		NullCheck(V_0);
		int32_t L_75 = GC_CREATE_PLAYER_get_PosZ_m16568(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_PosZ_m16568_MethodInfo);
		NullCheck(V_4);
		V_4->___m_fZ = ((float)((((float)L_75))/(100.0f)));
		NullCheck(V_0);
		int32_t L_76 = GC_CREATE_PLAYER_get_DataId_m16560(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_DataId_m16560_MethodInfo);
		NullCheck(V_4);
		V_4->___m_RoleBaseID = L_76;
		NullCheck(V_4);
		int32_t L_77 = (V_4->___m_RoleBaseID);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TableManager_t332_il2cpp_TypeInfo));
		Tab_RoleBaseAttr_t615 * L_78 = TableManager_GetRoleBaseAttrByID_m1061(NULL /*static, unused*/, L_77, 0, /*hidden argument*/&TableManager_GetRoleBaseAttrByID_m1061_MethodInfo);
		V_5 = L_78;
		if (!V_5)
		{
			goto IL_0355;
		}
	}
	{
		NullCheck(V_5);
		int32_t L_79 = Tab_RoleBaseAttr_get_CharModelID_m3016(V_5, /*hidden argument*/&Tab_RoleBaseAttr_get_CharModelID_m3016_MethodInfo);
		NullCheck(V_4);
		V_4->___m_CharModelID = L_79;
	}

IL_0355:
	{
		NullCheck(V_0);
		int32_t L_80 = GC_CREATE_PLAYER_get_Curforce_m16572(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Curforce_m16572_MethodInfo);
		NullCheck(V_4);
		V_4->___m_Force = L_80;
		NullCheck(V_0);
		String_t* L_81 = GC_CREATE_PLAYER_get_Name_m16576(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Name_m16576_MethodInfo);
		NullCheck(V_4);
		V_4->___m_StrName = L_81;
		NullCheck(V_0);
		int32_t L_82 = GC_CREATE_PLAYER_get_CurProfession_m16580(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_CurProfession_m16580_MethodInfo);
		NullCheck(V_4);
		V_4->___m_nProfession = L_82;
		NullCheck(V_0);
		String_t* L_83 = GC_CREATE_PLAYER_get_Titlename_m16588(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Titlename_m16588_MethodInfo);
		NullCheck(V_4);
		V_4->___m_strTitleName = L_83;
		NullCheck(V_0);
		int32_t L_84 = GC_CREATE_PLAYER_get_CurTitleID_m16628(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_CurTitleID_m16628_MethodInfo);
		NullCheck(V_4);
		V_4->___m_CurTitleID = L_84;
		NullCheck(V_0);
		int32_t L_85 = GC_CREATE_PLAYER_get_IsInPkList_m16592(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_IsInPkList_m16592_MethodInfo);
		G_B39_0 = V_4;
		if ((((uint32_t)L_85) != ((uint32_t)1)))
		{
			G_B40_0 = V_4;
			goto IL_03aa;
		}
	}
	{
		G_B41_0 = 1;
		G_B41_1 = G_B39_0;
		goto IL_03ab;
	}

IL_03aa:
	{
		G_B41_0 = 0;
		G_B41_1 = G_B40_0;
	}

IL_03ab:
	{
		NullCheck(G_B41_1);
		G_B41_1->___m_isInMainPlayerPKList = G_B41_0;
		NullCheck(V_0);
		int32_t L_86 = GC_CREATE_PLAYER_get_IsDie_m16596(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_IsDie_m16596_MethodInfo);
		G_B42_0 = V_4;
		if ((((uint32_t)L_86) != ((uint32_t)1)))
		{
			G_B43_0 = V_4;
			goto IL_03c4;
		}
	}
	{
		G_B44_0 = 1;
		G_B44_1 = G_B42_0;
		goto IL_03c5;
	}

IL_03c4:
	{
		G_B44_0 = 0;
		G_B44_1 = G_B43_0;
	}

IL_03c5:
	{
		NullCheck(G_B44_1);
		G_B44_1->___m_IsDie = G_B44_0;
		NullCheck(V_0);
		int32_t L_87 = GC_CREATE_PLAYER_get_MountID_m16608(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_MountID_m16608_MethodInfo);
		NullCheck(V_4);
		V_4->___m_MountID = L_87;
		NullCheck(V_0);
		int32_t L_88 = GC_CREATE_PLAYER_get_PKModle_m16604(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_PKModle_m16604_MethodInfo);
		NullCheck(V_4);
		V_4->___m_PkModel = L_88;
		NullCheck(V_0);
		int32_t L_89 = GC_CREATE_PLAYER_get_MoveSpeed_m16612(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_MoveSpeed_m16612_MethodInfo);
		NullCheck(V_4);
		V_4->___m_MoveSpeed = ((float)((((float)L_89))/(100.0f)));
		NullCheck(V_0);
		int32_t L_90 = GC_CREATE_PLAYER_get_Facedir_m16584(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Facedir_m16584_MethodInfo);
		NullCheck(V_4);
		V_4->___m_fDir = ((float)((((float)L_90))/(100.0f)));
		NullCheck(V_0);
		int32_t L_91 = GC_CREATE_PLAYER_get_ModelVisualID_m16616(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_ModelVisualID_m16616_MethodInfo);
		NullCheck(V_4);
		V_4->___m_ModelVisualID = L_91;
		NullCheck(V_0);
		int32_t L_92 = GC_CREATE_PLAYER_get_WeaponDataID_m16620(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_WeaponDataID_m16620_MethodInfo);
		NullCheck(V_4);
		V_4->___m_WeaponDataID = L_92;
		NullCheck(V_0);
		int32_t L_93 = GC_CREATE_PLAYER_get_WeaponEffectGem_m16624(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_WeaponEffectGem_m16624_MethodInfo);
		NullCheck(V_4);
		V_4->___m_WeaponEffectGem = L_93;
		NullCheck(V_0);
		int32_t L_94 = GC_CREATE_PLAYER_get_StealthLev_m16632(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_StealthLev_m16632_MethodInfo);
		NullCheck(V_4);
		V_4->___m_StealthLev = L_94;
		NullCheck(V_0);
		uint64_t L_95 = GC_CREATE_PLAYER_get_GuildGuid_m16640(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_GuildGuid_m16640_MethodInfo);
		NullCheck(V_4);
		V_4->___m_GuildGuid = L_95;
		NullCheck(V_0);
		int32_t L_96 = GC_CREATE_PLAYER_get_IsEnemy2Self_m16656(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_IsEnemy2Self_m16656_MethodInfo);
		NullCheck(V_4);
		V_4->___m_bIsWildEnemyForMainPlayer = ((((int32_t)L_96) == ((int32_t)1))? 1 : 0);
		NullCheck(V_0);
		bool L_97 = GC_CREATE_PLAYER_get_HasVipCost_m16635(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasVipCost_m16635_MethodInfo);
		if (!L_97)
		{
			goto IL_0475;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_98 = GC_CREATE_PLAYER_get_VipCost_m16636(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_VipCost_m16636_MethodInfo);
		NullCheck(V_4);
		V_4->___m_nOtherVipCost = L_98;
	}

IL_0475:
	{
		NullCheck(V_0);
		bool L_99 = GC_CREATE_PLAYER_get_HasCombatValue_m16643(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasCombatValue_m16643_MethodInfo);
		if (!L_99)
		{
			goto IL_048d;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_100 = GC_CREATE_PLAYER_get_CombatValue_m16644(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_CombatValue_m16644_MethodInfo);
		NullCheck(V_4);
		V_4->___m_nOtherCombatValue = L_100;
	}

IL_048d:
	{
		NullCheck(V_0);
		bool L_101 = GC_CREATE_PLAYER_get_HasBindparent_m16647(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasBindparent_m16647_MethodInfo);
		if (!L_101)
		{
			goto IL_04a5;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_102 = GC_CREATE_PLAYER_get_Bindparent_m16648(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_Bindparent_m16648_MethodInfo);
		NullCheck(V_4);
		V_4->___m_BindParent = L_102;
	}

IL_04a5:
	{
		NullCheck(V_4);
		List_1_t90 * L_103 = (V_4->___m_BindChildren);
		NullCheck(L_103);
		VirtActionInvoker0::Invoke(&List_1_Clear_m4325_MethodInfo, L_103);
		V_6 = 0;
		goto IL_04f2;
	}

IL_04b9:
	{
		NullCheck(V_0);
		int32_t L_104 = GC_CREATE_PLAYER_get_bindchildrenCount_m16652(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_bindchildrenCount_m16652_MethodInfo);
		if ((((int32_t)V_6) >= ((int32_t)L_104)))
		{
			goto IL_04df;
		}
	}
	{
		NullCheck(V_4);
		List_1_t90 * L_105 = (V_4->___m_BindChildren);
		NullCheck(V_0);
		int32_t L_106 = GC_CREATE_PLAYER_GetBindchildren_m16653(V_0, V_6, /*hidden argument*/&GC_CREATE_PLAYER_GetBindchildren_m16653_MethodInfo);
		NullCheck(L_105);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_105, L_106);
		goto IL_04ec;
	}

IL_04df:
	{
		NullCheck(V_4);
		List_1_t90 * L_107 = (V_4->___m_BindChildren);
		NullCheck(L_107);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_107, (-1));
	}

IL_04ec:
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_04f2:
	{
		if ((((int32_t)V_6) < ((int32_t)4)))
		{
			goto IL_04b9;
		}
	}
	{
		NullCheck(V_0);
		bool L_108 = GC_CREATE_PLAYER_get_HasPaoshangState_m16659(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasPaoshangState_m16659_MethodInfo);
		if (!L_108)
		{
			goto IL_0512;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_109 = GC_CREATE_PLAYER_get_PaoshangState_m16660(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_PaoshangState_m16660_MethodInfo);
		NullCheck(V_4);
		V_4->___m_nPaoShangState = L_109;
	}

IL_0512:
	{
		NullCheck(V_0);
		bool L_110 = GC_CREATE_PLAYER_get_HasFollowState_m16667(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_HasFollowState_m16667_MethodInfo);
		if (!L_110)
		{
			goto IL_0537;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_111 = GC_CREATE_PLAYER_get_FollowState_m16668(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_FollowState_m16668_MethodInfo);
		G_B60_0 = V_4;
		if ((((uint32_t)L_111) != ((uint32_t)1)))
		{
			G_B61_0 = V_4;
			goto IL_0531;
		}
	}
	{
		G_B62_0 = 1;
		G_B62_1 = G_B60_0;
		goto IL_0532;
	}

IL_0531:
	{
		G_B62_0 = 0;
		G_B62_1 = G_B61_0;
	}

IL_0532:
	{
		NullCheck(G_B62_1);
		G_B62_1->___m_bIsInTeamFollow = G_B62_0;
	}

IL_0537:
	{
		NullCheck(V_0);
		int32_t L_112 = GC_CREATE_PLAYER_get_ChangeState_m16672(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_ChangeState_m16672_MethodInfo);
		NullCheck(V_4);
		V_4->___m_changeState = L_112;
		NullCheck(V_0);
		int32_t L_113 = GC_CREATE_PLAYER_get_FlyWingId_m16676(V_0, /*hidden argument*/&GC_CREATE_PLAYER_get_FlyWingId_m16676_MethodInfo);
		NullCheck(V_4);
		V_4->___m_FlyWingId = L_113;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_114 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_114);
		ObjManager_NewCharacterObj_m31345(L_114, 4, V_4, /*hidden argument*/&ObjManager_NewCharacterObj_m31345_MethodInfo);
	}

IL_055e:
	{
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CREATE_PLAYERHandler
extern TypeInfo GC_CREATE_PLAYERHandler_t2586_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATE_PLAYERHandler::.ctor()
MethodInfo GC_CREATE_PLAYERHandler__ctor_m15498_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CREATE_PLAYERHandler__ctor_m15498/* method */
	, &GC_CREATE_PLAYERHandler_t2586_il2cpp_TypeInfo/* declaring_type */
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
	, 8974/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CREATE_PLAYERHandler_t2586_GC_CREATE_PLAYERHandler_Execute_m15499_ParameterInfos[] = 
{
	{"ipacket", 0, 134222407, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CREATE_PLAYERHandler_t2586_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CREATE_PLAYERHandler::Execute(PacketDistributed)
MethodInfo GC_CREATE_PLAYERHandler_Execute_m15499_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CREATE_PLAYERHandler_Execute_m15499/* method */
	, &GC_CREATE_PLAYERHandler_t2586_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CREATE_PLAYERHandler_t2586_GC_CREATE_PLAYERHandler_Execute_m15499_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8975/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CREATE_PLAYERHandler_t2586_MethodInfos[] =
{
	&GC_CREATE_PLAYERHandler__ctor_m15498_MethodInfo,
	&GC_CREATE_PLAYERHandler_Execute_m15499_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CREATE_PLAYERHandler_Execute_m15499_MethodInfo;
static MethodInfo* GC_CREATE_PLAYERHandler_t2586_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CREATE_PLAYERHandler_Execute_m15499_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CREATE_PLAYERHandler_t2586_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CREATE_PLAYERHandler_t2586_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CREATE_PLAYERHandler_t2586_0_0_0;
extern Il2CppType GC_CREATE_PLAYERHandler_t2586_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CREATE_PLAYERHandler_t2586;
extern TypeInfo GC_CREATE_PLAYERHandler_t2586_il2cpp_TypeInfo;
TypeInfo GC_CREATE_PLAYERHandler_t2586_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CREATE_PLAYERHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CREATE_PLAYERHandler_t2586_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CREATE_PLAYERHandler_t2586_il2cpp_TypeInfo/* element_class */
	, GC_CREATE_PLAYERHandler_t2586_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CREATE_PLAYERHandler_t2586_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CREATE_PLAYERHandler_t2586_il2cpp_TypeInfo/* cast_class */
	, &GC_CREATE_PLAYERHandler_t2586_0_0_0/* byval_arg */
	, &GC_CREATE_PLAYERHandler_t2586_1_0_0/* this_arg */
	, GC_CREATE_PLAYERHandler_t2586_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CREATE_PLAYERHandler_t2586)/* instance_size */
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
// SPacket.SocketInstance.GC_CREATE_SNAREHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_SNAREHand.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CREATE_SNAREHandler_t2587_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CREATE_SNAREHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_SNAREHandMethodDeclarations.h"

// GC_CREATE_SNARE
#include "AssemblyU2DCSharp_GC_CREATE_SNARE.h"
// ObjSnare_Init_Data
#include "AssemblyU2DCSharp_ObjSnare_Init_Data.h"
extern TypeInfo GC_CREATE_SNARE_t3296_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo ObjSnare_Init_Data_t4392_il2cpp_TypeInfo;
// GC_CREATE_SNARE
#include "AssemblyU2DCSharp_GC_CREATE_SNAREMethodDeclarations.h"
// ObjSnare_Init_Data
#include "AssemblyU2DCSharp_ObjSnare_Init_DataMethodDeclarations.h"
// GameRes.CreateObjFunction
#include "AssemblyU2DCSharp_GameRes_CreateObjFunctionMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_CREATE_SNARE_get_ServerId_m23010_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo ObjManager_IsObjExist_m31351_MethodInfo;
extern MethodInfo ObjManager_RemoveObj_m31352_MethodInfo;
extern MethodInfo ObjSnare_Init_Data__ctor_m31293_MethodInfo;
extern MethodInfo GC_CREATE_SNARE_get_Owerguid_m23018_MethodInfo;
extern MethodInfo GC_CREATE_SNARE_get_OwerId_m23014_MethodInfo;
extern MethodInfo GC_CREATE_SNARE_get_PosX_m23034_MethodInfo;
extern MethodInfo GC_CREATE_SNARE_get_PosZ_m23038_MethodInfo;
extern MethodInfo GC_CREATE_SNARE_get_SnareId_m23030_MethodInfo;
extern MethodInfo CreateObjFunction_CreateModelSnareObj_m31094_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CREATE_SNAREHandler::.ctor()
extern MethodInfo GC_CREATE_SNAREHandler__ctor_m15500_MethodInfo;
 void GC_CREATE_SNAREHandler__ctor_m15500 (GC_CREATE_SNAREHandler_t2587 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CREATE_SNAREHandler::Execute(PacketDistributed)
extern MethodInfo GC_CREATE_SNAREHandler_Execute_m15501_MethodInfo;
 uint32_t GC_CREATE_SNAREHandler_Execute_m15501 (GC_CREATE_SNAREHandler_t2587 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CREATE_SNARE_t3296 * V_0 = {0};
	ObjSnare_Init_Data_t4392 * V_1 = {0};
	{
		V_0 = ((GC_CREATE_SNARE_t3296 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CREATE_SNARE_t3296_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_CREATE_SNARE_get_ServerId_m23010(V_0, /*hidden argument*/&GC_CREATE_SNARE_get_ServerId_m23010_MethodInfo);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		return 2;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_1 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_2 = GC_CREATE_SNARE_get_ServerId_m23010(V_0, /*hidden argument*/&GC_CREATE_SNARE_get_ServerId_m23010_MethodInfo);
		NullCheck(L_1);
		bool L_3 = ObjManager_IsObjExist_m31351(L_1, L_2, /*hidden argument*/&ObjManager_IsObjExist_m31351_MethodInfo);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_4 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_5 = GC_CREATE_SNARE_get_ServerId_m23010(V_0, /*hidden argument*/&GC_CREATE_SNARE_get_ServerId_m23010_MethodInfo);
		NullCheck(L_4);
		ObjManager_RemoveObj_m31352(L_4, L_5, /*hidden argument*/&ObjManager_RemoveObj_m31352_MethodInfo);
	}

IL_0043:
	{
		ObjSnare_Init_Data_t4392 * L_6 = (ObjSnare_Init_Data_t4392 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjSnare_Init_Data_t4392_il2cpp_TypeInfo));
		ObjSnare_Init_Data__ctor_m31293(L_6, /*hidden argument*/&ObjSnare_Init_Data__ctor_m31293_MethodInfo);
		V_1 = L_6;
		NullCheck(V_0);
		int32_t L_7 = GC_CREATE_SNARE_get_ServerId_m23010(V_0, /*hidden argument*/&GC_CREATE_SNARE_get_ServerId_m23010_MethodInfo);
		NullCheck(V_1);
		V_1->___m_ServerID = L_7;
		NullCheck(V_0);
		uint64_t L_8 = GC_CREATE_SNARE_get_Owerguid_m23018(V_0, /*hidden argument*/&GC_CREATE_SNARE_get_Owerguid_m23018_MethodInfo);
		NullCheck(V_1);
		V_1->___m_OwerGuid = L_8;
		NullCheck(V_0);
		int32_t L_9 = GC_CREATE_SNARE_get_OwerId_m23014(V_0, /*hidden argument*/&GC_CREATE_SNARE_get_OwerId_m23014_MethodInfo);
		NullCheck(V_1);
		V_1->___m_OwnerObjId = L_9;
		NullCheck(V_0);
		int32_t L_10 = GC_CREATE_SNARE_get_PosX_m23034(V_0, /*hidden argument*/&GC_CREATE_SNARE_get_PosX_m23034_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fX = ((float)((((float)L_10))/(100.0f)));
		NullCheck(V_0);
		int32_t L_11 = GC_CREATE_SNARE_get_PosZ_m23038(V_0, /*hidden argument*/&GC_CREATE_SNARE_get_PosZ_m23038_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fZ = ((float)((((float)L_11))/(100.0f)));
		NullCheck(V_0);
		int32_t L_12 = GC_CREATE_SNARE_get_SnareId_m23030(V_0, /*hidden argument*/&GC_CREATE_SNARE_get_SnareId_m23030_MethodInfo);
		NullCheck(V_1);
		V_1->___m_SnareID = L_12;
		CreateObjFunction_CreateModelSnareObj_m31094(NULL /*static, unused*/, V_1, /*hidden argument*/&CreateObjFunction_CreateModelSnareObj_m31094_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CREATE_SNAREHandler
extern TypeInfo GC_CREATE_SNAREHandler_t2587_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATE_SNAREHandler::.ctor()
MethodInfo GC_CREATE_SNAREHandler__ctor_m15500_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CREATE_SNAREHandler__ctor_m15500/* method */
	, &GC_CREATE_SNAREHandler_t2587_il2cpp_TypeInfo/* declaring_type */
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
	, 8976/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CREATE_SNAREHandler_t2587_GC_CREATE_SNAREHandler_Execute_m15501_ParameterInfos[] = 
{
	{"ipacket", 0, 134222408, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CREATE_SNAREHandler_t2587_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CREATE_SNAREHandler::Execute(PacketDistributed)
MethodInfo GC_CREATE_SNAREHandler_Execute_m15501_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CREATE_SNAREHandler_Execute_m15501/* method */
	, &GC_CREATE_SNAREHandler_t2587_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CREATE_SNAREHandler_t2587_GC_CREATE_SNAREHandler_Execute_m15501_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8977/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CREATE_SNAREHandler_t2587_MethodInfos[] =
{
	&GC_CREATE_SNAREHandler__ctor_m15500_MethodInfo,
	&GC_CREATE_SNAREHandler_Execute_m15501_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CREATE_SNAREHandler_Execute_m15501_MethodInfo;
static MethodInfo* GC_CREATE_SNAREHandler_t2587_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CREATE_SNAREHandler_Execute_m15501_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CREATE_SNAREHandler_t2587_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CREATE_SNAREHandler_t2587_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CREATE_SNAREHandler_t2587_0_0_0;
extern Il2CppType GC_CREATE_SNAREHandler_t2587_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CREATE_SNAREHandler_t2587;
extern TypeInfo GC_CREATE_SNAREHandler_t2587_il2cpp_TypeInfo;
TypeInfo GC_CREATE_SNAREHandler_t2587_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CREATE_SNAREHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CREATE_SNAREHandler_t2587_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CREATE_SNAREHandler_t2587_il2cpp_TypeInfo/* element_class */
	, GC_CREATE_SNAREHandler_t2587_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CREATE_SNAREHandler_t2587_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CREATE_SNAREHandler_t2587_il2cpp_TypeInfo/* cast_class */
	, &GC_CREATE_SNAREHandler_t2587_0_0_0/* byval_arg */
	, &GC_CREATE_SNAREHandler_t2587_1_0_0/* this_arg */
	, GC_CREATE_SNAREHandler_t2587_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CREATE_SNAREHandler_t2587)/* instance_size */
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
// SPacket.SocketInstance.GC_CREATE_TRIGGERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_TRIGGERHa.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CREATE_TRIGGERHandler_t2588_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CREATE_TRIGGERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_TRIGGERHaMethodDeclarations.h"

// GC_CREATE_TRIGGER
#include "AssemblyU2DCSharp_GC_CREATE_TRIGGER.h"
// CabalTrigger
#include "AssemblyU2DCSharp_CabalTrigger.h"
extern TypeInfo GC_CREATE_TRIGGER_t3611_il2cpp_TypeInfo;
extern TypeInfo CabalTrigger_t5164_il2cpp_TypeInfo;
// GC_CREATE_TRIGGER
#include "AssemblyU2DCSharp_GC_CREATE_TRIGGERMethodDeclarations.h"
// CabalTrigger
#include "AssemblyU2DCSharp_CabalTriggerMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GC_CREATE_TRIGGER_get_NTriggerId_m28146_MethodInfo;
extern MethodInfo CabalTrigger_CreateTrigger_m36905_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CREATE_TRIGGERHandler::.ctor()
extern MethodInfo GC_CREATE_TRIGGERHandler__ctor_m15502_MethodInfo;
 void GC_CREATE_TRIGGERHandler__ctor_m15502 (GC_CREATE_TRIGGERHandler_t2588 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CREATE_TRIGGERHandler::Execute(PacketDistributed)
extern MethodInfo GC_CREATE_TRIGGERHandler_Execute_m15503_MethodInfo;
 uint32_t GC_CREATE_TRIGGERHandler_Execute_m15503 (GC_CREATE_TRIGGERHandler_t2588 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CREATE_TRIGGER_t3611 * V_0 = {0};
	int32_t V_1 = 0;
	{
		V_0 = ((GC_CREATE_TRIGGER_t3611 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CREATE_TRIGGER_t3611_il2cpp_TypeInfo)));
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
		NullCheck(V_0);
		int32_t L_0 = GC_CREATE_TRIGGER_get_NTriggerId_m28146(V_0, /*hidden argument*/&GC_CREATE_TRIGGER_get_NTriggerId_m28146_MethodInfo);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CabalTrigger_t5164_il2cpp_TypeInfo));
		CabalTrigger_CreateTrigger_m36905(NULL /*static, unused*/, V_1, /*hidden argument*/&CabalTrigger_CreateTrigger_m36905_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CREATE_TRIGGERHandler
extern TypeInfo GC_CREATE_TRIGGERHandler_t2588_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATE_TRIGGERHandler::.ctor()
MethodInfo GC_CREATE_TRIGGERHandler__ctor_m15502_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CREATE_TRIGGERHandler__ctor_m15502/* method */
	, &GC_CREATE_TRIGGERHandler_t2588_il2cpp_TypeInfo/* declaring_type */
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
	, 8978/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CREATE_TRIGGERHandler_t2588_GC_CREATE_TRIGGERHandler_Execute_m15503_ParameterInfos[] = 
{
	{"ipacket", 0, 134222409, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CREATE_TRIGGERHandler_t2588_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CREATE_TRIGGERHandler::Execute(PacketDistributed)
MethodInfo GC_CREATE_TRIGGERHandler_Execute_m15503_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CREATE_TRIGGERHandler_Execute_m15503/* method */
	, &GC_CREATE_TRIGGERHandler_t2588_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CREATE_TRIGGERHandler_t2588_GC_CREATE_TRIGGERHandler_Execute_m15503_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8979/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CREATE_TRIGGERHandler_t2588_MethodInfos[] =
{
	&GC_CREATE_TRIGGERHandler__ctor_m15502_MethodInfo,
	&GC_CREATE_TRIGGERHandler_Execute_m15503_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CREATE_TRIGGERHandler_Execute_m15503_MethodInfo;
static MethodInfo* GC_CREATE_TRIGGERHandler_t2588_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CREATE_TRIGGERHandler_Execute_m15503_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CREATE_TRIGGERHandler_t2588_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CREATE_TRIGGERHandler_t2588_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CREATE_TRIGGERHandler_t2588_0_0_0;
extern Il2CppType GC_CREATE_TRIGGERHandler_t2588_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CREATE_TRIGGERHandler_t2588;
extern TypeInfo GC_CREATE_TRIGGERHandler_t2588_il2cpp_TypeInfo;
TypeInfo GC_CREATE_TRIGGERHandler_t2588_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CREATE_TRIGGERHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CREATE_TRIGGERHandler_t2588_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CREATE_TRIGGERHandler_t2588_il2cpp_TypeInfo/* element_class */
	, GC_CREATE_TRIGGERHandler_t2588_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CREATE_TRIGGERHandler_t2588_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CREATE_TRIGGERHandler_t2588_il2cpp_TypeInfo/* cast_class */
	, &GC_CREATE_TRIGGERHandler_t2588_0_0_0/* byval_arg */
	, &GC_CREATE_TRIGGERHandler_t2588_1_0_0/* this_arg */
	, GC_CREATE_TRIGGERHandler_t2588_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CREATE_TRIGGERHandler_t2588)/* instance_size */
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
// SPacket.SocketInstance.GC_CREATE_YANHUAHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_YANHUAHan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CREATE_YANHUAHandler_t2589_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CREATE_YANHUAHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_YANHUAHanMethodDeclarations.h"

// GC_CREATE_YANHUA
#include "AssemblyU2DCSharp_GC_CREATE_YANHUA.h"
// ObjYanHua_Init_Data
#include "AssemblyU2DCSharp_ObjYanHua_Init_Data.h"
extern TypeInfo GC_CREATE_YANHUA_t3408_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo ObjYanHua_Init_Data_t4393_il2cpp_TypeInfo;
// GC_CREATE_YANHUA
#include "AssemblyU2DCSharp_GC_CREATE_YANHUAMethodDeclarations.h"
// ObjYanHua_Init_Data
#include "AssemblyU2DCSharp_ObjYanHua_Init_DataMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo GC_CREATE_YANHUA_get_ServerId_m24848_MethodInfo;
extern MethodInfo ObjManager_IsObjExist_m31351_MethodInfo;
extern MethodInfo ObjManager_RemoveObj_m31352_MethodInfo;
extern MethodInfo ObjYanHua_Init_Data__ctor_m31295_MethodInfo;
extern MethodInfo GC_CREATE_YANHUA_get_Owerguid_m24856_MethodInfo;
extern MethodInfo GC_CREATE_YANHUA_get_OwerId_m24852_MethodInfo;
extern MethodInfo GC_CREATE_YANHUA_get_PosX_m24872_MethodInfo;
extern MethodInfo GC_CREATE_YANHUA_get_PosZ_m24876_MethodInfo;
extern MethodInfo GC_CREATE_YANHUA_get_SnareId_m24868_MethodInfo;
extern MethodInfo CreateObjFunction_CreateModelYanhuaObj_m31095_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CREATE_YANHUAHandler::.ctor()
extern MethodInfo GC_CREATE_YANHUAHandler__ctor_m15504_MethodInfo;
 void GC_CREATE_YANHUAHandler__ctor_m15504 (GC_CREATE_YANHUAHandler_t2589 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CREATE_YANHUAHandler::Execute(PacketDistributed)
extern MethodInfo GC_CREATE_YANHUAHandler_Execute_m15505_MethodInfo;
 uint32_t GC_CREATE_YANHUAHandler_Execute_m15505 (GC_CREATE_YANHUAHandler_t2589 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CREATE_YANHUA_t3408 * V_0 = {0};
	ObjYanHua_Init_Data_t4393 * V_1 = {0};
	{
		V_0 = ((GC_CREATE_YANHUA_t3408 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CREATE_YANHUA_t3408_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_0 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_1 = GC_CREATE_YANHUA_get_ServerId_m24848(V_0, /*hidden argument*/&GC_CREATE_YANHUA_get_ServerId_m24848_MethodInfo);
		NullCheck(L_0);
		bool L_2 = ObjManager_IsObjExist_m31351(L_0, L_1, /*hidden argument*/&ObjManager_IsObjExist_m31351_MethodInfo);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_3 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_4 = GC_CREATE_YANHUA_get_ServerId_m24848(V_0, /*hidden argument*/&GC_CREATE_YANHUA_get_ServerId_m24848_MethodInfo);
		NullCheck(L_3);
		ObjManager_RemoveObj_m31352(L_3, L_4, /*hidden argument*/&ObjManager_RemoveObj_m31352_MethodInfo);
	}

IL_0035:
	{
		ObjYanHua_Init_Data_t4393 * L_5 = (ObjYanHua_Init_Data_t4393 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjYanHua_Init_Data_t4393_il2cpp_TypeInfo));
		ObjYanHua_Init_Data__ctor_m31295(L_5, /*hidden argument*/&ObjYanHua_Init_Data__ctor_m31295_MethodInfo);
		V_1 = L_5;
		NullCheck(V_0);
		int32_t L_6 = GC_CREATE_YANHUA_get_ServerId_m24848(V_0, /*hidden argument*/&GC_CREATE_YANHUA_get_ServerId_m24848_MethodInfo);
		NullCheck(V_1);
		V_1->___m_ServerID = L_6;
		NullCheck(V_0);
		uint64_t L_7 = GC_CREATE_YANHUA_get_Owerguid_m24856(V_0, /*hidden argument*/&GC_CREATE_YANHUA_get_Owerguid_m24856_MethodInfo);
		NullCheck(V_1);
		V_1->___m_OwerGuid = L_7;
		NullCheck(V_0);
		int32_t L_8 = GC_CREATE_YANHUA_get_OwerId_m24852(V_0, /*hidden argument*/&GC_CREATE_YANHUA_get_OwerId_m24852_MethodInfo);
		NullCheck(V_1);
		V_1->___m_OwnerObjId = L_8;
		NullCheck(V_0);
		int32_t L_9 = GC_CREATE_YANHUA_get_PosX_m24872(V_0, /*hidden argument*/&GC_CREATE_YANHUA_get_PosX_m24872_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fX = ((float)((((float)L_9))/(100.0f)));
		NullCheck(V_0);
		int32_t L_10 = GC_CREATE_YANHUA_get_PosZ_m24876(V_0, /*hidden argument*/&GC_CREATE_YANHUA_get_PosZ_m24876_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fZ = ((float)((((float)L_10))/(100.0f)));
		NullCheck(V_0);
		int32_t L_11 = GC_CREATE_YANHUA_get_SnareId_m24868(V_0, /*hidden argument*/&GC_CREATE_YANHUA_get_SnareId_m24868_MethodInfo);
		NullCheck(V_1);
		V_1->___m_nYanHuaID = L_11;
		CreateObjFunction_CreateModelYanhuaObj_m31095(NULL /*static, unused*/, V_1, /*hidden argument*/&CreateObjFunction_CreateModelYanhuaObj_m31095_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CREATE_YANHUAHandler
extern TypeInfo GC_CREATE_YANHUAHandler_t2589_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATE_YANHUAHandler::.ctor()
MethodInfo GC_CREATE_YANHUAHandler__ctor_m15504_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CREATE_YANHUAHandler__ctor_m15504/* method */
	, &GC_CREATE_YANHUAHandler_t2589_il2cpp_TypeInfo/* declaring_type */
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
	, 8980/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CREATE_YANHUAHandler_t2589_GC_CREATE_YANHUAHandler_Execute_m15505_ParameterInfos[] = 
{
	{"ipacket", 0, 134222410, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CREATE_YANHUAHandler_t2589_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CREATE_YANHUAHandler::Execute(PacketDistributed)
MethodInfo GC_CREATE_YANHUAHandler_Execute_m15505_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CREATE_YANHUAHandler_Execute_m15505/* method */
	, &GC_CREATE_YANHUAHandler_t2589_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CREATE_YANHUAHandler_t2589_GC_CREATE_YANHUAHandler_Execute_m15505_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8981/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CREATE_YANHUAHandler_t2589_MethodInfos[] =
{
	&GC_CREATE_YANHUAHandler__ctor_m15504_MethodInfo,
	&GC_CREATE_YANHUAHandler_Execute_m15505_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CREATE_YANHUAHandler_Execute_m15505_MethodInfo;
static MethodInfo* GC_CREATE_YANHUAHandler_t2589_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CREATE_YANHUAHandler_Execute_m15505_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CREATE_YANHUAHandler_t2589_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CREATE_YANHUAHandler_t2589_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CREATE_YANHUAHandler_t2589_0_0_0;
extern Il2CppType GC_CREATE_YANHUAHandler_t2589_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CREATE_YANHUAHandler_t2589;
extern TypeInfo GC_CREATE_YANHUAHandler_t2589_il2cpp_TypeInfo;
TypeInfo GC_CREATE_YANHUAHandler_t2589_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CREATE_YANHUAHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CREATE_YANHUAHandler_t2589_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CREATE_YANHUAHandler_t2589_il2cpp_TypeInfo/* element_class */
	, GC_CREATE_YANHUAHandler_t2589_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CREATE_YANHUAHandler_t2589_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CREATE_YANHUAHandler_t2589_il2cpp_TypeInfo/* cast_class */
	, &GC_CREATE_YANHUAHandler_t2589_0_0_0/* byval_arg */
	, &GC_CREATE_YANHUAHandler_t2589_1_0_0/* this_arg */
	, GC_CREATE_YANHUAHandler_t2589_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CREATE_YANHUAHandler_t2589)/* instance_size */
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
// SPacket.SocketInstance.GC_CREATE_ZOMBIEUSERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_ZOMBIEUSE.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_CREATE_ZOMBIEUSERHandler_t2590_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_CREATE_ZOMBIEUSERHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_CREATE_ZOMBIEUSEMethodDeclarations.h"

// GC_CREATE_ZOMBIEUSER
#include "AssemblyU2DCSharp_GC_CREATE_ZOMBIEUSER.h"
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo GC_CREATE_ZOMBIEUSER_t3110_il2cpp_TypeInfo;
extern TypeInfo Singleton_1_t4462_il2cpp_TypeInfo;
extern TypeInfo Obj_Init_Data_t4391_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo List_1_t90_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
// GC_CREATE_ZOMBIEUSER
#include "AssemblyU2DCSharp_GC_CREATE_ZOMBIEUSERMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Singleton_1_GetInstance_m38960_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_ServerId_m19901_MethodInfo;
extern MethodInfo ObjManager_IsObjExist_m31351_MethodInfo;
extern MethodInfo ObjManager_RemoveObj_m31352_MethodInfo;
extern MethodInfo Obj_Init_Data__ctor_m31291_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_PosX_m19917_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_PosZ_m19921_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_DataId_m19913_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_Curforce_m19925_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_Name_m19929_MethodInfo;
extern MethodInfo String_IsNullOrEmpty_m4147_MethodInfo;
extern MethodInfo String_get_Chars_m4775_MethodInfo;
extern MethodInfo StrDictionary_GetServerDictionaryFormatString_m6946_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_IsDie_m19937_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_Movespeed_m19941_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_Facedir_m19933_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_ModelVisualID_m19945_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_Weaponid_m19949_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_WeaponEffectGem_m19953_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_StealthLev_m19957_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_Profession_m19961_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_HasBindparent_m19964_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_Bindparent_m19965_MethodInfo;
extern MethodInfo List_1_Clear_m4325_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_get_bindchildrenCount_m19969_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSER_GetBindchildren_m19970_MethodInfo;
extern MethodInfo List_1_Add_m4326_MethodInfo;
extern MethodInfo ObjManager_NewCharacterObj_m31345_MethodInfo;


// System.Void SPacket.SocketInstance.GC_CREATE_ZOMBIEUSERHandler::.ctor()
extern MethodInfo GC_CREATE_ZOMBIEUSERHandler__ctor_m15506_MethodInfo;
 void GC_CREATE_ZOMBIEUSERHandler__ctor_m15506 (GC_CREATE_ZOMBIEUSERHandler_t2590 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_CREATE_ZOMBIEUSERHandler::Execute(PacketDistributed)
extern MethodInfo GC_CREATE_ZOMBIEUSERHandler_Execute_m15507_MethodInfo;
 uint32_t GC_CREATE_ZOMBIEUSERHandler_Execute_m15507 (GC_CREATE_ZOMBIEUSERHandler_t2590 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_CREATE_ZOMBIEUSER_t3110 * V_0 = {0};
	Obj_Init_Data_t4391 * V_1 = {0};
	uint16_t V_2 = 0x0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	Obj_Init_Data_t4391 * G_B11_0 = {0};
	Obj_Init_Data_t4391 * G_B10_0 = {0};
	int32_t G_B12_0 = 0;
	Obj_Init_Data_t4391 * G_B12_1 = {0};
	{
		V_0 = ((GC_CREATE_ZOMBIEUSER_t3110 *)Castclass(___ipacket, InitializedTypeInfo(&GC_CREATE_ZOMBIEUSER_t3110_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_0 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_1 = GC_CREATE_ZOMBIEUSER_get_ServerId_m19901(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_ServerId_m19901_MethodInfo);
		NullCheck(L_0);
		bool L_2 = ObjManager_IsObjExist_m31351(L_0, L_1, /*hidden argument*/&ObjManager_IsObjExist_m31351_MethodInfo);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_3 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(V_0);
		int32_t L_4 = GC_CREATE_ZOMBIEUSER_get_ServerId_m19901(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_ServerId_m19901_MethodInfo);
		NullCheck(L_3);
		ObjManager_RemoveObj_m31352(L_3, L_4, /*hidden argument*/&ObjManager_RemoveObj_m31352_MethodInfo);
	}

IL_0035:
	{
		Obj_Init_Data_t4391 * L_5 = (Obj_Init_Data_t4391 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Obj_Init_Data_t4391_il2cpp_TypeInfo));
		Obj_Init_Data__ctor_m31291(L_5, /*hidden argument*/&Obj_Init_Data__ctor_m31291_MethodInfo);
		V_1 = L_5;
		NullCheck(V_0);
		int32_t L_6 = GC_CREATE_ZOMBIEUSER_get_ServerId_m19901(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_ServerId_m19901_MethodInfo);
		NullCheck(V_1);
		V_1->___m_ServerID = L_6;
		NullCheck(V_0);
		int32_t L_7 = GC_CREATE_ZOMBIEUSER_get_PosX_m19917(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_PosX_m19917_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fX = ((float)((((float)L_7))/(100.0f)));
		NullCheck(V_0);
		int32_t L_8 = GC_CREATE_ZOMBIEUSER_get_PosZ_m19921(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_PosZ_m19921_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fZ = ((float)((((float)L_8))/(100.0f)));
		NullCheck(V_0);
		int32_t L_9 = GC_CREATE_ZOMBIEUSER_get_DataId_m19913(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_DataId_m19913_MethodInfo);
		NullCheck(V_1);
		V_1->___m_RoleBaseID = L_9;
		NullCheck(V_0);
		int32_t L_10 = GC_CREATE_ZOMBIEUSER_get_Curforce_m19925(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Curforce_m19925_MethodInfo);
		NullCheck(V_1);
		V_1->___m_Force = L_10;
		NullCheck(V_0);
		String_t* L_11 = GC_CREATE_ZOMBIEUSER_get_Name_m19929(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Name_m19929_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_12 = String_IsNullOrEmpty_m4147(NULL /*static, unused*/, L_11, /*hidden argument*/&String_IsNullOrEmpty_m4147_MethodInfo);
		if (L_12)
		{
			goto IL_00da;
		}
	}
	{
		NullCheck(V_0);
		String_t* L_13 = GC_CREATE_ZOMBIEUSER_get_Name_m19929(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Name_m19929_MethodInfo);
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m4775(L_13, 0, /*hidden argument*/&String_get_Chars_m4775_MethodInfo);
		V_2 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_3 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty);
		if ((((uint32_t)V_2) != ((uint32_t)((int32_t)35))))
		{
			goto IL_00ce;
		}
	}
	{
		NullCheck(V_0);
		String_t* L_15 = GC_CREATE_ZOMBIEUSER_get_Name_m19929(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Name_m19929_MethodInfo);
		int32_t L_16 = StrDictionary_GetServerDictionaryFormatString_m6946(NULL /*static, unused*/, L_15, (&V_3), /*hidden argument*/&StrDictionary_GetServerDictionaryFormatString_m6946_MethodInfo);
		if (L_16)
		{
			goto IL_00ce;
		}
	}
	{
		NullCheck(V_1);
		V_1->___m_StrName = V_3;
		goto IL_00da;
	}

IL_00ce:
	{
		NullCheck(V_0);
		String_t* L_17 = GC_CREATE_ZOMBIEUSER_get_Name_m19929(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Name_m19929_MethodInfo);
		NullCheck(V_1);
		V_1->___m_StrName = L_17;
	}

IL_00da:
	{
		NullCheck(V_0);
		int32_t L_18 = GC_CREATE_ZOMBIEUSER_get_IsDie_m19937(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_IsDie_m19937_MethodInfo);
		G_B10_0 = V_1;
		if ((((uint32_t)L_18) != ((uint32_t)1)))
		{
			G_B11_0 = V_1;
			goto IL_00ed;
		}
	}
	{
		G_B12_0 = 1;
		G_B12_1 = G_B10_0;
		goto IL_00ee;
	}

IL_00ed:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_00ee:
	{
		NullCheck(G_B12_1);
		G_B12_1->___m_IsDie = G_B12_0;
		NullCheck(V_0);
		int32_t L_19 = GC_CREATE_ZOMBIEUSER_get_Movespeed_m19941(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Movespeed_m19941_MethodInfo);
		NullCheck(V_1);
		V_1->___m_MoveSpeed = ((float)((((float)L_19))/(100.0f)));
		NullCheck(V_0);
		int32_t L_20 = GC_CREATE_ZOMBIEUSER_get_Facedir_m19933(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Facedir_m19933_MethodInfo);
		NullCheck(V_1);
		V_1->___m_fDir = ((float)((((float)L_20))/(100.0f)));
		NullCheck(V_0);
		int32_t L_21 = GC_CREATE_ZOMBIEUSER_get_ModelVisualID_m19945(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_ModelVisualID_m19945_MethodInfo);
		NullCheck(V_1);
		V_1->___m_ModelVisualID = L_21;
		NullCheck(V_0);
		int32_t L_22 = GC_CREATE_ZOMBIEUSER_get_Weaponid_m19949(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Weaponid_m19949_MethodInfo);
		NullCheck(V_1);
		V_1->___m_WeaponDataID = L_22;
		NullCheck(V_0);
		int32_t L_23 = GC_CREATE_ZOMBIEUSER_get_WeaponEffectGem_m19953(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_WeaponEffectGem_m19953_MethodInfo);
		NullCheck(V_1);
		V_1->___m_WeaponEffectGem = L_23;
		NullCheck(V_0);
		int32_t L_24 = GC_CREATE_ZOMBIEUSER_get_StealthLev_m19957(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_StealthLev_m19957_MethodInfo);
		NullCheck(V_1);
		V_1->___m_StealthLev = L_24;
		NullCheck(V_0);
		int32_t L_25 = GC_CREATE_ZOMBIEUSER_get_Profession_m19961(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Profession_m19961_MethodInfo);
		NullCheck(V_1);
		V_1->___m_nProfession = L_25;
		NullCheck(V_0);
		bool L_26 = GC_CREATE_ZOMBIEUSER_get_HasBindparent_m19964(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_HasBindparent_m19964_MethodInfo);
		if (!L_26)
		{
			goto IL_016c;
		}
	}
	{
		NullCheck(V_0);
		int32_t L_27 = GC_CREATE_ZOMBIEUSER_get_Bindparent_m19965(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_Bindparent_m19965_MethodInfo);
		NullCheck(V_1);
		V_1->___m_BindParent = L_27;
	}

IL_016c:
	{
		NullCheck(V_1);
		List_1_t90 * L_28 = (V_1->___m_BindChildren);
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(&List_1_Clear_m4325_MethodInfo, L_28);
		V_4 = 0;
		goto IL_01b6;
	}

IL_017f:
	{
		NullCheck(V_0);
		int32_t L_29 = GC_CREATE_ZOMBIEUSER_get_bindchildrenCount_m19969(V_0, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_get_bindchildrenCount_m19969_MethodInfo);
		if ((((int32_t)V_4) >= ((int32_t)L_29)))
		{
			goto IL_01a4;
		}
	}
	{
		NullCheck(V_1);
		List_1_t90 * L_30 = (V_1->___m_BindChildren);
		NullCheck(V_0);
		int32_t L_31 = GC_CREATE_ZOMBIEUSER_GetBindchildren_m19970(V_0, V_4, /*hidden argument*/&GC_CREATE_ZOMBIEUSER_GetBindchildren_m19970_MethodInfo);
		NullCheck(L_30);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_30, L_31);
		goto IL_01b0;
	}

IL_01a4:
	{
		NullCheck(V_1);
		List_1_t90 * L_32 = (V_1->___m_BindChildren);
		NullCheck(L_32);
		VirtActionInvoker1< int32_t >::Invoke(&List_1_Add_m4326_MethodInfo, L_32, (-1));
	}

IL_01b0:
	{
		V_4 = ((int32_t)(V_4+1));
	}

IL_01b6:
	{
		if ((((int32_t)V_4) < ((int32_t)4)))
		{
			goto IL_017f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Singleton_1_t4462_il2cpp_TypeInfo));
		ObjManager_t4461 * L_33 = Singleton_1_GetInstance_m38960(NULL /*static, unused*/, /*hidden argument*/&Singleton_1_GetInstance_m38960_MethodInfo);
		NullCheck(L_33);
		ObjManager_NewCharacterObj_m31345(L_33, 6, V_1, /*hidden argument*/&ObjManager_NewCharacterObj_m31345_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_CREATE_ZOMBIEUSERHandler
extern TypeInfo GC_CREATE_ZOMBIEUSERHandler_t2590_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_CREATE_ZOMBIEUSERHandler::.ctor()
MethodInfo GC_CREATE_ZOMBIEUSERHandler__ctor_m15506_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_CREATE_ZOMBIEUSERHandler__ctor_m15506/* method */
	, &GC_CREATE_ZOMBIEUSERHandler_t2590_il2cpp_TypeInfo/* declaring_type */
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
	, 8982/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_CREATE_ZOMBIEUSERHandler_t2590_GC_CREATE_ZOMBIEUSERHandler_Execute_m15507_ParameterInfos[] = 
{
	{"ipacket", 0, 134222411, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_CREATE_ZOMBIEUSERHandler_t2590_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_CREATE_ZOMBIEUSERHandler::Execute(PacketDistributed)
MethodInfo GC_CREATE_ZOMBIEUSERHandler_Execute_m15507_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_CREATE_ZOMBIEUSERHandler_Execute_m15507/* method */
	, &GC_CREATE_ZOMBIEUSERHandler_t2590_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_CREATE_ZOMBIEUSERHandler_t2590_GC_CREATE_ZOMBIEUSERHandler_Execute_m15507_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8983/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_CREATE_ZOMBIEUSERHandler_t2590_MethodInfos[] =
{
	&GC_CREATE_ZOMBIEUSERHandler__ctor_m15506_MethodInfo,
	&GC_CREATE_ZOMBIEUSERHandler_Execute_m15507_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_CREATE_ZOMBIEUSERHandler_Execute_m15507_MethodInfo;
static MethodInfo* GC_CREATE_ZOMBIEUSERHandler_t2590_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_CREATE_ZOMBIEUSERHandler_Execute_m15507_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_CREATE_ZOMBIEUSERHandler_t2590_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_CREATE_ZOMBIEUSERHandler_t2590_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_CREATE_ZOMBIEUSERHandler_t2590_0_0_0;
extern Il2CppType GC_CREATE_ZOMBIEUSERHandler_t2590_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_CREATE_ZOMBIEUSERHandler_t2590;
extern TypeInfo GC_CREATE_ZOMBIEUSERHandler_t2590_il2cpp_TypeInfo;
TypeInfo GC_CREATE_ZOMBIEUSERHandler_t2590_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_CREATE_ZOMBIEUSERHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_CREATE_ZOMBIEUSERHandler_t2590_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_CREATE_ZOMBIEUSERHandler_t2590_il2cpp_TypeInfo/* element_class */
	, GC_CREATE_ZOMBIEUSERHandler_t2590_InterfacesTypeInfos/* implemented_interfaces */
	, GC_CREATE_ZOMBIEUSERHandler_t2590_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_CREATE_ZOMBIEUSERHandler_t2590_il2cpp_TypeInfo/* cast_class */
	, &GC_CREATE_ZOMBIEUSERHandler_t2590_0_0_0/* byval_arg */
	, &GC_CREATE_ZOMBIEUSERHandler_t2590_1_0_0/* this_arg */
	, GC_CREATE_ZOMBIEUSERHandler_t2590_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_CREATE_ZOMBIEUSERHandler_t2590)/* instance_size */
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
// SPacket.SocketInstance.GC_DAILYLUCKYDRAW_FAILHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_DAILYLUCKYDRAW_F.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_DAILYLUCKYDRAW_FAILHandler_t2591_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_DAILYLUCKYDRAW_FAILHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_DAILYLUCKYDRAW_FMethodDeclarations.h"

// GC_DAILYLUCKYDRAW_FAIL
#include "AssemblyU2DCSharp_GC_DAILYLUCKYDRAW_FAIL.h"
// Games.DailyLuckyDraw.DailyLuckyDrawData
#include "AssemblyU2DCSharp_Games_DailyLuckyDraw_DailyLuckyDrawData.h"
extern TypeInfo GC_DAILYLUCKYDRAW_FAIL_t3212_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
// Games.DailyLuckyDraw.DailyLuckyDrawData
#include "AssemblyU2DCSharp_Games_DailyLuckyDraw_DailyLuckyDrawDataMethodDeclarations.h"
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_DailyLuckyDrawData_m35206_MethodInfo;
extern MethodInfo DailyLuckyDrawData_HandlePacket_m33284_MethodInfo;


// System.Void SPacket.SocketInstance.GC_DAILYLUCKYDRAW_FAILHandler::.ctor()
extern MethodInfo GC_DAILYLUCKYDRAW_FAILHandler__ctor_m15508_MethodInfo;
 void GC_DAILYLUCKYDRAW_FAILHandler__ctor_m15508 (GC_DAILYLUCKYDRAW_FAILHandler_t2591 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_DAILYLUCKYDRAW_FAILHandler::Execute(PacketDistributed)
extern MethodInfo GC_DAILYLUCKYDRAW_FAILHandler_Execute_m15509_MethodInfo;
 uint32_t GC_DAILYLUCKYDRAW_FAILHandler_Execute_m15509 (GC_DAILYLUCKYDRAW_FAILHandler_t2591 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_DAILYLUCKYDRAW_FAIL_t3212 * V_0 = {0};
	{
		V_0 = ((GC_DAILYLUCKYDRAW_FAIL_t3212 *)Castclass(___ipacket, InitializedTypeInfo(&GC_DAILYLUCKYDRAW_FAIL_t3212_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_0);
		DailyLuckyDrawData_t4713 * L_1 = PlayerData_get_DailyLuckyDrawData_m35206(L_0, /*hidden argument*/&PlayerData_get_DailyLuckyDrawData_m35206_MethodInfo);
		NullCheck(L_1);
		DailyLuckyDrawData_HandlePacket_m33284(L_1, V_0, /*hidden argument*/&DailyLuckyDrawData_HandlePacket_m33284_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_DAILYLUCKYDRAW_FAILHandler
extern TypeInfo GC_DAILYLUCKYDRAW_FAILHandler_t2591_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_DAILYLUCKYDRAW_FAILHandler::.ctor()
MethodInfo GC_DAILYLUCKYDRAW_FAILHandler__ctor_m15508_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_DAILYLUCKYDRAW_FAILHandler__ctor_m15508/* method */
	, &GC_DAILYLUCKYDRAW_FAILHandler_t2591_il2cpp_TypeInfo/* declaring_type */
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
	, 8984/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_DAILYLUCKYDRAW_FAILHandler_t2591_GC_DAILYLUCKYDRAW_FAILHandler_Execute_m15509_ParameterInfos[] = 
{
	{"ipacket", 0, 134222412, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_DAILYLUCKYDRAW_FAILHandler_t2591_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_DAILYLUCKYDRAW_FAILHandler::Execute(PacketDistributed)
MethodInfo GC_DAILYLUCKYDRAW_FAILHandler_Execute_m15509_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_DAILYLUCKYDRAW_FAILHandler_Execute_m15509/* method */
	, &GC_DAILYLUCKYDRAW_FAILHandler_t2591_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_DAILYLUCKYDRAW_FAILHandler_t2591_GC_DAILYLUCKYDRAW_FAILHandler_Execute_m15509_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8985/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_DAILYLUCKYDRAW_FAILHandler_t2591_MethodInfos[] =
{
	&GC_DAILYLUCKYDRAW_FAILHandler__ctor_m15508_MethodInfo,
	&GC_DAILYLUCKYDRAW_FAILHandler_Execute_m15509_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_DAILYLUCKYDRAW_FAILHandler_Execute_m15509_MethodInfo;
static MethodInfo* GC_DAILYLUCKYDRAW_FAILHandler_t2591_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_DAILYLUCKYDRAW_FAILHandler_Execute_m15509_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_DAILYLUCKYDRAW_FAILHandler_t2591_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_DAILYLUCKYDRAW_FAILHandler_t2591_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_DAILYLUCKYDRAW_FAILHandler_t2591_0_0_0;
extern Il2CppType GC_DAILYLUCKYDRAW_FAILHandler_t2591_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_DAILYLUCKYDRAW_FAILHandler_t2591;
extern TypeInfo GC_DAILYLUCKYDRAW_FAILHandler_t2591_il2cpp_TypeInfo;
TypeInfo GC_DAILYLUCKYDRAW_FAILHandler_t2591_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_DAILYLUCKYDRAW_FAILHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_DAILYLUCKYDRAW_FAILHandler_t2591_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_DAILYLUCKYDRAW_FAILHandler_t2591_il2cpp_TypeInfo/* element_class */
	, GC_DAILYLUCKYDRAW_FAILHandler_t2591_InterfacesTypeInfos/* implemented_interfaces */
	, GC_DAILYLUCKYDRAW_FAILHandler_t2591_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_DAILYLUCKYDRAW_FAILHandler_t2591_il2cpp_TypeInfo/* cast_class */
	, &GC_DAILYLUCKYDRAW_FAILHandler_t2591_0_0_0/* byval_arg */
	, &GC_DAILYLUCKYDRAW_FAILHandler_t2591_1_0_0/* this_arg */
	, GC_DAILYLUCKYDRAW_FAILHandler_t2591_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_DAILYLUCKYDRAW_FAILHandler_t2591)/* instance_size */
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
// SPacket.SocketInstance.GC_DAILYLUCKYDRAW_GAINBONUSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_DAILYLUCKYDRAW_G.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_DAILYLUCKYDRAW_GAINBONUSHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_DAILYLUCKYDRAW_GMethodDeclarations.h"

// GC_DAILYLUCKYDRAW_GAINBONUS
#include "AssemblyU2DCSharp_GC_DAILYLUCKYDRAW_GAINBONUS.h"
extern TypeInfo GC_DAILYLUCKYDRAW_GAINBONUS_t3209_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_DailyLuckyDrawData_m35206_MethodInfo;
extern MethodInfo DailyLuckyDrawData_HandlePacket_m33282_MethodInfo;


// System.Void SPacket.SocketInstance.GC_DAILYLUCKYDRAW_GAINBONUSHandler::.ctor()
extern MethodInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler__ctor_m15510_MethodInfo;
 void GC_DAILYLUCKYDRAW_GAINBONUSHandler__ctor_m15510 (GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_DAILYLUCKYDRAW_GAINBONUSHandler::Execute(PacketDistributed)
extern MethodInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler_Execute_m15511_MethodInfo;
 uint32_t GC_DAILYLUCKYDRAW_GAINBONUSHandler_Execute_m15511 (GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_DAILYLUCKYDRAW_GAINBONUS_t3209 * V_0 = {0};
	{
		V_0 = ((GC_DAILYLUCKYDRAW_GAINBONUS_t3209 *)Castclass(___ipacket, InitializedTypeInfo(&GC_DAILYLUCKYDRAW_GAINBONUS_t3209_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_0);
		DailyLuckyDrawData_t4713 * L_1 = PlayerData_get_DailyLuckyDrawData_m35206(L_0, /*hidden argument*/&PlayerData_get_DailyLuckyDrawData_m35206_MethodInfo);
		NullCheck(L_1);
		DailyLuckyDrawData_HandlePacket_m33282(L_1, V_0, /*hidden argument*/&DailyLuckyDrawData_HandlePacket_m33282_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_DAILYLUCKYDRAW_GAINBONUSHandler
extern TypeInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_DAILYLUCKYDRAW_GAINBONUSHandler::.ctor()
MethodInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler__ctor_m15510_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_DAILYLUCKYDRAW_GAINBONUSHandler__ctor_m15510/* method */
	, &GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_il2cpp_TypeInfo/* declaring_type */
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
	, 8986/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_GC_DAILYLUCKYDRAW_GAINBONUSHandler_Execute_m15511_ParameterInfos[] = 
{
	{"ipacket", 0, 134222413, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_DAILYLUCKYDRAW_GAINBONUSHandler::Execute(PacketDistributed)
MethodInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler_Execute_m15511_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_DAILYLUCKYDRAW_GAINBONUSHandler_Execute_m15511/* method */
	, &GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_GC_DAILYLUCKYDRAW_GAINBONUSHandler_Execute_m15511_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8987/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_MethodInfos[] =
{
	&GC_DAILYLUCKYDRAW_GAINBONUSHandler__ctor_m15510_MethodInfo,
	&GC_DAILYLUCKYDRAW_GAINBONUSHandler_Execute_m15511_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler_Execute_m15511_MethodInfo;
static MethodInfo* GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_DAILYLUCKYDRAW_GAINBONUSHandler_Execute_m15511_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_0_0_0;
extern Il2CppType GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592;
extern TypeInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_il2cpp_TypeInfo;
TypeInfo GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_DAILYLUCKYDRAW_GAINBONUSHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_il2cpp_TypeInfo/* element_class */
	, GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_InterfacesTypeInfos/* implemented_interfaces */
	, GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_il2cpp_TypeInfo/* cast_class */
	, &GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_0_0_0/* byval_arg */
	, &GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_1_0_0/* this_arg */
	, GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_DAILYLUCKYDRAW_GAINBONUSHandler_t2592)/* instance_size */
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
// SPacket.SocketInstance.GC_DAILYLUCKYDRAW_UPDATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_DAILYLUCKYDRAW_U.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_DAILYLUCKYDRAW_UPDATEHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_DAILYLUCKYDRAW_UMethodDeclarations.h"

// GC_DAILYLUCKYDRAW_UPDATE
#include "AssemblyU2DCSharp_GC_DAILYLUCKYDRAW_UPDATE.h"
extern TypeInfo GC_DAILYLUCKYDRAW_UPDATE_t3210_il2cpp_TypeInfo;
extern TypeInfo GameManager_t2172_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo GameManager_get_PlayerDataPool_m14621_MethodInfo;
extern MethodInfo PlayerData_get_DailyLuckyDrawData_m35206_MethodInfo;
extern MethodInfo DailyLuckyDrawData_HandlePacket_m33283_MethodInfo;


// System.Void SPacket.SocketInstance.GC_DAILYLUCKYDRAW_UPDATEHandler::.ctor()
extern MethodInfo GC_DAILYLUCKYDRAW_UPDATEHandler__ctor_m15512_MethodInfo;
 void GC_DAILYLUCKYDRAW_UPDATEHandler__ctor_m15512 (GC_DAILYLUCKYDRAW_UPDATEHandler_t2593 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_DAILYLUCKYDRAW_UPDATEHandler::Execute(PacketDistributed)
extern MethodInfo GC_DAILYLUCKYDRAW_UPDATEHandler_Execute_m15513_MethodInfo;
 uint32_t GC_DAILYLUCKYDRAW_UPDATEHandler_Execute_m15513 (GC_DAILYLUCKYDRAW_UPDATEHandler_t2593 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_DAILYLUCKYDRAW_UPDATE_t3210 * V_0 = {0};
	{
		V_0 = ((GC_DAILYLUCKYDRAW_UPDATE_t3210 *)Castclass(___ipacket, InitializedTypeInfo(&GC_DAILYLUCKYDRAW_UPDATE_t3210_il2cpp_TypeInfo)));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo));
		NullCheck((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager));
		PlayerData_t2179 * L_0 = GameManager_get_PlayerDataPool_m14621((((GameManager_t2172_StaticFields*)InitializedTypeInfo(&GameManager_t2172_il2cpp_TypeInfo)->static_fields)->___gameManager), /*hidden argument*/&GameManager_get_PlayerDataPool_m14621_MethodInfo);
		NullCheck(L_0);
		DailyLuckyDrawData_t4713 * L_1 = PlayerData_get_DailyLuckyDrawData_m35206(L_0, /*hidden argument*/&PlayerData_get_DailyLuckyDrawData_m35206_MethodInfo);
		NullCheck(L_1);
		DailyLuckyDrawData_HandlePacket_m33283(L_1, V_0, /*hidden argument*/&DailyLuckyDrawData_HandlePacket_m33283_MethodInfo);
		return 2;
	}
}
// Metadata Definition SPacket.SocketInstance.GC_DAILYLUCKYDRAW_UPDATEHandler
extern TypeInfo GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_DAILYLUCKYDRAW_UPDATEHandler::.ctor()
MethodInfo GC_DAILYLUCKYDRAW_UPDATEHandler__ctor_m15512_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_DAILYLUCKYDRAW_UPDATEHandler__ctor_m15512/* method */
	, &GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_il2cpp_TypeInfo/* declaring_type */
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
	, 8988/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_GC_DAILYLUCKYDRAW_UPDATEHandler_Execute_m15513_ParameterInfos[] = 
{
	{"ipacket", 0, 134222414, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_DAILYLUCKYDRAW_UPDATEHandler::Execute(PacketDistributed)
MethodInfo GC_DAILYLUCKYDRAW_UPDATEHandler_Execute_m15513_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_DAILYLUCKYDRAW_UPDATEHandler_Execute_m15513/* method */
	, &GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_GC_DAILYLUCKYDRAW_UPDATEHandler_Execute_m15513_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8989/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_MethodInfos[] =
{
	&GC_DAILYLUCKYDRAW_UPDATEHandler__ctor_m15512_MethodInfo,
	&GC_DAILYLUCKYDRAW_UPDATEHandler_Execute_m15513_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_DAILYLUCKYDRAW_UPDATEHandler_Execute_m15513_MethodInfo;
static MethodInfo* GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_DAILYLUCKYDRAW_UPDATEHandler_Execute_m15513_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_0_0_0;
extern Il2CppType GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_DAILYLUCKYDRAW_UPDATEHandler_t2593;
extern TypeInfo GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_il2cpp_TypeInfo;
TypeInfo GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_DAILYLUCKYDRAW_UPDATEHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_il2cpp_TypeInfo/* element_class */
	, GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_InterfacesTypeInfos/* implemented_interfaces */
	, GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_il2cpp_TypeInfo/* cast_class */
	, &GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_0_0_0/* byval_arg */
	, &GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_1_0_0/* this_arg */
	, GC_DAILYLUCKYDRAW_UPDATEHandler_t2593_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_DAILYLUCKYDRAW_UPDATEHandler_t2593)/* instance_size */
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
// SPacket.SocketInstance.GC_DAILYMISSION_UPDATE_NEW_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_DAILYMISSION_UPD.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_il2cpp_TypeInfo;
// SPacket.SocketInstance.GC_DAILYMISSION_UPDATE_NEW_RETHandler
#include "AssemblyU2DCSharp_SPacket_SocketInstance_GC_DAILYMISSION_UPDMethodDeclarations.h"

// GC_DAILYMISSION_UPDATE_NEW_RET
#include "AssemblyU2DCSharp_GC_DAILYMISSION_UPDATE_NEW_RET.h"
extern TypeInfo GC_DAILYMISSION_UPDATE_NEW_RET_t3542_il2cpp_TypeInfo;
extern MethodInfo Object__ctor_m4074_MethodInfo;


// System.Void SPacket.SocketInstance.GC_DAILYMISSION_UPDATE_NEW_RETHandler::.ctor()
extern MethodInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler__ctor_m15514_MethodInfo;
 void GC_DAILYMISSION_UPDATE_NEW_RETHandler__ctor_m15514 (GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.UInt32 SPacket.SocketInstance.GC_DAILYMISSION_UPDATE_NEW_RETHandler::Execute(PacketDistributed)
extern MethodInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler_Execute_m15515_MethodInfo;
 uint32_t GC_DAILYMISSION_UPDATE_NEW_RETHandler_Execute_m15515 (GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594 * __this, PacketDistributed_t2209 * ___ipacket, MethodInfo* method){
	GC_DAILYMISSION_UPDATE_NEW_RET_t3542 * V_0 = {0};
	{
		V_0 = ((GC_DAILYMISSION_UPDATE_NEW_RET_t3542 *)Castclass(___ipacket, InitializedTypeInfo(&GC_DAILYMISSION_UPDATE_NEW_RET_t3542_il2cpp_TypeInfo)));
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
// Metadata Definition SPacket.SocketInstance.GC_DAILYMISSION_UPDATE_NEW_RETHandler
extern TypeInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void SPacket.SocketInstance.GC_DAILYMISSION_UPDATE_NEW_RETHandler::.ctor()
MethodInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler__ctor_m15514_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GC_DAILYMISSION_UPDATE_NEW_RETHandler__ctor_m15514/* method */
	, &GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_il2cpp_TypeInfo/* declaring_type */
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
	, 8990/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType PacketDistributed_t2209_0_0_0;
static ParameterInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_GC_DAILYMISSION_UPDATE_NEW_RETHandler_Execute_m15515_ParameterInfos[] = 
{
	{"ipacket", 0, 134222415, &EmptyCustomAttributesCache, &PacketDistributed_t2209_0_0_0},
};
extern TypeInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_il2cpp_TypeInfo;
extern Il2CppType UInt32_t1028_0_0_0;
extern void* RuntimeInvoker_UInt32_t1028_Object_t (MethodInfo* method, void* obj, void** args);
// System.UInt32 SPacket.SocketInstance.GC_DAILYMISSION_UPDATE_NEW_RETHandler::Execute(PacketDistributed)
MethodInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler_Execute_m15515_MethodInfo = 
{
	"Execute"/* name */
	, (methodPointerType)&GC_DAILYMISSION_UPDATE_NEW_RETHandler_Execute_m15515/* method */
	, &GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t1028_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t1028_Object_t/* invoker_method */
	, GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_GC_DAILYMISSION_UPDATE_NEW_RETHandler_Execute_m15515_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8991/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_MethodInfos[] =
{
	&GC_DAILYMISSION_UPDATE_NEW_RETHandler__ctor_m15514_MethodInfo,
	&GC_DAILYMISSION_UPDATE_NEW_RETHandler_Execute_m15515_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler_Execute_m15515_MethodInfo;
static MethodInfo* GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GC_DAILYMISSION_UPDATE_NEW_RETHandler_Execute_m15515_MethodInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static TypeInfo* GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_InterfacesTypeInfos[] = 
{
	&Ipacket_t2528_il2cpp_TypeInfo,
};
extern TypeInfo Ipacket_t2528_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_InterfacesOffsets[] = 
{
	{ &Ipacket_t2528_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_0_0_0;
extern Il2CppType GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594;
extern TypeInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_il2cpp_TypeInfo;
TypeInfo GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "GC_DAILYMISSION_UPDATE_NEW_RETHandler"/* name */
	, "SPacket.SocketInstance"/* namespaze */
	, GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_il2cpp_TypeInfo/* element_class */
	, GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_InterfacesTypeInfos/* implemented_interfaces */
	, GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_il2cpp_TypeInfo/* cast_class */
	, &GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_0_0_0/* byval_arg */
	, &GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_1_0_0/* this_arg */
	, GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GC_DAILYMISSION_UPDATE_NEW_RETHandler_t2594)/* instance_size */
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
