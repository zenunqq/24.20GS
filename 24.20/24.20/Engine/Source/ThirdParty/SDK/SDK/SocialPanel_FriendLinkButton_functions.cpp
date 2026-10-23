#pragma once

#include "Basic.hpp"

#include "SocialPanel_FriendLinkButton_classes.hpp"
#include "SocialPanel_FriendLinkButton_parameters.hpp"

namespace SDK
{

void USocialPanel_FriendLinkButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanel_FriendLinkButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanel_FriendLinkButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanel_FriendLinkButton_C::ExecuteUbergraph_SocialPanel_FriendLinkButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "ExecuteUbergraph_SocialPanel_FriendLinkButton");

	Params::SocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialPanel_FriendLinkButton_C::OnCopiedToClipboard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "OnCopiedToClipboard");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanel_FriendLinkButton_C::OnShareButtonTypeSet(EFriendLinkShareButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "OnShareButtonTypeSet");

	Params::SocialPanel_FriendLinkButton_C_OnShareButtonTypeSet Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}

}
