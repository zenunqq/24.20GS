#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GC_Shield_FullyCharged_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_113[0x5];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
};
static_assert(alignof(GC_Shield_FullyCharged_C_OnBurst) == 0x000008, "Wrong alignment on GC_Shield_FullyCharged_C_OnBurst");
static_assert(sizeof(GC_Shield_FullyCharged_C_OnBurst) == 0x000120, "Wrong size on GC_Shield_FullyCharged_C_OnBurst");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, MyTarget) == 0x000000, "Member 'GC_Shield_FullyCharged_C_OnBurst::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, Parameters) == 0x000008, "Member 'GC_Shield_FullyCharged_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, ParticleComponents) == 0x0000D8, "Member 'GC_Shield_FullyCharged_C_OnBurst::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, AudioComponents) == 0x0000E8, "Member 'GC_Shield_FullyCharged_C_OnBurst::AudioComponents' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, BurstCameraShakeInstance) == 0x0000F8, "Member 'GC_Shield_FullyCharged_C_OnBurst::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, BurstDecalInstance) == 0x000100, "Member 'GC_Shield_FullyCharged_C_OnBurst::BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, K2Node_DynamicCast_AsFort_Pawn) == 0x000108, "Member 'GC_Shield_FullyCharged_C_OnBurst::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'GC_Shield_FullyCharged_C_OnBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, CallFunc_GetSubGame_ReturnValue) == 0x000111, "Member 'GC_Shield_FullyCharged_C_OnBurst::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, K2Node_SwitchEnum_CmpSuccess) == 0x000112, "Member 'GC_Shield_FullyCharged_C_OnBurst::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GC_Shield_FullyCharged_C_OnBurst, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000118, "Member 'GC_Shield_FullyCharged_C_OnBurst::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");

}
