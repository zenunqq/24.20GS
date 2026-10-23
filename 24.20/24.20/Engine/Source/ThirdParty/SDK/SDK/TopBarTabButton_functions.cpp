#pragma once

#include "Basic.hpp"

#include "TopBarTabButton_classes.hpp"
#include "TopBarTabButton_parameters.hpp"

namespace SDK
{

void UTopBarTabButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBarTabButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBarTabButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBarTabButton_C::ExecuteUbergraph_TopBarTabButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "ExecuteUbergraph_TopBarTabButton");

	Params::TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBarTabButton_C::HandleSelectionChangedVisuals(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "HandleSelectionChangedVisuals");

	Params::TopBarTabButton_C_HandleSelectionChangedVisuals Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBarTabButton_C::InitializeButtonBorderMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "InitializeButtonBorderMID");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBarTabButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBarTabButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBarTabButton_C::OnSelectedChangedEvent(class UCommonButtonLegacy* Button, bool Selected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "OnSelectedChangedEvent");

	Params::TopBarTabButton_C_OnSelectedChangedEvent Parms{};

	Parms.Button = Button;
	Parms.Selected_0 = Selected_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBarTabButton_C::OverrideIcon(bool Show, const struct FSlateBrush& inSlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "OverrideIcon");

	Params::TopBarTabButton_C_OverrideIcon Parms{};

	Parms.Show = Show;
	Parms.inSlateBrush = std::move(inSlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBarTabButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "PreConstruct");

	Params::TopBarTabButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBarTabButton_C::SeedRandomValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "SeedRandomValues");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBarTabButton_C::SetText(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "SetText");

	Params::TopBarTabButton_C_SetText Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBarTabButton_C::UpdateMIDWithRandomValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBarTabButton_C", "UpdateMIDWithRandomValues");

	UObject::ProcessEvent(Func, nullptr);
}

}
