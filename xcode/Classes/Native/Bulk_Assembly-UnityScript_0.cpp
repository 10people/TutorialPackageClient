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
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t5973_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Metadata Definition <Module>
static MethodInfo* U3CModuleU3E_t5973_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_AssemblyU2DUnityScript_Image;
extern Il2CppType U3CModuleU3E_t5973_0_0_0;
extern Il2CppType U3CModuleU3E_t5973_1_0_0;
struct U3CModuleU3E_t5973;
extern TypeInfo U3CModuleU3E_t5973_il2cpp_TypeInfo;
TypeInfo U3CModuleU3E_t5973_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DUnityScript_Image/* image */
	, NULL/* gc_desc */
	, "<Module>"/* name */
	, ""/* namespaze */
	, U3CModuleU3E_t5973_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &U3CModuleU3E_t5973_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &U3CModuleU3E_t5973_il2cpp_TypeInfo/* cast_class */
	, &U3CModuleU3E_t5973_0_0_0/* byval_arg */
	, &U3CModuleU3E_t5973_1_0_0/* this_arg */
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
	, sizeof (U3CModuleU3E_t5973)/* instance_size */
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
// rampDownParticle
#include "AssemblyU2DUnityScript_rampDownParticle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo rampDownParticle_t5974_il2cpp_TypeInfo;
// rampDownParticle
#include "AssemblyU2DUnityScript_rampDownParticleMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.ParticleEmitter
#include "UnityEngine_UnityEngine_ParticleEmitter.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo rampDownParticle_t5974_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.ParticleEmitter
#include "UnityEngine_UnityEngine_ParticleEmitterMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m4086_MethodInfo;
extern MethodInfo Component_get_particleEmitter_m41529_MethodInfo;
extern MethodInfo ParticleEmitter_get_minEmission_m41552_MethodInfo;
extern MethodInfo ParticleEmitter_get_maxEmission_m41554_MethodInfo;
extern MethodInfo ParticleEmitter_set_emit_m41375_MethodInfo;
extern MethodInfo Time_get_deltaTime_m4217_MethodInfo;
extern MethodInfo ParticleEmitter_get_emit_m42390_MethodInfo;
extern MethodInfo ParticleEmitter_set_minEmission_m41553_MethodInfo;
extern MethodInfo ParticleEmitter_set_maxEmission_m41555_MethodInfo;


// System.Void rampDownParticle::.ctor()
extern MethodInfo rampDownParticle__ctor_m42380_MethodInfo;
 void rampDownParticle__ctor_m42380 (rampDownParticle_t5974 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m4086(__this, /*hidden argument*/&MonoBehaviour__ctor_m4086_MethodInfo);
		__this->___rampDownTime = (((float)1));
		return;
	}
}
// System.Void rampDownParticle::Start()
extern MethodInfo rampDownParticle_Start_m42381_MethodInfo;
 void rampDownParticle_Start_m42381 (rampDownParticle_t5974 * __this, MethodInfo* method){
	{
		ParticleEmitter_t5081 * L_0 = Component_get_particleEmitter_m41529(__this, /*hidden argument*/&Component_get_particleEmitter_m41529_MethodInfo);
		NullCheck(L_0);
		float L_1 = ParticleEmitter_get_minEmission_m41552(L_0, /*hidden argument*/&ParticleEmitter_get_minEmission_m41552_MethodInfo);
		__this->___origMinEmission = L_1;
		ParticleEmitter_t5081 * L_2 = Component_get_particleEmitter_m41529(__this, /*hidden argument*/&Component_get_particleEmitter_m41529_MethodInfo);
		NullCheck(L_2);
		float L_3 = ParticleEmitter_get_maxEmission_m41554(L_2, /*hidden argument*/&ParticleEmitter_get_maxEmission_m41554_MethodInfo);
		__this->___origMaxEmission = L_3;
		ParticleEmitter_t5081 * L_4 = Component_get_particleEmitter_m41529(__this, /*hidden argument*/&Component_get_particleEmitter_m41529_MethodInfo);
		NullCheck(L_4);
		ParticleEmitter_set_emit_m41375(L_4, 0, /*hidden argument*/&ParticleEmitter_set_emit_m41375_MethodInfo);
		return;
	}
}
// System.Void rampDownParticle::Update()
extern MethodInfo rampDownParticle_Update_m42382_MethodInfo;
 void rampDownParticle_Update_m42382 (rampDownParticle_t5974 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___delayTime);
		float L_1 = (__this->___delayPlusTime);
		if ((((float)((float)(L_0+L_1))) <= ((float)(((float)0)))))
		{
			goto IL_0026;
		}
	}
	{
		float L_2 = (__this->___delayTime);
		float L_3 = Time_get_deltaTime_m4217(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m4217_MethodInfo);
		__this->___delayTime = ((float)(L_2-L_3));
	}

IL_0026:
	{
		float L_4 = (__this->___delayTime);
		if ((((float)L_4) > ((float)(((float)0)))))
		{
			goto IL_004f;
		}
	}
	{
		ParticleEmitter_t5081 * L_5 = Component_get_particleEmitter_m41529(__this, /*hidden argument*/&Component_get_particleEmitter_m41529_MethodInfo);
		NullCheck(L_5);
		bool L_6 = ParticleEmitter_get_emit_m42390(L_5, /*hidden argument*/&ParticleEmitter_get_emit_m42390_MethodInfo);
		if (L_6)
		{
			goto IL_004f;
		}
	}
	{
		ParticleEmitter_t5081 * L_7 = Component_get_particleEmitter_m41529(__this, /*hidden argument*/&Component_get_particleEmitter_m41529_MethodInfo);
		NullCheck(L_7);
		ParticleEmitter_set_emit_m41375(L_7, 1, /*hidden argument*/&ParticleEmitter_set_emit_m41375_MethodInfo);
	}

IL_004f:
	{
		float L_8 = (__this->___delayTime);
		float L_9 = (__this->___delayPlusTime);
		if ((((float)((float)(L_8+L_9))) > ((float)(((float)0)))))
		{
			goto IL_00ba;
		}
	}
	{
		ParticleEmitter_t5081 * L_10 = Component_get_particleEmitter_m41529(__this, /*hidden argument*/&Component_get_particleEmitter_m41529_MethodInfo);
		float L_11 = (__this->___origMinEmission);
		float L_12 = (__this->___rampDownTime);
		NullCheck(L_10);
		ParticleEmitter_set_minEmission_m41553(L_10, ((float)(L_11*L_12)), /*hidden argument*/&ParticleEmitter_set_minEmission_m41553_MethodInfo);
		ParticleEmitter_t5081 * L_13 = Component_get_particleEmitter_m41529(__this, /*hidden argument*/&Component_get_particleEmitter_m41529_MethodInfo);
		float L_14 = (__this->___origMaxEmission);
		float L_15 = (__this->___rampDownTime);
		NullCheck(L_13);
		ParticleEmitter_set_maxEmission_m41555(L_13, ((float)(L_14*L_15)), /*hidden argument*/&ParticleEmitter_set_maxEmission_m41555_MethodInfo);
		float L_16 = (__this->___rampDownTime);
		float L_17 = Time_get_deltaTime_m4217(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m4217_MethodInfo);
		__this->___rampDownTime = ((float)(L_16-L_17));
		float L_18 = (__this->___rampDownTime);
		if ((((float)L_18) >= ((float)(((float)0)))))
		{
			goto IL_00ba;
		}
	}
	{
		__this->___rampDownTime = (((float)0));
	}

IL_00ba:
	{
		return;
	}
}
// System.Void rampDownParticle::Main()
extern MethodInfo rampDownParticle_Main_m42383_MethodInfo;
 void rampDownParticle_Main_m42383 (rampDownParticle_t5974 * __this, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition rampDownParticle
extern Il2CppType Single_t960_0_0_6;
FieldInfo rampDownParticle_t5974____delayTime_FieldInfo = 
{
	"delayTime"/* name */
	, &Single_t960_0_0_6/* type */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* parent */
	, offsetof(rampDownParticle_t5974, ___delayTime)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t960_0_0_6;
FieldInfo rampDownParticle_t5974____delayPlusTime_FieldInfo = 
{
	"delayPlusTime"/* name */
	, &Single_t960_0_0_6/* type */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* parent */
	, offsetof(rampDownParticle_t5974, ___delayPlusTime)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t960_0_0_6;
FieldInfo rampDownParticle_t5974____rampDownTime_FieldInfo = 
{
	"rampDownTime"/* name */
	, &Single_t960_0_0_6/* type */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* parent */
	, offsetof(rampDownParticle_t5974, ___rampDownTime)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t960_0_0_6;
FieldInfo rampDownParticle_t5974____origMinEmission_FieldInfo = 
{
	"origMinEmission"/* name */
	, &Single_t960_0_0_6/* type */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* parent */
	, offsetof(rampDownParticle_t5974, ___origMinEmission)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t960_0_0_6;
FieldInfo rampDownParticle_t5974____origMaxEmission_FieldInfo = 
{
	"origMaxEmission"/* name */
	, &Single_t960_0_0_6/* type */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* parent */
	, offsetof(rampDownParticle_t5974, ___origMaxEmission)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* rampDownParticle_t5974_FieldInfos[] =
{
	&rampDownParticle_t5974____delayTime_FieldInfo,
	&rampDownParticle_t5974____delayPlusTime_FieldInfo,
	&rampDownParticle_t5974____rampDownTime_FieldInfo,
	&rampDownParticle_t5974____origMinEmission_FieldInfo,
	&rampDownParticle_t5974____origMaxEmission_FieldInfo,
	NULL
};
extern TypeInfo rampDownParticle_t5974_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void rampDownParticle::.ctor()
MethodInfo rampDownParticle__ctor_m42380_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&rampDownParticle__ctor_m42380/* method */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* declaring_type */
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
	, 1/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo rampDownParticle_t5974_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void rampDownParticle::Start()
MethodInfo rampDownParticle_Start_m42381_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&rampDownParticle_Start_m42381/* method */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 2/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo rampDownParticle_t5974_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void rampDownParticle::Update()
MethodInfo rampDownParticle_Update_m42382_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&rampDownParticle_Update_m42382/* method */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 3/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo rampDownParticle_t5974_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void rampDownParticle::Main()
MethodInfo rampDownParticle_Main_m42383_MethodInfo = 
{
	"Main"/* name */
	, (methodPointerType)&rampDownParticle_Main_m42383/* method */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 4/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* rampDownParticle_t5974_MethodInfos[] =
{
	&rampDownParticle__ctor_m42380_MethodInfo,
	&rampDownParticle_Start_m42381_MethodInfo,
	&rampDownParticle_Update_m42382_MethodInfo,
	&rampDownParticle_Main_m42383_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4096_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4097_MethodInfo;
extern MethodInfo Object_ToString_m4098_MethodInfo;
extern MethodInfo rampDownParticle_Start_m42381_MethodInfo;
extern MethodInfo rampDownParticle_Update_m42382_MethodInfo;
extern MethodInfo rampDownParticle_Main_m42383_MethodInfo;
static MethodInfo* rampDownParticle_t5974_VTable[] =
{
	&Object_Equals_m4096_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4097_MethodInfo,
	&Object_ToString_m4098_MethodInfo,
	&rampDownParticle_Start_m42381_MethodInfo,
	&rampDownParticle_Update_m42382_MethodInfo,
	&rampDownParticle_Main_m42383_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DUnityScript_Image;
extern Il2CppType rampDownParticle_t5974_0_0_0;
extern Il2CppType rampDownParticle_t5974_1_0_0;
extern TypeInfo MonoBehaviour_t18_il2cpp_TypeInfo;
struct rampDownParticle_t5974;
extern TypeInfo rampDownParticle_t5974_il2cpp_TypeInfo;
TypeInfo rampDownParticle_t5974_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DUnityScript_Image/* image */
	, NULL/* gc_desc */
	, "rampDownParticle"/* name */
	, ""/* namespaze */
	, rampDownParticle_t5974_MethodInfos/* methods */
	, NULL/* properties */
	, rampDownParticle_t5974_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t18_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, rampDownParticle_t5974_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &rampDownParticle_t5974_il2cpp_TypeInfo/* cast_class */
	, &rampDownParticle_t5974_0_0_0/* byval_arg */
	, &rampDownParticle_t5974_1_0_0/* this_arg */
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
	, sizeof (rampDownParticle_t5974)/* instance_size */
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
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// FPSCounter
#include "AssemblyU2DUnityScript_FPSCounter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FPSCounter_t5975_il2cpp_TypeInfo;
// FPSCounter
#include "AssemblyU2DUnityScript_FPSCounterMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.String
#include "mscorlib_System_String.h"
// System.Double
#include "mscorlib_System_Double.h"
extern TypeInfo FPSCounter_t5975_il2cpp_TypeInfo;
extern TypeInfo Rect_t5068_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t5971_il2cpp_TypeInfo;
extern TypeInfo GUI_t5838_il2cpp_TypeInfo;
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m4086_MethodInfo;
extern MethodInfo MonoBehaviour_set_useGUILayout_m42391_MethodInfo;
extern MethodInfo Screen_get_width_m6500_MethodInfo;
extern MethodInfo Screen_get_height_m6501_MethodInfo;
extern MethodInfo Rect__ctor_m41351_MethodInfo;
extern MethodInfo Single_ToString_m39706_MethodInfo;
extern MethodInfo RuntimeServices_op_Addition_m42359_MethodInfo;
extern MethodInfo GUI_Label_m42392_MethodInfo;
extern MethodInfo Time_get_realtimeSinceStartup_m6535_MethodInfo;


// System.Void FPSCounter::.ctor()
extern MethodInfo FPSCounter__ctor_m42384_MethodInfo;
 void FPSCounter__ctor_m42384 (FPSCounter_t5975 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m4086(__this, /*hidden argument*/&MonoBehaviour__ctor_m4086_MethodInfo);
		__this->___updateInterval = (0.5f);
		__this->___x_location = 5;
		__this->___y_location = 5;
		return;
	}
}
// System.Void FPSCounter::Awake()
extern MethodInfo FPSCounter_Awake_m42385_MethodInfo;
 void FPSCounter_Awake_m42385 (FPSCounter_t5975 * __this, MethodInfo* method){
	{
		MonoBehaviour_set_useGUILayout_m42391(__this, 0, /*hidden argument*/&MonoBehaviour_set_useGUILayout_m42391_MethodInfo);
		return;
	}
}
// System.Void FPSCounter::OnGUI()
extern MethodInfo FPSCounter_OnGUI_m42386_MethodInfo;
 void FPSCounter_OnGUI_m42386 (FPSCounter_t5975 * __this, MethodInfo* method){
	{
		int32_t L_0 = Screen_get_width_m6500(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m6500_MethodInfo);
		int32_t L_1 = (__this->___x_location);
		int32_t L_2 = Screen_get_height_m6501(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m6501_MethodInfo);
		int32_t L_3 = (__this->___y_location);
		Rect_t5068  L_4 = {0};
		Rect__ctor_m41351(&L_4, (((float)((int32_t)(L_0-L_1)))), (((float)((int32_t)(L_2-L_3)))), (((float)((int32_t)100))), (((float)((int32_t)30))), /*hidden argument*/&Rect__ctor_m41351_MethodInfo);
		float* L_5 = &(__this->___fps);
		String_t* L_6 = Single_ToString_m39706(L_5, (String_t*) &_stringLiteral3948, /*hidden argument*/&Single_ToString_m39706_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t5971_il2cpp_TypeInfo));
		String_t* L_7 = RuntimeServices_op_Addition_m42359(NULL /*static, unused*/, (String_t*) &_stringLiteral3947, L_6, /*hidden argument*/&RuntimeServices_op_Addition_m42359_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t5838_il2cpp_TypeInfo));
		GUI_Label_m42392(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/&GUI_Label_m42392_MethodInfo);
		return;
	}
}
// System.Void FPSCounter::Start()
extern MethodInfo FPSCounter_Start_m42387_MethodInfo;
 void FPSCounter_Start_m42387 (FPSCounter_t5975 * __this, MethodInfo* method){
	{
		float L_0 = Time_get_realtimeSinceStartup_m6535(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m6535_MethodInfo);
		__this->___lastInterval = (((double)L_0));
		__this->___frames = 0;
		return;
	}
}
// System.Void FPSCounter::Update()
extern MethodInfo FPSCounter_Update_m42388_MethodInfo;
 void FPSCounter_Update_m42388 (FPSCounter_t5975 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	{
		int32_t L_0 = (__this->___frames);
		__this->___frames = ((int32_t)(L_0+1));
		float L_1 = Time_get_realtimeSinceStartup_m6535(NULL /*static, unused*/, /*hidden argument*/&Time_get_realtimeSinceStartup_m6535_MethodInfo);
		V_0 = L_1;
		double L_2 = (__this->___lastInterval);
		float L_3 = (__this->___updateInterval);
		if ((((double)(((double)V_0))) <= ((double)((double)(L_2+(((double)L_3)))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_4 = (__this->___frames);
		double L_5 = (__this->___lastInterval);
		__this->___fps = (((float)((double)((((double)L_4))/((double)((((double)V_0))-L_5))))));
		__this->___frames = 0;
		__this->___lastInterval = (((double)V_0));
	}

IL_0050:
	{
		return;
	}
}
// System.Void FPSCounter::Main()
extern MethodInfo FPSCounter_Main_m42389_MethodInfo;
 void FPSCounter_Main_m42389 (FPSCounter_t5975 * __this, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition FPSCounter
extern Il2CppType Single_t960_0_0_6;
FieldInfo FPSCounter_t5975____updateInterval_FieldInfo = 
{
	"updateInterval"/* name */
	, &Single_t960_0_0_6/* type */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t5975, ___updateInterval)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_6;
FieldInfo FPSCounter_t5975____x_location_FieldInfo = 
{
	"x_location"/* name */
	, &Int32_t73_0_0_6/* type */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t5975, ___x_location)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_6;
FieldInfo FPSCounter_t5975____y_location_FieldInfo = 
{
	"y_location"/* name */
	, &Int32_t73_0_0_6/* type */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t5975, ___y_location)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Double_t918_0_0_1;
FieldInfo FPSCounter_t5975____lastInterval_FieldInfo = 
{
	"lastInterval"/* name */
	, &Double_t918_0_0_1/* type */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t5975, ___lastInterval)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo FPSCounter_t5975____frames_FieldInfo = 
{
	"frames"/* name */
	, &Int32_t73_0_0_1/* type */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t5975, ___frames)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t960_0_0_1;
FieldInfo FPSCounter_t5975____fps_FieldInfo = 
{
	"fps"/* name */
	, &Single_t960_0_0_1/* type */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* parent */
	, offsetof(FPSCounter_t5975, ___fps)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FPSCounter_t5975_FieldInfos[] =
{
	&FPSCounter_t5975____updateInterval_FieldInfo,
	&FPSCounter_t5975____x_location_FieldInfo,
	&FPSCounter_t5975____y_location_FieldInfo,
	&FPSCounter_t5975____lastInterval_FieldInfo,
	&FPSCounter_t5975____frames_FieldInfo,
	&FPSCounter_t5975____fps_FieldInfo,
	NULL
};
extern TypeInfo FPSCounter_t5975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void FPSCounter::.ctor()
MethodInfo FPSCounter__ctor_m42384_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FPSCounter__ctor_m42384/* method */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* declaring_type */
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
	, 5/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo FPSCounter_t5975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void FPSCounter::Awake()
MethodInfo FPSCounter_Awake_m42385_MethodInfo = 
{
	"Awake"/* name */
	, (methodPointerType)&FPSCounter_Awake_m42385/* method */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo FPSCounter_t5975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void FPSCounter::OnGUI()
MethodInfo FPSCounter_OnGUI_m42386_MethodInfo = 
{
	"OnGUI"/* name */
	, (methodPointerType)&FPSCounter_OnGUI_m42386/* method */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 7/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo FPSCounter_t5975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void FPSCounter::Start()
MethodInfo FPSCounter_Start_m42387_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&FPSCounter_Start_m42387/* method */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo FPSCounter_t5975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void FPSCounter::Update()
MethodInfo FPSCounter_Update_m42388_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&FPSCounter_Update_m42388/* method */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 9/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo FPSCounter_t5975_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void FPSCounter::Main()
MethodInfo FPSCounter_Main_m42389_MethodInfo = 
{
	"Main"/* name */
	, (methodPointerType)&FPSCounter_Main_m42389/* method */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 10/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* FPSCounter_t5975_MethodInfos[] =
{
	&FPSCounter__ctor_m42384_MethodInfo,
	&FPSCounter_Awake_m42385_MethodInfo,
	&FPSCounter_OnGUI_m42386_MethodInfo,
	&FPSCounter_Start_m42387_MethodInfo,
	&FPSCounter_Update_m42388_MethodInfo,
	&FPSCounter_Main_m42389_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4096_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4097_MethodInfo;
extern MethodInfo Object_ToString_m4098_MethodInfo;
extern MethodInfo FPSCounter_Awake_m42385_MethodInfo;
extern MethodInfo FPSCounter_OnGUI_m42386_MethodInfo;
extern MethodInfo FPSCounter_Start_m42387_MethodInfo;
extern MethodInfo FPSCounter_Update_m42388_MethodInfo;
extern MethodInfo FPSCounter_Main_m42389_MethodInfo;
static MethodInfo* FPSCounter_t5975_VTable[] =
{
	&Object_Equals_m4096_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4097_MethodInfo,
	&Object_ToString_m4098_MethodInfo,
	&FPSCounter_Awake_m42385_MethodInfo,
	&FPSCounter_OnGUI_m42386_MethodInfo,
	&FPSCounter_Start_m42387_MethodInfo,
	&FPSCounter_Update_m42388_MethodInfo,
	&FPSCounter_Main_m42389_MethodInfo,
};
extern Il2CppImage g_AssemblyU2DUnityScript_Image;
extern Il2CppType FPSCounter_t5975_0_0_0;
extern Il2CppType FPSCounter_t5975_1_0_0;
extern TypeInfo MonoBehaviour_t18_il2cpp_TypeInfo;
struct FPSCounter_t5975;
extern TypeInfo FPSCounter_t5975_il2cpp_TypeInfo;
TypeInfo FPSCounter_t5975_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DUnityScript_Image/* image */
	, NULL/* gc_desc */
	, "FPSCounter"/* name */
	, ""/* namespaze */
	, FPSCounter_t5975_MethodInfos/* methods */
	, NULL/* properties */
	, FPSCounter_t5975_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t18_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, FPSCounter_t5975_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &FPSCounter_t5975_il2cpp_TypeInfo/* cast_class */
	, &FPSCounter_t5975_0_0_0/* byval_arg */
	, &FPSCounter_t5975_1_0_0/* this_arg */
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
	, sizeof (FPSCounter_t5975)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
