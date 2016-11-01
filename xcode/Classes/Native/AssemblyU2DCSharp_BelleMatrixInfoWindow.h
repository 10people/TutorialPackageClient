#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// BelleMatrixDetailBand
struct BelleMatrixDetailBand_t1875;
// UILabel
struct UILabel_t1176;
// UIImageButton
struct UIImageButton_t1204;
// BelleMatrixInfoItem
struct BelleMatrixInfoItem_t1877;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BelleMatrixInfoWindow
struct BelleMatrixInfoWindow_t1876  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject BelleMatrixInfoWindow::m_belleMatrixItem
	GameObject_t9 * ___m_belleMatrixItem;
	// UnityEngine.GameObject BelleMatrixInfoWindow::m_matrixGrid
	GameObject_t9 * ___m_matrixGrid;
	// BelleMatrixDetailBand BelleMatrixInfoWindow::matrixDetailBand
	BelleMatrixDetailBand_t1875 * ___matrixDetailBand;
	// UILabel BelleMatrixInfoWindow::m_LabelBtnActive
	UILabel_t1176 * ___m_LabelBtnActive;
	// UIImageButton BelleMatrixInfoWindow::btnActive
	UIImageButton_t1204 * ___btnActive;
	// UnityEngine.Color BelleMatrixInfoWindow::m_ColorHighlight
	Color_t939  ___m_ColorHighlight;
	// UnityEngine.Color BelleMatrixInfoWindow::m_ColorDisable
	Color_t939  ___m_ColorDisable;
	// System.Int32 BelleMatrixInfoWindow::m_curShowMatrixID
	int32_t ___m_curShowMatrixID;
	// BelleMatrixInfoItem BelleMatrixInfoWindow::m_curSelectMatrix
	BelleMatrixInfoItem_t1877 * ___m_curSelectMatrix;
};
