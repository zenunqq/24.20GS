#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_19[0x7];
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	class AFortPlayerController*                  CallFunc_Array_Get_Item;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
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
	uint8                                         Pad_309[0x7];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_319[0x7];
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue_1;
	class AFortPlayerController*                  CallFunc_Array_Get_Item_1;
	double                                        K2Node_Select_Default;
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;
	uint8                                         Pad_344[0x4];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;
};
static_assert(alignof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout) == 0x000008, "Wrong alignment on GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout");
static_assert(sizeof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout) == 0x000378, "Wrong size on GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, EntryPoint) == 0x000000, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, Temp_bool_Variable) == 0x000004, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, Temp_real_Variable) == 0x000008, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, Temp_real_Variable_1) == 0x000010, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000020, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_Array_Get_Item) == 0x000030, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_MyTarget_1) == 0x000038, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_Parameters_1) == 0x000040, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_ParticleComponents_1) == 0x000110, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_AudioComponents_1) == 0x000120, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_BurstCameraShakeInstance) == 0x000130, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_BurstDecalInstance) == 0x000138, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_MyTarget) == 0x000140, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_Parameters) == 0x000148, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_ParticleComponents) == 0x000218, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Event_AudioComponents) == 0x000228, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000238, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000240, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000244, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000248, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000260, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000264, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000268, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000288, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_Location) == 0x0002A8, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_Normal) == 0x0002C0, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0002D8, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0002E0, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0002E8, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0002F0, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0002F8, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0002FC, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x000300, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x000308, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000310, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000318, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_GetLocalFortPlayerControllers_ReturnValue_1) == 0x000320, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_GetLocalFortPlayerControllers_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_Array_Get_Item_1) == 0x000330, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, K2Node_Select_Default) == 0x000338, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_Conv_BoolToInt_ReturnValue) == 0x000340, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000348, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000350, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_SetIntParameter_self_CastInput) == 0x000358, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_SetIntParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000368, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x000370, "Member 'GCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");

struct GCN_Loop_Snow_Whiteout_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCN_Loop_Snow_Whiteout_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Loop_Snow_Whiteout_C_OnLoopingStart");
static_assert(sizeof(GCN_Loop_Snow_Whiteout_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCN_Loop_Snow_Whiteout_C_OnLoopingStart");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Loop_Snow_Whiteout_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Loop_Snow_Whiteout_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_Snow_Whiteout_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_Snow_Whiteout_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCN_Loop_Snow_Whiteout_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCN_Loop_Snow_Whiteout_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Loop_Snow_Whiteout_C_OnRemoval");
static_assert(sizeof(GCN_Loop_Snow_Whiteout_C_OnRemoval) == 0x000108, "Wrong size on GCN_Loop_Snow_Whiteout_C_OnRemoval");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Loop_Snow_Whiteout_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Loop_Snow_Whiteout_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_Snow_Whiteout_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_Snow_Whiteout_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Loop_Snow_Whiteout_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Snow_Whiteout_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCN_Loop_Snow_Whiteout_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}
