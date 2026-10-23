#pragma once

#include "Basic.hpp"

#include "BattlePassCrewPurchaseContainer_classes.hpp"
#include "BattlePassCrewPurchaseContainer_parameters.hpp"

namespace SDK
{

void UBattlePassCrewPurchaseContainer_C::BattlePassMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "BattlePassMusic");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::CallMusicController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "CallMusicController");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::ExecuteUbergraph_BattlePassCrewPurchaseContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "ExecuteUbergraph_BattlePassCrewPurchaseContainer");

	Params::BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassCrewPurchaseContainer_C::OnContentStateUpdated(EBattlePassCrewContentState InState, bool bInScreenOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "OnContentStateUpdated");

	Params::BattlePassCrewPurchaseContainer_C_OnContentStateUpdated Parms{};

	Parms.InState = InState;
	Parms.bInScreenOpened = bInScreenOpened;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassCrewPurchaseContainer_C::OnLastPlayedAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "OnLastPlayedAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::OnTransitionLeftEvaluated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "OnTransitionLeftEvaluated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::OnTransitionRightEvaluated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "OnTransitionRightEvaluated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::OnTriggerIntroAnimation(bool bCanClaimRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "OnTriggerIntroAnimation");

	Params::BattlePassCrewPurchaseContainer_C_OnTriggerIntroAnimation Parms{};

	Parms.bCanClaimRewards = bCanClaimRewards;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassCrewPurchaseContainer_C::PlayBattlepassSplashAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "PlayBattlepassSplashAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::PlaySubscriptionSplashAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "PlaySubscriptionSplashAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::ResetAnimations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "ResetAnimations");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer_0");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer_1");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer_2");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::SequenceEvent_ToggleScreens(bool isLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "SequenceEvent_ToggleScreens");

	Params::BattlePassCrewPurchaseContainer_C_SequenceEvent_ToggleScreens Parms{};

	Parms.isLeft = isLeft;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassCrewPurchaseContainer_C::StopAllBattlePassMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "StopAllBattlePassMusic");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::SubscriptionMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "SubscriptionMusic");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer_C::TriggerSubTransitionIn(EBattlePassCrewContentState TransitionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "TriggerSubTransitionIn");

	Params::BattlePassCrewPurchaseContainer_C_TriggerSubTransitionIn Parms{};

	Parms.TransitionState = TransitionState;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassCrewPurchaseContainer_C::TriggerSubTransitionOut(EBattlePassCrewContentState TransitionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "TriggerSubTransitionOut");

	Params::BattlePassCrewPurchaseContainer_C_TriggerSubTransitionOut Parms{};

	Parms.TransitionState = TransitionState;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassCrewPurchaseContainer_C::UpSellMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer_C", "UpSellMusic");

	UObject::ProcessEvent(Func, nullptr);
}

}
