#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Random
struct Random_t7215;

// System.Void System.Random::.ctor()
 void Random__ctor_m51352 (Random_t7215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor(System.Int32)
 void Random__ctor_m57073 (Random_t7215 * __this, int32_t ___Seed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::Sample()
 double Random_Sample_m57074 (Random_t7215 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32,System.Int32)
 int32_t Random_Next_m51353 (Random_t7215 * __this, int32_t ___minValue, int32_t ___maxValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
