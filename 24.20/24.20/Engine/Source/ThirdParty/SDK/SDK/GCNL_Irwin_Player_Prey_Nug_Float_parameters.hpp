#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_109[0x7];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_119[0x7];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	bool                                          CallFunc_IsValid_ReturnValue_2;
};
static_assert(alignof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float) == 0x000008, "Wrong alignment on GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float");
static_assert(sizeof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float) == 0x000230, "Wrong size on GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, EntryPoint) == 0x000000, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_MyTarget) == 0x000008, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_Parameters) == 0x000010, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000100, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000110, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, CallFunc_IsValid_ReturnValue_1) == 0x000118, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_MyTarget_1) == 0x000120, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_Parameters_1) == 0x000128, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_ParticleComponents_1) == 0x0001F8, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_AudioComponents_1) == 0x000208, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_BurstCameraShakeInstance) == 0x000218, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, K2Node_Event_BurstDecalInstance) == 0x000220, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float, CallFunc_IsValid_ReturnValue_2) == 0x000228, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

struct GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Irwin_Player_Prey_Nug_Float_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}
