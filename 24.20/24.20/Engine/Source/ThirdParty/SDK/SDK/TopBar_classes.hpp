#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UTopBar_C final : public UAthenaTopBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       IntroTabLabel;
	class UGameFeatureStatus_C*                   GameFeatureStatus_HighResTextureDownload;
	class UHorizontalBox*                         HorizontalBox_TopContent;
	class UHorizontalBox*                         MainNav;
	class USizeBox*                               MobileTabTitle;
	class USafeZone*                              SafeZone_7;
	class Uwindowchromebuttons_C*                 windowchromebuttons;

public:
	void Construct();
	void ExecuteUbergraph_TopBar(int32 EntryPoint);
	void OnMobileTabLabelChanged();
	void SetMainNavVisibility(ESlateVisibility NewVisibility);
	void SetTopTabsVisibility(ESlateVisibility NewVisibility);
	void UpdateMTXButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TopBar_C">();
	}
	static class UTopBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTopBar_C>();
	}
};
static_assert(alignof(UTopBar_C) == 0x000008, "Wrong alignment on UTopBar_C");
static_assert(sizeof(UTopBar_C) == 0x0005A0, "Wrong size on UTopBar_C");
static_assert(offsetof(UTopBar_C, UberGraphFrame) == 0x000560, "Member 'UTopBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTopBar_C, IntroTabLabel) == 0x000568, "Member 'UTopBar_C::IntroTabLabel' has a wrong offset!");
static_assert(offsetof(UTopBar_C, GameFeatureStatus_HighResTextureDownload) == 0x000570, "Member 'UTopBar_C::GameFeatureStatus_HighResTextureDownload' has a wrong offset!");
static_assert(offsetof(UTopBar_C, HorizontalBox_TopContent) == 0x000578, "Member 'UTopBar_C::HorizontalBox_TopContent' has a wrong offset!");
static_assert(offsetof(UTopBar_C, MainNav) == 0x000580, "Member 'UTopBar_C::MainNav' has a wrong offset!");
static_assert(offsetof(UTopBar_C, MobileTabTitle) == 0x000588, "Member 'UTopBar_C::MobileTabTitle' has a wrong offset!");
static_assert(offsetof(UTopBar_C, SafeZone_7) == 0x000590, "Member 'UTopBar_C::SafeZone_7' has a wrong offset!");
static_assert(offsetof(UTopBar_C, windowchromebuttons) == 0x000598, "Member 'UTopBar_C::windowchromebuttons' has a wrong offset!");

}
