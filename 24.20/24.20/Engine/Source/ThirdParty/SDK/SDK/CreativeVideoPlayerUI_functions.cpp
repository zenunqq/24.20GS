#pragma once

#include "Basic.hpp"

#include "CreativeVideoPlayerUI_classes.hpp"
#include "CreativeVideoPlayerUI_parameters.hpp"

namespace SDK
{

void UCreativeVideoPlayerFullScreenWidget::OnSkipButtonActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullScreenWidget", "OnSkipButtonActionComplete");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeVideoPlayerFullScreenWidget::OnSkipButtonActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeVideoPlayerFullScreenWidget", "OnSkipButtonActionProgress");

	Params::CreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
