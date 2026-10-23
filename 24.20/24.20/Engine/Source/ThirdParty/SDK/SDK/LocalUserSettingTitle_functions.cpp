#pragma once

#include "Basic.hpp"

#include "LocalUserSettingTitle_classes.hpp"
#include "LocalUserSettingTitle_parameters.hpp"

namespace SDK
{

void ULocalUserSettingTitle_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserSettingTitle_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULocalUserSettingTitle_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserSettingTitle_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULocalUserSettingTitle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserSettingTitle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void ULocalUserSettingTitle_C::ExecuteUbergraph_LocalUserSettingTitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserSettingTitle_C", "ExecuteUbergraph_LocalUserSettingTitle");

	Params::LocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULocalUserSettingTitle_C::OnExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserSettingTitle_C", "OnExpansionChanged");

	Params::LocalUserSettingTitle_C_OnExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

}
