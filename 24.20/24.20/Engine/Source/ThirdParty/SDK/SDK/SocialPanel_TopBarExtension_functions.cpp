#pragma once

#include "Basic.hpp"

#include "SocialPanel_TopBarExtension_classes.hpp"
#include "SocialPanel_TopBarExtension_parameters.hpp"

namespace SDK
{

void USocialPanel_TopBarExtension_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_TopBarExtension_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanel_TopBarExtension_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_TopBarExtension_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanel_TopBarExtension_C::ExecuteUbergraph_SocialPanel_TopBarExtension(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_TopBarExtension_C", "ExecuteUbergraph_SocialPanel_TopBarExtension");

	Params::SocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
