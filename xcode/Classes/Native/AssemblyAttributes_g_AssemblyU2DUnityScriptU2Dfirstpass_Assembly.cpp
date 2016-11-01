#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo RuntimeCompatibilityAttribute_t1044_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m6597_MethodInfo;
extern TypeInfo DebuggableAttribute_t5972_il2cpp_TypeInfo;
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttribute.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttributeMethodDeclarations.h"
extern MethodInfo DebuggableAttribute__ctor_m42379_MethodInfo;
void g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t1044 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t1044 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t1044_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m6597(tmp, &RuntimeCompatibilityAttribute__ctor_m6597_MethodInfo);
		extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m6598_MethodInfo;
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m6598(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m6598_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		DebuggableAttribute_t5972 * tmp;
		tmp = (DebuggableAttribute_t5972 *)il2cpp_codegen_object_new (&DebuggableAttribute_t5972_il2cpp_TypeInfo);
		DebuggableAttribute__ctor_m42379(tmp, 257, &DebuggableAttribute__ctor_m42379_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly__CustomAttributeCache = {
2,
NULL,
&g_AssemblyU2DUnityScriptU2Dfirstpass_Assembly_CustomAttributesCacheGenerator
};
