#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
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
	uint8                                         Pad_2D1[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_2E2[0x6];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_2F1[0x7];
	class AController*                            CallFunc_GetController_ReturnValue;
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_309[0x7];
	class UCameraShakeBase*                       CallFunc_StartCameraShake_ReturnValue;
	class UCameraShakeBase*                       CallFunc_StartCameraShake_ReturnValue_1;
	class ULegacyCameraShake*                     CallFunc_Conv_LegacyCameraShake_ReturnValue;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter) == 0x000008, "Wrong alignment on GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter");
static_assert(sizeof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter) == 0x000330, "Wrong size on GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, EntryPoint) == 0x000000, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_MyTarget_1) == 0x000008, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_Parameters_1) == 0x000010, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_ParticleComponents_1) == 0x0000E0, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_AudioComponents_1) == 0x0000F0, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_MyTarget) == 0x000100, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_Parameters) == 0x000108, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_ParticleComponents) == 0x0001D8, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_AudioComponents) == 0x0001E8, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_BurstCameraShakeInstance) == 0x0001F8, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_Event_BurstDecalInstance) == 0x000200, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000208, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00020C, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000210, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000228, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x00022C, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000230, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000250, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_Location) == 0x000270, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_Normal) == 0x000288, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0002A0, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0002A8, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0002B0, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0002B8, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0002C0, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0002C4, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0002C8, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0002D0, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0002D8, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_DynamicCast_bSuccess) == 0x0002E0, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x0002E1, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0002E8, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_IsLocallyControlled_ReturnValue) == 0x0002F0, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_GetController_ReturnValue) == 0x0002F8, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_DynamicCast_AsPlayer_Controller) == 0x000300, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, K2Node_DynamicCast_bSuccess_1) == 0x000308, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_StartCameraShake_ReturnValue) == 0x000310, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_StartCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_StartCameraShake_ReturnValue_1) == 0x000318, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_StartCameraShake_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_Conv_LegacyCameraShake_ReturnValue) == 0x000320, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_Conv_LegacyCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000328, "Member 'GCNL_Vent_Enter_C_ExecuteUbergraph_GCNL_Vent_Enter::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct GCNL_Vent_Enter_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Vent_Enter_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_Vent_Enter_C_OnLoopingStart");
static_assert(sizeof(GCNL_Vent_Enter_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCNL_Vent_Enter_C_OnLoopingStart");
static_assert(offsetof(GCNL_Vent_Enter_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_Vent_Enter_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_Vent_Enter_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCNL_Vent_Enter_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCNL_Vent_Enter_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCNL_Vent_Enter_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Vent_Enter_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Vent_Enter_C_OnRemoval");
static_assert(sizeof(GCNL_Vent_Enter_C_OnRemoval) == 0x000108, "Wrong size on GCNL_Vent_Enter_C_OnRemoval");
static_assert(offsetof(GCNL_Vent_Enter_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Vent_Enter_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Vent_Enter_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCNL_Vent_Enter_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCNL_Vent_Enter_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Vent_Enter_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Vent_Enter_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCNL_Vent_Enter_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}
