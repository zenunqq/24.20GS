#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaMapNavigableIconStackOfChallenges_C final : public UAthenaMapNavigableIconStackOfChallenges
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnSelectAnim_FromHover;
	class UWidgetAnimation*                       OnHover;
	class UWidgetAnimation*                       Flare_Loop;
	class UWidgetAnimation*                       OnStartAnim;
	class UWidgetAnimation*                       OnChangingStackIndexAnim;
	class UWidgetAnimation*                       OnSelectedAnim;
	class UCommonTextBlock*                       CommonText_Stack;
	class UCommonTextBlock*                       CommonText_Stack_Count;
	class UFortMobileImage*                       Image_Bang;
	class UFortMobileImage*                       Image_Flare;
	class UOverlay*                               Overlay_1;
	class UTexture*                               DefaultIcon;
	double                                        ChangingStackIndexBaseStateTime;
	bool                                          bEnforceHideCount;

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_AthenaMapNavigableIconStackOfChallenges(int32 EntryPoint);
	void OnBeginIntroAnimation();
	void OnChallengeIconOverriden(const class UTexture2D* Icon);
	void OnChallengeReset();
	void OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang, bool bIsPinned, bool bChallengeSelected);
	void OnChangeBangVisibility(bool bShouldShow);
	void OnChangedStackData(int32 NewStackCount, int32 NonCompletedCount);
	void OnChangingStackIndexAnimFinished();
	void OnHovered(bool bUserInteraction);
	void OnSelected(bool bUserInteraction);
	void OnSetHasLocation(bool bHasLocation);
	void OnSetIsInGame(bool bIsInGame);
	void OnUnhovered(bool bUserInteraction);
	void OnUnselected(bool bUserInteraction);
	void SetAnywhereState(bool bIsAnytimeChallenge);
	void SetMaterialState(bool Complete, bool Locked, bool HasIconOverride);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMapNavigableIconStackOfChallenges_C">();
	}
	static class UAthenaMapNavigableIconStackOfChallenges_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMapNavigableIconStackOfChallenges_C>();
	}
};
static_assert(alignof(UAthenaMapNavigableIconStackOfChallenges_C) == 0x000008, "Wrong alignment on UAthenaMapNavigableIconStackOfChallenges_C");
static_assert(sizeof(UAthenaMapNavigableIconStackOfChallenges_C) == 0x0003E0, "Wrong size on UAthenaMapNavigableIconStackOfChallenges_C");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, UberGraphFrame) == 0x000368, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, OnSelectAnim_FromHover) == 0x000370, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::OnSelectAnim_FromHover' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, OnHover) == 0x000378, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, Flare_Loop) == 0x000380, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::Flare_Loop' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, OnStartAnim) == 0x000388, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::OnStartAnim' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, OnChangingStackIndexAnim) == 0x000390, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::OnChangingStackIndexAnim' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, OnSelectedAnim) == 0x000398, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::OnSelectedAnim' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, CommonText_Stack) == 0x0003A0, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::CommonText_Stack' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, CommonText_Stack_Count) == 0x0003A8, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::CommonText_Stack_Count' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, Image_Bang) == 0x0003B0, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::Image_Bang' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, Image_Flare) == 0x0003B8, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::Image_Flare' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, Overlay_1) == 0x0003C0, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, DefaultIcon) == 0x0003C8, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::DefaultIcon' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, ChangingStackIndexBaseStateTime) == 0x0003D0, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::ChangingStackIndexBaseStateTime' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfChallenges_C, bEnforceHideCount) == 0x0003D8, "Member 'UAthenaMapNavigableIconStackOfChallenges_C::bEnforceHideCount' has a wrong offset!");

}
