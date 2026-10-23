#pragma once

#include "Basic.hpp"

#include "FortSocialEventRSVPWidget_classes.hpp"
#include "FortSocialEventRSVPWidget_parameters.hpp"

namespace SDK
{

void UFortSocialEventRSVPWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSocialEventRSVPWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSocialEventRSVPWidget_C::ExecuteUbergraph_FortSocialEventRSVPWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSocialEventRSVPWidget_C", "ExecuteUbergraph_FortSocialEventRSVPWidget");

	Params::FortSocialEventRSVPWidget_C_ExecuteUbergraph_FortSocialEventRSVPWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSocialEventRSVPWidget_C::OnRefreshDisplay(const class FText& EventName, const class FText& Date, const class FText& AdditionalEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSocialEventRSVPWidget_C", "OnRefreshDisplay");

	Params::FortSocialEventRSVPWidget_C_OnRefreshDisplay Parms{};

	Parms.EventName = std::move(EventName);
	Parms.Date = std::move(Date);
	Parms.AdditionalEvents = std::move(AdditionalEvents);

	UObject::ProcessEvent(Func, &Parms);
}

}
