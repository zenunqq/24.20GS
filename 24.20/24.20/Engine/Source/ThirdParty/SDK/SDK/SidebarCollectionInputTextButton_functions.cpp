#pragma once

#include "Basic.hpp"

#include "SidebarCollectionInputTextButton_classes.hpp"
#include "SidebarCollectionInputTextButton_parameters.hpp"

namespace SDK
{

void USidebarCollectionInputTextButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarCollectionInputTextButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarCollectionInputTextButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarCollectionInputTextButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarCollectionInputTextButton_C::ExecuteUbergraph_SidebarCollectionInputTextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarCollectionInputTextButton_C", "ExecuteUbergraph_SidebarCollectionInputTextButton");

	Params::SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarCollectionInputTextButton_C::HandleInputMethodChanged(ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarCollectionInputTextButton_C", "HandleInputMethodChanged");

	Params::SidebarCollectionInputTextButton_C_HandleInputMethodChanged Parms{};

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);
}

}
