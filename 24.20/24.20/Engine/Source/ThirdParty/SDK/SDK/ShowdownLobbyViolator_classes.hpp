#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UShowdownLobbyViolator_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          CommonBorder_DetailsBG;
	class UCommonBorder*                          CommonBorder_HighlightBorder;
	class UCommonBorder*                          CommonBorder_TopContainer;
	class UCommonTextBlock*                       CommonTextBlock_TimeRemainingDesc;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_Status;
	class UImage*                                 Image_BGFillColor;
	class UImage*                                 Image_InnerTriangle;
	class UImage*                                 Image_OuterTriangle;
	class UCommonTextBlock*                       Text_ShowdownTitle;
	bool                                          runOnce;

public:
	void ExecuteUbergraph_ShowdownLobbyViolator(int32 EntryPoint);
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownLobbyViolator_C">();
	}
	static class UShowdownLobbyViolator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownLobbyViolator_C>();
	}
};
static_assert(alignof(UShowdownLobbyViolator_C) == 0x000008, "Wrong alignment on UShowdownLobbyViolator_C");
static_assert(sizeof(UShowdownLobbyViolator_C) == 0x000778, "Wrong size on UShowdownLobbyViolator_C");
static_assert(offsetof(UShowdownLobbyViolator_C, UberGraphFrame) == 0x000718, "Member 'UShowdownLobbyViolator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, Intro) == 0x000720, "Member 'UShowdownLobbyViolator_C::Intro' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, CommonBorder_DetailsBG) == 0x000728, "Member 'UShowdownLobbyViolator_C::CommonBorder_DetailsBG' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, CommonBorder_HighlightBorder) == 0x000730, "Member 'UShowdownLobbyViolator_C::CommonBorder_HighlightBorder' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, CommonBorder_TopContainer) == 0x000738, "Member 'UShowdownLobbyViolator_C::CommonBorder_TopContainer' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, CommonTextBlock_TimeRemainingDesc) == 0x000740, "Member 'UShowdownLobbyViolator_C::CommonTextBlock_TimeRemainingDesc' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, CommonWidgetSwitcher_Status) == 0x000748, "Member 'UShowdownLobbyViolator_C::CommonWidgetSwitcher_Status' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, Image_BGFillColor) == 0x000750, "Member 'UShowdownLobbyViolator_C::Image_BGFillColor' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, Image_InnerTriangle) == 0x000758, "Member 'UShowdownLobbyViolator_C::Image_InnerTriangle' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, Image_OuterTriangle) == 0x000760, "Member 'UShowdownLobbyViolator_C::Image_OuterTriangle' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, Text_ShowdownTitle) == 0x000768, "Member 'UShowdownLobbyViolator_C::Text_ShowdownTitle' has a wrong offset!");
static_assert(offsetof(UShowdownLobbyViolator_C, runOnce) == 0x000770, "Member 'UShowdownLobbyViolator_C::runOnce' has a wrong offset!");

}
