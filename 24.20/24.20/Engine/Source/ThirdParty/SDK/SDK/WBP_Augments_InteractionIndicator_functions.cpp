#pragma once

#include "Basic.hpp"

#include "WBP_Augments_InteractionIndicator_classes.hpp"
#include "WBP_Augments_InteractionIndicator_parameters.hpp"

namespace SDK
{

void UWBP_Augments_InteractionIndicator_C::ExecuteUbergraph_WBP_Augments_InteractionIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "ExecuteUbergraph_WBP_Augments_InteractionIndicator");

	Params::WBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augments_InteractionIndicator_C::GetInteractText(class FText* InteractText_0, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "GetInteractText");

	Params::WBP_Augments_InteractionIndicator_C_GetInteractText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText_0 != nullptr)
		*InteractText_0 = std::move(Parms.InteractText_0);

	if (Result != nullptr)
		*Result = Parms.Result;
}

bool UWBP_Augments_InteractionIndicator_C::GetShowErrorsUsingDefaultWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "GetShowErrorsUsingDefaultWidget");

	Params::WBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UWBP_Augments_InteractionIndicator_C::OnContextInfoUpdated(const class UFortInteractContextInfo* ContextInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "OnContextInfoUpdated");

	Params::WBP_Augments_InteractionIndicator_C_OnContextInfoUpdated Parms{};

	Parms.ContextInfo = ContextInfo;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augments_InteractionIndicator_C::OnLoaded_2E66591C48A272F0C04BFB94B42C632F(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "OnLoaded_2E66591C48A272F0C04BFB94B42C632F");

	Params::WBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augments_InteractionIndicator_C::SetAugmentIcon(TSoftObjectPtr<class UObject> Asset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "SetAugmentIcon");

	Params::WBP_Augments_InteractionIndicator_C_SetAugmentIcon Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);
}

}
