#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FluidForceImpulseTimedEffects_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FluidForceImpulse_structs.hpp"

namespace SDK::Params
{

struct FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FFluidForceImpulseTimedEffects         K2Node_MakeStruct_FluidForceImpulseTimedEffects;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_31[0x7];
	struct FHitResult                             K2Node_Event_Hit;
	TArray<class ABP_FluidSim_FN_C*>              CallFunc_GetAllActorsOfClass_OutActors;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_12A[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_134[0x4];
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
	uint8                                         Pad_1C4[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	class ABP_FluidSim_FN_C*                      CallFunc_Array_Get_Item;
	struct FFluidForceImpulse                     K2Node_MakeStruct_FluidForceImpulse;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
};
static_assert(alignof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP) == 0x000008, "Wrong alignment on FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP");
static_assert(sizeof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP) == 0x000260, "Wrong size on FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, EntryPoint) == 0x000000, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, K2Node_MakeStruct_FluidForceImpulseTimedEffects) == 0x000008, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::K2Node_MakeStruct_FluidForceImpulseTimedEffects' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_IsDedicatedServer_ReturnValue) == 0x000030, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, K2Node_Event_Hit) == 0x000038, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_GetAllActorsOfClass_OutActors) == 0x000118, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_bBlockingHit) == 0x000128, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_bInitialOverlap) == 0x000129, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_Time) == 0x00012C, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_Distance) == 0x000130, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_Location) == 0x000138, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_ImpactPoint) == 0x000150, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_Normal) == 0x000168, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_ImpactNormal) == 0x000180, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_PhysMat) == 0x000198, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_HitActor) == 0x0001A0, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_HitComponent) == 0x0001A8, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_HitBoneName) == 0x0001B0, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_BoneName) == 0x0001B4, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_HitItem) == 0x0001B8, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_ElementIndex) == 0x0001BC, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_FaceIndex) == 0x0001C0, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_TraceStart) == 0x0001C8, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_BreakHitResult_TraceEnd) == 0x0001E0, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_Array_Get_Item) == 0x0001F8, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, K2Node_MakeStruct_FluidForceImpulse) == 0x000200, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::K2Node_MakeStruct_FluidForceImpulse' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_Array_Length_ReturnValue) == 0x000258, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP, CallFunc_Greater_IntInt_ReturnValue) == 0x00025C, "Member 'FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

struct FortWaterBodyBP_C_OnReceivedBulletImpact final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(FortWaterBodyBP_C_OnReceivedBulletImpact) == 0x000008, "Wrong alignment on FortWaterBodyBP_C_OnReceivedBulletImpact");
static_assert(sizeof(FortWaterBodyBP_C_OnReceivedBulletImpact) == 0x0000E0, "Wrong size on FortWaterBodyBP_C_OnReceivedBulletImpact");
static_assert(offsetof(FortWaterBodyBP_C_OnReceivedBulletImpact, Hit) == 0x000000, "Member 'FortWaterBodyBP_C_OnReceivedBulletImpact::Hit' has a wrong offset!");

}
