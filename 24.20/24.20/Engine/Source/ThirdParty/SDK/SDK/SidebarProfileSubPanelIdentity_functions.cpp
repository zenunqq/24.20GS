#pragma once

#include "Basic.hpp"

#include "SidebarProfileSubPanelIdentity_classes.hpp"
#include "SidebarProfileSubPanelIdentity_parameters.hpp"

namespace SDK
{

void USidebarProfileSubPanelIdentity_C::ExecuteUbergraph_SidebarProfileSubPanelIdentity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelIdentity_C", "ExecuteUbergraph_SidebarProfileSubPanelIdentity");

	Params::SidebarProfileSubPanelIdentity_C_ExecuteUbergraph_SidebarProfileSubPanelIdentity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarProfileSubPanelIdentity_C::OnFinishedProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelIdentity_C", "OnFinishedProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfileSubPanelIdentity_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelIdentity_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarProfileSubPanelIdentity_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarProfileSubPanelIdentity_C::OnStartProfileLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelIdentity_C", "OnStartProfileLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarProfileSubPanelIdentity_C::SetBattlePassVisiblity(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelIdentity_C", "SetBattlePassVisiblity");

	Params::SidebarProfileSubPanelIdentity_C_SetBattlePassVisiblity Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarProfileSubPanelIdentity_C::SetFortniteCrewVisiblity(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelIdentity_C", "SetFortniteCrewVisiblity");

	Params::SidebarProfileSubPanelIdentity_C_SetFortniteCrewVisiblity Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarProfileSubPanelIdentity_C::SetSeasonLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarProfileSubPanelIdentity_C", "SetSeasonLevel");

	Params::SidebarProfileSubPanelIdentity_C_SetSeasonLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}

}
