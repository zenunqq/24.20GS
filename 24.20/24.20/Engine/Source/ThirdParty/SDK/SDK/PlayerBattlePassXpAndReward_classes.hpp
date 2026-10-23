#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPlayerBattlePassXpAndReward_C final : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAthenaPlayerLevelCompact_C*            AthenaPlayerLevel;
	class US17_PlayerBattlePassXpAndReward_C*     S17_PlayerBattlePassXpAndReward;
	class UCommonTextBlock*                       SeasonNameLabel;
	class UCommonTextBlock*                       Text_SeasonNumber;
	bool                                          ShowSeasonText;
	bool                                          bShowSeasonNumberText;

public:
	void ExecuteUbergraph_PlayerBattlePassXpAndReward(int32 EntryPoint);
	void OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result);
	void PreConstruct(bool IsDesignTime);
	void Refresh(struct FFortPublicAccountInfo& FortPublicAccountInfo);
	void SetupReward(class UWidget* Container, class UTextBlock* RewardText, class UDailyQuestRewardInfo_Legacy_C* RewardInfoWidget, bool HasReward, const struct FFortItemQuantityPair& RewardItem, int32 LevelRewarded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerBattlePassXpAndReward_C">();
	}
	static class UPlayerBattlePassXpAndReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerBattlePassXpAndReward_C>();
	}
};
static_assert(alignof(UPlayerBattlePassXpAndReward_C) == 0x000008, "Wrong alignment on UPlayerBattlePassXpAndReward_C");
static_assert(sizeof(UPlayerBattlePassXpAndReward_C) == 0x0002F8, "Wrong size on UPlayerBattlePassXpAndReward_C");
static_assert(offsetof(UPlayerBattlePassXpAndReward_C, UberGraphFrame) == 0x0002C8, "Member 'UPlayerBattlePassXpAndReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerBattlePassXpAndReward_C, AthenaPlayerLevel) == 0x0002D0, "Member 'UPlayerBattlePassXpAndReward_C::AthenaPlayerLevel' has a wrong offset!");
static_assert(offsetof(UPlayerBattlePassXpAndReward_C, S17_PlayerBattlePassXpAndReward) == 0x0002D8, "Member 'UPlayerBattlePassXpAndReward_C::S17_PlayerBattlePassXpAndReward' has a wrong offset!");
static_assert(offsetof(UPlayerBattlePassXpAndReward_C, SeasonNameLabel) == 0x0002E0, "Member 'UPlayerBattlePassXpAndReward_C::SeasonNameLabel' has a wrong offset!");
static_assert(offsetof(UPlayerBattlePassXpAndReward_C, Text_SeasonNumber) == 0x0002E8, "Member 'UPlayerBattlePassXpAndReward_C::Text_SeasonNumber' has a wrong offset!");
static_assert(offsetof(UPlayerBattlePassXpAndReward_C, ShowSeasonText) == 0x0002F0, "Member 'UPlayerBattlePassXpAndReward_C::ShowSeasonText' has a wrong offset!");
static_assert(offsetof(UPlayerBattlePassXpAndReward_C, bShowSeasonNumberText) == 0x0002F1, "Member 'UPlayerBattlePassXpAndReward_C::bShowSeasonNumberText' has a wrong offset!");

}
