#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaChallengeListEntry_NpcQuest_C final : public UAthenaChallengeListEntry_NpcQuest
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                BorderFlavorTextContainer;
	class UBorder*                                ChallengeDescription_Border;
	class UCommonTextBlock*                       CommonTextDone;
	class UImage*                                 CompletionCheck;
	class UHorizontalBox*                         HorizontalBoxBaseContainer;
	class UHorizontalBox*                         HorizontalBoxDescriptionStateContainer;
	class UImage*                                 Image_127;
	class UImage*                                 Image_192;
	class UImage*                                 Image_Disabled;
	class UImage*                                 Image_Fade;
	class UGroupChallengeTag_C*                   Image_GroupIcon;
	class UImage*                                 ImageArrow;
	class UImage*                                 ImageContainer;
	class UImage*                                 ImageLocked;
	class UImage*                                 ImageTimer;
	class UCommonBorder*                          NewBang;
	class UOverlay*                               ProgressOverlay;
	class UCommonRichTextBlock*                   RichText_ChallengeDesc_marquee;
	class USizeBox*                               SizeBox_0;
	class UCommonTextBlock*                       Text_Reset;
	class UCommonTextBlock*                       Text_TimeRemainingUrgent;
	class UHorizontalBox*                         TimerContainer;
	class UWidgetSwitcher*                        WidgetSwitcher_0;
	bool                                          bIsHovered;
	bool                                          bIsGroupChallenge;
	EFortRarity                                   ChallengeRarity;
	uint8                                         Pad_583[0x1];
	struct FLinearColor                           Rarity01_Default;
	struct FLinearColor                           Rarity02_Selected;
	uint8                                         Pad_5A4[0x4];
	class UMaterialInstanceDynamic*               Arrow_Material;
	bool                                          bHasSelectedAnimPlayed;

public:
	void BP_FormatForChallengeOwnerLeftGame(bool bHasOwnerLeftGame);
	void BP_OnChallengeInfoSet(bool bDisabled);
	void BP_OnChallengeSeenChanged(bool bChallengeSeen);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnRaritySet(EFortRarity Rarity);
	void BP_OnTimerSet(EAthenaChallengeTimerState TimerState);
	void Construct();
	void ExecuteUbergraph_AthenaChallengeListEntry_NpcQuest(int32 EntryPoint);
	void IsUsingGamepad(bool* Return_Value);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnSetState(bool bIsCompleted, bool bIsLocked, bool bIsPartyAssisted, bool bIsGroupChallenge_0);
	void Play_Select_Sound();
	void SequenceEvent__ENTRYPOINTAthenaChallengeListEntry_NpcQuest();
	void SetComplete();
	void SetDefault(bool PartyAssisted);
	void SetLocked();
	void SetLockedWithTimer();
	void SetTimerStyling(EAthenaChallengeTimerState TimerState);
	void UpdateGroupChallenge();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengeListEntry_NpcQuest_C">();
	}
	static class UAthenaChallengeListEntry_NpcQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengeListEntry_NpcQuest_C>();
	}
};
static_assert(alignof(UAthenaChallengeListEntry_NpcQuest_C) == 0x000008, "Wrong alignment on UAthenaChallengeListEntry_NpcQuest_C");
static_assert(sizeof(UAthenaChallengeListEntry_NpcQuest_C) == 0x0005B8, "Wrong size on UAthenaChallengeListEntry_NpcQuest_C");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, UberGraphFrame) == 0x0004B0, "Member 'UAthenaChallengeListEntry_NpcQuest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Selected) == 0x0004B8, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Selected' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Hovered) == 0x0004C0, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Hovered' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, BorderFlavorTextContainer) == 0x0004C8, "Member 'UAthenaChallengeListEntry_NpcQuest_C::BorderFlavorTextContainer' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, ChallengeDescription_Border) == 0x0004D0, "Member 'UAthenaChallengeListEntry_NpcQuest_C::ChallengeDescription_Border' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, CommonTextDone) == 0x0004D8, "Member 'UAthenaChallengeListEntry_NpcQuest_C::CommonTextDone' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, CompletionCheck) == 0x0004E0, "Member 'UAthenaChallengeListEntry_NpcQuest_C::CompletionCheck' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, HorizontalBoxBaseContainer) == 0x0004E8, "Member 'UAthenaChallengeListEntry_NpcQuest_C::HorizontalBoxBaseContainer' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, HorizontalBoxDescriptionStateContainer) == 0x0004F0, "Member 'UAthenaChallengeListEntry_NpcQuest_C::HorizontalBoxDescriptionStateContainer' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Image_127) == 0x0004F8, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Image_127' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Image_192) == 0x000500, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Image_192' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Image_Disabled) == 0x000508, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Image_Disabled' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Image_Fade) == 0x000510, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Image_Fade' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Image_GroupIcon) == 0x000518, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Image_GroupIcon' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, ImageArrow) == 0x000520, "Member 'UAthenaChallengeListEntry_NpcQuest_C::ImageArrow' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, ImageContainer) == 0x000528, "Member 'UAthenaChallengeListEntry_NpcQuest_C::ImageContainer' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, ImageLocked) == 0x000530, "Member 'UAthenaChallengeListEntry_NpcQuest_C::ImageLocked' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, ImageTimer) == 0x000538, "Member 'UAthenaChallengeListEntry_NpcQuest_C::ImageTimer' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, NewBang) == 0x000540, "Member 'UAthenaChallengeListEntry_NpcQuest_C::NewBang' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, ProgressOverlay) == 0x000548, "Member 'UAthenaChallengeListEntry_NpcQuest_C::ProgressOverlay' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, RichText_ChallengeDesc_marquee) == 0x000550, "Member 'UAthenaChallengeListEntry_NpcQuest_C::RichText_ChallengeDesc_marquee' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, SizeBox_0) == 0x000558, "Member 'UAthenaChallengeListEntry_NpcQuest_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Text_Reset) == 0x000560, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Text_Reset' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Text_TimeRemainingUrgent) == 0x000568, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Text_TimeRemainingUrgent' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, TimerContainer) == 0x000570, "Member 'UAthenaChallengeListEntry_NpcQuest_C::TimerContainer' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, WidgetSwitcher_0) == 0x000578, "Member 'UAthenaChallengeListEntry_NpcQuest_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, bIsHovered) == 0x000580, "Member 'UAthenaChallengeListEntry_NpcQuest_C::bIsHovered' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, bIsGroupChallenge) == 0x000581, "Member 'UAthenaChallengeListEntry_NpcQuest_C::bIsGroupChallenge' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, ChallengeRarity) == 0x000582, "Member 'UAthenaChallengeListEntry_NpcQuest_C::ChallengeRarity' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Rarity01_Default) == 0x000584, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Rarity01_Default' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Rarity02_Selected) == 0x000594, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Rarity02_Selected' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, Arrow_Material) == 0x0005A8, "Member 'UAthenaChallengeListEntry_NpcQuest_C::Arrow_Material' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeListEntry_NpcQuest_C, bHasSelectedAnimPlayed) == 0x0005B0, "Member 'UAthenaChallengeListEntry_NpcQuest_C::bHasSelectedAnimPlayed' has a wrong offset!");

}
