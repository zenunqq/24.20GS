#pragma once

#include "Basic.hpp"

#include "HmxAudio_structs.hpp"
#include "SBDanceVolume_structs.hpp"

namespace SDK::Params
{

struct FMDanceSynchronizerComponent_GetOwnerFortPlayerPawn final
{
public:
	class AFortPlayerPawn*                        ReturnValue;
};
static_assert(alignof(FMDanceSynchronizerComponent_GetOwnerFortPlayerPawn) == 0x000008, "Wrong alignment on FMDanceSynchronizerComponent_GetOwnerFortPlayerPawn");
static_assert(sizeof(FMDanceSynchronizerComponent_GetOwnerFortPlayerPawn) == 0x000008, "Wrong size on FMDanceSynchronizerComponent_GetOwnerFortPlayerPawn");
static_assert(offsetof(FMDanceSynchronizerComponent_GetOwnerFortPlayerPawn, ReturnValue) == 0x000000, "Member 'FMDanceSynchronizerComponent_GetOwnerFortPlayerPawn::ReturnValue' has a wrong offset!");

struct FMDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;
};
static_assert(alignof(FMDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent) == 0x000008, "Wrong alignment on FMDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent");
static_assert(sizeof(FMDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent) == 0x000008, "Wrong size on FMDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent");
static_assert(offsetof(FMDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent, ReturnValue) == 0x000000, "Member 'FMDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent::ReturnValue' has a wrong offset!");

struct FMDanceSynchronizerComponent_IsMusisSyncEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FMDanceSynchronizerComponent_IsMusisSyncEnabled) == 0x000001, "Wrong alignment on FMDanceSynchronizerComponent_IsMusisSyncEnabled");
static_assert(sizeof(FMDanceSynchronizerComponent_IsMusisSyncEnabled) == 0x000001, "Wrong size on FMDanceSynchronizerComponent_IsMusisSyncEnabled");
static_assert(offsetof(FMDanceSynchronizerComponent_IsMusisSyncEnabled, ReturnValue) == 0x000000, "Member 'FMDanceSynchronizerComponent_IsMusisSyncEnabled::ReturnValue' has a wrong offset!");

struct FMDanceSynchronizerComponent_SetDanceMusicalTimeInfo final
{
public:
	struct FMusicalTimeSpan                       TimeSpanInfo;
};
static_assert(alignof(FMDanceSynchronizerComponent_SetDanceMusicalTimeInfo) == 0x000004, "Wrong alignment on FMDanceSynchronizerComponent_SetDanceMusicalTimeInfo");
static_assert(sizeof(FMDanceSynchronizerComponent_SetDanceMusicalTimeInfo) == 0x000010, "Wrong size on FMDanceSynchronizerComponent_SetDanceMusicalTimeInfo");
static_assert(offsetof(FMDanceSynchronizerComponent_SetDanceMusicalTimeInfo, TimeSpanInfo) == 0x000000, "Member 'FMDanceSynchronizerComponent_SetDanceMusicalTimeInfo::TimeSpanInfo' has a wrong offset!");

struct FMDanceSynchronizerComponent_SetMusicClockReference final
{
public:
	class UOldMusicClockComponent*                MusicClockComponent;
};
static_assert(alignof(FMDanceSynchronizerComponent_SetMusicClockReference) == 0x000008, "Wrong alignment on FMDanceSynchronizerComponent_SetMusicClockReference");
static_assert(sizeof(FMDanceSynchronizerComponent_SetMusicClockReference) == 0x000008, "Wrong size on FMDanceSynchronizerComponent_SetMusicClockReference");
static_assert(offsetof(FMDanceSynchronizerComponent_SetMusicClockReference, MusicClockComponent) == 0x000000, "Member 'FMDanceSynchronizerComponent_SetMusicClockReference::MusicClockComponent' has a wrong offset!");

struct FMDanceSynchronizerComponent_SetMusicSyncEnabled final
{
public:
	bool                                          Enabled;
};
static_assert(alignof(FMDanceSynchronizerComponent_SetMusicSyncEnabled) == 0x000001, "Wrong alignment on FMDanceSynchronizerComponent_SetMusicSyncEnabled");
static_assert(sizeof(FMDanceSynchronizerComponent_SetMusicSyncEnabled) == 0x000001, "Wrong size on FMDanceSynchronizerComponent_SetMusicSyncEnabled");
static_assert(offsetof(FMDanceSynchronizerComponent_SetMusicSyncEnabled, Enabled) == 0x000000, "Member 'FMDanceSynchronizerComponent_SetMusicSyncEnabled::Enabled' has a wrong offset!");

struct SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock final
{
public:
	class UOldMusicClockComponent*                MusicClock;
	class UAnimMontage*                           Montage;
	struct FMusicalTimeSpan                       MontageTimeInfo;
	struct FDanceMontagePlayInfo                  ReturnValue;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock) == 0x000008, "Wrong alignment on SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock");
static_assert(sizeof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock) == 0x000038, "Wrong size on SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock, MusicClock) == 0x000000, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock::MusicClock' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock, Montage) == 0x000008, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock::Montage' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock, MontageTimeInfo) == 0x000010, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock::MontageTimeInfo' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock, ReturnValue) == 0x000020, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock::ReturnValue' has a wrong offset!");

struct SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer final
{
public:
	class UMusicPlayerComponentBase*              MusicPlayer;
	class UAnimMontage*                           Montage;
	struct FMusicalTimeSpan                       MontageTimeInfo;
	struct FDanceMontagePlayInfo                  ReturnValue;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer) == 0x000008, "Wrong alignment on SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer");
static_assert(sizeof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer) == 0x000038, "Wrong size on SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer, MusicPlayer) == 0x000000, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer::MusicPlayer' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer, Montage) == 0x000008, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer::Montage' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer, MontageTimeInfo) == 0x000010, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer::MontageTimeInfo' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer, ReturnValue) == 0x000020, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer::ReturnValue' has a wrong offset!");

struct SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock final
{
public:
	class UOldMusicClockComponent*                MusicClock;
	const class UAnimMontage*                     Montage;
	float                                         MontageBeatLength;
	float                                         ReturnValue;
};
static_assert(alignof(SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock) == 0x000008, "Wrong alignment on SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock");
static_assert(sizeof(SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock) == 0x000018, "Wrong size on SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock, MusicClock) == 0x000000, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock::MusicClock' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock, Montage) == 0x000008, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock::Montage' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock, MontageBeatLength) == 0x000010, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock::MontageBeatLength' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock, ReturnValue) == 0x000014, "Member 'SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock::ReturnValue' has a wrong offset!");

struct SBDanceVolumeLibrary_ForceStopMontage final
{
public:
	const class AFortPawn*                        FortPawn;
};
static_assert(alignof(SBDanceVolumeLibrary_ForceStopMontage) == 0x000008, "Wrong alignment on SBDanceVolumeLibrary_ForceStopMontage");
static_assert(sizeof(SBDanceVolumeLibrary_ForceStopMontage) == 0x000008, "Wrong size on SBDanceVolumeLibrary_ForceStopMontage");
static_assert(offsetof(SBDanceVolumeLibrary_ForceStopMontage, FortPawn) == 0x000000, "Member 'SBDanceVolumeLibrary_ForceStopMontage::FortPawn' has a wrong offset!");

struct SBDanceVolumeLibrary_GetLastEmoteExecuted final
{
public:
	class AController*                            Controller;
	class UFortItemDefinition*                    ReturnValue;
};
static_assert(alignof(SBDanceVolumeLibrary_GetLastEmoteExecuted) == 0x000008, "Wrong alignment on SBDanceVolumeLibrary_GetLastEmoteExecuted");
static_assert(sizeof(SBDanceVolumeLibrary_GetLastEmoteExecuted) == 0x000010, "Wrong size on SBDanceVolumeLibrary_GetLastEmoteExecuted");
static_assert(offsetof(SBDanceVolumeLibrary_GetLastEmoteExecuted, Controller) == 0x000000, "Member 'SBDanceVolumeLibrary_GetLastEmoteExecuted::Controller' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_GetLastEmoteExecuted, ReturnValue) == 0x000008, "Member 'SBDanceVolumeLibrary_GetLastEmoteExecuted::ReturnValue' has a wrong offset!");

struct SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping final
{
public:
	const class UAnimMontage*                     Montage;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping) == 0x000008, "Wrong alignment on SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping");
static_assert(sizeof(SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping) == 0x000010, "Wrong size on SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping");
static_assert(offsetof(SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping, Montage) == 0x000000, "Member 'SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping::Montage' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping, ReturnValue) == 0x000008, "Member 'SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping::ReturnValue' has a wrong offset!");

struct SBDanceVolumeLibrary_SetWholeMontageLooping final
{
public:
	class UAnimInstance*                          Anim;
	class UAnimMontage*                           Montage;
};
static_assert(alignof(SBDanceVolumeLibrary_SetWholeMontageLooping) == 0x000008, "Wrong alignment on SBDanceVolumeLibrary_SetWholeMontageLooping");
static_assert(sizeof(SBDanceVolumeLibrary_SetWholeMontageLooping) == 0x000010, "Wrong size on SBDanceVolumeLibrary_SetWholeMontageLooping");
static_assert(offsetof(SBDanceVolumeLibrary_SetWholeMontageLooping, Anim) == 0x000000, "Member 'SBDanceVolumeLibrary_SetWholeMontageLooping::Anim' has a wrong offset!");
static_assert(offsetof(SBDanceVolumeLibrary_SetWholeMontageLooping, Montage) == 0x000008, "Member 'SBDanceVolumeLibrary_SetWholeMontageLooping::Montage' has a wrong offset!");

}
