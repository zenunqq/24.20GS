#pragma once

#include "Basic.hpp"

#include "SBDanceVolume_classes.hpp"
#include "SBDanceVolume_parameters.hpp"

namespace SDK
{

class AFortPlayerPawn* UFMDanceSynchronizerComponent::GetOwnerFortPlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FMDanceSynchronizerComponent", "GetOwnerFortPlayerPawn");

	Params::FMDanceSynchronizerComponent_GetOwnerFortPlayerPawn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USkeletalMeshComponent* UFMDanceSynchronizerComponent::GetOwnerSkeletalMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FMDanceSynchronizerComponent", "GetOwnerSkeletalMeshComponent");

	Params::FMDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFMDanceSynchronizerComponent::IsMusisSyncEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FMDanceSynchronizerComponent", "IsMusisSyncEnabled");

	Params::FMDanceSynchronizerComponent_IsMusisSyncEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFMDanceSynchronizerComponent::SetDanceMusicalTimeInfo(const struct FMusicalTimeSpan& TimeSpanInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FMDanceSynchronizerComponent", "SetDanceMusicalTimeInfo");

	Params::FMDanceSynchronizerComponent_SetDanceMusicalTimeInfo Parms{};

	Parms.TimeSpanInfo = std::move(TimeSpanInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFMDanceSynchronizerComponent::SetMusicClockReference(class UOldMusicClockComponent* MusicClockComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FMDanceSynchronizerComponent", "SetMusicClockReference");

	Params::FMDanceSynchronizerComponent_SetMusicClockReference Parms{};

	Parms.MusicClockComponent = MusicClockComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFMDanceSynchronizerComponent::SetMusicSyncEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FMDanceSynchronizerComponent", "SetMusicSyncEnabled");

	Params::FMDanceSynchronizerComponent_SetMusicSyncEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFMDanceSynchronizerComponent::StopOwnerEmoteAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FMDanceSynchronizerComponent", "StopOwnerEmoteAudio");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FDanceMontagePlayInfo USBDanceVolumeLibrary::CalculateDanceMontagePlayInfoWithMusicClock(class UOldMusicClockComponent* MusicClock, class UAnimMontage* Montage, const struct FMusicalTimeSpan& MontageTimeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBDanceVolumeLibrary", "CalculateDanceMontagePlayInfoWithMusicClock");

	Params::SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicClock Parms{};

	Parms.MusicClock = MusicClock;
	Parms.Montage = Montage;
	Parms.MontageTimeInfo = std::move(MontageTimeInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDanceMontagePlayInfo USBDanceVolumeLibrary::CalculateDanceMontagePlayInfoWithMusicPlayer(class UMusicPlayerComponentBase* MusicPlayer, class UAnimMontage* Montage, const struct FMusicalTimeSpan& MontageTimeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBDanceVolumeLibrary", "CalculateDanceMontagePlayInfoWithMusicPlayer");

	Params::SBDanceVolumeLibrary_CalculateDanceMontagePlayInfoWithMusicPlayer Parms{};

	Parms.MusicPlayer = MusicPlayer;
	Parms.Montage = Montage;
	Parms.MontageTimeInfo = std::move(MontageTimeInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USBDanceVolumeLibrary::CalculateDanceMontagePlayRateWithMusicClock(class UOldMusicClockComponent* MusicClock, const class UAnimMontage* Montage, const float MontageBeatLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBDanceVolumeLibrary", "CalculateDanceMontagePlayRateWithMusicClock");

	Params::SBDanceVolumeLibrary_CalculateDanceMontagePlayRateWithMusicClock Parms{};

	Parms.MusicClock = MusicClock;
	Parms.Montage = Montage;
	Parms.MontageBeatLength = MontageBeatLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USBDanceVolumeLibrary::ForceStopMontage(const class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBDanceVolumeLibrary", "ForceStopMontage");

	Params::SBDanceVolumeLibrary_ForceStopMontage Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortItemDefinition* USBDanceVolumeLibrary::GetLastEmoteExecuted(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBDanceVolumeLibrary", "GetLastEmoteExecuted");

	Params::SBDanceVolumeLibrary_GetLastEmoteExecuted Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USBDanceVolumeLibrary::IsMontageSetupForDanceVolumeLooping(const class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBDanceVolumeLibrary", "IsMontageSetupForDanceVolumeLooping");

	Params::SBDanceVolumeLibrary_IsMontageSetupForDanceVolumeLooping Parms{};

	Parms.Montage = Montage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USBDanceVolumeLibrary::SetWholeMontageLooping(class UAnimInstance* Anim, class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SBDanceVolumeLibrary", "SetWholeMontageLooping");

	Params::SBDanceVolumeLibrary_SetWholeMontageLooping Parms{};

	Parms.Anim = Anim;
	Parms.Montage = Montage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
