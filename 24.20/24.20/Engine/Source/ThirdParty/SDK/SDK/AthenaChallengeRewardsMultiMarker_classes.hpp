#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaChallengeRewardsMultiMarker_C final : public UAthenaChallengeRewardsMultiMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Inactive;
	class UWidgetAnimation*                       Active;
	class UImage*                                 Image_Circle;

public:
	void ExecuteUbergraph_AthenaChallengeRewardsMultiMarker(int32 EntryPoint);
	void BP_OnSetMarkerActive(bool bIsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengeRewardsMultiMarker_C">();
	}
	static class UAthenaChallengeRewardsMultiMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengeRewardsMultiMarker_C>();
	}
};
static_assert(alignof(UAthenaChallengeRewardsMultiMarker_C) == 0x000008, "Wrong alignment on UAthenaChallengeRewardsMultiMarker_C");
static_assert(sizeof(UAthenaChallengeRewardsMultiMarker_C) == 0x000288, "Wrong size on UAthenaChallengeRewardsMultiMarker_C");
static_assert(offsetof(UAthenaChallengeRewardsMultiMarker_C, UberGraphFrame) == 0x000268, "Member 'UAthenaChallengeRewardsMultiMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeRewardsMultiMarker_C, Inactive) == 0x000270, "Member 'UAthenaChallengeRewardsMultiMarker_C::Inactive' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeRewardsMultiMarker_C, Active) == 0x000278, "Member 'UAthenaChallengeRewardsMultiMarker_C::Active' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeRewardsMultiMarker_C, Image_Circle) == 0x000280, "Member 'UAthenaChallengeRewardsMultiMarker_C::Image_Circle' has a wrong offset!");

}
