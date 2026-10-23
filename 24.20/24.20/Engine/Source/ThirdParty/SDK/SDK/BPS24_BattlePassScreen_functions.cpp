#pragma once

#include "Basic.hpp"

#include "BPS24_BattlePassScreen_classes.hpp"
#include "BPS24_BattlePassScreen_parameters.hpp"

namespace SDK
{

void UBPS24_BattlePassScreen_C::BndEvt__BPS20_BattlePassScreen_BattlePassLandingPageS18_K2Node_ComponentBoundEvent_5_OnShowButtonDetails__DelegateSignature(const struct FBattlePassLandingPageButtonDisplayDetails& DisplayInfo, bool bShowRewardCount, const class FString& ButtonID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "BndEvt__BPS20_BattlePassScreen_BattlePassLandingPageS18_K2Node_ComponentBoundEvent_5_OnShowButtonDetails__DelegateSignature");

	Params::BPS24_BattlePassScreen_C_BndEvt__BPS20_BattlePassScreen_BattlePassLandingPageS18_K2Node_ComponentBoundEvent_5_OnShowButtonDetails__DelegateSignature Parms{};

	Parms.DisplayInfo = std::move(DisplayInfo);
	Parms.bShowRewardCount = bShowRewardCount;
	Parms.ButtonID = std::move(ButtonID);

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::BndEvt__BPS23_BattlePassScreen_Button_PageComplete_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "BndEvt__BPS23_BattlePassScreen_Button_PageComplete_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");

	Params::BPS24_BattlePassScreen_C_BndEvt__BPS23_BattlePassScreen_Button_PageComplete_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::BndEvt__BPS24_BattlePassScreen_Button_EquipItem_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "BndEvt__BPS24_BattlePassScreen_Button_EquipItem_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::BPS24_BattlePassScreen_C_BndEvt__BPS24_BattlePassScreen_Button_EquipItem_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::ExecuteUbergraph_BPS24_BattlePassScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "ExecuteUbergraph_BPS24_BattlePassScreen");

	Params::BPS24_BattlePassScreen_C_ExecuteUbergraph_BPS24_BattlePassScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::Finished_BDDBAB7E48149DE1E1E15BB089BC8C00()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "Finished_BDDBAB7E48149DE1E1E15BB089BC8C00");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::Finished_C89B18BB4111A2B76DB22680709F0C32()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "Finished_C89B18BB4111A2B76DB22680709F0C32");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::HandleMidseasonDropStyling(const struct FTimespan& Timespan, int32 AvailableRewards, int32 RewardsClaimed, int32 RewardsToClaim, int32 AvailablePages, int32 PagesCompleted, int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "HandleMidseasonDropStyling");

	Params::BPS24_BattlePassScreen_C_HandleMidseasonDropStyling Parms{};

	Parms.Timespan = std::move(Timespan);
	Parms.AvailableRewards = AvailableRewards;
	Parms.RewardsClaimed = RewardsClaimed;
	Parms.RewardsToClaim = RewardsToClaim;
	Parms.AvailablePages = AvailablePages;
	Parms.PagesCompleted = PagesCompleted;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::HandleMidseasonDropStylingsdf(bool TimespanValid, int32 DropsClaimed, int32 DropsToClaim, bool QuestCompleted, bool RewardValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "HandleMidseasonDropStylingsdf");

	Params::BPS24_BattlePassScreen_C_HandleMidseasonDropStylingsdf Parms{};

	Parms.TimespanValid = TimespanValid;
	Parms.DropsClaimed = DropsClaimed;
	Parms.DropsToClaim = DropsToClaim;
	Parms.QuestCompleted = QuestCompleted;
	Parms.RewardValid = RewardValid;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::HandleRewardTimelineAnimation(bool bAnimateRewardTimeline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "HandleRewardTimelineAnimation");

	Params::BPS24_BattlePassScreen_C_HandleRewardTimelineAnimation Parms{};

	Parms.bAnimateRewardTimeline = bAnimateRewardTimeline;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::HandleWatchVideoRequest(bool PlayFromDisc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "HandleWatchVideoRequest");

	Params::BPS24_BattlePassScreen_C_HandleWatchVideoRequest Parms{};

	Parms.PlayFromDisc = PlayFromDisc;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnBattlePassGiftingAllowed(const bool bGiftingAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnBattlePassGiftingAllowed");

	Params::BPS24_BattlePassScreen_C_OnBattlePassGiftingAllowed Parms{};

	Parms.bGiftingAllowed = bGiftingAllowed;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnBattlePassOwned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnBattlePassOwned");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::OnBattlePassViewChanged(EBattlePassView NewView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnBattlePassViewChanged");

	Params::BPS24_BattlePassScreen_C_OnBattlePassViewChanged Parms{};

	Parms.NewView = NewView;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::OnInsufficientResource(const class UFortPersistentResourceItemDefinition* PersistentResource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnInsufficientResource");

	Params::BPS24_BattlePassScreen_C_OnInsufficientResource Parms{};

	Parms.PersistentResource = PersistentResource;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnItemDelayed(const struct FTimespan& Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnItemDelayed");

	Params::BPS24_BattlePassScreen_C_OnItemDelayed Parms{};

	Parms.Delay = std::move(Delay);

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnItemEquipped(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnItemEquipped");

	Params::BPS24_BattlePassScreen_C_OnItemEquipped Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnPreviewActionButtonUpdated(const class FText& RowDisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnPreviewActionButtonUpdated");

	Params::BPS24_BattlePassScreen_C_OnPreviewActionButtonUpdated Parms{};

	Parms.RowDisplayName = std::move(RowDisplayName);

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnRequestViewReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnRequestViewReward");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::OnRequestViewRewardComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnRequestViewRewardComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::OnSetBaseRewardsInfo(const int32 OwnedRewards, const int32 TotalRewards, const int32 CompletedPages, const int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetBaseRewardsInfo");

	Params::BPS24_BattlePassScreen_C_OnSetBaseRewardsInfo Parms{};

	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetBonusRewardsInfo(const bool bIsUnlocked, const int32 OwnedRewards, const int32 TotalRewards, const int32 CompletedPages, const int32 TotalPages, const int32 ClaimedOutfits, const int32 TotalOutfits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetBonusRewardsInfo");

	Params::BPS24_BattlePassScreen_C_OnSetBonusRewardsInfo Parms{};

	Parms.bIsUnlocked = bIsUnlocked;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;
	Parms.ClaimedOutfits = ClaimedOutfits;
	Parms.TotalOutfits = TotalOutfits;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetBonusRewardsLockedStatus(bool bIsUnlocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetBonusRewardsLockedStatus");

	Params::BPS24_BattlePassScreen_C_OnSetBonusRewardsLockedStatus Parms{};

	Parms.bIsUnlocked = bIsUnlocked;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetClaimedRewardInfo(const int32 OwnedRewards, const int32 TotalRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetClaimedRewardInfo");

	Params::BPS24_BattlePassScreen_C_OnSetClaimedRewardInfo Parms{};

	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetCoverPageData(const class FText& Title, const class FText& Description, const bool bPageComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetCoverPageData");

	Params::BPS24_BattlePassScreen_C_OnSetCoverPageData Parms{};

	Parms.Title = std::move(Title);
	Parms.Description = std::move(Description);
	Parms.bPageComplete = bPageComplete;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetCrewInfo(bool bIsNextMonthRewards, const class FText& MonthText, const struct FTimespan& NextMonthlyRewardTimespan, const class FText& CharacterDisplayName, const class FText& CharacterDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetCrewInfo");

	Params::BPS24_BattlePassScreen_C_OnSetCrewInfo Parms{};

	Parms.bIsNextMonthRewards = bIsNextMonthRewards;
	Parms.MonthText = std::move(MonthText);
	Parms.NextMonthlyRewardTimespan = std::move(NextMonthlyRewardTimespan);
	Parms.CharacterDisplayName = std::move(CharacterDisplayName);
	Parms.CharacterDescription = std::move(CharacterDescription);

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetPrerequisiteInfo(const class FText& Description, const int32 CurrentAmount, const int32 NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, const bool bShowPrerequisiteLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetPrerequisiteInfo");

	Params::BPS24_BattlePassScreen_C_OnSetPrerequisiteInfo Parms{};

	Parms.Description = std::move(Description);
	Parms.CurrentAmount = CurrentAmount;
	Parms.NeededAmount = NeededAmount;
	Parms.PrerequisiteType = PrerequisiteType;
	Parms.bShowPrerequisiteLock = bShowPrerequisiteLock;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetQuestDelayTimespan(const struct FTimespan& DelayTimespan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetQuestDelayTimespan");

	Params::BPS24_BattlePassScreen_C_OnSetQuestDelayTimespan Parms{};

	Parms.DelayTimespan = std::move(DelayTimespan);

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetQuestRewardsInfo(const struct FTimespan& DelayTimespan, const int32 OwnedRewards, const int32 TotalRewards, const int32 CompletedPages, const int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetQuestRewardsInfo");

	Params::BPS24_BattlePassScreen_C_OnSetQuestRewardsInfo Parms{};

	Parms.DelayTimespan = std::move(DelayTimespan);
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetResourcePrice(const int32 Cost, const class UFortPersistentResourceItemDefinition* PersistentResource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetResourcePrice");

	Params::BPS24_BattlePassScreen_C_OnSetResourcePrice Parms{};

	Parms.Cost = Cost;
	Parms.PersistentResource = PersistentResource;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnSetWeeklyRewardsInfo(const struct FTimespan& DelayTimespan, const int32 AvailableRewards, const int32 OwnedRewards, const int32 TotalRewards, const int32 AvailablePages, const int32 CompletedPages, const int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnSetWeeklyRewardsInfo");

	Params::BPS24_BattlePassScreen_C_OnSetWeeklyRewardsInfo Parms{};

	Parms.DelayTimespan = std::move(DelayTimespan);
	Parms.AvailableRewards = AvailableRewards;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.AvailablePages = AvailablePages;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnTransitionItemDetails(const bool bTransitionForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnTransitionItemDetails");

	Params::BPS24_BattlePassScreen_C_OnTransitionItemDetails Parms{};

	Parms.bTransitionForward = bTransitionForward;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnUpdateBattlePassRequiredBar(const bool bPassRequiredVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnUpdateBattlePassRequiredBar");

	Params::BPS24_BattlePassScreen_C_OnUpdateBattlePassRequiredBar Parms{};

	Parms.bPassRequiredVisible = bPassRequiredVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnUpdateStatusBar(const class FText& StatusText, const EBattlePassStatusBarTypeS24& BarType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnUpdateStatusBar");

	Params::BPS24_BattlePassScreen_C_OnUpdateStatusBar Parms{};

	Parms.StatusText = std::move(StatusText);
	Parms.BarType = BarType;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnVariantUpdate(int32 CurrentIndex, int32 TotalNumVariants)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnVariantUpdate");

	Params::BPS24_BattlePassScreen_C_OnVariantUpdate Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.TotalNumVariants = TotalNumVariants;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::OnViewReward(const struct FFortRarityItemData& Rarity, bool bNoReward, const class UFortItemDefinition* RewardItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "OnViewReward");

	Params::BPS24_BattlePassScreen_C_OnViewReward Parms{};

	Parms.Rarity = std::move(Rarity);
	Parms.bNoReward = bNoReward;
	Parms.RewardItem = RewardItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::Refresh_View_Details_Actions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "Refresh View Details Actions");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::Set_landing_Page_text(const class FText& Title, const class FText& Description, int32 State_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "Set landing Page text");

	Params::BPS24_BattlePassScreen_C_Set_landing_Page_text Parms{};

	Parms.Title = std::move(Title);
	Parms.Description = std::move(Description);
	Parms.State_Index = State_Index;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::SetTagVisibility(bool BattlePassRequiredVisible, bool CustomizationSkinRequiredVisible, bool ComingSoonVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "SetTagVisibility");

	Params::BPS24_BattlePassScreen_C_SetTagVisibility Parms{};

	Parms.BattlePassRequiredVisible = BattlePassRequiredVisible;
	Parms.CustomizationSkinRequiredVisible = CustomizationSkinRequiredVisible;
	Parms.ComingSoonVisible = ComingSoonVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::UpdateProgressWheel(class UWBP_RewardsProgressWheel_C* ProgressWheel, int32 Owned, int32 Needed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "UpdateProgressWheel");

	Params::BPS24_BattlePassScreen_C_UpdateProgressWheel Parms{};

	Parms.ProgressWheel = ProgressWheel;
	Parms.Owned = Owned;
	Parms.Needed = Needed;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassScreen_C::UpdateSafezonePadding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "UpdateSafezonePadding");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassScreen_C::UpdateStatusBar(const class FText& Text, EBattlePassStatusBarTypeS24 BarType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassScreen_C", "UpdateStatusBar");

	Params::BPS24_BattlePassScreen_C_UpdateStatusBar Parms{};

	Parms.Text = std::move(Text);
	Parms.BarType = BarType;

	UObject::ProcessEvent(Func, &Parms);
}

}
