#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SidebarSocialTagCategoryStructure_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarSocialAddTagWidget_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                Border_AddTagBorder;
	class USidebarSocialAddingTagWidget_C*        SidebarSocialAddingTagWidget;
	class UCommonVisibilitySwitcher*              Switcher_Tag;
	class UCommonTextBlock*                       Text_AddTagName;
	struct FTimerHandle                           StateChangeLerpTimerHandle;
	double                                        StateChangeLerpAlpha;
	double                                        StateChangeLerpTimeStep;
	struct FLinearColor                           TagContentColorWhite;
	struct FLinearColor                           TagContentColorBlack;
	double                                        EnabledTagOpacity;
	double                                        DisabledTagOpacity;
	class FName                                   Name_InnerColor;
	class FName                                   Name_OuterColor;
	class FName                                   Name_TagOpacity;
	uint8                                         Pad_1464[0x4];
	class FString                                 TagCategory_AddTag;
	class FString                                 TagCategory_Disabled;
	struct FLinearColor                           CurrentInnerColorReference;
	struct FLinearColor                           CurrentOuterColorReference;
	struct FLinearColor                           TargetInnerColorReference;
	struct FLinearColor                           TargetOuterColorReference;
	struct FLinearColor                           CurrentTagContentColorReference;
	struct FLinearColor                           TargetTagContentColorReference;
	struct FSidebarSocialTagCategoryStructure     TagCategoryStructureReference;
	struct FSidebarSocialTagCategoryStructure     DisabledTagCategoryStructureReference;
	class UMaterialInstanceDynamic*               TagBorderMaterialReference;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void EventSetTag();
	void ExecuteUbergraph_SidebarSocialAddTagWidget(int32 EntryPoint);
	void FunctionOnHovered();
	void FunctionOnUnhovered();
	void FunctionSetCategoryCustomizationVisibility(ESlateVisibility CategoryCustomizationVisibility);
	void GetCurrentTagBorderColors();
	void InterpolateTagColors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSocialAddTagWidget_C">();
	}
	static class USidebarSocialAddTagWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSocialAddTagWidget_C>();
	}
};
static_assert(alignof(USidebarSocialAddTagWidget_C) == 0x000010, "Wrong alignment on USidebarSocialAddTagWidget_C");
static_assert(sizeof(USidebarSocialAddTagWidget_C) == 0x0015D0, "Wrong size on USidebarSocialAddTagWidget_C");
static_assert(offsetof(USidebarSocialAddTagWidget_C, UberGraphFrame) == 0x0013E0, "Member 'USidebarSocialAddTagWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, Hovered) == 0x0013E8, "Member 'USidebarSocialAddTagWidget_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, Border_AddTagBorder) == 0x0013F0, "Member 'USidebarSocialAddTagWidget_C::Border_AddTagBorder' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, SidebarSocialAddingTagWidget) == 0x0013F8, "Member 'USidebarSocialAddTagWidget_C::SidebarSocialAddingTagWidget' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, Switcher_Tag) == 0x001400, "Member 'USidebarSocialAddTagWidget_C::Switcher_Tag' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, Text_AddTagName) == 0x001408, "Member 'USidebarSocialAddTagWidget_C::Text_AddTagName' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, StateChangeLerpTimerHandle) == 0x001410, "Member 'USidebarSocialAddTagWidget_C::StateChangeLerpTimerHandle' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, StateChangeLerpAlpha) == 0x001418, "Member 'USidebarSocialAddTagWidget_C::StateChangeLerpAlpha' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, StateChangeLerpTimeStep) == 0x001420, "Member 'USidebarSocialAddTagWidget_C::StateChangeLerpTimeStep' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, TagContentColorWhite) == 0x001428, "Member 'USidebarSocialAddTagWidget_C::TagContentColorWhite' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, TagContentColorBlack) == 0x001438, "Member 'USidebarSocialAddTagWidget_C::TagContentColorBlack' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, EnabledTagOpacity) == 0x001448, "Member 'USidebarSocialAddTagWidget_C::EnabledTagOpacity' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, DisabledTagOpacity) == 0x001450, "Member 'USidebarSocialAddTagWidget_C::DisabledTagOpacity' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, Name_InnerColor) == 0x001458, "Member 'USidebarSocialAddTagWidget_C::Name_InnerColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, Name_OuterColor) == 0x00145C, "Member 'USidebarSocialAddTagWidget_C::Name_OuterColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, Name_TagOpacity) == 0x001460, "Member 'USidebarSocialAddTagWidget_C::Name_TagOpacity' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, TagCategory_AddTag) == 0x001468, "Member 'USidebarSocialAddTagWidget_C::TagCategory_AddTag' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, TagCategory_Disabled) == 0x001478, "Member 'USidebarSocialAddTagWidget_C::TagCategory_Disabled' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, CurrentInnerColorReference) == 0x001488, "Member 'USidebarSocialAddTagWidget_C::CurrentInnerColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, CurrentOuterColorReference) == 0x001498, "Member 'USidebarSocialAddTagWidget_C::CurrentOuterColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, TargetInnerColorReference) == 0x0014A8, "Member 'USidebarSocialAddTagWidget_C::TargetInnerColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, TargetOuterColorReference) == 0x0014B8, "Member 'USidebarSocialAddTagWidget_C::TargetOuterColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, CurrentTagContentColorReference) == 0x0014C8, "Member 'USidebarSocialAddTagWidget_C::CurrentTagContentColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, TargetTagContentColorReference) == 0x0014D8, "Member 'USidebarSocialAddTagWidget_C::TargetTagContentColorReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, TagCategoryStructureReference) == 0x0014E8, "Member 'USidebarSocialAddTagWidget_C::TagCategoryStructureReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, DisabledTagCategoryStructureReference) == 0x001558, "Member 'USidebarSocialAddTagWidget_C::DisabledTagCategoryStructureReference' has a wrong offset!");
static_assert(offsetof(USidebarSocialAddTagWidget_C, TagBorderMaterialReference) == 0x0015C8, "Member 'USidebarSocialAddTagWidget_C::TagBorderMaterialReference' has a wrong offset!");

}
