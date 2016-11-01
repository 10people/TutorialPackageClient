#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.LoadedObjData
struct LoadedObjData_t2119;
struct LoadedObjData_t2119_marshaled;

void LoadedObjData_t2119_marshal(const LoadedObjData_t2119& unmarshaled, LoadedObjData_t2119_marshaled& marshaled);
void LoadedObjData_t2119_marshal_back(const LoadedObjData_t2119_marshaled& marshaled, LoadedObjData_t2119& unmarshaled);
void LoadedObjData_t2119_marshal_cleanup(LoadedObjData_t2119_marshaled& marshaled);
