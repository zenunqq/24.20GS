#pragma once

#include "Basic.hpp"

#include "HorizontalTabList_Legacy_classes.hpp"
#include "HorizontalTabList_Legacy_parameters.hpp"

namespace SDK
{

void UHorizontalTabList_Legacy_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UHorizontalTabList_Legacy_C::CustomEvent_0(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "CustomEvent_0");

	Params::HorizontalTabList_Legacy_C_CustomEvent_0 Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}

void UHorizontalTabList_Legacy_C::CustomEvent_1(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "CustomEvent_1");

	Params::HorizontalTabList_Legacy_C_CustomEvent_1 Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UHorizontalTabList_Legacy_C::DebugCreateTabsForDesigner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "DebugCreateTabsForDesigner");

	UObject::ProcessEvent(Func, nullptr);
}

void UHorizontalTabList_Legacy_C::ExecuteUbergraph_HorizontalTabList_Legacy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "ExecuteUbergraph_HorizontalTabList_Legacy");

	Params::HorizontalTabList_Legacy_C_ExecuteUbergraph_HorizontalTabList_Legacy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UHorizontalTabList_Legacy_C::HandleOnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "HandleOnInputMethodChanged");

	Params::HorizontalTabList_Legacy_C_HandleOnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UHorizontalTabList_Legacy_C::HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "HandleTabCreation");

	Params::HorizontalTabList_Legacy_C_HandleTabCreation Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}

void UHorizontalTabList_Legacy_C::HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "HandleTabRemoval");

	Params::HorizontalTabList_Legacy_C_HandleTabRemoval Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}

void UHorizontalTabList_Legacy_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "PreConstruct");

	Params::HorizontalTabList_Legacy_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UHorizontalTabList_Legacy_C::Previous_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "Previous Visibility");

	UObject::ProcessEvent(Func, nullptr);
}

void UHorizontalTabList_Legacy_C::SetVerticalAlignment(EVerticalAlignment FillVertically)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "SetVerticalAlignment");

	Params::HorizontalTabList_Legacy_C_SetVerticalAlignment Parms{};

	Parms.FillVertically = FillVertically;

	UObject::ProcessEvent(Func, &Parms);
}

void UHorizontalTabList_Legacy_C::UpdateGamepadKeyVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "UpdateGamepadKeyVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

void UHorizontalTabList_Legacy_C::UpdateTabStyles(class UCommonButtonBase* ButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_Legacy_C", "UpdateTabStyles");

	Params::HorizontalTabList_Legacy_C_UpdateTabStyles Parms{};

	Parms.ButtonWidget = ButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}
