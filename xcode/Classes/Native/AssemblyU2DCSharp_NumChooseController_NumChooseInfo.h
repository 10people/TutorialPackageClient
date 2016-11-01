#pragma once
#include <stdint.h>
// System.String
struct String_t;
// NumChooseController/OKClickDelegate
struct OKClickDelegate_t1813;
// System.Object
#include "mscorlib_System_Object.h"
// NumChooseController/NumChooseInfo
struct NumChooseInfo_t1814  : public Object_t
{
	// System.Int32 NumChooseController/NumChooseInfo::_minValue
	int32_t ____minValue;
	// System.Int32 NumChooseController/NumChooseInfo::_maxValue
	int32_t ____maxValue;
	// System.String NumChooseController/NumChooseInfo::_szTitle
	String_t* ____szTitle;
	// NumChooseController/OKClickDelegate NumChooseController/NumChooseInfo::_okClickFun
	OKClickDelegate_t1813 * ____okClickFun;
	// System.Int32 NumChooseController/NumChooseInfo::_stepValue
	int32_t ____stepValue;
	// System.String NumChooseController/NumChooseInfo::_totalTitle
	String_t* ____totalTitle;
	// System.String NumChooseController/NumChooseInfo::_okbuttomTitle
	String_t* ____okbuttomTitle;
	// System.Boolean NumChooseController/NumChooseInfo::_showComsume
	bool ____showComsume;
	// System.String NumChooseController/NumChooseInfo::_comsumeName
	String_t* ____comsumeName;
	// System.String NumChooseController/NumChooseInfo::_comsumeicon
	String_t* ____comsumeicon;
	// System.Int32 NumChooseController/NumChooseInfo::_comsumeNum
	int32_t ____comsumeNum;
};
