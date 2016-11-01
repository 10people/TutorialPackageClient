#pragma once
#include <stdint.h>
// System.String
struct String_t;
// MessageBoxLogic/OnOKClick
struct OnOKClick_t1546;
// MessageBoxLogic/OnCancelClick
struct OnCancelClick_t1547;
// System.Object
#include "mscorlib_System_Object.h"
// MessageBoxLogic/PASSWORD
#include "AssemblyU2DCSharp_MessageBoxLogic_PASSWORD.h"
// MessageBoxLogic/OKCancelInfo
struct OKCancelInfo_t1548  : public Object_t
{
	// System.String MessageBoxLogic/OKCancelInfo::_text
	String_t* ____text;
	// System.String MessageBoxLogic/OKCancelInfo::_title
	String_t* ____title;
	// System.Single MessageBoxLogic/OKCancelInfo::_fCountDown
	float ____fCountDown;
	// System.Int32 MessageBoxLogic/OKCancelInfo::_nCountDownDicID
	int32_t ____nCountDownDicID;
	// MessageBoxLogic/PASSWORD MessageBoxLogic/OKCancelInfo::_password
	int32_t ____password;
	// MessageBoxLogic/OnOKClick MessageBoxLogic/OKCancelInfo::_delOkClick
	OnOKClick_t1546 * ____delOkClick;
	// MessageBoxLogic/OnCancelClick MessageBoxLogic/OKCancelInfo::_delCancelClick
	OnCancelClick_t1547 * ____delCancelClick;
};
