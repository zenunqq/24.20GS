#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaMapNavigableIconSingleChallenge_C final : public UAthenaMapNavigableIconSingleChallenge
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnSelectAnim_FromHover;
	class UWidgetAnimation*                       OnHover;
	class UWidgetAnimation*                       Flare_Loop;
	class UWidgetAnimation*                       OnStartAnim;
	class UWidgetAnimation*                       OnSelectAnim;
	class UCommonTextBlock*                       CommonText_Stack_Count;
	class UFortMobileImage*                       Image_Bang;
	class UFortMobileImage*                       Image_Complete;
	class UFortMobileImage*                       Image_Flare;
	class UImage*                                 Image_ShadowFor3dMap;
	class USizeBox*                               SizeBox_13;
	class UTexture*                               DefaultIcon;

public:
	void Construct();
	void ExecuteUbergraph_AthenaMapNavigableIconSingleChallenge(int32 EntryPoint);
	void OnBeginIntroAnimation();
	void OnChallengeIconOverriden(const class UTexture2D* Icon);
	void OnChallengeReset();
	void OnChallengeSet(bool bIsComplete, bool bIsLocked, bool bHasIconOverride, float Progress, bool bShouldShowBang, bool bIsPinned, bool bChallengeSelected);
	void OnChangeBangVisibility(bool bShouldShow);
	void OnHovered(bool bUserInteraction);
	void OnSelected(bool bUserInteraction);
	void OnSetHasLocation(bool bHasLocation);
	void OnSetIsInGame(bool bIsInGame);
	void OnUnhovered(bool bUserInteraction);
	void OnUnselected(bool bUserInteraction);
	void PreConstruct(bool IsDesignTime);
	void SetMaterialState(bool Complete, bool Locked, bool HasIconOverride);
	void SetPinnedMarker(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMapNavigableIconSingleChallenge_C">();
	}
	static class UAthenaMapNavigableIconSingleChallenge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMapNavigableIconSingleChallenge_C>();
	}
};
static_assert(alignof(UAthenaMapNavigableIconSingleChallenge_C) == 0x000008, "Wrong alignment on UAthenaMapNavigableIconSingleChallenge_C");
static_assert(sizeof(UAthenaMapNavigableIconSingleChallenge_C) == 0x0003A0, "Wrong size on UAthenaMapNavigableIconSingleChallenge_C");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, UberGraphFrame) == 0x000338, "Member 'UAthenaMapNavigableIconSingleChallenge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, OnSelectAnim_FromHover) == 0x000340, "Member 'UAthenaMapNavigableIconSingleChallenge_C::OnSelectAnim_FromHover' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, OnHover) == 0x000348, "Member 'UAthenaMapNavigableIconSingleChallenge_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, Flare_Loop) == 0x000350, "Member 'UAthenaMapNavigableIconSingleChallenge_C::Flare_Loop' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, OnStartAnim) == 0x000358, "Member 'UAthenaMapNavigableIconSingleChallenge_C::OnStartAnim' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, OnSelectAnim) == 0x000360, "Member 'UAthenaMapNavigableIconSingleChallenge_C::OnSelectAnim' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, CommonText_Stack_Count) == 0x000368, "Member 'UAthenaMapNavigableIconSingleChallenge_C::CommonText_Stack_Count' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, Image_Bang) == 0x000370, "Member 'UAthenaMapNavigableIconSingleChallenge_C::Image_Bang' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, Image_Complete) == 0x000378, "Member 'UAthenaMapNavigableIconSingleChallenge_C::Image_Complete' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, Image_Flare) == 0x000380, "Member 'UAthenaMapNavigableIconSingleChallenge_C::Image_Flare' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, Image_ShadowFor3dMap) == 0x000388, "Member 'UAthenaMapNavigableIconSingleChallenge_C::Image_ShadowFor3dMap' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, SizeBox_13) == 0x000390, "Member 'UAthenaMapNavigableIconSingleChallenge_C::SizeBox_13' has a wrong offset!");
static_assert(offsetof(UAthenaMapNavigableIconSingleChallenge_C, DefaultIcon) == 0x000398, "Member 'UAthenaMapNavigableIconSingleChallenge_C::DefaultIcon' has a wrong offset!");

}
