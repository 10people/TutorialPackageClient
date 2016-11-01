#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t333;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Object
#include "mscorlib_System_Object.h"
// GCGame.Table.Tab_HelpItem
struct Tab_HelpItem_t495  : public Object_t
{
	// System.String GCGame.Table.Tab_HelpItem::m_HelpName
	String_t* ___m_HelpName;
	// System.Int32 GCGame.Table.Tab_HelpItem::m_Id
	int32_t ___m_Id;
	// System.String[] GCGame.Table.Tab_HelpItem::m_RecomDesc
	StringU5BU5D_t333* ___m_RecomDesc;
	// System.String[] GCGame.Table.Tab_HelpItem::m_RecomIcon
	StringU5BU5D_t333* ___m_RecomIcon;
	// System.Int32[] GCGame.Table.Tab_HelpItem::m_RecomStar
	Int32U5BU5D_t116* ___m_RecomStar;
	// System.String[] GCGame.Table.Tab_HelpItem::m_RecomTitle
	StringU5BU5D_t333* ___m_RecomTitle;
};
