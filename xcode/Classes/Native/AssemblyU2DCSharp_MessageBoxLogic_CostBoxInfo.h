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
// MessageBoxLogic/CostBoxInfo
struct CostBoxInfo_t1551  : public Object_t
{
	// System.String MessageBoxLogic/CostBoxInfo::_text
	String_t* ____text;
	// System.String MessageBoxLogic/CostBoxInfo::_textSupplement
	String_t* ____textSupplement;
	// System.String MessageBoxLogic/CostBoxInfo::_title
	String_t* ____title;
	// System.String MessageBoxLogic/CostBoxInfo::_costDesc
	String_t* ____costDesc;
	// System.String MessageBoxLogic/CostBoxInfo::_costIcon
	String_t* ____costIcon;
	// System.String MessageBoxLogic/CostBoxInfo::_costCount
	String_t* ____costCount;
	// MessageBoxLogic/OnOKClick MessageBoxLogic/CostBoxInfo::_delOkClick
	OnOKClick_t1546 * ____delOkClick;
	// MessageBoxLogic/OnCancelClick MessageBoxLogic/CostBoxInfo::_delCancelClick
	OnCancelClick_t1547 * ____delCancelClick;
};
