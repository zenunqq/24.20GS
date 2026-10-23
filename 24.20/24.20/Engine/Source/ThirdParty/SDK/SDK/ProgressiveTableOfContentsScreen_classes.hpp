#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CrewUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UProgressiveTableOfContentsScreen_C final : public UFortProgressiveTableOfContentsScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 BottomContentBlockerGradient;
	class UImage*                                 BottomScreenGradient;
	class UMTXButton_C*                           Button_MtxWallet;
	class UErrorInfoFlag_C*                       ErrorInfoFlag;
	class UCommonTextBlock*                       NoItems_HeaderText;
	class UVerticalBox*                           NoItemsMessage;
	class UVerticalBox*                           NoItemsToggleBox;
	class UProgressiveHeaderBanner_C*             ProgressiveHeaderBanner;
	class USizeBox*                               SizeBox_RightSideGatedContent;
	class UCommonTextBlock*                       Text_ProductDescription;
	class UVerticalBox*                           VB_LeftSideContent;
	class UVerticalBox*                           VBox_RightSideContent;
	class UWBP_ContentPurchaseBlocker_C*          WBP_ContentPurchaseBlocker;
	struct FSlateColor                            SubscribedTextColor;
	struct FSlateColor                            UnsubscribedTextColor;

public:
	void BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText);
	void BP_OnActivated();
	void BP_OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs);
	void BP_OnSetDescriptionText(const class FText& ProductDescription);
	void BP_OnUpdateBanner(const class FText& BannerText, const bool bAllSetsCompleted, const bool bSubscribed);
	void BP_OnUpdateErrorStateText(const class FText& ErrorStateText);
	void BP_OnUpdateNumTilesAvailable(const int32 NumTiles);
	void BP_OnUpdateSubscriptionState(const bool bSubscribed);
	void Construct();
	void ContentBlocking(bool isContentBlocked, const class FText& ContentBlockedText);
	void ExecuteUbergraph_ProgressiveTableOfContentsScreen(int32 EntryPoint);
	void No_Items_to_Show(int32 ItemsShown);
	void Update_Subscribed_Visuals(bool Subscribed);
	void UpdateLayoutForTabs(bool bTabsVisible, double Spacing_Adjustment_For_Tabs);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveTableOfContentsScreen_C">();
	}
	static class UProgressiveTableOfContentsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveTableOfContentsScreen_C>();
	}
};
static_assert(alignof(UProgressiveTableOfContentsScreen_C) == 0x000008, "Wrong alignment on UProgressiveTableOfContentsScreen_C");
static_assert(sizeof(UProgressiveTableOfContentsScreen_C) == 0x000808, "Wrong size on UProgressiveTableOfContentsScreen_C");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, UberGraphFrame) == 0x000768, "Member 'UProgressiveTableOfContentsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, Intro) == 0x000770, "Member 'UProgressiveTableOfContentsScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, BottomContentBlockerGradient) == 0x000778, "Member 'UProgressiveTableOfContentsScreen_C::BottomContentBlockerGradient' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, BottomScreenGradient) == 0x000780, "Member 'UProgressiveTableOfContentsScreen_C::BottomScreenGradient' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, Button_MtxWallet) == 0x000788, "Member 'UProgressiveTableOfContentsScreen_C::Button_MtxWallet' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, ErrorInfoFlag) == 0x000790, "Member 'UProgressiveTableOfContentsScreen_C::ErrorInfoFlag' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, NoItems_HeaderText) == 0x000798, "Member 'UProgressiveTableOfContentsScreen_C::NoItems_HeaderText' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, NoItemsMessage) == 0x0007A0, "Member 'UProgressiveTableOfContentsScreen_C::NoItemsMessage' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, NoItemsToggleBox) == 0x0007A8, "Member 'UProgressiveTableOfContentsScreen_C::NoItemsToggleBox' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, ProgressiveHeaderBanner) == 0x0007B0, "Member 'UProgressiveTableOfContentsScreen_C::ProgressiveHeaderBanner' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, SizeBox_RightSideGatedContent) == 0x0007B8, "Member 'UProgressiveTableOfContentsScreen_C::SizeBox_RightSideGatedContent' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, Text_ProductDescription) == 0x0007C0, "Member 'UProgressiveTableOfContentsScreen_C::Text_ProductDescription' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, VB_LeftSideContent) == 0x0007C8, "Member 'UProgressiveTableOfContentsScreen_C::VB_LeftSideContent' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, VBox_RightSideContent) == 0x0007D0, "Member 'UProgressiveTableOfContentsScreen_C::VBox_RightSideContent' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, WBP_ContentPurchaseBlocker) == 0x0007D8, "Member 'UProgressiveTableOfContentsScreen_C::WBP_ContentPurchaseBlocker' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, SubscribedTextColor) == 0x0007E0, "Member 'UProgressiveTableOfContentsScreen_C::SubscribedTextColor' has a wrong offset!");
static_assert(offsetof(UProgressiveTableOfContentsScreen_C, UnsubscribedTextColor) == 0x0007F4, "Member 'UProgressiveTableOfContentsScreen_C::UnsubscribedTextColor' has a wrong offset!");

}
