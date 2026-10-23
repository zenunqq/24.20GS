#pragma once

#include "Basic.hpp"

#include "FortniteAIServer_classes.hpp"
#include "FortniteAIServer_parameters.hpp"

namespace SDK
{

void UFortAthenaAIEvaluator_BlueprintBase::OnEnter(class UBehaviorTreeComponent* OwnerComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "OnEnter");

	Params::FortAthenaAIEvaluator_BlueprintBase_OnEnter Parms{};

	Parms.OwnerComp = OwnerComp;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAthenaAIEvaluator_BlueprintBase::OnExit(class UBehaviorTreeComponent* OwnerComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "OnExit");

	Params::FortAthenaAIEvaluator_BlueprintBase_OnExit Parms{};

	Parms.OwnerComp = OwnerComp;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortAthenaAIEvaluator_BlueprintBase::EvaluateOngoingConditions(class UBehaviorTreeComponent* OwnerComp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "EvaluateOngoingConditions");

	Params::FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions Parms{};

	Parms.OwnerComp = OwnerComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaAIEvaluator_BlueprintBase::EvaluateStartingConditions(class UBehaviorTreeComponent* OwnerComp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "EvaluateStartingConditions");

	Params::FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions Parms{};

	Parms.OwnerComp = OwnerComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortWorldConditionTimeOfDayState::HandleTimeOfDayPhaseChange(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWorldConditionTimeOfDayState", "HandleTimeOfDayPhaseChange");

	Params::FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortGameplayInteractionSmartObjectBehaviorDefinition::CanBeUsedBy(const class AActor* User, const class AActor* SmartObjectActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayInteractionSmartObjectBehaviorDefinition", "CanBeUsedBy");

	Params::FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy Parms{};

	Parms.User = User;
	Parms.SmartObjectActor = SmartObjectActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAIBotEvaluator_Conversation::OnPlayerPawnSpawned(class AFortAthenaAIBotController* BotController, class AFortPlayerPawnAthena* BotPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Conversation", "OnPlayerPawnSpawned");

	Params::FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned Parms{};

	Parms.BotController = BotController;
	Parms.BotPawn = BotPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortEQSPrevisActor::PrepForPrevis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEQSPrevisActor", "PrepForPrevis");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortEQSPrevisActor::SetQueryTemplate(class UEnvQuery* InPrevisQueryTemplate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEQSPrevisActor", "SetQueryTemplate");

	Params::FortEQSPrevisActor_SetQueryTemplate Parms{};

	Parms.InPrevisQueryTemplate = InPrevisQueryTemplate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaBTService_ManageWeapon::ManageWeaponTargeting(class UBehaviorTreeComponent* OwnerComp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaBTService_ManageWeapon", "ManageWeaponTargeting");

	Params::FortAthenaBTService_ManageWeapon_ManageWeaponTargeting Parms{};

	Parms.OwnerComp = OwnerComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_Storm::OnSafeZonePhaseChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Storm", "OnSafeZonePhaseChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_Storm::OnSafeZoneStateChanged(const EFortSafeZoneState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Storm", "OnSafeZoneStateChanged");

	Params::FortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaPlayMontageStateTreeTask::HandleMontageEnded(const class UAnimMontage* EndedMontage, const bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPlayMontageStateTreeTask", "HandleMontageEnded");

	Params::FortAthenaPlayMontageStateTreeTask_HandleMontageEnded Parms{};

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaPlayMontageStateTreeTask::HandleNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPlayMontageStateTreeTask", "HandleNotifyBeginReceived");

	Params::FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = std::move(BranchingPointNotifyPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaPlayContextualAnimTaskInstanceData::OnMontageEnded(const class UAnimMontage* EndedMontage, const bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPlayContextualAnimTaskInstanceData", "OnMontageEnded");

	Params::FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded Parms{};

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaPlayContextualAnimTaskInstanceData::OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPlayContextualAnimTaskInstanceData", "OnNotifyBeginReceived");

	Params::FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = std::move(BranchingPointNotifyPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_CharacterLaunched::OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_CharacterLaunched", "OnZiplineStateChanged");

	Params::FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged Parms{};

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_Converted::OnConvertedEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Converted", "OnConvertedEvent");

	Params::FortAthenaAIBotEvaluator_Converted_OnConvertedEvent Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_Converted::OnUnconvertedEvent(class AFortPawn* UnconvertedPawn, const EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Converted", "OnUnconvertedEvent");

	Params::FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent Parms{};

	Parms.UnconvertedPawn = UnconvertedPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_DBNO::OnAllyPawnDBNOStateChanged(class AFortPawn* InPlayer, bool bInIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_DBNO", "OnAllyPawnDBNOStateChanged");

	Params::FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged Parms{};

	Parms.InPlayer = InPlayer;
	Parms.bInIsDBNO = bInIsDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_EvasiveManeuvers::OnMoveCompleted(const struct FAIRequestID& RequestID, EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_EvasiveManeuvers", "OnMoveCompleted");

	Params::FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted Parms{};

	Parms.RequestID = std::move(RequestID);
	Parms.MovementResult = MovementResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_Heal::HandlePlayerHealthOrShieldChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Heal", "HandlePlayerHealthOrShieldChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_Retreat::HandlePlayerHealthOrShieldChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Retreat", "HandlePlayerHealthOrShieldChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_SandTunnel::Jump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_SandTunnel", "Jump");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_SandTunnel::OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_SandTunnel", "OnBotControllerAlertLevelChanged");

	Params::FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged Parms{};

	Parms.BotController = BotController;
	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIBotEvaluator_Zipline::OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Zipline", "OnZiplineStateChanged");

	Params::FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged Parms{};

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAIEvaluator_DormantUntilPhase::HandleGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAIEvaluator_DormantUntilPhase", "HandleGamePhaseStepChanged");

	Params::FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaBTService_Slide::OnStopSliding(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaBTService_Slide", "OnStopSliding");

	Params::FortAthenaBTService_Slide_OnStopSliding Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaBTTask_Zipline::OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaBTTask_Zipline", "OnZiplineStateChanged");

	Params::FortAthenaBTTask_Zipline_OnZiplineStateChanged Parms{};

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaPlayInteractionStateTreeTask::OnMontageEnded(const class UAnimMontage* EndedMontage, const bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPlayInteractionStateTreeTask", "OnMontageEnded");

	Params::FortAthenaPlayInteractionStateTreeTask_OnMontageEnded Parms{};

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaPlayInteractionStateTreeTask::OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPlayInteractionStateTreeTask", "OnNotifyBeginReceived");

	Params::FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = std::move(BranchingPointNotifyPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
