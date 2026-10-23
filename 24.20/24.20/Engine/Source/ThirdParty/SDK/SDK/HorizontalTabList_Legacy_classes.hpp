#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UHorizontalTabList_Legacy_C final : public UFortTabListWidgetBase_Legacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 ImageGamepadKeyPrompt;
	class UImage*                                 ImageHorizRule;
	class UCommonActionWidget*                    NextTabAction;
	class USizeBox*                               NextTabActionWrapper;
	class UOverlay*                               Overlay_Container;
	class UCommonActionWidget*                    PreviousTabAction;
	class USizeBox*                               PreviousTabActionWrapper;
	class UHorizontalBox*                         TabButtonBox;
	struct FMargin                                TabButtonPadding;
	class UClass*                                 ButtonStyle;
	bool                                          UseButtonStyle;
	bool                                          ShowGamePadInputPrompt;
	bool                                          ShowRail;
	uint8                                         Pad_483[0x1];
	int32                                         MinTabWidth;
	bool                                          ForceTabLabelsCollapsed;
	bool                                          ForceTabIconsCollapsed;
	uint8                                         Pad_48A[0x6];
	TMulticastInlineDelegate<void()>              RefreshGamepad;
	class UClass*                                 DebugButtonTypeDisplay;
	int32                                         DebugTabCount;
	uint8                                         Pad_4AC[0x4];
	double                                        PreviousTabActionPaddingRight;
	double                                        NextTabActionPaddingLeft;

public:
	void Construct();
	void CustomEvent_0(class FName TabId);
	void CustomEvent_1(ESlateVisibility InVisibility);
	void DebugCreateTabsForDesigner();
	void ExecuteUbergraph_HorizontalTabList_Legacy(int32 EntryPoint);
	void HandleOnInputMethodChanged(ECommonInputType bNewInputType);
	void HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton);
	void PreConstruct(bool IsDesignTime);
	void Previous_Visibility();
	void SetVerticalAlignment(EVerticalAlignment FillVertically);
	void UpdateGamepadKeyVisibility();
	void UpdateTabStyles(class UCommonButtonBase* ButtonWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HorizontalTabList_Legacy_C">();
	}
	static class UHorizontalTabList_Legacy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHorizontalTabList_Legacy_C>();
	}
};
static_assert(alignof(UHorizontalTabList_Legacy_C) == 0x000008, "Wrong alignment on UHorizontalTabList_Legacy_C");
static_assert(sizeof(UHorizontalTabList_Legacy_C) == 0x0004C0, "Wrong size on UHorizontalTabList_Legacy_C");
static_assert(offsetof(UHorizontalTabList_Legacy_C, UberGraphFrame) == 0x000420, "Member 'UHorizontalTabList_Legacy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, ImageGamepadKeyPrompt) == 0x000428, "Member 'UHorizontalTabList_Legacy_C::ImageGamepadKeyPrompt' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, ImageHorizRule) == 0x000430, "Member 'UHorizontalTabList_Legacy_C::ImageHorizRule' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, NextTabAction) == 0x000438, "Member 'UHorizontalTabList_Legacy_C::NextTabAction' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, NextTabActionWrapper) == 0x000440, "Member 'UHorizontalTabList_Legacy_C::NextTabActionWrapper' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, Overlay_Container) == 0x000448, "Member 'UHorizontalTabList_Legacy_C::Overlay_Container' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, PreviousTabAction) == 0x000450, "Member 'UHorizontalTabList_Legacy_C::PreviousTabAction' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, PreviousTabActionWrapper) == 0x000458, "Member 'UHorizontalTabList_Legacy_C::PreviousTabActionWrapper' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, TabButtonBox) == 0x000460, "Member 'UHorizontalTabList_Legacy_C::TabButtonBox' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, TabButtonPadding) == 0x000468, "Member 'UHorizontalTabList_Legacy_C::TabButtonPadding' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, ButtonStyle) == 0x000478, "Member 'UHorizontalTabList_Legacy_C::ButtonStyle' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, UseButtonStyle) == 0x000480, "Member 'UHorizontalTabList_Legacy_C::UseButtonStyle' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, ShowGamePadInputPrompt) == 0x000481, "Member 'UHorizontalTabList_Legacy_C::ShowGamePadInputPrompt' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, ShowRail) == 0x000482, "Member 'UHorizontalTabList_Legacy_C::ShowRail' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, MinTabWidth) == 0x000484, "Member 'UHorizontalTabList_Legacy_C::MinTabWidth' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, ForceTabLabelsCollapsed) == 0x000488, "Member 'UHorizontalTabList_Legacy_C::ForceTabLabelsCollapsed' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, ForceTabIconsCollapsed) == 0x000489, "Member 'UHorizontalTabList_Legacy_C::ForceTabIconsCollapsed' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, RefreshGamepad) == 0x000490, "Member 'UHorizontalTabList_Legacy_C::RefreshGamepad' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, DebugButtonTypeDisplay) == 0x0004A0, "Member 'UHorizontalTabList_Legacy_C::DebugButtonTypeDisplay' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, DebugTabCount) == 0x0004A8, "Member 'UHorizontalTabList_Legacy_C::DebugTabCount' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, PreviousTabActionPaddingRight) == 0x0004B0, "Member 'UHorizontalTabList_Legacy_C::PreviousTabActionPaddingRight' has a wrong offset!");
static_assert(offsetof(UHorizontalTabList_Legacy_C, NextTabActionPaddingLeft) == 0x0004B8, "Member 'UHorizontalTabList_Legacy_C::NextTabActionPaddingLeft' has a wrong offset!");

}
