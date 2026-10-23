#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_119[0x7];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_221[0x3];
	float                                         CallFunc_PlayAnimMontage_ReturnValue;
};
static_assert(alignof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision) == 0x000008, "Wrong alignment on GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision");
static_assert(sizeof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision) == 0x000228, "Wrong size on GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, EntryPoint) == 0x000000, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_MyTarget) == 0x000008, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_Parameters) == 0x000010, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_BurstCameraShakeInstance) == 0x000100, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_BurstDecalInstance) == 0x000108, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000110, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_MyTarget_1) == 0x000120, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_Parameters_1) == 0x000128, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_ParticleComponents_1) == 0x0001F8, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_Event_AudioComponents_1) == 0x000208, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000218, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, K2Node_DynamicCast_bSuccess_1) == 0x000220, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision, CallFunc_PlayAnimMontage_ReturnValue) == 0x000224, "Member 'GCNL_Athena_HidingProp_Collision_C_ExecuteUbergraph_GCNL_Athena_HidingProp_Collision::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");

struct GCNL_Athena_HidingProp_Collision_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Athena_HidingProp_Collision_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_Athena_HidingProp_Collision_C_OnLoopingStart");
static_assert(sizeof(GCNL_Athena_HidingProp_Collision_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCNL_Athena_HidingProp_Collision_C_OnLoopingStart");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_Athena_HidingProp_Collision_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_Athena_HidingProp_Collision_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_HidingProp_Collision_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_HidingProp_Collision_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCNL_Athena_HidingProp_Collision_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_HidingProp_Collision_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Athena_HidingProp_Collision_C_OnRemoval");
static_assert(sizeof(GCNL_Athena_HidingProp_Collision_C_OnRemoval) == 0x000108, "Wrong size on GCNL_Athena_HidingProp_Collision_C_OnRemoval");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Athena_HidingProp_Collision_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Athena_HidingProp_Collision_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_HidingProp_Collision_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_HidingProp_Collision_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_HidingProp_Collision_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_HidingProp_Collision_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_HidingProp_Collision_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}
