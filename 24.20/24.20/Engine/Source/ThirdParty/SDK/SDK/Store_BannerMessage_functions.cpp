#pragma once

#include "Basic.hpp"

#include "Store_BannerMessage_classes.hpp"
#include "Store_BannerMessage_parameters.hpp"

namespace SDK
{

void UStore_BannerMessage_C::Pulse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Store_BannerMessage_C", "Pulse");

	UObject::ProcessEvent(Func, nullptr);
}

}
