#pragma once
#include <stdint.h>
// UIGrid
struct UIGrid_t1199;
// System.String[]
struct StringU5BU5D_t333;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// System.Collections.Generic.List`1<UISprite>
struct List_1_t1305;
// System.Collections.Generic.List`1<UIGrid>
struct List_1_t1315;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ChatInfoSelectLinkLogic/Data>>
struct List_1_t1316;
// ChatInfoSelectLinkLogic
struct ChatInfoSelectLinkLogic_t1317;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ChatInfoSelectLinkLogic/OPEN_TYPE
#include "AssemblyU2DCSharp_ChatInfoSelectLinkLogic_OPEN_TYPE.h"
// ChatInfoSelectLinkLogic
struct ChatInfoSelectLinkLogic_t1317  : public MonoBehaviour_t18
{
	// System.Int32 ChatInfoSelectLinkLogic::m_select
	int32_t ___m_select;
	// UIGrid ChatInfoSelectLinkLogic::m_leftTabGrid
	UIGrid_t1199 * ___m_leftTabGrid;
	// System.String[] ChatInfoSelectLinkLogic::TAB_NORMALS
	StringU5BU5D_t333* ___TAB_NORMALS;
	// System.String[] ChatInfoSelectLinkLogic::TAB_PRESSEDS
	StringU5BU5D_t333* ___TAB_PRESSEDS;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChatInfoSelectLinkLogic::m_tabBtnList
	List_1_t1289 * ___m_tabBtnList;
	// System.Collections.Generic.List`1<UISprite> ChatInfoSelectLinkLogic::m_tabSprList
	List_1_t1305 * ___m_tabSprList;
	// System.Collections.Generic.List`1<UIGrid> ChatInfoSelectLinkLogic::m_gridList
	List_1_t1315 * ___m_gridList;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ChatInfoSelectLinkLogic::m_itemList
	List_1_t1289 * ___m_itemList;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<ChatInfoSelectLinkLogic/Data>> ChatInfoSelectLinkLogic::m_dataList
	List_1_t1316 * ___m_dataList;
};
struct ChatInfoSelectLinkLogic_t1317_StaticFields{
	// System.Int32 ChatInfoSelectLinkLogic::TAB_GRID_COUNT
	int32_t ___TAB_GRID_COUNT;
	// System.Int32 ChatInfoSelectLinkLogic::FastReplyMaxNum
	int32_t ___FastReplyMaxNum;
	// System.Int32 ChatInfoSelectLinkLogic::MaxMissionNum
	int32_t ___MaxMissionNum;
	// System.Int32 ChatInfoSelectLinkLogic::MAX_COMMONITEM_COUNT
	int32_t ___MAX_COMMONITEM_COUNT;
	// ChatInfoSelectLinkLogic/OPEN_TYPE ChatInfoSelectLinkLogic::M_OPEN_TYPE
	int32_t ___M_OPEN_TYPE;
	// ChatInfoSelectLinkLogic ChatInfoSelectLinkLogic::m_instance
	ChatInfoSelectLinkLogic_t1317 * ___m_instance;
};
