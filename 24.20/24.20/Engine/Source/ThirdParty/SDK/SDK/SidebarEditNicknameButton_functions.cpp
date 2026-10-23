#pragma once

#include "Basic.hpp"

#include "SidebarEditNicknameButton_classes.hpp"
#include "SidebarEditNicknameButton_parameters.hpp"

namespace SDK
{

void USidebarEditNicknameButton_C::ExecuteUbergraph_SidebarEditNicknameButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarEditNicknameButton_C", "ExecuteUbergraph_SidebarEditNicknameButton");

	Params::SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarEditNicknameButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarEditNicknameButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarEditNicknameButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarEditNicknameButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

}
