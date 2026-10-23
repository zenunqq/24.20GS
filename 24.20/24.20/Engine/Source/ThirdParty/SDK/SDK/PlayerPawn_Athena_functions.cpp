#pragma once

#include "Basic.hpp"

#include "PlayerPawn_Athena_classes.hpp"
#include "PlayerPawn_Athena_parameters.hpp"

namespace SDK
{

void APlayerPawn_Athena_C::ActivateInvincibleVisuals(double Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ActivateInvincibleVisuals");

	Params::PlayerPawn_Athena_C_ActivateInvincibleVisuals Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::AddHighlightFromSource(class UObject* Source, const struct FPawnHighlight& Highlight, bool OnlyUpdateIfCurrent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "AddHighlightFromSource");

	Params::PlayerPawn_Athena_C_AddHighlightFromSource Parms{};

	Parms.Source = Source;
	Parms.Highlight = std::move(Highlight);
	Parms.OnlyUpdateIfCurrent = OnlyUpdateIfCurrent;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::AddSafeZoneGameplayCue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "AddSafeZoneGameplayCue");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::AddSkeletalMeshComponentsFromWeaponObject(class AFortWeapon* WeaponObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "AddSkeletalMeshComponentsFromWeaponObject");

	Params::PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject Parms{};

	Parms.WeaponObject = WeaponObject;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::AddStormFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "AddStormFX");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::AimTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "AimTick");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ApplyColdTag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ApplyColdTag");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ApplyColdTag_Retry(class UFortAbilitySystemComponent* AbilitySystemComponent_0, class AFortPlayerPawn* AffectedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ApplyColdTag_Retry");

	Params::PlayerPawn_Athena_C_ApplyColdTag_Retry Parms{};

	Parms.AbilitySystemComponent_0 = AbilitySystemComponent_0;
	Parms.AffectedPawn = AffectedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::ApplyPawnHighlight(class UObject* Source, const struct FPawnHighlight& HitGlow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ApplyPawnHighlight");

	Params::PlayerPawn_Athena_C_ApplyPawnHighlight Parms{};

	Parms.Source = Source;
	Parms.HitGlow = std::move(HitGlow);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::AttemptToSetRimLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "AttemptToSetRimLight");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::CleanupDissolveFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "CleanupDissolveFX");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::CleanUpTeleportationFXLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "CleanUpTeleportationFXLight");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ClientRunSnowGC(bool Instant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ClientRunSnowGC");

	Params::PlayerPawn_Athena_C_ClientRunSnowGC Parms{};

	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::EnableWaterAudio(bool Is_Entering_Water)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "EnableWaterAudio");

	Params::PlayerPawn_Athena_C_EnableWaterAudio Parms{};

	Parms.Is_Entering_Water = Is_Entering_Water;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::EndRotationTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "EndRotationTick");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ExecuteUbergraph_PlayerPawn_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ExecuteUbergraph_PlayerPawn_Athena");

	Params::PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::FindBounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "FindBounds");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::GalileoMaterialSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GalileoMaterialSetup");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_DBNOEnter(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.DBNOEnter");

	Params::PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_DBNOResurrect(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.DBNOResurrect");

	Params::PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	Params::PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1 Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	Params::PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2 Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Athena_Boost(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Boost");

	Params::PlayerPawn_Athena_C_GameplayCue_Athena_Boost Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Athena_Equipping(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Equipping");

	Params::PlayerPawn_Athena_C_GameplayCue_Athena_Equipping Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Athena_Player_BeingRevivedFromDBNO(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Player.BeingRevivedFromDBNO");

	Params::PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Athena_Reloading(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Athena.Reloading");

	Params::PlayerPawn_Athena_C_GameplayCue_Athena_Reloading Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Damage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Damage");

	Params::PlayerPawn_Athena_C_GameplayCue_Damage Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Damage_Shielded(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Damage.Shielded");

	Params::PlayerPawn_Athena_C_GameplayCue_Damage_Shielded Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Healing(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Healing");

	Params::PlayerPawn_Athena_C_GameplayCue_Healing Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::GameplayCue_Shield_PotionConsumed(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GameplayCue.Shield.PotionConsumed");

	Params::PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::Get_Highest_Priority_Highlight(class UObject** Source, struct FPawnHighlight* Top_Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Get Highest Priority Highlight");

	Params::PlayerPawn_Athena_C_Get_Highest_Priority_Highlight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Source != nullptr)
		*Source = Parms.Source;

	if (Top_Priority != nullptr)
		*Top_Priority = std::move(Parms.Top_Priority);
}

void APlayerPawn_Athena_C::GetAimPoint(struct FRotator* ControlRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GetAimPoint");

	Params::PlayerPawn_Athena_C_GetAimPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ControlRotation != nullptr)
		*ControlRotation = std::move(Parms.ControlRotation);
}

void APlayerPawn_Athena_C::GetForwardAxis(double* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GetForwardAxis");

	Params::PlayerPawn_Athena_C_GetForwardAxis Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

void APlayerPawn_Athena_C::GetLocationInCircle_XY(struct FVector* LocationLocalSpace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GetLocationInCircle_XY");

	Params::PlayerPawn_Athena_C_GetLocationInCircle_XY Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LocationLocalSpace != nullptr)
		*LocationLocalSpace = std::move(Parms.LocationLocalSpace);
}

void APlayerPawn_Athena_C::GetPawnIsInLocalSquad(bool* IsInLocalSquad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GetPawnIsInLocalSquad");

	Params::PlayerPawn_Athena_C_GetPawnIsInLocalSquad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsInLocalSquad != nullptr)
		*IsInLocalSquad = Parms.IsInLocalSquad;
}

void APlayerPawn_Athena_C::GetRightAxis(double* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GetRightAxis");

	Params::PlayerPawn_Athena_C_GetRightAxis Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}

void APlayerPawn_Athena_C::GoToHUBIslandIfOutOfBounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "GoToHUBIslandIfOutOfBounds");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::handleCvarsUpdated(const class FString& CVarName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "handleCvarsUpdated");

	Params::PlayerPawn_Athena_C_handleCvarsUpdated Parms{};

	Parms.CVarName = std::move(CVarName);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::Hide_Character_Parts(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Hide Character Parts");

	Params::PlayerPawn_Athena_C_Hide_Character_Parts Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::Highlight_Pawn_from_Source(class UObject* Source, const struct FPawnHighlight& Highlight, bool Only_Update_If_Current)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Highlight Pawn from Source");

	Params::PlayerPawn_Athena_C_Highlight_Pawn_from_Source Parms{};

	Parms.Source = Source;
	Parms.Highlight = std::move(Highlight);
	Parms.Only_Update_If_Current = Only_Update_If_Current;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::InWarmup(bool* bInWarmup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "InWarmup");

	Params::PlayerPawn_Athena_C_InWarmup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bInWarmup != nullptr)
		*bInWarmup = Parms.bInWarmup;
}

void APlayerPawn_Athena_C::isHiddingInProp(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "isHiddingInProp");

	Params::PlayerPawn_Athena_C_isHiddingInProp Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::IsSwingAttached(bool* IsSwingAttached_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "IsSwingAttached");

	Params::PlayerPawn_Athena_C_IsSwingAttached Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSwingAttached_0 != nullptr)
		*IsSwingAttached_0 = Parms.IsSwingAttached_0;
}

void APlayerPawn_Athena_C::IsSwingGrounded(bool* IsSwingingGrounded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "IsSwingGrounded");

	Params::PlayerPawn_Athena_C_IsSwingGrounded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSwingingGrounded != nullptr)
		*IsSwingingGrounded = Parms.IsSwingingGrounded;
}

void APlayerPawn_Athena_C::IsSwinging(bool* IsSwinging_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "IsSwinging");

	Params::PlayerPawn_Athena_C_IsSwinging Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSwinging_0 != nullptr)
		*IsSwinging_0 = Parms.IsSwinging_0;
}

void APlayerPawn_Athena_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "K2_OnMovementModeChanged");

	Params::PlayerPawn_Athena_C_K2_OnMovementModeChanged Parms{};

	Parms.PrevMovementMode = PrevMovementMode;
	Parms.NewMovementMode = NewMovementMode;
	Parms.PrevCustomMode = PrevCustomMode;
	Parms.NewCustomMode = NewCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::K2_UpdateCustomMovement(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "K2_UpdateCustomMovement");

	Params::PlayerPawn_Athena_C_K2_UpdateCustomMovement Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::LockonSearchCompleteTimedOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "LockonSearchCompleteTimedOut");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::MeleeSwingLeft(bool First_Left)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "MeleeSwingLeft");

	Params::PlayerPawn_Athena_C_MeleeSwingLeft Parms{};

	Parms.First_Left = First_Left;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::MeleeSwingLeft_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "MeleeSwingLeft_End");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::MeleeSwingRight(bool First_Right)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "MeleeSwingRight");

	Params::PlayerPawn_Athena_C_MeleeSwingRight Parms{};

	Parms.First_Right = First_Right;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::MeleeSwingRight_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "MeleeSwingRight_End");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::NotifyTeammateSkydivedFromBus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "NotifyTeammateSkydivedFromBus");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnBeginWaterSprintBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnBeginWaterSprintBoost");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCharacterCustomizationCompleted");

	Params::PlayerPawn_Athena_C_OnCharacterCustomizationCompleted Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnCreativeModeratorModeActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeModeratorModeActivate");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnCreativeModeratorModeDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeModeratorModeDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnCreativeStartGhost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeStartGhost");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnCreativeStartInvulnerable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeStartInvulnerable");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnCreativeStopGhost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeStopGhost");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnCreativeStopInvulnerable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnCreativeStopInvulnerable");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnDBNOStateChanged_Event(class AFortPawn* FortPawn, bool bInIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnDBNOStateChanged_Event");

	Params::PlayerPawn_Athena_C_OnDBNOStateChanged_Event Parms{};

	Parms.FortPawn = FortPawn;
	Parms.bInIsDBNO = bInIsDBNO;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnDeathPlayEffects");

	Params::PlayerPawn_Athena_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnDeathServer");

	Params::PlayerPawn_Athena_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnDisplayHitNotify(float DamageDealt, bool bCriticalHit, bool bFatalHit, bool bShieldHit, class AActor* HitActor, const struct FGameplayTagContainer& HitTags, const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnDisplayHitNotify");

	Params::PlayerPawn_Athena_C_OnDisplayHitNotify Parms{};

	Parms.DamageDealt = DamageDealt;
	Parms.bCriticalHit = bCriticalHit;
	Parms.bFatalHit = bFatalHit;
	Parms.bShieldHit = bShieldHit;
	Parms.HitActor = HitActor;
	Parms.HitTags = std::move(HitTags);
	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnEnteredReplayRelevancy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnEnteredReplayRelevancy");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnEnteredWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnEnteredWaterBody");

	Params::PlayerPawn_Athena_C_OnEnteredWaterBody Parms{};

	Parms.WaterBody = WaterBody;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnEnteredWaterVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnEnteredWaterVolume");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnExitedWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsLastBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnExitedWaterBody");

	Params::PlayerPawn_Athena_C_OnExitedWaterBody Parms{};

	Parms.WaterBody = WaterBody;
	Parms.bIsLastBody = bIsLastBody;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnExitedWaterVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnExitedWaterVolume");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnLandscapeCheckFailedAndTeleported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnLandscapeCheckFailedAndTeleported");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnLeftReplayRelevancy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnLeftReplayRelevancy");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnLockOnSearchCompleted(bool* bConsumeEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnLockOnSearchCompleted");

	Params::PlayerPawn_Athena_C_OnLockOnSearchCompleted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bConsumeEvent != nullptr)
		*bConsumeEvent = Parms.bConsumeEvent;
}

void APlayerPawn_Athena_C::OnOutsideSafeZonePhaseChanged(int32 SafeZonePhase_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnOutsideSafeZonePhaseChanged");

	Params::PlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged Parms{};

	Parms.SafeZonePhase_0 = SafeZonePhase_0;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnPart");

	Params::PlayerPawn_Athena_C_OnPart Parms{};

	Parms.Pawn = Pawn;
	Parms.Part = Part;
	Parms.MeshPart = MeshPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnReady_978607004CDEB137CACF38831BECEF40(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnReady_978607004CDEB137CACF38831BECEF40");

	Params::PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40 Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnReceivedStormSurgeDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnReceivedStormSurgeDamage");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnRep_PlayerAimRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnRep_PlayerAimRotation");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnRep_PlayRespawnFXOnSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnRep_PlayRespawnFXOnSpawn");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnResInDuringWarmup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnResInDuringWarmup");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnSpawnImmunityTimeReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnSpawnImmunityTimeReset");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnStartLongInteract(class AActor* ReceivingActor, bool* Out_bConsumeEvent, bool* Out_bSkipSetInteractDuration, bool* Out_bSkipStartAnimation, EItemInteractionType* Out_ItemInteractionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnStartLongInteract");

	Params::PlayerPawn_Athena_C_OnStartLongInteract Parms{};

	Parms.ReceivingActor = ReceivingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_bConsumeEvent != nullptr)
		*Out_bConsumeEvent = Parms.Out_bConsumeEvent;

	if (Out_bSkipSetInteractDuration != nullptr)
		*Out_bSkipSetInteractDuration = Parms.Out_bSkipSetInteractDuration;

	if (Out_bSkipStartAnimation != nullptr)
		*Out_bSkipStartAnimation = Parms.Out_bSkipStartAnimation;

	if (Out_ItemInteractionType != nullptr)
		*Out_ItemInteractionType = Parms.Out_ItemInteractionType;
}

void APlayerPawn_Athena_C::OnSuccessfulBuildingEdit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnSuccessfulBuildingEdit");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnTetheredExitPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnTetheredExitPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnTetheredExitReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnTetheredExitReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::OnTetherEnded(class APawn* LastTetherPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnTetherEnded");

	Params::PlayerPawn_Athena_C_OnTetherEnded Parms{};

	Parms.LastTetherPawn = LastTetherPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::OnTetherStarted(class APawn* LastTetherPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "OnTetherStarted");

	Params::PlayerPawn_Athena_C_OnTetherStarted Parms{};

	Parms.LastTetherPawn = LastTetherPawn;

	UObject::ProcessEvent(Func, &Parms);
}

bool APlayerPawn_Athena_C::PawnIsDecoy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "PawnIsDecoy");

	Params::PlayerPawn_Athena_C_PawnIsDecoy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool APlayerPawn_Athena_C::PawnIsNPC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "PawnIsNPC");

	Params::PlayerPawn_Athena_C_PawnIsNPC Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void APlayerPawn_Athena_C::Play_Respawn_FX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Play Respawn FX");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::QueueTeleportIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "QueueTeleportIn");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::QueueTeleportOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "QueueTeleportOut");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveEndPlay");

	Params::PlayerPawn_Athena_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceiveHit");

	Params::PlayerPawn_Athena_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ReceivePossessed");

	Params::PlayerPawn_Athena_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::Remove_Pawn_Highlight_from_Source(class UObject* Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Remove Pawn Highlight from Source");

	Params::PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::RemoveHighlightFromSource(class UObject* Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveHighlightFromSource");

	Params::PlayerPawn_Athena_C_RemoveHighlightFromSource Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::RemoveSafeZoneGameplayCue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveSafeZoneGameplayCue");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::RemoveSafeZoneGameplayCueServerToClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveSafeZoneGameplayCueServerToClient");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::RemoveSkeletalMeshComponentsFromWeaponObject(class AFortWeapon* WeaponObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveSkeletalMeshComponentsFromWeaponObject");

	Params::PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject Parms{};

	Parms.WeaponObject = WeaponObject;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::RemoveStormFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "RemoveStormFX");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ReplicateAimRotation(const struct FRotator& PlayerAimRotation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ReplicateAimRotation");

	Params::PlayerPawn_Athena_C_ReplicateAimRotation Parms{};

	Parms.PlayerAimRotation_0 = std::move(PlayerAimRotation_0);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::RestoreCharacterMats(bool* bFullyCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "RestoreCharacterMats");

	Params::PlayerPawn_Athena_C_RestoreCharacterMats Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bFullyCompleted != nullptr)
		*bFullyCompleted = Parms.bFullyCompleted;
}

void APlayerPawn_Athena_C::Rimlight_Setup(const class FString& CVarName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Rimlight Setup");

	Params::PlayerPawn_Athena_C_Rimlight_Setup Parms{};

	Parms.CVarName = std::move(CVarName);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::SafeZoneStatusChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SafeZoneStatusChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ScalePlayerDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ScalePlayerDown");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::ScalePlayerUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "ScalePlayerUp");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::SetPartyInProgress(bool bIsPartyInProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SetPartyInProgress");

	Params::PlayerPawn_Athena_C_SetPartyInProgress Parms{};

	Parms.bIsPartyInProgress = bIsPartyInProgress;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::SetPetHidden(bool NewHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SetPetHidden");

	Params::PlayerPawn_Athena_C_SetPetHidden Parms{};

	Parms.NewHidden = NewHidden;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::SetSafeZonePhaseAndGameplayCueTag(int32 InSafeZonePhase, bool bSpawnGameplayCue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SetSafeZonePhaseAndGameplayCueTag");

	Params::PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag Parms{};

	Parms.InSafeZonePhase = InSafeZonePhase;
	Parms.bSpawnGameplayCue = bSpawnGameplayCue;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::SetSafeZoneTagWhenChanged(int32 NewWhichSafeZoneTag, const struct FGameplayTag& GameplayTag, bool bSpawnGameplayCue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SetSafeZoneTagWhenChanged");

	Params::PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged Parms{};

	Parms.NewWhichSafeZoneTag = NewWhichSafeZoneTag;
	Parms.GameplayTag = std::move(GameplayTag);
	Parms.bSpawnGameplayCue = bSpawnGameplayCue;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::SetupColdTag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SetupColdTag");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::SetupDissolveFx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SetupDissolveFx");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::SpawnTeleportationLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SpawnTeleportationLight");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::StartAImRotationTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "StartAImRotationTick");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::StopLoopingAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "StopLoopingAudio");

	UObject::ProcessEvent(Func, nullptr);
}

struct FVector APlayerPawn_Athena_C::Swing_GetStartPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Swing_GetStartPoint");

	Params::PlayerPawn_Athena_C_Swing_GetStartPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void APlayerPawn_Athena_C::SwingAttached(const struct FVector& AttachLocation, class AActor* AttachedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingAttached");

	Params::PlayerPawn_Athena_C_SwingAttached Parms{};

	Parms.AttachLocation = std::move(AttachLocation);
	Parms.AttachedActor = AttachedActor;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::SwingDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingDetached");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::Swinging_AttachLocation(struct FVector* Location, bool* AttachPointExists)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_AttachLocation");

	Params::PlayerPawn_Athena_C_Swinging_AttachLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (AttachPointExists != nullptr)
		*AttachPointExists = Parms.AttachPointExists;
}

void APlayerPawn_Athena_C::Swinging_CheckGrounded(bool* Grounded_, struct FVector* HitNormal, double* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_CheckGrounded");

	Params::PlayerPawn_Athena_C_Swinging_CheckGrounded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Grounded_ != nullptr)
		*Grounded_ = Parms.Grounded_;

	if (HitNormal != nullptr)
		*HitNormal = std::move(Parms.HitNormal);

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}

void APlayerPawn_Athena_C::Swinging_ResetMeshTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_ResetMeshTransform");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::Swinging_SetJumpHeight(double Jump_ZVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_SetJumpHeight");

	Params::PlayerPawn_Athena_C_Swinging_SetJumpHeight Parms{};

	Parms.Jump_ZVelocity = Jump_ZVelocity;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::Swinging_StartReelingIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_StartReelingIn");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::Swinging_StopReelingIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Swinging_StopReelingIn");

	UObject::ProcessEvent(Func, nullptr);
}

struct FVector APlayerPawn_Athena_C::SwingingVectorToAttachPoint(const class FString& caller_ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "SwingingVectorToAttachPoint");

	Params::PlayerPawn_Athena_C_SwingingVectorToAttachPoint Parms{};

	Parms.caller_ID = std::move(caller_ID);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void APlayerPawn_Athena_C::TeleportInNSeconds(double SecondsTillTeleport, const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "TeleportInNSeconds");

	Params::PlayerPawn_Athena_C_TeleportInNSeconds Parms{};

	Parms.SecondsTillTeleport = SecondsTillTeleport;
	Parms.DestLocation = std::move(DestLocation);
	Parms.DestRotation = std::move(DestRotation);

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::UpdateDissolveFx(double Scalar_Transition, double Scalar_ZHeight, double Scalar_LightIntensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "UpdateDissolveFx");

	Params::PlayerPawn_Athena_C_UpdateDissolveFx Parms{};

	Parms.Scalar_Transition = Scalar_Transition;
	Parms.Scalar_ZHeight = Scalar_ZHeight;
	Parms.Scalar_LightIntensity = Scalar_LightIntensity;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_C::WhiteoutAndTeleport(const struct FVector& DestLocation, const struct FRotator& DestRotation, bool Instant, double Gravity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_C", "WhiteoutAndTeleport");

	Params::PlayerPawn_Athena_C_WhiteoutAndTeleport Parms{};

	Parms.DestLocation = std::move(DestLocation);
	Parms.DestRotation = std::move(DestRotation);
	Parms.Instant = Instant;
	Parms.Gravity = Gravity;

	UObject::ProcessEvent(Func, &Parms);
}

}
