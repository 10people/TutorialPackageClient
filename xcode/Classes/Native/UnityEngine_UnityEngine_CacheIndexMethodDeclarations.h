#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t7617;
struct CacheIndex_t7617_marshaled;

void CacheIndex_t7617_marshal(const CacheIndex_t7617& unmarshaled, CacheIndex_t7617_marshaled& marshaled);
void CacheIndex_t7617_marshal_back(const CacheIndex_t7617_marshaled& marshaled, CacheIndex_t7617& unmarshaled);
void CacheIndex_t7617_marshal_cleanup(CacheIndex_t7617_marshaled& marshaled);
