#pragma once

#include "Basic.hpp"

#include "PageNavigator_classes.hpp"
#include "PageNavigator_parameters.hpp"

namespace SDK
{

void UPageNavigator_C::ExecuteUbergraph_PageNavigator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigator_C", "ExecuteUbergraph_PageNavigator");

	Params::PageNavigator_C_ExecuteUbergraph_PageNavigator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPageNavigator_C::OnPipButtonCreated(class UFortTextButton* NewPipButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigator_C", "OnPipButtonCreated");

	Params::PageNavigator_C_OnPipButtonCreated Parms{};

	Parms.NewPipButton = NewPipButton;

	UObject::ProcessEvent(Func, &Parms);
}

void UPageNavigator_C::Play_intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigator_C", "Play intro");

	UObject::ProcessEvent(Func, nullptr);
}

void UPageNavigator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PageNavigator_C", "PreConstruct");

	Params::PageNavigator_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
