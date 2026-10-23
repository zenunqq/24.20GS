#pragma once

#include "Basic.hpp"

#include "SidebarReferAFriendActionMenu_classes.hpp"
#include "SidebarReferAFriendActionMenu_parameters.hpp"

namespace SDK
{

void USidebarReferAFriendActionMenu_C::ExecuteUbergraph_SidebarReferAFriendActionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarReferAFriendActionMenu_C", "ExecuteUbergraph_SidebarReferAFriendActionMenu");

	Params::SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply USidebarReferAFriendActionMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarReferAFriendActionMenu_C", "OnKeyUp");

	Params::SidebarReferAFriendActionMenu_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void USidebarReferAFriendActionMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarReferAFriendActionMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarReferAFriendActionMenu_C::OnRequestOriginChanged(EReferFriendOrigin RequestOrigin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarReferAFriendActionMenu_C", "OnRequestOriginChanged");

	Params::SidebarReferAFriendActionMenu_C_OnRequestOriginChanged Parms{};

	Parms.RequestOrigin = RequestOrigin;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarReferAFriendActionMenu_C::Set_QRt_Image(EReferFriendOrigin Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarReferAFriendActionMenu_C", "Set QRt Image");

	Params::SidebarReferAFriendActionMenu_C_Set_QRt_Image Parms{};

	Parms.Origin = Origin;

	UObject::ProcessEvent(Func, &Parms);
}

}
