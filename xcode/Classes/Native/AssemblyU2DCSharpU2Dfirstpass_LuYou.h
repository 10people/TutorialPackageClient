#pragma once
#include <stdint.h>
// System.String
struct String_t;
// LuYou/LuYouImplement
struct LuYouImplement_t906;
// LuYou
struct LuYou_t907;
// LuYou/RecordingStartedDelegate
struct RecordingStartedDelegate_t910;
// LuYou/RecordingStopedDelegate
struct RecordingStopedDelegate_t911;
// LuYou/RecordingFailedDelegate
struct RecordingFailedDelegate_t912;
// LuYou/RecordingWarningDelegate
struct RecordingWarningDelegate_t913;
// LuYou/RecordingTimeDelegate
struct RecordingTimeDelegate_t914;
// LuYou/SharerPreingDelegate
struct SharerPreingDelegate_t915;
// LuYou/SharerPreparedDelegate
struct SharerPreparedDelegate_t916;
// LuYou/SharerStartedDelegate
struct SharerStartedDelegate_t917;
// LuYou/SharerProgressDelegate
struct SharerProgressDelegate_t919;
// LuYou/SharerCompleteDelegate
struct SharerCompleteDelegate_t920;
// LuYou/SharerFailedDelegate
struct SharerFailedDelegate_t921;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// LuYou
struct LuYou_t907  : public MonoBehaviour_t18
{
	// System.Boolean LuYou::enableIOS
	bool ___enableIOS;
	// System.Boolean LuYou::enableAndroid
	bool ___enableAndroid;
	// System.String LuYou::packageName
	String_t* ___packageName;
	// System.String LuYou::packageKey
	String_t* ___packageKey;
	// System.Int32 LuYou::minimumRecordingTime
	int32_t ___minimumRecordingTime;
	// System.Int32 LuYou::maximumRecordingTime
	int32_t ___maximumRecordingTime;
	// System.Boolean LuYou::showLuyouUI
	bool ___showLuyouUI;
};
struct LuYou_t907_StaticFields{
	// System.Boolean LuYou::iOSEnabled_
	bool ___iOSEnabled_;
	// System.Boolean LuYou::androidEnabled_
	bool ___androidEnabled_;
	// LuYou/LuYouImplement LuYou::luYouImpl_
	LuYouImplement_t906 * ___luYouImpl_;
	// LuYou LuYou::instance
	LuYou_t907 * ___instance;
	// LuYou/RecordingStartedDelegate LuYou::RecordingStarted
	RecordingStartedDelegate_t910 * ___RecordingStarted;
	// LuYou/RecordingStopedDelegate LuYou::RecordingStoped
	RecordingStopedDelegate_t911 * ___RecordingStoped;
	// LuYou/RecordingFailedDelegate LuYou::RecordingFailed
	RecordingFailedDelegate_t912 * ___RecordingFailed;
	// LuYou/RecordingWarningDelegate LuYou::RecordingWarning
	RecordingWarningDelegate_t913 * ___RecordingWarning;
	// LuYou/RecordingTimeDelegate LuYou::RecordingTime
	RecordingTimeDelegate_t914 * ___RecordingTime;
	// LuYou/SharerPreingDelegate LuYou::SharerPreing
	SharerPreingDelegate_t915 * ___SharerPreing;
	// LuYou/SharerPreparedDelegate LuYou::SharerPrepared
	SharerPreparedDelegate_t916 * ___SharerPrepared;
	// LuYou/SharerStartedDelegate LuYou::SharerStarted
	SharerStartedDelegate_t917 * ___SharerStarted;
	// LuYou/SharerProgressDelegate LuYou::SharerProgress
	SharerProgressDelegate_t919 * ___SharerProgress;
	// LuYou/SharerCompleteDelegate LuYou::SharerComplete
	SharerCompleteDelegate_t920 * ___SharerComplete;
	// LuYou/SharerFailedDelegate LuYou::SharerFailed
	SharerFailedDelegate_t921 * ___SharerFailed;
};
