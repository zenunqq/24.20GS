#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray final
{
public:
	const class AFortPlayerPawn*                  NewItem;
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray) == 0x000010, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray, NewItem) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray::NewItem' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray, CallFunc_Array_AddUnique_ReturnValue) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment final
{
public:
	class USplineMeshComponent*                   SplineMeshSegment;
	uint8                                         Pad_8[0x8];
	struct FTransform                             Temp_struct_Variable;
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;
	bool                                          CallFunc_SetStaticMesh_ReturnValue;
	uint8                                         Pad_79[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment) == 0x000010, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment) == 0x000080, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment, SplineMeshSegment) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment::SplineMeshSegment' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment, Temp_struct_Variable) == 0x000010, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment, CallFunc_AddComponent_ReturnValue) == 0x000070, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment, CallFunc_SetStaticMesh_ReturnValue) == 0x000078, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment, CallFunc_Array_Add_ReturnValue) == 0x00007C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget final
{
public:
	struct FVector                                Tangent;
	struct FVector                                PointA;
	struct FVector                                PointB;
	struct FVector                                SmoothedTangent;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_61[0x7];
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FVector                                K2Node_Select_Default;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget) == 0x0000E8, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, Tangent) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::Tangent' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, PointA) == 0x000018, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::PointA' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, PointB) == 0x000030, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::PointB' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, SmoothedTangent) == 0x000048, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::SmoothedTangent' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, Temp_bool_Variable) == 0x000060, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000068, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_Normal_ReturnValue) == 0x000080, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_VSize_ReturnValue) == 0x000098, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000A0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000B8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget, K2Node_Select_Default) == 0x0000D0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget::K2Node_Select_Default' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha final
{
public:
	double                                        InAlpha;
	bool                                          DrawDebug;
	uint8                                         Pad_9[0x7];
	struct FVector                                PointLocation;
	double                                        SplinePointId;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_31[0x7];
	struct FVector                                CallFunc_GetAutoHorizAndVertVectors_VertVec;
	struct FVector                                CallFunc_GetAutoHorizAndVertVectors_HorizVec;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FVector                                CallFunc_VLerp_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_B2[0x6];
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;
	struct FVector                                CallFunc_VLerp_ReturnValue_1;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;
	struct FVector                                CallFunc_VLerp_ReturnValue_2;
	struct FVector                                CallFunc_VLerp_ReturnValue_3;
	double                                        CallFunc_Lerp_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	struct FVector                                CallFunc_VLerp_ReturnValue_4;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast_1;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast_2;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast_3;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast_4;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha) == 0x0001A0, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, InAlpha) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::InAlpha' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, DrawDebug) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::DrawDebug' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, PointLocation) == 0x000010, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::PointLocation' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, SplinePointId) == 0x000028, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::SplinePointId' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000030, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_GetAutoHorizAndVertVectors_VertVec) == 0x000038, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_GetAutoHorizAndVertVectors_VertVec' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_GetAutoHorizAndVertVectors_HorizVec) == 0x000050, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_GetAutoHorizAndVertVectors_HorizVec' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000068, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000080, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue) == 0x000098, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000B0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_BooleanOR_ReturnValue) == 0x0000B1, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000B8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0000D0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue_1) == 0x0000E8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x000100, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue_2) == 0x000118, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue_3) == 0x000130, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Lerp_ReturnValue) == 0x000148, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Add_VectorVector_ReturnValue) == 0x000150, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_FClamp_ReturnValue) == 0x000168, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue_4) == 0x000170, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast) == 0x000188, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast_1) == 0x00018C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast_2) == 0x000190, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast_3) == 0x000194, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast_4) == 0x000198, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast_4' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles final
{
public:
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_1;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles) == 0x0000B0, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetLocationAndTangentAtSplinePoint_Location) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetLocationAndTangentAtSplinePoint_Location' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent) == 0x000020, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetLocationAndTangentAtSplinePoint_Location_1) == 0x000038, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetLocationAndTangentAtSplinePoint_Location_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1) == 0x000050, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000068, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000070, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetSocketLocation_ReturnValue) == 0x000078, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000090, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_IsValid_ReturnValue_1) == 0x0000A9, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AFortPlayerPawn*                        K2Node_Event_InteractingPawn;
	class UPrimitiveComponent*                    K2Node_Event_InteractComponent;
	float                                         K2Node_Event_ZiplineUsageDuration;
	uint8                                         Pad_1C[0x4];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_4C[0x4];
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_69[0x7];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FTransform                             CallFunc_InvertTransform_ReturnValue;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	uint8                                         Pad_13C[0x4];
	class USplineMeshComponent*                   CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_149[0x7];
	struct FVector                                CallFunc_TransformLocation_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	float                                         K2Node_Event_Damage;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AController*                            K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_2BC[0x4];
	class AFortPlayerPawn*                        K2Node_Event_InteractingPawn_1;
	class UPrimitiveComponent*                    K2Node_Event_InteractComponent_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_2D1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline) == 0x000010, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline) == 0x0002E0, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, EntryPoint) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::EntryPoint' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_InteractingPawn) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_InteractingPawn' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_InteractComponent) == 0x000010, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_InteractComponent' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_ZiplineUsageDuration) == 0x000018, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_ZiplineUsageDuration' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000020, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x000028, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000040, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x000050, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_Greater_IntInt_ReturnValue) == 0x000068, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_GetTransform_ReturnValue) == 0x000070, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_InvertTransform_ReturnValue) == 0x0000D0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_InvertTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_GetNumberOfSplinePoints_ReturnValue_1) == 0x000130, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_GetNumberOfSplinePoints_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000134, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_Array_LastIndex_ReturnValue) == 0x000138, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_Array_Get_Item) == 0x000140, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_TransformLocation_ReturnValue) == 0x000150, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, Temp_int_Array_Index_Variable) == 0x000168, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_Damage) == 0x00016C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_DamageTags) == 0x000170, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_Momentum) == 0x000190, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_HitInfo) == 0x0001A8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_InstigatedBy) == 0x000288, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_DamageCauser) == 0x000290, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_EffectContext) == 0x000298, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_Array_Get_Item_1) == 0x0002B0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, Temp_int_Loop_Counter_Variable) == 0x0002B8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_InteractingPawn_1) == 0x0002C0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_InteractingPawn_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, K2Node_Event_InteractComponent_1) == 0x0002C8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::K2Node_Event_InteractComponent_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_Less_IntInt_ReturnValue) == 0x0002D0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_Add_IntInt_ReturnValue) == 0x0002D4, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0002D8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors final
{
public:
	struct FVector                                highVector;
	struct FVector                                LowVector;
	struct FVector                                VertVec;
	struct FVector                                HorizVec;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors) == 0x0000E0, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, highVector) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::highVector' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, LowVector) == 0x000018, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::LowVector' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, VertVec) == 0x000030, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::VertVec' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, HorizVec) == 0x000048, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::HorizVec' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_BreakVector_X) == 0x000078, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_BreakVector_Y) == 0x000080, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_BreakVector_Z) == 0x000088, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_MakeVector_ReturnValue) == 0x000090, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000B0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_MakeVector_ReturnValue_1) == 0x0000C8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer) == 0x000148, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer, Damage) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer::Damage' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer, DamageTags) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer::DamageTags' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer, Momentum) == 0x000028, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer::Momentum' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer, HitInfo) == 0x000040, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer::HitInfo' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer, InstigatedBy) == 0x000120, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer, DamageCauser) == 0x000128, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer, EffectContext) == 0x000130, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer::EffectContext' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted final
{
public:
	class AFortPlayerPawn*                        InteractingPawn;
	class UPrimitiveComponent*                    InteractComponent;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted) == 0x000010, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted, InteractingPawn) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted::InteractingPawn' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted, InteractComponent) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted::InteractComponent' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped final
{
public:
	class AFortPlayerPawn*                        InteractingPawn;
	class UPrimitiveComponent*                    InteractComponent;
	float                                         ZiplineUsageDuration;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped) == 0x000018, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped, InteractingPawn) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped::InteractingPawn' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped, InteractComponent) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped::InteractComponent' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped, ZiplineUsageDuration) == 0x000010, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped::ZiplineUsageDuration' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray final
{
public:
	const class AFortPlayerPawn*                  Item;
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray) == 0x000010, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray, Item) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray::Item' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray, CallFunc_Array_RemoveItem_ReturnValue) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength final
{
public:
	class UMeshComponent*                         Target;
	float                                         CallFunc_GetSplineLength_ReturnValue;
	uint8                                         Pad_C[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength) == 0x000028, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength, Target) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength::Target' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_GetSplineLength_ReturnValue) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_FTrunc_ReturnValue) == 0x000018, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00001C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent final
{
public:
	bool                                          SetPosition;
	bool                                          SetTangent;
	uint8                                         Pad_2[0x2];
	int32                                         ID;
	double                                        OneDivNumPoints;
	int32                                         SplinePointIDToSet;
	uint8                                         Pad_14[0x4];
	double                                        AlphaForLocation;
	bool                                          IsFirstPoint;
	uint8                                         Pad_21[0x3];
	int32                                         SplinePointId;
	double                                        PrevAlpha;
	double                                        Alpha;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_39[0x7];
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_72[0x6];
	double                                        CallFunc_Lerp_ReturnValue;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	uint8                                         Pad_84[0x4];
	double                                        CallFunc_FClamp_ReturnValue;
	class USplineMeshComponent*                   CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_99[0x7];
	struct FVector                                CallFunc_Calc_Auto_Location_At_Alpha_PointLocation;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_GetAutoHorizAndVertVectors_VertVec;
	struct FVector                                CallFunc_GetAutoHorizAndVertVectors_HorizVec;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;
	struct FVector                                CallFunc_VLerp_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;
	struct FVector                                CallFunc_VLerp_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_179[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_189[0x3];
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_191[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_199[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast_1;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_2;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent) == 0x0001E8, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, SetPosition) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::SetPosition' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, SetTangent) == 0x000001, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::SetTangent' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, ID) == 0x000004, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::ID' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, OneDivNumPoints) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::OneDivNumPoints' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, SplinePointIDToSet) == 0x000010, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::SplinePointIDToSet' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, AlphaForLocation) == 0x000018, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::AlphaForLocation' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, IsFirstPoint) == 0x000020, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::IsFirstPoint' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, SplinePointId) == 0x000024, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::SplinePointId' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, PrevAlpha) == 0x000028, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::PrevAlpha' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, Alpha) == 0x000030, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::Alpha' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000038, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000040, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000058, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000070, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_BooleanOR_ReturnValue) == 0x000071, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Lerp_ReturnValue) == 0x000078, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Array_LastIndex_ReturnValue) == 0x000080, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_FClamp_ReturnValue) == 0x000088, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Array_Get_Item) == 0x000090, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Calc_Auto_Location_At_Alpha_PointLocation) == 0x0000A0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Calc_Auto_Location_At_Alpha_PointLocation' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_GetAutoHorizAndVertVectors_VertVec) == 0x0000D0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_GetAutoHorizAndVertVectors_VertVec' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_GetAutoHorizAndVertVectors_HorizVec) == 0x0000E8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_GetAutoHorizAndVertVectors_HorizVec' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000100, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000118, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_VLerp_ReturnValue) == 0x000130, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x000148, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_VLerp_ReturnValue_1) == 0x000160, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000178, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Subtract_IntInt_ReturnValue) == 0x00017C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000180, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000184, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Greater_IntInt_ReturnValue) == 0x000188, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x00018C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000190, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000194, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_BooleanAND_ReturnValue) == 0x000198, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x00019C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0001A0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x0001A8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x0001B0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_VLerp_Alpha_ImplicitCast) == 0x0001B8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_VLerp_Alpha_ImplicitCast_1) == 0x0001BC, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_VLerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0001C0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x0001C8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0001D0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x0001D8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_B_ImplicitCast_2) == 0x0001E0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_B_ImplicitCast_2' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript final
{
public:
	bool                                          NewLocalVar_0;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_E[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_14[0x4];
	double                                        CallFunc_SelectFloat_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_3E[0x2];
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue_2;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_79[0x3];
	int32                                         Temp_int_Variable_2;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_89[0x7];
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	uint8                                         Pad_AC[0x4];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_B9[0x7];
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_1;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1;
	class USplineMeshComponent*                   CallFunc_AddSplineMeshSegment_SplineMeshSegment;
	struct FVector                                CallFunc_AutoSmoothTanget_SmoothedTangent;
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	uint8                                         Pad_15C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_16D[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	uint8                                         Pad_174[0x4];
	struct FVector                                CallFunc_AutoSmoothTanget_SmoothedTangent_1;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue_3;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_4;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;
	uint8                                         Pad_19A[0x6];
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript) == 0x0001B0, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, NewLocalVar_0) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, Temp_int_Variable) == 0x000004, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, Temp_int_Variable_1) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000D, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_2) == 0x000024, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000028, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue_1) == 0x000034, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000038, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00003C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_BooleanOR_ReturnValue) == 0x00003D, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue_2) == 0x000040, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000044, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_X) == 0x000048, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_Y) == 0x000050, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_Z) == 0x000058, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_X_1) == 0x000060, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_Y_1) == 0x000068, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_Z_1) == 0x000070, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000078, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, Temp_int_Variable_2) == 0x00007C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000080, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetSocketLocation_ReturnValue) == 0x000090, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000A8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x0000B0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x0000B8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetSocketLocation_ReturnValue_1) == 0x0000C0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location) == 0x0000D8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent) == 0x0000F0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location_1) == 0x000108, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1) == 0x000120, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_AddSplineMeshSegment_SplineMeshSegment) == 0x000138, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_AddSplineMeshSegment_SplineMeshSegment' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_AutoSmoothTanget_SmoothedTangent) == 0x000140, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_AutoSmoothTanget_SmoothedTangent' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumMaterials_ReturnValue) == 0x000158, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000160, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000168, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00016C, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x000170, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_AutoSmoothTanget_SmoothedTangent_1) == 0x000178, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_AutoSmoothTanget_SmoothedTangent_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue_3) == 0x000190, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_4) == 0x000194, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000198, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000199, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_SelectFloat_ReturnValue_1) == 0x0001A0, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0001A8, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0001AC, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	ETInteractionType                             InteractionType;
	bool                                          ReturnValue;
	uint8                                         Pad_B[0x5];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract) == 0x000008, "Wrong alignment on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract");
static_assert(sizeof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract) == 0x000028, "Wrong size on PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract, InteractingPawn) == 0x000000, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract, InteractionBeingAttempted) == 0x000008, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract, InteractionType) == 0x000009, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract::InteractionType' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract, ReturnValue) == 0x00000A, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000010, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000020, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}
