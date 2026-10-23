#pragma once

#include "Basic.hpp"

#include "MissedInvitesActionMenu_classes.hpp"
#include "MissedInvitesActionMenu_parameters.hpp"

namespace SDK
{

void UMissedInvitesActionMenu_C::ExecuteUbergraph_MissedInvitesActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesActionMenu_C", "ExecuteUbergraph_MissedInvitesActionMenu");

	Params::MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UMissedInvitesActionMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesActionMenu_C", "OnKeyUp");

	Params::MissedInvitesActionMenu_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UMissedInvitesActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissedInvitesActionMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

}
