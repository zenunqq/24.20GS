#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ECardinalDirection_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction final
{
public:
	class AActor*                                 Actor;
	class UObject*                                __WorldContext;
	ECardinalDirection                            OutCardinalDirection;
	uint8                                         Pad_11[0x7];
	double                                        OutYaw;
	double                                        Yaw;
	ECardinalDirection                            CardinalDirection;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2A[0x6];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_61[0x7];
	double                                        CallFunc_Abs_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_71[0x7];
	double                                        CallFunc_Abs_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;
};
static_assert(alignof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction) == 0x000008, "Wrong alignment on AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction");
static_assert(sizeof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction) == 0x000088, "Wrong size on AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, Actor) == 0x000000, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::Actor' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, __WorldContext) == 0x000008, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, OutCardinalDirection) == 0x000010, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::OutCardinalDirection' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, OutYaw) == 0x000018, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::OutYaw' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, Yaw) == 0x000020, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::Yaw' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CardinalDirection) == 0x000028, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CardinalDirection' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_GetActorForwardVector_ReturnValue) == 0x000030, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_BreakVector_X) == 0x000048, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_BreakVector_Y) == 0x000050, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_BreakVector_Z) == 0x000058, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000060, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_Abs_ReturnValue) == 0x000068, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000070, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_Abs_ReturnValue_1) == 0x000078, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2) == 0x000080, "Member 'AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");

struct AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume final
{
public:
	class UObject*                                WorldContextObject;
	float                                         BlockingAreaCheckRadius;
	uint8                                         Pad_C[0x4];
	struct FVector                                Location;
	class UObject*                                __WorldContext;
	bool                                          bOverlapping;
	uint8                                         Pad_31[0x7];
	struct FScalableFloat                         bBlockThrowableDeployVolumesEnabled;
	class FName                                   BlockedTag;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_69[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_74[0x4];
	TArray<class AActor*>                         Temp_object_Variable;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	uint8                                         Pad_89[0x7];
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;
	TArray<struct FHitResult>                     CallFunc_SphereTraceMultiForObjects_OutHits;
	bool                                          CallFunc_SphereTraceMultiForObjects_ReturnValue;
	uint8                                         Pad_B1[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	struct FHitResult                             CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_19B[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_1A4[0x4];
	struct FVector                                CallFunc_BreakHitResult_Location;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;
	struct FVector                                CallFunc_BreakHitResult_Normal;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;
	class AActor*                                 CallFunc_BreakHitResult_HitActor;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;
	class FName                                   CallFunc_BreakHitResult_HitBoneName;
	class FName                                   CallFunc_BreakHitResult_BoneName;
	int32                                         CallFunc_BreakHitResult_HitItem;
	int32                                         CallFunc_BreakHitResult_ElementIndex;
	int32                                         CallFunc_BreakHitResult_FaceIndex;
	uint8                                         Pad_234[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_ComponentHasTag_ReturnValue;
};
static_assert(alignof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume) == 0x000008, "Wrong alignment on AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume");
static_assert(sizeof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume) == 0x000270, "Wrong size on AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, WorldContextObject) == 0x000000, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, BlockingAreaCheckRadius) == 0x000008, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::BlockingAreaCheckRadius' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, Location) == 0x000010, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::Location' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, __WorldContext) == 0x000028, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::__WorldContext' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, bOverlapping) == 0x000030, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::bOverlapping' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, bBlockThrowableDeployVolumesEnabled) == 0x000038, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::bBlockThrowableDeployVolumesEnabled' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, BlockedTag) == 0x000060, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::BlockedTag' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, Temp_int_Array_Index_Variable) == 0x000064, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, Temp_int_Loop_Counter_Variable) == 0x00006C, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, Temp_object_Variable) == 0x000078, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_GetValueAsBool_ReturnValue) == 0x000088, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, K2Node_MakeArray_Array) == 0x000090, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_SphereTraceMultiForObjects_OutHits) == 0x0000A0, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_SphereTraceMultiForObjects_OutHits' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_SphereTraceMultiForObjects_ReturnValue) == 0x0000B0, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_SphereTraceMultiForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_Array_Length_ReturnValue) == 0x0000B4, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_Less_IntInt_ReturnValue) == 0x000198, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_bBlockingHit) == 0x000199, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_bInitialOverlap) == 0x00019A, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_Time) == 0x00019C, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_Distance) == 0x0001A0, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_Location) == 0x0001A8, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_ImpactPoint) == 0x0001C0, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_Normal) == 0x0001D8, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_ImpactNormal) == 0x0001F0, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_PhysMat) == 0x000208, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_HitActor) == 0x000210, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_HitComponent) == 0x000218, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_HitBoneName) == 0x000220, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_BoneName) == 0x000224, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_HitItem) == 0x000228, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_ElementIndex) == 0x00022C, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_FaceIndex) == 0x000230, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_TraceStart) == 0x000238, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_BreakHitResult_TraceEnd) == 0x000250, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_IsValid_ReturnValue_1) == 0x000268, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume, CallFunc_ComponentHasTag_ReturnValue) == 0x000269, "Member 'AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume::CallFunc_ComponentHasTag_ReturnValue' has a wrong offset!");

}
