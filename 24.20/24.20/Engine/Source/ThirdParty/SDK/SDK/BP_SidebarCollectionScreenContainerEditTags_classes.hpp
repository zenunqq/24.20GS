#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBP_SidebarCollectionScreenContainerEditTags_C final : public UFortSidebarCollectionScreenContainerEditTags
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UHorizontalBox*                         HBox_Tabs;
	class UImage*                                 Image_Background;
	class UImage*                                 Image_Background_Bottom;
	class UImage*                                 Image_Background_Tabs;
	class UImage*                                 Image_Background_Top;
	class UCommonActionWidget*                    NextTabAction;
	class UCommonActionWidget*                    PreviousTabAction;
	class UCommonRichTextBlock*                   RichText_Description;
	class UCommonRichTextBlock*                   RichText_Header;
	class USafeZone*                              SafeZone_ButtonsList;
	class USafeZone*                              SafeZone_MobileCloseButton;
	class USafeZone*                              SafeZone_Profile;
	class USafeZone*                              SafeZone_Tabs;
	class USafeZone*                              SafeZone_Title;
	class USpacer*                                Spacer_Mobile;
	class USidebarCollectionInputTextButton_C*    TagsInfoButton;
	class USimpleCommonButton_C*                  TagsInfoInputBlocker;

public:
	void BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnCollectionTabTitleChange(const ESocialTagCategory& TagCategory);
	void BP_OnShowTabsSet(bool bShowTabs);
	void BP_OnWhatAreTagsActivated();
	void BP_OnWhatAreTagsDeactivated();
	void Construct();
	void ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void ToggleTagsInfoTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SidebarCollectionScreenContainerEditTags_C">();
	}
	static class UBP_SidebarCollectionScreenContainerEditTags_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SidebarCollectionScreenContainerEditTags_C>();
	}
};
static_assert(alignof(UBP_SidebarCollectionScreenContainerEditTags_C) == 0x000008, "Wrong alignment on UBP_SidebarCollectionScreenContainerEditTags_C");
static_assert(sizeof(UBP_SidebarCollectionScreenContainerEditTags_C) == 0x0005E8, "Wrong size on UBP_SidebarCollectionScreenContainerEditTags_C");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, UberGraphFrame) == 0x000558, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, HBox_Tabs) == 0x000560, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::HBox_Tabs' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, Image_Background) == 0x000568, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, Image_Background_Bottom) == 0x000570, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::Image_Background_Bottom' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, Image_Background_Tabs) == 0x000578, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::Image_Background_Tabs' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, Image_Background_Top) == 0x000580, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::Image_Background_Top' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, NextTabAction) == 0x000588, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::NextTabAction' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, PreviousTabAction) == 0x000590, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::PreviousTabAction' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, RichText_Description) == 0x000598, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::RichText_Description' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, RichText_Header) == 0x0005A0, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::RichText_Header' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, SafeZone_ButtonsList) == 0x0005A8, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::SafeZone_ButtonsList' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, SafeZone_MobileCloseButton) == 0x0005B0, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::SafeZone_MobileCloseButton' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, SafeZone_Profile) == 0x0005B8, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::SafeZone_Profile' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, SafeZone_Tabs) == 0x0005C0, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::SafeZone_Tabs' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, SafeZone_Title) == 0x0005C8, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::SafeZone_Title' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, Spacer_Mobile) == 0x0005D0, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::Spacer_Mobile' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, TagsInfoButton) == 0x0005D8, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::TagsInfoButton' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerEditTags_C, TagsInfoInputBlocker) == 0x0005E0, "Member 'UBP_SidebarCollectionScreenContainerEditTags_C::TagsInfoInputBlocker' has a wrong offset!");

}
