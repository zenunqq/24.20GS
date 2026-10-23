#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTournamentLiveGamesEntry_C final : public UFortTournamentLiveGameSessionEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UCommonBorder*                          CommonBorder_IsPlayer;
	class UCommonBorder*                          CommonBorder_Selected;
	class UCommonBorder*                          CommonBorder_Zebra;

public:
	void BP_OnDeselected();
	void BP_OnSelected();
	void ExecuteUbergraph_TournamentLiveGamesEntry(int32 EntryPoint);
	void OnEntrySet(int32 EntryIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentLiveGamesEntry_C">();
	}
	static class UTournamentLiveGamesEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentLiveGamesEntry_C>();
	}
};
static_assert(alignof(UTournamentLiveGamesEntry_C) == 0x000010, "Wrong alignment on UTournamentLiveGamesEntry_C");
static_assert(sizeof(UTournamentLiveGamesEntry_C) == 0x001480, "Wrong size on UTournamentLiveGamesEntry_C");
static_assert(offsetof(UTournamentLiveGamesEntry_C, UberGraphFrame) == 0x001450, "Member 'UTournamentLiveGamesEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGamesEntry_C, Selected) == 0x001458, "Member 'UTournamentLiveGamesEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGamesEntry_C, CommonBorder_IsPlayer) == 0x001460, "Member 'UTournamentLiveGamesEntry_C::CommonBorder_IsPlayer' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGamesEntry_C, CommonBorder_Selected) == 0x001468, "Member 'UTournamentLiveGamesEntry_C::CommonBorder_Selected' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGamesEntry_C, CommonBorder_Zebra) == 0x001470, "Member 'UTournamentLiveGamesEntry_C::CommonBorder_Zebra' has a wrong offset!");

}
