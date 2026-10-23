#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FSocialChatMessageEntryTextStyle final
{
public:
	struct FSlateFontInfo                         FontInfo;
	struct FLinearColor                           ColorAndOpacity;
};
static_assert(alignof(FSocialChatMessageEntryTextStyle) == 0x000008, "Wrong alignment on FSocialChatMessageEntryTextStyle");
static_assert(sizeof(FSocialChatMessageEntryTextStyle) == 0x000068, "Wrong size on FSocialChatMessageEntryTextStyle");
static_assert(offsetof(FSocialChatMessageEntryTextStyle, FontInfo) == 0x000000, "Member 'FSocialChatMessageEntryTextStyle::FontInfo' has a wrong offset!");
static_assert(offsetof(FSocialChatMessageEntryTextStyle, ColorAndOpacity) == 0x000058, "Member 'FSocialChatMessageEntryTextStyle::ColorAndOpacity' has a wrong offset!");

struct FSocialChatMessageEntryStyle final
{
public:
	struct FSocialChatMessageEntryTextStyle       SenderNameStyle;
	struct FSocialChatMessageEntryTextStyle       ChannelNameStyle;
	struct FSocialChatMessageEntryTextStyle       MessageTextStyle;
};
static_assert(alignof(FSocialChatMessageEntryStyle) == 0x000008, "Wrong alignment on FSocialChatMessageEntryStyle");
static_assert(sizeof(FSocialChatMessageEntryStyle) == 0x000138, "Wrong size on FSocialChatMessageEntryStyle");
static_assert(offsetof(FSocialChatMessageEntryStyle, SenderNameStyle) == 0x000000, "Member 'FSocialChatMessageEntryStyle::SenderNameStyle' has a wrong offset!");
static_assert(offsetof(FSocialChatMessageEntryStyle, ChannelNameStyle) == 0x000068, "Member 'FSocialChatMessageEntryStyle::ChannelNameStyle' has a wrong offset!");
static_assert(offsetof(FSocialChatMessageEntryStyle, MessageTextStyle) == 0x0000D0, "Member 'FSocialChatMessageEntryStyle::MessageTextStyle' has a wrong offset!");

}
