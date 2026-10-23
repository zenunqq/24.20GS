#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "DanceVolume_structs.hpp"

namespace SDK
{

class UDanceSynchronizerComponent final : public UActorComponent
{
public:
	uint8                                         bShouldHalfOrDoubleTimeDances : 1;
	uint8                                         Pad_A1[0x3];
	struct FDanceBeatInfo                         BeatInfo;
	EDanceBeatSyncMode                            SyncMode;
	uint8                                         Pad_AD[0x3];
	float                                         Tempo;
	uint8                                         Pad_B4[0x4];
	class AFortPlayerPawn*                        OwnerPlayerPawn;
	class USkeletalMeshComponent*                 OwnerMeshComponent;
	class USkeletalMeshComponent*                 LeaderMeshComponent;
	uint8                                         Pad_D0[0x8];

public:
	float CalculateDanceMontagePlayRate(const float CurrentTempo, const class UAnimMontage* Montage, const struct FDanceBeatInfo& DanceBeatInfo);
	class AFortPlayerPawn* GetOwnerFortPlayerPawn();
	class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent();
	bool IsTempoSyncEnabled();
	void OnRep_SyncMode();
	void SetBeatSyncMode(EDanceBeatSyncMode NewMode);
	void SetDanceBeatInfo(const struct FDanceBeatInfo& NewDanceBeatInfo);
	void SetTempo(float newTempo);
	void StopOwnerEmoteAudio();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DanceSynchronizerComponent">();
	}
	static class UDanceSynchronizerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDanceSynchronizerComponent>();
	}
};
static_assert(alignof(UDanceSynchronizerComponent) == 0x000008, "Wrong alignment on UDanceSynchronizerComponent");
static_assert(sizeof(UDanceSynchronizerComponent) == 0x0000D8, "Wrong size on UDanceSynchronizerComponent");
static_assert(offsetof(UDanceSynchronizerComponent, BeatInfo) == 0x0000A4, "Member 'UDanceSynchronizerComponent::BeatInfo' has a wrong offset!");
static_assert(offsetof(UDanceSynchronizerComponent, SyncMode) == 0x0000AC, "Member 'UDanceSynchronizerComponent::SyncMode' has a wrong offset!");
static_assert(offsetof(UDanceSynchronizerComponent, Tempo) == 0x0000B0, "Member 'UDanceSynchronizerComponent::Tempo' has a wrong offset!");
static_assert(offsetof(UDanceSynchronizerComponent, OwnerPlayerPawn) == 0x0000B8, "Member 'UDanceSynchronizerComponent::OwnerPlayerPawn' has a wrong offset!");
static_assert(offsetof(UDanceSynchronizerComponent, OwnerMeshComponent) == 0x0000C0, "Member 'UDanceSynchronizerComponent::OwnerMeshComponent' has a wrong offset!");
static_assert(offsetof(UDanceSynchronizerComponent, LeaderMeshComponent) == 0x0000C8, "Member 'UDanceSynchronizerComponent::LeaderMeshComponent' has a wrong offset!");

class UDanceVolumeLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ForceStopMontage(const class AFortPawn* FortPawn);
	static class UFortItemDefinition* GetLastEmoteExecuted(class AController* Controller);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DanceVolumeLibrary">();
	}
	static class UDanceVolumeLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDanceVolumeLibrary>();
	}
};
static_assert(alignof(UDanceVolumeLibrary) == 0x000008, "Wrong alignment on UDanceVolumeLibrary");
static_assert(sizeof(UDanceVolumeLibrary) == 0x000028, "Wrong size on UDanceVolumeLibrary");

}
