#pragma once

#include "Basic.hpp"

#include "BP_BattleStarModal_classes.hpp"
#include "BP_BattleStarModal_parameters.hpp"

namespace SDK
{

void UBP_BattleStarModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BattleStarModal_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BattleStarModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BattleStarModal_C::ExecuteUbergraph_BP_BattleStarModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "ExecuteUbergraph_BP_BattleStarModal");

	Params::BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_BattleStarModal_C::OnAmountChangeButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "OnAmountChangeButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BattleStarModal_C::OnOfferUnavailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "OnOfferUnavailable");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BattleStarModal_C::OnPurchaseAmountChanged(const int32 NewAmount, const int32 LevelsLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "OnPurchaseAmountChanged");

	Params::BP_BattleStarModal_C_OnPurchaseAmountChanged Parms{};

	Parms.NewAmount = NewAmount;
	Parms.LevelsLeft = LevelsLeft;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_BattleStarModal_C::OnTotalPriceChanged(const int32 NewPrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "OnTotalPriceChanged");

	Params::BP_BattleStarModal_C_OnTotalPriceChanged Parms{};

	Parms.NewPrice = NewPrice;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_BattleStarModal_C::OnUpdatePageUnlockText(const class FText& PageUnlockText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "OnUpdatePageUnlockText");

	Params::BP_BattleStarModal_C_OnUpdatePageUnlockText Parms{};

	Parms.PageUnlockText = std::move(PageUnlockText);

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_BattleStarModal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "PreConstruct");

	Params::BP_BattleStarModal_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_BattleStarModal_C::Randomize_stars_hovering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "Randomize stars hovering");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BattleStarModal_C::Update_Disclaimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BattleStarModal_C", "Update Disclaimer");

	UObject::ProcessEvent(Func, nullptr);
}

}
