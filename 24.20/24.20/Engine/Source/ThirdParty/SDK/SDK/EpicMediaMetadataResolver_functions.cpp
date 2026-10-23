#pragma once

#include "Basic.hpp"

#include "EpicMediaMetadataResolver_classes.hpp"
#include "EpicMediaMetadataResolver_parameters.hpp"

namespace SDK
{

bool UEpicMediaMetadataResolver::GetBlurl(const class FString& InVUID, const bool bInBlurlLive, const struct FEpicMediaOptions& InMediaOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicMediaMetadataResolver", "GetBlurl");

	Params::EpicMediaMetadataResolver_GetBlurl Parms{};

	Parms.InVUID = std::move(InVUID);
	Parms.bInBlurlLive = bInBlurlLive;
	Parms.InMediaOptions = std::move(InMediaOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
