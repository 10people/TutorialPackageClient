#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UseFlowerNumChooseController/OKClickDelegate
struct OKClickDelegate_t1850;
// System.Object
#include "mscorlib_System_Object.h"
// UseFlowerNumChooseController/FlowerNumChooseInfo
struct FlowerNumChooseInfo_t1851  : public Object_t
{
	// System.Int32 UseFlowerNumChooseController/FlowerNumChooseInfo::_minValue
	int32_t ____minValue;
	// System.Int32 UseFlowerNumChooseController/FlowerNumChooseInfo::_maxValue
	int32_t ____maxValue;
	// System.String UseFlowerNumChooseController/FlowerNumChooseInfo::_szTitle
	String_t* ____szTitle;
	// UseFlowerNumChooseController/OKClickDelegate UseFlowerNumChooseController/FlowerNumChooseInfo::_okClickFun
	OKClickDelegate_t1850 * ____okClickFun;
	// System.Int32 UseFlowerNumChooseController/FlowerNumChooseInfo::_stepValue
	int32_t ____stepValue;
	// System.String UseFlowerNumChooseController/FlowerNumChooseInfo::_itemName
	String_t* ____itemName;
	// System.Int32 UseFlowerNumChooseController/FlowerNumChooseInfo::_dataid
	int32_t ____dataid;
};
