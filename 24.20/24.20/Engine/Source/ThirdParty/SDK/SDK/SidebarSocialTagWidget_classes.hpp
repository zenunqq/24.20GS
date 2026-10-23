#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SidebarSocialTagCategoryStructure_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarSocialTagWidget_C final : public USocialTagWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       BorderUnhover;
	class UWidgetAnimation*                       BorderHover;
	class UWidgetAnimation*                       StateChange;
	class UBorder*                                Border_TagBorder;
	class UBP_SidebarCollectionScreenContainerTabButtonEditTags_C* BP_SidebarCollectionScreenContainerTabButtonEditTags;
	class UGridPanel*                             GridPanel_TagWidget;
	class UScaleBox*                              ScaleBox_TagCategoryIcon;
	class USidebarSocialAddingTagWidget_C*        SidebarSocialAddingTagWidget;
	class USpacer*                                Spacer_TagCategoryIcon;
	class UCommonVisibilitySwitcher*              Switcher_SelectedState;
	class UCommonTextBlock*                       Text_TagName;
	class FName                                   Name_InnerColor;
	class FName                                   Name_OuterColor;
	class FName                                   Name_TagOpacity;
	uint8                                         Pad_14AC[0x4];
	class FString                                 TagCategory_Disabled;
	struct FTimerHandle                           StateChangeLerpTimerHandle;
	double                                        StateChangeLerpAlpha;
	struct FSidebarSocialTagCategoryStructure     TagCategoryStructureReference;
	struct FSidebarSocialTagCategoryStructure     DisabledTagCategoryStructureReference;
	double                                        StateChangeLerpTimeStep;
	class UMaterialInstanceDynamic*               TagBorderMaterialReference;
	struct FLinearColor                           CurrentInnerColorReference;
	struct FLinearColor                           CurrentOuterColorReference;
	struct FLinearColor                           TargetInnerColorReference;
	struct FLinearColor                           TargetOuterColorReference;
	struct FLinearColor                           TagContentColorWhite;
	struct FLinearColor                           TagContentColorWhiteDisabled;
	struct FLinearColor                           TagContentColorBlack;
	struct FLinearColor                           CurrentTagContentColorReference;
	struct FLinearColor                           TargetTagContentColorReference;
	struct FLinearColor                           TagContentColorBlackDisabled;
	double                                        EnabledTagOpacity;
	double                                        DisabledTagOpacity;
	bool                                          Highlighted;
	uint8                                         Pad_1671[0x7];
	class UMaterialInstanceDynamic*               TagCategoryIconMaterialReference;
	class FName                                   Name_GradientStartColor;
	class FName                                   Name_GradientEndColor;
	class FName                                   Name_IconColor;
	class FName                                   Name_EndingInnerColor;
	class FName                                   Name_EndingOuterColor;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SidebarSocialTagWidget(int32 EntryPoint);
	void FunctionOnHovered();
	void FunctionOnUnhovered();
	void FunctionSetCategoryCustomizationVisibility(ESlateVisibility CategoryCustomizationVisibility);
	void FunctionSetTag(const class FText& InTagName, ESocialTagCategory InTagCategory, bool InIsSystemTag);
	void FunctionSetTagBorderColors(const struct FLinearColor& InnerColor, const struct FLinearColor& OuterColor);
	void GetCurrentTagBorderColors();
	void InterpolateTagColors();
	void OnTagListEntryHovered();
	void OnTagListEntryUnhovered();
	void SetCategoryCustomizationVisibility(ESlateVisibility CategoryCustomizationVisibility);
	void SetFullColor();
	void SetHighlightState(bool bHighlighted);
	void SetTag(const class FText& InTagName, const ESocialTagCategory InTagCategory, const bool bInIsSystemTag);
	void SetTagHoverState(bool IsUserSocialTag, bool IsHovering);
	void SetUnhoverState(bool bPlayAnimation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSocialTagWidget_C">();
	}
	static class USidebarSocialTagWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSocialTagWidget_C>();
	}
};
static_assert(alignof(USidebarSocialTagWidget_C) == 0x000010, "Wrong alignment on USidebarSocialTagWidget_C");
static_assert(sizeof(USidebarSocialTagWidget_C) == 0x0016A0, "Wrong size on USidebarSocialTagWidget_C");
static_assert(offsetof(USidebarSocialTagWidget_C, UberGraphFrame) == 0x001440, "Member 'USidebarSocialTagWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, BorderUnhover) == 0x001448, "Member 'USidebarSocialTagWidget_C::BorderUnhover' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, BorderHover) == 0x001450, "Member 'USidebarSocialTagWidget_C::BorderHover' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, StateChange) == 0x001458, "Member 'USidebarSocialTagWidget_C::StateChange' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Border_TagBorder) == 0x001460, "Member 'USidebarSocialTagWidget_C::Border_TagBorder' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, BP_SidebarCollectionScreenContainerTabButtonEditTags) == 0x001468, "Member 'USidebarSocialTagWidget_C::BP_SidebarCollectionScreenContainerTabButtonEditTags' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, GridPanel_TagWidget) == 0x001470, "Member 'USidebarSocialTagWidget_C::GridPanel_TagWidget' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, ScaleBox_TagCategoryIcon) == 0x001478, "Member 'USidebarSocialTagWidget_C::ScaleBox_TagCategoryIcon' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, SidebarSocialAddingTagWidget) == 0x001480, "Member 'USidebarSocialTagWidget_C::SidebarSocialAddingTagWidget' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Spacer_TagCategoryIcon) == 0x001488, "Member 'USidebarSocialTagWidget_C::Spacer_TagCategoryIcon' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Switcher_SelectedState) == 0x001490, "Member 'USidebarSocialTagWidget_C::Switcher_SelectedState' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Text_TagName) == 0x001498, "Member 'USidebarSocialTagWidget_C::Text_TagName' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_InnerColor) == 0x0014A0, "Member 'USidebarSocialTagWidget_C::Name_InnerColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_OuterColor) == 0x0014A4, "Member 'USidebarSocialTagWidget_C::Name_OuterColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_TagOpacity) == 0x0014A8, "Member 'USidebarSocialTagWidget_C::Name_TagOpacity' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TagCategory_Disabled) == 0x0014B0, "Member 'USidebarSocialTagWidget_C::TagCategory_Disabled' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, StateChangeLerpTimerHandle) == 0x0014C0, "Member 'USidebarSocialTagWidget_C::StateChangeLerpTimerHandle' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, StateChangeLerpAlpha) == 0x0014C8, "Member 'USidebarSocialTagWidget_C::StateChangeLerpAlpha' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TagCategoryStructureReference) == 0x0014D0, "Member 'USidebarSocialTagWidget_C::TagCategoryStructureReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, DisabledTagCategoryStructureReference) == 0x001540, "Member 'USidebarSocialTagWidget_C::DisabledTagCategoryStructureReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, StateChangeLerpTimeStep) == 0x0015B0, "Member 'USidebarSocialTagWidget_C::StateChangeLerpTimeStep' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TagBorderMaterialReference) == 0x0015B8, "Member 'USidebarSocialTagWidget_C::TagBorderMaterialReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, CurrentInnerColorReference) == 0x0015C0, "Member 'USidebarSocialTagWidget_C::CurrentInnerColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, CurrentOuterColorReference) == 0x0015D0, "Member 'USidebarSocialTagWidget_C::CurrentOuterColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TargetInnerColorReference) == 0x0015E0, "Member 'USidebarSocialTagWidget_C::TargetInnerColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TargetOuterColorReference) == 0x0015F0, "Member 'USidebarSocialTagWidget_C::TargetOuterColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TagContentColorWhite) == 0x001600, "Member 'USidebarSocialTagWidget_C::TagContentColorWhite' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TagContentColorWhiteDisabled) == 0x001610, "Member 'USidebarSocialTagWidget_C::TagContentColorWhiteDisabled' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TagContentColorBlack) == 0x001620, "Member 'USidebarSocialTagWidget_C::TagContentColorBlack' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, CurrentTagContentColorReference) == 0x001630, "Member 'USidebarSocialTagWidget_C::CurrentTagContentColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TargetTagContentColorReference) == 0x001640, "Member 'USidebarSocialTagWidget_C::TargetTagContentColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TagContentColorBlackDisabled) == 0x001650, "Member 'USidebarSocialTagWidget_C::TagContentColorBlackDisabled' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, EnabledTagOpacity) == 0x001660, "Member 'USidebarSocialTagWidget_C::EnabledTagOpacity' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, DisabledTagOpacity) == 0x001668, "Member 'USidebarSocialTagWidget_C::DisabledTagOpacity' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Highlighted) == 0x001670, "Member 'USidebarSocialTagWidget_C::Highlighted' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, TagCategoryIconMaterialReference) == 0x001678, "Member 'USidebarSocialTagWidget_C::TagCategoryIconMaterialReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_GradientStartColor) == 0x001680, "Member 'USidebarSocialTagWidget_C::Name_GradientStartColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_GradientEndColor) == 0x001684, "Member 'USidebarSocialTagWidget_C::Name_GradientEndColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_IconColor) == 0x001688, "Member 'USidebarSocialTagWidget_C::Name_IconColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_EndingInnerColor) == 0x00168C, "Member 'USidebarSocialTagWidget_C::Name_EndingInnerColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagWidget_C, Name_EndingOuterColor) == 0x001690, "Member 'USidebarSocialTagWidget_C::Name_EndingOuterColor' has a wrong offset!");

}
