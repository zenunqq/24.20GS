#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UProgressiveStageWidget_C final : public UFortProgressiveStageWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UOverlay*                               CenterSeparator;
	class UImage*                                 DownArrow;
	class UImage*                                 Image;
	class UOverlay*                               ItemLeftContainer;
	class UOverlay*                               ItemRightContainer;
	class UProgressiveItem_Tooltip_C*             ProgressiveItem_Tooltip;
	class UProgressiveItemWidget_C*               ProgressiveItemWidget_Left;
	class UProgressiveItemWidget_C*               ProgressiveItemWidget_Right;
	bool                                          Show_Top_Arrow;

public:
	class UFortProgressiveItemWidget* AddStageItemWidget();
	void ClearStageItemWidgets();
	void Construct();
	void ExecuteUbergraph_ProgressiveStageWidget(int32 EntryPoint);
	void OnPeekStateChanged(bool bIsInPeekState);
	void OnSetTooltipText(const class FText& InToolTipText);
	void OnSetTooltipVisible(const bool bVisible);
	void PreConstruct(bool IsDesignTime);
	void Update_Subscribed_Visuals(bool IsSubscribed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveStageWidget_C">();
	}
	static class UProgressiveStageWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveStageWidget_C>();
	}
};
static_assert(alignof(UProgressiveStageWidget_C) == 0x000008, "Wrong alignment on UProgressiveStageWidget_C");
static_assert(sizeof(UProgressiveStageWidget_C) == 0x000310, "Wrong size on UProgressiveStageWidget_C");
static_assert(offsetof(UProgressiveStageWidget_C, UberGraphFrame) == 0x0002B0, "Member 'UProgressiveStageWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, Outro) == 0x0002B8, "Member 'UProgressiveStageWidget_C::Outro' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, Intro) == 0x0002C0, "Member 'UProgressiveStageWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, CenterSeparator) == 0x0002C8, "Member 'UProgressiveStageWidget_C::CenterSeparator' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, DownArrow) == 0x0002D0, "Member 'UProgressiveStageWidget_C::DownArrow' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, Image) == 0x0002D8, "Member 'UProgressiveStageWidget_C::Image' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ItemLeftContainer) == 0x0002E0, "Member 'UProgressiveStageWidget_C::ItemLeftContainer' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ItemRightContainer) == 0x0002E8, "Member 'UProgressiveStageWidget_C::ItemRightContainer' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ProgressiveItem_Tooltip) == 0x0002F0, "Member 'UProgressiveStageWidget_C::ProgressiveItem_Tooltip' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ProgressiveItemWidget_Left) == 0x0002F8, "Member 'UProgressiveStageWidget_C::ProgressiveItemWidget_Left' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, ProgressiveItemWidget_Right) == 0x000300, "Member 'UProgressiveStageWidget_C::ProgressiveItemWidget_Right' has a wrong offset!");
static_assert(offsetof(UProgressiveStageWidget_C, Show_Top_Arrow) == 0x000308, "Member 'UProgressiveStageWidget_C::Show_Top_Arrow' has a wrong offset!");

}
