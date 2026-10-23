#pragma once

#include "Basic.hpp"

#include "BattlePassS24UI_classes.hpp"
#include "BattlePassS24UI_parameters.hpp"

namespace SDK
{

void UBattlePassLandingPageS24::OnBattlePassSubscriptionAllowed(const bool bSubscriptionAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassLandingPageS24", "OnBattlePassSubscriptionAllowed");

	Params::BattlePassLandingPageS24_OnBattlePassSubscriptionAllowed Parms{};

	Parms.bSubscriptionAllowed = bSubscriptionAllowed;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UBattlePassRewardPageS24::HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassRewardPageS24", "HandleRewardTracksBoundaryNavigation");

	Params::BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation Parms{};

	Parms.InNavigation = InNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UBattlePassRewardPageS24::OnInitForPageType(const ERewardPageType InRewardPageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassRewardPageS24", "OnInitForPageType");

	Params::BattlePassRewardPageS24_OnInitForPageType Parms{};

	Parms.InRewardPageType = InRewardPageType;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassRewardPageS24::OnInputMethodChanged(const ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassRewardPageS24", "OnInputMethodChanged");

	Params::BattlePassRewardPageS24_OnInputMethodChanged Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassRewardPageS24::OnLoadingScreenSelectedChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassRewardPageS24", "OnLoadingScreenSelectedChanged");

	Params::BattlePassRewardPageS24_OnLoadingScreenSelectedChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassRewardPageS24::OnPageChanged(const int32 PageNumber, const int32 RewardPageTotal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassRewardPageS24", "OnPageChanged");

	Params::BattlePassRewardPageS24_OnPageChanged Parms{};

	Parms.PageNumber = PageNumber;
	Parms.RewardPageTotal = RewardPageTotal;

	UObject::ProcessEvent(Func, &Parms);
}

struct FVaultWorldBackgroundData UBattlePassRewardPageS24::GetRewardPageBackgroundData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassRewardPageS24", "GetRewardPageBackgroundData");

	Params::BattlePassRewardPageS24_GetRewardPageBackgroundData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UBattlePassScreenS24::GoBackOneScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "GoBackOneScreen");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UBattlePassScreenS24::HandleClaimRewardComplete(const bool bSuccess, const TArray<class FString>& OfferTemplateIdList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "HandleClaimRewardComplete");

	Params::BattlePassScreenS24_HandleClaimRewardComplete Parms{};

	Parms.bSuccess = bSuccess;
	Parms.OfferTemplateIdList = std::move(OfferTemplateIdList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBattlePassScreenS24::HandleFullScreenMapToggled(bool bMapVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "HandleFullScreenMapToggled");

	Params::BattlePassScreenS24_HandleFullScreenMapToggled Parms{};

	Parms.bMapVisible = bMapVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBattlePassScreenS24::HandleSwitcherVisibilityShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "HandleSwitcherVisibilityShown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UBattlePassScreenS24::OnBattlePassGiftingAllowed(const bool bGiftingAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnBattlePassGiftingAllowed");

	Params::BattlePassScreenS24_OnBattlePassGiftingAllowed Parms{};

	Parms.bGiftingAllowed = bGiftingAllowed;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnBattlePassOwned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnBattlePassOwned");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassScreenS24::OnInsufficientFunds(const EBattlePassCurrencyType CurrencyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnInsufficientFunds");

	Params::BattlePassScreenS24_OnInsufficientFunds Parms{};

	Parms.CurrencyType = CurrencyType;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnInsufficientResource(const class UFortPersistentResourceItemDefinition* PersistentResource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnInsufficientResource");

	Params::BattlePassScreenS24_OnInsufficientResource Parms{};

	Parms.PersistentResource = PersistentResource;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnItemDelayed(const struct FTimespan& Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnItemDelayed");

	Params::BattlePassScreenS24_OnItemDelayed Parms{};

	Parms.Delay = std::move(Delay);

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnSetBaseRewardsInfo(const int32 OwnedRewards, const int32 TotalRewards, const int32 CompletedPages, const int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnSetBaseRewardsInfo");

	Params::BattlePassScreenS24_OnSetBaseRewardsInfo Parms{};

	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnSetBonusRewardsInfo(const bool bIsUnlocked, const int32 OwnedRewards, const int32 TotalRewards, const int32 CompletedPages, const int32 TotalPages, const int32 ClaimedOutfits, const int32 TotalOutfits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnSetBonusRewardsInfo");

	Params::BattlePassScreenS24_OnSetBonusRewardsInfo Parms{};

	Parms.bIsUnlocked = bIsUnlocked;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;
	Parms.ClaimedOutfits = ClaimedOutfits;
	Parms.TotalOutfits = TotalOutfits;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnSetCoverPageData(const class FText& Title, const class FText& Description, const bool bPageComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnSetCoverPageData");

	Params::BattlePassScreenS24_OnSetCoverPageData Parms{};

	Parms.Title = std::move(Title);
	Parms.Description = std::move(Description);
	Parms.bPageComplete = bPageComplete;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnSetCrewInfo(bool bIsNextMonthRewards, const class FText& MonthText, const struct FTimespan& NextMonthlyRewardTimespan, const class FText& CharacterDisplayName, const class FText& CharacterDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnSetCrewInfo");

	Params::BattlePassScreenS24_OnSetCrewInfo Parms{};

	Parms.bIsNextMonthRewards = bIsNextMonthRewards;
	Parms.MonthText = std::move(MonthText);
	Parms.NextMonthlyRewardTimespan = std::move(NextMonthlyRewardTimespan);
	Parms.CharacterDisplayName = std::move(CharacterDisplayName);
	Parms.CharacterDescription = std::move(CharacterDescription);

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnSetItemPrice(const int32 Cost, const EBattlePassCurrencyType CurrencyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnSetItemPrice");

	Params::BattlePassScreenS24_OnSetItemPrice Parms{};

	Parms.Cost = Cost;
	Parms.CurrencyType = CurrencyType;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnSetPrerequisiteInfo(const class FText& Description, const int32 CurrentAmount, const int32 NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, const bool bShowPrerequisiteLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnSetPrerequisiteInfo");

	Params::BattlePassScreenS24_OnSetPrerequisiteInfo Parms{};

	Parms.Description = std::move(Description);
	Parms.CurrentAmount = CurrentAmount;
	Parms.NeededAmount = NeededAmount;
	Parms.PrerequisiteType = PrerequisiteType;
	Parms.bShowPrerequisiteLock = bShowPrerequisiteLock;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnSetQuestRewardsInfo(const struct FTimespan& DelayTimespan, const int32 OwnedRewards, const int32 TotalRewards, const int32 CompletedPages, const int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnSetQuestRewardsInfo");

	Params::BattlePassScreenS24_OnSetQuestRewardsInfo Parms{};

	Parms.DelayTimespan = std::move(DelayTimespan);
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnSetResourcePrice(const int32 Cost, const class UFortPersistentResourceItemDefinition* PersistentResource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnSetResourcePrice");

	Params::BattlePassScreenS24_OnSetResourcePrice Parms{};

	Parms.Cost = Cost;
	Parms.PersistentResource = PersistentResource;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnSetWeeklyRewardsInfo(const struct FTimespan& DelayTimespan, const int32 AvailableRewards, const int32 OwnedRewards, const int32 TotalRewards, const int32 AvailablePages, const int32 CompletedPages, const int32 TotalPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnSetWeeklyRewardsInfo");

	Params::BattlePassScreenS24_OnSetWeeklyRewardsInfo Parms{};

	Parms.DelayTimespan = std::move(DelayTimespan);
	Parms.AvailableRewards = AvailableRewards;
	Parms.OwnedRewards = OwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.AvailablePages = AvailablePages;
	Parms.CompletedPages = CompletedPages;
	Parms.TotalPages = TotalPages;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnTransitionItemDetails(const bool bTransitionForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnTransitionItemDetails");

	Params::BattlePassScreenS24_OnTransitionItemDetails Parms{};

	Parms.bTransitionForward = bTransitionForward;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnUpdateBattlePassRequiredBar(const bool bPassRequiredVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnUpdateBattlePassRequiredBar");

	Params::BattlePassScreenS24_OnUpdateBattlePassRequiredBar Parms{};

	Parms.bPassRequiredVisible = bPassRequiredVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OnUpdateStatusBar(const class FText& StatusText, const EBattlePassStatusBarTypeS24& BarType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OnUpdateStatusBar");

	Params::BattlePassScreenS24_OnUpdateStatusBar Parms{};

	Parms.StatusText = std::move(StatusText);
	Parms.BarType = BarType;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassScreenS24::OverviewShowAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "OverviewShowAnimationFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FTimespan UBattlePassScreenS24::GetQuestPageDelay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "GetQuestPageDelay");

	Params::BattlePassScreenS24_GetQuestPageDelay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UBattlePassScreenS24::IsSeasonalCustomizationItemOwned() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassScreenS24", "IsSeasonalCustomizationItemOwned");

	Params::BattlePassScreenS24_IsSeasonalCustomizationItemOwned Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBattlePassResourcesWidgetS24::OnBattleStarRewardsSet(const int32 Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetS24", "OnBattleStarRewardsSet");

	Params::FortBattlePassResourcesWidgetS24_OnBattleStarRewardsSet Parms{};

	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassResourcesWidgetS24::OnStylePointsRewardsSet(const int32 Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetS24", "OnStylePointsRewardsSet");

	Params::FortBattlePassResourcesWidgetS24_OnStylePointsRewardsSet Parms{};

	Parms.Rewards = Rewards;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassTutorialTooltipS24::HideTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTutorialTooltipS24", "HideTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTutorialTooltipS24::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTutorialTooltipS24", "SetText");

	Params::FortBattlePassTutorialTooltipS24_SetText Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattlePassTutorialTooltipS24::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTutorialTooltipS24", "ShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}
