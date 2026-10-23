#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UCrewPurchase_RewardTile_C final : public UCrewRewardTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       HoverScale;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Image_Calendar;
	class UImage*                                 Image_Check;
	class UImage*                                 Image_EdgeSlant;
	class UImage*                                 Image_Frame;
	class UImage*                                 Image_Pulse;
	class UImage*                                 Image_Shadow;
	class UWidgetSwitcher*                        Switcher_OwnIcon;

public:
	void BP_OnDeselected();
	void BP_OnSelected();
	void Construct();
	void ExecuteUbergraph_CrewPurchase_RewardTile(int32 EntryPoint);
	void OnDownloadTileImageComplete(class UTexture2D* Texture);
	void OnStartingDownloadTileImage();
	void OnUpdateOwnedState(bool bOwned);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewPurchase_RewardTile_C">();
	}
	static class UCrewPurchase_RewardTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewPurchase_RewardTile_C>();
	}
};
static_assert(alignof(UCrewPurchase_RewardTile_C) == 0x000010, "Wrong alignment on UCrewPurchase_RewardTile_C");
static_assert(sizeof(UCrewPurchase_RewardTile_C) == 0x001490, "Wrong size on UCrewPurchase_RewardTile_C");
static_assert(offsetof(UCrewPurchase_RewardTile_C, UberGraphFrame) == 0x001440, "Member 'UCrewPurchase_RewardTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_RewardTile_C, HoverScale) == 0x001448, "Member 'UCrewPurchase_RewardTile_C::HoverScale' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_RewardTile_C, Hover) == 0x001450, "Member 'UCrewPurchase_RewardTile_C::Hover' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_RewardTile_C, Image_Calendar) == 0x001458, "Member 'UCrewPurchase_RewardTile_C::Image_Calendar' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_RewardTile_C, Image_Check) == 0x001460, "Member 'UCrewPurchase_RewardTile_C::Image_Check' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_RewardTile_C, Image_EdgeSlant) == 0x001468, "Member 'UCrewPurchase_RewardTile_C::Image_EdgeSlant' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_RewardTile_C, Image_Frame) == 0x001470, "Member 'UCrewPurchase_RewardTile_C::Image_Frame' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_RewardTile_C, Image_Pulse) == 0x001478, "Member 'UCrewPurchase_RewardTile_C::Image_Pulse' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_RewardTile_C, Image_Shadow) == 0x001480, "Member 'UCrewPurchase_RewardTile_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UCrewPurchase_RewardTile_C, Switcher_OwnIcon) == 0x001488, "Member 'UCrewPurchase_RewardTile_C::Switcher_OwnIcon' has a wrong offset!");

}
