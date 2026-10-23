#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide final
{
public:
	int32                                         EntryPoint;
	EFortTeamAffiliation                          Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	double                                        Temp_real_Variable_2;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_121[0x7];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue;
	uint8                                         Pad_239[0x7];
	double                                        K2Node_Select_Default;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	float                                         CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast;
};
static_assert(alignof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide) == 0x000008, "Wrong alignment on GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide");
static_assert(sizeof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide) == 0x000258, "Wrong size on GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, EntryPoint) == 0x000000, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, Temp_byte_Variable) == 0x000004, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, Temp_real_Variable) == 0x000008, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, Temp_real_Variable_1) == 0x000010, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, Temp_real_Variable_2) == 0x000018, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_MyTarget_1) == 0x000020, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_Parameters_1) == 0x000028, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_ParticleComponents_1) == 0x0000F8, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_AudioComponents_1) == 0x000108, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_DynamicCast_AsFort_Pawn) == 0x000118, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_MyTarget) == 0x000128, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_Parameters) == 0x000130, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_ParticleComponents) == 0x000200, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_AudioComponents) == 0x000210, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_BurstCameraShakeInstance) == 0x000220, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Event_BurstDecalInstance) == 0x000228, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000230, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue) == 0x000238, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, K2Node_Select_Default) == 0x000240, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000248, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide, CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast) == 0x000250, "Member 'GCNL_Irwin_Slide_C_ExecuteUbergraph_GCNL_Irwin_Slide::CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast' has a wrong offset!");

struct GCNL_Irwin_Slide_C_OnLoopingStartGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCNL_Irwin_Slide_C_OnLoopingStartGeneric) == 0x000008, "Wrong alignment on GCNL_Irwin_Slide_C_OnLoopingStartGeneric");
static_assert(sizeof(GCNL_Irwin_Slide_C_OnLoopingStartGeneric) == 0x0000F8, "Wrong size on GCNL_Irwin_Slide_C_OnLoopingStartGeneric");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnLoopingStartGeneric, MyTarget) == 0x000000, "Member 'GCNL_Irwin_Slide_C_OnLoopingStartGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnLoopingStartGeneric, Parameters) == 0x000008, "Member 'GCNL_Irwin_Slide_C_OnLoopingStartGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnLoopingStartGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Irwin_Slide_C_OnLoopingStartGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnLoopingStartGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Irwin_Slide_C_OnLoopingStartGeneric::AudioComponents' has a wrong offset!");

struct GCNL_Irwin_Slide_C_OnRemovalGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCNL_Irwin_Slide_C_OnRemovalGeneric) == 0x000008, "Wrong alignment on GCNL_Irwin_Slide_C_OnRemovalGeneric");
static_assert(sizeof(GCNL_Irwin_Slide_C_OnRemovalGeneric) == 0x000108, "Wrong size on GCNL_Irwin_Slide_C_OnRemovalGeneric");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnRemovalGeneric, MyTarget) == 0x000000, "Member 'GCNL_Irwin_Slide_C_OnRemovalGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnRemovalGeneric, Parameters) == 0x000008, "Member 'GCNL_Irwin_Slide_C_OnRemovalGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnRemovalGeneric, ParticleComponents) == 0x0000D8, "Member 'GCNL_Irwin_Slide_C_OnRemovalGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnRemovalGeneric, AudioComponents) == 0x0000E8, "Member 'GCNL_Irwin_Slide_C_OnRemovalGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnRemovalGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCNL_Irwin_Slide_C_OnRemovalGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCNL_Irwin_Slide_C_OnRemovalGeneric, BurstDecalInstance) == 0x000100, "Member 'GCNL_Irwin_Slide_C_OnRemovalGeneric::BurstDecalInstance' has a wrong offset!");

}
