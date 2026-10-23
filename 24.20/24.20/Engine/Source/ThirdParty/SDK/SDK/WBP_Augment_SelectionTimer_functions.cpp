#pragma once

#include "Basic.hpp"

#include "WBP_Augment_SelectionTimer_classes.hpp"
#include "WBP_Augment_SelectionTimer_parameters.hpp"

namespace SDK
{

void UWBP_Augment_SelectionTimer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::ExecuteUbergraph_WBP_Augment_SelectionTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "ExecuteUbergraph_WBP_Augment_SelectionTimer");

	Params::WBP_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Augment_SelectionTimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::ForceAugmentReadyState(bool AugmentSelectionAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "ForceAugmentReadyState");

	Params::WBP_Augment_SelectionTimer_C_ForceAugmentReadyState Parms{};

	Parms.AugmentSelectionAvailable = AugmentSelectionAvailable;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::IsAugmentSelectionAvailable(bool* IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "IsAugmentSelectionAvailable");

	Params::WBP_Augment_SelectionTimer_C_IsAugmentSelectionAvailable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnabled != nullptr)
		*IsEnabled = Parms.IsEnabled;
}

void UWBP_Augment_SelectionTimer_C::OnAugmentGrantingTimersFinishedForMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnAugmentGrantingTimersFinishedForMatch");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::OnAugmentReadyFadeInFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnAugmentReadyFadeInFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::OnCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnCanSelectAugmentChanged");

	Params::WBP_Augment_SelectionTimer_C_OnCanSelectAugmentChanged Parms{};

	Parms.bCanSelectAugment = bCanSelectAugment;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::OnHideTimerEventFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnHideTimerEventFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::OnHUDElementVisibilityChanged(const struct FGameplayTagContainer& HiddenElementTagContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnHUDElementVisibilityChanged");

	Params::WBP_Augment_SelectionTimer_C_OnHUDElementVisibilityChanged Parms{};

	Parms.HiddenElementTagContainer = std::move(HiddenElementTagContainer);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::OnLoaded_7B3490DB452F1589FC28169C2C321233(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnLoaded_7B3490DB452F1589FC28169C2C321233");

	Params::WBP_Augment_SelectionTimer_C_OnLoaded_7B3490DB452F1589FC28169C2C321233 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnNumPendingAugmentsToGrantUpdated");

	Params::WBP_Augment_SelectionTimer_C_OnNumPendingAugmentsToGrantUpdated Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::OnPlayerChangedBuildMode(bool bEnteredBuildMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnPlayerChangedBuildMode");

	Params::WBP_Augment_SelectionTimer_C_OnPlayerChangedBuildMode Parms{};

	Parms.bEnteredBuildMode = bEnteredBuildMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::OnTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "OnTimerUpdated");

	Params::WBP_Augment_SelectionTimer_C_OnTimerUpdated Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::PlayReminderAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "PlayReminderAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "PreConstruct");

	Params::WBP_Augment_SelectionTimer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::ResetAugmentReadyStateAnims()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "ResetAugmentReadyStateAnims");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::SetAugmentReadyState(bool AugmentSelectionAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "SetAugmentReadyState");

	Params::WBP_Augment_SelectionTimer_C_SetAugmentReadyState Parms{};

	Parms.AugmentSelectionAvailable = AugmentSelectionAvailable;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::SetMobileProgressTimer(double FPercentLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "SetMobileProgressTimer");

	Params::WBP_Augment_SelectionTimer_C_SetMobileProgressTimer Parms{};

	Parms.FPercentLeft = FPercentLeft;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::SetMobileVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "SetMobileVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::StartHideTimerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "StartHideTimerEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::UpdateCanOpenSelector(bool InPlayerAbleToOpenSelector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "UpdateCanOpenSelector");

	Params::WBP_Augment_SelectionTimer_C_UpdateCanOpenSelector Parms{};

	Parms.InPlayerAbleToOpenSelector = InPlayerAbleToOpenSelector;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::UpdateCountdown(double InTimeLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "UpdateCountdown");

	Params::WBP_Augment_SelectionTimer_C_UpdateCountdown Parms{};

	Parms.InTimeLeft = InTimeLeft;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_SelectionTimer_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_SelectionTimer_C::IsCountdownVisible(bool* IsVisible_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_SelectionTimer_C", "IsCountdownVisible");

	Params::WBP_Augment_SelectionTimer_C_IsCountdownVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible_0 != nullptr)
		*IsVisible_0 = Parms.IsVisible_0;
}

}
