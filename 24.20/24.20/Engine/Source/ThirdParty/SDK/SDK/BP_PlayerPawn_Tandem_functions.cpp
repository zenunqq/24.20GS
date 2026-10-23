#pragma once

#include "Basic.hpp"

#include "BP_PlayerPawn_Tandem_classes.hpp"
#include "BP_PlayerPawn_Tandem_parameters.hpp"

namespace SDK
{

void ABP_PlayerPawn_Tandem_C::EnableHiredTandemHealthBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "EnableHiredTandemHealthBar");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::ExecuteUbergraph_BP_PlayerPawn_Tandem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "ExecuteUbergraph_BP_PlayerPawn_Tandem");

	Params::BP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_Tandem_C::HandlePawnConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "HandlePawnConverted");

	Params::BP_PlayerPawn_Tandem_C_HandlePawnConverted Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_Tandem_C::HandlePawnUnconverted(class AFortPawn* UnconvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "HandlePawnUnconverted");

	Params::BP_PlayerPawn_Tandem_C_HandlePawnUnconverted Parms{};

	Parms.UnconvertedPawn = UnconvertedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_Tandem_C::NPCSetupHealthBarOnDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "NPCSetupHealthBarOnDeath");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::NPCTandemDisableHealthBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "NPCTandemDisableHealthBar");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::NPCTandemEnableHealthBars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "NPCTandemEnableHealthBars");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "OnDeathPlayEffects");

	Params::BP_PlayerPawn_Tandem_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_Tandem_C::OnRep_HealthInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "OnRep_HealthInfo");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::PawnHealthChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "PawnHealthChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "ReceiveEndPlay");

	Params::BP_PlayerPawn_Tandem_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_Tandem_C::StartHealthBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "StartHealthBar");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::StartUpdatingHealthWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "StartUpdatingHealthWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::StopUpdatingHealthWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "StopUpdatingHealthWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::UpdateConvertIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "UpdateConvertIndicator");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::UpdatePawnHealthHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "UpdatePawnHealthHUD");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_Tandem_C::WidgetVisibilityChanged(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "WidgetVisibilityChanged");

	Params::BP_PlayerPawn_Tandem_C_WidgetVisibilityChanged Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
