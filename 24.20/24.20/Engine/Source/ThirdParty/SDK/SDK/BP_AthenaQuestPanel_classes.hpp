#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBP_AthenaQuestPanel_C final : public UAthenaFullScreenQuestMapPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UBackgroundBlur*                        BackgroundBlur_0;
	class UBackgroundBlur*                        BackgroundBlur_176;
	class UImage*                                 Image_145;
	class UImage*                                 ImageQuestVignette;
	class UImage*                                 MapFalloff;
	class USafeZone*                              SafeZone_0;
	class USafeZone*                              SafeZone_12;
	class USpacer*                                Spacer_RightCompensation;
	class UWBP_QuestScreen_PlayerProfileAndXPBar_C* WBP_QuestScreen_PlayerProfileAndXPBar;
	class UObject*                                CurrentWidget;
	bool                                          ShouldHideXPBar;
	uint8                                         Pad_569[0x3];
	struct FMargin                                TopBarPadding_Frontend;
	struct FMargin                                TopBarPadding_InGame;

public:
	void BP_OnActivated();
	void Construct();
	void ExecuteUbergraph_BP_AthenaQuestPanel(int32 EntryPoint);
	void OnUpdateScrollPosition(class UWidget* WidgetToScroll);
	void SetMobileVisuals();
	void SetXPBarVisibility(bool ShouldHide);
	void UpdateXPBarCollapsedState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaQuestPanel_C">();
	}
	static class UBP_AthenaQuestPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaQuestPanel_C>();
	}
};
static_assert(alignof(UBP_AthenaQuestPanel_C) == 0x000008, "Wrong alignment on UBP_AthenaQuestPanel_C");
static_assert(sizeof(UBP_AthenaQuestPanel_C) == 0x000590, "Wrong size on UBP_AthenaQuestPanel_C");
static_assert(offsetof(UBP_AthenaQuestPanel_C, UberGraphFrame) == 0x000508, "Member 'UBP_AthenaQuestPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, Intro) == 0x000510, "Member 'UBP_AthenaQuestPanel_C::Intro' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, BackgroundBlur_0) == 0x000518, "Member 'UBP_AthenaQuestPanel_C::BackgroundBlur_0' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, BackgroundBlur_176) == 0x000520, "Member 'UBP_AthenaQuestPanel_C::BackgroundBlur_176' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, Image_145) == 0x000528, "Member 'UBP_AthenaQuestPanel_C::Image_145' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, ImageQuestVignette) == 0x000530, "Member 'UBP_AthenaQuestPanel_C::ImageQuestVignette' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, MapFalloff) == 0x000538, "Member 'UBP_AthenaQuestPanel_C::MapFalloff' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, SafeZone_0) == 0x000540, "Member 'UBP_AthenaQuestPanel_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, SafeZone_12) == 0x000548, "Member 'UBP_AthenaQuestPanel_C::SafeZone_12' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, Spacer_RightCompensation) == 0x000550, "Member 'UBP_AthenaQuestPanel_C::Spacer_RightCompensation' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, WBP_QuestScreen_PlayerProfileAndXPBar) == 0x000558, "Member 'UBP_AthenaQuestPanel_C::WBP_QuestScreen_PlayerProfileAndXPBar' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, CurrentWidget) == 0x000560, "Member 'UBP_AthenaQuestPanel_C::CurrentWidget' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, ShouldHideXPBar) == 0x000568, "Member 'UBP_AthenaQuestPanel_C::ShouldHideXPBar' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, TopBarPadding_Frontend) == 0x00056C, "Member 'UBP_AthenaQuestPanel_C::TopBarPadding_Frontend' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanel_C, TopBarPadding_InGame) == 0x00057C, "Member 'UBP_AthenaQuestPanel_C::TopBarPadding_InGame' has a wrong offset!");

}
