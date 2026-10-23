#pragma once

#include "Basic.hpp"

#include "SidebarUserListEntry_MutualFriend_classes.hpp"
#include "SidebarUserListEntry_MutualFriend_parameters.hpp"

namespace SDK
{

void USidebarUserListEntry_MutualFriend_C::ExecuteUbergraph_SidebarUserListEntry_MutualFriend(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_MutualFriend_C", "ExecuteUbergraph_SidebarUserListEntry_MutualFriend");

	Params::SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarUserListEntry_MutualFriend_C::OnNewAvatarsEnabledChanged(bool bUsingNewAvatars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarUserListEntry_MutualFriend_C", "OnNewAvatarsEnabledChanged");

	Params::SidebarUserListEntry_MutualFriend_C_OnNewAvatarsEnabledChanged Parms{};

	Parms.bUsingNewAvatars = bUsingNewAvatars;

	UObject::ProcessEvent(Func, &Parms);
}

}
