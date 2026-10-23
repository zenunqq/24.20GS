#pragma once

#include "Basic.hpp"

#include "EditNicknameButton_classes.hpp"
#include "EditNicknameButton_parameters.hpp"

namespace SDK
{

void UEditNicknameButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditNicknameButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEditNicknameButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditNicknameButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEditNicknameButton_C::ExecuteUbergraph_EditNicknameButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditNicknameButton_C", "ExecuteUbergraph_EditNicknameButton");

	Params::EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
