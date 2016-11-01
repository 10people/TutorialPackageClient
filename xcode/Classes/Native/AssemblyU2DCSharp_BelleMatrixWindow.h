#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UIImageButton
struct UIImageButton_t1204;
// UILabel
struct UILabel_t1176;
// BelleMatrixDetailBand
struct BelleMatrixDetailBand_t1875;
// BelleMatrixItem
struct BelleMatrixItem_t1879;
// System.String
struct String_t;
// BelleMatrixWindow
struct BelleMatrixWindow_t1878;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BelleMatrixWindow/SelectFromType
#include "AssemblyU2DCSharp_BelleMatrixWindow_SelectFromType.h"
// BelleMatrixWindow
struct BelleMatrixWindow_t1878  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject BelleMatrixWindow::MatrixListGrid
	GameObject_t9 * ___MatrixListGrid;
	// UnityEngine.GameObject BelleMatrixWindow::m_ObjBelleMatrixItem
	GameObject_t9 * ___m_ObjBelleMatrixItem;
	// UIImageButton BelleMatrixWindow::btnActive
	UIImageButton_t1204 * ___btnActive;
	// UILabel BelleMatrixWindow::m_LabelBtnActive
	UILabel_t1176 * ___m_LabelBtnActive;
	// UILabel BelleMatrixWindow::m_LabelMatrixActiveNum
	UILabel_t1176 * ___m_LabelMatrixActiveNum;
	// UnityEngine.GameObject BelleMatrixWindow::MatrixInfo
	GameObject_t9 * ___MatrixInfo;
	// BelleMatrixDetailBand BelleMatrixWindow::matrixDetailBand
	BelleMatrixDetailBand_t1875 * ___matrixDetailBand;
	// UnityEngine.GameObject BelleMatrixWindow::m_curMatrixBand
	GameObject_t9 * ___m_curMatrixBand;
	// BelleMatrixItem BelleMatrixWindow::m_curSelectMatrix
	BelleMatrixItem_t1879 * ___m_curSelectMatrix;
	// System.String BelleMatrixWindow::m_curBelleID
	String_t* ___m_curBelleID;
	// System.Boolean BelleMatrixWindow::m_bEnableSelectMode
	bool ___m_bEnableSelectMode;
	// System.Int32 BelleMatrixWindow::m_curShowMatrixID
	int32_t ___m_curShowMatrixID;
	// BelleMatrixWindow/SelectFromType BelleMatrixWindow::m_curSelectFromType
	int32_t ___m_curSelectFromType;
	// System.Int32 BelleMatrixWindow::m_curSelectMatrixIndex
	int32_t ___m_curSelectMatrixIndex;
	// System.Int32 BelleMatrixWindow::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
};
struct BelleMatrixWindow_t1878_StaticFields{
	// BelleMatrixWindow BelleMatrixWindow::m_instance
	BelleMatrixWindow_t1878 * ___m_instance;
};
