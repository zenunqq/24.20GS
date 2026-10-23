#pragma once

#include "Basic.hpp"

#include "DanceVolume_structs.hpp"

namespace SDK::Params
{

struct DanceSynchronizerComponent_CalculateDanceMontagePlayRate final
{
public:
	float                                         CurrentTempo;
	uint8                                         Pad_4[0x4];
	const class UAnimMontage*                     Montage;
	struct FDanceBeatInfo                         DanceBeatInfo;
	float                                         ReturnValue;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(DanceSynchronizerComponent_CalculateDanceMontagePlayRate) == 0x000008, "Wrong alignment on DanceSynchronizerComponent_CalculateDanceMontagePlayRate");
static_assert(sizeof(DanceSynchronizerComponent_CalculateDanceMontagePlayRate) == 0x000020, "Wrong size on DanceSynchronizerComponent_CalculateDanceMontagePlayRate");
static_assert(offsetof(DanceSynchronizerComponent_CalculateDanceMontagePlayRate, CurrentTempo) == 0x000000, "Member 'DanceSynchronizerComponent_CalculateDanceMontagePlayRate::CurrentTempo' has a wrong offset!");
static_assert(offsetof(DanceSynchronizerComponent_CalculateDanceMontagePlayRate, Montage) == 0x000008, "Member 'DanceSynchronizerComponent_CalculateDanceMontagePlayRate::Montage' has a wrong offset!");
static_assert(offsetof(DanceSynchronizerComponent_CalculateDanceMontagePlayRate, DanceBeatInfo) == 0x000010, "Member 'DanceSynchronizerComponent_CalculateDanceMontagePlayRate::DanceBeatInfo' has a wrong offset!");
static_assert(offsetof(DanceSynchronizerComponent_CalculateDanceMontagePlayRate, ReturnValue) == 0x000018, "Member 'DanceSynchronizerComponent_CalculateDanceMontagePlayRate::ReturnValue' has a wrong offset!");

struct DanceSynchronizerComponent_GetOwnerFortPlayerPawn final
{
public:
	class AFortPlayerPawn*                        ReturnValue;
};
static_assert(alignof(DanceSynchronizerComponent_GetOwnerFortPlayerPawn) == 0x000008, "Wrong alignment on DanceSynchronizerComponent_GetOwnerFortPlayerPawn");
static_assert(sizeof(DanceSynchronizerComponent_GetOwnerFortPlayerPawn) == 0x000008, "Wrong size on DanceSynchronizerComponent_GetOwnerFortPlayerPawn");
static_assert(offsetof(DanceSynchronizerComponent_GetOwnerFortPlayerPawn, ReturnValue) == 0x000000, "Member 'DanceSynchronizerComponent_GetOwnerFortPlayerPawn::ReturnValue' has a wrong offset!");

struct DanceSynchronizerComponent_GetOwnerSkeletalMeshComponent final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;
};
static_assert(alignof(DanceSynchronizerComponent_GetOwnerSkeletalMeshComponent) == 0x000008, "Wrong alignment on DanceSynchronizerComponent_GetOwnerSkeletalMeshComponent");
static_assert(sizeof(DanceSynchronizerComponent_GetOwnerSkeletalMeshComponent) == 0x000008, "Wrong size on DanceSynchronizerComponent_GetOwnerSkeletalMeshComponent");
static_assert(offsetof(DanceSynchronizerComponent_GetOwnerSkeletalMeshComponent, ReturnValue) == 0x000000, "Member 'DanceSynchronizerComponent_GetOwnerSkeletalMeshComponent::ReturnValue' has a wrong offset!");

struct DanceSynchronizerComponent_IsTempoSyncEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(DanceSynchronizerComponent_IsTempoSyncEnabled) == 0x000001, "Wrong alignment on DanceSynchronizerComponent_IsTempoSyncEnabled");
static_assert(sizeof(DanceSynchronizerComponent_IsTempoSyncEnabled) == 0x000001, "Wrong size on DanceSynchronizerComponent_IsTempoSyncEnabled");
static_assert(offsetof(DanceSynchronizerComponent_IsTempoSyncEnabled, ReturnValue) == 0x000000, "Member 'DanceSynchronizerComponent_IsTempoSyncEnabled::ReturnValue' has a wrong offset!");

struct DanceSynchronizerComponent_SetBeatSyncMode final
{
public:
	EDanceBeatSyncMode                            NewMode;
};
static_assert(alignof(DanceSynchronizerComponent_SetBeatSyncMode) == 0x000001, "Wrong alignment on DanceSynchronizerComponent_SetBeatSyncMode");
static_assert(sizeof(DanceSynchronizerComponent_SetBeatSyncMode) == 0x000001, "Wrong size on DanceSynchronizerComponent_SetBeatSyncMode");
static_assert(offsetof(DanceSynchronizerComponent_SetBeatSyncMode, NewMode) == 0x000000, "Member 'DanceSynchronizerComponent_SetBeatSyncMode::NewMode' has a wrong offset!");

struct DanceSynchronizerComponent_SetDanceBeatInfo final
{
public:
	struct FDanceBeatInfo                         NewDanceBeatInfo;
};
static_assert(alignof(DanceSynchronizerComponent_SetDanceBeatInfo) == 0x000004, "Wrong alignment on DanceSynchronizerComponent_SetDanceBeatInfo");
static_assert(sizeof(DanceSynchronizerComponent_SetDanceBeatInfo) == 0x000008, "Wrong size on DanceSynchronizerComponent_SetDanceBeatInfo");
static_assert(offsetof(DanceSynchronizerComponent_SetDanceBeatInfo, NewDanceBeatInfo) == 0x000000, "Member 'DanceSynchronizerComponent_SetDanceBeatInfo::NewDanceBeatInfo' has a wrong offset!");

struct DanceSynchronizerComponent_SetTempo final
{
public:
	float                                         newTempo;
};
static_assert(alignof(DanceSynchronizerComponent_SetTempo) == 0x000004, "Wrong alignment on DanceSynchronizerComponent_SetTempo");
static_assert(sizeof(DanceSynchronizerComponent_SetTempo) == 0x000004, "Wrong size on DanceSynchronizerComponent_SetTempo");
static_assert(offsetof(DanceSynchronizerComponent_SetTempo, newTempo) == 0x000000, "Member 'DanceSynchronizerComponent_SetTempo::newTempo' has a wrong offset!");

struct DanceVolumeLibrary_ForceStopMontage final
{
public:
	const class AFortPawn*                        FortPawn;
};
static_assert(alignof(DanceVolumeLibrary_ForceStopMontage) == 0x000008, "Wrong alignment on DanceVolumeLibrary_ForceStopMontage");
static_assert(sizeof(DanceVolumeLibrary_ForceStopMontage) == 0x000008, "Wrong size on DanceVolumeLibrary_ForceStopMontage");
static_assert(offsetof(DanceVolumeLibrary_ForceStopMontage, FortPawn) == 0x000000, "Member 'DanceVolumeLibrary_ForceStopMontage::FortPawn' has a wrong offset!");

struct DanceVolumeLibrary_GetLastEmoteExecuted final
{
public:
	class AController*                            Controller;
	class UFortItemDefinition*                    ReturnValue;
};
static_assert(alignof(DanceVolumeLibrary_GetLastEmoteExecuted) == 0x000008, "Wrong alignment on DanceVolumeLibrary_GetLastEmoteExecuted");
static_assert(sizeof(DanceVolumeLibrary_GetLastEmoteExecuted) == 0x000010, "Wrong size on DanceVolumeLibrary_GetLastEmoteExecuted");
static_assert(offsetof(DanceVolumeLibrary_GetLastEmoteExecuted, Controller) == 0x000000, "Member 'DanceVolumeLibrary_GetLastEmoteExecuted::Controller' has a wrong offset!");
static_assert(offsetof(DanceVolumeLibrary_GetLastEmoteExecuted, ReturnValue) == 0x000008, "Member 'DanceVolumeLibrary_GetLastEmoteExecuted::ReturnValue' has a wrong offset!");

}
