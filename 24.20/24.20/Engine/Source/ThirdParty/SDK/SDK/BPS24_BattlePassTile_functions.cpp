#pragma once

#include "Basic.hpp"

#include "BPS24_BattlePassTile_classes.hpp"
#include "BPS24_BattlePassTile_parameters.hpp"

namespace SDK
{

void UBPS24_BattlePassTile_C::BP_OnHoldCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "BP_OnHoldCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::BP_OnHoldEnded(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "BP_OnHoldEnded");

	Params::BPS24_BattlePassTile_C_BP_OnHoldEnded Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassTile_C::BP_OnHoldReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "BP_OnHoldReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::BP_OnHoldStarted(const float HoldPercentage, const bool bInUseSecondaryHoldAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "BP_OnHoldStarted");

	Params::BPS24_BattlePassTile_C_BP_OnHoldStarted Parms{};

	Parms.HoldPercentage = HoldPercentage;
	Parms.bInUseSecondaryHoldAnimation = bInUseSecondaryHoldAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::ExecuteUbergraph_BPS24_BattlePassTile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "ExecuteUbergraph_BPS24_BattlePassTile");

	Params::BPS24_BattlePassTile_C_ExecuteUbergraph_BPS24_BattlePassTile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassTile_C::ForceRuntimeMaterialParams()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "ForceRuntimeMaterialParams");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::OnAffordabilityChanged(const bool bHasEnougCurrency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnAffordabilityChanged");

	Params::BPS24_BattlePassTile_C_OnAffordabilityChanged Parms{};

	Parms.bHasEnougCurrency = bHasEnougCurrency;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UBPS24_BattlePassTile_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnFocusReceived");

	Params::BPS24_BattlePassTile_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UBPS24_BattlePassTile_C::OnHighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnHighlighted");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::OnLockedProgressUpdated(const float Progress, const int32 CurrentlyOwnedRewards, const int32 NeededRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnLockedProgressUpdated");

	Params::BPS24_BattlePassTile_C_OnLockedProgressUpdated Parms{};

	Parms.Progress = Progress;
	Parms.CurrentlyOwnedRewards = CurrentlyOwnedRewards;
	Parms.NeededRewards = NeededRewards;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassTile_C::OnLockedStateUpdated(const bool OwnsBattlePass, const bool ParentUnlocked, const bool HasRemainingPrerequisites, const bool bIsDelayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnLockedStateUpdated");

	Params::BPS24_BattlePassTile_C_OnLockedStateUpdated Parms{};

	Parms.OwnsBattlePass = OwnsBattlePass;
	Parms.ParentUnlocked = ParentUnlocked;
	Parms.HasRemainingPrerequisites = HasRemainingPrerequisites;
	Parms.bIsDelayed = bIsDelayed;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassTile_C::OnPeeked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnPeeked");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::OnPreviewed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnPreviewed");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::OnRevealed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnRevealed");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::OnSetCurrencyAndPrice(const EBattlePassCurrencyType Currency, const int32 Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnSetCurrencyAndPrice");

	Params::BPS24_BattlePassTile_C_OnSetCurrencyAndPrice Parms{};

	Parms.Currency = Currency;
	Parms.Price = Price;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassTile_C::OnSetTileColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnSetTileColors");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::OnSetTrack(const bool bIsFreeTrack, const bool bOwnsBattlePass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnSetTrack");

	Params::BPS24_BattlePassTile_C_OnSetTrack Parms{};

	Parms.bIsFreeTrack = bIsFreeTrack;
	Parms.bOwnsBattlePass = bOwnsBattlePass;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassTile_C::OnStateChanged(const EBattlePassTileAvailabilityStates NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnStateChanged");

	Params::BPS24_BattlePassTile_C_OnStateChanged Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassTile_C::OnUnhighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnUnhighlighted");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::OnUnpreviewed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "OnUnpreviewed");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BattlePassTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "PreConstruct");

	Params::BPS24_BattlePassTile_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BattlePassTile_C::UpdateTileColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BattlePassTile_C", "UpdateTileColors");

	UObject::ProcessEvent(Func, nullptr);
}

}
