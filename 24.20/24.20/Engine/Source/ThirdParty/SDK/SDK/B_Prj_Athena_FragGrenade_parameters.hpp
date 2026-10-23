#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature final
{
public:
	class AFortWaterBodyActor*                    WaterBody;
	class UFortWaterInteractionComponent*         WaterInteractionComponent_0;
	bool                                          bIsFirstBody;
};
static_assert(alignof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature) == 0x000008, "Wrong alignment on B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(sizeof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature) == 0x000018, "Wrong size on B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature, WaterBody) == 0x000000, "Member 'B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature::WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature, WaterInteractionComponent_0) == 0x000008, "Member 'B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature::WaterInteractionComponent_0' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature, bIsFirstBody) == 0x000010, "Member 'B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature::bIsFirstBody' has a wrong offset!");

struct B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature final
{
public:
	class AFortWaterBodyActor*                    WaterBody;
	class UFortWaterInteractionComponent*         WaterInteractionComponent_0;
	bool                                          bIsLastBody;
};
static_assert(alignof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature) == 0x000008, "Wrong alignment on B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature");
static_assert(sizeof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature) == 0x000018, "Wrong size on B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature, WaterBody) == 0x000000, "Member 'B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature::WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature, WaterInteractionComponent_0) == 0x000008, "Member 'B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature::WaterInteractionComponent_0' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature, bIsLastBody) == 0x000010, "Member 'B_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature::bIsLastBody' has a wrong offset!");

struct B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;
	bool                                          CallFunc_OnSameTeam_ReturnValue;
	uint8                                         Pad_31[0x7];
	TArray<class AActor*>                         K2Node_Event_HitActors;
	TArray<struct FHitResult>                     K2Node_Event_HitResults;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FHitResult                             K2Node_Event_Hit;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_152[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_15C[0x4];
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
	uint8                                         Pad_1EC[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_221[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;
	int32                                         CallFunc_GetConsoleVariableIntValue_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_325[0x3];
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	uint8                                         Pad_409[0x7];
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;
	class AFortWaterBodyActor*                    K2Node_ComponentBoundEvent_WaterBody_1;
	class UFortWaterInteractionComponent*         K2Node_ComponentBoundEvent_WaterInteractionComponent_1;
	bool                                          K2Node_ComponentBoundEvent_bIsFirstBody;
	uint8                                         Pad_481[0x7];
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class AFN_RadialForce_C*                      CallFunc_FinishSpawningActor_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FWaterSurfaceInfo                      CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	class AFortWaterBodyActor*                    K2Node_ComponentBoundEvent_WaterBody;
	class UFortWaterInteractionComponent*         K2Node_ComponentBoundEvent_WaterInteractionComponent;
	bool                                          K2Node_ComponentBoundEvent_bIsLastBody;
	uint8                                         Pad_539[0x3];
	float                                         CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;
};
static_assert(alignof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade) == 0x000010, "Wrong alignment on B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade");
static_assert(sizeof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade) == 0x000550, "Wrong size on B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, EntryPoint) == 0x000000, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000010, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_GetInstigatorController_ReturnValue) == 0x000028, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_OnSameTeam_ReturnValue) == 0x000030, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_OnSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_Event_HitActors) == 0x000038, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_Event_HitResults) == 0x000048, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000058, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_Event_Hit) == 0x000070, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_bBlockingHit) == 0x000150, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_bInitialOverlap) == 0x000151, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_Time) == 0x000154, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_Distance) == 0x000158, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_Location) == 0x000160, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_ImpactPoint) == 0x000178, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_Normal) == 0x000190, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_ImpactNormal) == 0x0001A8, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_PhysMat) == 0x0001C0, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_HitActor) == 0x0001C8, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_HitComponent) == 0x0001D0, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_HitBoneName) == 0x0001D8, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_BoneName) == 0x0001DC, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_HitItem) == 0x0001E0, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_ElementIndex) == 0x0001E4, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_FaceIndex) == 0x0001E8, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_TraceStart) == 0x0001F0, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BreakHitResult_TraceEnd) == 0x000208, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_IsValid_ReturnValue) == 0x000220, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_CreateDelegate_OutputDelegate) == 0x000224, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000230, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000238, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000240, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000310, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000318, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_GetConsoleVariableIntValue_ReturnValue) == 0x000320, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_GetConsoleVariableIntValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000324, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000328, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_GetConsoleVariableBoolValue_ReturnValue) == 0x000408, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_GetConsoleVariableBoolValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000410, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_ComponentBoundEvent_WaterBody_1) == 0x000470, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_ComponentBoundEvent_WaterBody_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_ComponentBoundEvent_WaterInteractionComponent_1) == 0x000478, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_ComponentBoundEvent_WaterInteractionComponent_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_ComponentBoundEvent_bIsFirstBody) == 0x000480, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_ComponentBoundEvent_bIsFirstBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000488, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_FinishSpawningActor_ReturnValue) == 0x000490, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000498, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo) == 0x0004B0, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_SetFloatParameter_self_CastInput) == 0x000518, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_ComponentBoundEvent_WaterBody) == 0x000528, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_ComponentBoundEvent_WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_ComponentBoundEvent_WaterInteractionComponent) == 0x000530, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_ComponentBoundEvent_WaterInteractionComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, K2Node_ComponentBoundEvent_bIsLastBody) == 0x000538, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::K2Node_ComponentBoundEvent_bIsLastBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_Conv_FloatToVector_InFloat_ImplicitCast) == 0x00053C, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_Conv_FloatToVector_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000540, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x000544, "Member 'B_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

struct B_Prj_Athena_FragGrenade_C_OnBounce final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(B_Prj_Athena_FragGrenade_C_OnBounce) == 0x000008, "Wrong alignment on B_Prj_Athena_FragGrenade_C_OnBounce");
static_assert(sizeof(B_Prj_Athena_FragGrenade_C_OnBounce) == 0x0000E0, "Wrong size on B_Prj_Athena_FragGrenade_C_OnBounce");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_OnBounce, Hit) == 0x000000, "Member 'B_Prj_Athena_FragGrenade_C_OnBounce::Hit' has a wrong offset!");

struct B_Prj_Athena_FragGrenade_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;
	TArray<struct FHitResult>                     HitResults;
};
static_assert(alignof(B_Prj_Athena_FragGrenade_C_OnExploded) == 0x000008, "Wrong alignment on B_Prj_Athena_FragGrenade_C_OnExploded");
static_assert(sizeof(B_Prj_Athena_FragGrenade_C_OnExploded) == 0x000020, "Wrong size on B_Prj_Athena_FragGrenade_C_OnExploded");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_Athena_FragGrenade_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_FragGrenade_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_Athena_FragGrenade_C_OnExploded::HitResults' has a wrong offset!");

}
