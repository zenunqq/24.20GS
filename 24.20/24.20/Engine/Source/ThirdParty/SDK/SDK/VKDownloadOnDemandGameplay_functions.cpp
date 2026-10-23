#pragma once

#include "Basic.hpp"

#include "VKDownloadOnDemandGameplay_classes.hpp"
#include "VKDownloadOnDemandGameplay_parameters.hpp"

namespace SDK
{

void UDownloadOnDemandComponent::HandleMnemonicsFromValkyriePaletteProviderReceived(const TArray<class FString>& Mnemonics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DownloadOnDemandComponent", "HandleMnemonicsFromValkyriePaletteProviderReceived");

	Params::DownloadOnDemandComponent_HandleMnemonicsFromValkyriePaletteProviderReceived Parms{};

	Parms.Mnemonics = std::move(Mnemonics);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
