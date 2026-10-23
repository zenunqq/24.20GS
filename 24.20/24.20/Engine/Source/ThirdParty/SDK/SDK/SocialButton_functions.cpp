#pragma once

#include "Basic.hpp"

#include "SocialButton_classes.hpp"
#include "SocialButton_parameters.hpp"

namespace SDK
{

void USocialButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialButton_C::ExecuteUbergraph_SocialButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialButton_C", "ExecuteUbergraph_SocialButton");

	Params::SocialButton_C_ExecuteUbergraph_SocialButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
