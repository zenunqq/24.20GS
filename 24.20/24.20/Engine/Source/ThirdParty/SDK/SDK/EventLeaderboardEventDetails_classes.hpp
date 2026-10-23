#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEventLeaderboardEventDetails_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       Text_EventName;
	class UCommonTextBlock*                       Text_RegionName;
	class UCommonTextBlock*                       Text_SessionName;

public:
	void RefreshDataBP();
	void ExecuteUbergraph_EventLeaderboardEventDetails(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardEventDetails_C">();
	}
	static class UEventLeaderboardEventDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardEventDetails_C>();
	}
};
static_assert(alignof(UEventLeaderboardEventDetails_C) == 0x000008, "Wrong alignment on UEventLeaderboardEventDetails_C");
static_assert(sizeof(UEventLeaderboardEventDetails_C) == 0x000738, "Wrong size on UEventLeaderboardEventDetails_C");
static_assert(offsetof(UEventLeaderboardEventDetails_C, UberGraphFrame) == 0x000718, "Member 'UEventLeaderboardEventDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEventDetails_C, Text_EventName) == 0x000720, "Member 'UEventLeaderboardEventDetails_C::Text_EventName' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEventDetails_C, Text_RegionName) == 0x000728, "Member 'UEventLeaderboardEventDetails_C::Text_RegionName' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEventDetails_C, Text_SessionName) == 0x000730, "Member 'UEventLeaderboardEventDetails_C::Text_SessionName' has a wrong offset!");

}
