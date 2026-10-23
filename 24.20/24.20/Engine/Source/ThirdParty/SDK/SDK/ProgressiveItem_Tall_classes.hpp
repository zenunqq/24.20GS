#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "CrewUI_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UProgressiveItem_Tall_C final : public UFortProgressiveSetTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       HoverBurst;
	class UWidgetAnimation*                       Deselected;
	class UWidgetAnimation*                       Selected;
	class UImage*                                 Image;
	class UImage*                                 Image_32;
	class UImage*                                 Image_86;
	class UImage*                                 Image_CompletedCheck;
	class UImage*                                 Image_Dimmer;
	class UImage*                                 Image_Frame;
	class UImage*                                 Image_Gradient;
	class UFortLazyImage*                         Image_Item;
	class UImage*                                 Image_PriceBg;
	class UOverlay*                               Overlay_InspectionText;
	class UCommonVisibilitySwitcher*              Switcher_CheckDelay;
	class UAthenaItemShopReactiveTileText*        Text_Stages;
	class UCommonRichTextBlock*                   Text_Subtitle;
	class UAthenaItemShopReactiveTileText*        TileText_ItemName;
	ETextJustify                                  TileTextJustification;
	uint8                                         Pad_1521[0x7];
	class UMaterialInterface*                     Material;
	struct FVector2D                              In_Size;
	double                                        Extra_Space;
	class FText                                   Empty_text;
	bool                                          IsDisabled;
	bool                                          HasExtraLock;
	uint8                                         Pad_1562[0x6];
	struct FProgressiveSetInfo                    SetInfo;
	bool                                          Subscribed;
	bool                                          IsCompleted;
	bool                                          Hovered_DesignTime;
	bool                                          Subbed_DesignTime;
	bool                                          Completed_DesignTime;
	bool                                          Hovered;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnInitializeSetInfo(const struct FProgressiveSetInfo& InSetInfo, const class FText& BottomText, const class FText& BottomSubtext, const bool bSubscribed);
	void BP_OnSelected();
	void BP_OnTileMaterialLoaded(const bool bSubscribed);
	void BP_OnUnhovered();
	void ExecuteUbergraph_ProgressiveItem_Tall(int32 EntryPoint);
	void Play_intro();
	void PreConstruct(bool IsDesignTime);
	void UpdateCompletedState();
	void UpdateSubscribedState(bool bInSubscribed);
	void UpdateVisualState(bool Selected_0, bool Subbed, bool Completed, bool Hovered_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressiveItem_Tall_C">();
	}
	static class UProgressiveItem_Tall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressiveItem_Tall_C>();
	}
};
static_assert(alignof(UProgressiveItem_Tall_C) == 0x000010, "Wrong alignment on UProgressiveItem_Tall_C");
static_assert(sizeof(UProgressiveItem_Tall_C) == 0x0015E0, "Wrong size on UProgressiveItem_Tall_C");
static_assert(offsetof(UProgressiveItem_Tall_C, UberGraphFrame) == 0x001490, "Member 'UProgressiveItem_Tall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, HoverBurst) == 0x001498, "Member 'UProgressiveItem_Tall_C::HoverBurst' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Deselected) == 0x0014A0, "Member 'UProgressiveItem_Tall_C::Deselected' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Selected) == 0x0014A8, "Member 'UProgressiveItem_Tall_C::Selected' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Image) == 0x0014B0, "Member 'UProgressiveItem_Tall_C::Image' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Image_32) == 0x0014B8, "Member 'UProgressiveItem_Tall_C::Image_32' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Image_86) == 0x0014C0, "Member 'UProgressiveItem_Tall_C::Image_86' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Image_CompletedCheck) == 0x0014C8, "Member 'UProgressiveItem_Tall_C::Image_CompletedCheck' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Image_Dimmer) == 0x0014D0, "Member 'UProgressiveItem_Tall_C::Image_Dimmer' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Image_Frame) == 0x0014D8, "Member 'UProgressiveItem_Tall_C::Image_Frame' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Image_Gradient) == 0x0014E0, "Member 'UProgressiveItem_Tall_C::Image_Gradient' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Image_Item) == 0x0014E8, "Member 'UProgressiveItem_Tall_C::Image_Item' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Image_PriceBg) == 0x0014F0, "Member 'UProgressiveItem_Tall_C::Image_PriceBg' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Overlay_InspectionText) == 0x0014F8, "Member 'UProgressiveItem_Tall_C::Overlay_InspectionText' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Switcher_CheckDelay) == 0x001500, "Member 'UProgressiveItem_Tall_C::Switcher_CheckDelay' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Text_Stages) == 0x001508, "Member 'UProgressiveItem_Tall_C::Text_Stages' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Text_Subtitle) == 0x001510, "Member 'UProgressiveItem_Tall_C::Text_Subtitle' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, TileText_ItemName) == 0x001518, "Member 'UProgressiveItem_Tall_C::TileText_ItemName' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, TileTextJustification) == 0x001520, "Member 'UProgressiveItem_Tall_C::TileTextJustification' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Material) == 0x001528, "Member 'UProgressiveItem_Tall_C::Material' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, In_Size) == 0x001530, "Member 'UProgressiveItem_Tall_C::In_Size' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Extra_Space) == 0x001540, "Member 'UProgressiveItem_Tall_C::Extra_Space' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Empty_text) == 0x001548, "Member 'UProgressiveItem_Tall_C::Empty_text' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, IsDisabled) == 0x001560, "Member 'UProgressiveItem_Tall_C::IsDisabled' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, HasExtraLock) == 0x001561, "Member 'UProgressiveItem_Tall_C::HasExtraLock' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, SetInfo) == 0x001568, "Member 'UProgressiveItem_Tall_C::SetInfo' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Subscribed) == 0x0015D0, "Member 'UProgressiveItem_Tall_C::Subscribed' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, IsCompleted) == 0x0015D1, "Member 'UProgressiveItem_Tall_C::IsCompleted' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Hovered_DesignTime) == 0x0015D2, "Member 'UProgressiveItem_Tall_C::Hovered_DesignTime' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Subbed_DesignTime) == 0x0015D3, "Member 'UProgressiveItem_Tall_C::Subbed_DesignTime' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Completed_DesignTime) == 0x0015D4, "Member 'UProgressiveItem_Tall_C::Completed_DesignTime' has a wrong offset!");
static_assert(offsetof(UProgressiveItem_Tall_C, Hovered) == 0x0015D5, "Member 'UProgressiveItem_Tall_C::Hovered' has a wrong offset!");

}
