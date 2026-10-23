#pragma once

#include "Basic.hpp"

#include "MiniPartyBar_classes.hpp"
#include "MiniPartyBar_parameters.hpp"

namespace SDK
{

void UMiniPartyBar_C::BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyBar_C", "BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	Params::MiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UMiniPartyBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UMiniPartyBar_C::ExecuteUbergraph_MiniPartyBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyBar_C", "ExecuteUbergraph_MiniPartyBar");

	Params::MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UMiniPartyBar_C::Get_Banners_Tooltip_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyBar_C", "Get Banners Tooltip Widget");

	Params::MiniPartyBar_C_Get_Banners_Tooltip_Widget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UMiniPartyBar_C::HandlePartybarUIFeatureChanged(EFortUIFeature Feature, EFortUIFeatureState FeatureState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyBar_C", "HandlePartybarUIFeatureChanged");

	Params::MiniPartyBar_C_HandlePartybarUIFeatureChanged Parms{};

	Parms.Feature = Feature;
	Parms.FeatureState = FeatureState;

	UObject::ProcessEvent(Func, &Parms);
}

}
