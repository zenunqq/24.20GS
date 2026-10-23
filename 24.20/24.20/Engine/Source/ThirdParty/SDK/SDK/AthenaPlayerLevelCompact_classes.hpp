#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaPlayerLevelCompact_C final : public UFortSeasonDataWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_392;
	class UImage*                                 Image_ProgressBar;
	class UAthenaSeasonItemRewardIcon_C*          RewardIcon;
	class UCommonTextBlock*                       Text_Level;
	TMulticastInlineDelegate<void(int32 Level)>   LevelChanged;

public:
	void ExecuteUbergraph_AthenaPlayerLevelCompact(int32 EntryPoint);
	void OnUpdateRewardIcon_1(const class UFortItem* RewardItem, const TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass);
	void OnUpdateXpBar_1(double Progress, bool bIsMaxLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaPlayerLevelCompact_C">();
	}
	static class UAthenaPlayerLevelCompact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaPlayerLevelCompact_C>();
	}
};
static_assert(alignof(UAthenaPlayerLevelCompact_C) == 0x000008, "Wrong alignment on UAthenaPlayerLevelCompact_C");
static_assert(sizeof(UAthenaPlayerLevelCompact_C) == 0x0002C8, "Wrong size on UAthenaPlayerLevelCompact_C");
static_assert(offsetof(UAthenaPlayerLevelCompact_C, UberGraphFrame) == 0x000290, "Member 'UAthenaPlayerLevelCompact_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerLevelCompact_C, Image_392) == 0x000298, "Member 'UAthenaPlayerLevelCompact_C::Image_392' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerLevelCompact_C, Image_ProgressBar) == 0x0002A0, "Member 'UAthenaPlayerLevelCompact_C::Image_ProgressBar' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerLevelCompact_C, RewardIcon) == 0x0002A8, "Member 'UAthenaPlayerLevelCompact_C::RewardIcon' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerLevelCompact_C, Text_Level) == 0x0002B0, "Member 'UAthenaPlayerLevelCompact_C::Text_Level' has a wrong offset!");
static_assert(offsetof(UAthenaPlayerLevelCompact_C, LevelChanged) == 0x0002B8, "Member 'UAthenaPlayerLevelCompact_C::LevelChanged' has a wrong offset!");

}
