#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameUIInputValidator
struct GameUIInputValidator_t1197;
// System.String
struct String_t;

// System.Void GameUIInputValidator::.ctor()
 void GameUIInputValidator__ctor_m7122 (GameUIInputValidator_t1197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameUIInputValidator::Start()
 void GameUIInputValidator_Start_m7123 (GameUIInputValidator_t1197 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char GameUIInputValidator::Validate(System.String,System.Char)
 uint16_t GameUIInputValidator_Validate_m7124 (GameUIInputValidator_t1197 * __this, String_t* ___text, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameUIInputValidator::IsValidChar(System.Char)
 bool GameUIInputValidator_IsValidChar_m7125 (GameUIInputValidator_t1197 * __this, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
