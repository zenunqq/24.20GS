#pragma once

#include "Basic.hpp"

#include "SocialPanelTab_classes.hpp"
#include "SocialPanelTab_parameters.hpp"

namespace SDK
{

void USocialPanelTab_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanelTab_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanelTab_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanelTab_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanelTab_C::ExecuteUbergraph_SocialPanelTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "ExecuteUbergraph_SocialPanelTab");

	Params::SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
