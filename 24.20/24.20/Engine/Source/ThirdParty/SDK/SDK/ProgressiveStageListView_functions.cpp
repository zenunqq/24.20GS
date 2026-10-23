#pragma once

#include "Basic.hpp"

#include "ProgressiveStageListView_classes.hpp"
#include "ProgressiveStageListView_parameters.hpp"

namespace SDK
{

class UFortProgressiveStageWidget* UProgressiveStageListView_C::AddStageWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageListView_C", "AddStageWidget");

	Params::ProgressiveStageListView_C_AddStageWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UProgressiveStageListView_C::ClearStageWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageListView_C", "ClearStageWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

class UWidget* UProgressiveStageListView_C::On_Stage_Widget_Custom_Boundary(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageListView_C", "On Stage Widget Custom Boundary");

	Params::ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UProgressiveStageListView_C::Update_Subscribed_Visuals(bool Is_Subscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveStageListView_C", "Update Subscribed Visuals");

	Params::ProgressiveStageListView_C_Update_Subscribed_Visuals Parms{};

	Parms.Is_Subscribed = Is_Subscribed;

	UObject::ProcessEvent(Func, &Parms);
}

}
