#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<PointCloudGestureTemplate>
struct List_1_t100;
// PointCloudRegognizer/GestureNormalizer
struct GestureNormalizer_t98;
// System.Collections.Generic.List`1<PointCloudRegognizer/NormalizedTemplate>
struct List_1_t101;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// PointCloudGesture
struct PointCloudGesture_t95;
// PointCloudRegognizer/NormalizedTemplate
struct NormalizedTemplate_t97;
// DiscreteGestureRecognizer`1<PointCloudGesture>
#include "AssemblyU2DCSharpU2Dfirstpass_DiscreteGestureRecognizer_1_ge_0.h"
// PointCloudRegognizer
struct PointCloudRegognizer_t103  : public DiscreteGestureRecognizer_1_t104
{
	// System.Single PointCloudRegognizer::MinDistanceBetweenSamples
	float ___MinDistanceBetweenSamples;
	// System.Single PointCloudRegognizer::MaxMatchDistance
	float ___MaxMatchDistance;
	// System.Collections.Generic.List`1<PointCloudGestureTemplate> PointCloudRegognizer::Templates
	List_1_t100 * ___Templates;
	// PointCloudRegognizer/GestureNormalizer PointCloudRegognizer::normalizer
	GestureNormalizer_t98 * ___normalizer;
	// System.Collections.Generic.List`1<PointCloudRegognizer/NormalizedTemplate> PointCloudRegognizer::normalizedTemplates
	List_1_t101 * ___normalizedTemplates;
	// PointCloudGesture PointCloudRegognizer::debugLastGesture
	PointCloudGesture_t95 * ___debugLastGesture;
	// PointCloudRegognizer/NormalizedTemplate PointCloudRegognizer::debugLastMatchedTemplate
	NormalizedTemplate_t97 * ___debugLastMatchedTemplate;
};
struct PointCloudRegognizer_t103_StaticFields{
	// System.Int32 PointCloudRegognizer::NormalizedPointCount
	int32_t ___NormalizedPointCount;
	// System.Single PointCloudRegognizer::gizmoSphereRadius
	float ___gizmoSphereRadius;
	// System.Boolean[] PointCloudRegognizer::matched
	BooleanU5BU5D_t102* ___matched;
};
