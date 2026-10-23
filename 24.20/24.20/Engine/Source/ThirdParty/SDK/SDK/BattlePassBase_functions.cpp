#pragma once

#include "Basic.hpp"

#include "BattlePassBase_classes.hpp"
#include "BattlePassBase_parameters.hpp"

namespace SDK
{

void IBattlePassSubPageInterface::OnEnterSubPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassSubPageInterface", "OnEnterSubPage");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassLandingPageButton::OnDisplayDetailsUpdated(const struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnDisplayDetailsUpdated");

	Params::BattlePassLandingPageButton_OnDisplayDetailsUpdated Parms{};

	Parms.NewDisplayDetails = std::move(NewDisplayDetails);

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassLandingPageButton::OnSetTileImageMaterial(class UMaterialInstance* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnSetTileImageMaterial");

	Params::BattlePassLandingPageButton_OnSetTileImageMaterial Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassLandingPageButton::OnShowDisplayDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnShowDisplayDetails");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassLandingPageButton::OnSubscriptionOwnershipUpdated(const bool bOwnsSubsciption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnSubscriptionOwnershipUpdated");

	Params::BattlePassLandingPageButton_OnSubscriptionOwnershipUpdated Parms{};

	Parms.bOwnsSubsciption = bOwnsSubsciption;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassLandingPageButton::OnSubscriptionTextureLoaded(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassLandingPageButton", "OnSubscriptionTextureLoaded");

	Params::BattlePassLandingPageButton_OnSubscriptionTextureLoaded Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

const struct FBattlePassLandingPageButtonDisplayDetails UBattlePassLandingPageButton::GetBattlePassDisplayDetails() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassLandingPageButton", "GetBattlePassDisplayDetails");

	Params::BattlePassLandingPageButton_GetBattlePassDisplayDetails Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBattlePassResourcesWidgetBase::OnShowMoreInfo(bool bShouldShowMoreInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetBase", "OnShowMoreInfo");

	Params::FortBattlePassResourcesWidgetBase_OnShowMoreInfo Parms{};

	Parms.bShouldShowMoreInfo = bShouldShowMoreInfo;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassResourcesWidgetBase::ShowResourcesInfoModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassResourcesWidgetBase", "ShowResourcesInfoModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortBattlePassCustomSkinCategoryTile::FocusTile(const int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "FocusTile");

	Params::FortBattlePassCustomSkinCategoryTile_FocusTile Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattlePassCustomSkinCategoryTile::OnLockedProgressUpdated(const int32 CurrentlyOwnedBeforeCategory, const int32 TotalRewardsBeforeCategory, const float LockedProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "OnLockedProgressUpdated");

	Params::FortBattlePassCustomSkinCategoryTile_OnLockedProgressUpdated Parms{};

	Parms.CurrentlyOwnedBeforeCategory = CurrentlyOwnedBeforeCategory;
	Parms.TotalRewardsBeforeCategory = TotalRewardsBeforeCategory;
	Parms.LockedProgress = LockedProgress;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassCustomSkinCategoryTile::OnLockedStateChanged(const bool bCategoryLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "OnLockedStateChanged");

	Params::FortBattlePassCustomSkinCategoryTile_OnLockedStateChanged Parms{};

	Parms.bCategoryLocked = bCategoryLocked;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassCustomSkinCategoryTile::OnOwnedTilesUpdated(const int32 CurrentlyOwnedRewards, const int32 TotalRewards, const float CategoryProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "OnOwnedTilesUpdated");

	Params::FortBattlePassCustomSkinCategoryTile_OnOwnedTilesUpdated Parms{};

	Parms.CurrentlyOwnedRewards = CurrentlyOwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CategoryProgress = CategoryProgress;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassCustomSkinCategoryTile::SetPreviewedTile(const int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassCustomSkinCategoryTile", "SetPreviewedTile");

	Params::FortBattlePassCustomSkinCategoryTile_SetPreviewedTile Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattlePassBulkBuyPageBase::HandleUserScrolled(float ScrollAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "HandleUserScrolled");

	Params::FortBattlePassBulkBuyPageBase_HandleUserScrolled Parms{};

	Parms.ScrollAmount = ScrollAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattlePassBulkBuyPageBase::OnCostChanged(const int32 Cost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "OnCostChanged");

	Params::FortBattlePassBulkBuyPageBase_OnCostChanged Parms{};

	Parms.Cost = Cost;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassBulkBuyPageBase::OnPageRangeChanged(const int32 FromPage, const int32 ToPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "OnPageRangeChanged");

	Params::FortBattlePassBulkBuyPageBase_OnPageRangeChanged Parms{};

	Parms.FromPage = FromPage;
	Parms.ToPage = ToPage;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassBulkBuyPageBase::OnRewardCountChanged(const int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassBulkBuyPageBase", "OnRewardCountChanged");

	Params::FortBattlePassBulkBuyPageBase_OnRewardCountChanged Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassCheckBoxButton::OnStateChanged(const bool bNewIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassCheckBoxButton", "OnStateChanged");

	Params::FortBattlePassCheckBoxButton_OnStateChanged Parms{};

	Parms.bNewIsChecked = bNewIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortBattlePassContext::CanPurchaseBattlePassLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassContext", "CanPurchaseBattlePassLevel");

	Params::FortBattlePassContext_CanPurchaseBattlePassLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortBattlePassContext::GetCurrentChapterAsText(const bool bFullText) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassContext", "GetCurrentChapterAsText");

	Params::FortBattlePassContext_GetCurrentChapterAsText Parms{};

	Parms.bFullText = bFullText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortBattlePassContext::GetCurrentSeasonNumberAsText(const bool bFullText) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassContext", "GetCurrentSeasonNumberAsText");

	Params::FortBattlePassContext_GetCurrentSeasonNumberAsText Parms{};

	Parms.bFullText = bFullText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortBattlePassContext::GetDefaultDisclaimerText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassContext", "GetDefaultDisclaimerText");

	Params::FortBattlePassContext_GetDefaultDisclaimerText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortBattlePassContext::GetLevelPurchaseDisclaimerText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassContext", "GetLevelPurchaseDisclaimerText");

	Params::FortBattlePassContext_GetLevelPurchaseDisclaimerText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FSeasonCurrencyMcpData> UFortBattlePassContext::GetSeasonalCurrencies() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassContext", "GetSeasonalCurrencies");

	Params::FortBattlePassContext_GetSeasonalCurrencies Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBattlePassDynamicIcon::OnBattlePassInfoUpdated(const bool bOwnsBattlePass) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassDynamicIcon", "OnBattlePassInfoUpdated");

	Params::FortBattlePassDynamicIcon_OnBattlePassInfoUpdated Parms{};

	Parms.bOwnsBattlePass = bOwnsBattlePass;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassPurchaseResourcesWidget::HandlePurchaseComplete(bool bSuccess, const TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& OfferId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "HandlePurchaseComplete");

	Params::FortBattlePassPurchaseResourcesWidget_HandlePurchaseComplete Parms{};

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = std::move(PurchasedItems);
	Parms.OfferId = std::move(OfferId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattlePassPurchaseResourcesWidget::HandlePurchaseMultiComplete(bool bSuccess, const TArray<struct FPurchasedItemInfo>& PurchasedItems, const TArray<class FString>& OfferIdList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "HandlePurchaseMultiComplete");

	Params::FortBattlePassPurchaseResourcesWidget_HandlePurchaseMultiComplete Parms{};

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = std::move(PurchasedItems);
	Parms.OfferIdList = std::move(OfferIdList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortBattlePassPurchaseResourcesWidget::IsReloadMtxEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "IsReloadMtxEnabled");

	Params::FortBattlePassPurchaseResourcesWidget_IsReloadMtxEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBattlePassPurchaseResourcesWidget::OnAmountChangeButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnAmountChangeButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassPurchaseResourcesWidget::OnOfferUnavailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnOfferUnavailable");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassPurchaseResourcesWidget::OnPurchaseAmountChanged(const int32 NewAmount, const int32 LevelsLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnPurchaseAmountChanged");

	Params::FortBattlePassPurchaseResourcesWidget_OnPurchaseAmountChanged Parms{};

	Parms.NewAmount = NewAmount;
	Parms.LevelsLeft = LevelsLeft;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassPurchaseResourcesWidget::OnTotalPriceChanged(const int32 NewPrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnTotalPriceChanged");

	Params::FortBattlePassPurchaseResourcesWidget_OnTotalPriceChanged Parms{};

	Parms.NewPrice = NewPrice;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassPurchaseResourcesWidget::OnUpdatePageUnlockText(const class FText& PageUnlockText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassPurchaseResourcesWidget", "OnUpdatePageUnlockText");

	Params::FortBattlePassPurchaseResourcesWidget_OnUpdatePageUnlockText Parms{};

	Parms.PageUnlockText = std::move(PageUnlockText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassRewardGrid::OnPageSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardGrid", "OnPageSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassRewardGrid::OnPageUnselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardGrid", "OnPageUnselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassRewardGridHeader::OnBattlePassLevelSet(const int32 BattlePassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnBattlePassLevelSet");

	Params::FortBattlePassRewardGridHeader_OnBattlePassLevelSet Parms{};

	Parms.BattlePassLevel = BattlePassLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassRewardGridHeader::OnPageLocked(const int32 RequiredLevel, const int32 RequiredRewards, const bool IsTimeLocked, const struct FTimespan& TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnPageLocked");

	Params::FortBattlePassRewardGridHeader_OnPageLocked Parms{};

	Parms.RequiredLevel = RequiredLevel;
	Parms.RequiredRewards = RequiredRewards;
	Parms.IsTimeLocked = IsTimeLocked;
	Parms.TimeRemaining = std::move(TimeRemaining);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassRewardGridHeader::OnPageNumberSet(const int32 InPageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnPageNumberSet");

	Params::FortBattlePassRewardGridHeader_OnPageNumberSet Parms{};

	Parms.InPageNumber = InPageNumber;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassRewardGridHeader::OnPageUnlocked(const int32 PurchasedRewards, const int32 TotalRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnPageUnlocked");

	Params::FortBattlePassRewardGridHeader_OnPageUnlocked Parms{};

	Parms.PurchasedRewards = PurchasedRewards;
	Parms.TotalRewards = TotalRewards;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassRewardGridHeader::OnSetPageCustomName(const class FText& CustomName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnSetPageCustomName");

	Params::FortBattlePassRewardGridHeader_OnSetPageCustomName Parms{};

	Parms.CustomName = std::move(CustomName);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassRewardGridHeader::OnSetPageType(const ERewardPageType PageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "OnSetPageType");

	Params::FortBattlePassRewardGridHeader_OnSetPageType Parms{};

	Parms.PageType = PageType;

	UObject::ProcessEvent(Func, &Parms);
}

int32 UFortBattlePassRewardGridHeader::GetPageNumber() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardGridHeader", "GetPageNumber");

	Params::FortBattlePassRewardGridHeader_GetPageNumber Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBattlePassRewardTrack::OnPageSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardTrack", "OnPageSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassRewardTrack::OnPageUnselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassRewardTrack", "OnPageUnselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTileBase::OnPeeked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnPeeked");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTileBase::OnRevealed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnRevealed");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTileBase::OnSetRequiresBattlePass(const bool bRequiresBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnSetRequiresBattlePass");

	Params::FortBattlePassTileBase_OnSetRequiresBattlePass Parms{};

	Parms.bRequiresBP = bRequiresBP;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassTileBase::OnSetTileColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnSetTileColors");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTileBase::OnSizeChanged(const struct FVector2D& NewSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnSizeChanged");

	Params::FortBattlePassTileBase_OnSizeChanged Parms{};

	Parms.NewSize = std::move(NewSize);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassTileBase::OnStateChanged(const EBattlePassTileAvailabilityStates NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "OnStateChanged");

	Params::FortBattlePassTileBase_OnStateChanged Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassTileBase::SetSize(const EPageItemTileSize TileSize, const struct FVector2D& CellSpacing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "SetSize");

	Params::FortBattlePassTileBase_SetSize Parms{};

	Parms.TileSize = TileSize;
	Parms.CellSpacing = std::move(CellSpacing);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattlePassTileBase::SetState(const EBattlePassTileAvailabilityStates NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "SetState");

	Params::FortBattlePassTileBase_SetState Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortBattlePassTileBase::AreAnyGrantedItemsEquipped() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "AreAnyGrantedItemsEquipped");

	Params::FortBattlePassTileBase_AreAnyGrantedItemsEquipped Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const EBattlePassTileAvailabilityStates UFortBattlePassTileBase::GetState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "GetState");

	Params::FortBattlePassTileBase_GetState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortBattlePassTileBase::IsAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "IsAvailable");

	Params::FortBattlePassTileBase_IsAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortBattlePassTileBase::IsLocked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "IsLocked");

	Params::FortBattlePassTileBase_IsLocked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortBattlePassTileBase::IsOwned() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTileBase", "IsOwned");

	Params::FortBattlePassTileBase_IsOwned Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBattlePassTile::OnAffordabilityChanged(const bool bHasEnougCurrency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnAffordabilityChanged");

	Params::FortBattlePassTile_OnAffordabilityChanged Parms{};

	Parms.bHasEnougCurrency = bHasEnougCurrency;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassTile::OnHighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnHighlighted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTile::OnLockedProgressUpdated(const float Progress, const int32 CurrentlyOwnedRewards, const int32 NeededRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnLockedProgressUpdated");

	Params::FortBattlePassTile_OnLockedProgressUpdated Parms{};

	Parms.Progress = Progress;
	Parms.CurrentlyOwnedRewards = CurrentlyOwnedRewards;
	Parms.NeededRewards = NeededRewards;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassTile::OnLockedStateUpdated(const bool OwnsBattlePass, const bool ParentUnlocked, const bool HasRemainingPrerequisites, const bool bIsDelayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnLockedStateUpdated");

	Params::FortBattlePassTile_OnLockedStateUpdated Parms{};

	Parms.OwnsBattlePass = OwnsBattlePass;
	Parms.ParentUnlocked = ParentUnlocked;
	Parms.HasRemainingPrerequisites = HasRemainingPrerequisites;
	Parms.bIsDelayed = bIsDelayed;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassTile::OnPreviewed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnPreviewed");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTile::OnSetCurrencyAndPrice(const EBattlePassCurrencyType Currency, const int32 Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnSetCurrencyAndPrice");

	Params::FortBattlePassTile_OnSetCurrencyAndPrice Parms{};

	Parms.Currency = Currency;
	Parms.Price = Price;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassTile::OnSetTrack(const bool bIsFreeTrack, const bool bOwnsBattlePass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnSetTrack");

	Params::FortBattlePassTile_OnSetTrack Parms{};

	Parms.bIsFreeTrack = bIsFreeTrack;
	Parms.bOwnsBattlePass = bOwnsBattlePass;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBattlePassTile::OnTilePreviewCycled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnTilePreviewCycled");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTile::OnUnhighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnUnhighlighted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTile::OnUnpreviewed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "OnUnpreviewed");

	UObject::ProcessEvent(Func, nullptr);
}

bool UFortBattlePassTile::HasPrerequisites() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "HasPrerequisites");

	Params::FortBattlePassTile_HasPrerequisites Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortBattlePassTile::IsAffordable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTile", "IsAffordable");

	Params::FortBattlePassTile_IsAffordable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortBattlePassTutorialTooltip::HideTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTutorialTooltip", "HideTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortBattlePassTutorialTooltip::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTutorialTooltip", "SetText");

	Params::FortBattlePassTutorialTooltip_SetText Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattlePassTutorialTooltip::SetTooltipEnabled(const bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTutorialTooltip", "SetTooltipEnabled");

	Params::FortBattlePassTutorialTooltip_SetTooltipEnabled Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortBattlePassTutorialTooltip::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBattlePassTutorialTooltip", "ShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void URebootRallyQuestPanel::OnRebootRallyEligibilityUpdated(bool bEligible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyQuestPanel", "OnRebootRallyEligibilityUpdated");

	Params::RebootRallyQuestPanel_OnRebootRallyEligibilityUpdated Parms{};

	Parms.bEligible = bEligible;

	UObject::ProcessEvent(Func, &Parms);
}

}
