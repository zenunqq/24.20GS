#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UStandaloneItemShop_C final : public UFortStandaloneItemShop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UHorizontalBox*                         HBox_Tabs;
	class UImage*                                 Image_TabBackground;
	class UBorder*                                LoadingBackground;
	class UMTXButton_C*                           MTXButton;
	class UCommonActionWidget*                    NextTabAction;
	class UCommonActionWidget*                    PreviousTabAction;
	class USafeZone*                              SafeZone_TabButtons;

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_StandaloneItemShop(int32 EntryPoint);
	void InitializeTabs();
	void OnCameraLevelLoaded();
	void OnLoadingIndicatorShown(bool bShown);
	void OnTabSelected(int32 TabIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StandaloneItemShop_C">();
	}
	static class UStandaloneItemShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStandaloneItemShop_C>();
	}
};
static_assert(alignof(UStandaloneItemShop_C) == 0x000008, "Wrong alignment on UStandaloneItemShop_C");
static_assert(sizeof(UStandaloneItemShop_C) == 0x000678, "Wrong size on UStandaloneItemShop_C");
static_assert(offsetof(UStandaloneItemShop_C, UberGraphFrame) == 0x000638, "Member 'UStandaloneItemShop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStandaloneItemShop_C, HBox_Tabs) == 0x000640, "Member 'UStandaloneItemShop_C::HBox_Tabs' has a wrong offset!");
static_assert(offsetof(UStandaloneItemShop_C, Image_TabBackground) == 0x000648, "Member 'UStandaloneItemShop_C::Image_TabBackground' has a wrong offset!");
static_assert(offsetof(UStandaloneItemShop_C, LoadingBackground) == 0x000650, "Member 'UStandaloneItemShop_C::LoadingBackground' has a wrong offset!");
static_assert(offsetof(UStandaloneItemShop_C, MTXButton) == 0x000658, "Member 'UStandaloneItemShop_C::MTXButton' has a wrong offset!");
static_assert(offsetof(UStandaloneItemShop_C, NextTabAction) == 0x000660, "Member 'UStandaloneItemShop_C::NextTabAction' has a wrong offset!");
static_assert(offsetof(UStandaloneItemShop_C, PreviousTabAction) == 0x000668, "Member 'UStandaloneItemShop_C::PreviousTabAction' has a wrong offset!");
static_assert(offsetof(UStandaloneItemShop_C, SafeZone_TabButtons) == 0x000670, "Member 'UStandaloneItemShop_C::SafeZone_TabButtons' has a wrong offset!");

}
