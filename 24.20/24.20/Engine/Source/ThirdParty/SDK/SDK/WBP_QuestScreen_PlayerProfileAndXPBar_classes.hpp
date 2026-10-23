#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_QuestScreen_PlayerProfileAndXPBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 OnlineStatusIndicator;
	class UOverlay*                               Overlay_2;
	class US18_PlayerBattlePassXpAndReward_C*     S18_PlayerBattlePassXpAndReward_310;
	class UFortSocialAvatarIcon*                  SocialAvatarIcon;

public:
	void Construct();
	void ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar(int32 EntryPoint);
	void SetCollapsedMode(bool IsCollapsed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QuestScreen_PlayerProfileAndXPBar_C">();
	}
	static class UWBP_QuestScreen_PlayerProfileAndXPBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QuestScreen_PlayerProfileAndXPBar_C>();
	}
};
static_assert(alignof(UWBP_QuestScreen_PlayerProfileAndXPBar_C) == 0x000008, "Wrong alignment on UWBP_QuestScreen_PlayerProfileAndXPBar_C");
static_assert(sizeof(UWBP_QuestScreen_PlayerProfileAndXPBar_C) == 0x000290, "Wrong size on UWBP_QuestScreen_PlayerProfileAndXPBar_C");
static_assert(offsetof(UWBP_QuestScreen_PlayerProfileAndXPBar_C, UberGraphFrame) == 0x000268, "Member 'UWBP_QuestScreen_PlayerProfileAndXPBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_QuestScreen_PlayerProfileAndXPBar_C, OnlineStatusIndicator) == 0x000270, "Member 'UWBP_QuestScreen_PlayerProfileAndXPBar_C::OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UWBP_QuestScreen_PlayerProfileAndXPBar_C, Overlay_2) == 0x000278, "Member 'UWBP_QuestScreen_PlayerProfileAndXPBar_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UWBP_QuestScreen_PlayerProfileAndXPBar_C, S18_PlayerBattlePassXpAndReward_310) == 0x000280, "Member 'UWBP_QuestScreen_PlayerProfileAndXPBar_C::S18_PlayerBattlePassXpAndReward_310' has a wrong offset!");
static_assert(offsetof(UWBP_QuestScreen_PlayerProfileAndXPBar_C, SocialAvatarIcon) == 0x000288, "Member 'UWBP_QuestScreen_PlayerProfileAndXPBar_C::SocialAvatarIcon' has a wrong offset!");

}
