#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CharacterCollectionMapScreen_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C final : public UCollectionNPCServiceInfoOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ReloadInfo;
	class UImage*                                 Image_64;
	class UImage*                                 Image_118;
	class UImage*                                 Image_RadialBloom;
	class UCommonTextBlock*                       QuestionMark;
	class USizeBox*                               SizeBox_Descriptions;
	class UWidgetSwitcher*                        Switcher_Locations;
	class UVerticalBox*                           VerticalBox_AllInfos;
	int32                                         Current_location;
	int32                                         Total_location;
	struct FLinearColor                           LocationTrackerColor;
	struct FLinearColor                           LocationTrackerColor_Complete;
	EFortCollectedState                           State;
	uint8                                         Pad_589[0x3];
	struct FLinearColor                           LocationRGBA2_Base;
	struct FLinearColor                           LocationRGBA2_Hover;

public:
	void BP_OnCollectedStateSet(EFortCollectedState CollectedState);
	void BP_OnLocationsFoundSet_1(int32 NumFound, int32 NumAvailable, bool bAllFound);
	void ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaCollectionScreenInfoOverlayCharacterServices_C">();
	}
	static class UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C>();
	}
};
static_assert(alignof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C) == 0x000008, "Wrong alignment on UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C");
static_assert(sizeof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C) == 0x0005B0, "Wrong size on UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, UberGraphFrame) == 0x000518, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, ReloadInfo) == 0x000520, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::ReloadInfo' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, Image_64) == 0x000528, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::Image_64' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, Image_118) == 0x000530, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::Image_118' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, Image_RadialBloom) == 0x000538, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::Image_RadialBloom' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, QuestionMark) == 0x000540, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::QuestionMark' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, SizeBox_Descriptions) == 0x000548, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::SizeBox_Descriptions' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, Switcher_Locations) == 0x000550, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::Switcher_Locations' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, VerticalBox_AllInfos) == 0x000558, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::VerticalBox_AllInfos' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, Current_location) == 0x000560, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::Current_location' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, Total_location) == 0x000564, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::Total_location' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, LocationTrackerColor) == 0x000568, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::LocationTrackerColor' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, LocationTrackerColor_Complete) == 0x000578, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::LocationTrackerColor_Complete' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, State) == 0x000588, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::State' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, LocationRGBA2_Base) == 0x00058C, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::LocationRGBA2_Base' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C, LocationRGBA2_Hover) == 0x00059C, "Member 'UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::LocationRGBA2_Hover' has a wrong offset!");

}
