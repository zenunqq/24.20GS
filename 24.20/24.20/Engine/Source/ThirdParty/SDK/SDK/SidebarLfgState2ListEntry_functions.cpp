#pragma once

#include "Basic.hpp"

#include "SidebarLfgState2ListEntry_classes.hpp"
#include "SidebarLfgState2ListEntry_parameters.hpp"

namespace SDK
{

void USidebarLfgState2ListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState2ListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::SidebarLfgState2ListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgState2ListEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState2ListEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgState2ListEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState2ListEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgState2ListEntry_C::ExecuteUbergraph_SidebarLfgState2ListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState2ListEntry_C", "ExecuteUbergraph_SidebarLfgState2ListEntry");

	Params::SidebarLfgState2ListEntry_C_ExecuteUbergraph_SidebarLfgState2ListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgState2ListEntry_C::GetIcon(ELfgState LfgState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState2ListEntry_C", "GetIcon");

	Params::SidebarLfgState2ListEntry_C_GetIcon Parms{};

	Parms.LfgState = LfgState;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgState2ListEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState2ListEntry_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgState2ListEntry_C::OnStateChanged(const ELfgState NewLfgState, const ESlateVisibility BodyVisibility, const class FText& StateText, const class FText& StateButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState2ListEntry_C", "OnStateChanged");

	Params::SidebarLfgState2ListEntry_C_OnStateChanged Parms{};

	Parms.NewLfgState = NewLfgState;
	Parms.BodyVisibility = BodyVisibility;
	Parms.StateText = std::move(StateText);
	Parms.StateButton = std::move(StateButton);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgState2ListEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState2ListEntry_C", "PreConstruct");

	Params::SidebarLfgState2ListEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgState2ListEntry_C::UpdateButtonVisibility(ELfgState LfgState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState2ListEntry_C", "UpdateButtonVisibility");

	Params::SidebarLfgState2ListEntry_C_UpdateButtonVisibility Parms{};

	Parms.LfgState = LfgState;

	UObject::ProcessEvent(Func, &Parms);
}

}
