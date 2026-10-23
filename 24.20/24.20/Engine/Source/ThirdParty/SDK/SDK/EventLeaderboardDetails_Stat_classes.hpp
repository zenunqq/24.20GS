#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UEventLeaderboardDetails_Stat_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       UpdateStat;
	class UCommonTextBlock*                       Text_StatName;
	class UCommonTextBlock*                       Text_StatValue;
	int32                                         StatItemIndex;

public:
	void SetStatData(const class FText& Name_0, double Value, int32 NumFractionalDigits);
	void ExecuteUbergraph_EventLeaderboardDetails_Stat(int32 EntryPoint);
	void EventStatAnim();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardDetails_Stat_C">();
	}
	static class UEventLeaderboardDetails_Stat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardDetails_Stat_C>();
	}
};
static_assert(alignof(UEventLeaderboardDetails_Stat_C) == 0x000008, "Wrong alignment on UEventLeaderboardDetails_Stat_C");
static_assert(sizeof(UEventLeaderboardDetails_Stat_C) == 0x000290, "Wrong size on UEventLeaderboardDetails_Stat_C");
static_assert(offsetof(UEventLeaderboardDetails_Stat_C, UberGraphFrame) == 0x000268, "Member 'UEventLeaderboardDetails_Stat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardDetails_Stat_C, UpdateStat) == 0x000270, "Member 'UEventLeaderboardDetails_Stat_C::UpdateStat' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardDetails_Stat_C, Text_StatName) == 0x000278, "Member 'UEventLeaderboardDetails_Stat_C::Text_StatName' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardDetails_Stat_C, Text_StatValue) == 0x000280, "Member 'UEventLeaderboardDetails_Stat_C::Text_StatValue' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardDetails_Stat_C, StatItemIndex) == 0x000288, "Member 'UEventLeaderboardDetails_Stat_C::StatItemIndex' has a wrong offset!");

}
