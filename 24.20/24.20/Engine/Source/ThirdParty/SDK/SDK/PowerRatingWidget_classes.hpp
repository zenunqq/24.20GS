#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPowerRatingWidget_C final : public UFortPlayerPowerRating
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       BaseRatingValue;
	class UCommonTextBlock*                       BaseRatingValue_Large;
	class UImage*                                 BuffedRatingOuterGlow;
	class UHomebaseRatingBar_C*                   HomebaseRatingBar;
	class UImage*                                 Image_Power;
	class UCommonWidgetSwitcherLegacy*            ModeTypeSwitcher;
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
	uint8                                         Pad_32D[0x3];
	double                                        InterpDuration;
	class USoundBase*                             PowerIncreasedSound;
	int32                                         Power_Rating_Num;

public:
	void Construct();
	void ExecuteUbergraph_PowerRatingWidget(int32 EntryPoint);
	void OnBasePowerRatingUpdated(int32 BasePowerRating);
	void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress);
	void OnTeamMembershipChanged();
	void OnTeamPowerRatingUpdated(int32 TeamPowerRating);
	void PreConstruct(bool IsDesignTime);
	void UpdateWidgetState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PowerRatingWidget_C">();
	}
	static class UPowerRatingWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPowerRatingWidget_C>();
	}
};
static_assert(alignof(UPowerRatingWidget_C) == 0x000008, "Wrong alignment on UPowerRatingWidget_C");
static_assert(sizeof(UPowerRatingWidget_C) == 0x000348, "Wrong size on UPowerRatingWidget_C");
static_assert(offsetof(UPowerRatingWidget_C, UberGraphFrame) == 0x0002B8, "Member 'UPowerRatingWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, BaseRatingValue) == 0x0002C0, "Member 'UPowerRatingWidget_C::BaseRatingValue' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, BaseRatingValue_Large) == 0x0002C8, "Member 'UPowerRatingWidget_C::BaseRatingValue_Large' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, BuffedRatingOuterGlow) == 0x0002D0, "Member 'UPowerRatingWidget_C::BuffedRatingOuterGlow' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, HomebaseRatingBar) == 0x0002D8, "Member 'UPowerRatingWidget_C::HomebaseRatingBar' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, Image_Power) == 0x0002E0, "Member 'UPowerRatingWidget_C::Image_Power' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, ModeTypeSwitcher) == 0x0002E8, "Member 'UPowerRatingWidget_C::ModeTypeSwitcher' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, OversizedMode) == 0x0002F0, "Member 'UPowerRatingWidget_C::OversizedMode' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, PowerIconGlow) == 0x0002F8, "Member 'UPowerRatingWidget_C::PowerIconGlow' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, Rating_Glow_Large) == 0x000300, "Member 'UPowerRatingWidget_C::Rating_Glow_Large' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, RatingBar) == 0x000308, "Member 'UPowerRatingWidget_C::RatingBar' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, RegularMode) == 0x000310, "Member 'UPowerRatingWidget_C::RegularMode' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, TeamRatingValue) == 0x000318, "Member 'UPowerRatingWidget_C::TeamRatingValue' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, TeamRatingValue_Large) == 0x000320, "Member 'UPowerRatingWidget_C::TeamRatingValue_Large' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, ShowDualPower) == 0x000328, "Member 'UPowerRatingWidget_C::ShowDualPower' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, ShowProgress) == 0x000329, "Member 'UPowerRatingWidget_C::ShowProgress' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, ShowGlow) == 0x00032A, "Member 'UPowerRatingWidget_C::ShowGlow' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, UseLargeStyle) == 0x00032B, "Member 'UPowerRatingWidget_C::UseLargeStyle' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, UseOversizedMode) == 0x00032C, "Member 'UPowerRatingWidget_C::UseOversizedMode' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, InterpDuration) == 0x000330, "Member 'UPowerRatingWidget_C::InterpDuration' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, PowerIncreasedSound) == 0x000338, "Member 'UPowerRatingWidget_C::PowerIncreasedSound' has a wrong offset!");
static_assert(offsetof(UPowerRatingWidget_C, Power_Rating_Num) == 0x000340, "Member 'UPowerRatingWidget_C::Power_Rating_Num' has a wrong offset!");

}
