#pragma once

#include "Basic.hpp"

#include "SidebarPanelKoala_classes.hpp"
#include "SidebarPanelKoala_parameters.hpp"

namespace SDK
{

void USidebarPanelKoala_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelKoala_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarPanelKoala_C::ExecuteUbergraph_SidebarPanelKoala(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelKoala_C", "ExecuteUbergraph_SidebarPanelKoala");

	Params::SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarPanelKoala_C::OnConnectionChanged(bool bConnected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelKoala_C", "OnConnectionChanged");

	Params::SidebarPanelKoala_C_OnConnectionChanged Parms{};

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarPanelKoala_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelKoala_C", "OnInputMethodChanged");

	Params::SidebarPanelKoala_C_OnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarPanelKoala_C::UpdateUsageDescription(ECommonInputType Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelKoala_C", "UpdateUsageDescription");

	Params::SidebarPanelKoala_C_UpdateUsageDescription Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
