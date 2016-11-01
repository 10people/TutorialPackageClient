#pragma once
#include <stdint.h>
// System.String
struct String_t;
// MessageBoxLogic/OnWaitTimeOut
struct OnWaitTimeOut_t1549;
// System.Object
#include "mscorlib_System_Object.h"
// MessageBoxLogic/PASSWORD
#include "AssemblyU2DCSharp_MessageBoxLogic_PASSWORD.h"
// MessageBoxLogic/WaitBoxInfo
struct WaitBoxInfo_t1550  : public Object_t
{
	// System.String MessageBoxLogic/WaitBoxInfo::_text
	String_t* ____text;
	// System.Single MessageBoxLogic/WaitBoxInfo::_duration
	float ____duration;
	// System.Single MessageBoxLogic/WaitBoxInfo::_delay
	float ____delay;
	// MessageBoxLogic/OnWaitTimeOut MessageBoxLogic/WaitBoxInfo::_delWaitTimeOut
	OnWaitTimeOut_t1549 * ____delWaitTimeOut;
	// MessageBoxLogic/PASSWORD MessageBoxLogic/WaitBoxInfo::_password
	int32_t ____password;
};
