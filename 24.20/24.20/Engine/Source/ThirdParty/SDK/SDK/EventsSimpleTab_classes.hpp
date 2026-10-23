#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UEventsSimpleTab_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UCommonTextBlock*                       CenterButtonTextWidget;
	class UCommonTextBlock*                       CenterButtonTextWidget_White;
	class UCommonBorder*                          CommonBorder_VariablePadding;
	class UImage*                                 Image_ButtonTop;
	class UOverlay*                               Overlay_ButtonBG;
	bool                                          ToUpper;
	bool                                          XL;
	uint8                                         Pad_1472[0x6];
	class FText                                   ButtonNameText;
	TMap<class FString, struct FLinearColor>      Color;
	struct FLinearColor                           GamepadButtonTextColor;
	struct FLinearColor                           DefaultTextColor;
	struct FVector2D                              ButtonPadding;
	bool                                          VisualSelectionState;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_EventsSimpleTab(int32 EntryPoint);
	void OnInitialized();
	void OnSelectedChangedEvent(class UCommonButtonLegacy* Button, bool Selected_0);
	void PreConstruct(bool IsDesignTime);
	void UpdateColor(const class FString& ParameterName, const struct FLinearColor& New_Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventsSimpleTab_C">();
	}
	static class UEventsSimpleTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventsSimpleTab_C>();
	}
};
static_assert(alignof(UEventsSimpleTab_C) == 0x000010, "Wrong alignment on UEventsSimpleTab_C");
static_assert(sizeof(UEventsSimpleTab_C) == 0x001520, "Wrong size on UEventsSimpleTab_C");
static_assert(offsetof(UEventsSimpleTab_C, UberGraphFrame) == 0x001430, "Member 'UEventsSimpleTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, Selected) == 0x001438, "Member 'UEventsSimpleTab_C::Selected' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, Hovered) == 0x001440, "Member 'UEventsSimpleTab_C::Hovered' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, CenterButtonTextWidget) == 0x001448, "Member 'UEventsSimpleTab_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, CenterButtonTextWidget_White) == 0x001450, "Member 'UEventsSimpleTab_C::CenterButtonTextWidget_White' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, CommonBorder_VariablePadding) == 0x001458, "Member 'UEventsSimpleTab_C::CommonBorder_VariablePadding' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, Image_ButtonTop) == 0x001460, "Member 'UEventsSimpleTab_C::Image_ButtonTop' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, Overlay_ButtonBG) == 0x001468, "Member 'UEventsSimpleTab_C::Overlay_ButtonBG' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, ToUpper) == 0x001470, "Member 'UEventsSimpleTab_C::ToUpper' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, XL) == 0x001471, "Member 'UEventsSimpleTab_C::XL' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, ButtonNameText) == 0x001478, "Member 'UEventsSimpleTab_C::ButtonNameText' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, Color) == 0x001490, "Member 'UEventsSimpleTab_C::Color' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, GamepadButtonTextColor) == 0x0014E0, "Member 'UEventsSimpleTab_C::GamepadButtonTextColor' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, DefaultTextColor) == 0x0014F0, "Member 'UEventsSimpleTab_C::DefaultTextColor' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, ButtonPadding) == 0x001500, "Member 'UEventsSimpleTab_C::ButtonPadding' has a wrong offset!");
static_assert(offsetof(UEventsSimpleTab_C, VisualSelectionState) == 0x001510, "Member 'UEventsSimpleTab_C::VisualSelectionState' has a wrong offset!");

}
