#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UStandaloneBacchusItemShop_C final : public UFortStandaloneItemShop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UHorizontalBox*                         HBox_Tabs;
	class UBorder*                                LoadingBackground;
	class UMTXButton_C*                           MTXButton;
	class UCommonActionWidget*                    NextTabAction;
	class UCommonActionWidget*                    PreviousTabAction;
	class USafeZone*                              SafeZone_TabButtons;
	class USafeZone*                              SafeZone_TopRightButtons;

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_StandaloneBacchusItemShop(int32 EntryPoint);
	void InitializeTabs();
	void OnCameraLevelLoaded();
	void OnLoadingIndicatorShown(bool bShown);
	void OnTabSelected(int32 TabIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StandaloneBacchusItemShop_C">();
	}
	static class UStandaloneBacchusItemShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStandaloneBacchusItemShop_C>();
	}
};
static_assert(alignof(UStandaloneBacchusItemShop_C) == 0x000008, "Wrong alignment on UStandaloneBacchusItemShop_C");
static_assert(sizeof(UStandaloneBacchusItemShop_C) == 0x000678, "Wrong size on UStandaloneBacchusItemShop_C");
static_assert(offsetof(UStandaloneBacchusItemShop_C, UberGraphFrame) == 0x000638, "Member 'UStandaloneBacchusItemShop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStandaloneBacchusItemShop_C, HBox_Tabs) == 0x000640, "Member 'UStandaloneBacchusItemShop_C::HBox_Tabs' has a wrong offset!");
static_assert(offsetof(UStandaloneBacchusItemShop_C, LoadingBackground) == 0x000648, "Member 'UStandaloneBacchusItemShop_C::LoadingBackground' has a wrong offset!");
static_assert(offsetof(UStandaloneBacchusItemShop_C, MTXButton) == 0x000650, "Member 'UStandaloneBacchusItemShop_C::MTXButton' has a wrong offset!");
static_assert(offsetof(UStandaloneBacchusItemShop_C, NextTabAction) == 0x000658, "Member 'UStandaloneBacchusItemShop_C::NextTabAction' has a wrong offset!");
static_assert(offsetof(UStandaloneBacchusItemShop_C, PreviousTabAction) == 0x000660, "Member 'UStandaloneBacchusItemShop_C::PreviousTabAction' has a wrong offset!");
static_assert(offsetof(UStandaloneBacchusItemShop_C, SafeZone_TabButtons) == 0x000668, "Member 'UStandaloneBacchusItemShop_C::SafeZone_TabButtons' has a wrong offset!");
static_assert(offsetof(UStandaloneBacchusItemShop_C, SafeZone_TopRightButtons) == 0x000670, "Member 'UStandaloneBacchusItemShop_C::SafeZone_TopRightButtons' has a wrong offset!");

}
