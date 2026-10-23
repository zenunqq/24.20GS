#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment final
{
public:
	class USplineMeshComponent*                   SplineMeshSegment;
	uint8                                         Pad_8[0x8];
	struct FTransform                             Temp_struct_Variable;
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;
	bool                                          CallFunc_SetStaticMesh_ReturnValue;
};
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment) == 0x000010, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment) == 0x000080, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment, SplineMeshSegment) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment::SplineMeshSegment' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment, Temp_struct_Variable) == 0x000010, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment, CallFunc_AddComponent_ReturnValue) == 0x000070, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment, CallFunc_SetStaticMesh_ReturnValue) == 0x000078, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget final
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
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget) == 0x0000E8, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, Tangent) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::Tangent' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, PointA) == 0x000018, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::PointA' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, PointB) == 0x000030, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::PointB' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, SmoothedTangent) == 0x000048, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::SmoothedTangent' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, Temp_bool_Variable) == 0x000060, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000068, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_Normal_ReturnValue) == 0x000080, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_VSize_ReturnValue) == 0x000098, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000A0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000B8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget, K2Node_Select_Default) == 0x0000D0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget::K2Node_Select_Default' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha final
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
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha) == 0x0001A0, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, InAlpha) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::InAlpha' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, DrawDebug) == 0x000008, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::DrawDebug' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, PointLocation) == 0x000010, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::PointLocation' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, SplinePointId) == 0x000028, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::SplinePointId' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_GetAutoHorizAndVertVectors_VertVec) == 0x000038, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_GetAutoHorizAndVertVectors_VertVec' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_GetAutoHorizAndVertVectors_HorizVec) == 0x000050, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_GetAutoHorizAndVertVectors_HorizVec' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000068, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000080, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue) == 0x000098, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000B0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_BooleanOR_ReturnValue) == 0x0000B1, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000B8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0000D0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue_1) == 0x0000E8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x000100, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue_2) == 0x000118, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue_3) == 0x000130, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Lerp_ReturnValue) == 0x000148, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_Add_VectorVector_ReturnValue) == 0x000150, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_FClamp_ReturnValue) == 0x000168, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_ReturnValue_4) == 0x000170, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast) == 0x000188, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast_1) == 0x00018C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast_2) == 0x000190, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast_3) == 0x000194, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha, CallFunc_VLerp_Alpha_ImplicitCast_4) == 0x000198, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha::CallFunc_VLerp_Alpha_ImplicitCast_4' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles final
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
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles) == 0x0000B0, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetLocationAndTangentAtSplinePoint_Location) == 0x000008, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetLocationAndTangentAtSplinePoint_Location' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent) == 0x000020, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetLocationAndTangentAtSplinePoint_Location_1) == 0x000038, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetLocationAndTangentAtSplinePoint_Location_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1) == 0x000050, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000068, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000070, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetSocketLocation_ReturnValue) == 0x000078, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000090, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles, CallFunc_IsValid_ReturnValue_1) == 0x0000A9, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class AFortPlayerPawn*                        K2Node_CustomEvent_PlayerPawn_1;
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;
	uint8                                         Pad_34[0x4];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_45[0x3];
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;
	class AFortPlayerPawn*                        K2Node_CustomEvent_PlayerPawn;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_75[0x3];
	class AActor*                                 K2Node_CustomEvent_DamagedActor;
	float                                         K2Node_CustomEvent_Damage;
	uint8                                         Pad_84[0x4];
	class AController*                            K2Node_CustomEvent_InstigatedBy;
	class AActor*                                 K2Node_CustomEvent_DamageCauser;
	struct FVector                                K2Node_CustomEvent_HitLocation;
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;
	class FName                                   K2Node_CustomEvent_BoneName;
	uint8                                         Pad_BC[0x4];
	struct FVector                                K2Node_CustomEvent_Momentum;
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	uint8                                         Pad_F1[0x3];
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline) == 0x0000F8, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, EntryPoint) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_PlayerPawn_1) == 0x000010, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_PlayerPawn_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x000018, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000030, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000038, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x000048, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_PlayerPawn) == 0x000060, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_PlayerPawn' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_Array_Get_Item) == 0x000068, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_DamagedActor) == 0x000078, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_Damage) == 0x000080, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_InstigatedBy) == 0x000088, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_DamageCauser) == 0x000090, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_HitLocation) == 0x000098, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_FHitComponent) == 0x0000B0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_BoneName) == 0x0000B8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CustomEvent_Momentum) == 0x0000C0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CreateDelegate_OutputDelegate) == 0x0000D8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000E4, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_GetValueAsBool_ReturnValue) == 0x0000F0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000F4, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors final
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
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors) == 0x0000E0, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, highVector) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::highVector' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, LowVector) == 0x000018, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::LowVector' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, VertVec) == 0x000030, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::VertVec' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, HorizVec) == 0x000048, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::HorizVec' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000060, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_BreakVector_X) == 0x000078, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_BreakVector_Y) == 0x000080, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_BreakVector_Z) == 0x000088, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_MakeVector_ReturnValue) == 0x000090, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000B0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors, CallFunc_MakeVector_ReturnValue_1) == 0x0000C8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied) == 0x000060, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied, DamagedActor) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied, Damage) == 0x000008, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied::Damage' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied, InstigatedBy) == 0x000010, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied, DamageCauser) == 0x000018, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied, HitLocation) == 0x000020, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied, FHitComponent) == 0x000038, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied, BoneName) == 0x000040, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied::BoneName' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied, Momentum) == 0x000048, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied::Momentum' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_PlayerAttachedToZipline final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
};
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_PlayerAttachedToZipline) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_PlayerAttachedToZipline");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_PlayerAttachedToZipline) == 0x000008, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_PlayerAttachedToZipline");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_PlayerAttachedToZipline, PlayerPawn) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_PlayerAttachedToZipline::PlayerPawn' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_PlayerDetachedFromZipline final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
};
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_PlayerDetachedFromZipline) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_PlayerDetachedFromZipline");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_PlayerDetachedFromZipline) == 0x000008, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_PlayerDetachedFromZipline");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_PlayerDetachedFromZipline, PlayerPawn) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_PlayerDetachedFromZipline::PlayerPawn' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength final
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
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength) == 0x000028, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength, Target) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength::Target' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_GetSplineLength_ReturnValue) == 0x000008, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_FTrunc_ReturnValue) == 0x000018, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00001C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision final
{
public:
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;
	uint8                                         Pad_1C[0x4];
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	uint8                                         Pad_104[0x4];
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;
};
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision) == 0x000200, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000018, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000020, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision, CallFunc_Subtract_IntInt_ReturnValue) == 0x000100, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x000108, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x000120, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent final
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
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_69[0x7];
	struct FVector                                CallFunc_Calc_Auto_Location_At_Alpha_PointLocation;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	struct FVector                                CallFunc_GetAutoHorizAndVertVectors_VertVec;
	struct FVector                                CallFunc_GetAutoHorizAndVertVectors_HorizVec;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;
	struct FVector                                CallFunc_VLerp_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;
	struct FVector                                CallFunc_VLerp_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_143[0x1];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_151[0x3];
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_159[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_161[0x3];
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
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent) == 0x0001B0, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, SetPosition) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::SetPosition' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, SetTangent) == 0x000001, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::SetTangent' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, ID) == 0x000004, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::ID' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, OneDivNumPoints) == 0x000008, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::OneDivNumPoints' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, SplinePointIDToSet) == 0x000010, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::SplinePointIDToSet' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, AlphaForLocation) == 0x000018, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::AlphaForLocation' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, IsFirstPoint) == 0x000020, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::IsFirstPoint' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, SplinePointId) == 0x000024, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::SplinePointId' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, PrevAlpha) == 0x000028, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::PrevAlpha' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, Alpha) == 0x000030, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::Alpha' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000038, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000050, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000068, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Calc_Auto_Location_At_Alpha_PointLocation) == 0x000070, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Calc_Auto_Location_At_Alpha_PointLocation' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Lerp_ReturnValue) == 0x000088, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_FClamp_ReturnValue) == 0x000090, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_GetAutoHorizAndVertVectors_VertVec) == 0x000098, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_GetAutoHorizAndVertVectors_VertVec' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_GetAutoHorizAndVertVectors_HorizVec) == 0x0000B0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_GetAutoHorizAndVertVectors_HorizVec' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000C8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0000E0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_VLerp_ReturnValue) == 0x0000F8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x000110, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_VLerp_ReturnValue_1) == 0x000128, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000140, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000141, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_BooleanOR_ReturnValue) == 0x000142, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Subtract_IntInt_ReturnValue) == 0x000144, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000148, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00014C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Greater_IntInt_ReturnValue) == 0x000150, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000154, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000158, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00015C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_BooleanAND_ReturnValue) == 0x000160, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000164, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000168, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000170, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000178, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_VLerp_Alpha_ImplicitCast) == 0x000180, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_VLerp_Alpha_ImplicitCast_1) == 0x000184, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_VLerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000188, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x000190, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000198, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x0001A0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent, CallFunc_Divide_DoubleDouble_B_ImplicitCast_2) == 0x0001A8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent::CallFunc_Divide_DoubleDouble_B_ImplicitCast_2' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript final
{
public:
	bool                                          NewLocalVar_0;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_9[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue_2;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;
	uint8                                         Pad_34[0x4];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	int32                                         Temp_int_Variable_1;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_71[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	int32                                         Temp_int_Variable_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_89[0x7];
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_F9[0x7];
	class USplineMeshComponent*                   CallFunc_AddSplineMeshSegment_SplineMeshSegment;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_1;
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1;
	struct FVector                                CallFunc_AutoSmoothTanget_SmoothedTangent;
	struct FVector                                CallFunc_AutoSmoothTanget_SmoothedTangent_1;
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_179[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue_3;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_4;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;
	uint8                                         Pad_18A[0x6];
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript) == 0x0001A0, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, NewLocalVar_0) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, Temp_int_Variable) == 0x000004, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x00001C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue_1) == 0x000024, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000028, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue_2) == 0x00002C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000030, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_X) == 0x000038, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_Y) == 0x000040, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_Z) == 0x000048, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_X_1) == 0x000050, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_Y_1) == 0x000058, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_BreakVector_Z_1) == 0x000060, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, Temp_int_Variable_1) == 0x000068, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00006C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00006D, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00006E, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_BooleanOR_ReturnValue) == 0x00006F, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_2) == 0x000074, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, Temp_int_Variable_2) == 0x000078, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_3) == 0x00007C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000080, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetSocketLocation_ReturnValue) == 0x000090, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x0000A8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location) == 0x0000B0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent) == 0x0000C8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetSocketLocation_ReturnValue_1) == 0x0000E0, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x0000F8, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_AddSplineMeshSegment_SplineMeshSegment) == 0x000100, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_AddSplineMeshSegment_SplineMeshSegment' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Location_1) == 0x000108, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Location_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1) == 0x000120, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_AutoSmoothTanget_SmoothedTangent) == 0x000138, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_AutoSmoothTanget_SmoothedTangent' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_AutoSmoothTanget_SmoothedTangent_1) == 0x000150, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_AutoSmoothTanget_SmoothedTangent_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumMaterials_ReturnValue) == 0x000168, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x00016C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000170, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000178, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x00017C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue_3) == 0x000180, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_4) == 0x000184, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000188, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000189, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_SelectFloat_ReturnValue_1) == 0x000190, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000198, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00019C, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract final
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
static_assert(alignof(BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract) == 0x000008, "Wrong alignment on BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract");
static_assert(sizeof(BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract) == 0x000028, "Wrong size on BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract, InteractingPawn) == 0x000000, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract, InteractionBeingAttempted) == 0x000008, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract, InteractionType) == 0x000009, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract::InteractionType' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract, ReturnValue) == 0x00000A, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000010, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000020, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}
