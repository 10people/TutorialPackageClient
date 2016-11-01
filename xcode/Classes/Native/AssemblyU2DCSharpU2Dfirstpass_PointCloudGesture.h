#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<PointCloudRegognizer/Point>
struct List_1_t94;
// PointCloudGestureTemplate
struct PointCloudGestureTemplate_t92;
// DiscreteGesture
#include "AssemblyU2DCSharpU2Dfirstpass_DiscreteGesture.h"
// PointCloudGesture
struct PointCloudGesture_t95  : public DiscreteGesture_t5
{
	// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudGesture::RawPoints
	List_1_t94 * ___RawPoints;
	// System.Collections.Generic.List`1<PointCloudRegognizer/Point> PointCloudGesture::NormalizedPoints
	List_1_t94 * ___NormalizedPoints;
	// PointCloudGestureTemplate PointCloudGesture::RecognizedTemplate
	PointCloudGestureTemplate_t92 * ___RecognizedTemplate;
	// System.Single PointCloudGesture::MatchDistance
	float ___MatchDistance;
	// System.Single PointCloudGesture::MatchScore
	float ___MatchScore;
};
