#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpStatus
struct FtpStatus_t7187;
// System.String
struct String_t;
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"

// System.Void System.Net.FtpStatus::.ctor(System.Net.FtpStatusCode,System.String)
 void FtpStatus__ctor_m49940 (FtpStatus_t7187 * __this, int32_t ___statusCode, String_t* ___statusDescription, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatusCode System.Net.FtpStatus::get_StatusCode()
 int32_t FtpStatus_get_StatusCode_m49941 (FtpStatus_t7187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpStatus::get_StatusDescription()
 String_t* FtpStatus_get_StatusDescription_m49942 (FtpStatus_t7187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
