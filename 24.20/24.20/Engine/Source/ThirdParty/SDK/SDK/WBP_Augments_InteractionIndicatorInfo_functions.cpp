#pragma once

#include "Basic.hpp"

#include "WBP_Augments_InteractionIndicatorInfo_classes.hpp"
#include "WBP_Augments_InteractionIndicatorInfo_parameters.hpp"

namespace SDK
{

void UWBP_Augments_InteractionIndicatorInfo_C::ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicatorInfo_C", "ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo");

	Params::WBP_Augments_InteractionIndicatorInfo_C_ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augments_InteractionIndicatorInfo_C::OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicatorInfo_C", "OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9");

	Params::WBP_Augments_InteractionIndicatorInfo_C_OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augments_InteractionIndicatorInfo_C::SetAugmentIcon(TSoftObjectPtr<class UObject> Asset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicatorInfo_C", "SetAugmentIcon");

	Params::WBP_Augments_InteractionIndicatorInfo_C_SetAugmentIcon Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augments_InteractionIndicatorInfo_C::SetAugmentInfo(class UFortPlayerAugmentItemDefinition* InAugmentItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augments_InteractionIndicatorInfo_C", "SetAugmentInfo");

	Params::WBP_Augments_InteractionIndicatorInfo_C_SetAugmentInfo Parms{};

	Parms.InAugmentItemDefinition = InAugmentItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}

}
