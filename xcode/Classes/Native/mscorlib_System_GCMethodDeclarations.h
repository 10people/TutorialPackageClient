#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.GC
struct GC_t8247;
// System.Object
struct Object_t;

// System.Int32 System.GC::get_MaxGeneration()
 int32_t GC_get_MaxGeneration_m56824 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::InternalCollect(System.Int32)
 void GC_InternalCollect_m56825 (Object_t * __this/* static, unused */, int32_t ___generation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::Collect()
 void GC_Collect_m39893 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::SuppressFinalize(System.Object)
 void GC_SuppressFinalize_m45635 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
