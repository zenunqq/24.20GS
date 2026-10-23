#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UProgressiveItemScreen_C final : public UFortProgressiveItemScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UWidgetAnimation*                       ProgDetailsItemChange;
	class UImage*                                 BottomContentBlockerGradient;
	class UImage*                                 BottomScreenGradient;
	class UMTXButton_C*                           Button_MtxWallet;
	class UErrorInfoFlag_C*                       ErrorInfoFlag;
	class UVerticalBox*                           RightSideVertBox;
	class USizeBox*                               SizeBox_ProgressiveStageList;
	class UWBP_ContentPurchaseBlocker_C*          WBP_ContentPurchaseBlocker;
	struct FLinearColor                           BaseColor;
	struct FLinearColor                           HoverColor;
	struct FLinearColor                           SelectColor;

public:
	void BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText);
	void BP_OnActivated();
	void BP_OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs);
	void Construct();
	void ContentBlocking(bool isContentBlocked, const class FText& ContentBlockedText);
	void ExecuteUbergraph_ProgressiveItemScreen(int32 EntryPoint);
	class UWidget* Navigate_Right_from_Items_List(EUINavigation Navigation_0);
	void OnErrorStateTextUpdated(const class FText& ErrorStateText);
	void OnItemSelected();
	void OnPreviewActionButtonUpdated(const class FText& RowDisplayName);
	void OnSetIsSoloScreen(const bool bInIsSoloScreen);
	void OnUpdateSubscriptionState(const bool bSubscribed);
	void UpdateLayoutForTabs(bool bTabsVisible, double Spacing_Adjustment_For_Tabs);
	void UpdateSubscribedVisuals(bool Subscribed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveItemScreen_C">();
	}
	static class UProgressiveItemScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveItemScreen_C>();
	}
};
static_assert(alignof(UProgressiveItemScreen_C) == 0x000008, "Wrong alignment on UProgressiveItemScreen_C");
static_assert(sizeof(UProgressiveItemScreen_C) == 0x000878, "Wrong size on UProgressiveItemScreen_C");
static_assert(offsetof(UProgressiveItemScreen_C, UberGraphFrame) == 0x0007F8, "Member 'UProgressiveItemScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, Intro) == 0x000800, "Member 'UProgressiveItemScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, ProgDetailsItemChange) == 0x000808, "Member 'UProgressiveItemScreen_C::ProgDetailsItemChange' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, BottomContentBlockerGradient) == 0x000810, "Member 'UProgressiveItemScreen_C::BottomContentBlockerGradient' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, BottomScreenGradient) == 0x000818, "Member 'UProgressiveItemScreen_C::BottomScreenGradient' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, Button_MtxWallet) == 0x000820, "Member 'UProgressiveItemScreen_C::Button_MtxWallet' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, ErrorInfoFlag) == 0x000828, "Member 'UProgressiveItemScreen_C::ErrorInfoFlag' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, RightSideVertBox) == 0x000830, "Member 'UProgressiveItemScreen_C::RightSideVertBox' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, SizeBox_ProgressiveStageList) == 0x000838, "Member 'UProgressiveItemScreen_C::SizeBox_ProgressiveStageList' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, WBP_ContentPurchaseBlocker) == 0x000840, "Member 'UProgressiveItemScreen_C::WBP_ContentPurchaseBlocker' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, BaseColor) == 0x000848, "Member 'UProgressiveItemScreen_C::BaseColor' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, HoverColor) == 0x000858, "Member 'UProgressiveItemScreen_C::HoverColor' has a wrong offset!");
static_assert(offsetof(UProgressiveItemScreen_C, SelectColor) == 0x000868, "Member 'UProgressiveItemScreen_C::SelectColor' has a wrong offset!");

}
