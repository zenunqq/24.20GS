#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

struct FChatChromeColorScheme final
{
public:
	struct FLinearColor                           ChatEntryBackgroundColor;
	struct FLinearColor                           NoneActiveTabColor;
	struct FLinearColor                           TabFontColor;
	struct FLinearColor                           TabFontColorInverted;
	struct FLinearColor                           ChatBackgroundColor;
};
static_assert(alignof(FChatChromeColorScheme) == 0x000004, "Wrong alignment on FChatChromeColorScheme");
static_assert(sizeof(FChatChromeColorScheme) == 0x000050, "Wrong size on FChatChromeColorScheme");
static_assert(offsetof(FChatChromeColorScheme, ChatEntryBackgroundColor) == 0x000000, "Member 'FChatChromeColorScheme::ChatEntryBackgroundColor' has a wrong offset!");
static_assert(offsetof(FChatChromeColorScheme, NoneActiveTabColor) == 0x000010, "Member 'FChatChromeColorScheme::NoneActiveTabColor' has a wrong offset!");
static_assert(offsetof(FChatChromeColorScheme, TabFontColor) == 0x000020, "Member 'FChatChromeColorScheme::TabFontColor' has a wrong offset!");
static_assert(offsetof(FChatChromeColorScheme, TabFontColorInverted) == 0x000030, "Member 'FChatChromeColorScheme::TabFontColorInverted' has a wrong offset!");
static_assert(offsetof(FChatChromeColorScheme, ChatBackgroundColor) == 0x000040, "Member 'FChatChromeColorScheme::ChatBackgroundColor' has a wrong offset!");

struct FChatChromeMargins final
{
public:
	float                                         TabWidth;
	struct FMargin                                TabPadding;
	struct FMargin                                ChatWindowPadding;
	struct FMargin                                ChatWindowToEntryMargin;
	struct FMargin                                ChatChannelPadding;
	struct FMargin                                UserListButtonPadding;
	struct FMargin                                UserListIconPadding;
};
static_assert(alignof(FChatChromeMargins) == 0x000004, "Wrong alignment on FChatChromeMargins");
static_assert(sizeof(FChatChromeMargins) == 0x000064, "Wrong size on FChatChromeMargins");
static_assert(offsetof(FChatChromeMargins, TabWidth) == 0x000000, "Member 'FChatChromeMargins::TabWidth' has a wrong offset!");
static_assert(offsetof(FChatChromeMargins, TabPadding) == 0x000004, "Member 'FChatChromeMargins::TabPadding' has a wrong offset!");
static_assert(offsetof(FChatChromeMargins, ChatWindowPadding) == 0x000014, "Member 'FChatChromeMargins::ChatWindowPadding' has a wrong offset!");
static_assert(offsetof(FChatChromeMargins, ChatWindowToEntryMargin) == 0x000024, "Member 'FChatChromeMargins::ChatWindowToEntryMargin' has a wrong offset!");
static_assert(offsetof(FChatChromeMargins, ChatChannelPadding) == 0x000034, "Member 'FChatChromeMargins::ChatChannelPadding' has a wrong offset!");
static_assert(offsetof(FChatChromeMargins, UserListButtonPadding) == 0x000044, "Member 'FChatChromeMargins::UserListButtonPadding' has a wrong offset!");
static_assert(offsetof(FChatChromeMargins, UserListIconPadding) == 0x000054, "Member 'FChatChromeMargins::UserListIconPadding' has a wrong offset!");

struct FChatChromeStyle final
{
public:
	struct FSlateBrush                            UserListBrush;
	struct FSlateBrush                            ChatBackgroundBrush;
	struct FSlateBrush                            ChatEntryBackgroundBrush;
	struct FSlateBrush                            ChannelBackgroundBrush;
	struct FSlateBrush                            TabBackgroundBrush;
	struct FButtonStyle                           TabSelectorButtonStyle;
	struct FMargin                                TabOptionPadding;
	struct FMargin                                TabContentPadding;
	struct FMargin                                TabClosePadding;
	struct FButtonStyle                           UserListButtonStyle;
};
static_assert(alignof(FChatChromeStyle) == 0x000010, "Wrong alignment on FChatChromeStyle");
static_assert(sizeof(FChatChromeStyle) == 0x000B50, "Wrong size on FChatChromeStyle");
static_assert(offsetof(FChatChromeStyle, UserListBrush) == 0x000000, "Member 'FChatChromeStyle::UserListBrush' has a wrong offset!");
static_assert(offsetof(FChatChromeStyle, ChatBackgroundBrush) == 0x0000C0, "Member 'FChatChromeStyle::ChatBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FChatChromeStyle, ChatEntryBackgroundBrush) == 0x000180, "Member 'FChatChromeStyle::ChatEntryBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FChatChromeStyle, ChannelBackgroundBrush) == 0x000240, "Member 'FChatChromeStyle::ChannelBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FChatChromeStyle, TabBackgroundBrush) == 0x000300, "Member 'FChatChromeStyle::TabBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FChatChromeStyle, TabSelectorButtonStyle) == 0x0003C0, "Member 'FChatChromeStyle::TabSelectorButtonStyle' has a wrong offset!");
static_assert(offsetof(FChatChromeStyle, TabOptionPadding) == 0x000770, "Member 'FChatChromeStyle::TabOptionPadding' has a wrong offset!");
static_assert(offsetof(FChatChromeStyle, TabContentPadding) == 0x000780, "Member 'FChatChromeStyle::TabContentPadding' has a wrong offset!");
static_assert(offsetof(FChatChromeStyle, TabClosePadding) == 0x000790, "Member 'FChatChromeStyle::TabClosePadding' has a wrong offset!");
static_assert(offsetof(FChatChromeStyle, UserListButtonStyle) == 0x0007A0, "Member 'FChatChromeStyle::UserListButtonStyle' has a wrong offset!");

struct FChatColorScheme final
{
public:
	struct FLinearColor                           TimeStampColor;
	struct FLinearColor                           DefaultChatColor;
	struct FLinearColor                           WhisperChatColor;
	struct FLinearColor                           GlobalChatColor;
	struct FLinearColor                           FounderChatColor;
	struct FLinearColor                           GameChatColor;
	struct FLinearColor                           TeamChatColor;
	struct FLinearColor                           PartyChatColor;
	struct FLinearColor                           AdminChatColor;
	struct FLinearColor                           GameAdminChatColor;
	struct FLinearColor                           WhisperHyperlinkChatColor;
	struct FLinearColor                           GlobalHyperlinkChatColor;
	struct FLinearColor                           FounderHyperlinkChatColor;
	struct FLinearColor                           GameHyperlinkChatColor;
	struct FLinearColor                           TeamHyperlinkChatColor;
	struct FLinearColor                           PartyHyperlinkChatColor;
	struct FLinearColor                           EnemyColor;
	struct FLinearColor                           FriendlyColor;
};
static_assert(alignof(FChatColorScheme) == 0x000004, "Wrong alignment on FChatColorScheme");
static_assert(sizeof(FChatColorScheme) == 0x000120, "Wrong size on FChatColorScheme");
static_assert(offsetof(FChatColorScheme, TimeStampColor) == 0x000000, "Member 'FChatColorScheme::TimeStampColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, DefaultChatColor) == 0x000010, "Member 'FChatColorScheme::DefaultChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, WhisperChatColor) == 0x000020, "Member 'FChatColorScheme::WhisperChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, GlobalChatColor) == 0x000030, "Member 'FChatColorScheme::GlobalChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, FounderChatColor) == 0x000040, "Member 'FChatColorScheme::FounderChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, GameChatColor) == 0x000050, "Member 'FChatColorScheme::GameChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, TeamChatColor) == 0x000060, "Member 'FChatColorScheme::TeamChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, PartyChatColor) == 0x000070, "Member 'FChatColorScheme::PartyChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, AdminChatColor) == 0x000080, "Member 'FChatColorScheme::AdminChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, GameAdminChatColor) == 0x000090, "Member 'FChatColorScheme::GameAdminChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, WhisperHyperlinkChatColor) == 0x0000A0, "Member 'FChatColorScheme::WhisperHyperlinkChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, GlobalHyperlinkChatColor) == 0x0000B0, "Member 'FChatColorScheme::GlobalHyperlinkChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, FounderHyperlinkChatColor) == 0x0000C0, "Member 'FChatColorScheme::FounderHyperlinkChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, GameHyperlinkChatColor) == 0x0000D0, "Member 'FChatColorScheme::GameHyperlinkChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, TeamHyperlinkChatColor) == 0x0000E0, "Member 'FChatColorScheme::TeamHyperlinkChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, PartyHyperlinkChatColor) == 0x0000F0, "Member 'FChatColorScheme::PartyHyperlinkChatColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, EnemyColor) == 0x000100, "Member 'FChatColorScheme::EnemyColor' has a wrong offset!");
static_assert(offsetof(FChatColorScheme, FriendlyColor) == 0x000110, "Member 'FChatColorScheme::FriendlyColor' has a wrong offset!");

struct FChatMarkupStyle final
{
public:
	struct FButtonStyle                           MarkupButtonStyle;
	struct FTextBlockStyle                        MarkupTextStyle;
	struct FSlateBrush                            MarkupBackground;
	struct FSlateColor                            ButtonColor;
	struct FSlateColor                            ButtonHoverColor;
	struct FSlateColor                            TipColor;
	uint8                                         Pad_7BC[0x4];
	struct FSlateBrush                            SeperatorBrush;
	float                                         SeperatorThickness;
	struct FMargin                                MarkupPadding;
	struct FMargin                                ButtonPadding;
	uint8                                         Pad_8A4[0xC];
};
static_assert(alignof(FChatMarkupStyle) == 0x000010, "Wrong alignment on FChatMarkupStyle");
static_assert(sizeof(FChatMarkupStyle) == 0x0008B0, "Wrong size on FChatMarkupStyle");
static_assert(offsetof(FChatMarkupStyle, MarkupButtonStyle) == 0x000000, "Member 'FChatMarkupStyle::MarkupButtonStyle' has a wrong offset!");
static_assert(offsetof(FChatMarkupStyle, MarkupTextStyle) == 0x0003B0, "Member 'FChatMarkupStyle::MarkupTextStyle' has a wrong offset!");
static_assert(offsetof(FChatMarkupStyle, MarkupBackground) == 0x0006C0, "Member 'FChatMarkupStyle::MarkupBackground' has a wrong offset!");
static_assert(offsetof(FChatMarkupStyle, ButtonColor) == 0x000780, "Member 'FChatMarkupStyle::ButtonColor' has a wrong offset!");
static_assert(offsetof(FChatMarkupStyle, ButtonHoverColor) == 0x000794, "Member 'FChatMarkupStyle::ButtonHoverColor' has a wrong offset!");
static_assert(offsetof(FChatMarkupStyle, TipColor) == 0x0007A8, "Member 'FChatMarkupStyle::TipColor' has a wrong offset!");
static_assert(offsetof(FChatMarkupStyle, SeperatorBrush) == 0x0007C0, "Member 'FChatMarkupStyle::SeperatorBrush' has a wrong offset!");
static_assert(offsetof(FChatMarkupStyle, SeperatorThickness) == 0x000880, "Member 'FChatMarkupStyle::SeperatorThickness' has a wrong offset!");
static_assert(offsetof(FChatMarkupStyle, MarkupPadding) == 0x000884, "Member 'FChatMarkupStyle::MarkupPadding' has a wrong offset!");
static_assert(offsetof(FChatMarkupStyle, ButtonPadding) == 0x000894, "Member 'FChatMarkupStyle::ButtonPadding' has a wrong offset!");

struct FChatStyle final
{
public:
	struct FEditableTextBoxStyle                  ChatEntryTextStyle;
	struct FEditableTextBoxStyle                  ChatDisplayTextStyle;
	struct FScrollBoxStyle                        ScrollBorderStyle;
	struct FSlateBrush                            MessageNotificationBrush;
	struct FMargin                                ChatEntryPadding;
	float                                         ChatEntryHeight;
	uint8                                         Pad_1EE4[0xC];
	struct FSlateBrush                            ChatMenuBackgroundBrush;
	struct FMargin                                FriendActionPadding;
	struct FMargin                                FriendActionHeaderPadding;
	struct FMargin                                FriendActionStatusMargin;
};
static_assert(alignof(FChatStyle) == 0x000010, "Wrong alignment on FChatStyle");
static_assert(sizeof(FChatStyle) == 0x001FE0, "Wrong size on FChatStyle");
static_assert(offsetof(FChatStyle, ChatEntryTextStyle) == 0x000000, "Member 'FChatStyle::ChatEntryTextStyle' has a wrong offset!");
static_assert(offsetof(FChatStyle, ChatDisplayTextStyle) == 0x000D80, "Member 'FChatStyle::ChatDisplayTextStyle' has a wrong offset!");
static_assert(offsetof(FChatStyle, ScrollBorderStyle) == 0x001B00, "Member 'FChatStyle::ScrollBorderStyle' has a wrong offset!");
static_assert(offsetof(FChatStyle, MessageNotificationBrush) == 0x001E10, "Member 'FChatStyle::MessageNotificationBrush' has a wrong offset!");
static_assert(offsetof(FChatStyle, ChatEntryPadding) == 0x001ED0, "Member 'FChatStyle::ChatEntryPadding' has a wrong offset!");
static_assert(offsetof(FChatStyle, ChatEntryHeight) == 0x001EE0, "Member 'FChatStyle::ChatEntryHeight' has a wrong offset!");
static_assert(offsetof(FChatStyle, ChatMenuBackgroundBrush) == 0x001EF0, "Member 'FChatStyle::ChatMenuBackgroundBrush' has a wrong offset!");
static_assert(offsetof(FChatStyle, FriendActionPadding) == 0x001FB0, "Member 'FChatStyle::FriendActionPadding' has a wrong offset!");
static_assert(offsetof(FChatStyle, FriendActionHeaderPadding) == 0x001FC0, "Member 'FChatStyle::FriendActionHeaderPadding' has a wrong offset!");
static_assert(offsetof(FChatStyle, FriendActionStatusMargin) == 0x001FD0, "Member 'FChatStyle::FriendActionStatusMargin' has a wrong offset!");

struct FSocialFontStyle final
{
public:
	struct FSlateFontInfo                         FontSmall;
	struct FSlateFontInfo                         FontSmallBold;
	struct FSlateFontInfo                         FontNormal;
	struct FSlateFontInfo                         FontNormalBold;
	struct FSlateFontInfo                         FontLarge;
	struct FSlateFontInfo                         FontLargeBold;
	struct FLinearColor                           DefaultFontColor;
	struct FLinearColor                           InvertedFontColor;
	struct FLinearColor                           DefaultDullFontColor;
};
static_assert(alignof(FSocialFontStyle) == 0x000008, "Wrong alignment on FSocialFontStyle");
static_assert(sizeof(FSocialFontStyle) == 0x000240, "Wrong size on FSocialFontStyle");
static_assert(offsetof(FSocialFontStyle, FontSmall) == 0x000000, "Member 'FSocialFontStyle::FontSmall' has a wrong offset!");
static_assert(offsetof(FSocialFontStyle, FontSmallBold) == 0x000058, "Member 'FSocialFontStyle::FontSmallBold' has a wrong offset!");
static_assert(offsetof(FSocialFontStyle, FontNormal) == 0x0000B0, "Member 'FSocialFontStyle::FontNormal' has a wrong offset!");
static_assert(offsetof(FSocialFontStyle, FontNormalBold) == 0x000108, "Member 'FSocialFontStyle::FontNormalBold' has a wrong offset!");
static_assert(offsetof(FSocialFontStyle, FontLarge) == 0x000160, "Member 'FSocialFontStyle::FontLarge' has a wrong offset!");
static_assert(offsetof(FSocialFontStyle, FontLargeBold) == 0x0001B8, "Member 'FSocialFontStyle::FontLargeBold' has a wrong offset!");
static_assert(offsetof(FSocialFontStyle, DefaultFontColor) == 0x000210, "Member 'FSocialFontStyle::DefaultFontColor' has a wrong offset!");
static_assert(offsetof(FSocialFontStyle, InvertedFontColor) == 0x000220, "Member 'FSocialFontStyle::InvertedFontColor' has a wrong offset!");
static_assert(offsetof(FSocialFontStyle, DefaultDullFontColor) == 0x000230, "Member 'FSocialFontStyle::DefaultDullFontColor' has a wrong offset!");

struct FSocialListMargins final
{
public:
	struct FVector2D                              UserPresenceImageSize;
	struct FMargin                                HeaderButtonMargin;
	struct FMargin                                FriendsListMargin;
	struct FMargin                                FriendsListNoFriendsMargin;
	struct FMargin                                FriendsListHeaderMargin;
	struct FMargin                                FriendsListHeaderCountMargin;
	struct FMargin                                HeaderButtonContentMargin;
	struct FMargin                                FriendItemMargin;
	struct FMargin                                FriendItemStatusMargin;
	struct FMargin                                FriendTipStatusMargin;
	struct FMargin                                FriendItemPresenceMargin;
	struct FMargin                                FriendItemPlatformMargin;
	struct FMargin                                FriendItemTextScrollerMargin;
	struct FMargin                                ConfirmationBorderMargin;
	struct FMargin                                ConfirmationButtonMargin;
	struct FMargin                                ConfirmationButtonContentMargin;
	struct FMargin                                NoneFriendContentMargin;
	float                                         NoneFriendContentHeight;
	float                                         NoneFriendIconWidth;
	struct FMargin                                SubMenuBackIconMargin;
	struct FMargin                                SubMenuPageIconMargin;
	struct FMargin                                RadioSettingTitleMargin;
	struct FMargin                                SubMenuSearchIconMargin;
	struct FMargin                                SubMenuSearchTextMargin;
	struct FMargin                                SubMenuBackButtonMargin;
	struct FMargin                                SubMenuSettingButtonMargin;
	struct FMargin                                SubMenuListMargin;
	float                                         SubMenuSeperatorThickness;
	float                                         PresenceSeperatorThickness;
	struct FMargin                                FriendTipMargin;
	struct FMargin                                FriendTipPresenceMargin;
	struct FMargin                                FriendTipSeperatorMargin;
	struct FMargin                                ToolTipMargin;
	struct FMargin                                TipStatusMargin;
	struct FMargin                                AddButtonMargin;
	struct FVector2D                              AddButtonSpacing;
};
static_assert(alignof(FSocialListMargins) == 0x000008, "Wrong alignment on FSocialListMargins");
static_assert(sizeof(FSocialListMargins) == 0x000210, "Wrong size on FSocialListMargins");
static_assert(offsetof(FSocialListMargins, UserPresenceImageSize) == 0x000000, "Member 'FSocialListMargins::UserPresenceImageSize' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, HeaderButtonMargin) == 0x000010, "Member 'FSocialListMargins::HeaderButtonMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendsListMargin) == 0x000020, "Member 'FSocialListMargins::FriendsListMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendsListNoFriendsMargin) == 0x000030, "Member 'FSocialListMargins::FriendsListNoFriendsMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendsListHeaderMargin) == 0x000040, "Member 'FSocialListMargins::FriendsListHeaderMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendsListHeaderCountMargin) == 0x000050, "Member 'FSocialListMargins::FriendsListHeaderCountMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, HeaderButtonContentMargin) == 0x000060, "Member 'FSocialListMargins::HeaderButtonContentMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendItemMargin) == 0x000070, "Member 'FSocialListMargins::FriendItemMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendItemStatusMargin) == 0x000080, "Member 'FSocialListMargins::FriendItemStatusMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendTipStatusMargin) == 0x000090, "Member 'FSocialListMargins::FriendTipStatusMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendItemPresenceMargin) == 0x0000A0, "Member 'FSocialListMargins::FriendItemPresenceMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendItemPlatformMargin) == 0x0000B0, "Member 'FSocialListMargins::FriendItemPlatformMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendItemTextScrollerMargin) == 0x0000C0, "Member 'FSocialListMargins::FriendItemTextScrollerMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, ConfirmationBorderMargin) == 0x0000D0, "Member 'FSocialListMargins::ConfirmationBorderMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, ConfirmationButtonMargin) == 0x0000E0, "Member 'FSocialListMargins::ConfirmationButtonMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, ConfirmationButtonContentMargin) == 0x0000F0, "Member 'FSocialListMargins::ConfirmationButtonContentMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, NoneFriendContentMargin) == 0x000100, "Member 'FSocialListMargins::NoneFriendContentMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, NoneFriendContentHeight) == 0x000110, "Member 'FSocialListMargins::NoneFriendContentHeight' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, NoneFriendIconWidth) == 0x000114, "Member 'FSocialListMargins::NoneFriendIconWidth' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, SubMenuBackIconMargin) == 0x000118, "Member 'FSocialListMargins::SubMenuBackIconMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, SubMenuPageIconMargin) == 0x000128, "Member 'FSocialListMargins::SubMenuPageIconMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, RadioSettingTitleMargin) == 0x000138, "Member 'FSocialListMargins::RadioSettingTitleMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, SubMenuSearchIconMargin) == 0x000148, "Member 'FSocialListMargins::SubMenuSearchIconMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, SubMenuSearchTextMargin) == 0x000158, "Member 'FSocialListMargins::SubMenuSearchTextMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, SubMenuBackButtonMargin) == 0x000168, "Member 'FSocialListMargins::SubMenuBackButtonMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, SubMenuSettingButtonMargin) == 0x000178, "Member 'FSocialListMargins::SubMenuSettingButtonMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, SubMenuListMargin) == 0x000188, "Member 'FSocialListMargins::SubMenuListMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, SubMenuSeperatorThickness) == 0x000198, "Member 'FSocialListMargins::SubMenuSeperatorThickness' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, PresenceSeperatorThickness) == 0x00019C, "Member 'FSocialListMargins::PresenceSeperatorThickness' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendTipMargin) == 0x0001A0, "Member 'FSocialListMargins::FriendTipMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendTipPresenceMargin) == 0x0001B0, "Member 'FSocialListMargins::FriendTipPresenceMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, FriendTipSeperatorMargin) == 0x0001C0, "Member 'FSocialListMargins::FriendTipSeperatorMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, ToolTipMargin) == 0x0001D0, "Member 'FSocialListMargins::ToolTipMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, TipStatusMargin) == 0x0001E0, "Member 'FSocialListMargins::TipStatusMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, AddButtonMargin) == 0x0001F0, "Member 'FSocialListMargins::AddButtonMargin' has a wrong offset!");
static_assert(offsetof(FSocialListMargins, AddButtonSpacing) == 0x000200, "Member 'FSocialListMargins::AddButtonSpacing' has a wrong offset!");

struct FSocialListStyle final
{
public:
	struct FButtonStyle                           GlobalChatButtonStyle;
	struct FSlateBrush                            GlobalChatIcon;
	struct FButtonStyle                           FriendItemButtonStyle;
	struct FButtonStyle                           ConfirmButtonStyle;
	struct FButtonStyle                           CancelButtonStyle;
	struct FSlateColor                            ButtonContentColor;
	struct FSlateColor                            ButtonHoverContentColor;
	uint8                                         Pad_FA8[0x8];
	struct FSlateBrush                            ActionMenuArrowBrush;
	struct FSlateBrush                            ActionMenuArrowRightBrush;
	struct FSlateColor                            ActionMenuBackgroundColor;
	uint8                                         Pad_1144[0xC];
	struct FSlateBrush                            ToolTipArrowBrush;
	struct FButtonStyle                           BackButtonStyle;
	struct FButtonStyle                           HeaderButtonStyle;
	struct FButtonStyle                           FriendListActionButtonStyle;
	struct FSlateBrush                            AddFriendButtonContentBrush;
	struct FSlateBrush                            StatusIconBrush;
	struct FSlateBrush                            PCIconBrush;
	struct FSlateBrush                            ConsoleIconBrush;
	struct FSlateBrush                            MobileIconBrush;
	struct FSlateBrush                            FacebookIconBrush;
	struct FSlateBrush                            EpicIconBrush;
	struct FSlateBrush                            FriendImageBrush;
	struct FSlateBrush                            OfflineBrush;
	struct FSlateBrush                            OnlineBrush;
	struct FSlateBrush                            AwayBrush;
	struct FSlateBrush                            SpectateBrush;
	struct FSlateBrush                            FriendsContainerBackground;
	struct FSlateBrush                            FriendsListBackground;
	struct FEditableTextBoxStyle                  AddFriendEditableTextStyle;
	struct FSlateBrush                            BackBrush;
	struct FSlateBrush                            SelectedOptionBrush;
	struct FSlateBrush                            SettingsBrush;
	struct FSlateBrush                            SeperatorBrush;
	struct FSlateBrush                            PresenceSeperatorBrush;
	struct FSlateBrush                            FontSizeBrush;
	struct FSlateBrush                            SearchBrush;
};
static_assert(alignof(FSocialListStyle) == 0x000010, "Wrong alignment on FSocialListStyle");
static_assert(sizeof(FSocialListStyle) == 0x003A60, "Wrong size on FSocialListStyle");
static_assert(offsetof(FSocialListStyle, GlobalChatButtonStyle) == 0x000000, "Member 'FSocialListStyle::GlobalChatButtonStyle' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, GlobalChatIcon) == 0x0003B0, "Member 'FSocialListStyle::GlobalChatIcon' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, FriendItemButtonStyle) == 0x000470, "Member 'FSocialListStyle::FriendItemButtonStyle' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, ConfirmButtonStyle) == 0x000820, "Member 'FSocialListStyle::ConfirmButtonStyle' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, CancelButtonStyle) == 0x000BD0, "Member 'FSocialListStyle::CancelButtonStyle' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, ButtonContentColor) == 0x000F80, "Member 'FSocialListStyle::ButtonContentColor' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, ButtonHoverContentColor) == 0x000F94, "Member 'FSocialListStyle::ButtonHoverContentColor' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, ActionMenuArrowBrush) == 0x000FB0, "Member 'FSocialListStyle::ActionMenuArrowBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, ActionMenuArrowRightBrush) == 0x001070, "Member 'FSocialListStyle::ActionMenuArrowRightBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, ActionMenuBackgroundColor) == 0x001130, "Member 'FSocialListStyle::ActionMenuBackgroundColor' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, ToolTipArrowBrush) == 0x001150, "Member 'FSocialListStyle::ToolTipArrowBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, BackButtonStyle) == 0x001210, "Member 'FSocialListStyle::BackButtonStyle' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, HeaderButtonStyle) == 0x0015C0, "Member 'FSocialListStyle::HeaderButtonStyle' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, FriendListActionButtonStyle) == 0x001970, "Member 'FSocialListStyle::FriendListActionButtonStyle' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, AddFriendButtonContentBrush) == 0x001D20, "Member 'FSocialListStyle::AddFriendButtonContentBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, StatusIconBrush) == 0x001DE0, "Member 'FSocialListStyle::StatusIconBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, PCIconBrush) == 0x001EA0, "Member 'FSocialListStyle::PCIconBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, ConsoleIconBrush) == 0x001F60, "Member 'FSocialListStyle::ConsoleIconBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, MobileIconBrush) == 0x002020, "Member 'FSocialListStyle::MobileIconBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, FacebookIconBrush) == 0x0020E0, "Member 'FSocialListStyle::FacebookIconBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, EpicIconBrush) == 0x0021A0, "Member 'FSocialListStyle::EpicIconBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, FriendImageBrush) == 0x002260, "Member 'FSocialListStyle::FriendImageBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, OfflineBrush) == 0x002320, "Member 'FSocialListStyle::OfflineBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, OnlineBrush) == 0x0023E0, "Member 'FSocialListStyle::OnlineBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, AwayBrush) == 0x0024A0, "Member 'FSocialListStyle::AwayBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, SpectateBrush) == 0x002560, "Member 'FSocialListStyle::SpectateBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, FriendsContainerBackground) == 0x002620, "Member 'FSocialListStyle::FriendsContainerBackground' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, FriendsListBackground) == 0x0026E0, "Member 'FSocialListStyle::FriendsListBackground' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, AddFriendEditableTextStyle) == 0x0027A0, "Member 'FSocialListStyle::AddFriendEditableTextStyle' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, BackBrush) == 0x003520, "Member 'FSocialListStyle::BackBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, SelectedOptionBrush) == 0x0035E0, "Member 'FSocialListStyle::SelectedOptionBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, SettingsBrush) == 0x0036A0, "Member 'FSocialListStyle::SettingsBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, SeperatorBrush) == 0x003760, "Member 'FSocialListStyle::SeperatorBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, PresenceSeperatorBrush) == 0x003820, "Member 'FSocialListStyle::PresenceSeperatorBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, FontSizeBrush) == 0x0038E0, "Member 'FSocialListStyle::FontSizeBrush' has a wrong offset!");
static_assert(offsetof(FSocialListStyle, SearchBrush) == 0x0039A0, "Member 'FSocialListStyle::SearchBrush' has a wrong offset!");

struct FProfanityData final
{
public:
	class FString                                 CountryCode;
	class FString                                 ProfanityList;
	class FString                                 WhiteList;
	bool                                          bAutoAdd;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FProfanityData) == 0x000008, "Wrong alignment on FProfanityData");
static_assert(sizeof(FProfanityData) == 0x000038, "Wrong size on FProfanityData");
static_assert(offsetof(FProfanityData, CountryCode) == 0x000000, "Member 'FProfanityData::CountryCode' has a wrong offset!");
static_assert(offsetof(FProfanityData, ProfanityList) == 0x000010, "Member 'FProfanityData::ProfanityList' has a wrong offset!");
static_assert(offsetof(FProfanityData, WhiteList) == 0x000020, "Member 'FProfanityData::WhiteList' has a wrong offset!");
static_assert(offsetof(FProfanityData, bAutoAdd) == 0x000030, "Member 'FProfanityData::bAutoAdd' has a wrong offset!");

struct FSocialSoundSchema final
{
public:
	struct FSlateSound                            MessageReceivedSound;
	struct FSlateSound                            PartyInviteReceivedSound;
	struct FSlateSound                            FriendInviteReceivedSound;
};
static_assert(alignof(FSocialSoundSchema) == 0x000008, "Wrong alignment on FSocialSoundSchema");
static_assert(sizeof(FSocialSoundSchema) == 0x000048, "Wrong size on FSocialSoundSchema");
static_assert(offsetof(FSocialSoundSchema, MessageReceivedSound) == 0x000000, "Member 'FSocialSoundSchema::MessageReceivedSound' has a wrong offset!");
static_assert(offsetof(FSocialSoundSchema, PartyInviteReceivedSound) == 0x000018, "Member 'FSocialSoundSchema::PartyInviteReceivedSound' has a wrong offset!");
static_assert(offsetof(FSocialSoundSchema, FriendInviteReceivedSound) == 0x000030, "Member 'FSocialSoundSchema::FriendInviteReceivedSound' has a wrong offset!");

struct FSocialStyle final
{
public:
	struct FScrollBarStyle                        ScrollBarStyle;
	struct FButtonStyle                           ActionButtonStyle;
	struct FSocialFontStyle                       SmallFontStyle;
	struct FSocialFontStyle                       NormalFontStyle;
	struct FSocialFontStyle                       LargeFontStyle;
	struct FSocialFontStyle                       ChatFontStyle;
	struct FCheckBoxStyle                         CheckBoxStyle;
	struct FCheckBoxStyle                         RadioBoxStyle;
	struct FSocialListStyle                       SocialListStyle;
	struct FSocialListMargins                     SocialListMargins;
	struct FChatStyle                             ChatStyle;
	struct FChatColorScheme                       ChatColorScheme;
	struct FChatChromeStyle                       ChatChromeStyle;
	struct FChatChromeMargins                     ChatChromeMargins;
	struct FChatChromeColorScheme                 ChatChromeColorScheme;
	uint8                                         Pad_9124[0xC];
	struct FChatMarkupStyle                       ChatMarkupStyle;
	struct FSocialSoundSchema                     SoundSchema;
	uint8                                         Pad_9A28[0x8];
};
static_assert(alignof(FSocialStyle) == 0x000010, "Wrong alignment on FSocialStyle");
static_assert(sizeof(FSocialStyle) == 0x009A30, "Wrong size on FSocialStyle");
static_assert(offsetof(FSocialStyle, ScrollBarStyle) == 0x000000, "Member 'FSocialStyle::ScrollBarStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, ActionButtonStyle) == 0x0006E0, "Member 'FSocialStyle::ActionButtonStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, SmallFontStyle) == 0x000A90, "Member 'FSocialStyle::SmallFontStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, NormalFontStyle) == 0x000CD0, "Member 'FSocialStyle::NormalFontStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, LargeFontStyle) == 0x000F10, "Member 'FSocialStyle::LargeFontStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, ChatFontStyle) == 0x001150, "Member 'FSocialStyle::ChatFontStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, CheckBoxStyle) == 0x001390, "Member 'FSocialStyle::CheckBoxStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, RadioBoxStyle) == 0x001DA0, "Member 'FSocialStyle::RadioBoxStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, SocialListStyle) == 0x0027B0, "Member 'FSocialStyle::SocialListStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, SocialListMargins) == 0x006210, "Member 'FSocialStyle::SocialListMargins' has a wrong offset!");
static_assert(offsetof(FSocialStyle, ChatStyle) == 0x006420, "Member 'FSocialStyle::ChatStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, ChatColorScheme) == 0x008400, "Member 'FSocialStyle::ChatColorScheme' has a wrong offset!");
static_assert(offsetof(FSocialStyle, ChatChromeStyle) == 0x008520, "Member 'FSocialStyle::ChatChromeStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, ChatChromeMargins) == 0x009070, "Member 'FSocialStyle::ChatChromeMargins' has a wrong offset!");
static_assert(offsetof(FSocialStyle, ChatChromeColorScheme) == 0x0090D4, "Member 'FSocialStyle::ChatChromeColorScheme' has a wrong offset!");
static_assert(offsetof(FSocialStyle, ChatMarkupStyle) == 0x009130, "Member 'FSocialStyle::ChatMarkupStyle' has a wrong offset!");
static_assert(offsetof(FSocialStyle, SoundSchema) == 0x0099E0, "Member 'FSocialStyle::SoundSchema' has a wrong offset!");

}
