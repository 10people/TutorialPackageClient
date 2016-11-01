#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIInputValidator
struct UIInputValidator_t5313;
// System.String
struct String_t;

// System.Void UIInputValidator::.ctor()
 void UIInputValidator__ctor_m37616 (UIInputValidator_t5313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIInputValidator::Start()
 void UIInputValidator_Start_m37617 (UIInputValidator_t5313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UIInputValidator::Validate(System.String,System.Char)
 uint16_t UIInputValidator_Validate_m37618 (UIInputValidator_t5313 * __this, String_t* ___text, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIInputValidator::IsValidChar(System.Char)
 bool UIInputValidator_IsValidChar_m37619 (UIInputValidator_t5313 * __this, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
