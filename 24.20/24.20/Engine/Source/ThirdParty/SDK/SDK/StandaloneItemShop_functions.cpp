#pragma once

#include "Basic.hpp"

#include "StandaloneItemShop_classes.hpp"
#include "StandaloneItemShop_parameters.hpp"

namespace SDK
{

void UStandaloneItemShop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneItemShop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UStandaloneItemShop_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneItemShop_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UStandaloneItemShop_C::ExecuteUbergraph_StandaloneItemShop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneItemShop_C", "ExecuteUbergraph_StandaloneItemShop");

	Params::StandaloneItemShop_C_ExecuteUbergraph_StandaloneItemShop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UStandaloneItemShop_C::InitializeTabs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneItemShop_C", "InitializeTabs");

	UObject::ProcessEvent(Func, nullptr);
}

void UStandaloneItemShop_C::OnCameraLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneItemShop_C", "OnCameraLevelLoaded");

	UObject::ProcessEvent(Func, nullptr);
}

void UStandaloneItemShop_C::OnLoadingIndicatorShown(bool bShown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneItemShop_C", "OnLoadingIndicatorShown");

	Params::StandaloneItemShop_C_OnLoadingIndicatorShown Parms{};

	Parms.bShown = bShown;

	UObject::ProcessEvent(Func, &Parms);
}

void UStandaloneItemShop_C::OnTabSelected(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StandaloneItemShop_C", "OnTabSelected");

	Params::StandaloneItemShop_C_OnTabSelected Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}
