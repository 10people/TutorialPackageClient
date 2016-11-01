#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t1194;
// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
#include "UnityEngine_UnityEngine_TouchScreenKeyboard_InternalConstruc.h"

// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
 void TouchScreenKeyboard__ctor_m52364 (TouchScreenKeyboard_t1194 * __this, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
 void TouchScreenKeyboard_Destroy_m52365 (TouchScreenKeyboard_t1194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
 void TouchScreenKeyboard_Finalize_m52366 (TouchScreenKeyboard_t1194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
 void TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m52367 (TouchScreenKeyboard_t1194 * __this, TouchScreenKeyboard_InternalConstructorHelperArguments_t7603 * ___arguments, String_t* ___text, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
 bool TouchScreenKeyboard_get_isSupported_m43895 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
 TouchScreenKeyboard_t1194 * TouchScreenKeyboard_Open_m39043 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean)
 TouchScreenKeyboard_t1194 * TouchScreenKeyboard_Open_m43936 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean)
 TouchScreenKeyboard_t1194 * TouchScreenKeyboard_Open_m39044 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
 TouchScreenKeyboard_t1194 * TouchScreenKeyboard_Open_m52368 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___keyboardType, bool ___autocorrection, bool ___multiline, bool ___secure, bool ___alert, String_t* ___textPlaceholder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TouchScreenKeyboard::get_text()
 String_t* TouchScreenKeyboard_get_text_m39049 (TouchScreenKeyboard_t1194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
 void TouchScreenKeyboard_set_text_m39034 (TouchScreenKeyboard_t1194 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
 void TouchScreenKeyboard_set_hideInput_m39042 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
 bool TouchScreenKeyboard_get_active_m39054 (TouchScreenKeyboard_t1194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
 void TouchScreenKeyboard_set_active_m39048 (TouchScreenKeyboard_t1194 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
 bool TouchScreenKeyboard_get_done_m39051 (TouchScreenKeyboard_t1194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_wasCanceled()
 bool TouchScreenKeyboard_get_wasCanceled_m43896 (TouchScreenKeyboard_t1194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_visible()
 bool TouchScreenKeyboard_get_visible_m39052 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
