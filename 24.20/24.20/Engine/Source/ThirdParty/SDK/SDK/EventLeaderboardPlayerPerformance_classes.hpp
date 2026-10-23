#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UEventLeaderboardPlayerPerformance_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UEventsSimpleButton_C*                  Button_MyPosition;
	class UCommonTextBlock*                       CommonTextBlock_0;
	class UCommonTextBlock*                       CommonTextBlock_1;
	class UHorizontalBox*                         HorizontalBox_Container;
	class UCommonTextBlock*                       Text_PlayerPerformance;
	class UCommonTextBlock*                       Text_PlayerScore;

public:
	void ExecuteUbergraph_EventLeaderboardPlayerPerformance(int32 EntryPoint);
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardPlayerPerformance_C">();
	}
	static class UEventLeaderboardPlayerPerformance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardPlayerPerformance_C>();
	}
};
static_assert(alignof(UEventLeaderboardPlayerPerformance_C) == 0x000008, "Wrong alignment on UEventLeaderboardPlayerPerformance_C");
static_assert(sizeof(UEventLeaderboardPlayerPerformance_C) == 0x000750, "Wrong size on UEventLeaderboardPlayerPerformance_C");
static_assert(offsetof(UEventLeaderboardPlayerPerformance_C, UberGraphFrame) == 0x000718, "Member 'UEventLeaderboardPlayerPerformance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardPlayerPerformance_C, Button_MyPosition) == 0x000720, "Member 'UEventLeaderboardPlayerPerformance_C::Button_MyPosition' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardPlayerPerformance_C, CommonTextBlock_0) == 0x000728, "Member 'UEventLeaderboardPlayerPerformance_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardPlayerPerformance_C, CommonTextBlock_1) == 0x000730, "Member 'UEventLeaderboardPlayerPerformance_C::CommonTextBlock_1' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardPlayerPerformance_C, HorizontalBox_Container) == 0x000738, "Member 'UEventLeaderboardPlayerPerformance_C::HorizontalBox_Container' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardPlayerPerformance_C, Text_PlayerPerformance) == 0x000740, "Member 'UEventLeaderboardPlayerPerformance_C::Text_PlayerPerformance' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardPlayerPerformance_C, Text_PlayerScore) == 0x000748, "Member 'UEventLeaderboardPlayerPerformance_C::Text_PlayerScore' has a wrong offset!");

}
