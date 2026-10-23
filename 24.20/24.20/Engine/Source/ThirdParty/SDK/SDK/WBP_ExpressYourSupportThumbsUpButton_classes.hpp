#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_ExpressYourSupportThumbsUpButton_C final : public UFortExpressYourSupportThumbsUpButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       UnhoveredToggleOff;
	class UWidgetAnimation*                       UnhoveredToggleOn;
	class UWidgetAnimation*                       UnhoverToggledOff;
	class UWidgetAnimation*                       HoverToggledOff;
	class UWidgetAnimation*                       UnhoverToggledOn;
	class UWidgetAnimation*                       HoverToggledOn;
	class UWidgetAnimation*                       HoveredToggleOff;
	class UWidgetAnimation*                       HoveredToggleOn;
	class UBorder*                                Border_Background;
	class UImage*                                 Image_FavoriteIcon;
	class UImage*                                 Image_Pulse;
	class USizeBox*                               SizeBox_0;
	class UWidgetSwitcher*                        TextSwitcher;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton(int32 EntryPoint);
	void SetButtonHeight(bool IsTouch);
	void StopHoveringAnimations();
	void StopTogglingAnimations();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ExpressYourSupportThumbsUpButton_C">();
	}
	static class UWBP_ExpressYourSupportThumbsUpButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ExpressYourSupportThumbsUpButton_C>();
	}
};
static_assert(alignof(UWBP_ExpressYourSupportThumbsUpButton_C) == 0x000010, "Wrong alignment on UWBP_ExpressYourSupportThumbsUpButton_C");
static_assert(sizeof(UWBP_ExpressYourSupportThumbsUpButton_C) == 0x0014E0, "Wrong size on UWBP_ExpressYourSupportThumbsUpButton_C");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, UberGraphFrame) == 0x001470, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, UnhoveredToggleOff) == 0x001478, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::UnhoveredToggleOff' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, UnhoveredToggleOn) == 0x001480, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::UnhoveredToggleOn' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, UnhoverToggledOff) == 0x001488, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::UnhoverToggledOff' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, HoverToggledOff) == 0x001490, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::HoverToggledOff' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, UnhoverToggledOn) == 0x001498, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::UnhoverToggledOn' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, HoverToggledOn) == 0x0014A0, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::HoverToggledOn' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, HoveredToggleOff) == 0x0014A8, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::HoveredToggleOff' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, HoveredToggleOn) == 0x0014B0, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::HoveredToggleOn' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, Border_Background) == 0x0014B8, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::Border_Background' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, Image_FavoriteIcon) == 0x0014C0, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::Image_FavoriteIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, Image_Pulse) == 0x0014C8, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::Image_Pulse' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, SizeBox_0) == 0x0014D0, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportThumbsUpButton_C, TextSwitcher) == 0x0014D8, "Member 'UWBP_ExpressYourSupportThumbsUpButton_C::TextSwitcher' has a wrong offset!");

}
