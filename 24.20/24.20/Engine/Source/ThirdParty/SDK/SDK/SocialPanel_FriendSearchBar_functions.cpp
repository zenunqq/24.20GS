#pragma once

#include "Basic.hpp"

#include "SocialPanel_FriendSearchBar_classes.hpp"
#include "SocialPanel_FriendSearchBar_parameters.hpp"

namespace SDK
{

void USocialPanel_FriendSearchBar_C::BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendSearchBar_C", "BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	Params::SocialPanel_FriendSearchBar_C_BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void USocialPanel_FriendSearchBar_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendSearchBar_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanel_FriendSearchBar_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendSearchBar_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanel_FriendSearchBar_C::ExecuteUbergraph_SocialPanel_FriendSearchBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendSearchBar_C", "ExecuteUbergraph_SocialPanel_FriendSearchBar");

	Params::SocialPanel_FriendSearchBar_C_ExecuteUbergraph_SocialPanel_FriendSearchBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply USocialPanel_FriendSearchBar_C::On_ClickCapture_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendSearchBar_C", "On_ClickCapture_MouseButtonDown_0");

	Params::SocialPanel_FriendSearchBar_C_On_ClickCapture_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
