#pragma once

#include "Basic.hpp"

#include "WBP_IconTwoTextDesc_classes.hpp"
#include "WBP_IconTwoTextDesc_parameters.hpp"

namespace SDK
{

void UWBP_IconTwoTextDesc_C::ExecuteUbergraph_WBP_IconTwoTextDesc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "ExecuteUbergraph_WBP_IconTwoTextDesc");

	Params::WBP_IconTwoTextDesc_C_ExecuteUbergraph_WBP_IconTwoTextDesc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_IconTwoTextDesc_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "PreConstruct");

	Params::WBP_IconTwoTextDesc_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_IconTwoTextDesc_C::UpdateMainText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "UpdateMainText");

	Params::WBP_IconTwoTextDesc_C_UpdateMainText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_IconTwoTextDesc_C::UpdateSecondaryText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "UpdateSecondaryText");

	Params::WBP_IconTwoTextDesc_C_UpdateSecondaryText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_IconTwoTextDesc_C::UpdateTimerText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconTwoTextDesc_C", "UpdateTimerText");

	Params::WBP_IconTwoTextDesc_C_UpdateTimerText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}
