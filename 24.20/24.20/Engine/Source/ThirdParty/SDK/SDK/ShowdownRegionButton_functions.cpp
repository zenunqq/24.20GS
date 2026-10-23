#pragma once

#include "Basic.hpp"

#include "ShowdownRegionButton_classes.hpp"
#include "ShowdownRegionButton_parameters.hpp"

namespace SDK
{

void UShowdownRegionButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownRegionButton_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionButton_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownRegionButton_C::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionButton_C", "BP_OnReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownRegionButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownRegionButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownRegionButton_C::ExecuteUbergraph_ShowdownRegionButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionButton_C", "ExecuteUbergraph_ShowdownRegionButton");

	Params::ShowdownRegionButton_C_ExecuteUbergraph_ShowdownRegionButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownRegionButton_C::TransitionState(class UWidgetAnimation* TransitionAnimation, double TransitionTime, bool PlayForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownRegionButton_C", "TransitionState");

	Params::ShowdownRegionButton_C_TransitionState Parms{};

	Parms.TransitionAnimation = TransitionAnimation;
	Parms.TransitionTime = TransitionTime;
	Parms.PlayForward = PlayForward;

	UObject::ProcessEvent(Func, &Parms);
}

}
