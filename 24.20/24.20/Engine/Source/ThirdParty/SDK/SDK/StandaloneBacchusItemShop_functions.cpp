#pragma once

#include "Basic.hpp"

#include "StandaloneBacchusItemShop_classes.hpp"
#include "StandaloneBacchusItemShop_parameters.hpp"

namespace SDK
{

void UStandaloneBacchusItemShop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneBacchusItemShop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UStandaloneBacchusItemShop_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneBacchusItemShop_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UStandaloneBacchusItemShop_C::ExecuteUbergraph_StandaloneBacchusItemShop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneBacchusItemShop_C", "ExecuteUbergraph_StandaloneBacchusItemShop");

	Params::StandaloneBacchusItemShop_C_ExecuteUbergraph_StandaloneBacchusItemShop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UStandaloneBacchusItemShop_C::InitializeTabs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneBacchusItemShop_C", "InitializeTabs");

	UObject::ProcessEvent(Func, nullptr);
}

void UStandaloneBacchusItemShop_C::OnCameraLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneBacchusItemShop_C", "OnCameraLevelLoaded");

	UObject::ProcessEvent(Func, nullptr);
}

void UStandaloneBacchusItemShop_C::OnLoadingIndicatorShown(bool bShown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneBacchusItemShop_C", "OnLoadingIndicatorShown");

	Params::StandaloneBacchusItemShop_C_OnLoadingIndicatorShown Parms{};

	Parms.bShown = bShown;

	UObject::ProcessEvent(Func, &Parms);
}

void UStandaloneBacchusItemShop_C::OnTabSelected(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneBacchusItemShop_C", "OnTabSelected");

	Params::StandaloneBacchusItemShop_C_OnTabSelected Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}
