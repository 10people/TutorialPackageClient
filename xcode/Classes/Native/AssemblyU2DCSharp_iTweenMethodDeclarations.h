#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween
struct iTween_t5153;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Hashtable
struct Hashtable_t4372;
// UnityEngine.AudioClip
struct AudioClip_t2147;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.Transform[]
struct TransformU5BU5D_t77;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.Texture2D
struct Texture2D_t1041;
// UnityEngine.Transform
struct Transform_t78;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t142;
// iTween/EasingFunction
struct EasingFunction_t5151;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// iTween/EaseType
#include "AssemblyU2DCSharp_iTween_EaseType.h"

// System.Void iTween::.ctor()
 void iTween__ctor_m36639 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::.cctor()
 void iTween__cctor_m36640 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Init(UnityEngine.GameObject)
 void iTween_Init_m36641 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Single,System.Single)
 void iTween_CameraFadeFrom_m36642 (Object_t * __this/* static, unused */, float ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeFrom(System.Collections.Hashtable)
 void iTween_CameraFadeFrom_m36643 (Object_t * __this/* static, unused */, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Single,System.Single)
 void iTween_CameraFadeTo_m36644 (Object_t * __this/* static, unused */, float ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeTo(System.Collections.Hashtable)
 void iTween_CameraFadeTo_m36645 (Object_t * __this/* static, unused */, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ValueTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ValueTo_m36646 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Single,System.Single)
 void iTween_FadeFrom_m36647 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, float ___alpha, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_FadeFrom_m36648 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Single,System.Single)
 void iTween_FadeTo_m36649 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, float ___alpha, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_FadeTo_m36650 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,UnityEngine.Color,System.Single)
 void iTween_ColorFrom_m36651 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Color_t939  ___color, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ColorFrom_m36652 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,UnityEngine.Color,System.Single)
 void iTween_ColorTo_m36653 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Color_t939  ___color, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ColorTo_m36654 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Single,System.Single,System.Single)
 void iTween_AudioFrom_m36655 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, float ___volume, float ___pitch, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_AudioFrom_m36656 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Single,System.Single,System.Single)
 void iTween_AudioTo_m36657 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, float ___volume, float ___pitch, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_AudioTo_m36658 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,UnityEngine.AudioClip,System.Single)
 void iTween_Stab_m36659 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, AudioClip_t2147 * ___audioclip, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stab(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_Stab_m36660 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_LookFrom_m36661 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___looktarget, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_LookFrom_m36662 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_LookTo_m36663 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___looktarget, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_LookTo_m36664 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveTo_m36665 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___position, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveTo_m36666 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveFrom_m36667 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___position, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveFrom_m36668 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveAdd_m36669 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveAdd(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveAdd_m36670 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveBy_m36671 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveBy(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveBy_m36672 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleTo_m36673 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___scale, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleTo_m36674 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleFrom_m36675 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___scale, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleFrom_m36676 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleAdd_m36677 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleAdd(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleAdd_m36678 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleBy_m36679 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleBy(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleBy_m36680 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateTo_m36681 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___rotation, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateTo(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateTo_m36682 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateFrom_m36683 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___rotation, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateFrom(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateFrom_m36684 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateAdd_m36685 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateAdd(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateAdd_m36686 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateBy_m36687 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateBy(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateBy_m36688 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ShakePosition_m36689 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakePosition(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ShakePosition_m36690 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ShakeScale_m36691 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeScale(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ShakeScale_m36692 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ShakeRotation_m36693 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ShakeRotation(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ShakeRotation_m36694 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_PunchPosition_m36695 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchPosition(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_PunchPosition_m36696 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_PunchRotation_m36697 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchRotation(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_PunchRotation_m36698 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_PunchScale_m36699 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___amount, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PunchScale(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_PunchScale_m36700 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateTargets()
 void iTween_GenerateTargets_m36701 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRectTargets()
 void iTween_GenerateRectTargets_m36702 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorTargets()
 void iTween_GenerateColorTargets_m36703 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector3Targets()
 void iTween_GenerateVector3Targets_m36704 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateVector2Targets()
 void iTween_GenerateVector2Targets_m36705 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateFloatTargets()
 void iTween_GenerateFloatTargets_m36706 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateColorToTargets()
 void iTween_GenerateColorToTargets_m36707 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateAudioToTargets()
 void iTween_GenerateAudioToTargets_m36708 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateStabTargets()
 void iTween_GenerateStabTargets_m36709 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateLookToTargets()
 void iTween_GenerateLookToTargets_m36710 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToPathTargets()
 void iTween_GenerateMoveToPathTargets_m36711 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveToTargets()
 void iTween_GenerateMoveToTargets_m36712 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateMoveByTargets()
 void iTween_GenerateMoveByTargets_m36713 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleToTargets()
 void iTween_GenerateScaleToTargets_m36714 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleByTargets()
 void iTween_GenerateScaleByTargets_m36715 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateScaleAddTargets()
 void iTween_GenerateScaleAddTargets_m36716 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateToTargets()
 void iTween_GenerateRotateToTargets_m36717 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateAddTargets()
 void iTween_GenerateRotateAddTargets_m36718 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateRotateByTargets()
 void iTween_GenerateRotateByTargets_m36719 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakePositionTargets()
 void iTween_GenerateShakePositionTargets_m36720 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeScaleTargets()
 void iTween_GenerateShakeScaleTargets_m36721 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GenerateShakeRotationTargets()
 void iTween_GenerateShakeRotationTargets_m36722 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchPositionTargets()
 void iTween_GeneratePunchPositionTargets_m36723 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchRotationTargets()
 void iTween_GeneratePunchRotationTargets_m36724 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::GeneratePunchScaleTargets()
 void iTween_GeneratePunchScaleTargets_m36725 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRectTargets()
 void iTween_ApplyRectTargets_m36726 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorTargets()
 void iTween_ApplyColorTargets_m36727 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector3Targets()
 void iTween_ApplyVector3Targets_m36728 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyVector2Targets()
 void iTween_ApplyVector2Targets_m36729 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyFloatTargets()
 void iTween_ApplyFloatTargets_m36730 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyColorToTargets()
 void iTween_ApplyColorToTargets_m36731 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyAudioToTargets()
 void iTween_ApplyAudioToTargets_m36732 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyStabTargets()
 void iTween_ApplyStabTargets_m36733 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToPathTargets()
 void iTween_ApplyMoveToPathTargets_m36734 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveToTargets()
 void iTween_ApplyMoveToTargets_m36735 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyMoveByTargets()
 void iTween_ApplyMoveByTargets_m36736 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyScaleToTargets()
 void iTween_ApplyScaleToTargets_m36737 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyLookToTargets()
 void iTween_ApplyLookToTargets_m36738 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateToTargets()
 void iTween_ApplyRotateToTargets_m36739 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyRotateAddTargets()
 void iTween_ApplyRotateAddTargets_m36740 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakePositionTargets()
 void iTween_ApplyShakePositionTargets_m36741 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeScaleTargets()
 void iTween_ApplyShakeScaleTargets_m36742 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyShakeRotationTargets()
 void iTween_ApplyShakeRotationTargets_m36743 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchPositionTargets()
 void iTween_ApplyPunchPositionTargets_m36744 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchRotationTargets()
 void iTween_ApplyPunchRotationTargets_m36745 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ApplyPunchScaleTargets()
 void iTween_ApplyPunchScaleTargets_m36746 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenDelay()
 Object_t * iTween_TweenDelay_m36747 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenStart()
 void iTween_TweenStart_m36748 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::TweenRestart()
 Object_t * iTween_TweenRestart_m36749 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenUpdate()
 void iTween_TweenUpdate_m36750 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenComplete()
 void iTween_TweenComplete_m36751 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::TweenLoop()
 void iTween_TweenLoop_m36752 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect iTween::RectUpdate(UnityEngine.Rect,UnityEngine.Rect,System.Single)
 Rect_t5068  iTween_RectUpdate_m36753 (Object_t * __this/* static, unused */, Rect_t5068  ___currentValue, Rect_t5068  ___targetValue, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Vector3Update(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t121  iTween_Vector3Update_m36754 (Object_t * __this/* static, unused */, Vector3_t121  ___currentValue, Vector3_t121  ___targetValue, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 iTween::Vector2Update(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
 Vector2_t12  iTween_Vector2Update_m36755 (Object_t * __this/* static, unused */, Vector2_t12  ___currentValue, Vector2_t12  ___targetValue, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::FloatUpdate(System.Single,System.Single,System.Single)
 float iTween_FloatUpdate_m36756 (Object_t * __this/* static, unused */, float ___currentValue, float ___targetValue, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_FadeUpdate_m36757 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FadeUpdate(UnityEngine.GameObject,System.Single,System.Single)
 void iTween_FadeUpdate_m36758 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, float ___alpha, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ColorUpdate_m36759 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ColorUpdate(UnityEngine.GameObject,UnityEngine.Color,System.Single)
 void iTween_ColorUpdate_m36760 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Color_t939  ___color, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_AudioUpdate_m36761 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::AudioUpdate(UnityEngine.GameObject,System.Single,System.Single,System.Single)
 void iTween_AudioUpdate_m36762 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, float ___volume, float ___pitch, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_RotateUpdate_m36763 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RotateUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_RotateUpdate_m36764 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___rotation, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_ScaleUpdate_m36765 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ScaleUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_ScaleUpdate_m36766 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___scale, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_MoveUpdate_m36767 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::MoveUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_MoveUpdate_m36768 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___position, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_LookUpdate_m36769 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LookUpdate(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
 void iTween_LookUpdate_m36770 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3_t121  ___looktarget, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Transform[])
 float iTween_PathLength_m36771 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::PathLength(UnityEngine.Vector3[])
 float iTween_PathLength_m36772 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D iTween::CameraTexture(UnityEngine.Color)
 Texture2D_t1041 * iTween_CameraTexture_m36773 (Object_t * __this/* static, unused */, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
 void iTween_PutOnPath_m36774 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Vector3U5BU5D_t1262* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Vector3[],System.Single)
 void iTween_PutOnPath_m36775 (Object_t * __this/* static, unused */, Transform_t78 * ___target, Vector3U5BU5D_t1262* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.GameObject,UnityEngine.Transform[],System.Single)
 void iTween_PutOnPath_m36776 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, TransformU5BU5D_t77* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::PutOnPath(UnityEngine.Transform,UnityEngine.Transform[],System.Single)
 void iTween_PutOnPath_m36777 (Object_t * __this/* static, unused */, Transform_t78 * ___target, TransformU5BU5D_t77* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Transform[],System.Single)
 Vector3_t121  iTween_PointOnPath_m36778 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[])
 void iTween_DrawLine_m36779 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawLine_m36780 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___line, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[])
 void iTween_DrawLine_m36781 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLine(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawLine_m36782 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___line, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[])
 void iTween_DrawLineGizmos_m36783 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawLineGizmos_m36784 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___line, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[])
 void iTween_DrawLineGizmos_m36785 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineGizmos(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawLineGizmos_m36786 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___line, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[])
 void iTween_DrawLineHandles_m36787 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawLineHandles_m36788 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___line, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[])
 void iTween_DrawLineHandles_m36789 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHandles(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawLineHandles_m36790 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___line, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::PointOnPath(UnityEngine.Vector3[],System.Single)
 Vector3_t121  iTween_PointOnPath_m36791 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, float ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[])
 void iTween_DrawPath_m36792 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawPath_m36793 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[])
 void iTween_DrawPath_m36794 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPath(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawPath_m36795 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___path, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[])
 void iTween_DrawPathGizmos_m36796 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawPathGizmos_m36797 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[])
 void iTween_DrawPathGizmos_m36798 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathGizmos(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawPathGizmos_m36799 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___path, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[])
 void iTween_DrawPathHandles_m36800 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Vector3[],UnityEngine.Color)
 void iTween_DrawPathHandles_m36801 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[])
 void iTween_DrawPathHandles_m36802 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHandles(UnityEngine.Transform[],UnityEngine.Color)
 void iTween_DrawPathHandles_m36803 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___path, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDepth(System.Int32)
 void iTween_CameraFadeDepth_m36804 (Object_t * __this/* static, unused */, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeDestroy()
 void iTween_CameraFadeDestroy_m36805 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CameraFadeSwap(UnityEngine.Texture2D)
 void iTween_CameraFadeSwap_m36806 (Object_t * __this/* static, unused */, Texture2D_t1041 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D,System.Int32)
 GameObject_t9 * iTween_CameraFadeAdd_m36807 (Object_t * __this/* static, unused */, Texture2D_t1041 * ___texture, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd(UnityEngine.Texture2D)
 GameObject_t9 * iTween_CameraFadeAdd_m36808 (Object_t * __this/* static, unused */, Texture2D_t1041 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject iTween::CameraFadeAdd()
 GameObject_t9 * iTween_CameraFadeAdd_m36809 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject)
 void iTween_Resume_m36810 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.Boolean)
 void iTween_Resume_m36811 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String)
 void iTween_Resume_m36812 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(UnityEngine.GameObject,System.String,System.Boolean)
 void iTween_Resume_m36813 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, String_t* ___type, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume()
 void iTween_Resume_m36814 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Resume(System.String)
 void iTween_Resume_m36815 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject)
 void iTween_Pause_m36816 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.Boolean)
 void iTween_Pause_m36817 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String)
 void iTween_Pause_m36818 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(UnityEngine.GameObject,System.String,System.Boolean)
 void iTween_Pause_m36819 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, String_t* ___type, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause()
 void iTween_Pause_m36820 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Pause(System.String)
 void iTween_Pause_m36821 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count()
 int32_t iTween_Count_m36822 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(System.String)
 int32_t iTween_Count_m36823 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject)
 int32_t iTween_Count_m36824 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iTween::Count(UnityEngine.GameObject,System.String)
 int32_t iTween_Count_m36825 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop()
 void iTween_Stop_m36826 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(System.String)
 void iTween_Stop_m36827 (Object_t * __this/* static, unused */, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(System.String)
 void iTween_StopByName_m36828 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject)
 void iTween_Stop_m36829 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.Boolean)
 void iTween_Stop_m36830 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String)
 void iTween_Stop_m36831 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String)
 void iTween_StopByName_m36832 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Stop(UnityEngine.GameObject,System.String,System.Boolean)
 void iTween_Stop_m36833 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, String_t* ___type, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::StopByName(UnityEngine.GameObject,System.String,System.Boolean)
 void iTween_StopByName_m36834 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, String_t* ___name, bool ___includechildren, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::Hash(System.Object[])
 Hashtable_t4372 * iTween_Hash_m36835 (Object_t * __this/* static, unused */, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Awake()
 void iTween_Awake_m36836 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iTween::Start()
 Object_t * iTween_Start_m36837 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Update()
 void iTween_Update_m36838 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::FixedUpdate()
 void iTween_FixedUpdate_m36839 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::LateUpdate()
 void iTween_LateUpdate_m36840 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnEnable()
 void iTween_OnEnable_m36841 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::OnDisable()
 void iTween_OnDisable_m36842 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawLineHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
 void iTween_DrawLineHelper_m36843 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___line, Color_t939  ___color, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DrawPathHelper(UnityEngine.Vector3[],UnityEngine.Color,System.String)
 void iTween_DrawPathHelper_m36844 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, Color_t939  ___color, String_t* ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] iTween::PathControlPointGenerator(UnityEngine.Vector3[])
 Vector3U5BU5D_t1262* iTween_PathControlPointGenerator_m36845 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween::Interp(UnityEngine.Vector3[],System.Single)
 Vector3_t121  iTween_Interp_m36846 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___pts, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Launch(UnityEngine.GameObject,System.Collections.Hashtable)
 void iTween_Launch_m36847 (Object_t * __this/* static, unused */, GameObject_t9 * ___target, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable iTween::CleanArgs(System.Collections.Hashtable)
 Hashtable_t4372 * iTween_CleanArgs_m36848 (Object_t * __this/* static, unused */, Hashtable_t4372 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String iTween::GenerateID()
 String_t* iTween_GenerateID_m36849 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::RetrieveArgs()
 void iTween_RetrieveArgs_m36850 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// iTween/EasingFunction iTween::GetEasingFunction(iTween/EaseType)
 EasingFunction_t5151 * iTween_GetEasingFunction_m36851 (Object_t * __this/* static, unused */, int32_t ___easeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::UpdatePercentage()
 void iTween_UpdatePercentage_m36852 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::CallBack(System.String)
 void iTween_CallBack_m36853 (iTween_t5153 * __this, String_t* ___callbackType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::Dispose()
 void iTween_Dispose_m36854 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ConflictCheck()
 void iTween_ConflictCheck_m36855 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::EnableKinematic()
 void iTween_EnableKinematic_m36856 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::DisableKinematic()
 void iTween_DisableKinematic_m36857 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween::ResumeDelay()
 void iTween_ResumeDelay_m36858 (iTween_t5153 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::linear(System.Single,System.Single,System.Single)
 float iTween_linear_m36859 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::clerp(System.Single,System.Single,System.Single)
 float iTween_clerp_m36860 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::spring(System.Single,System.Single,System.Single)
 float iTween_spring_m36861 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuad(System.Single,System.Single,System.Single)
 float iTween_easeInQuad_m36862 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuad(System.Single,System.Single,System.Single)
 float iTween_easeOutQuad_m36863 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuad(System.Single,System.Single,System.Single)
 float iTween_easeInOutQuad_m36864 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCubic(System.Single,System.Single,System.Single)
 float iTween_easeInCubic_m36865 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCubic(System.Single,System.Single,System.Single)
 float iTween_easeOutCubic_m36866 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCubic(System.Single,System.Single,System.Single)
 float iTween_easeInOutCubic_m36867 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuart(System.Single,System.Single,System.Single)
 float iTween_easeInQuart_m36868 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuart(System.Single,System.Single,System.Single)
 float iTween_easeOutQuart_m36869 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuart(System.Single,System.Single,System.Single)
 float iTween_easeInOutQuart_m36870 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInQuint(System.Single,System.Single,System.Single)
 float iTween_easeInQuint_m36871 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutQuint(System.Single,System.Single,System.Single)
 float iTween_easeOutQuint_m36872 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutQuint(System.Single,System.Single,System.Single)
 float iTween_easeInOutQuint_m36873 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInSine(System.Single,System.Single,System.Single)
 float iTween_easeInSine_m36874 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutSine(System.Single,System.Single,System.Single)
 float iTween_easeOutSine_m36875 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutSine(System.Single,System.Single,System.Single)
 float iTween_easeInOutSine_m36876 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInExpo(System.Single,System.Single,System.Single)
 float iTween_easeInExpo_m36877 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutExpo(System.Single,System.Single,System.Single)
 float iTween_easeOutExpo_m36878 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutExpo(System.Single,System.Single,System.Single)
 float iTween_easeInOutExpo_m36879 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInCirc(System.Single,System.Single,System.Single)
 float iTween_easeInCirc_m36880 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutCirc(System.Single,System.Single,System.Single)
 float iTween_easeOutCirc_m36881 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutCirc(System.Single,System.Single,System.Single)
 float iTween_easeInOutCirc_m36882 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBounce(System.Single,System.Single,System.Single)
 float iTween_easeInBounce_m36883 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBounce(System.Single,System.Single,System.Single)
 float iTween_easeOutBounce_m36884 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBounce(System.Single,System.Single,System.Single)
 float iTween_easeInOutBounce_m36885 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInBack(System.Single,System.Single,System.Single)
 float iTween_easeInBack_m36886 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutBack(System.Single,System.Single,System.Single)
 float iTween_easeOutBack_m36887 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutBack(System.Single,System.Single,System.Single)
 float iTween_easeInOutBack_m36888 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::punch(System.Single,System.Single)
 float iTween_punch_m36889 (Object_t * __this/* static, unused */, float ___amplitude, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInElastic(System.Single,System.Single,System.Single)
 float iTween_easeInElastic_m36890 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeOutElastic(System.Single,System.Single,System.Single)
 float iTween_easeOutElastic_m36891 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::easeInOutElastic(System.Single,System.Single,System.Single)
 float iTween_easeInOutElastic_m36892 (Object_t * __this/* static, unused */, float ___start, float ___end, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween::Easing(System.Single,System.Single,System.Single,iTween/EaseType)
 float iTween_Easing_m36893 (Object_t * __this/* static, unused */, float ___a, float ___b, float ___t, int32_t ___easeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
