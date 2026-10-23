#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCNL_PlayerIsRiding_C_CalculateVelocityParam final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_2[0x6];
	double                                        CallFunc_VSize_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;
	double                                        CallFunc_FInterpTo_ReturnValue;
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;
};
static_assert(alignof(GCNL_PlayerIsRiding_C_CalculateVelocityParam) == 0x000008, "Wrong alignment on GCNL_PlayerIsRiding_C_CalculateVelocityParam");
static_assert(sizeof(GCNL_PlayerIsRiding_C_CalculateVelocityParam) == 0x000040, "Wrong size on GCNL_PlayerIsRiding_C_CalculateVelocityParam");
static_assert(offsetof(GCNL_PlayerIsRiding_C_CalculateVelocityParam, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GCNL_PlayerIsRiding_C_CalculateVelocityParam::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_CalculateVelocityParam, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'GCNL_PlayerIsRiding_C_CalculateVelocityParam::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_CalculateVelocityParam, CallFunc_VSize_ReturnValue) == 0x000008, "Member 'GCNL_PlayerIsRiding_C_CalculateVelocityParam::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_CalculateVelocityParam, CallFunc_SetFloatParameter_self_CastInput) == 0x000010, "Member 'GCNL_PlayerIsRiding_C_CalculateVelocityParam::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_CalculateVelocityParam, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000020, "Member 'GCNL_PlayerIsRiding_C_CalculateVelocityParam::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_CalculateVelocityParam, CallFunc_FInterpTo_ReturnValue) == 0x000028, "Member 'GCNL_PlayerIsRiding_C_CalculateVelocityParam::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_CalculateVelocityParam, CallFunc_MapRangeClamped_ReturnValue) == 0x000030, "Member 'GCNL_PlayerIsRiding_C_CalculateVelocityParam::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_CalculateVelocityParam, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x000038, "Member 'GCNL_PlayerIsRiding_C_CalculateVelocityParam::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");

struct GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	float                                         K2Node_Event_DeltaSeconds;
	uint8                                         Pad_C[0x4];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_219[0x7];
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_232[0x6];
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;
	EFortTeamAffiliation                          Temp_byte_Variable;
	uint8                                         Pad_241[0x7];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue;
	uint8                                         Pad_253[0x5];
	class USoundBase*                             K2Node_Select_Default;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_5;
};
static_assert(alignof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding) == 0x000008, "Wrong alignment on GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding");
static_assert(sizeof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding) == 0x000270, "Wrong size on GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, EntryPoint) == 0x000000, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_MyTarget_1) == 0x000010, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_Parameters_1) == 0x000018, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_ParticleComponents_1) == 0x0000E8, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_AudioComponents_1) == 0x0000F8, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_MyTarget) == 0x000108, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_Parameters) == 0x000110, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_ParticleComponents) == 0x0001E0, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_AudioComponents) == 0x0001F0, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_BurstCameraShakeInstance) == 0x000200, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Event_BurstDecalInstance) == 0x000208, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_K2_SetTimer_ReturnValue) == 0x000210, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_IsValid_ReturnValue_1) == 0x000218, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_GetAttachParentActor_ReturnValue) == 0x000220, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_DynamicCast_AsFort_AIPawn) == 0x000228, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_DynamicCast_bSuccess) == 0x000230, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_IsValid_ReturnValue_2) == 0x000231, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_GetMovementComponent_ReturnValue) == 0x000238, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, Temp_byte_Variable) == 0x000240, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000248, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_IsValid_ReturnValue_3) == 0x000250, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_IsValid_ReturnValue_4) == 0x000251, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue) == 0x000252, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, K2Node_Select_Default) == 0x000258, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000260, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding, CallFunc_IsValid_ReturnValue_5) == 0x000268, "Member 'GCNL_PlayerIsRiding_C_ExecuteUbergraph_GCNL_PlayerIsRiding::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

struct GCNL_PlayerIsRiding_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_PlayerIsRiding_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_PlayerIsRiding_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_PlayerIsRiding_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_PlayerIsRiding_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_PlayerIsRiding_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_PlayerIsRiding_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_PlayerIsRiding_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_PlayerIsRiding_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_PlayerIsRiding_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_PlayerIsRiding_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_PlayerIsRiding_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_PlayerIsRiding_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_PlayerIsRiding_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_PlayerIsRiding_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_PlayerIsRiding_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_PlayerIsRiding_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_PlayerIsRiding_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_PlayerIsRiding_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_PlayerIsRiding_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

struct GCNL_PlayerIsRiding_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(GCNL_PlayerIsRiding_C_ReceiveTick) == 0x000004, "Wrong alignment on GCNL_PlayerIsRiding_C_ReceiveTick");
static_assert(sizeof(GCNL_PlayerIsRiding_C_ReceiveTick) == 0x000004, "Wrong size on GCNL_PlayerIsRiding_C_ReceiveTick");
static_assert(offsetof(GCNL_PlayerIsRiding_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCNL_PlayerIsRiding_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct GCNL_PlayerIsRiding_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
};
static_assert(alignof(GCNL_PlayerIsRiding_C_WhileActive) == 0x000008, "Wrong alignment on GCNL_PlayerIsRiding_C_WhileActive");
static_assert(sizeof(GCNL_PlayerIsRiding_C_WhileActive) == 0x0000E0, "Wrong size on GCNL_PlayerIsRiding_C_WhileActive");
static_assert(offsetof(GCNL_PlayerIsRiding_C_WhileActive, MyTarget) == 0x000000, "Member 'GCNL_PlayerIsRiding_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_WhileActive, Parameters) == 0x000008, "Member 'GCNL_PlayerIsRiding_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_PlayerIsRiding_C_WhileActive, ReturnValue) == 0x0000D8, "Member 'GCNL_PlayerIsRiding_C_WhileActive::ReturnValue' has a wrong offset!");

}
