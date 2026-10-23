#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaMapNavigableIconStackOfNoLocationChallenges_C final : public UAthenaMapNavigableIconStackOfNoLocationChallenges
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnStartSelected;
	class UWidgetAnimation*                       OnSelectAnim_FromHover;
	class UWidgetAnimation*                       OnHover;
	class UWidgetAnimation*                       Flare_Loop;
	class UWidgetAnimation*                       OnStartAnim;
	class UWidgetAnimation*                       OnSelectedAnim;
	class UBorder*                                Border_0;
	class UCommonTextBlock*                       CommonText_Stack;
	class UCommonTextBlock*                       CommonText_Stack_Count;
	class UCommonTextBlock*                       CompletedCountText;
	class UFortMobileImage*                       Image_Bang;
	class UFortMobileImage*                       Image_Flare;
	class UImage*                                 Image_ShadowFor3dMap;
	class UOverlay*                               Overlay_1;
	class UVerticalBox*                           VerticalBox_2;
	class UTexture*                               DefaultIcon;
	bool                                          bEnforceHideCount;

public:
	void Construct();
	void ExecuteUbergraph_AthenaMapNavigableIconStackOfNoLocationChallenges(int32 EntryPoint);
	void OnBeginIntroAnimation();
	void OnChallengeIconOverriden(const class UTexture2D* Icon);
	void OnChallengeReset();
	void OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang, bool bIsPinned, bool bChallengeSelected);
	void OnChangeBangVisibility(bool bShouldShow);
	void OnChangedStackData(int32 NewStackCount, int32 NonCompletedCount);
	void OnHovered(bool bUserInteraction);
	void OnSelected(bool bUserInteraction);
	void OnSetChallengesInfo(int32 ChallengesNum, int32 CountOfCompletedChallenges);
	void OnSetHasLocation(bool bHasLocation);
	void OnSetIsInGame(bool bIsInGame);
	void OnUnhovered(bool bUserInteraction);
	void OnUnselected(bool bUserInteraction);
	void SetAnywhereState();
	void SetMaterialState(bool Completed, bool Lock, bool HasIconOverride);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMapNavigableIconStackOfNoLocationChallenges_C">();
	}
	static class UAthenaMapNavigableIconStackOfNoLocationChallenges_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMapNavigableIconStackOfNoLocationChallenges_C>();
	}
};
static_assert(alignof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C) == 0x000008, "Wrong alignment on UAthenaMapNavigableIconStackOfNoLocationChallenges_C");
static_assert(sizeof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C) == 0x000400, "Wrong size on UAthenaMapNavigableIconStackOfNoLocationChallenges_C");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, UberGraphFrame) == 0x000370, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, OnStartSelected) == 0x000378, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnStartSelected' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, OnSelectAnim_FromHover) == 0x000380, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnSelectAnim_FromHover' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, OnHover) == 0x000388, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, Flare_Loop) == 0x000390, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::Flare_Loop' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, OnStartAnim) == 0x000398, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnStartAnim' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, OnSelectedAnim) == 0x0003A0, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::OnSelectedAnim' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, Border_0) == 0x0003A8, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::Border_0' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, CommonText_Stack) == 0x0003B0, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::CommonText_Stack' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, CommonText_Stack_Count) == 0x0003B8, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::CommonText_Stack_Count' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, CompletedCountText) == 0x0003C0, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::CompletedCountText' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, Image_Bang) == 0x0003C8, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::Image_Bang' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, Image_Flare) == 0x0003D0, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::Image_Flare' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, Image_ShadowFor3dMap) == 0x0003D8, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::Image_ShadowFor3dMap' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, Overlay_1) == 0x0003E0, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, VerticalBox_2) == 0x0003E8, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::VerticalBox_2' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, DefaultIcon) == 0x0003F0, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::DefaultIcon' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconStackOfNoLocationChallenges_C, bEnforceHideCount) == 0x0003F8, "Member 'UAthenaMapNavigableIconStackOfNoLocationChallenges_C::bEnforceHideCount' has a wrong offset!");

}
