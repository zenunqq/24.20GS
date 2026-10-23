#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTournamentPayoutThresholdEntry_C final : public UFortTournamentPayoutThresholdEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UCommonBorder*                          CommonBorder_IsPlayer;
	class UCommonBorder*                          CommonBorder_Selected;
	class UCommonBorder*                          CommonBorder_Zebra;

public:
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnPayoutDataSet(int32 EntryIndex);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_TournamentPayoutThresholdEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentPayoutThresholdEntry_C">();
	}
	static class UTournamentPayoutThresholdEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentPayoutThresholdEntry_C>();
	}
};
static_assert(alignof(UTournamentPayoutThresholdEntry_C) == 0x000008, "Wrong alignment on UTournamentPayoutThresholdEntry_C");
static_assert(sizeof(UTournamentPayoutThresholdEntry_C) == 0x0002C8, "Wrong size on UTournamentPayoutThresholdEntry_C");
static_assert(offsetof(UTournamentPayoutThresholdEntry_C, UberGraphFrame) == 0x0002A0, "Member 'UTournamentPayoutThresholdEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutThresholdEntry_C, Selected) == 0x0002A8, "Member 'UTournamentPayoutThresholdEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutThresholdEntry_C, CommonBorder_IsPlayer) == 0x0002B0, "Member 'UTournamentPayoutThresholdEntry_C::CommonBorder_IsPlayer' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutThresholdEntry_C, CommonBorder_Selected) == 0x0002B8, "Member 'UTournamentPayoutThresholdEntry_C::CommonBorder_Selected' has a wrong offset!");
static_assert(offsetof(UTournamentPayoutThresholdEntry_C, CommonBorder_Zebra) == 0x0002C0, "Member 'UTournamentPayoutThresholdEntry_C::CommonBorder_Zebra' has a wrong offset!");

}
