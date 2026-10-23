#pragma once

#include "Basic.hpp"

#include "RiderWidget_classes.hpp"
#include "RiderWidget_parameters.hpp"

namespace SDK
{

void URiderWidget_C::UpdateHealthDelta()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "UpdateHealthDelta");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::UpdateHealth(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "UpdateHealth");

	Params::RiderWidget_C_UpdateHealth Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::UpdateEnergy(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "UpdateEnergy");

	Params::RiderWidget_C_UpdateEnergy Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::UpdateBoostEffect(double ProgressRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "UpdateBoostEffect");

	Params::RiderWidget_C_UpdateBoostEffect Parms{};

	Parms.ProgressRatio = ProgressRatio;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::TryPlayingLowState(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "TryPlayingLowState");

	Params::RiderWidget_C_TryPlayingLowState Parms{};

	Parms.InAnimation = InAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::SetupEventBinds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "SetupEventBinds");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::SetProgressBar(double Value, class UImage* TargetFillBar, class UImage* DeltaBar_0, double PreviousValue, double Threshold, const class FString& FunctionName, struct FTimerHandle& TimerHandle, double DeltaDecayDelay, struct FTimerHandle* DeltaTimerHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "SetProgressBar");

	Params::RiderWidget_C_SetProgressBar Parms{};

	Parms.Value = Value;
	Parms.TargetFillBar = TargetFillBar;
	Parms.DeltaBar_0 = DeltaBar_0;
	Parms.PreviousValue = PreviousValue;
	Parms.Threshold = Threshold;
	Parms.FunctionName = std::move(FunctionName);
	Parms.TimerHandle = std::move(TimerHandle);
	Parms.DeltaDecayDelay = DeltaDecayDelay;

	UObject::ProcessEvent(Func, &Parms);

	TimerHandle = std::move(Parms.TimerHandle);

	if (DeltaTimerHandle != nullptr)
		*DeltaTimerHandle = std::move(Parms.DeltaTimerHandle);
}

void URiderWidget_C::SetHealthValue(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "SetHealthValue");

	Params::RiderWidget_C_SetHealthValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::SetBoostAnim(bool IsBoosting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "SetBoostAnim");

	Params::RiderWidget_C_SetBoostAnim Parms{};

	Parms.IsBoosting = IsBoosting;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::Set_Delta(class UImage* Target, double CurrentValue_0, double PreviousValue, double Threshold, const class FString& FunctionName, struct FTimerHandle& TimerHandle, double DeltaDecayDelay, struct FTimerHandle* TimerHandleRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "Set Delta");

	Params::RiderWidget_C_Set_Delta Parms{};

	Parms.Target = Target;
	Parms.CurrentValue_0 = CurrentValue_0;
	Parms.PreviousValue = PreviousValue;
	Parms.Threshold = Threshold;
	Parms.FunctionName = std::move(FunctionName);
	Parms.TimerHandle = std::move(TimerHandle);
	Parms.DeltaDecayDelay = DeltaDecayDelay;

	UObject::ProcessEvent(Func, &Parms);

	TimerHandle = std::move(Parms.TimerHandle);

	if (TimerHandleRef != nullptr)
		*TimerHandleRef = std::move(Parms.TimerHandleRef);
}

void URiderWidget_C::RiderUIHealthChanged(double Health)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "RiderUIHealthChanged");

	Params::RiderWidget_C_RiderUIHealthChanged Parms{};

	Parms.Health = Health;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::RiderUIEnergyChanged(double Energy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "RiderUIEnergyChanged");

	Params::RiderWidget_C_RiderUIEnergyChanged Parms{};

	Parms.Energy = Energy;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::Removed_2725D3654E4B103B624310B5CBD4B008()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "Removed_2725D3654E4B103B624310B5CBD4B008");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::OnSprintStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "OnSprintStopped");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::OnSprintStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "OnSprintStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::OnRiderUINewStats(const class FText& Name_0, const struct FSlateBrush& Icon, class AActor* RidableActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "OnRiderUINewStats");

	Params::RiderWidget_C_OnRiderUINewStats Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Icon = std::move(Icon);
	Parms.RidableActor = RidableActor;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::OnRiderUIEnd(class AActor* RidableActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "OnRiderUIEnd");

	Params::RiderWidget_C_OnRiderUIEnd Parms{};

	Parms.RidableActor = RidableActor;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::OnOvershieldVisibilityChanged(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "OnOvershieldVisibilityChanged");

	Params::RiderWidget_C_OnOvershieldVisibilityChanged Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::ListenToSprintEvents(bool ListenForSprinting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "ListenToSprintEvents");

	Params::RiderWidget_C_ListenToSprintEvents Parms{};

	Parms.ListenForSprinting = ListenForSprinting;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::InitRiderWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "InitRiderWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::Finished_357CBEA140721428C88288A0127368B0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "Finished_357CBEA140721428C88288A0127368B0");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::ExecuteUbergraph_RiderWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "ExecuteUbergraph_RiderWidget");

	Params::RiderWidget_C_ExecuteUbergraph_RiderWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void URiderWidget_C::EmptyEnergyDelta()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "EmptyEnergyDelta");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::ClearOldBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "ClearOldBindings");

	UObject::ProcessEvent(Func, nullptr);
}

void URiderWidget_C::Added_2054A51646A7A04B3C1966AECE2DA459()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderWidget_C", "Added_2054A51646A7A04B3C1966AECE2DA459");

	UObject::ProcessEvent(Func, nullptr);
}

}
