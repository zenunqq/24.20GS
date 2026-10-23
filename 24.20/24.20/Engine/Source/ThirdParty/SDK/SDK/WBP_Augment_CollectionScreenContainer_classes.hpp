#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerAugmentsUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UWBP_Augment_CollectionScreenContainer_C final : public UFortPlayerAugmentCollectionScreenContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UHorizontalBox*                         HBox_Tabs;
	class UImage*                                 Image_BGGradient;
	class UImage*                                 Image_SafeZoneBG;
	class UCommonActionWidget*                    NextTabAction;
	class UOverlay*                               Overlay_HitTestable;
	class UCommonActionWidget*                    PreviousTabAction;
	class USafeZone*                              SafeZone_MenuTabs;
	class USafeZone*                              SafeZone_MobileClose;

public:
	void BP_OnShowTabsSet(bool bShowTabs);
	void Construct();
	void ExecuteUbergraph_WBP_Augment_CollectionScreenContainer(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Augment_CollectionScreenContainer_C">();
	}
	static class UWBP_Augment_CollectionScreenContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Augment_CollectionScreenContainer_C>();
	}
};
static_assert(alignof(UWBP_Augment_CollectionScreenContainer_C) == 0x000008, "Wrong alignment on UWBP_Augment_CollectionScreenContainer_C");
static_assert(sizeof(UWBP_Augment_CollectionScreenContainer_C) == 0x000548, "Wrong size on UWBP_Augment_CollectionScreenContainer_C");
static_assert(offsetof(UWBP_Augment_CollectionScreenContainer_C, UberGraphFrame) == 0x000500, "Member 'UWBP_Augment_CollectionScreenContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenContainer_C, HBox_Tabs) == 0x000508, "Member 'UWBP_Augment_CollectionScreenContainer_C::HBox_Tabs' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenContainer_C, Image_BGGradient) == 0x000510, "Member 'UWBP_Augment_CollectionScreenContainer_C::Image_BGGradient' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenContainer_C, Image_SafeZoneBG) == 0x000518, "Member 'UWBP_Augment_CollectionScreenContainer_C::Image_SafeZoneBG' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenContainer_C, NextTabAction) == 0x000520, "Member 'UWBP_Augment_CollectionScreenContainer_C::NextTabAction' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenContainer_C, Overlay_HitTestable) == 0x000528, "Member 'UWBP_Augment_CollectionScreenContainer_C::Overlay_HitTestable' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenContainer_C, PreviousTabAction) == 0x000530, "Member 'UWBP_Augment_CollectionScreenContainer_C::PreviousTabAction' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenContainer_C, SafeZone_MenuTabs) == 0x000538, "Member 'UWBP_Augment_CollectionScreenContainer_C::SafeZone_MenuTabs' has a wrong offset!");
static_assert(offsetof(UWBP_Augment_CollectionScreenContainer_C, SafeZone_MobileClose) == 0x000540, "Member 'UWBP_Augment_CollectionScreenContainer_C::SafeZone_MobileClose' has a wrong offset!");

}
