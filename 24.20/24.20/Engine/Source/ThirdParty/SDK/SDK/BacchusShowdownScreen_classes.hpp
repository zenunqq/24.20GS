#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBacchusShowdownScreen_C final : public UFortShowdownScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UCircleArrowButton_C*                   CircleArrowButton_Left;
	class UCircleArrowButton_C*                   CircleArrowButton_Right;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_ErrorSwitcher;
	class UImage*                                 Image_BG;
	class UCommonTextBlock*                       NoTournamentsContent;
	class UOverlay*                               Overlay_NoTournamentContent;
	class USafeZone*                              SafeZone_0;
	class USafeZone*                              SafeZone_1;
	class USafeZone*                              SafeZone_2;
	class USafeZone*                              SafeZone_3;
	class USizeBox*                               SizeBox_Posters;
	class UFortSwipePanel*                        SwipePanel;
	class UOverlay*                               TournamentsContent;
	struct FSlateColor                            PrimaryColor;
	uint8                                         Pad_62C[0x4];
	class UWidget*                                SelectedTile;

public:
	void BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_BacchusShowdownScreen(int32 EntryPoint);
	void OnInputModeChanged(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void SelectedEndTournament(bool bEndIsSelected);
	void SelectedFrontTournament(bool bFrontIsSelected);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TournamentListSelect(class UWidget* CurrentWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BacchusShowdownScreen_C">();
	}
	static class UBacchusShowdownScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBacchusShowdownScreen_C>();
	}
};
static_assert(alignof(UBacchusShowdownScreen_C) == 0x000008, "Wrong alignment on UBacchusShowdownScreen_C");
static_assert(sizeof(UBacchusShowdownScreen_C) == 0x000638, "Wrong size on UBacchusShowdownScreen_C");
static_assert(offsetof(UBacchusShowdownScreen_C, UberGraphFrame) == 0x000598, "Member 'UBacchusShowdownScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, Outro) == 0x0005A0, "Member 'UBacchusShowdownScreen_C::Outro' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, Intro) == 0x0005A8, "Member 'UBacchusShowdownScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, CircleArrowButton_Left) == 0x0005B0, "Member 'UBacchusShowdownScreen_C::CircleArrowButton_Left' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, CircleArrowButton_Right) == 0x0005B8, "Member 'UBacchusShowdownScreen_C::CircleArrowButton_Right' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, CommonWidgetSwitcher_ErrorSwitcher) == 0x0005C0, "Member 'UBacchusShowdownScreen_C::CommonWidgetSwitcher_ErrorSwitcher' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, Image_BG) == 0x0005C8, "Member 'UBacchusShowdownScreen_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, NoTournamentsContent) == 0x0005D0, "Member 'UBacchusShowdownScreen_C::NoTournamentsContent' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, Overlay_NoTournamentContent) == 0x0005D8, "Member 'UBacchusShowdownScreen_C::Overlay_NoTournamentContent' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, SafeZone_0) == 0x0005E0, "Member 'UBacchusShowdownScreen_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, SafeZone_1) == 0x0005E8, "Member 'UBacchusShowdownScreen_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, SafeZone_2) == 0x0005F0, "Member 'UBacchusShowdownScreen_C::SafeZone_2' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, SafeZone_3) == 0x0005F8, "Member 'UBacchusShowdownScreen_C::SafeZone_3' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, SizeBox_Posters) == 0x000600, "Member 'UBacchusShowdownScreen_C::SizeBox_Posters' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, SwipePanel) == 0x000608, "Member 'UBacchusShowdownScreen_C::SwipePanel' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, TournamentsContent) == 0x000610, "Member 'UBacchusShowdownScreen_C::TournamentsContent' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, PrimaryColor) == 0x000618, "Member 'UBacchusShowdownScreen_C::PrimaryColor' has a wrong offset!");
static_assert(offsetof(UBacchusShowdownScreen_C, SelectedTile) == 0x000630, "Member 'UBacchusShowdownScreen_C::SelectedTile' has a wrong offset!");

}
