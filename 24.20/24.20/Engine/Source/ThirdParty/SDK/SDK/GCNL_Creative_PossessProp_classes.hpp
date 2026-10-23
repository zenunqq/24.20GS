#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Creative_PossessProp_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class APlayerPawn_Athena_C*                   PlayerPawnAthena;

public:
	void ExecuteUbergraph_GCNL_Creative_PossessProp(int32 EntryPoint);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Creative_PossessProp_C">();
	}
	static class AGCNL_Creative_PossessProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Creative_PossessProp_C>();
	}
};
static_assert(alignof(AGCNL_Creative_PossessProp_C) == 0x000008, "Wrong alignment on AGCNL_Creative_PossessProp_C");
static_assert(sizeof(AGCNL_Creative_PossessProp_C) == 0x000970, "Wrong size on AGCNL_Creative_PossessProp_C");
static_assert(offsetof(AGCNL_Creative_PossessProp_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Creative_PossessProp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Creative_PossessProp_C, PlayerPawnAthena) == 0x000968, "Member 'AGCNL_Creative_PossessProp_C::PlayerPawnAthena' has a wrong offset!");

}
