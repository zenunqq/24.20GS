#pragma once

#include "Basic.hpp"

#include "DanceVolume_classes.hpp"
#include "DanceVolume_parameters.hpp"

namespace SDK
{

float UDanceSynchronizerComponent::CalculateDanceMontagePlayRate(const float CurrentTempo, const class UAnimMontage* Montage, const struct FDanceBeatInfo& DanceBeatInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DanceSynchronizerComponent", "CalculateDanceMontagePlayRate");

	Params::DanceSynchronizerComponent_CalculateDanceMontagePlayRate Parms{};

	Parms.CurrentTempo = CurrentTempo;
	Parms.Montage = Montage;
	Parms.DanceBeatInfo = std::move(DanceBeatInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortPlayerPawn* UDanceSynchronizerComponent::GetOwnerFortPlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DanceSynchronizerComponent", "GetOwnerFortPlayerPawn");

	Params::DanceSynchronizerComponent_GetOwnerFortPlayerPawn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USkeletalMeshComponent* UDanceSynchronizerComponent::GetOwnerSkeletalMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DanceSynchronizerComponent", "GetOwnerSkeletalMeshComponent");

	Params::DanceSynchronizerComponent_GetOwnerSkeletalMeshComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UDanceSynchronizerComponent::IsTempoSyncEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DanceSynchronizerComponent", "IsTempoSyncEnabled");

	Params::DanceSynchronizerComponent_IsTempoSyncEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDanceSynchronizerComponent::OnRep_SyncMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DanceSynchronizerComponent", "OnRep_SyncMode");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UDanceSynchronizerComponent::SetBeatSyncMode(EDanceBeatSyncMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DanceSynchronizerComponent", "SetBeatSyncMode");

	Params::DanceSynchronizerComponent_SetBeatSyncMode Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDanceSynchronizerComponent::SetDanceBeatInfo(const struct FDanceBeatInfo& NewDanceBeatInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DanceSynchronizerComponent", "SetDanceBeatInfo");

	Params::DanceSynchronizerComponent_SetDanceBeatInfo Parms{};

	Parms.NewDanceBeatInfo = std::move(NewDanceBeatInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDanceSynchronizerComponent::SetTempo(float newTempo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DanceSynchronizerComponent", "SetTempo");

	Params::DanceSynchronizerComponent_SetTempo Parms{};

	Parms.newTempo = newTempo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDanceSynchronizerComponent::StopOwnerEmoteAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DanceSynchronizerComponent", "StopOwnerEmoteAudio");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UDanceVolumeLibrary::ForceStopMontage(const class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DanceVolumeLibrary", "ForceStopMontage");

	Params::DanceVolumeLibrary_ForceStopMontage Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortItemDefinition* UDanceVolumeLibrary::GetLastEmoteExecuted(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DanceVolumeLibrary", "GetLastEmoteExecuted");

	Params::DanceVolumeLibrary_GetLastEmoteExecuted Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
