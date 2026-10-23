#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_Surface_Parent_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        TargetPawn;
	bool                                          Debug;
	bool                                          Is_in_Water;

public:
	void ExecuteUbergraph_GCNL_Athena_Surface_Parent(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnPlayerFootstep();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_Surface_Parent_C">();
	}
	static class AGCNL_Athena_Surface_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_Surface_Parent_C>();
	}
};
static_assert(alignof(AGCNL_Athena_Surface_Parent_C) == 0x000008, "Wrong alignment on AGCNL_Athena_Surface_Parent_C");
static_assert(sizeof(AGCNL_Athena_Surface_Parent_C) == 0x000978, "Wrong size on AGCNL_Athena_Surface_Parent_C");
static_assert(offsetof(AGCNL_Athena_Surface_Parent_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_Surface_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Surface_Parent_C, TargetPawn) == 0x000968, "Member 'AGCNL_Athena_Surface_Parent_C::TargetPawn' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Surface_Parent_C, Debug) == 0x000970, "Member 'AGCNL_Athena_Surface_Parent_C::Debug' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Surface_Parent_C, Is_in_Water) == 0x000971, "Member 'AGCNL_Athena_Surface_Parent_C::Is_in_Water' has a wrong offset!");

}
