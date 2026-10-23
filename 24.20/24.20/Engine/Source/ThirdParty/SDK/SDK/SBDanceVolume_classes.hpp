#pragma once

#include "Basic.hpp"

#include "HmxAudio_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UFMDanceSynchronizerComponent final : public UActorComponent
{
public:
	uint8                                         bShouldHalfOrDoubleTimeDances : 1;
	uint8                                         Pad_A1[0x3];
	struct FMusicalTimeSpan                       DanceTimeSpan;
	uint8                                         Pad_B4[0x4];
	class UOldMusicClockComponent*                MusicClock;
	class AFortPlayerPawn*                        OwnerPlayerPawn;
	class USkeletalMeshComponent*                 OwnerMeshComponent;
	bool                                          bMusicSyncEnabled;
	bool                                          bStopAudioComplete;
	uint8                                         Pad_D2[0x6];
	TArray<class FName>                           EmoteSoundIds;

public:
	class AFortPlayerPawn* GetOwnerFortPlayerPawn();
	class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent();
	bool IsMusisSyncEnabled();
	void SetDanceMusicalTimeInfo(const struct FMusicalTimeSpan& TimeSpanInfo);
	void SetMusicClockReference(class UOldMusicClockComponent* MusicClockComponent);
	void SetMusicSyncEnabled(bool Enabled);
	void StopOwnerEmoteAudio();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FMDanceSynchronizerComponent">();
	}
	static class UFMDanceSynchronizerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFMDanceSynchronizerComponent>();
	}
};
static_assert(alignof(UFMDanceSynchronizerComponent) == 0x000008, "Wrong alignment on UFMDanceSynchronizerComponent");
static_assert(sizeof(UFMDanceSynchronizerComponent) == 0x0000E8, "Wrong size on UFMDanceSynchronizerComponent");
static_assert(offsetof(UFMDanceSynchronizerComponent, DanceTimeSpan) == 0x0000A4, "Member 'UFMDanceSynchronizerComponent::DanceTimeSpan' has a wrong offset!");
static_assert(offsetof(UFMDanceSynchronizerComponent, MusicClock) == 0x0000B8, "Member 'UFMDanceSynchronizerComponent::MusicClock' has a wrong offset!");
static_assert(offsetof(UFMDanceSynchronizerComponent, OwnerPlayerPawn) == 0x0000C0, "Member 'UFMDanceSynchronizerComponent::OwnerPlayerPawn' has a wrong offset!");
static_assert(offsetof(UFMDanceSynchronizerComponent, OwnerMeshComponent) == 0x0000C8, "Member 'UFMDanceSynchronizerComponent::OwnerMeshComponent' has a wrong offset!");
static_assert(offsetof(UFMDanceSynchronizerComponent, bMusicSyncEnabled) == 0x0000D0, "Member 'UFMDanceSynchronizerComponent::bMusicSyncEnabled' has a wrong offset!");
static_assert(offsetof(UFMDanceSynchronizerComponent, bStopAudioComplete) == 0x0000D1, "Member 'UFMDanceSynchronizerComponent::bStopAudioComplete' has a wrong offset!");
static_assert(offsetof(UFMDanceSynchronizerComponent, EmoteSoundIds) == 0x0000D8, "Member 'UFMDanceSynchronizerComponent::EmoteSoundIds' has a wrong offset!");

class USBDanceVolumeLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FDanceMontagePlayInfo CalculateDanceMontagePlayInfoWithMusicClock(class UOldMusicClockComponent* MusicClock, class UAnimMontage* Montage, const struct FMusicalTimeSpan& MontageTimeInfo);
	static struct FDanceMontagePlayInfo CalculateDanceMontagePlayInfoWithMusicPlayer(class UMusicPlayerComponentBase* MusicPlayer, class UAnimMontage* Montage, const struct FMusicalTimeSpan& MontageTimeInfo);
	static float CalculateDanceMontagePlayRateWithMusicClock(class UOldMusicClockComponent* MusicClock, const class UAnimMontage* Montage, const float MontageBeatLength);
	static void ForceStopMontage(const class AFortPawn* FortPawn);
	static class UFortItemDefinition* GetLastEmoteExecuted(class AController* Controller);
	static bool IsMontageSetupForDanceVolumeLooping(const class UAnimMontage* Montage);
	static void SetWholeMontageLooping(class UAnimInstance* Anim, class UAnimMontage* Montage);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBDanceVolumeLibrary">();
	}
	static class USBDanceVolumeLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBDanceVolumeLibrary>();
	}
};
static_assert(alignof(USBDanceVolumeLibrary) == 0x000008, "Wrong alignment on USBDanceVolumeLibrary");
static_assert(sizeof(USBDanceVolumeLibrary) == 0x000028, "Wrong size on USBDanceVolumeLibrary");

}
