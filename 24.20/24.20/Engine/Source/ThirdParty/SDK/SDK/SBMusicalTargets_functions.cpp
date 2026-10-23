#pragma once

#include "Basic.hpp"

#include "SBMusicalTargets_classes.hpp"
#include "SBMusicalTargets_parameters.hpp"

namespace SDK
{

void ISBMusicalTargetsInterface::AddInteractionPointerIndex(int32 PointerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "AddInteractionPointerIndex");

	Params::SBMusicalTargetsInterface_AddInteractionPointerIndex Parms{};

	Parms.PointerIndex = PointerIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void ISBMusicalTargetsInterface::EvaluateHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "EvaluateHit");

	UObject::ProcessEvent(Func, nullptr);
}

struct FSBMusicalTargetsCueId ISBMusicalTargetsInterface::GetHighlightedCueID(class UUserWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "GetHighlightedCueID");

	Params::SBMusicalTargetsInterface_GetHighlightedCueID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

	return Parms.ReturnValue;
}

bool ISBMusicalTargetsInterface::IsValidPointerIndex(int32 PointerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "IsValidPointerIndex");

	Params::SBMusicalTargetsInterface_IsValidPointerIndex Parms{};

	Parms.PointerIndex = PointerIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UUserWidget* ISBMusicalTargetsInterface::PlayCue(const struct FSBMusicalTargetsCueId& CueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "PlayCue");

	Params::SBMusicalTargetsInterface_PlayCue Parms{};

	Parms.CueId = std::move(CueId);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ISBMusicalTargetsInterface::PlayFailure()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "PlayFailure");

	UObject::ProcessEvent(Func, nullptr);
}

void ISBMusicalTargetsInterface::RemoveInteractionPointerIndex(int32 PointerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "RemoveInteractionPointerIndex");

	Params::SBMusicalTargetsInterface_RemoveInteractionPointerIndex Parms{};

	Parms.PointerIndex = PointerIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void ISBMusicalTargetsInterface::ResetTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "ResetTarget");

	UObject::ProcessEvent(Func, nullptr);
}

void ISBMusicalTargetsInterface::UpdateProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "UpdateProgress");

	Params::SBMusicalTargetsInterface_UpdateProgress Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}

bool ISBMusicalTargetsInterface::WasTargetHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsInterface", "WasTargetHit");

	Params::SBMusicalTargetsInterface_WasTargetHit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USBMusicalTargetsTimerComponent::AssignTargetBeat(class UUserWidget* TargetWidget, const struct FSBMusicalTargetsCueId& CueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsTimerComponent", "AssignTargetBeat");

	Params::SBMusicalTargetsTimerComponent_AssignTargetBeat Parms{};

	Parms.TargetWidget = TargetWidget;
	Parms.CueId = std::move(CueId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USBMusicalTargetsTimerComponent::ClearAllTargets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsTimerComponent", "ClearAllTargets");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USBMusicalTargetsTimerComponent::SetDoubleTimeTempoThreshold(int32 Threshold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsTimerComponent", "SetDoubleTimeTempoThreshold");

	Params::SBMusicalTargetsTimerComponent_SetDoubleTimeTempoThreshold Parms{};

	Parms.Threshold = Threshold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USBMusicalTargetsTimerComponent::SetHalfTimeTempoThreshold(int32 Threshold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsTimerComponent", "SetHalfTimeTempoThreshold");

	Params::SBMusicalTargetsTimerComponent_SetHalfTimeTempoThreshold Parms{};

	Parms.Threshold = Threshold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USBMusicalTargetsTimerComponent::SetMusicClockRef(class UOldMusicClockComponent* MusicClockRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsTimerComponent", "SetMusicClockRef");

	Params::SBMusicalTargetsTimerComponent_SetMusicClockRef Parms{};

	Parms.MusicClockRef = MusicClockRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USBMusicalTargetsTimerComponent::SetTimerEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBMusicalTargetsTimerComponent", "SetTimerEnabled");

	Params::SBMusicalTargetsTimerComponent_SetTimerEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
