#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_24[0x4];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance_1;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance_1;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext;
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName;
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags;
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags;
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial;
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel;
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent;
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy;
	uint8                                         Pad_301[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_312[0x6];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	TDelegate<void(int32 InteractingActorCount, float MultiInteractMultiplier, float InteractingDuration)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_32D[0x3];
	int32                                         K2Node_CustomEvent_InteractingActorCount;
	float                                         K2Node_CustomEvent_MultiInteractMultiplier;
	float                                         K2Node_CustomEvent_InteractingDuration;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_34C[0x4];
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	TDelegate<void(int32 InteractingActorCount, float MultiInteractMultiplier, float InteractingDuration)> K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_377[0x1];
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;
	double                                        CallFunc_FInterpTo_ReturnValue;
	float                                         CallFunc_FadeIn_StartTime_ImplicitCast;
	uint8                                         Pad_38C[0x4];
	double                                        CallFunc_MapRangeClamped_Value_ImplicitCast;
	float                                         CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast;
	uint8                                         Pad_39C[0x4];
	double                                        K2Node_VariableSet_CurrentPitch_ImplicitCast;
};
static_assert(alignof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract) == 0x000008, "Wrong alignment on GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract");
static_assert(sizeof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract) == 0x0003A8, "Wrong size on GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, EntryPoint) == 0x000000, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_IsValid_ReturnValue_2) == 0x000022, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_IsValid_ReturnValue_3) == 0x000023, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_MyTarget_1) == 0x000028, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_Parameters_1) == 0x000030, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_ParticleComponents_1) == 0x000100, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_AudioComponents_1) == 0x000110, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_BurstCameraShakeInstance_1) == 0x000120, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_BurstCameraShakeInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_BurstDecalInstance_1) == 0x000128, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_BurstDecalInstance_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_MyTarget) == 0x000130, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_Parameters) == 0x000138, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_ParticleComponents) == 0x000208, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_AudioComponents) == 0x000218, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_BurstCameraShakeInstance) == 0x000228, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_Event_BurstDecalInstance) == 0x000230, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000238, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00023C, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000240, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000258, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x00025C, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000260, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000280, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_Location) == 0x0002A0, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_Normal) == 0x0002B8, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0002D0, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0002D8, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0002E0, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0002E8, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0002F0, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0002F4, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0002F8, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x000300, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000308, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_DynamicCast_bSuccess) == 0x000310, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_IsValid_ReturnValue_4) == 0x000311, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_RandomFloatInRange_ReturnValue) == 0x000318, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_CreateDelegate_OutputDelegate) == 0x000320, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x00032C, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_CustomEvent_InteractingActorCount) == 0x000330, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_CustomEvent_InteractingActorCount' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_CustomEvent_MultiInteractMultiplier) == 0x000334, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_CustomEvent_MultiInteractMultiplier' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_CustomEvent_InteractingDuration) == 0x000338, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_CustomEvent_InteractingDuration' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00033C, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_CreateDelegate_OutputDelegate_1) == 0x000340, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_MapRangeClamped_ReturnValue) == 0x000350, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000358, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000360, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_CreateDelegate_OutputDelegate_2) == 0x000368, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_IsValid_ReturnValue_5) == 0x000374, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000375, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_IsValid_ReturnValue_6) == 0x000376, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000378, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_FInterpTo_ReturnValue) == 0x000380, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_FadeIn_StartTime_ImplicitCast) == 0x000388, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_FadeIn_StartTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_MapRangeClamped_Value_ImplicitCast) == 0x000390, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_MapRangeClamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast) == 0x000398, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract, K2Node_VariableSet_CurrentPitch_ImplicitCast) == 0x0003A0, "Member 'GCNL_Athena_MultiInteract_C_ExecuteUbergraph_GCNL_Athena_MultiInteract::K2Node_VariableSet_CurrentPitch_ImplicitCast' has a wrong offset!");

struct GCNL_Athena_MultiInteract_C_OnActorCountChanged final
{
public:
	int32                                         InteractingActorCount;
	float                                         MultiInteractMultiplier;
	float                                         InteractingDuration;
};
static_assert(alignof(GCNL_Athena_MultiInteract_C_OnActorCountChanged) == 0x000004, "Wrong alignment on GCNL_Athena_MultiInteract_C_OnActorCountChanged");
static_assert(sizeof(GCNL_Athena_MultiInteract_C_OnActorCountChanged) == 0x00000C, "Wrong size on GCNL_Athena_MultiInteract_C_OnActorCountChanged");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnActorCountChanged, InteractingActorCount) == 0x000000, "Member 'GCNL_Athena_MultiInteract_C_OnActorCountChanged::InteractingActorCount' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnActorCountChanged, MultiInteractMultiplier) == 0x000004, "Member 'GCNL_Athena_MultiInteract_C_OnActorCountChanged::MultiInteractMultiplier' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnActorCountChanged, InteractingDuration) == 0x000008, "Member 'GCNL_Athena_MultiInteract_C_OnActorCountChanged::InteractingDuration' has a wrong offset!");

struct GCNL_Athena_MultiInteract_C_OnApplicationGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_MultiInteract_C_OnApplicationGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_MultiInteract_C_OnApplicationGeneric");
static_assert(sizeof(GCNL_Athena_MultiInteract_C_OnApplicationGeneric) == 0x000108, "Wrong size on GCNL_Athena_MultiInteract_C_OnApplicationGeneric");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnApplicationGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_MultiInteract_C_OnApplicationGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnApplicationGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_MultiInteract_C_OnApplicationGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnApplicationGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_MultiInteract_C_OnApplicationGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnApplicationGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_MultiInteract_C_OnApplicationGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnApplicationGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_MultiInteract_C_OnApplicationGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnApplicationGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_MultiInteract_C_OnApplicationGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_Athena_MultiInteract_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_MultiInteract_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_Athena_MultiInteract_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_Athena_MultiInteract_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_Athena_MultiInteract_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_Athena_MultiInteract_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_Athena_MultiInteract_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_MultiInteract_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_MultiInteract_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_MultiInteract_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_MultiInteract_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_MultiInteract_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}
