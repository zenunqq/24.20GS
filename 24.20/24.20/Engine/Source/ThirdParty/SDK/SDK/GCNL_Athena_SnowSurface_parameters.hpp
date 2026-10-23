#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	EGameplayCueEvent                             K2Node_Event_EventType;
	uint8                                         Pad_11[0x7];
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	class AActor*                                 K2Node_Event_MyTarget_3;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_3;
	TArray<class UNiagaraComponent*>              K2Node_Event_ParticleComponents_2;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_2;
	class UNiagaraComponent*                      CallFunc_Array_Get_Item;
	bool                                          CallFunc_OnLocalPlayersTeam_Return_Value;
	bool                                          CallFunc_GetIsPlayingReplay_ReturnValue;
	uint8                                         Pad_1EA[0x6];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	class AActor*                                 K2Node_Event_MyTarget_2;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_2;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class AFortReplaySpectatorAthena*             K2Node_DynamicCast_AsFort_Replay_Spectator_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2FA[0x6];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface) == 0x000008, "Wrong alignment on GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface");
static_assert(sizeof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface) == 0x000410, "Wrong size on GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, EntryPoint) == 0x000000, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_MyTarget) == 0x000008, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_EventType) == 0x000010, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_Parameters) == 0x000018, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_MyTarget_3) == 0x0000E8, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_MyTarget_3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_Parameters_3) == 0x0000F0, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_Parameters_3' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_ParticleComponents_2) == 0x0001C0, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_ParticleComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_AudioComponents_2) == 0x0001D0, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_AudioComponents_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, CallFunc_Array_Get_Item) == 0x0001E0, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, CallFunc_OnLocalPlayersTeam_Return_Value) == 0x0001E8, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::CallFunc_OnLocalPlayersTeam_Return_Value' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, CallFunc_GetIsPlayingReplay_ReturnValue) == 0x0001E9, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::CallFunc_GetIsPlayingReplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x0001F0, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_MyTarget_2) == 0x0001F8, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_MyTarget_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_Parameters_2) == 0x000200, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_Parameters_2' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_ParticleComponents_1) == 0x0002D0, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_AudioComponents_1) == 0x0002E0, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_DynamicCast_AsFort_Replay_Spectator_Athena) == 0x0002F0, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_DynamicCast_AsFort_Replay_Spectator_Athena' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_DynamicCast_bSuccess) == 0x0002F8, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, CallFunc_IsValid_ReturnValue) == 0x0002F9, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_MyTarget_1) == 0x000300, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_Parameters_1) == 0x000308, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_ParticleComponents) == 0x0003D8, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_AudioComponents) == 0x0003E8, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_BurstCameraShakeInstance) == 0x0003F8, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, K2Node_Event_BurstDecalInstance) == 0x000400, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, CallFunc_IsMobilePlatform_ReturnValue) == 0x000408, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface, CallFunc_Not_PreBool_ReturnValue) == 0x000409, "Member 'GCNL_Athena_SnowSurface_C_ExecuteUbergraph_GCNL_Athena_SnowSurface::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_9[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue");
static_assert(sizeof(GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue) == 0x0000E0, "Wrong size on GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCNL_Athena_SnowSurface_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

struct GCNL_Athena_SnowSurface_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Athena_SnowSurface_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_Athena_SnowSurface_C_OnLoopingStart");
static_assert(sizeof(GCNL_Athena_SnowSurface_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCNL_Athena_SnowSurface_C_OnLoopingStart");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_Athena_SnowSurface_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_Athena_SnowSurface_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_SnowSurface_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_SnowSurface_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UNiagaraComponent*>              ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara) == 0x000008, "Wrong alignment on GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara");
static_assert(sizeof(GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara) == 0x0000F8, "Wrong size on GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara, MyTarget) == 0x000000, "Member 'GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara, Parameters) == 0x000008, "Member 'GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_SnowSurface_C_OnLoopingStartNiagara::AudioComponents' has a wrong offset!");

struct GCNL_Athena_SnowSurface_C_OnPlayerFootstep final
{
public:
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
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
	uint8                                         Pad_E1[0x7];
	struct FVector                                CallFunc_GetCachedStepSurfaceNormal_ReturnValue;
	class FName                                   CallFunc_GetTagName_ReturnValue;
	uint8                                         Pad_104[0x4];
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;
	bool                                          CallFunc_Contains_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11A[0x6];
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;
	bool                                          CallFunc_OnSameTeam_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_12A[0x2];
	int32                                         CallFunc_GetCachedFootstepIndex_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_131[0xF];
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_1;
	struct FTransform                             CallFunc_SelectTransform_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	uint8                                         Pad_2D8[0x8];
	struct FVector4                               CallFunc_MakeVector4_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	TArray<struct FVector4>                       K2Node_MakeArray_Array;
	struct FVector                                CallFunc_SelectVector_ReturnValue;
};
static_assert(alignof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep) == 0x000010, "Wrong alignment on GCNL_Athena_SnowSurface_C_OnPlayerFootstep");
static_assert(sizeof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep) == 0x000340, "Wrong size on GCNL_Athena_SnowSurface_C_OnPlayerFootstep");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_GetVelocity_ReturnValue) == 0x000000, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000018, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00001C, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000020, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000038, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x00003C, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000040, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000060, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_Location) == 0x000080, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_Normal) == 0x000098, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0000B0, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0000B8, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0000C0, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0000C8, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0000D0, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0000D4, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0000D8, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0000E0, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_GetCachedStepSurfaceNormal_ReturnValue) == 0x0000E8, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_GetCachedStepSurfaceNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_GetTagName_ReturnValue) == 0x000100, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_GetTagName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_Conv_NameToString_ReturnValue) == 0x000108, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_Contains_ReturnValue) == 0x000118, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_IsValid_ReturnValue) == 0x000119, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_GetViewTarget_ReturnValue) == 0x000120, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_OnSameTeam_ReturnValue) == 0x000128, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_OnSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_IsValid_ReturnValue_1) == 0x000129, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_GetCachedFootstepIndex_ReturnValue) == 0x00012C, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_GetCachedFootstepIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000130, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_GetSocketTransform_ReturnValue) == 0x000140, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_GetSocketTransform_ReturnValue_1) == 0x0001A0, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_GetSocketTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_SelectTransform_ReturnValue) == 0x000200, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_SelectTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakTransform_Location) == 0x000260, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakTransform_Rotation) == 0x000278, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakTransform_Scale) == 0x000290, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakVector_X) == 0x0002A8, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakVector_Y) == 0x0002B0, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_BreakVector_Z) == 0x0002B8, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_GetForwardVector_ReturnValue) == 0x0002C0, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_MakeVector4_ReturnValue) == 0x0002E0, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_MakeVector4_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000300, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, K2Node_MakeArray_Array) == 0x000318, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnPlayerFootstep, CallFunc_SelectVector_ReturnValue) == 0x000328, "Member 'GCNL_Athena_SnowSurface_C_OnPlayerFootstep::CallFunc_SelectVector_ReturnValue' has a wrong offset!");

struct GCNL_Athena_SnowSurface_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_SnowSurface_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Athena_SnowSurface_C_OnRemoval");
static_assert(sizeof(GCNL_Athena_SnowSurface_C_OnRemoval) == 0x000108, "Wrong size on GCNL_Athena_SnowSurface_C_OnRemoval");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Athena_SnowSurface_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Athena_SnowSurface_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_SnowSurface_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_SnowSurface_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_SnowSurface_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_SnowSurface_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_SnowSurface_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}
