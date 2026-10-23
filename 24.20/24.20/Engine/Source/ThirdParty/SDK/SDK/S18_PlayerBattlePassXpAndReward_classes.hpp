#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class US18_PlayerBattlePassXpAndReward_C final : public UFortSeasonDataWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Collapse;
	class UImage*                                 Image_RaceTrack;
	class UCommonRichTextBlock*                   RichText_CurrentLevel;
	class UCommonRichTextBlock*                   RichText_Level;
	int32                                         Max_BPLevel_for_Rewards;

public:
	void Construct();
	void ExecuteUbergraph_S18_PlayerBattlePassXpAndReward(int32 EntryPoint);
	void OnLevelChanged();
	void OnProgressUpdated();
	void OnSuperCharged();
	void SetCollapsedMode(bool IsCollapsed);
	void Update_Text();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"S18_PlayerBattlePassXpAndReward_C">();
	}
	static class US18_PlayerBattlePassXpAndReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<US18_PlayerBattlePassXpAndReward_C>();
	}
};
static_assert(alignof(US18_PlayerBattlePassXpAndReward_C) == 0x000008, "Wrong alignment on US18_PlayerBattlePassXpAndReward_C");
static_assert(sizeof(US18_PlayerBattlePassXpAndReward_C) == 0x0002C0, "Wrong size on US18_PlayerBattlePassXpAndReward_C");
static_assert(offsetof(US18_PlayerBattlePassXpAndReward_C, UberGraphFrame) == 0x000290, "Member 'US18_PlayerBattlePassXpAndReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(US18_PlayerBattlePassXpAndReward_C, Collapse) == 0x000298, "Member 'US18_PlayerBattlePassXpAndReward_C::Collapse' has a wrong offset!");
static_assert(offsetof(US18_PlayerBattlePassXpAndReward_C, Image_RaceTrack) == 0x0002A0, "Member 'US18_PlayerBattlePassXpAndReward_C::Image_RaceTrack' has a wrong offset!");
static_assert(offsetof(US18_PlayerBattlePassXpAndReward_C, RichText_CurrentLevel) == 0x0002A8, "Member 'US18_PlayerBattlePassXpAndReward_C::RichText_CurrentLevel' has a wrong offset!");
static_assert(offsetof(US18_PlayerBattlePassXpAndReward_C, RichText_Level) == 0x0002B0, "Member 'US18_PlayerBattlePassXpAndReward_C::RichText_Level' has a wrong offset!");
static_assert(offsetof(US18_PlayerBattlePassXpAndReward_C, Max_BPLevel_for_Rewards) == 0x0002B8, "Member 'US18_PlayerBattlePassXpAndReward_C::Max_BPLevel_for_Rewards' has a wrong offset!");

}
