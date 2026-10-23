#pragma once

#include "Basic.hpp"

#include "SidebarPanelVoiceChat_classes.hpp"
#include "SidebarPanelVoiceChat_parameters.hpp"

namespace SDK
{

void USidebarPanelVoiceChat_C::ExecuteUbergraph_SidebarPanelVoiceChat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelVoiceChat_C", "ExecuteUbergraph_SidebarPanelVoiceChat");

	Params::SidebarPanelVoiceChat_C_ExecuteUbergraph_SidebarPanelVoiceChat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarPanelVoiceChat_C::OnComplete_91016BC9485591D6BC97D8B812128DF4(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelVoiceChat_C", "OnComplete_91016BC9485591D6BC97D8B812128DF4");

	Params::SidebarPanelVoiceChat_C_OnComplete_91016BC9485591D6BC97D8B812128DF4 Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarPanelVoiceChat_C::OpenParentalControls()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarPanelVoiceChat_C", "OpenParentalControls");

	UObject::ProcessEvent(Func, nullptr);
}

}
