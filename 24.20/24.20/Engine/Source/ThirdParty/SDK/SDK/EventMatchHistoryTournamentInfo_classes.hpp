#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEventMatchHistoryTournamentInfo_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       Text_TournamentInfo;

public:
	void RefreshDataBP();
	void ExecuteUbergraph_EventMatchHistoryTournamentInfo(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventMatchHistoryTournamentInfo_C">();
	}
	static class UEventMatchHistoryTournamentInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventMatchHistoryTournamentInfo_C>();
	}
};
static_assert(alignof(UEventMatchHistoryTournamentInfo_C) == 0x000008, "Wrong alignment on UEventMatchHistoryTournamentInfo_C");
static_assert(sizeof(UEventMatchHistoryTournamentInfo_C) == 0x000728, "Wrong size on UEventMatchHistoryTournamentInfo_C");
static_assert(offsetof(UEventMatchHistoryTournamentInfo_C, UberGraphFrame) == 0x000718, "Member 'UEventMatchHistoryTournamentInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventMatchHistoryTournamentInfo_C, Text_TournamentInfo) == 0x000720, "Member 'UEventMatchHistoryTournamentInfo_C::Text_TournamentInfo' has a wrong offset!");

}
