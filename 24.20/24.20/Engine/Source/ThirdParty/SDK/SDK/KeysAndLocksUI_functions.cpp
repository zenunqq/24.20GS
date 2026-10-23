#pragma once

#include "Basic.hpp"

#include "KeysAndLocksUI_classes.hpp"
#include "KeysAndLocksUI_parameters.hpp"

namespace SDK
{

void UKeyPlayerInfoWidget::HandleGameplayTagEvent(const struct FGameplayTag& UpdatedTag, int32 TagCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyPlayerInfoWidget", "HandleGameplayTagEvent");

	Params::KeyPlayerInfoWidget_HandleGameplayTagEvent Parms{};

	Parms.UpdatedTag = std::move(UpdatedTag);
	Parms.TagCount = TagCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UKeyPlayerInfoWidget::OnKeyStatusActivated(class AFortPlayerStateAthena* InPlayerState, bool bActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyPlayerInfoWidget", "OnKeyStatusActivated");

	Params::KeyPlayerInfoWidget_OnKeyStatusActivated Parms{};

	Parms.InPlayerState = InPlayerState;
	Parms.bActivated = bActivated;

	UObject::ProcessEvent(Func, &Parms);
}

}
