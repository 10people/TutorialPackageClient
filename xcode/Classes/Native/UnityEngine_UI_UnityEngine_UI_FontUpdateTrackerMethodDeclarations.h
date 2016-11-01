#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.FontUpdateTracker
struct FontUpdateTracker_t6075;
// UnityEngine.UI.Text
struct Text_t6076;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t5952;
// UnityEngine.Font
struct Font_t5414;

// System.Void UnityEngine.UI.FontUpdateTracker::.cctor()
 void FontUpdateTracker__cctor_m42758 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::TrackText(UnityEngine.UI.Text)
 void FontUpdateTracker_TrackText_m42759 (Object_t * __this/* static, unused */, Text_t6076 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.UI.FontUpdateTracker::RebuildForFont(UnityEngine.Font)
 FontTextureRebuildCallback_t5952 * FontUpdateTracker_RebuildForFont_m42760 (Object_t * __this/* static, unused */, Font_t5414 * ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontUpdateTracker::UntrackText(UnityEngine.UI.Text)
 void FontUpdateTracker_UntrackText_m42761 (Object_t * __this/* static, unused */, Text_t6076 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
