#pragma once

#include "Basic.hpp"

#include "VerseFortniteInternal_classes.hpp"
#include "VerseFortniteInternal_parameters.hpp"

namespace SDK
{

void UFortGameplayAbility_PlayAnim::OnBlendOut(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnBlendOut");

	Params::FortGameplayAbility_PlayAnim_OnBlendOut Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_PlayAnim::OnCancelled(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnCancelled");

	Params::FortGameplayAbility_PlayAnim_OnCancelled Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_PlayAnim::OnCompleted(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnCompleted");

	Params::FortGameplayAbility_PlayAnim_OnCompleted Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_PlayAnim::OnInterrupted(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnInterrupted");

	Params::FortGameplayAbility_PlayAnim_OnInterrupted Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_PlayAnim::OnNotifyBegin(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnNotifyBegin");

	Params::FortGameplayAbility_PlayAnim_OnNotifyBegin Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_PlayAnim::OnNotifyEnd(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnNotifyEnd");

	Params::FortGameplayAbility_PlayAnim_OnNotifyEnd Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortControllerStateHandlerComponent::NotifyOfStateChange(class FString* State, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortControllerStateHandlerComponent", "NotifyOfStateChange");

	Params::FortControllerStateHandlerComponent_NotifyOfStateChange Parms{};

	Parms.Active = Active;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = std::move(Parms.State);
}

void UFortBuildingSettingsComponentBase::OnRep_Settings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuildingSettingsComponentBase", "OnRep_Settings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayspaceComponentHelper::HandlePlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayspaceComponentHelper", "HandlePlayerDied");

	Params::FortPlayspaceComponentHelper_HandlePlayerDied Parms{};

	Parms.FortPlayerPawnAthena = FortPlayerPawnAthena;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayspaceComponentHelper::HandlePlayerPawnPossessed(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayspaceComponentHelper", "HandlePlayerPawnPossessed");

	Params::FortPlayspaceComponentHelper_HandlePlayerPawnPossessed Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
