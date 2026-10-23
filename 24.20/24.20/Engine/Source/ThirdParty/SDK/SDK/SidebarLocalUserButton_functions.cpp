#pragma once

#include "Basic.hpp"

#include "SidebarLocalUserButton_classes.hpp"
#include "SidebarLocalUserButton_parameters.hpp"

namespace SDK
{

void USidebarLocalUserButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLocalUserButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLocalUserButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLocalUserButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLocalUserButton_C::ExecuteUbergraph_SidebarLocalUserButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "ExecuteUbergraph_SidebarLocalUserButton");

	Params::SidebarLocalUserButton_C_ExecuteUbergraph_SidebarLocalUserButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLocalUserButton_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarLocalUserButton_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLocalUserButton_C::OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "OnOnlineStatusChanged");

	Params::SidebarLocalUserButton_C_OnOnlineStatusChanged Parms{};

	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLocalUserButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "PreConstruct");

	Params::SidebarLocalUserButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLocalUserButton_C::SetPresenceIndicatorOutlineColor(const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "SetPresenceIndicatorOutlineColor");

	Params::SidebarLocalUserButton_C_SetPresenceIndicatorOutlineColor Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLocalUserButton_C::SetSkewBoxColor(const struct FLinearColor& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLocalUserButton_C", "SetSkewBoxColor");

	Params::SidebarLocalUserButton_C_SetSkewBoxColor Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}

}
