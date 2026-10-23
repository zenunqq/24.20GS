#pragma once

#include "Basic.hpp"

#include "FeatTimelineListEntry_classes.hpp"
#include "FeatTimelineListEntry_parameters.hpp"

namespace SDK
{

void UFeatTimelineListEntry_C::BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UFeatTimelineListEntry_C::BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::FeatTimelineListEntry_C_BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UFeatTimelineListEntry_C::ExecuteUbergraph_FeatTimelineListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "ExecuteUbergraph_FeatTimelineListEntry");

	Params::FeatTimelineListEntry_C_ExecuteUbergraph_FeatTimelineListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFeatTimelineListEntry_C::HoverFeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "HoverFeat");

	UObject::ProcessEvent(Func, nullptr);
}

void UFeatTimelineListEntry_C::OnFeatCompletedThisSession()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "OnFeatCompletedThisSession");

	UObject::ProcessEvent(Func, nullptr);
}

void UFeatTimelineListEntry_C::OnFeatInfoSet(int32 NumFeatsOnDay, int32 IdxOnDay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "OnFeatInfoSet");

	Params::FeatTimelineListEntry_C_OnFeatInfoSet Parms{};

	Parms.NumFeatsOnDay = NumFeatsOnDay;
	Parms.IdxOnDay = IdxOnDay;

	UObject::ProcessEvent(Func, &Parms);
}

void UFeatTimelineListEntry_C::OnTimespanInfoSet(int32 NumDays)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "OnTimespanInfoSet");

	Params::FeatTimelineListEntry_C_OnTimespanInfoSet Parms{};

	Parms.NumDays = NumDays;

	UObject::ProcessEvent(Func, &Parms);
}

void UFeatTimelineListEntry_C::OnWaitingForCompletedTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "OnWaitingForCompletedTimer");

	UObject::ProcessEvent(Func, nullptr);
}

void UFeatTimelineListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "PreConstruct");

	Params::FeatTimelineListEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UFeatTimelineListEntry_C::SetSeasonStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "SetSeasonStyle");

	UObject::ProcessEvent(Func, nullptr);
}

void UFeatTimelineListEntry_C::UnHoverFeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "UnHoverFeat");

	UObject::ProcessEvent(Func, nullptr);
}

void UFeatTimelineListEntry_C::WidgetAnimationEvt_OnShowCompleted_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FeatTimelineListEntry_C", "WidgetAnimationEvt_OnShowCompleted_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

}
