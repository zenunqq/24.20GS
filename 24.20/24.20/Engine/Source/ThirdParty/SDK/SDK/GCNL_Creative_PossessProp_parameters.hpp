#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp final
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
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_119[0x7];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
};
static_assert(alignof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp) == 0x000008, "Wrong alignment on GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp");
static_assert(sizeof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp) == 0x000218, "Wrong size on GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, EntryPoint) == 0x000000, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_MyTarget) == 0x000008, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_Parameters) == 0x000010, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_BurstCameraShakeInstance) == 0x000100, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_BurstDecalInstance) == 0x000108, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000110, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_MyTarget_1) == 0x000120, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_Parameters_1) == 0x000128, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_ParticleComponents_1) == 0x0001F8, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp, K2Node_Event_AudioComponents_1) == 0x000208, "Member 'GCNL_Creative_PossessProp_C_ExecuteUbergraph_GCNL_Creative_PossessProp::K2Node_Event_AudioComponents_1' has a wrong offset!");

struct GCNL_Creative_PossessProp_C_OnActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_OnActive_ReturnValue;
};
static_assert(alignof(GCNL_Creative_PossessProp_C_OnActive) == 0x000008, "Wrong alignment on GCNL_Creative_PossessProp_C_OnActive");
static_assert(sizeof(GCNL_Creative_PossessProp_C_OnActive) == 0x0000E0, "Wrong size on GCNL_Creative_PossessProp_C_OnActive");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnActive, MyTarget) == 0x000000, "Member 'GCNL_Creative_PossessProp_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnActive, Parameters) == 0x000008, "Member 'GCNL_Creative_PossessProp_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnActive, ReturnValue) == 0x0000D8, "Member 'GCNL_Creative_PossessProp_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnActive, CallFunc_OnActive_ReturnValue) == 0x0000D9, "Member 'GCNL_Creative_PossessProp_C_OnActive::CallFunc_OnActive_ReturnValue' has a wrong offset!");

struct GCNL_Creative_PossessProp_C_OnApplication final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Creative_PossessProp_C_OnApplication) == 0x000008, "Wrong alignment on GCNL_Creative_PossessProp_C_OnApplication");
static_assert(sizeof(GCNL_Creative_PossessProp_C_OnApplication) == 0x000108, "Wrong size on GCNL_Creative_PossessProp_C_OnApplication");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnApplication, MyTarget) == 0x000000, "Member 'GCNL_Creative_PossessProp_C_OnApplication::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnApplication, Parameters) == 0x000008, "Member 'GCNL_Creative_PossessProp_C_OnApplication::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnApplication, ParticleComponents) == 0x0000D8, "Member 'GCNL_Creative_PossessProp_C_OnApplication::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnApplication, AudioComponents) == 0x0000E8, "Member 'GCNL_Creative_PossessProp_C_OnApplication::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnApplication, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Creative_PossessProp_C_OnApplication::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnApplication, BurstDecalInstance) == 0x000100, "Member 'GCNL_Creative_PossessProp_C_OnApplication::BurstDecalInstance' has a wrong offset!");

struct GCNL_Creative_PossessProp_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Creative_PossessProp_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCNL_Creative_PossessProp_C_OnLoopingStart");
static_assert(sizeof(GCNL_Creative_PossessProp_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCNL_Creative_PossessProp_C_OnLoopingStart");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCNL_Creative_PossessProp_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCNL_Creative_PossessProp_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCNL_Creative_PossessProp_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Creative_PossessProp_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCNL_Creative_PossessProp_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}
