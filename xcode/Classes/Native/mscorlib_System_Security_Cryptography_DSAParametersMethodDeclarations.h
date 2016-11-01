#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t6479;
struct DSAParameters_t6479_marshaled;

void DSAParameters_t6479_marshal(const DSAParameters_t6479& unmarshaled, DSAParameters_t6479_marshaled& marshaled);
void DSAParameters_t6479_marshal_back(const DSAParameters_t6479_marshaled& marshaled, DSAParameters_t6479& unmarshaled);
void DSAParameters_t6479_marshal_cleanup(DSAParameters_t6479_marshaled& marshaled);
