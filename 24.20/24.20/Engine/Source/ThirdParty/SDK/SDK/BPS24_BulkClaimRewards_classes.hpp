#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePassS24UI_classes.hpp"

namespace SDK
{

class UBPS24_BulkClaimRewards_C final : public UBattlePassBulkBuyPageS24
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UCommonRichTextBlock*                   CommonRichTextBlock_185;
	class UImage*                                 Image_TextBG;
	class USizeBox*                               SB_MobileOverrideLeft;
	class USizeBox*                               SB_MobileOverrideRight;
	class UCommonTextBlock*                       Text_LevelsAmount;
	class UWBP_StatusBar_C*                       WBP_StatusBar;
	int32                                         First_Page_to_Claim;
	int32                                         Last_Page_to_Claim;
	int32                                         Add_One;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_BPS24_BulkClaimRewards(int32 EntryPoint);
	void OnCostChanged(const int32 Cost);
	void OnInitialized();
	void OnPageRangeChanged(const int32 FromPage, const int32 ToPage);
	void OnRewardCountChanged(const int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_BulkClaimRewards_C">();
	}
	static class UBPS24_BulkClaimRewards_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_BulkClaimRewards_C>();
	}
};
static_assert(alignof(UBPS24_BulkClaimRewards_C) == 0x000008, "Wrong alignment on UBPS24_BulkClaimRewards_C");
static_assert(sizeof(UBPS24_BulkClaimRewards_C) == 0x000580, "Wrong size on UBPS24_BulkClaimRewards_C");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, UberGraphFrame) == 0x000530, "Member 'UBPS24_BulkClaimRewards_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, Intro) == 0x000538, "Member 'UBPS24_BulkClaimRewards_C::Intro' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, CommonRichTextBlock_185) == 0x000540, "Member 'UBPS24_BulkClaimRewards_C::CommonRichTextBlock_185' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, Image_TextBG) == 0x000548, "Member 'UBPS24_BulkClaimRewards_C::Image_TextBG' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, SB_MobileOverrideLeft) == 0x000550, "Member 'UBPS24_BulkClaimRewards_C::SB_MobileOverrideLeft' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, SB_MobileOverrideRight) == 0x000558, "Member 'UBPS24_BulkClaimRewards_C::SB_MobileOverrideRight' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, Text_LevelsAmount) == 0x000560, "Member 'UBPS24_BulkClaimRewards_C::Text_LevelsAmount' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, WBP_StatusBar) == 0x000568, "Member 'UBPS24_BulkClaimRewards_C::WBP_StatusBar' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, First_Page_to_Claim) == 0x000570, "Member 'UBPS24_BulkClaimRewards_C::First_Page_to_Claim' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, Last_Page_to_Claim) == 0x000574, "Member 'UBPS24_BulkClaimRewards_C::Last_Page_to_Claim' has a wrong offset!");
static_assert(offsetof(UBPS24_BulkClaimRewards_C, Add_One) == 0x000578, "Member 'UBPS24_BulkClaimRewards_C::Add_One' has a wrong offset!");

}
