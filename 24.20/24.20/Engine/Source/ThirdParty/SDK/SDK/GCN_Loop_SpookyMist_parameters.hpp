#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_34[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_139[0x7];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist) == 0x000008, "Wrong alignment on GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist");
static_assert(sizeof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist) == 0x000258, "Wrong size on GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, EntryPoint) == 0x000000, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_CreateDelegate_OutputDelegate_2) == 0x00001C, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_CreateDelegate_OutputDelegate_3) == 0x000028, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_MyTarget) == 0x000038, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_Parameters) == 0x000040, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_ParticleComponents) == 0x000110, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_AudioComponents) == 0x000120, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000130, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_MyTarget_1) == 0x000140, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_Parameters_1) == 0x000148, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_ParticleComponents_1) == 0x000218, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_AudioComponents_1) == 0x000228, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_BurstCameraShakeInstance) == 0x000238, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_Event_BurstDecalInstance) == 0x000240, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000248, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, K2Node_DynamicCast_bSuccess_1) == 0x000250, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist, CallFunc_IsValid_ReturnValue) == 0x000251, "Member 'GCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GCN_Loop_SpookyMist_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCN_Loop_SpookyMist_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Loop_SpookyMist_C_OnLoopingStart");
static_assert(sizeof(GCN_Loop_SpookyMist_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCN_Loop_SpookyMist_C_OnLoopingStart");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Loop_SpookyMist_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Loop_SpookyMist_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_SpookyMist_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_SpookyMist_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCN_Loop_SpookyMist_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCN_Loop_SpookyMist_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Loop_SpookyMist_C_OnRemoval");
static_assert(sizeof(GCN_Loop_SpookyMist_C_OnRemoval) == 0x000108, "Wrong size on GCN_Loop_SpookyMist_C_OnRemoval");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Loop_SpookyMist_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Loop_SpookyMist_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_SpookyMist_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_SpookyMist_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Loop_SpookyMist_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_SpookyMist_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCN_Loop_SpookyMist_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

}
