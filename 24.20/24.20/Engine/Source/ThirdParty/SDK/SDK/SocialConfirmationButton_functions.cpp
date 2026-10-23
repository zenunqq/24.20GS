#pragma once

#include "Basic.hpp"

#include "SocialConfirmationButton_classes.hpp"
#include "SocialConfirmationButton_parameters.hpp"

namespace SDK
{

void USocialConfirmationButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialConfirmationButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialConfirmationButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialConfirmationButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialConfirmationButton_C::ExecuteUbergraph_SocialConfirmationButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialConfirmationButton_C", "ExecuteUbergraph_SocialConfirmationButton");

	Params::SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialConfirmationButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialConfirmationButton_C", "PreConstruct");

	Params::SocialConfirmationButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
