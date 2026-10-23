#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaChallengeListEntry_LockedQuest_C final : public UAthenaChallengeListEntry_LockedQuest
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Select;
	class UWidgetAnimation*                       Hovered;
	class UImage*                                 Image_ChallengesUntilUnlock;
	class UImage*                                 Image_Disabled;
	class UImage*                                 Image_Fade;
	class UImage*                                 Image_TimeUntilUnlock;
	class UImage*                                 ImageContainer;
	bool                                          bIsHovered;
	uint8                                         Pad_381[0x7];
	class UMaterialInstance*                      SpinningClock;
	class UMaterialInstance*                      Lock;
	bool                                          bIsSelected;

public:
	void BP_OnChallengeInfoSet(bool bDisabled);
	void BP_OnEntryReleased();
	void BP_OnItemSelectionChanged(bool bIsSelected_0);
	void EndHighlight();
	void ExecuteUbergraph_AthenaChallengeListEntry_LockedQuest(int32 EntryPoint);
	void GetFinalDisplayName(class FText* DisplayName);
	void GetFormattedTime(struct FTimespan& TimeRemaining, class FText* OutputString);
	void OnInitDisplayText(const ELockedWidgetUnlockType& InUnlockType);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void StartHighlight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengeListEntry_LockedQuest_C">();
	}
	static class UAthenaChallengeListEntry_LockedQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengeListEntry_LockedQuest_C>();
	}
};
static_assert(alignof(UAthenaChallengeListEntry_LockedQuest_C) == 0x000008, "Wrong alignment on UAthenaChallengeListEntry_LockedQuest_C");
static_assert(sizeof(UAthenaChallengeListEntry_LockedQuest_C) == 0x0003A0, "Wrong size on UAthenaChallengeListEntry_LockedQuest_C");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, UberGraphFrame) == 0x000340, "Member 'UAthenaChallengeListEntry_LockedQuest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, Select) == 0x000348, "Member 'UAthenaChallengeListEntry_LockedQuest_C::Select' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, Hovered) == 0x000350, "Member 'UAthenaChallengeListEntry_LockedQuest_C::Hovered' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, Image_ChallengesUntilUnlock) == 0x000358, "Member 'UAthenaChallengeListEntry_LockedQuest_C::Image_ChallengesUntilUnlock' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, Image_Disabled) == 0x000360, "Member 'UAthenaChallengeListEntry_LockedQuest_C::Image_Disabled' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, Image_Fade) == 0x000368, "Member 'UAthenaChallengeListEntry_LockedQuest_C::Image_Fade' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, Image_TimeUntilUnlock) == 0x000370, "Member 'UAthenaChallengeListEntry_LockedQuest_C::Image_TimeUntilUnlock' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, ImageContainer) == 0x000378, "Member 'UAthenaChallengeListEntry_LockedQuest_C::ImageContainer' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, bIsHovered) == 0x000380, "Member 'UAthenaChallengeListEntry_LockedQuest_C::bIsHovered' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, SpinningClock) == 0x000388, "Member 'UAthenaChallengeListEntry_LockedQuest_C::SpinningClock' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, Lock) == 0x000390, "Member 'UAthenaChallengeListEntry_LockedQuest_C::Lock' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_LockedQuest_C, bIsSelected) == 0x000398, "Member 'UAthenaChallengeListEntry_LockedQuest_C::bIsSelected' has a wrong offset!");

}
