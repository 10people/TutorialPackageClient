#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t6628;
// System.Text.RegularExpressions.IMachine
struct IMachine_t7265;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t6631;
// System.Text.RegularExpressions.Match
struct Match_t6630;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct Match_t6630  : public Group_t6632
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t6628 * ___regex;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t6631 * ___groups;
};
struct Match_t6630_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t6630 * ___empty;
};
