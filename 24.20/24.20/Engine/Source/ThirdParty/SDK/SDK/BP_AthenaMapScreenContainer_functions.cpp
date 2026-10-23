#pragma once

#include "Basic.hpp"

#include "BP_AthenaMapScreenContainer_classes.hpp"
#include "BP_AthenaMapScreenContainer_parameters.hpp"

namespace SDK
{

void UBP_AthenaMapScreenContainer_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainer_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaMapScreenContainer_C::BP_OnShowTabsSet(bool bShowTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainer_C", "BP_OnShowTabsSet");

	Params::BP_AthenaMapScreenContainer_C_BP_OnShowTabsSet Parms{};

	Parms.bShowTabs = bShowTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaMapScreenContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaMapScreenContainer_C::ExecuteUbergraph_BP_AthenaMapScreenContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainer_C", "ExecuteUbergraph_BP_AthenaMapScreenContainer");

	Params::BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaMapScreenContainer_C::OnDamageReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainer_C", "OnDamageReceived");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaMapScreenContainer_C::OnShowOrHideCreativeScoreboard(bool bShowCreativeScoreboard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainer_C", "OnShowOrHideCreativeScoreboard");

	Params::BP_AthenaMapScreenContainer_C_OnShowOrHideCreativeScoreboard Parms{};

	Parms.bShowCreativeScoreboard = bShowCreativeScoreboard;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaMapScreenContainer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainer_C", "PreConstruct");

	Params::BP_AthenaMapScreenContainer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaMapScreenContainer_C::ShowOrHideScoreboardUI(class UObject* ScoreboardWidget, bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainer_C", "ShowOrHideScoreboardUI");

	Params::BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI Parms{};

	Parms.ScoreboardWidget = ScoreboardWidget;
	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}

}
