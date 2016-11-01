#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GUIData
struct GUIData_t4888;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t142;

// System.Void GUIData::.ctor()
 void GUIData__ctor_m34675 (GUIData_t4888 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData::.cctor()
 void GUIData__cctor_m34676 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GUIData::GetNotifyData()
 String_t* GUIData_GetNotifyData_m34677 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData::AddNotifyData(System.String,System.Boolean)
 void GUIData_AddNotifyData_m34678 (Object_t * __this/* static, unused */, String_t* ___data, bool ___IsFilterRepeat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIData::AddNotifyData2Client(System.Boolean,System.String,System.Object[])
 void GUIData_AddNotifyData2Client_m34679 (Object_t * __this/* static, unused */, bool ___IsFilterRepeat, String_t* ___data, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
