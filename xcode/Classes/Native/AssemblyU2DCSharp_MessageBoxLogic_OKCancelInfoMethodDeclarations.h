#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MessageBoxLogic/OKCancelInfo
struct OKCancelInfo_t1548;
// System.String
struct String_t;
// MessageBoxLogic/OnOKClick
struct OnOKClick_t1546;
// MessageBoxLogic/OnCancelClick
struct OnCancelClick_t1547;
// MessageBoxLogic/PASSWORD
#include "AssemblyU2DCSharp_MessageBoxLogic_PASSWORD.h"

// System.Void MessageBoxLogic/OKCancelInfo::.ctor(System.String,System.String,MessageBoxLogic/OnOKClick,MessageBoxLogic/OnCancelClick,System.Single,MessageBoxLogic/PASSWORD,System.Int32)
 void OKCancelInfo__ctor_m9598 (OKCancelInfo_t1548 * __this, String_t* ___text, String_t* ___title, OnOKClick_t1546 * ___funcOKClicked, OnCancelClick_t1547 * ___funcCancelClicked, float ___fCountDown, int32_t ___password, int32_t ___nCountDownDicID, MethodInfo* method) IL2CPP_METHOD_ATTR;
