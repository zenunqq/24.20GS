#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "Party_structs.hpp"
#include "Party_classes.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "SocialUMG_structs.hpp"

namespace SDK
{

class UDesignerPreviewChatChannel final : public USocialChatChannel
{
public:
	uint8                                         Pad_E8[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DesignerPreviewChatChannel">();
	}
	static class UDesignerPreviewChatChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDesignerPreviewChatChannel>();
	}
};
static_assert(alignof(UDesignerPreviewChatChannel) == 0x000008, "Wrong alignment on UDesignerPreviewChatChannel");
static_assert(sizeof(UDesignerPreviewChatChannel) == 0x000150, "Wrong size on UDesignerPreviewChatChannel");

class USocialChatChannelTab : public UCommonButtonLegacy
{
public:
	class USocialChatChannel*                     ChatChannel;
	class UCommonTextBlock*                       CommonText_ChannelName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChannelTab">();
	}
	static class USocialChatChannelTab* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChannelTab>();
	}
};
static_assert(alignof(USocialChatChannelTab) == 0x000010, "Wrong alignment on USocialChatChannelTab");
static_assert(sizeof(USocialChatChannelTab) == 0x001440, "Wrong size on USocialChatChannelTab");
static_assert(offsetof(USocialChatChannelTab, ChatChannel) == 0x001430, "Member 'USocialChatChannelTab::ChatChannel' has a wrong offset!");
static_assert(offsetof(USocialChatChannelTab, CommonText_ChannelName) == 0x001438, "Member 'USocialChatChannelTab::CommonText_ChannelName' has a wrong offset!");

class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                     ChatManager;
	TArray<class USocialChatChannel*>             JoinedChannels;
	class USocialChatChannel*                     ActiveChannel;
	class UCommonButtonGroupLegacy*               TabButtonGroup;
	uint8                                         Pad_290[0x8];
	class USocialChatMessageList*                 ChatList_Messages;
	class USocialChatEditableText*                ChatEditableText_MessageEntry;
	class UCommonButtonBase*                      Button_SendMessage;
	class UDynamicEntryBox*                       EntryBox_JoinedChannels;
	class UScrollBox*                             ScrollBox_Channels;

public:
	void DynamicHandleMessageTextCommitted(const class FText& MessageText, ETextCommit CommitMethod);
	void FocusEditableText();
	void HandleLeftTabPressed();
	void HandleRightTabPressed();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void SendCurrentMessage();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatContainer">();
	}
	static class USocialChatContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatContainer>();
	}
};
static_assert(alignof(USocialChatContainer) == 0x000008, "Wrong alignment on USocialChatContainer");
static_assert(sizeof(USocialChatContainer) == 0x0002C0, "Wrong size on USocialChatContainer");
static_assert(offsetof(USocialChatContainer, ChatManager) == 0x000268, "Member 'USocialChatContainer::ChatManager' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, JoinedChannels) == 0x000270, "Member 'USocialChatContainer::JoinedChannels' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, ActiveChannel) == 0x000280, "Member 'USocialChatContainer::ActiveChannel' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, TabButtonGroup) == 0x000288, "Member 'USocialChatContainer::TabButtonGroup' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, ChatList_Messages) == 0x000298, "Member 'USocialChatContainer::ChatList_Messages' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, ChatEditableText_MessageEntry) == 0x0002A0, "Member 'USocialChatContainer::ChatEditableText_MessageEntry' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, Button_SendMessage) == 0x0002A8, "Member 'USocialChatContainer::Button_SendMessage' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, EntryBox_JoinedChannels) == 0x0002B0, "Member 'USocialChatContainer::EntryBox_JoinedChannels' has a wrong offset!");
static_assert(offsetof(USocialChatContainer, ScrollBox_Channels) == 0x0002B8, "Member 'USocialChatContainer::ScrollBox_Channels' has a wrong offset!");

class USocialChatMessageEntry : public UUserWidget
{
public:
	uint8                                         Pad_268[0x18];
	struct FSocialChatMessageEntryStyle           DefaultStyle;
	class UCommonRichTextBlock*                   RichText_Message;
	class UButton*                                Button_MessageButton;

public:
	void OnMessageSet();

	bool CanInteract() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatMessageEntry">();
	}
	static class USocialChatMessageEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatMessageEntry>();
	}
};
static_assert(alignof(USocialChatMessageEntry) == 0x000008, "Wrong alignment on USocialChatMessageEntry");
static_assert(sizeof(USocialChatMessageEntry) == 0x0003C8, "Wrong size on USocialChatMessageEntry");
static_assert(offsetof(USocialChatMessageEntry, DefaultStyle) == 0x000280, "Member 'USocialChatMessageEntry::DefaultStyle' has a wrong offset!");
static_assert(offsetof(USocialChatMessageEntry, RichText_Message) == 0x0003B8, "Member 'USocialChatMessageEntry::RichText_Message' has a wrong offset!");
static_assert(offsetof(USocialChatMessageEntry, Button_MessageButton) == 0x0003C0, "Member 'USocialChatMessageEntry::Button_MessageButton' has a wrong offset!");

class USocialChatMessageList final : public UListViewBase
{
public:
	uint8                                         Pad_260[0xD8];
	bool                                          bIsFocusable;
	uint8                                         Pad_339[0x7];
	class USocialChatChannel*                     ActiveChannel;
	uint8                                         Pad_348[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatMessageList">();
	}
	static class USocialChatMessageList* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatMessageList>();
	}
};
static_assert(alignof(USocialChatMessageList) == 0x000008, "Wrong alignment on USocialChatMessageList");
static_assert(sizeof(USocialChatMessageList) == 0x000368, "Wrong size on USocialChatMessageList");
static_assert(offsetof(USocialChatMessageList, bIsFocusable) == 0x000338, "Member 'USocialChatMessageList::bIsFocusable' has a wrong offset!");
static_assert(offsetof(USocialChatMessageList, ActiveChannel) == 0x000340, "Member 'USocialChatMessageList::ActiveChannel' has a wrong offset!");

class USocialGroupListEntry final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	TSubclassOf<class USocialActionMenu>          ActionMenuClass;
	class USocialGroupChannel*                    SocialGroup;
	class UTextBlock*                             Text_GroupName;
	class UMenuAnchor*                            MenuAnchor_Actions;
	uint8                                         Pad_1458[0x8];

public:
	class UUserWidget* HandleGetMenuContent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialGroupListEntry">();
	}
	static class USocialGroupListEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialGroupListEntry>();
	}
};
static_assert(alignof(USocialGroupListEntry) == 0x000010, "Wrong alignment on USocialGroupListEntry");
static_assert(sizeof(USocialGroupListEntry) == 0x001460, "Wrong size on USocialGroupListEntry");
static_assert(offsetof(USocialGroupListEntry, ActionMenuClass) == 0x001438, "Member 'USocialGroupListEntry::ActionMenuClass' has a wrong offset!");
static_assert(offsetof(USocialGroupListEntry, SocialGroup) == 0x001440, "Member 'USocialGroupListEntry::SocialGroup' has a wrong offset!");
static_assert(offsetof(USocialGroupListEntry, Text_GroupName) == 0x001448, "Member 'USocialGroupListEntry::Text_GroupName' has a wrong offset!");
static_assert(offsetof(USocialGroupListEntry, MenuAnchor_Actions) == 0x001450, "Member 'USocialGroupListEntry::MenuAnchor_Actions' has a wrong offset!");

class USocialGroupTreeView final : public UTreeView
{
public:
	TSubclassOf<class USocialGroupListEntry>      GroupEntryWidgetClass;
	TSubclassOf<class USocialListUserEntryBase>   UserEntryWidgetClass;
	TSubclassOf<class USocialInteractionMenu>     ActionMenuClass;
	class USocialInteractionMenu*                 ActionMenu;
	uint8                                         Pad_C08[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialGroupTreeView">();
	}
	static class USocialGroupTreeView* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialGroupTreeView>();
	}
};
static_assert(alignof(USocialGroupTreeView) == 0x000010, "Wrong alignment on USocialGroupTreeView");
static_assert(sizeof(USocialGroupTreeView) == 0x000C10, "Wrong size on USocialGroupTreeView");
static_assert(offsetof(USocialGroupTreeView, GroupEntryWidgetClass) == 0x000BE8, "Member 'USocialGroupTreeView::GroupEntryWidgetClass' has a wrong offset!");
static_assert(offsetof(USocialGroupTreeView, UserEntryWidgetClass) == 0x000BF0, "Member 'USocialGroupTreeView::UserEntryWidgetClass' has a wrong offset!");
static_assert(offsetof(USocialGroupTreeView, ActionMenuClass) == 0x000BF8, "Member 'USocialGroupTreeView::ActionMenuClass' has a wrong offset!");
static_assert(offsetof(USocialGroupTreeView, ActionMenu) == 0x000C00, "Member 'USocialGroupTreeView::ActionMenu' has a wrong offset!");

class USocialInteractionButton : public UCommonButtonLegacy
{
public:
	struct FLinearColor                           DefaultIndicatorColor;
	struct FLinearColor                           AlertingIndicatorColor;
	uint8                                         Pad_1450[0x80];
	class UCommonTextBlock*                       Text_InteractionName;
	class UBorder*                                Border_InteractionIndicator;

public:
	void OnInteractionSet();

	class FName GetInteractionName() const;
	bool IsPlatformOnlyFriend() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialInteractionButton">();
	}
	static class USocialInteractionButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialInteractionButton>();
	}
};
static_assert(alignof(USocialInteractionButton) == 0x000010, "Wrong alignment on USocialInteractionButton");
static_assert(sizeof(USocialInteractionButton) == 0x0014E0, "Wrong size on USocialInteractionButton");
static_assert(offsetof(USocialInteractionButton, DefaultIndicatorColor) == 0x001430, "Member 'USocialInteractionButton::DefaultIndicatorColor' has a wrong offset!");
static_assert(offsetof(USocialInteractionButton, AlertingIndicatorColor) == 0x001440, "Member 'USocialInteractionButton::AlertingIndicatorColor' has a wrong offset!");
static_assert(offsetof(USocialInteractionButton, Text_InteractionName) == 0x0014D0, "Member 'USocialInteractionButton::Text_InteractionName' has a wrong offset!");
static_assert(offsetof(USocialInteractionButton, Border_InteractionIndicator) == 0x0014D8, "Member 'USocialInteractionButton::Border_InteractionIndicator' has a wrong offset!");

class USocialActionMenu : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x40];

public:
	void HandleMenuAnchorOpenChanged(bool bIsOpen);
	void OnOpened();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialActionMenu">();
	}
	static class USocialActionMenu* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialActionMenu>();
	}
};
static_assert(alignof(USocialActionMenu) == 0x000008, "Wrong alignment on USocialActionMenu");
static_assert(sizeof(USocialActionMenu) == 0x0003E8, "Wrong size on USocialActionMenu");

class USocialInteractionMenu : public USocialActionMenu
{
public:
	uint8                                         Pad_3E8[0x30];
	class UDynamicEntryBox*                       EntryBox_PositiveInteractions;
	class UDynamicEntryBox*                       EntryBox_NegativeInteractions;
	class USpacer*                                Spacer_InteractionSeparator;
	class UCommonWidgetSwitcherLegacy*            Switcher_Confirmation;
	class UTextBlock*                             Text_ConfirmationLabel;
	class UCommonButtonLegacy*                    Button_Confirm;
	class UCommonButtonLegacy*                    Button_Decline;

public:
	void OnToggleConfirmation(bool bIsVisible);

	class UWidget* GetFirstEntryToCenter() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialInteractionMenu">();
	}
	static class USocialInteractionMenu* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialInteractionMenu>();
	}
};
static_assert(alignof(USocialInteractionMenu) == 0x000008, "Wrong alignment on USocialInteractionMenu");
static_assert(sizeof(USocialInteractionMenu) == 0x000450, "Wrong size on USocialInteractionMenu");
static_assert(offsetof(USocialInteractionMenu, EntryBox_PositiveInteractions) == 0x000418, "Member 'USocialInteractionMenu::EntryBox_PositiveInteractions' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, EntryBox_NegativeInteractions) == 0x000420, "Member 'USocialInteractionMenu::EntryBox_NegativeInteractions' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Spacer_InteractionSeparator) == 0x000428, "Member 'USocialInteractionMenu::Spacer_InteractionSeparator' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Switcher_Confirmation) == 0x000430, "Member 'USocialInteractionMenu::Switcher_Confirmation' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Text_ConfirmationLabel) == 0x000438, "Member 'USocialInteractionMenu::Text_ConfirmationLabel' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Button_Confirm) == 0x000440, "Member 'USocialInteractionMenu::Button_Confirm' has a wrong offset!");
static_assert(offsetof(USocialInteractionMenu, Button_Decline) == 0x000448, "Member 'USocialInteractionMenu::Button_Decline' has a wrong offset!");

class USocialNameTextBlock : public UCommonRichTextBlock
{
public:
	class USocialUser*                            SocialUser;
	float                                         MinDesiredSize;
	float                                         MaxDesiredSize;
	bool                                          bShowSecondName;
	EPlatformIconDisplayRule                      PlatformIconDisplayRule;
	bool                                          bWrapToNextLine;
	uint8                                         Pad_84B[0x1];
	struct FColor                                 SecondNameColor;
	int32                                         SecondNameFontSize;
	uint8                                         Pad_854[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialNameTextBlock">();
	}
	static class USocialNameTextBlock* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialNameTextBlock>();
	}
};
static_assert(alignof(USocialNameTextBlock) == 0x000010, "Wrong alignment on USocialNameTextBlock");
static_assert(sizeof(USocialNameTextBlock) == 0x000860, "Wrong size on USocialNameTextBlock");
static_assert(offsetof(USocialNameTextBlock, SocialUser) == 0x000838, "Member 'USocialNameTextBlock::SocialUser' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, MinDesiredSize) == 0x000840, "Member 'USocialNameTextBlock::MinDesiredSize' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, MaxDesiredSize) == 0x000844, "Member 'USocialNameTextBlock::MaxDesiredSize' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, bShowSecondName) == 0x000848, "Member 'USocialNameTextBlock::bShowSecondName' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, PlatformIconDisplayRule) == 0x000849, "Member 'USocialNameTextBlock::PlatformIconDisplayRule' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, bWrapToNextLine) == 0x00084A, "Member 'USocialNameTextBlock::bWrapToNextLine' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, SecondNameColor) == 0x00084C, "Member 'USocialNameTextBlock::SecondNameColor' has a wrong offset!");
static_assert(offsetof(USocialNameTextBlock, SecondNameFontSize) == 0x000850, "Member 'USocialNameTextBlock::SecondNameFontSize' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) USocialListEntryBase : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListEntryBase">();
	}
	static class USocialListEntryBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListEntryBase>();
	}
};
#pragma pack(pop)
static_assert(alignof(USocialListEntryBase) == 0x000010, "Wrong alignment on USocialListEntryBase");
static_assert(sizeof(USocialListEntryBase) == 0x001450, "Wrong size on USocialListEntryBase");

#pragma pack(push, 0x1)
class alignas(0x10) USocialListInteractableEntryBase : public USocialListEntryBase
{
public:
	TSubclassOf<class USocialActionMenu>          ActionMenuClass;
	class UMenuAnchor*                            MenuAnchor_Actions;

public:
	class UUserWidget* HandleGetMenuContent();
	void HandleMenuOpenChanged(bool bIsMenuOpen);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListInteractableEntryBase">();
	}
	static class USocialListInteractableEntryBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListInteractableEntryBase>();
	}
};
#pragma pack(pop)
static_assert(alignof(USocialListInteractableEntryBase) == 0x000010, "Wrong alignment on USocialListInteractableEntryBase");
static_assert(sizeof(USocialListInteractableEntryBase) == 0x001460, "Wrong size on USocialListInteractableEntryBase");
static_assert(offsetof(USocialListInteractableEntryBase, ActionMenuClass) == 0x001448, "Member 'USocialListInteractableEntryBase::ActionMenuClass' has a wrong offset!");
static_assert(offsetof(USocialListInteractableEntryBase, MenuAnchor_Actions) == 0x001450, "Member 'USocialListInteractableEntryBase::MenuAnchor_Actions' has a wrong offset!");

class USocialListUserEntryBase : public USocialListInteractableEntryBase
{
public:
	uint8                                         Pad_1458[0x8];
	class USocialNameTextBlock*                   Text_SocialName;
	class USocialNameTextBlock*                   Text_SocialName_Hover;
	class UCommonRichTextBlock*                   Text_RichPresence;
	class UCommonRichTextBlock*                   Text_RichPresence_Hover;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListUserEntryBase">();
	}
	static class USocialListUserEntryBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListUserEntryBase>();
	}
};
static_assert(alignof(USocialListUserEntryBase) == 0x000010, "Wrong alignment on USocialListUserEntryBase");
static_assert(sizeof(USocialListUserEntryBase) == 0x001480, "Wrong size on USocialListUserEntryBase");
static_assert(offsetof(USocialListUserEntryBase, Text_SocialName) == 0x001460, "Member 'USocialListUserEntryBase::Text_SocialName' has a wrong offset!");
static_assert(offsetof(USocialListUserEntryBase, Text_SocialName_Hover) == 0x001468, "Member 'USocialListUserEntryBase::Text_SocialName_Hover' has a wrong offset!");
static_assert(offsetof(USocialListUserEntryBase, Text_RichPresence) == 0x001470, "Member 'USocialListUserEntryBase::Text_RichPresence' has a wrong offset!");
static_assert(offsetof(USocialListUserEntryBase, Text_RichPresence_Hover) == 0x001478, "Member 'USocialListUserEntryBase::Text_RichPresence_Hover' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) USocialUserListHeaderEntry : public USocialListEntryBase
{
public:
	class UTextBlock*                             Text_ListName;
	class UTextBlock*                             Text_NumEntries;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUserListHeaderEntry">();
	}
	static class USocialUserListHeaderEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUserListHeaderEntry>();
	}
};
#pragma pack(pop)
static_assert(alignof(USocialUserListHeaderEntry) == 0x000010, "Wrong alignment on USocialUserListHeaderEntry");
static_assert(sizeof(USocialUserListHeaderEntry) == 0x001460, "Wrong size on USocialUserListHeaderEntry");
static_assert(offsetof(USocialUserListHeaderEntry, Text_ListName) == 0x001448, "Member 'USocialUserListHeaderEntry::Text_ListName' has a wrong offset!");
static_assert(offsetof(USocialUserListHeaderEntry, Text_NumEntries) == 0x001450, "Member 'USocialUserListHeaderEntry::Text_NumEntries' has a wrong offset!");

class USocialUserListViewBase : public UListViewBase
{
public:
	uint8                                         Pad_260[0xF8];
	float                                         EntrySpacing;
	uint8                                         Pad_35C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUserListViewBase">();
	}
	static class USocialUserListViewBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUserListViewBase>();
	}
};
static_assert(alignof(USocialUserListViewBase) == 0x000008, "Wrong alignment on USocialUserListViewBase");
static_assert(sizeof(USocialUserListViewBase) == 0x000360, "Wrong size on USocialUserListViewBase");
static_assert(offsetof(USocialUserListViewBase, EntrySpacing) == 0x000358, "Member 'USocialUserListViewBase::EntrySpacing' has a wrong offset!");

class USocialUserListView : public USocialUserListViewBase
{
public:
	uint8                                         Pad_360[0x48];
	class USocialActionMenu*                      ActiveActionMenu;
	TMap<TSubclassOf<class USocialActionMenu>, class USocialActionMenu*> CachedActionMenuPool;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUserListView">();
	}
	static class USocialUserListView* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUserListView>();
	}
};
static_assert(alignof(USocialUserListView) == 0x000008, "Wrong alignment on USocialUserListView");
static_assert(sizeof(USocialUserListView) == 0x000400, "Wrong size on USocialUserListView");
static_assert(offsetof(USocialUserListView, ActiveActionMenu) == 0x0003A8, "Member 'USocialUserListView::ActiveActionMenu' has a wrong offset!");
static_assert(offsetof(USocialUserListView, CachedActionMenuPool) == 0x0003B0, "Member 'USocialUserListView::CachedActionMenuPool' has a wrong offset!");

class USocialUserTreeView : public USocialUserListView
{
public:
	uint8                                         Pad_400[0x70];
	TSubclassOf<class USocialListUserEntryBase>   UserEntryWidgetClass;
	TSubclassOf<class USocialListUserEntryBase>   InviteEntryWidgetClass;
	uint8                                         Pad_480[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialUserTreeView">();
	}
	static class USocialUserTreeView* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialUserTreeView>();
	}
};
static_assert(alignof(USocialUserTreeView) == 0x000008, "Wrong alignment on USocialUserTreeView");
static_assert(sizeof(USocialUserTreeView) == 0x0004A0, "Wrong size on USocialUserTreeView");
static_assert(offsetof(USocialUserTreeView, UserEntryWidgetClass) == 0x000470, "Member 'USocialUserTreeView::UserEntryWidgetClass' has a wrong offset!");
static_assert(offsetof(USocialUserTreeView, InviteEntryWidgetClass) == 0x000478, "Member 'USocialUserTreeView::InviteEntryWidgetClass' has a wrong offset!");

class USocialChatEditableText final : public UWidget
{
public:
	uint8                                         Pad_148[0x28];
	struct FEditableTextStyle                     EditableTextStyle;
	struct FTextBlockStyle                        AutoCompleteStyle;
	uint8                                         Pad_740[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatEditableText">();
	}
	static class USocialChatEditableText* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatEditableText>();
	}
};
static_assert(alignof(USocialChatEditableText) == 0x000010, "Wrong alignment on USocialChatEditableText");
static_assert(sizeof(USocialChatEditableText) == 0x000780, "Wrong size on USocialChatEditableText");
static_assert(offsetof(USocialChatEditableText, EditableTextStyle) == 0x000170, "Member 'USocialChatEditableText::EditableTextStyle' has a wrong offset!");
static_assert(offsetof(USocialChatEditableText, AutoCompleteStyle) == 0x000430, "Member 'USocialChatEditableText::AutoCompleteStyle' has a wrong offset!");

}
