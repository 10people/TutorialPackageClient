#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// JtddSceneControl
struct JtddSceneControl_t5169;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// JtddSceneControl
struct JtddSceneControl_t5169  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject JtddSceneControl::ShaChenGameObject
	GameObject_t9 * ___ShaChenGameObject;
	// UnityEngine.GameObject JtddSceneControl::m_CurSceneObject
	GameObject_t9 * ___m_CurSceneObject;
	// UnityEngine.GameObject JtddSceneControl::m_OldSceneObject
	GameObject_t9 * ___m_OldSceneObject;
	// UnityEngine.GameObject JtddSceneControl::ZudanGameObject
	GameObject_t9 * ___ZudanGameObject;
	// UnityEngine.GameObject JtddSceneControl::ZudanGameObject02
	GameObject_t9 * ___ZudanGameObject02;
};
struct JtddSceneControl_t5169_StaticFields{
	// System.Int32 JtddSceneControl::CurrentSceneTag
	int32_t ___CurrentSceneTag;
	// JtddSceneControl JtddSceneControl::m_instance
	JtddSceneControl_t5169 * ___m_instance;
};
