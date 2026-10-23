#pragma once

#include "Basic.hpp"

#include "BP_PlayerPawn_NonParticipant_classes.hpp"
#include "BP_PlayerPawn_NonParticipant_parameters.hpp"

namespace SDK
{

void ABP_PlayerPawn_NonParticipant_C::ActivateAlertDBNOCleanUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ActivateAlertDBNOCleanUp");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::AlertLevelChanged(EAlertLevel OldAlertLevel_0, EAlertLevel InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "AlertLevelChanged");

	Params::BP_PlayerPawn_NonParticipant_C_AlertLevelChanged Parms{};

	Parms.OldAlertLevel_0 = OldAlertLevel_0;
	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature");

	Params::BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature");

	Params::BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature Parms{};

	Parms.UnconvertedPawn = UnconvertedPawn;
	Parms.UnconvertReason = UnconvertReason;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::ChallengerDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ChallengerDied");

	Params::BP_PlayerPawn_NonParticipant_C_ChallengerDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::ClientOnAlertLevelChanged(EAlertLevel OldAlertLevel_0, EAlertLevel NewAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ClientOnAlertLevelChanged");

	Params::BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged Parms{};

	Parms.OldAlertLevel_0 = OldAlertLevel_0;
	Parms.NewAlertLevel = NewAlertLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::DataTrackerSetup(bool Is_Registering)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "DataTrackerSetup");

	Params::BP_PlayerPawn_NonParticipant_C_DataTrackerSetup Parms{};

	Parms.Is_Registering = Is_Registering;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::ExecuteUbergraph_BP_PlayerPawn_NonParticipant(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ExecuteUbergraph_BP_PlayerPawn_NonParticipant");

	Params::BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::GameplayCue_Player_Interrogation_Voice_PickedUp(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "GameplayCue.Player.Interrogation.Voice.PickedUp");

	Params::BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::GetCurrentFullbodyHitReactionMontage(class UAnimMontage** CurrentMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "GetCurrentFullbodyHitReactionMontage");

	Params::BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentMontage != nullptr)
		*CurrentMontage = Parms.CurrentMontage;
}

void ABP_PlayerPawn_NonParticipant_C::HandleAlertStateUpdates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "HandleAlertStateUpdates");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::HandlePawnConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "HandlePawnConverted");

	Params::BP_PlayerPawn_NonParticipant_C_HandlePawnConverted Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::HandlePawnUnconverted(class AFortPawn* UnconvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "HandlePawnUnconverted");

	Params::BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted Parms{};

	Parms.UnconvertedPawn = UnconvertedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::InitializeAnimInstanceSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "InitializeAnimInstanceSettings");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::LinkOverrideAnimLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "LinkOverrideAnimLayer");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::LinkPatrolAnimLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "LinkPatrolAnimLayer");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::OnAlertLEvelCHangedEvent(class AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel_0, EAlertLevel NewAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnAlertLEvelCHangedEvent");

	Params::BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent Parms{};

	Parms.BotController = BotController;
	Parms.OldAlertLevel_0 = OldAlertLevel_0;
	Parms.NewAlertLevel = NewAlertLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::OnAnimInputEvent(const class UFortAnimInputEvent* AnimInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnAnimInputEvent");

	Params::BP_PlayerPawn_NonParticipant_C_OnAnimInputEvent Parms{};

	Parms.AnimInputEvent = AnimInputEvent;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnCharacterCustomizationCompleted");

	Params::BP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::OnDBNOStateChanged_Event(class AFortPawn* FortPawn, bool bInIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnDBNOStateChanged_Event");

	Params::BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event Parms{};

	Parms.FortPawn = FortPawn;
	Parms.bInIsDBNO = bInIsDBNO;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnDeathPlayEffects");

	Params::BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::OnDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnDied_Event");

	Params::BP_PlayerPawn_NonParticipant_C_OnDied_Event Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::OnEnteredVehicleEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnEnteredVehicleEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::OnExitedVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnExitedVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::OnExitedVehicleEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnExitedVehicleEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::OnRep_AlertLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnRep_AlertLevel");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::OnRep_bIsInVehicleThatSupportsNoAlertState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnRep_bIsInVehicleThatSupportsNoAlertState");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::OnWeaponAttachmentChangedDelegate_Event_0(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnWeaponAttachmentChangedDelegate_Event_0");

	Params::BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0 Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnWeaponEquipped");

	Params::BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::PlayAlertLevelVO(EAlertLevel OldAlertLevel_0, EAlertLevel NewAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "PlayAlertLevelVO");

	Params::BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO Parms{};

	Parms.OldAlertLevel_0 = OldAlertLevel_0;
	Parms.NewAlertLevel = NewAlertLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::PlayVoiceComponentSoundByTag(const struct FGameplayTag& SoundBankTag, class UAudioComponent** AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "PlayVoiceComponentSoundByTag");

	Params::BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag Parms{};

	Parms.SoundBankTag = std::move(SoundBankTag);

	UObject::ProcessEvent(Func, &Parms);

	if (AudioComponent != nullptr)
		*AudioComponent = Parms.AudioComponent;
}

void ABP_PlayerPawn_NonParticipant_C::PlayVoiceSoundByTag(const struct FGameplayTag& SoundBankTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "PlayVoiceSoundByTag");

	Params::BP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag Parms{};

	Parms.SoundBankTag = std::move(SoundBankTag);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ReceiveEndPlay");

	Params::BP_PlayerPawn_NonParticipant_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::ReLinkAnimLayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ReLinkAnimLayer");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::SetAlertedStateGameplayCue(bool Alerted, bool Combat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SetAlertedStateGameplayCue");

	Params::BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue Parms{};

	Parms.Alerted = Alerted;
	Parms.Combat = Combat;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::SetChallenger(class AFortPlayerPawn* Challenger_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SetChallenger");

	Params::BP_PlayerPawn_NonParticipant_C_SetChallenger Parms{};

	Parms.Challenger_0 = Challenger_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::SetDataTrackerActorStateFromAlertLevel(EAlertLevel AlertLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SetDataTrackerActorStateFromAlertLevel");

	Params::BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel Parms{};

	Parms.AlertLevel_0 = AlertLevel_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::SetupLootTierNameWithWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SetupLootTierNameWithWeapon");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::SoundLibrarySetup(bool IsAdding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SoundLibrarySetup");

	Params::BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup Parms{};

	Parms.IsAdding = IsAdding;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::TriggerIdleVO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "TriggerIdleVO");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::UpdateAlertStateVehicleCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "UpdateAlertStateVehicleCheck");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::UpdatePatrolAnimSet(class AFortWeapon* NewWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "UpdatePatrolAnimSet");

	Params::BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet Parms{};

	Parms.NewWeapon = NewWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_PlayerPawn_NonParticipant_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_PlayerPawn_NonParticipant_C::GetIconPlacement(const class AActor* SelfActor, const class AActor* ViewingActor, struct FVector* OutLocation, struct FVector* OutExtents) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "GetIconPlacement");

	Params::BP_PlayerPawn_NonParticipant_C_GetIconPlacement Parms{};

	Parms.SelfActor = SelfActor;
	Parms.ViewingActor = ViewingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutExtents != nullptr)
		*OutExtents = std::move(Parms.OutExtents);
}

}
