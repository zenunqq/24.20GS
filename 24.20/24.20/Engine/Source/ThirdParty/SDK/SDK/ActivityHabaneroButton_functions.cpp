#pragma once

#include "Basic.hpp"

#include "ActivityHabaneroButton_classes.hpp"
#include "ActivityHabaneroButton_parameters.hpp"

namespace SDK
{

void UActivityHabaneroButton_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityHabaneroButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityHabaneroButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityHabaneroButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityHabaneroButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityHabaneroButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityHabaneroButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityHabaneroButton_C::ExecuteUbergraph_ActivityHabaneroButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "ExecuteUbergraph_ActivityHabaneroButton");

	Params::ActivityHabaneroButton_C_ExecuteUbergraph_ActivityHabaneroButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityHabaneroButton_C::Finished_687506B34C6FE54EA42CF5ABF6AA4E46()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "Finished_687506B34C6FE54EA42CF5ABF6AA4E46");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityHabaneroButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityHabaneroButton_C", "PreConstruct");

	Params::ActivityHabaneroButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
