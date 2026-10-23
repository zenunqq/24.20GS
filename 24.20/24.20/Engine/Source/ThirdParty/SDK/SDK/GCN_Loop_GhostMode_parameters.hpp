#pragma once

#include "Basic.hpp"

#include "PawnHighlight_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
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
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2E9[0x7];
	TScriptInterface<class IPawnHighlight_Interface_C> K2Node_DynamicCast_AsPawn_Highlight_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_302[0x2];
	struct FPawnHighlight                         CallFunc_Highlight_Lerp_Highlight;
	uint8                                         Pad_334[0x4];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_34B[0x1];
	struct FPawnHighlight                         CallFunc_Highlight_Lerp_Highlight_1;
	uint8                                         Pad_37C[0x4];
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_389[0x7];
	double                                        CallFunc_Highlight_Lerp_Alpha_ImplicitCast;
};
static_assert(alignof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode) == 0x000008, "Wrong alignment on GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode");
static_assert(sizeof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode) == 0x000398, "Wrong size on GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, EntryPoint) == 0x000000, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_MyTarget_1) == 0x000008, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_Parameters_1) == 0x000010, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_ParticleComponents_1) == 0x0000E0, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_AudioComponents_1) == 0x0000F0, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_MyTarget) == 0x000100, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_Parameters) == 0x000108, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_ParticleComponents) == 0x0001D8, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_AudioComponents) == 0x0001E8, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_BurstCameraShakeInstance) == 0x0001F8, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_Event_BurstDecalInstance) == 0x000200, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000208, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00020C, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000210, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000228, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x00022C, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000230, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000250, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_Location) == 0x000270, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_Normal) == 0x000288, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0002A0, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0002A8, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0002B0, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0002B8, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0002C0, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0002C4, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0002C8, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0002D0, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0002D8, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x0002E0, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_IsValid_ReturnValue) == 0x0002E8, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_DynamicCast_AsPawn_Highlight_Interface) == 0x0002F0, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_DynamicCast_AsPawn_Highlight_Interface' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, K2Node_DynamicCast_bSuccess) == 0x000300, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_IsValid_ReturnValue_1) == 0x000301, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_Highlight_Lerp_Highlight) == 0x000304, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_Highlight_Lerp_Highlight' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000338, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000340, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_IsValid_ReturnValue_2) == 0x000348, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_IsValid_ReturnValue_3) == 0x000349, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00034A, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_Highlight_Lerp_Highlight_1) == 0x00034C, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_Highlight_Lerp_Highlight_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000380, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_IsValid_ReturnValue_4) == 0x000388, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode, CallFunc_Highlight_Lerp_Alpha_ImplicitCast) == 0x000390, "Member 'GCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode::CallFunc_Highlight_Lerp_Alpha_ImplicitCast' has a wrong offset!");

struct GCN_Loop_GhostMode_C_Highlight_Lerp final
{
public:
	double                                        Alpha;
	struct FPawnHighlight                         Highlight;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;
	struct FPawnHighlight                         K2Node_MakeStruct_PawnHighlight;
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;
	float                                         K2Node_MakeStruct_Priority_28_E2E1B5344846E187B9C11B863A7F0698_ImplicitCast;
	float                                         K2Node_MakeStruct_FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D_ImplicitCast;
	float                                         K2Node_MakeStruct_FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92_ImplicitCast;
};
static_assert(alignof(GCN_Loop_GhostMode_C_Highlight_Lerp) == 0x000008, "Wrong alignment on GCN_Loop_GhostMode_C_Highlight_Lerp");
static_assert(sizeof(GCN_Loop_GhostMode_C_Highlight_Lerp) == 0x0000B0, "Wrong size on GCN_Loop_GhostMode_C_Highlight_Lerp");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, Alpha) == 0x000000, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::Alpha' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, Highlight) == 0x000008, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::Highlight' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, CallFunc_Lerp_ReturnValue) == 0x000038, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, CallFunc_Lerp_ReturnValue_1) == 0x000040, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, CallFunc_LinearColorLerp_ReturnValue) == 0x000048, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, CallFunc_LinearColorLerp_ReturnValue_1) == 0x000058, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, K2Node_MakeStruct_PawnHighlight) == 0x000068, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::K2Node_MakeStruct_PawnHighlight' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x000098, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, CallFunc_LinearColorLerp_Alpha_ImplicitCast_1) == 0x00009C, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::CallFunc_LinearColorLerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, K2Node_MakeStruct_Priority_28_E2E1B5344846E187B9C11B863A7F0698_ImplicitCast) == 0x0000A0, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::K2Node_MakeStruct_Priority_28_E2E1B5344846E187B9C11B863A7F0698_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, K2Node_MakeStruct_FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D_ImplicitCast) == 0x0000A4, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::K2Node_MakeStruct_FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_Highlight_Lerp, K2Node_MakeStruct_FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92_ImplicitCast) == 0x0000A8, "Member 'GCN_Loop_GhostMode_C_Highlight_Lerp::K2Node_MakeStruct_FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92_ImplicitCast' has a wrong offset!");

struct GCN_Loop_GhostMode_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCN_Loop_GhostMode_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Loop_GhostMode_C_OnLoopingStart");
static_assert(sizeof(GCN_Loop_GhostMode_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCN_Loop_GhostMode_C_OnLoopingStart");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Loop_GhostMode_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Loop_GhostMode_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_GhostMode_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_GhostMode_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCN_Loop_GhostMode_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCN_Loop_GhostMode_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Loop_GhostMode_C_OnRemoval");
static_assert(sizeof(GCN_Loop_GhostMode_C_OnRemoval) == 0x000108, "Wrong size on GCN_Loop_GhostMode_C_OnRemoval");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Loop_GhostMode_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Loop_GhostMode_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_GhostMode_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_GhostMode_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Loop_GhostMode_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_GhostMode_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCN_Loop_GhostMode_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}
