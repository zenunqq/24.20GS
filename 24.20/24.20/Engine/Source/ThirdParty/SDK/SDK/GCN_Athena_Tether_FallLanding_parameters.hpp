#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_Athena_Tether_FallLanding_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
	class UAudioComponent*                        CallFunc_Array_Get_Item;
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
	uint8                                         Pad_1D9[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1E9[0x3];
	int32                                         CallFunc_FTrunc_ReturnValue;
	class AFortWaterBodyActor*                    CallFunc_GetCurrentWaterBody_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_209[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FWaterSurfaceInfo                      CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo;
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_2A1[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	TScriptInterface<class ICameraLensEffectInterface> CallFunc_AddGenericCameraLensEffect_ReturnValue;
	class UFXSystemComponent*                     CallFunc_SpawnFXAtLocation_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_2C1[0x7];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_FTrunc_A_ImplicitCast;
};
static_assert(alignof(GCN_Athena_Tether_FallLanding_C_OnBurst) == 0x000008, "Wrong alignment on GCN_Athena_Tether_FallLanding_C_OnBurst");
static_assert(sizeof(GCN_Athena_Tether_FallLanding_C_OnBurst) == 0x0002D8, "Wrong size on GCN_Athena_Tether_FallLanding_C_OnBurst");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, MyTarget) == 0x000000, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, Parameters) == 0x000008, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_Array_Get_Item) == 0x000108, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000110, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000114, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000118, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000130, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000134, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000138, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000158, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_Location) == 0x000178, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_Normal) == 0x000190, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001A8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001B0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001B8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001C0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001C8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001CC, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001D0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001E0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, K2Node_DynamicCast_bSuccess) == 0x0001E8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_FTrunc_ReturnValue) == 0x0001EC, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetCurrentWaterBody_ReturnValue) == 0x0001F0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetCurrentWaterBody_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_SetIntParameter_self_CastInput) == 0x0001F8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_SetIntParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_IsValid_ReturnValue) == 0x000208, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000210, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo) == 0x000228, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_GetController_ReturnValue) == 0x000290, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000298, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, K2Node_DynamicCast_bSuccess_1) == 0x0002A0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0002A4, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_AddGenericCameraLensEffect_ReturnValue) == 0x0002A8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_AddGenericCameraLensEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_SpawnFXAtLocation_ReturnValue) == 0x0002B8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_SpawnFXAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0002C0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0002C8, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Tether_FallLanding_C_OnBurst, CallFunc_FTrunc_A_ImplicitCast) == 0x0002D0, "Member 'GCN_Athena_Tether_FallLanding_C_OnBurst::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

}
