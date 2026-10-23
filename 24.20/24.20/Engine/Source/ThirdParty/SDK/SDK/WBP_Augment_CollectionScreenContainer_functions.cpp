#pragma once

#include "Basic.hpp"

#include "WBP_Augment_CollectionScreenContainer_classes.hpp"
#include "WBP_Augment_CollectionScreenContainer_parameters.hpp"

namespace SDK
{

void UWBP_Augment_CollectionScreenContainer_C::BP_OnShowTabsSet(bool bShowTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreenContainer_C", "BP_OnShowTabsSet");

	Params::WBP_Augment_CollectionScreenContainer_C_BP_OnShowTabsSet Parms{};

	Parms.bShowTabs = bShowTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_CollectionScreenContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreenContainer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionScreenContainer_C::ExecuteUbergraph_WBP_Augment_CollectionScreenContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreenContainer_C", "ExecuteUbergraph_WBP_Augment_CollectionScreenContainer");

	Params::WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_CollectionScreenContainer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreenContainer_C", "PreConstruct");

	Params::WBP_Augment_CollectionScreenContainer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
