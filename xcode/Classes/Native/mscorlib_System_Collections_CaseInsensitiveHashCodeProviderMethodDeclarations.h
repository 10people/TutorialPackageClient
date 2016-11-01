#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t7398;
// System.Globalization.CultureInfo
struct CultureInfo_t6595;
// System.Globalization.TextInfo
struct TextInfo_t7786;
// System.Object
struct Object_t;

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
 void CaseInsensitiveHashCodeProvider__ctor_m54155 (CaseInsensitiveHashCodeProvider_t7398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
 void CaseInsensitiveHashCodeProvider__ctor_m54156 (CaseInsensitiveHashCodeProvider_t7398 * __this, CultureInfo_t6595 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
 void CaseInsensitiveHashCodeProvider__cctor_m54157 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m54158 (Object_t * __this/* static, unused */, CultureInfo_t6595 * ___a, CultureInfo_t6595 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m54159 (Object_t * __this/* static, unused */, TextInfo_t7786 * ___info, CultureInfo_t6595 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
 CaseInsensitiveHashCodeProvider_t7398 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m51214 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
 int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m51278 (CaseInsensitiveHashCodeProvider_t7398 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
