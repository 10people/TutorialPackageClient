#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// NoticeWindow
struct NoticeWindow_t1608;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// NoticeWindow
struct NoticeWindow_t1608  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject NoticeWindow::ItemParent
	GameObject_t9 * ___ItemParent;
	// UILabel NoticeWindow::m_TitleLabel
	UILabel_t1176 * ___m_TitleLabel;
	// UILabel NoticeWindow::m_NewsLabel
	UILabel_t1176 * ___m_NewsLabel;
	// UnityEngine.GameObject NoticeWindow::NoticeItemObject
	GameObject_t9 * ___NoticeItemObject;
};
struct NoticeWindow_t1608_StaticFields{
	// System.Collections.Generic.List`1<System.String> NoticeWindow::dataList
	List_1_t1333 * ___dataList;
	// System.Collections.Generic.List`1<System.String> NoticeWindow::newsList
	List_1_t1333 * ___newsList;
	// NoticeWindow NoticeWindow::m_Instance
	NoticeWindow_t1608 * ___m_Instance;
};
