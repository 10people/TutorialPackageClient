#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t7448;
struct GcScoreData_t7448_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t7449;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
 Score_t7449 * GcScoreData_ToScore_m51460 (GcScoreData_t7448 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t7448_marshal(const GcScoreData_t7448& unmarshaled, GcScoreData_t7448_marshaled& marshaled);
void GcScoreData_t7448_marshal_back(const GcScoreData_t7448_marshaled& marshaled, GcScoreData_t7448& unmarshaled);
void GcScoreData_t7448_marshal_cleanup(GcScoreData_t7448_marshaled& marshaled);
