#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t7446;
struct GcAchievementData_t7446_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t7447;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
 Achievement_t7447 * GcAchievementData_ToAchievement_m51459 (GcAchievementData_t7446 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t7446_marshal(const GcAchievementData_t7446& unmarshaled, GcAchievementData_t7446_marshaled& marshaled);
void GcAchievementData_t7446_marshal_back(const GcAchievementData_t7446_marshaled& marshaled, GcAchievementData_t7446& unmarshaled);
void GcAchievementData_t7446_marshal_cleanup(GcAchievementData_t7446_marshaled& marshaled);
