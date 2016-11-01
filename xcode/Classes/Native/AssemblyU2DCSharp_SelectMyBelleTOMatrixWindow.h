#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UIPanel
struct UIPanel_t1364;
// SelectMyBelleTOMatrixWindow
struct SelectMyBelleTOMatrixWindow_t1880;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// SelectMyBelleTOMatrixWindow
struct SelectMyBelleTOMatrixWindow_t1880  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SelectMyBelleTOMatrixWindow::m_myBelleGrid
	GameObject_t9 * ___m_myBelleGrid;
	// UnityEngine.GameObject SelectMyBelleTOMatrixWindow::m_myBelleItem
	GameObject_t9 * ___m_myBelleItem;
	// UnityEngine.GameObject SelectMyBelleTOMatrixWindow::m_curMatrixBelleItem
	GameObject_t9 * ___m_curMatrixBelleItem;
	// UnityEngine.GameObject SelectMyBelleTOMatrixWindow::m_curMatrixObj
	GameObject_t9 * ___m_curMatrixObj;
	// UnityEngine.Vector3 SelectMyBelleTOMatrixWindow::m_curScrollViewListOriPositon
	Vector3_t121  ___m_curScrollViewListOriPositon;
	// UnityEngine.Vector3 SelectMyBelleTOMatrixWindow::m_curScrollViewListPosition
	Vector3_t121  ___m_curScrollViewListPosition;
	// UnityEngine.Vector4 SelectMyBelleTOMatrixWindow::m_curScrollViewPanelFrom
	Vector4_t942  ___m_curScrollViewPanelFrom;
	// UnityEngine.Vector4 SelectMyBelleTOMatrixWindow::m_curScrollViewPanelTo
	Vector4_t942  ___m_curScrollViewPanelTo;
	// UnityEngine.Vector3 SelectMyBelleTOMatrixWindow::m_scrollPosition
	Vector3_t121  ___m_scrollPosition;
	// UIPanel SelectMyBelleTOMatrixWindow::m_curScrollViwPanel
	UIPanel_t1364 * ___m_curScrollViwPanel;
	// UnityEngine.GameObject SelectMyBelleTOMatrixWindow::m_scrollViewList
	GameObject_t9 * ___m_scrollViewList;
};
struct SelectMyBelleTOMatrixWindow_t1880_StaticFields{
	// SelectMyBelleTOMatrixWindow SelectMyBelleTOMatrixWindow::m_instance
	SelectMyBelleTOMatrixWindow_t1880 * ___m_instance;
};
