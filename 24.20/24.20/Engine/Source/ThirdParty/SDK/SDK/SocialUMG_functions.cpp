#pragma once

#include "Basic.hpp"

#include "SocialUMG_classes.hpp"
#include "SocialUMG_parameters.hpp"

namespace SDK
{

void USocialChatContainer::DynamicHandleMessageTextCommitted(const class FText& MessageText, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "DynamicHandleMessageTextCommitted");

	Params::SocialChatContainer_DynamicHandleMessageTextCommitted Parms{};

	Parms.MessageText = std::move(MessageText);
	Parms.CommitMethod = CommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USocialChatContainer::FocusEditableText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "FocusEditableText");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USocialChatContainer::HandleLeftTabPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "HandleLeftTabPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USocialChatContainer::HandleRightTabPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "HandleRightTabPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USocialChatContainer::OnChatOpenChanged(bool bShouldBeOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "OnChatOpenChanged");

	Params::SocialChatContainer_OnChatOpenChanged Parms{};

	Parms.bShouldBeOpen = bShouldBeOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialChatContainer::SendCurrentMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatContainer", "SendCurrentMessage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USocialChatMessageEntry::OnMessageSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatMessageEntry", "OnMessageSet");

	UObject::ProcessEvent(Func, nullptr);
}

bool USocialChatMessageEntry::CanInteract() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialChatMessageEntry", "CanInteract");

	Params::SocialChatMessageEntry_CanInteract Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidget* USocialGroupListEntry::HandleGetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialGroupListEntry", "HandleGetMenuContent");

	Params::SocialGroupListEntry_HandleGetMenuContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USocialInteractionButton::OnInteractionSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionButton", "OnInteractionSet");

	UObject::ProcessEvent(Func, nullptr);
}

class FName USocialInteractionButton::GetInteractionName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionButton", "GetInteractionName");

	Params::SocialInteractionButton_GetInteractionName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USocialInteractionButton::IsPlatformOnlyFriend() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionButton", "IsPlatformOnlyFriend");

	Params::SocialInteractionButton_IsPlatformOnlyFriend Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USocialActionMenu::HandleMenuAnchorOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialActionMenu", "HandleMenuAnchorOpenChanged");

	Params::SocialActionMenu_HandleMenuAnchorOpenChanged Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USocialActionMenu::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialActionMenu", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialInteractionMenu::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionMenu", "OnToggleConfirmation");

	Params::SocialInteractionMenu_OnToggleConfirmation Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* USocialInteractionMenu::GetFirstEntryToCenter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteractionMenu", "GetFirstEntryToCenter");

	Params::SocialInteractionMenu_GetFirstEntryToCenter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidget* USocialListInteractableEntryBase::HandleGetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialListInteractableEntryBase", "HandleGetMenuContent");

	Params::SocialListInteractableEntryBase_HandleGetMenuContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USocialListInteractableEntryBase::HandleMenuOpenChanged(bool bIsMenuOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialListInteractableEntryBase", "HandleMenuOpenChanged");

	Params::SocialListInteractableEntryBase_HandleMenuOpenChanged Parms{};

	Parms.bIsMenuOpen = bIsMenuOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
