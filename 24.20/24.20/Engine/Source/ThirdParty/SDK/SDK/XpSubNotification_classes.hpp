#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UXpSubNotification_C final : public UXpEarnedSubNotification
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Reset;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Image_Icon;
	class UImage*                                 Image_Icon_1;
	class UImage*                                 Image_RarityColor_Glow;
	class UImage*                                 Image_Shadow;
	class UImage*                                 Image_Shadow_1;
	class UImage*                                 ImageBG_Bars;
	class UImage*                                 ImageBG_XP;
	class UCommonBorder*                          LevelUp_Header;
	class UOverlay*                               Overlay_GoldIcon;
	class UOverlay*                               Overlay_XpiCON;
	class USizeBox*                               SizeBox_LevelUP;
	class UWidgetSwitcher*                        Switcher_BG;
	class UCommonVisibilitySwitcher*              Switcher_Icons;
	class UCommonTextBlock*                       Text_RewardType;
	class UCommonTextBlock*                       Text_XpValue;
	class UWidgetSwitcher*                        WidgetSwitcher_0;
	struct FLinearColor                           BarsImageRarityGlowColor;
	struct FLinearColor                           XPImageRarityGlowColor;
	struct FLinearColor                           BarsImageBGColor;
	struct FLinearColor                           XPImageBGColor;
	struct FLinearColor                           BarsImageBGColor2;
	struct FLinearColor                           XPImageBGColor2;

public:
	void Construct();
	void ExecuteUbergraph_XpSubNotification(int32 EntryPoint);
	void FinishedXpDisplayAnim();
	void Play_Intro_Sound();
	void PreConstruct(bool IsDesignTime);
	void Reset_render_opacity();
	void SetRewardValue(int32 RewardValue, EFortEarnedSubRewardType RewardType);
	void StartNotificationIntro();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpSubNotification_C">();
	}
	static class UXpSubNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpSubNotification_C>();
	}
};
static_assert(alignof(UXpSubNotification_C) == 0x000008, "Wrong alignment on UXpSubNotification_C");
static_assert(sizeof(UXpSubNotification_C) == 0x0003B0, "Wrong size on UXpSubNotification_C");
static_assert(offsetof(UXpSubNotification_C, UberGraphFrame) == 0x0002B8, "Member 'UXpSubNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Reset) == 0x0002C0, "Member 'UXpSubNotification_C::Reset' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Intro) == 0x0002C8, "Member 'UXpSubNotification_C::Intro' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Image_Icon) == 0x0002D0, "Member 'UXpSubNotification_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Image_Icon_1) == 0x0002D8, "Member 'UXpSubNotification_C::Image_Icon_1' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Image_RarityColor_Glow) == 0x0002E0, "Member 'UXpSubNotification_C::Image_RarityColor_Glow' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Image_Shadow) == 0x0002E8, "Member 'UXpSubNotification_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Image_Shadow_1) == 0x0002F0, "Member 'UXpSubNotification_C::Image_Shadow_1' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, ImageBG_Bars) == 0x0002F8, "Member 'UXpSubNotification_C::ImageBG_Bars' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, ImageBG_XP) == 0x000300, "Member 'UXpSubNotification_C::ImageBG_XP' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, LevelUp_Header) == 0x000308, "Member 'UXpSubNotification_C::LevelUp_Header' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Overlay_GoldIcon) == 0x000310, "Member 'UXpSubNotification_C::Overlay_GoldIcon' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Overlay_XpiCON) == 0x000318, "Member 'UXpSubNotification_C::Overlay_XpiCON' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, SizeBox_LevelUP) == 0x000320, "Member 'UXpSubNotification_C::SizeBox_LevelUP' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Switcher_BG) == 0x000328, "Member 'UXpSubNotification_C::Switcher_BG' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Switcher_Icons) == 0x000330, "Member 'UXpSubNotification_C::Switcher_Icons' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Text_RewardType) == 0x000338, "Member 'UXpSubNotification_C::Text_RewardType' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, Text_XpValue) == 0x000340, "Member 'UXpSubNotification_C::Text_XpValue' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, WidgetSwitcher_0) == 0x000348, "Member 'UXpSubNotification_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, BarsImageRarityGlowColor) == 0x000350, "Member 'UXpSubNotification_C::BarsImageRarityGlowColor' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, XPImageRarityGlowColor) == 0x000360, "Member 'UXpSubNotification_C::XPImageRarityGlowColor' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, BarsImageBGColor) == 0x000370, "Member 'UXpSubNotification_C::BarsImageBGColor' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, XPImageBGColor) == 0x000380, "Member 'UXpSubNotification_C::XPImageBGColor' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, BarsImageBGColor2) == 0x000390, "Member 'UXpSubNotification_C::BarsImageBGColor2' has a wrong offset!");
static_assert(offsetof(UXpSubNotification_C, XPImageBGColor2) == 0x0003A0, "Member 'UXpSubNotification_C::XPImageBGColor2' has a wrong offset!");

}
