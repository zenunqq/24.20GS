#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UShowdownScreen_C final : public UFortShowdownScreen
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
	class USizeBox*                               SizeBox_Posters;
	class UFortSwipePanel*                        SwipePanel;
	class UOverlay*                               TournamentsContent;
	struct FSlateColor                            PrimaryColor;
	uint8                                         Pad_60C[0x4];
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
	void ExecuteUbergraph_ShowdownScreen(int32 EntryPoint);
	void OnInputModeChanged(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void SelectedEndTournament(bool bEndIsSelected);
	void SelectedFrontTournament(bool bFrontIsSelected);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TournamentListSelect(class UWidget* CurrentWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownScreen_C">();
	}
	static class UShowdownScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownScreen_C>();
	}
};
static_assert(alignof(UShowdownScreen_C) == 0x000008, "Wrong alignment on UShowdownScreen_C");
static_assert(sizeof(UShowdownScreen_C) == 0x000618, "Wrong size on UShowdownScreen_C");
static_assert(offsetof(UShowdownScreen_C, UberGraphFrame) == 0x000598, "Member 'UShowdownScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Outro) == 0x0005A0, "Member 'UShowdownScreen_C::Outro' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Intro) == 0x0005A8, "Member 'UShowdownScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, CircleArrowButton_Left) == 0x0005B0, "Member 'UShowdownScreen_C::CircleArrowButton_Left' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, CircleArrowButton_Right) == 0x0005B8, "Member 'UShowdownScreen_C::CircleArrowButton_Right' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, CommonWidgetSwitcher_ErrorSwitcher) == 0x0005C0, "Member 'UShowdownScreen_C::CommonWidgetSwitcher_ErrorSwitcher' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Image_BG) == 0x0005C8, "Member 'UShowdownScreen_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, NoTournamentsContent) == 0x0005D0, "Member 'UShowdownScreen_C::NoTournamentsContent' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Overlay_NoTournamentContent) == 0x0005D8, "Member 'UShowdownScreen_C::Overlay_NoTournamentContent' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, SizeBox_Posters) == 0x0005E0, "Member 'UShowdownScreen_C::SizeBox_Posters' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, SwipePanel) == 0x0005E8, "Member 'UShowdownScreen_C::SwipePanel' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, TournamentsContent) == 0x0005F0, "Member 'UShowdownScreen_C::TournamentsContent' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, PrimaryColor) == 0x0005F8, "Member 'UShowdownScreen_C::PrimaryColor' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, SelectedTile) == 0x000610, "Member 'UShowdownScreen_C::SelectedTile' has a wrong offset!");

}
