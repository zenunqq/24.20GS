#pragma once

#include "Basic.hpp"

#include "LocalUserSettingButton_classes.hpp"
#include "LocalUserSettingButton_parameters.hpp"

namespace SDK
{

void ULocalUserSettingButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserSettingButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULocalUserSettingButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserSettingButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULocalUserSettingButton_C::ExecuteUbergraph_LocalUserSettingButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserSettingButton_C", "ExecuteUbergraph_LocalUserSettingButton");

	Params::LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
