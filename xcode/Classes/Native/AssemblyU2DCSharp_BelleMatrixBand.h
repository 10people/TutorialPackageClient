#pragma once
#include <stdint.h>
// BelleMatrixBandItem[]
struct BelleMatrixBandItemU5BU5D_t1868;
// UnityEngine.GameObject
struct GameObject_t9;
// BelleMatrixBand/MatrixBelleInfo[]
struct MatrixBelleInfoU5BU5D_t1870;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// System.Collections.Generic.List`1<RecommondBelleData>
struct List_1_t1871;
// System.Collections.Generic.List`1<SelectBelleData>
struct List_1_t1872;
// BelleMatrixBand
struct BelleMatrixBand_t1873;
// SelectBelleData
struct SelectBelleData_t1874;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BelleMatrixBand
struct BelleMatrixBand_t1873  : public MonoBehaviour_t18
{
	// BelleMatrixBandItem[] BelleMatrixBand::m_BelleBandBtns
	BelleMatrixBandItemU5BU5D_t1868* ___m_BelleBandBtns;
	// System.Int32 BelleMatrixBand::m_hasBattleCount
	int32_t ___m_hasBattleCount;
	// System.Int32 BelleMatrixBand::m_curMatrixCanPutBelles
	int32_t ___m_curMatrixCanPutBelles;
	// UnityEngine.GameObject BelleMatrixBand::m_myBelleWindow
	GameObject_t9 * ___m_myBelleWindow;
	// System.Int32 BelleMatrixBand::m_curMatrixIndex
	int32_t ___m_curMatrixIndex;
	// BelleMatrixBand/MatrixBelleInfo[] BelleMatrixBand::m_MatrixBelleInfos
	MatrixBelleInfoU5BU5D_t1870* ___m_MatrixBelleInfos;
	// System.Collections.Generic.List`1<System.Int32> BelleMatrixBand::hasInMatirxBelles
	List_1_t90 * ___hasInMatirxBelles;
	// System.Collections.Generic.List`1<RecommondBelleData> BelleMatrixBand::recomonBelleDatas
	List_1_t1871 * ___recomonBelleDatas;
	// System.Collections.Generic.List`1<SelectBelleData> BelleMatrixBand::SelectBelleList
	List_1_t1872 * ___SelectBelleList;
	// SelectBelleData BelleMatrixBand::m_selectBelleData
	SelectBelleData_t1874 * ___m_selectBelleData;
};
struct BelleMatrixBand_t1873_StaticFields{
	// System.Int32 BelleMatrixBand::BELLE_AFFECTION_TYPE
	int32_t ___BELLE_AFFECTION_TYPE;
	// BelleMatrixBand BelleMatrixBand::m_instance
	BelleMatrixBand_t1873 * ___m_instance;
};
