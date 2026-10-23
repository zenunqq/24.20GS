#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaChallengeListEntry_GoalCard_C final : public UAthenaChallengeListEntry_GoalCard
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Disabled;

public:
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_AthenaChallengeListEntry_GoalCard(int32 EntryPoint);
	void IsUsingGamepad(bool* Return_Value);
	void OnChallengeDataSet(bool bDisabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengeListEntry_GoalCard_C">();
	}
	static class UAthenaChallengeListEntry_GoalCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengeListEntry_GoalCard_C>();
	}
};
static_assert(alignof(UAthenaChallengeListEntry_GoalCard_C) == 0x000008, "Wrong alignment on UAthenaChallengeListEntry_GoalCard_C");
static_assert(sizeof(UAthenaChallengeListEntry_GoalCard_C) == 0x0002C0, "Wrong size on UAthenaChallengeListEntry_GoalCard_C");
static_assert(offsetof(UAthenaChallengeListEntry_GoalCard_C, UberGraphFrame) == 0x0002B0, "Member 'UAthenaChallengeListEntry_GoalCard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_GoalCard_C, Image_Disabled) == 0x0002B8, "Member 'UAthenaChallengeListEntry_GoalCard_C::Image_Disabled' has a wrong offset!");

}
