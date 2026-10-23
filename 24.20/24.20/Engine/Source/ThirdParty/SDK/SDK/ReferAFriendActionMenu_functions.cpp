#pragma once

#include "Basic.hpp"

#include "ReferAFriendActionMenu_classes.hpp"
#include "ReferAFriendActionMenu_parameters.hpp"

namespace SDK
{

void UReferAFriendActionMenu_C::ExecuteUbergraph_ReferAFriendActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferAFriendActionMenu_C", "ExecuteUbergraph_ReferAFriendActionMenu");

	Params::ReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UReferAFriendActionMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferAFriendActionMenu_C", "OnKeyUp");

	Params::ReferAFriendActionMenu_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UReferAFriendActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferAFriendActionMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void UReferAFriendActionMenu_C::OnRequestOriginChanged(EReferFriendOrigin RequestOrigin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferAFriendActionMenu_C", "OnRequestOriginChanged");

	Params::ReferAFriendActionMenu_C_OnRequestOriginChanged Parms{};

	Parms.RequestOrigin = RequestOrigin;

	UObject::ProcessEvent(Func, &Parms);
}

void UReferAFriendActionMenu_C::Set_QRt_Image(EReferFriendOrigin Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReferAFriendActionMenu_C", "Set QRt Image");

	Params::ReferAFriendActionMenu_C_Set_QRt_Image Parms{};

	Parms.Origin = Origin;

	UObject::ProcessEvent(Func, &Parms);
}

}
