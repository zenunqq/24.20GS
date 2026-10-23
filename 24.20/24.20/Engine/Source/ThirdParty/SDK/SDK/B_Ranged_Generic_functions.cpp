#pragma once

#include "Basic.hpp"

#include "B_Ranged_Generic_classes.hpp"
#include "B_Ranged_Generic_parameters.hpp"

namespace SDK
{

void AB_Ranged_Generic_C::AbortScopeFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AbortScopeFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ActivateOrDeactivateWindParticle(bool bNewActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateOrDeactivateWindParticle");

	Params::B_Ranged_Generic_C_ActivateOrDeactivateWindParticle Parms{};

	Parms.bNewActive = bNewActive;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::ActivateReloadSmokeFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateReloadSmokeFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ActivateShellsFX(bool Bool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateShellsFX");

	Params::B_Ranged_Generic_C_ActivateShellsFX Parms{};

	Parms.Bool = Bool;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::AddRandomScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AddRandomScale");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::AnimateScopePostProcess__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::AnimateScopePostProcess__Toggle_Scope__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__Toggle Scope__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::AnimateScopePostProcess__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::Bind_on_Effects_Quality()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "Bind on Effects Quality");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::BindFireRateChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "BindFireRateChange");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::DeactivateMuzzleFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateMuzzleFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::DeactivateReloadSmokeFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateReloadSmokeFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::DeactivateShellsFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateShellsFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ExecuteUbergraph_B_Ranged_Generic");

	Params::B_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::ForceScopeBackImmediatly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ForceScopeBackImmediatly");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ForceScopeFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ForceScopeFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::GetActiveMuzzleComponents(TArray<class UFXSystemComponent*>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "GetActiveMuzzleComponents");

	Params::B_Ranged_Generic_C_GetActiveMuzzleComponents Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}

void AB_Ranged_Generic_C::GetCorrectMuzzleNiagaraSystem(TSoftObjectPtr<class UNiagaraSystem>* OutNiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "GetCorrectMuzzleNiagaraSystem");

	Params::B_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutNiagaraSystem != nullptr)
		*OutNiagaraSystem = Parms.OutNiagaraSystem;
}

void AB_Ranged_Generic_C::getScopeComp(class UStaticMeshComponent** ScopeComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "getScopeComp");

	Params::B_Ranged_Generic_C_getScopeComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ScopeComponent != nullptr)
		*ScopeComponent = Parms.ScopeComponent;
}

void AB_Ranged_Generic_C::GetScopeParameters(class UStaticMeshComponent** ScopeComponent, struct FVector2D* DepthOfFieldVignetteRange, struct FVector* WeaponSightsOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "GetScopeParameters");

	Params::B_Ranged_Generic_C_GetScopeParameters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ScopeComponent != nullptr)
		*ScopeComponent = Parms.ScopeComponent;

	if (DepthOfFieldVignetteRange != nullptr)
		*DepthOfFieldVignetteRange = std::move(Parms.DepthOfFieldVignetteRange);

	if (WeaponSightsOffset != nullptr)
		*WeaponSightsOffset = std::move(Parms.WeaponSightsOffset);
}

void AB_Ranged_Generic_C::HideFirstPersonStuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideFirstPersonStuff");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::HideReticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideReticle");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::HideThirdPersonStuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideThirdPersonStuff");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::HideWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideWeapon");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::HideWeaponMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideWeaponMesh");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::InitializeScopeVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "InitializeScopeVariables");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::initScope()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "initScope");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::IsNewFeedbackEnabled(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "IsNewFeedbackEnabled");

	Params::B_Ranged_Generic_C_IsNewFeedbackEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}

void AB_Ranged_Generic_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "K2_OnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::LoadNiagaraMuzzleSoftObject()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "LoadNiagaraMuzzleSoftObject");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::LocalReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "LocalReloadStarted");

	Params::B_Ranged_Generic_C_LocalReloadStarted Parms{};

	Parms.ReloadTime = ReloadTime;
	Parms.ReloadType = ReloadType;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::Muzzle_Flash_FX(bool Persistent_Fire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "Muzzle Flash FX");

	Params::B_Ranged_Generic_C_Muzzle_Flash_FX Parms{};

	Parms.Persistent_Fire = Persistent_Fire;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::Muzzle_Play_Reload_FX(EFortReloadFXState Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "Muzzle Play Reload FX");

	Params::B_Ranged_Generic_C_Muzzle_Play_Reload_FX Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnApplyFireModeData(class UFortWeaponFireModeData* FireModeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnApplyFireModeData");

	Params::B_Ranged_Generic_C_OnApplyFireModeData Parms{};

	Parms.FireModeData = FireModeData;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnEquippedWeaponDestory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnEquippedWeaponDestory");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnInitAlteration");

	Params::B_Ranged_Generic_C_OnInitAlteration Parms{};

	Parms.NewAlteration = NewAlteration;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnInitCosmeticAlterations");

	Params::B_Ranged_Generic_C_OnInitCosmeticAlterations Parms{};

	Parms.CosmeticMod = std::move(CosmeticMod);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_3A9BBE884A5C5966375089938B7DC0CA");

	Params::B_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnLoaded_4D1409A247BFDB4C074B628406FC7A72(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_4D1409A247BFDB4C074B628406FC7A72");

	Params::B_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_4DE6158742ED7EE528BC98A240A81632");

	Params::B_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_5B08633343C4DA6FF40449A8A36357E4");

	Params::B_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_83457BA843174AC6288682A342EBEAD9");

	Params::B_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayImpactFX");

	Params::B_Ranged_Generic_C_OnPlayImpactFX Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnPlayReloadFX(EFortReloadFXState ReloadStage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayReloadFX");

	Params::B_Ranged_Generic_C_OnPlayReloadFX Parms{};

	Parms.ReloadStage = ReloadStage;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayWeaponFireFX");

	Params::B_Ranged_Generic_C_OnPlayWeaponFireFX Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnSetTargeting(bool bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnSetTargeting");

	Params::B_Ranged_Generic_C_OnSetTargeting Parms{};

	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::OnStartOverheated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnStartOverheated");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::OnStopWeaponFireFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnStopWeaponFireFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnWeaponAttached");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnWeaponVisibilityChanged");

	Params::B_Ranged_Generic_C_OnWeaponVisibilityChanged Parms{};

	Parms.bVisible = bVisible;
	Parms.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::PitchUpOnRateOfFireChange(float NewRateOfFire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "PitchUpOnRateOfFireChange");

	Params::B_Ranged_Generic_C_PitchUpOnRateOfFireChange Parms{};

	Parms.NewRateOfFire = NewRateOfFire;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::PlayLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, class FName tag, bool bLooping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "PlayLocalForceFeedback");

	Params::B_Ranged_Generic_C_PlayLocalForceFeedback Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.tag = tag;
	Parms.bLooping = bLooping;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::PlayScopeOutAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "PlayScopeOutAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::PlayScopePP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "PlayScopePP");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ResetDoonceScopeSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ResetDoonceScopeSound");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ReverseScopePP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ReverseScopePP");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ScopeEffectDelay1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ScopeEffectDelay1");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ScopeEffectDelay2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ScopeEffectDelay2");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::SetActiveAlterationIdleParticles(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetActiveAlterationIdleParticles");

	Params::B_Ranged_Generic_C_SetActiveAlterationIdleParticles Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::SetActiveMuzzleComponent(bool NiagaraEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetActiveMuzzleComponent");

	Params::B_Ranged_Generic_C_SetActiveMuzzleComponent Parms{};

	Parms.NiagaraEnabled = NiagaraEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::SetPostProcessParams(double InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetPostProcessParams");

	Params::B_Ranged_Generic_C_SetPostProcessParams Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::SetupShellFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetupShellFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::SetWeaponPierceThrough(bool Enable, int32 TargetLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetWeaponPierceThrough");

	Params::B_Ranged_Generic_C_SetWeaponPierceThrough Parms{};

	Parms.Enable = Enable;
	Parms.TargetLimit = TargetLimit;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetWeaponPierceThrough_ClientRep");

	Params::B_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep Parms{};

	Parms.Enable = Enable;
	Parms.TargetLimit = TargetLimit;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::SetWpnRarity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetWpnRarity");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ShellEjectionFixOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShellEjectionFixOn");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ShellEjectionOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShellEjectionOff");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ShellsON__onPump_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShellsON_(onPump)");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ShowReticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShowReticle");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ShowWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShowWeapon");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::ShowWeaponMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShowWeaponMesh");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::StartScopedAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "StartScopedAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::StopLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, class FName tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "StopLocalForceFeedback");

	Params::B_Ranged_Generic_C_StopLocalForceFeedback Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.tag = tag;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::StopScopedAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "StopScopedAudio");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::UnhideFirstPersonStuffPart1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UnhideFirstPersonStuffPart1");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::UnhideFirstPersonStuffPart2(int32 Which_Call)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UnhideFirstPersonStuffPart2");

	Params::B_Ranged_Generic_C_UnhideFirstPersonStuffPart2 Parms{};

	Parms.Which_Call = Which_Call;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::UnhideThirdPersonStuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UnhideThirdPersonStuff");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "Update Enemy Custom Depths");

	Params::B_Ranged_Generic_C_Update_Enemy_Custom_Depths Parms{};

	Parms.Enable_Or_Disable = Enable_Or_Disable;
	Parms.StencilBufferValue_0 = StencilBufferValue_0;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Ranged_Generic_C::UpdateShellEmittersFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UpdateShellEmittersFX");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Ranged_Generic_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
