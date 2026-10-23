#pragma once

#include "Basic.hpp"

#include "BPS24_HorizontalProgress_classes.hpp"
#include "BPS24_HorizontalProgress_parameters.hpp"

namespace SDK
{

void UBPS24_HorizontalProgress_C::ExecuteUbergraph_BPS24_HorizontalProgress(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HorizontalProgress_C", "ExecuteUbergraph_BPS24_HorizontalProgress");

	Params::BPS24_HorizontalProgress_C_ExecuteUbergraph_BPS24_HorizontalProgress Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HorizontalProgress_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HorizontalProgress_C", "PreConstruct");

	Params::BPS24_HorizontalProgress_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HorizontalProgress_C::UpdateBarProgress(int32 Owned, int32 Needed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HorizontalProgress_C", "UpdateBarProgress");

	Params::BPS24_HorizontalProgress_C_UpdateBarProgress Parms{};

	Parms.Owned = Owned;
	Parms.Needed = Needed;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HorizontalProgress_C::UpdateProgress(int32 Current, int32 Needed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HorizontalProgress_C", "UpdateProgress");

	Params::BPS24_HorizontalProgress_C_UpdateProgress Parms{};

	Parms.Current = Current;
	Parms.Needed = Needed;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_HorizontalProgress_C::UpdateText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_HorizontalProgress_C", "UpdateText");

	Params::BPS24_HorizontalProgress_C_UpdateText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}
