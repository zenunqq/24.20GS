#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UCosmeticNotification_C final : public UFortNotificationEntry_LevelUp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Outro;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          CommonBorder_Content;
	class UImage*                                 Reward_Glow;
	class UImage*                                 RewardFlare;
	class UScaleBox*                              ScaleBox_Mobile;
	bool                                          bIsQuestCosmetic;

public:
	void UpdateQuestRewardVisuals(const class UFortItemDefinition* RewardItem, EFortRarity QuestRarity);
	void UpdateLevelUpVisuals(const class UFortItemDefinition* RewardItem);
	void StartNotificationOutro();
	void StartNotificationIntro();
	void SetStyle_QuestCosmetic(EFortRarity Rarity);
	void SetStyle_LevelUp();
	void PreConstruct(bool IsDesignTime);
	void OnOutroFinished();
	void OnIntroFinished();
	void ExecuteUbergraph_CosmeticNotification(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CosmeticNotification_C">();
	}
	static class UCosmeticNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCosmeticNotification_C>();
	}
};
static_assert(alignof(UCosmeticNotification_C) == 0x000008, "Wrong alignment on UCosmeticNotification_C");
static_assert(sizeof(UCosmeticNotification_C) == 0x000340, "Wrong size on UCosmeticNotification_C");
static_assert(offsetof(UCosmeticNotification_C, UberGraphFrame) == 0x000300, "Member 'UCosmeticNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCosmeticNotification_C, Outro) == 0x000308, "Member 'UCosmeticNotification_C::Outro' has a wrong offset!");
static_assert(offsetof(UCosmeticNotification_C, Intro) == 0x000310, "Member 'UCosmeticNotification_C::Intro' has a wrong offset!");
static_assert(offsetof(UCosmeticNotification_C, CommonBorder_Content) == 0x000318, "Member 'UCosmeticNotification_C::CommonBorder_Content' has a wrong offset!");
static_assert(offsetof(UCosmeticNotification_C, Reward_Glow) == 0x000320, "Member 'UCosmeticNotification_C::Reward_Glow' has a wrong offset!");
static_assert(offsetof(UCosmeticNotification_C, RewardFlare) == 0x000328, "Member 'UCosmeticNotification_C::RewardFlare' has a wrong offset!");
static_assert(offsetof(UCosmeticNotification_C, ScaleBox_Mobile) == 0x000330, "Member 'UCosmeticNotification_C::ScaleBox_Mobile' has a wrong offset!");
static_assert(offsetof(UCosmeticNotification_C, bIsQuestCosmetic) == 0x000338, "Member 'UCosmeticNotification_C::bIsQuestCosmetic' has a wrong offset!");

}
