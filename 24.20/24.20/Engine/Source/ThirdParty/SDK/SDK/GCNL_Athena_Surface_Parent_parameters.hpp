#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
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
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_219[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent) == 0x000008, "Wrong alignment on GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent");
static_assert(sizeof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent) == 0x000230, "Wrong size on GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, EntryPoint) == 0x000000, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_MyTarget_1) == 0x000010, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_Parameters_1) == 0x000018, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_ParticleComponents_1) == 0x0000E8, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_AudioComponents_1) == 0x0000F8, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_MyTarget) == 0x000108, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_Parameters) == 0x000110, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_ParticleComponents) == 0x0001E0, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_AudioComponents) == 0x0001F0, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_BurstCameraShakeInstance) == 0x000200, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_Event_BurstDecalInstance) == 0x000208, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000210, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_DynamicCast_bSuccess) == 0x000218, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000220, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent, K2Node_DynamicCast_bSuccess_1) == 0x000228, "Member 'GCNL_Athena_Surface_Parent_C_ExecuteUbergraph_GCNL_Athena_Surface_Parent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct GCNL_Athena_Surface_Parent_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Athena_Surface_Parent_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_Athena_Surface_Parent_C_OnLoopingStart");
static_assert(sizeof(GCNL_Athena_Surface_Parent_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCNL_Athena_Surface_Parent_C_OnLoopingStart");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_Athena_Surface_Parent_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_Athena_Surface_Parent_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Surface_Parent_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Surface_Parent_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCNL_Athena_Surface_Parent_C_OnPlayerFootstep final
{
public:
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GCNL_Athena_Surface_Parent_C_OnPlayerFootstep) == 0x000008, "Wrong alignment on GCNL_Athena_Surface_Parent_C_OnPlayerFootstep");
static_assert(sizeof(GCNL_Athena_Surface_Parent_C_OnPlayerFootstep) == 0x000010, "Wrong size on GCNL_Athena_Surface_Parent_C_OnPlayerFootstep");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnPlayerFootstep, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000000, "Member 'GCNL_Athena_Surface_Parent_C_OnPlayerFootstep::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnPlayerFootstep, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'GCNL_Athena_Surface_Parent_C_OnPlayerFootstep::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GCNL_Athena_Surface_Parent_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Athena_Surface_Parent_C_OnRemoval) == 0x000008, "Wrong alignment on GCNL_Athena_Surface_Parent_C_OnRemoval");
static_assert(sizeof(GCNL_Athena_Surface_Parent_C_OnRemoval) == 0x000108, "Wrong size on GCNL_Athena_Surface_Parent_C_OnRemoval");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCNL_Athena_Surface_Parent_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnRemoval, Parameters) == 0x000008, "Member 'GCNL_Athena_Surface_Parent_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCNL_Athena_Surface_Parent_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCNL_Athena_Surface_Parent_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Athena_Surface_Parent_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Athena_Surface_Parent_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCNL_Athena_Surface_Parent_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}
