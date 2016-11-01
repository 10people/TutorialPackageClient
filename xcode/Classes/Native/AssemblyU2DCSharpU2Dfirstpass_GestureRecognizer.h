#pragma once
#include <stdint.h>
// FingerGestures/IFingerList
struct IFingerList_t30;
// ScreenRaycaster
struct ScreenRaycaster_t17;
// FingerClusterManager
struct FingerClusterManager_t33;
// GestureRecognizerDelegate
struct GestureRecognizerDelegate_t34;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GestureResetMode
#include "AssemblyU2DCSharpU2Dfirstpass_GestureResetMode.h"
// GestureRecognizer/SelectionType
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognizer_SelectionTyp.h"
// GestureRecognizer
struct GestureRecognizer_t25  : public MonoBehaviour_t18
{
	// System.Int32 GestureRecognizer::requiredFingerCount
	int32_t ___requiredFingerCount;
	// System.Int32 GestureRecognizer::MaxSimultaneousGestures
	int32_t ___MaxSimultaneousGestures;
	// GestureResetMode GestureRecognizer::ResetMode
	int32_t ___ResetMode;
	// ScreenRaycaster GestureRecognizer::Raycaster
	ScreenRaycaster_t17 * ___Raycaster;
	// FingerClusterManager GestureRecognizer::ClusterManager
	FingerClusterManager_t33 * ___ClusterManager;
	// GestureRecognizerDelegate GestureRecognizer::Delegate
	GestureRecognizerDelegate_t34 * ___Delegate;
	// System.Boolean GestureRecognizer::UseSendMessage
	bool ___UseSendMessage;
	// System.String GestureRecognizer::EventMessageName
	String_t* ___EventMessageName;
	// UnityEngine.GameObject GestureRecognizer::EventMessageTarget
	GameObject_t9 * ___EventMessageTarget;
	// GestureRecognizer/SelectionType GestureRecognizer::SendMessageToSelection
	int32_t ___SendMessageToSelection;
	// System.Boolean GestureRecognizer::IsExclusive
	bool ___IsExclusive;
};
struct GestureRecognizer_t25_StaticFields{
	// FingerGestures/IFingerList GestureRecognizer::EmptyFingerList
	Object_t * ___EmptyFingerList;
};
