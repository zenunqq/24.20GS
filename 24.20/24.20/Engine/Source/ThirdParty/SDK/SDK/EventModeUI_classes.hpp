#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFocusButton final : public UBacchusActionButton
{
public:
	class UPaperSprite*                           StartFocusingSprite;
	class UPaperSprite*                           StopFocusingSprite;

public:
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FocusButton">();
	}
	static class UFocusButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFocusButton>();
	}
};
static_assert(alignof(UFocusButton) == 0x000008, "Wrong alignment on UFocusButton");
static_assert(sizeof(UFocusButton) == 0x0003E8, "Wrong size on UFocusButton");
static_assert(offsetof(UFocusButton, StartFocusingSprite) == 0x0003D8, "Member 'UFocusButton::StartFocusingSprite' has a wrong offset!");
static_assert(offsetof(UFocusButton, StopFocusingSprite) == 0x0003E0, "Member 'UFocusButton::StopFocusingSprite' has a wrong offset!");

class UFortEventModeEmotesWidget final : public UFortHUDElementWidget
{
public:
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> Emote1;
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> Emote2;
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> Emote3;
	TArray<TSoftObjectPtr<class UFortMontageItemDefinitionBase>> RandomEmotes;
	uint8                                         Pad_358[0x8];
	class URichTextBlock*                         Text_Emote1;
	class URichTextBlock*                         Text_Emote2;
	class URichTextBlock*                         Text_Emote3;
	class URichTextBlock*                         Text_EmoteRandom;

public:
	void OnFocusAvailableChanged(bool bIsFocusAvailable);
	void OnFocusStateChanged(bool bIsFocusing);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortEventModeEmotesWidget">();
	}
	static class UFortEventModeEmotesWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortEventModeEmotesWidget>();
	}
};
static_assert(alignof(UFortEventModeEmotesWidget) == 0x000008, "Wrong alignment on UFortEventModeEmotesWidget");
static_assert(sizeof(UFortEventModeEmotesWidget) == 0x000380, "Wrong size on UFortEventModeEmotesWidget");
static_assert(offsetof(UFortEventModeEmotesWidget, Emote1) == 0x0002D0, "Member 'UFortEventModeEmotesWidget::Emote1' has a wrong offset!");
static_assert(offsetof(UFortEventModeEmotesWidget, Emote2) == 0x0002F8, "Member 'UFortEventModeEmotesWidget::Emote2' has a wrong offset!");
static_assert(offsetof(UFortEventModeEmotesWidget, Emote3) == 0x000320, "Member 'UFortEventModeEmotesWidget::Emote3' has a wrong offset!");
static_assert(offsetof(UFortEventModeEmotesWidget, RandomEmotes) == 0x000348, "Member 'UFortEventModeEmotesWidget::RandomEmotes' has a wrong offset!");
static_assert(offsetof(UFortEventModeEmotesWidget, Text_Emote1) == 0x000360, "Member 'UFortEventModeEmotesWidget::Text_Emote1' has a wrong offset!");
static_assert(offsetof(UFortEventModeEmotesWidget, Text_Emote2) == 0x000368, "Member 'UFortEventModeEmotesWidget::Text_Emote2' has a wrong offset!");
static_assert(offsetof(UFortEventModeEmotesWidget, Text_Emote3) == 0x000370, "Member 'UFortEventModeEmotesWidget::Text_Emote3' has a wrong offset!");
static_assert(offsetof(UFortEventModeEmotesWidget, Text_EmoteRandom) == 0x000378, "Member 'UFortEventModeEmotesWidget::Text_EmoteRandom' has a wrong offset!");

class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior
{
public:
	class UPaperSprite*                           StopFocusingSprite;

public:
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionButtonBehavior_Focus">();
	}
	static class UFortMobileActionButtonBehavior_Focus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionButtonBehavior_Focus>();
	}
};
static_assert(alignof(UFortMobileActionButtonBehavior_Focus) == 0x000008, "Wrong alignment on UFortMobileActionButtonBehavior_Focus");
static_assert(sizeof(UFortMobileActionButtonBehavior_Focus) == 0x000118, "Wrong size on UFortMobileActionButtonBehavior_Focus");
static_assert(offsetof(UFortMobileActionButtonBehavior_Focus, StopFocusingSprite) == 0x000110, "Member 'UFortMobileActionButtonBehavior_Focus::StopFocusingSprite' has a wrong offset!");

}
