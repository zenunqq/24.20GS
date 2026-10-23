#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEventLeaderboardHeader_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonBorder*                          CommonBorder_ScoringTitleBG;
	class UCommonTextBlock*                       Text_RoundTitle;

public:
	void RefreshDataBP();
	void ExecuteUbergraph_EventLeaderboardHeader(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardHeader_C">();
	}
	static class UEventLeaderboardHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardHeader_C>();
	}
};
static_assert(alignof(UEventLeaderboardHeader_C) == 0x000008, "Wrong alignment on UEventLeaderboardHeader_C");
static_assert(sizeof(UEventLeaderboardHeader_C) == 0x000730, "Wrong size on UEventLeaderboardHeader_C");
static_assert(offsetof(UEventLeaderboardHeader_C, UberGraphFrame) == 0x000718, "Member 'UEventLeaderboardHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardHeader_C, CommonBorder_ScoringTitleBG) == 0x000720, "Member 'UEventLeaderboardHeader_C::CommonBorder_ScoringTitleBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardHeader_C, Text_RoundTitle) == 0x000728, "Member 'UEventLeaderboardHeader_C::Text_RoundTitle' has a wrong offset!");

}
