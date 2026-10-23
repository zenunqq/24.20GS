#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_MultiInteract_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAudioComponent*                        Audio;
	double                                        CurrentPitch;
	double                                        TargetPitch;
	TMap<int32, double>                           Pitch_Map;
	double                                        PreviousPitch;
	struct FTimerHandle                           TargetProgressHandle;
	class APlayerPawn_Athena_C*                   Effect_Causer_Pawn;

public:
	void CheckTargetProgress();
	void ExecuteUbergraph_GCNL_Athena_MultiInteract(int32 EntryPoint);
	void OnActorCountChanged(int32 InteractingActorCount, float MultiInteractMultiplier, float InteractingDuration);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_MultiInteract_C">();
	}
	static class AGCNL_Athena_MultiInteract_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_MultiInteract_C>();
	}
};
static_assert(alignof(AGCNL_Athena_MultiInteract_C) == 0x000008, "Wrong alignment on AGCNL_Athena_MultiInteract_C");
static_assert(sizeof(AGCNL_Athena_MultiInteract_C) == 0x0009E8, "Wrong size on AGCNL_Athena_MultiInteract_C");
static_assert(offsetof(AGCNL_Athena_MultiInteract_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_MultiInteract_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_MultiInteract_C, Audio) == 0x000968, "Member 'AGCNL_Athena_MultiInteract_C::Audio' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_MultiInteract_C, CurrentPitch) == 0x000970, "Member 'AGCNL_Athena_MultiInteract_C::CurrentPitch' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_MultiInteract_C, TargetPitch) == 0x000978, "Member 'AGCNL_Athena_MultiInteract_C::TargetPitch' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_MultiInteract_C, Pitch_Map) == 0x000980, "Member 'AGCNL_Athena_MultiInteract_C::Pitch_Map' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_MultiInteract_C, PreviousPitch) == 0x0009D0, "Member 'AGCNL_Athena_MultiInteract_C::PreviousPitch' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_MultiInteract_C, TargetProgressHandle) == 0x0009D8, "Member 'AGCNL_Athena_MultiInteract_C::TargetProgressHandle' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_MultiInteract_C, Effect_Causer_Pawn) == 0x0009E0, "Member 'AGCNL_Athena_MultiInteract_C::Effect_Causer_Pawn' has a wrong offset!");

}
