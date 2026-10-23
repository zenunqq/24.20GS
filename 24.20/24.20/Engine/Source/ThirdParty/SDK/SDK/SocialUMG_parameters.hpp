#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SocialChatContainer_DynamicHandleMessageTextCommitted final
{
public:
	class FText                                   MessageText;
	ETextCommit                                   CommitMethod;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(SocialChatContainer_DynamicHandleMessageTextCommitted) == 0x000008, "Wrong alignment on SocialChatContainer_DynamicHandleMessageTextCommitted");
static_assert(sizeof(SocialChatContainer_DynamicHandleMessageTextCommitted) == 0x000020, "Wrong size on SocialChatContainer_DynamicHandleMessageTextCommitted");
static_assert(offsetof(SocialChatContainer_DynamicHandleMessageTextCommitted, MessageText) == 0x000000, "Member 'SocialChatContainer_DynamicHandleMessageTextCommitted::MessageText' has a wrong offset!");
static_assert(offsetof(SocialChatContainer_DynamicHandleMessageTextCommitted, CommitMethod) == 0x000018, "Member 'SocialChatContainer_DynamicHandleMessageTextCommitted::CommitMethod' has a wrong offset!");

struct SocialChatContainer_OnChatOpenChanged final
{
public:
	bool                                          bShouldBeOpen;
};
static_assert(alignof(SocialChatContainer_OnChatOpenChanged) == 0x000001, "Wrong alignment on SocialChatContainer_OnChatOpenChanged");
static_assert(sizeof(SocialChatContainer_OnChatOpenChanged) == 0x000001, "Wrong size on SocialChatContainer_OnChatOpenChanged");
static_assert(offsetof(SocialChatContainer_OnChatOpenChanged, bShouldBeOpen) == 0x000000, "Member 'SocialChatContainer_OnChatOpenChanged::bShouldBeOpen' has a wrong offset!");

struct SocialChatMessageEntry_CanInteract final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SocialChatMessageEntry_CanInteract) == 0x000001, "Wrong alignment on SocialChatMessageEntry_CanInteract");
static_assert(sizeof(SocialChatMessageEntry_CanInteract) == 0x000001, "Wrong size on SocialChatMessageEntry_CanInteract");
static_assert(offsetof(SocialChatMessageEntry_CanInteract, ReturnValue) == 0x000000, "Member 'SocialChatMessageEntry_CanInteract::ReturnValue' has a wrong offset!");

struct SocialGroupListEntry_HandleGetMenuContent final
{
public:
	class UUserWidget*                            ReturnValue;
};
static_assert(alignof(SocialGroupListEntry_HandleGetMenuContent) == 0x000008, "Wrong alignment on SocialGroupListEntry_HandleGetMenuContent");
static_assert(sizeof(SocialGroupListEntry_HandleGetMenuContent) == 0x000008, "Wrong size on SocialGroupListEntry_HandleGetMenuContent");
static_assert(offsetof(SocialGroupListEntry_HandleGetMenuContent, ReturnValue) == 0x000000, "Member 'SocialGroupListEntry_HandleGetMenuContent::ReturnValue' has a wrong offset!");

struct SocialInteractionButton_GetInteractionName final
{
public:
	class FName                                   ReturnValue;
};
static_assert(alignof(SocialInteractionButton_GetInteractionName) == 0x000004, "Wrong alignment on SocialInteractionButton_GetInteractionName");
static_assert(sizeof(SocialInteractionButton_GetInteractionName) == 0x000004, "Wrong size on SocialInteractionButton_GetInteractionName");
static_assert(offsetof(SocialInteractionButton_GetInteractionName, ReturnValue) == 0x000000, "Member 'SocialInteractionButton_GetInteractionName::ReturnValue' has a wrong offset!");

struct SocialInteractionButton_IsPlatformOnlyFriend final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SocialInteractionButton_IsPlatformOnlyFriend) == 0x000001, "Wrong alignment on SocialInteractionButton_IsPlatformOnlyFriend");
static_assert(sizeof(SocialInteractionButton_IsPlatformOnlyFriend) == 0x000001, "Wrong size on SocialInteractionButton_IsPlatformOnlyFriend");
static_assert(offsetof(SocialInteractionButton_IsPlatformOnlyFriend, ReturnValue) == 0x000000, "Member 'SocialInteractionButton_IsPlatformOnlyFriend::ReturnValue' has a wrong offset!");

struct SocialActionMenu_HandleMenuAnchorOpenChanged final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(SocialActionMenu_HandleMenuAnchorOpenChanged) == 0x000001, "Wrong alignment on SocialActionMenu_HandleMenuAnchorOpenChanged");
static_assert(sizeof(SocialActionMenu_HandleMenuAnchorOpenChanged) == 0x000001, "Wrong size on SocialActionMenu_HandleMenuAnchorOpenChanged");
static_assert(offsetof(SocialActionMenu_HandleMenuAnchorOpenChanged, bIsOpen) == 0x000000, "Member 'SocialActionMenu_HandleMenuAnchorOpenChanged::bIsOpen' has a wrong offset!");

struct SocialInteractionMenu_OnToggleConfirmation final
{
public:
	bool                                          bIsVisible;
};
static_assert(alignof(SocialInteractionMenu_OnToggleConfirmation) == 0x000001, "Wrong alignment on SocialInteractionMenu_OnToggleConfirmation");
static_assert(sizeof(SocialInteractionMenu_OnToggleConfirmation) == 0x000001, "Wrong size on SocialInteractionMenu_OnToggleConfirmation");
static_assert(offsetof(SocialInteractionMenu_OnToggleConfirmation, bIsVisible) == 0x000000, "Member 'SocialInteractionMenu_OnToggleConfirmation::bIsVisible' has a wrong offset!");

struct SocialInteractionMenu_GetFirstEntryToCenter final
{
public:
	class UWidget*                                ReturnValue;
};
static_assert(alignof(SocialInteractionMenu_GetFirstEntryToCenter) == 0x000008, "Wrong alignment on SocialInteractionMenu_GetFirstEntryToCenter");
static_assert(sizeof(SocialInteractionMenu_GetFirstEntryToCenter) == 0x000008, "Wrong size on SocialInteractionMenu_GetFirstEntryToCenter");
static_assert(offsetof(SocialInteractionMenu_GetFirstEntryToCenter, ReturnValue) == 0x000000, "Member 'SocialInteractionMenu_GetFirstEntryToCenter::ReturnValue' has a wrong offset!");

struct SocialListInteractableEntryBase_HandleGetMenuContent final
{
public:
	class UUserWidget*                            ReturnValue;
};
static_assert(alignof(SocialListInteractableEntryBase_HandleGetMenuContent) == 0x000008, "Wrong alignment on SocialListInteractableEntryBase_HandleGetMenuContent");
static_assert(sizeof(SocialListInteractableEntryBase_HandleGetMenuContent) == 0x000008, "Wrong size on SocialListInteractableEntryBase_HandleGetMenuContent");
static_assert(offsetof(SocialListInteractableEntryBase_HandleGetMenuContent, ReturnValue) == 0x000000, "Member 'SocialListInteractableEntryBase_HandleGetMenuContent::ReturnValue' has a wrong offset!");

struct SocialListInteractableEntryBase_HandleMenuOpenChanged final
{
public:
	bool                                          bIsMenuOpen;
};
static_assert(alignof(SocialListInteractableEntryBase_HandleMenuOpenChanged) == 0x000001, "Wrong alignment on SocialListInteractableEntryBase_HandleMenuOpenChanged");
static_assert(sizeof(SocialListInteractableEntryBase_HandleMenuOpenChanged) == 0x000001, "Wrong size on SocialListInteractableEntryBase_HandleMenuOpenChanged");
static_assert(offsetof(SocialListInteractableEntryBase_HandleMenuOpenChanged, bIsMenuOpen) == 0x000000, "Member 'SocialListInteractableEntryBase_HandleMenuOpenChanged::bIsMenuOpen' has a wrong offset!");

}
