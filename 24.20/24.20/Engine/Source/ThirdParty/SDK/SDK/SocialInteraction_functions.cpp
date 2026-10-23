#pragma once

#include "Basic.hpp"

#include "SocialInteraction_classes.hpp"
#include "SocialInteraction_parameters.hpp"

namespace SDK
{

void USocialInteraction_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteraction_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialInteraction_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteraction_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialInteraction_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteraction_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialInteraction_C::ExecuteUbergraph_SocialInteraction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteraction_C", "ExecuteUbergraph_SocialInteraction");

	Params::SocialInteraction_C_ExecuteUbergraph_SocialInteraction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialInteraction_C::OnInteractionSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteraction_C", "OnInteractionSet");

	UObject::ProcessEvent(Func, nullptr);
}

}
