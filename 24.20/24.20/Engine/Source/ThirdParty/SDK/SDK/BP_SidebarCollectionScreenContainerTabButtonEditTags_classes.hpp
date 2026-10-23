#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBP_SidebarCollectionScreenContainerTabButtonEditTags_C final : public UFortSidebarCollectionScreenContainerTabButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected_Touch;
	class UWidgetAnimation*                       Unselected_Touch;
	class UWidgetAnimation*                       Tag_DisabledUnhover;
	class UWidgetAnimation*                       Tag_DisabledHover;
	class UWidgetAnimation*                       Tag_DisabledUnhovered;
	class UWidgetAnimation*                       Tag_DisabledHovered;
	class UWidgetAnimation*                       Tag_Enabled;
	class UWidgetAnimation*                       Tag_Unhovered;
	class UWidgetAnimation*                       Tag_Hovered;
	class UWidgetAnimation*                       Tag_Reset;
	class UWidgetAnimation*                       Reset;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Hovered;
	class UWidgetAnimation*                       Unselected;
	class UWidgetAnimation*                       Selected;
	class UHorizontalBox*                         HorizontalBox_0;
	class USpacer*                                Mobile_Spacer;
	class UCommonBorder*                          NewBang;
	class UOverlay*                               Overlay_0;
	class UScaleBox*                              ScaleBox_MobileMultiplier;
	bool                                          isTab;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnTagCategoryChange(const ESocialTagCategory InTagCategory);
	void BP_OnUnhovered();
	void BP_ShowBang(bool bShow);
	void Construct();
	void ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags(int32 EntryPoint);
	void Finished_D3AB39584598BB6DA7EE7C98805576AC();
	void HandleInputMethodChanged(ECommonInputType NewInputType);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SidebarCollectionScreenContainerTabButtonEditTags_C">();
	}
	static class UBP_SidebarCollectionScreenContainerTabButtonEditTags_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SidebarCollectionScreenContainerTabButtonEditTags_C>();
	}
};
static_assert(alignof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C) == 0x000010, "Wrong alignment on UBP_SidebarCollectionScreenContainerTabButtonEditTags_C");
static_assert(sizeof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C) == 0x001550, "Wrong size on UBP_SidebarCollectionScreenContainerTabButtonEditTags_C");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, UberGraphFrame) == 0x0014A0, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Selected_Touch) == 0x0014A8, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Selected_Touch' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Unselected_Touch) == 0x0014B0, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Unselected_Touch' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Tag_DisabledUnhover) == 0x0014B8, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Tag_DisabledUnhover' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Tag_DisabledHover) == 0x0014C0, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Tag_DisabledHover' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Tag_DisabledUnhovered) == 0x0014C8, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Tag_DisabledUnhovered' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Tag_DisabledHovered) == 0x0014D0, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Tag_DisabledHovered' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Tag_Enabled) == 0x0014D8, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Tag_Enabled' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Tag_Unhovered) == 0x0014E0, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Tag_Unhovered' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Tag_Hovered) == 0x0014E8, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Tag_Hovered' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Tag_Reset) == 0x0014F0, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Tag_Reset' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Reset) == 0x0014F8, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Reset' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Unhovered) == 0x001500, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Unhovered' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Hovered) == 0x001508, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Hovered' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Unselected) == 0x001510, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Unselected' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Selected) == 0x001518, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Selected' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, HorizontalBox_0) == 0x001520, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Mobile_Spacer) == 0x001528, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Mobile_Spacer' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, NewBang) == 0x001530, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::NewBang' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, Overlay_0) == 0x001538, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, ScaleBox_MobileMultiplier) == 0x001540, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::ScaleBox_MobileMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C, isTab) == 0x001548, "Member 'UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::isTab' has a wrong offset!");

}
