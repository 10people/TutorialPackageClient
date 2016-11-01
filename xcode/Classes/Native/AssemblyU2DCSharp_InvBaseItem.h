#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<InvStat>
struct List_1_t5243;
// UnityEngine.GameObject
struct GameObject_t9;
// UIAtlas
struct UIAtlas_t1593;
// System.Object
#include "mscorlib_System_Object.h"
// InvBaseItem/Slot
#include "AssemblyU2DCSharp_InvBaseItem_Slot.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// InvBaseItem
struct InvBaseItem_t5244  : public Object_t
{
	// System.Int32 InvBaseItem::id16
	int32_t ___id16;
	// System.String InvBaseItem::name
	String_t* ___name;
	// System.String InvBaseItem::description
	String_t* ___description;
	// InvBaseItem/Slot InvBaseItem::slot
	int32_t ___slot;
	// System.Int32 InvBaseItem::minItemLevel
	int32_t ___minItemLevel;
	// System.Int32 InvBaseItem::maxItemLevel
	int32_t ___maxItemLevel;
	// System.Collections.Generic.List`1<InvStat> InvBaseItem::stats
	List_1_t5243 * ___stats;
	// UnityEngine.GameObject InvBaseItem::attachment
	GameObject_t9 * ___attachment;
	// UnityEngine.Color InvBaseItem::color
	Color_t939  ___color;
	// UIAtlas InvBaseItem::iconAtlas
	UIAtlas_t1593 * ___iconAtlas;
	// System.String InvBaseItem::iconName
	String_t* ___iconName;
};
