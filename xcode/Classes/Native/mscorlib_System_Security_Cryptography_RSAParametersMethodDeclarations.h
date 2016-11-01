#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t6487;
struct RSAParameters_t6487_marshaled;

void RSAParameters_t6487_marshal(const RSAParameters_t6487& unmarshaled, RSAParameters_t6487_marshaled& marshaled);
void RSAParameters_t6487_marshal_back(const RSAParameters_t6487_marshaled& marshaled, RSAParameters_t6487& unmarshaled);
void RSAParameters_t6487_marshal_cleanup(RSAParameters_t6487_marshaled& marshaled);
