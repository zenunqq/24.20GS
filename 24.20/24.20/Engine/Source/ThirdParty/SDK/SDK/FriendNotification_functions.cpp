#pragma once

#include "Basic.hpp"

#include "FriendNotification_classes.hpp"
#include "FriendNotification_parameters.hpp"

namespace SDK
{

void UFriendNotification_C::ExecuteUbergraph_FriendNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendNotification_C", "ExecuteUbergraph_FriendNotification");

	Params::FriendNotification_C_ExecuteUbergraph_FriendNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFriendNotification_C::JoinPartyInvite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendNotification_C", "JoinPartyInvite");

	UObject::ProcessEvent(Func, nullptr);
}

void UFriendNotification_C::ShowFriendInvites()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FriendNotification_C", "ShowFriendInvites");

	UObject::ProcessEvent(Func, nullptr);
}

}
