#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UMoonbeam_PowerRatingWidget_C final : public UFortPlayerPowerRating
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       BaseRatingValue;
	class UCommonTextBlock*                       BaseRatingValue_Large;
	class UImage*                                 BuffedRatingOuterGlow;
	class UHomebaseRatingBar_C*                   HomebaseRatingBar;
	class UImage*                                 Image_Power;
	class UCommonWidgetSwitcherLegacy*            ModeTypeSwitcher;
	class UImage*                                 Moonbeam_Power_Back;
	class UVerticalBox*                           OversizedMode;
	class UImage*                                 PowerIconGlow;
	class UImage*                                 Rating_Glow_Large;
	class USizeBox*                               RatingBar;
	class UHorizontalBox*                         RegularMode;
	class UCommonNumericTextBlock*                TeamRatingValue;
	class UCommonNumericTextBlock*                TeamRatingValue_Large;
	bool                                          ShowDualPower;
	bool                                          ShowProgress;
	bool                                          ShowGlow;
	bool                                          UseLargeStyle;
	bool                                          UseOversizedMode;
	uint8                                         Pad_335[0x3];
	double                                        InterpDuration;
	class USoundBase*                             PowerIncreasedSound;
	int32                                         Power_Rating_Num;
	struct FLinearColor                           PowerBackingColor;
	struct FSlateColor                            FontColor;

public:
	void Construct();
	void ExecuteUbergraph_Moonbeam_PowerRatingWidget(int32 EntryPoint);
	void OnBasePowerRatingUpdated(int32 BasePowerRating);
	void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress);
	void OnTeamMembershipChanged();
	void OnTeamPowerRatingUpdated(int32 TeamPowerRating);
	void PreConstruct(bool IsDesignTime);
	void SetBackgroundColor(const struct FLinearColor& NewColor);
	void UpdateWidgetState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Moonbeam_PowerRatingWidget_C">();
	}
	static class UMoonbeam_PowerRatingWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoonbeam_PowerRatingWidget_C>();
	}
};
static_assert(alignof(UMoonbeam_PowerRatingWidget_C) == 0x000008, "Wrong alignment on UMoonbeam_PowerRatingWidget_C");
static_assert(sizeof(UMoonbeam_PowerRatingWidget_C) == 0x000370, "Wrong size on UMoonbeam_PowerRatingWidget_C");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, UberGraphFrame) == 0x0002B8, "Member 'UMoonbeam_PowerRatingWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, BaseRatingValue) == 0x0002C0, "Member 'UMoonbeam_PowerRatingWidget_C::BaseRatingValue' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, BaseRatingValue_Large) == 0x0002C8, "Member 'UMoonbeam_PowerRatingWidget_C::BaseRatingValue_Large' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, BuffedRatingOuterGlow) == 0x0002D0, "Member 'UMoonbeam_PowerRatingWidget_C::BuffedRatingOuterGlow' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, HomebaseRatingBar) == 0x0002D8, "Member 'UMoonbeam_PowerRatingWidget_C::HomebaseRatingBar' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, Image_Power) == 0x0002E0, "Member 'UMoonbeam_PowerRatingWidget_C::Image_Power' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, ModeTypeSwitcher) == 0x0002E8, "Member 'UMoonbeam_PowerRatingWidget_C::ModeTypeSwitcher' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, Moonbeam_Power_Back) == 0x0002F0, "Member 'UMoonbeam_PowerRatingWidget_C::Moonbeam_Power_Back' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, OversizedMode) == 0x0002F8, "Member 'UMoonbeam_PowerRatingWidget_C::OversizedMode' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, PowerIconGlow) == 0x000300, "Member 'UMoonbeam_PowerRatingWidget_C::PowerIconGlow' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, Rating_Glow_Large) == 0x000308, "Member 'UMoonbeam_PowerRatingWidget_C::Rating_Glow_Large' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, RatingBar) == 0x000310, "Member 'UMoonbeam_PowerRatingWidget_C::RatingBar' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, RegularMode) == 0x000318, "Member 'UMoonbeam_PowerRatingWidget_C::RegularMode' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, TeamRatingValue) == 0x000320, "Member 'UMoonbeam_PowerRatingWidget_C::TeamRatingValue' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, TeamRatingValue_Large) == 0x000328, "Member 'UMoonbeam_PowerRatingWidget_C::TeamRatingValue_Large' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, ShowDualPower) == 0x000330, "Member 'UMoonbeam_PowerRatingWidget_C::ShowDualPower' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, ShowProgress) == 0x000331, "Member 'UMoonbeam_PowerRatingWidget_C::ShowProgress' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, ShowGlow) == 0x000332, "Member 'UMoonbeam_PowerRatingWidget_C::ShowGlow' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, UseLargeStyle) == 0x000333, "Member 'UMoonbeam_PowerRatingWidget_C::UseLargeStyle' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, UseOversizedMode) == 0x000334, "Member 'UMoonbeam_PowerRatingWidget_C::UseOversizedMode' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, InterpDuration) == 0x000338, "Member 'UMoonbeam_PowerRatingWidget_C::InterpDuration' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, PowerIncreasedSound) == 0x000340, "Member 'UMoonbeam_PowerRatingWidget_C::PowerIncreasedSound' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, Power_Rating_Num) == 0x000348, "Member 'UMoonbeam_PowerRatingWidget_C::Power_Rating_Num' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, PowerBackingColor) == 0x00034C, "Member 'UMoonbeam_PowerRatingWidget_C::PowerBackingColor' has a wrong offset!");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, FontColor) == 0x00035C, "Member 'UMoonbeam_PowerRatingWidget_C::FontColor' has a wrong offset!");

}
