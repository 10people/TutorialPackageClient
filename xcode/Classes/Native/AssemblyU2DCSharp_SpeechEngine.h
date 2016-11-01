#pragma once
#include <stdint.h>
// SpeechEngine
struct SpeechEngine_t1763;
// System.String
struct String_t;
// SpeechEngine/TextProcessHandler
struct TextProcessHandler_t1760;
// SpeechEngine/ErrorProcessHandler
struct ErrorProcessHandler_t1761;
// SpeechEngine/SpeechEventHandler
struct SpeechEventHandler_t1762;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpeechEngine/SpeechStatus
#include "AssemblyU2DCSharp_SpeechEngine_SpeechStatus.h"
// SpeechEngine
struct SpeechEngine_t1763  : public MonoBehaviour_t18
{
	// SpeechEngine/TextProcessHandler SpeechEngine::m_TextHandler
	TextProcessHandler_t1760 * ___m_TextHandler;
	// SpeechEngine/ErrorProcessHandler SpeechEngine::m_ErrorHandler
	ErrorProcessHandler_t1761 * ___m_ErrorHandler;
	// SpeechEngine/SpeechEventHandler SpeechEngine::m_TaskStartHandler
	SpeechEventHandler_t1762 * ___m_TaskStartHandler;
	// SpeechEngine/SpeechEventHandler SpeechEngine::m_TaskOverHandler
	SpeechEventHandler_t1762 * ___m_TaskOverHandler;
	// SpeechEngine/SpeechEventHandler SpeechEngine::m_RecordBeginHandler
	SpeechEventHandler_t1762 * ___m_RecordBeginHandler;
	// SpeechEngine/SpeechEventHandler SpeechEngine::m_RecordEndHandler
	SpeechEventHandler_t1762 * ___m_RecordEndHandler;
	// SpeechEngine/SpeechEventHandler SpeechEngine::m_RecordReadyHandler
	SpeechEventHandler_t1762 * ___m_RecordReadyHandler;
	// SpeechEngine/SpeechEventHandler SpeechEngine::m_TaskCancleHandler
	SpeechEventHandler_t1762 * ___m_TaskCancleHandler;
	// SpeechEngine/SpeechEventHandler SpeechEngine::m_AudioPlayOverHandler
	SpeechEventHandler_t1762 * ___m_AudioPlayOverHandler;
	// SpeechEngine/SpeechEventHandler SpeechEngine::m_AudioDecodeError
	SpeechEventHandler_t1762 * ___m_AudioDecodeError;
};
struct SpeechEngine_t1763_StaticFields{
	// SpeechEngine SpeechEngine::m_Instance
	SpeechEngine_t1763 * ___m_Instance;
	// System.String SpeechEngine::m_sAppId
	String_t* ___m_sAppId;
	// System.String SpeechEngine::m_sAppKey
	String_t* ___m_sAppKey;
	// System.Boolean SpeechEngine::m_bInited
	bool ___m_bInited;
	// SpeechEngine/SpeechStatus SpeechEngine::m_Status
	int32_t ___m_Status;
};
