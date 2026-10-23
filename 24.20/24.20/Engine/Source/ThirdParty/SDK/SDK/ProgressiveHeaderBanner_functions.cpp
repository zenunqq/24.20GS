#pragma once

#include "Basic.hpp"

#include "ProgressiveHeaderBanner_classes.hpp"
#include "ProgressiveHeaderBanner_parameters.hpp"

namespace SDK
{

void UProgressiveHeaderBanner_C::Update_Text(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveHeaderBanner_C", "Update Text");

	Params::ProgressiveHeaderBanner_C_Update_Text Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveHeaderBanner_C::Update_Banner_State(const class FText& Text, bool Current_Sets_Complete, bool Subscribed_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveHeaderBanner_C", "Update Banner State");

	Params::ProgressiveHeaderBanner_C_Update_Banner_State Parms{};

	Parms.Text = std::move(Text);
	Parms.Current_Sets_Complete = Current_Sets_Complete;
	Parms.Subscribed_0 = Subscribed_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveHeaderBanner_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveHeaderBanner_C", "PreConstruct");

	Params::ProgressiveHeaderBanner_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveHeaderBanner_C::ExecuteUbergraph_ProgressiveHeaderBanner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveHeaderBanner_C", "ExecuteUbergraph_ProgressiveHeaderBanner");

	Params::ProgressiveHeaderBanner_C_ExecuteUbergraph_ProgressiveHeaderBanner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
