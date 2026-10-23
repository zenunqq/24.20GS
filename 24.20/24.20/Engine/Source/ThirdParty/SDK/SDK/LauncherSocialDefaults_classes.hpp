#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "LauncherSocialTypes_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UChatColorSchemeDataAsset final : public UDataAsset
{
public:
	struct FChatColorScheme                       ChatColorData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChatColorSchemeDataAsset">();
	}
	static class UChatColorSchemeDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatColorSchemeDataAsset>();
	}
};
static_assert(alignof(UChatColorSchemeDataAsset) == 0x000008, "Wrong alignment on UChatColorSchemeDataAsset");
static_assert(sizeof(UChatColorSchemeDataAsset) == 0x000150, "Wrong size on UChatColorSchemeDataAsset");
static_assert(offsetof(UChatColorSchemeDataAsset, ChatColorData) == 0x000030, "Member 'UChatColorSchemeDataAsset::ChatColorData' has a wrong offset!");

class USocialActionButtonStyleDataAsset final : public UDataAsset
{
public:
	struct FButtonStyle                           style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialActionButtonStyleDataAsset">();
	}
	static class USocialActionButtonStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialActionButtonStyleDataAsset>();
	}
};
static_assert(alignof(USocialActionButtonStyleDataAsset) == 0x000010, "Wrong alignment on USocialActionButtonStyleDataAsset");
static_assert(sizeof(USocialActionButtonStyleDataAsset) == 0x0003E0, "Wrong size on USocialActionButtonStyleDataAsset");
static_assert(offsetof(USocialActionButtonStyleDataAsset, style) == 0x000030, "Member 'USocialActionButtonStyleDataAsset::style' has a wrong offset!");

class USocialChatChromeColorSchemeDataAsset final : public UDataAsset
{
public:
	struct FChatChromeColorScheme                 style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChromeColorSchemeDataAsset">();
	}
	static class USocialChatChromeColorSchemeDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChromeColorSchemeDataAsset>();
	}
};
static_assert(alignof(USocialChatChromeColorSchemeDataAsset) == 0x000008, "Wrong alignment on USocialChatChromeColorSchemeDataAsset");
static_assert(sizeof(USocialChatChromeColorSchemeDataAsset) == 0x000080, "Wrong size on USocialChatChromeColorSchemeDataAsset");
static_assert(offsetof(USocialChatChromeColorSchemeDataAsset, style) == 0x000030, "Member 'USocialChatChromeColorSchemeDataAsset::style' has a wrong offset!");

class USocialChatChromeMarginsDataAsset final : public UDataAsset
{
public:
	struct FChatChromeMargins                     style;
	uint8                                         Pad_94[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChromeMarginsDataAsset">();
	}
	static class USocialChatChromeMarginsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChromeMarginsDataAsset>();
	}
};
static_assert(alignof(USocialChatChromeMarginsDataAsset) == 0x000008, "Wrong alignment on USocialChatChromeMarginsDataAsset");
static_assert(sizeof(USocialChatChromeMarginsDataAsset) == 0x000098, "Wrong size on USocialChatChromeMarginsDataAsset");
static_assert(offsetof(USocialChatChromeMarginsDataAsset, style) == 0x000030, "Member 'USocialChatChromeMarginsDataAsset::style' has a wrong offset!");

class USocialChatChromeStyleDataAsset final : public UDataAsset
{
public:
	struct FChatChromeStyle                       style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChromeStyleDataAsset">();
	}
	static class USocialChatChromeStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChromeStyleDataAsset>();
	}
};
static_assert(alignof(USocialChatChromeStyleDataAsset) == 0x000010, "Wrong alignment on USocialChatChromeStyleDataAsset");
static_assert(sizeof(USocialChatChromeStyleDataAsset) == 0x000B80, "Wrong size on USocialChatChromeStyleDataAsset");
static_assert(offsetof(USocialChatChromeStyleDataAsset, style) == 0x000030, "Member 'USocialChatChromeStyleDataAsset::style' has a wrong offset!");

class USocialChatMarkupStyleDataAsset final : public UDataAsset
{
public:
	struct FChatMarkupStyle                       style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatMarkupStyleDataAsset">();
	}
	static class USocialChatMarkupStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatMarkupStyleDataAsset>();
	}
};
static_assert(alignof(USocialChatMarkupStyleDataAsset) == 0x000010, "Wrong alignment on USocialChatMarkupStyleDataAsset");
static_assert(sizeof(USocialChatMarkupStyleDataAsset) == 0x0008E0, "Wrong size on USocialChatMarkupStyleDataAsset");
static_assert(offsetof(USocialChatMarkupStyleDataAsset, style) == 0x000030, "Member 'USocialChatMarkupStyleDataAsset::style' has a wrong offset!");

class USocialChatStyleDataAsset final : public UDataAsset
{
public:
	struct FChatStyle                             style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatStyleDataAsset">();
	}
	static class USocialChatStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatStyleDataAsset>();
	}
};
static_assert(alignof(USocialChatStyleDataAsset) == 0x000010, "Wrong alignment on USocialChatStyleDataAsset");
static_assert(sizeof(USocialChatStyleDataAsset) == 0x002010, "Wrong size on USocialChatStyleDataAsset");
static_assert(offsetof(USocialChatStyleDataAsset, style) == 0x000030, "Member 'USocialChatStyleDataAsset::style' has a wrong offset!");

class USocialCheckBoxStyleDataAsset final : public UDataAsset
{
public:
	struct FCheckBoxStyle                         style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialCheckBoxStyleDataAsset">();
	}
	static class USocialCheckBoxStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialCheckBoxStyleDataAsset>();
	}
};
static_assert(alignof(USocialCheckBoxStyleDataAsset) == 0x000010, "Wrong alignment on USocialCheckBoxStyleDataAsset");
static_assert(sizeof(USocialCheckBoxStyleDataAsset) == 0x000A40, "Wrong size on USocialCheckBoxStyleDataAsset");
static_assert(offsetof(USocialCheckBoxStyleDataAsset, style) == 0x000030, "Member 'USocialCheckBoxStyleDataAsset::style' has a wrong offset!");

class USocialFontStyleDataAsset final : public UDataAsset
{
public:
	struct FSocialFontStyle                       style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialFontStyleDataAsset">();
	}
	static class USocialFontStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialFontStyleDataAsset>();
	}
};
static_assert(alignof(USocialFontStyleDataAsset) == 0x000008, "Wrong alignment on USocialFontStyleDataAsset");
static_assert(sizeof(USocialFontStyleDataAsset) == 0x000270, "Wrong size on USocialFontStyleDataAsset");
static_assert(offsetof(USocialFontStyleDataAsset, style) == 0x000030, "Member 'USocialFontStyleDataAsset::style' has a wrong offset!");

class USocialListMarginsDataAsset final : public UDataAsset
{
public:
	struct FSocialListMargins                     style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListMarginsDataAsset">();
	}
	static class USocialListMarginsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListMarginsDataAsset>();
	}
};
static_assert(alignof(USocialListMarginsDataAsset) == 0x000008, "Wrong alignment on USocialListMarginsDataAsset");
static_assert(sizeof(USocialListMarginsDataAsset) == 0x000240, "Wrong size on USocialListMarginsDataAsset");
static_assert(offsetof(USocialListMarginsDataAsset, style) == 0x000030, "Member 'USocialListMarginsDataAsset::style' has a wrong offset!");

class USocialListStyleDataAsset final : public UDataAsset
{
public:
	struct FSocialListStyle                       style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListStyleDataAsset">();
	}
	static class USocialListStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListStyleDataAsset>();
	}
};
static_assert(alignof(USocialListStyleDataAsset) == 0x000010, "Wrong alignment on USocialListStyleDataAsset");
static_assert(sizeof(USocialListStyleDataAsset) == 0x003A90, "Wrong size on USocialListStyleDataAsset");
static_assert(offsetof(USocialListStyleDataAsset, style) == 0x000030, "Member 'USocialListStyleDataAsset::style' has a wrong offset!");

class USocialProfanityDataAsset final : public UDataAsset
{
public:
	TArray<struct FProfanityData>                 ProfanityData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialProfanityDataAsset">();
	}
	static class USocialProfanityDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialProfanityDataAsset>();
	}
};
static_assert(alignof(USocialProfanityDataAsset) == 0x000008, "Wrong alignment on USocialProfanityDataAsset");
static_assert(sizeof(USocialProfanityDataAsset) == 0x000040, "Wrong size on USocialProfanityDataAsset");
static_assert(offsetof(USocialProfanityDataAsset, ProfanityData) == 0x000030, "Member 'USocialProfanityDataAsset::ProfanityData' has a wrong offset!");

class USocialRadioBoxStyleDataAsset final : public UDataAsset
{
public:
	struct FCheckBoxStyle                         style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialRadioBoxStyleDataAsset">();
	}
	static class USocialRadioBoxStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialRadioBoxStyleDataAsset>();
	}
};
static_assert(alignof(USocialRadioBoxStyleDataAsset) == 0x000010, "Wrong alignment on USocialRadioBoxStyleDataAsset");
static_assert(sizeof(USocialRadioBoxStyleDataAsset) == 0x000A40, "Wrong size on USocialRadioBoxStyleDataAsset");
static_assert(offsetof(USocialRadioBoxStyleDataAsset, style) == 0x000030, "Member 'USocialRadioBoxStyleDataAsset::style' has a wrong offset!");

class USocialScrollBarStyleDataAsset final : public UDataAsset
{
public:
	struct FScrollBarStyle                        style;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialScrollBarStyleDataAsset">();
	}
	static class USocialScrollBarStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialScrollBarStyleDataAsset>();
	}
};
static_assert(alignof(USocialScrollBarStyleDataAsset) == 0x000010, "Wrong alignment on USocialScrollBarStyleDataAsset");
static_assert(sizeof(USocialScrollBarStyleDataAsset) == 0x000710, "Wrong size on USocialScrollBarStyleDataAsset");
static_assert(offsetof(USocialScrollBarStyleDataAsset, style) == 0x000030, "Member 'USocialScrollBarStyleDataAsset::style' has a wrong offset!");

class USocialSoundSchemaDataAsset final : public UDataAsset
{
public:
	struct FSocialSoundSchema                     SoundSchema;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialSoundSchemaDataAsset">();
	}
	static class USocialSoundSchemaDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialSoundSchemaDataAsset>();
	}
};
static_assert(alignof(USocialSoundSchemaDataAsset) == 0x000008, "Wrong alignment on USocialSoundSchemaDataAsset");
static_assert(sizeof(USocialSoundSchemaDataAsset) == 0x000078, "Wrong size on USocialSoundSchemaDataAsset");
static_assert(offsetof(USocialSoundSchemaDataAsset, SoundSchema) == 0x000030, "Member 'USocialSoundSchemaDataAsset::SoundSchema' has a wrong offset!");

class alignas(0x10) USocialStyleDataAsset final : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*              SmallFontStyle;
	class USocialFontStyleDataAsset*              NormalFontStyle;
	class USocialFontStyleDataAsset*              LargeFontStyle;
	class USocialFontStyleDataAsset*              ChatFontStyle;
	class USocialListStyleDataAsset*              SocialListStyle;
	class USocialListMarginsDataAsset*            SocialListMargins;
	class USocialChatStyleDataAsset*              ChatStyle;
	class USocialChatChromeStyleDataAsset*        ChatChromeStyle;
	class USocialChatChromeMarginsDataAsset*      ChatChromeMargins;
	class USocialChatChromeColorSchemeDataAsset*  ChatChromeColorScheme;
	class UChatColorSchemeDataAsset*              ChatColorScheme;
	class USocialSoundSchemaDataAsset*            SoundSchema;
	class USocialActionButtonStyleDataAsset*      ActionButtonStyle;
	class USocialCheckBoxStyleDataAsset*          CheckBoxStyle;
	class USocialRadioBoxStyleDataAsset*          RadioBoxStyle;
	class USocialScrollBarStyleDataAsset*         ScrollBoxStyle;
	class USocialChatMarkupStyleDataAsset*        MarkupStyle;
	class USocialProfanityDataAsset*              ProfanityDataAsset;
	uint8                                         Pad_C0[0x9A30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialStyleDataAsset">();
	}
	static class USocialStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialStyleDataAsset>();
	}
};
static_assert(alignof(USocialStyleDataAsset) == 0x000010, "Wrong alignment on USocialStyleDataAsset");
static_assert(sizeof(USocialStyleDataAsset) == 0x009AF0, "Wrong size on USocialStyleDataAsset");
static_assert(offsetof(USocialStyleDataAsset, SmallFontStyle) == 0x000030, "Member 'USocialStyleDataAsset::SmallFontStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, NormalFontStyle) == 0x000038, "Member 'USocialStyleDataAsset::NormalFontStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, LargeFontStyle) == 0x000040, "Member 'USocialStyleDataAsset::LargeFontStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatFontStyle) == 0x000048, "Member 'USocialStyleDataAsset::ChatFontStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, SocialListStyle) == 0x000050, "Member 'USocialStyleDataAsset::SocialListStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, SocialListMargins) == 0x000058, "Member 'USocialStyleDataAsset::SocialListMargins' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatStyle) == 0x000060, "Member 'USocialStyleDataAsset::ChatStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatChromeStyle) == 0x000068, "Member 'USocialStyleDataAsset::ChatChromeStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatChromeMargins) == 0x000070, "Member 'USocialStyleDataAsset::ChatChromeMargins' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatChromeColorScheme) == 0x000078, "Member 'USocialStyleDataAsset::ChatChromeColorScheme' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ChatColorScheme) == 0x000080, "Member 'USocialStyleDataAsset::ChatColorScheme' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, SoundSchema) == 0x000088, "Member 'USocialStyleDataAsset::SoundSchema' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ActionButtonStyle) == 0x000090, "Member 'USocialStyleDataAsset::ActionButtonStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, CheckBoxStyle) == 0x000098, "Member 'USocialStyleDataAsset::CheckBoxStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, RadioBoxStyle) == 0x0000A0, "Member 'USocialStyleDataAsset::RadioBoxStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ScrollBoxStyle) == 0x0000A8, "Member 'USocialStyleDataAsset::ScrollBoxStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, MarkupStyle) == 0x0000B0, "Member 'USocialStyleDataAsset::MarkupStyle' has a wrong offset!");
static_assert(offsetof(USocialStyleDataAsset, ProfanityDataAsset) == 0x0000B8, "Member 'USocialStyleDataAsset::ProfanityDataAsset' has a wrong offset!");

}
