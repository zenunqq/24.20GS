#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_ExpressYourSupportFavoriteButton_C final : public UFortExpressYourSupportFavoriteButton
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

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_WBP_ExpressYourSupportFavoriteButton(int32 EntryPoint);
	void SetButtonHeight(bool IsTouch);
	void StopHoveringAnimations();
	void StopTogglingAnimations();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ExpressYourSupportFavoriteButton_C">();
	}
	static class UWBP_ExpressYourSupportFavoriteButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ExpressYourSupportFavoriteButton_C>();
	}
};
static_assert(alignof(UWBP_ExpressYourSupportFavoriteButton_C) == 0x000010, "Wrong alignment on UWBP_ExpressYourSupportFavoriteButton_C");
static_assert(sizeof(UWBP_ExpressYourSupportFavoriteButton_C) == 0x0014D0, "Wrong size on UWBP_ExpressYourSupportFavoriteButton_C");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, UberGraphFrame) == 0x001460, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, UnhoveredToggleOff) == 0x001468, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::UnhoveredToggleOff' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, UnhoveredToggleOn) == 0x001470, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::UnhoveredToggleOn' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, UnhoverToggledOff) == 0x001478, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::UnhoverToggledOff' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, HoverToggledOff) == 0x001480, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::HoverToggledOff' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, UnhoverToggledOn) == 0x001488, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::UnhoverToggledOn' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, HoverToggledOn) == 0x001490, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::HoverToggledOn' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, HoveredToggleOff) == 0x001498, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::HoveredToggleOff' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, HoveredToggleOn) == 0x0014A0, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::HoveredToggleOn' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, Border_Background) == 0x0014A8, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::Border_Background' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, Image_FavoriteIcon) == 0x0014B0, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::Image_FavoriteIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, Image_Pulse) == 0x0014B8, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::Image_Pulse' has a wrong offset!");
static_assert(offsetof(UWBP_ExpressYourSupportFavoriteButton_C, SizeBox_0) == 0x0014C0, "Member 'UWBP_ExpressYourSupportFavoriteButton_C::SizeBox_0' has a wrong offset!");

}
