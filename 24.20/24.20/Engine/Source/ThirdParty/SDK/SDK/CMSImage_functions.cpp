#pragma once

#include "Basic.hpp"

#include "CMSImage_classes.hpp"
#include "CMSImage_parameters.hpp"

namespace SDK
{

void UCMSImage_C::SetMediaURL(const class FString& MediaUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMSImage_C", "SetMediaURL");

	Params::CMSImage_C_SetMediaURL Parms{};

	Parms.MediaUrl = std::move(MediaUrl);

	UObject::ProcessEvent(Func, &Parms);
}

}
