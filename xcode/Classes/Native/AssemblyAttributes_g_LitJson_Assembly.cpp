#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo AssemblyTrademarkAttribute_t6282_il2cpp_TypeInfo;
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribute.h"
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttributeMethodDeclarations.h"
extern MethodInfo AssemblyTrademarkAttribute__ctor_m44129_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t1044_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m6597_MethodInfo;
extern TypeInfo CLSCompliantAttribute_t6357_il2cpp_TypeInfo;
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
extern MethodInfo CLSCompliantAttribute__ctor_m44563_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t6278_il2cpp_TypeInfo;
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
extern MethodInfo AssemblyDescriptionAttribute__ctor_m44125_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t6280_il2cpp_TypeInfo;
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
extern MethodInfo AssemblyTitleAttribute__ctor_m44127_MethodInfo;
extern TypeInfo AssemblyCopyrightAttribute_t6275_il2cpp_TypeInfo;
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCopyrightAttribute__ctor_m44122_MethodInfo;
extern TypeInfo AssemblyConfigurationAttribute_t6279_il2cpp_TypeInfo;
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttribute.h"
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttributeMethodDeclarations.h"
extern MethodInfo AssemblyConfigurationAttribute__ctor_m44126_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t6274_il2cpp_TypeInfo;
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCompanyAttribute__ctor_m44121_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t6276_il2cpp_TypeInfo;
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
extern MethodInfo AssemblyProductAttribute__ctor_m44123_MethodInfo;
void g_LitJson_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyTrademarkAttribute_t6282 * tmp;
		tmp = (AssemblyTrademarkAttribute_t6282 *)il2cpp_codegen_object_new (&AssemblyTrademarkAttribute_t6282_il2cpp_TypeInfo);
		AssemblyTrademarkAttribute__ctor_m44129(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyTrademarkAttribute__ctor_m44129_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t1044 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t1044 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t1044_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m6597(tmp, &RuntimeCompatibilityAttribute__ctor_m6597_MethodInfo);
		extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m6598_MethodInfo;
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m6598(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m6598_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t6357 * tmp;
		tmp = (CLSCompliantAttribute_t6357 *)il2cpp_codegen_object_new (&CLSCompliantAttribute_t6357_il2cpp_TypeInfo);
		CLSCompliantAttribute__ctor_m44563(tmp, true, &CLSCompliantAttribute__ctor_m44563_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t6278 * tmp;
		tmp = (AssemblyDescriptionAttribute_t6278 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t6278_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m44125(tmp, il2cpp_codegen_string_new_wrapper("LitJSON library"), &AssemblyDescriptionAttribute__ctor_m44125_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t6280 * tmp;
		tmp = (AssemblyTitleAttribute_t6280 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t6280_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m44127(tmp, il2cpp_codegen_string_new_wrapper("LitJson"), &AssemblyTitleAttribute__ctor_m44127_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCopyrightAttribute_t6275 * tmp;
		tmp = (AssemblyCopyrightAttribute_t6275 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t6275_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m44122(tmp, il2cpp_codegen_string_new_wrapper("The authors disclaim copyright to this source code"), &AssemblyCopyrightAttribute__ctor_m44122_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		AssemblyConfigurationAttribute_t6279 * tmp;
		tmp = (AssemblyConfigurationAttribute_t6279 *)il2cpp_codegen_object_new (&AssemblyConfigurationAttribute_t6279_il2cpp_TypeInfo);
		AssemblyConfigurationAttribute__ctor_m44126(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyConfigurationAttribute__ctor_m44126_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t6274 * tmp;
		tmp = (AssemblyCompanyAttribute_t6274 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t6274_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m44121(tmp, il2cpp_codegen_string_new_wrapper(""), &AssemblyCompanyAttribute__ctor_m44121_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t6276 * tmp;
		tmp = (AssemblyProductAttribute_t6276 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t6276_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m44123(tmp, il2cpp_codegen_string_new_wrapper("LitJSON"), &AssemblyProductAttribute__ctor_m44123_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_LitJson_Assembly__CustomAttributeCache = {
9,
NULL,
&g_LitJson_Assembly_CustomAttributesCacheGenerator
};
