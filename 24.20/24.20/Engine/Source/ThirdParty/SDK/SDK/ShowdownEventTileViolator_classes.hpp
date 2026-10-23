#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UShowdownEventTileViolator_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Focus;
	class UCommonTextBlock*                       CommonTextBlock_0;
	class UCommonTextBlock*                       CommonTextBlock_RoundNumber;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_EventState;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_Proximity;
	class ULiveViolator_C*                        LiveViolator;
	bool                                          OverrideDoNotShowRound;

public:
	void RefreshViolatorData();
	void RefreshDataBP();
	void ExecuteUbergraph_ShowdownEventTileViolator(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownEventTileViolator_C">();
	}
	static class UShowdownEventTileViolator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownEventTileViolator_C>();
	}
};
static_assert(alignof(UShowdownEventTileViolator_C) == 0x000008, "Wrong alignment on UShowdownEventTileViolator_C");
static_assert(sizeof(UShowdownEventTileViolator_C) == 0x000758, "Wrong size on UShowdownEventTileViolator_C");
static_assert(offsetof(UShowdownEventTileViolator_C, UberGraphFrame) == 0x000718, "Member 'UShowdownEventTileViolator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownEventTileViolator_C, Focus) == 0x000720, "Member 'UShowdownEventTileViolator_C::Focus' has a wrong offset!");
static_assert(offsetof(UShowdownEventTileViolator_C, CommonTextBlock_0) == 0x000728, "Member 'UShowdownEventTileViolator_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UShowdownEventTileViolator_C, CommonTextBlock_RoundNumber) == 0x000730, "Member 'UShowdownEventTileViolator_C::CommonTextBlock_RoundNumber' has a wrong offset!");
static_assert(offsetof(UShowdownEventTileViolator_C, CommonWidgetSwitcher_EventState) == 0x000738, "Member 'UShowdownEventTileViolator_C::CommonWidgetSwitcher_EventState' has a wrong offset!");
static_assert(offsetof(UShowdownEventTileViolator_C, CommonWidgetSwitcher_Proximity) == 0x000740, "Member 'UShowdownEventTileViolator_C::CommonWidgetSwitcher_Proximity' has a wrong offset!");
static_assert(offsetof(UShowdownEventTileViolator_C, LiveViolator) == 0x000748, "Member 'UShowdownEventTileViolator_C::LiveViolator' has a wrong offset!");
static_assert(offsetof(UShowdownEventTileViolator_C, OverrideDoNotShowRound) == 0x000750, "Member 'UShowdownEventTileViolator_C::OverrideDoNotShowRound' has a wrong offset!");

}
