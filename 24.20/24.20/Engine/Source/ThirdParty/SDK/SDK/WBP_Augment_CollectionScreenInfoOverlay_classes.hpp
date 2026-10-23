#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerAugmentsUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UWBP_Augment_CollectionScreenInfoOverlay_C final : public UFortPlayerAugmentCollectionScreenInfoOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ReloadInfo;
	class UImage*                                 Image_PanelBG;
	class UImage*                                 Image_PanelBorder;
	class UImage*                                 Image_RadialBloom;
	class USizeBox*                               SizeBox_Descriptions;
	class UWidgetSwitcher*                        Switcher_Locations;
	class UVerticalBox*                           VerticalBox_AllInfos;
	int32                                         Current_location;
	int32                                         Total_location;
	struct FLinearColor                           LocationTrackerColor;
	struct FLinearColor                           LocationTrackerColor_Complete;
	EFortCollectedState                           State;
	uint8                                         Pad_4F9[0x3];
	struct FLinearColor                           LocationRGBA2_Base;
	struct FLinearColor                           LocationRGBA2_Hover;

public:
	void BP_OnCollectedStateSet(EFortCollectedState CollectedState);
	void BP_OnLocationsFoundSet(int32 NumFound, int32 NumAvailable, bool bAllFound);
	void ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augment_CollectionScreenInfoOverlay_C">();
	}
	static class UWBP_Augment_CollectionScreenInfoOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augment_CollectionScreenInfoOverlay_C>();
	}
};
static_assert(alignof(UWBP_Augment_CollectionScreenInfoOverlay_C) == 0x000008, "Wrong alignment on UWBP_Augment_CollectionScreenInfoOverlay_C");
static_assert(sizeof(UWBP_Augment_CollectionScreenInfoOverlay_C) == 0x000520, "Wrong size on UWBP_Augment_CollectionScreenInfoOverlay_C");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, UberGraphFrame) == 0x000490, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, ReloadInfo) == 0x000498, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::ReloadInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, Image_PanelBG) == 0x0004A0, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::Image_PanelBG' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, Image_PanelBorder) == 0x0004A8, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::Image_PanelBorder' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, Image_RadialBloom) == 0x0004B0, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::Image_RadialBloom' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, SizeBox_Descriptions) == 0x0004B8, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::SizeBox_Descriptions' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, Switcher_Locations) == 0x0004C0, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::Switcher_Locations' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, VerticalBox_AllInfos) == 0x0004C8, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::VerticalBox_AllInfos' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, Current_location) == 0x0004D0, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::Current_location' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, Total_location) == 0x0004D4, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::Total_location' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, LocationTrackerColor) == 0x0004D8, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::LocationTrackerColor' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, LocationTrackerColor_Complete) == 0x0004E8, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::LocationTrackerColor_Complete' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, State) == 0x0004F8, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::State' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, LocationRGBA2_Base) == 0x0004FC, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::LocationRGBA2_Base' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenInfoOverlay_C, LocationRGBA2_Hover) == 0x00050C, "Member 'UWBP_Augment_CollectionScreenInfoOverlay_C::LocationRGBA2_Hover' has a wrong offset!");

}
