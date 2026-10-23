#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_MultiInteractionAdd_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
	struct FLinearColor                           Temp_struct_Variable;
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;
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
	uint8                                         Pad_1E9[0x3];
	struct FLinearColor                           Temp_struct_Variable_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1FE[0x2];
	struct FLinearColor                           K2Node_Select_Default;
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GCN_MultiInteractionAdd_C_OnBurst) == 0x000008, "Wrong alignment on GCN_MultiInteractionAdd_C_OnBurst");
static_assert(sizeof(GCN_MultiInteractionAdd_C_OnBurst) == 0x000230, "Wrong size on GCN_MultiInteractionAdd_C_OnBurst");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_MultiInteractionAdd_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_MultiInteractionAdd_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GCN_MultiInteractionAdd_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GCN_MultiInteractionAdd_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_MultiInteractionAdd_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GCN_MultiInteractionAdd_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, Temp_struct_Variable) == 0x000108, "Member 'GCN_MultiInteractionAdd_C_OnBurst::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_Array_Get_Item) == 0x000118, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000120, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000124, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000128, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000140, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000144, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000148, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000168, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_Location) == 0x000188, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_Normal) == 0x0001A0, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001B8, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001C0, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001C8, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001D0, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001D8, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001DC, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001E0, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001E8, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, Temp_struct_Variable_1) == 0x0001EC, "Member 'GCN_MultiInteractionAdd_C_OnBurst::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0001FC, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, Temp_bool_Variable) == 0x0001FD, "Member 'GCN_MultiInteractionAdd_C_OnBurst::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, K2Node_Select_Default) == 0x000200, "Member 'GCN_MultiInteractionAdd_C_OnBurst::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x000210, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurst, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000228, "Member 'GCN_MultiInteractionAdd_C_OnBurst::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct GCN_MultiInteractionAdd_C_OnBurstGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
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
	uint8                                         Pad_1D1[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1E1[0x7];
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue_1;
};
static_assert(alignof(GCN_MultiInteractionAdd_C_OnBurstGeneric) == 0x000008, "Wrong alignment on GCN_MultiInteractionAdd_C_OnBurstGeneric");
static_assert(sizeof(GCN_MultiInteractionAdd_C_OnBurstGeneric) == 0x0001F8, "Wrong size on GCN_MultiInteractionAdd_C_OnBurstGeneric");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, MyTarget) == 0x000000, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, Parameters) == 0x000008, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, ParticleComponents) == 0x0000D8, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, AudioComponents) == 0x0000E8, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, BurstDecalInstance) == 0x000100, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000108, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00010C, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000110, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000128, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x00012C, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000130, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000150, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_Location) == 0x000170, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_Normal) == 0x000188, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A0, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001A8, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B0, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001B8, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C0, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001C4, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001C8, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D0, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0001D8, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x0001E8, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_MultiInteractionAdd_C_OnBurstGeneric, CallFunc_SpawnSoundAtLocation_ReturnValue_1) == 0x0001F0, "Member 'GCN_MultiInteractionAdd_C_OnBurstGeneric::CallFunc_SpawnSoundAtLocation_ReturnValue_1' has a wrong offset!");

}
