#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t7543;
struct SkeletonBone_t7543_marshaled;

void SkeletonBone_t7543_marshal(const SkeletonBone_t7543& unmarshaled, SkeletonBone_t7543_marshaled& marshaled);
void SkeletonBone_t7543_marshal_back(const SkeletonBone_t7543_marshaled& marshaled, SkeletonBone_t7543& unmarshaled);
void SkeletonBone_t7543_marshal_cleanup(SkeletonBone_t7543_marshaled& marshaled);
