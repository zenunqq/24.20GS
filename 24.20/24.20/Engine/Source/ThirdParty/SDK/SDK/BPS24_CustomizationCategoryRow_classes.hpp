#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePassBase_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UBPS24_CustomizationCategoryRow_C final : public UFortBattlePassCustomSkinCategoryTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Image_Lock;
	class UImage*                                 Image_Progress;
	class UImage*                                 Image_Progress_Locked;
	class UProgressBar*                           ProgressBar_1;
	class UCommonVisibilitySwitcher*              Switcher_State;
	class UCommonRichTextBlock*                   Text_Progress;
	class UCommonRichTextBlock*                   Text_Progress_Locked;
	class UCommonRichTextBlock*                   Text_UnlockCondition;
	int32                                         Number_to_unlock;
	bool                                          Is_locked;

public:
	void ExecuteUbergraph_BPS24_CustomizationCategoryRow(int32 EntryPoint);
	void OnLockedProgressUpdated(const int32 CurrentlyOwnedBeforeCategory, const int32 TotalRewardsBeforeCategory, const float LockedProgress);
	void OnLockedStateChanged(const bool bCategoryLocked);
	void OnOwnedTilesUpdated(const int32 CurrentlyOwnedRewards, const int32 TotalRewards, const float CategoryProgress);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_CustomizationCategoryRow_C">();
	}
	static class UBPS24_CustomizationCategoryRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_CustomizationCategoryRow_C>();
	}
};
static_assert(alignof(UBPS24_CustomizationCategoryRow_C) == 0x000008, "Wrong alignment on UBPS24_CustomizationCategoryRow_C");
static_assert(sizeof(UBPS24_CustomizationCategoryRow_C) == 0x000370, "Wrong size on UBPS24_CustomizationCategoryRow_C");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, UberGraphFrame) == 0x000320, "Member 'UBPS24_CustomizationCategoryRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, Image_Lock) == 0x000328, "Member 'UBPS24_CustomizationCategoryRow_C::Image_Lock' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, Image_Progress) == 0x000330, "Member 'UBPS24_CustomizationCategoryRow_C::Image_Progress' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, Image_Progress_Locked) == 0x000338, "Member 'UBPS24_CustomizationCategoryRow_C::Image_Progress_Locked' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, ProgressBar_1) == 0x000340, "Member 'UBPS24_CustomizationCategoryRow_C::ProgressBar_1' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, Switcher_State) == 0x000348, "Member 'UBPS24_CustomizationCategoryRow_C::Switcher_State' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, Text_Progress) == 0x000350, "Member 'UBPS24_CustomizationCategoryRow_C::Text_Progress' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, Text_Progress_Locked) == 0x000358, "Member 'UBPS24_CustomizationCategoryRow_C::Text_Progress_Locked' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, Text_UnlockCondition) == 0x000360, "Member 'UBPS24_CustomizationCategoryRow_C::Text_UnlockCondition' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, Number_to_unlock) == 0x000368, "Member 'UBPS24_CustomizationCategoryRow_C::Number_to_unlock' has a wrong offset!");
static_assert(offsetof(UBPS24_CustomizationCategoryRow_C, Is_locked) == 0x00036C, "Member 'UBPS24_CustomizationCategoryRow_C::Is_locked' has a wrong offset!");

}
