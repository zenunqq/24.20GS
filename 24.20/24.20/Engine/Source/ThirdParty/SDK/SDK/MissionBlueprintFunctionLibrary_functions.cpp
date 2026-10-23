#pragma once

#include "Basic.hpp"

#include "MissionBlueprintFunctionLibrary_classes.hpp"
#include "MissionBlueprintFunctionLibrary_parameters.hpp"

namespace SDK
{

void UMissionBlueprintFunctionLibrary_C::Any_Player_Pawn_Near_Location(double DistanceToCheck, const struct FVector& Location, TArray<class AFortPlayerPawn*>& Ignore_Player_Pawns, class UObject* __WorldContext, bool* IsPawnNearLocation, TArray<class AFortPawn*>* PawnsNearLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "Any Player Pawn Near Location");

	Params::MissionBlueprintFunctionLibrary_C_Any_Player_Pawn_Near_Location Parms{};

	Parms.DistanceToCheck = DistanceToCheck;
	Parms.Location = std::move(Location);
	Parms.Ignore_Player_Pawns = std::move(Ignore_Player_Pawns);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Ignore_Player_Pawns = std::move(Parms.Ignore_Player_Pawns);

	if (IsPawnNearLocation != nullptr)
		*IsPawnNearLocation = Parms.IsPawnNearLocation;

	if (PawnsNearLocation != nullptr)
		*PawnsNearLocation = std::move(Parms.PawnsNearLocation);
}

void UMissionBlueprintFunctionLibrary_C::AnyPawnNearActor(double DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPawnNearActor, TArray<class AFortPawn*>* PawnsNearActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "AnyPawnNearActor");

	Params::MissionBlueprintFunctionLibrary_C_AnyPawnNearActor Parms{};

	Parms.DistanceToCheck = DistanceToCheck;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsPawnNearActor != nullptr)
		*IsPawnNearActor = Parms.IsPawnNearActor;

	if (PawnsNearActor != nullptr)
		*PawnsNearActor = std::move(Parms.PawnsNearActor);
}

void UMissionBlueprintFunctionLibrary_C::AnyPlayerNearActor(double DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPlayerNearActor, TArray<class AFortPlayerPawn*>* PlayersNearActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "AnyPlayerNearActor");

	Params::MissionBlueprintFunctionLibrary_C_AnyPlayerNearActor Parms{};

	Parms.DistanceToCheck = DistanceToCheck;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsPlayerNearActor != nullptr)
		*IsPlayerNearActor = Parms.IsPlayerNearActor;

	if (PlayersNearActor != nullptr)
		*PlayersNearActor = std::move(Parms.PlayersNearActor);
}

void UMissionBlueprintFunctionLibrary_C::ApplyDifficultyOffset(class FName RowName, double BaseDifficulty, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "ApplyDifficultyOffset");

	Params::MissionBlueprintFunctionLibrary_C_ApplyDifficultyOffset Parms{};

	Parms.RowName = RowName;
	Parms.BaseDifficulty = BaseDifficulty;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

void UMissionBlueprintFunctionLibrary_C::BasicBuildingItemDrop(EnumEventWorldItemDrop Item_Drop_Level, const struct FVector& LootDropLocation, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "BasicBuildingItemDrop");

	Params::MissionBlueprintFunctionLibrary_C_BasicBuildingItemDrop Parms{};

	Parms.Item_Drop_Level = Item_Drop_Level;
	Parms.LootDropLocation = std::move(LootDropLocation);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMissionBlueprintFunctionLibrary_C::CheckBasicActorLineOfSight(class AActor* Actor_A, const struct FVector& ActorA_Location_Offset, class AActor* Actor_B, const struct FVector& Actor_B_Location_Offset, bool UseActorHalfHeightForSight, ETraceTypeQuery TraceChannel, EDrawDebugTrace DrawDebugType, double DrawTime, bool bTraceComplex, class UObject* __WorldContext, bool* In_Line_Of_Sight, double* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "CheckBasicActorLineOfSight");

	Params::MissionBlueprintFunctionLibrary_C_CheckBasicActorLineOfSight Parms{};

	Parms.Actor_A = Actor_A;
	Parms.ActorA_Location_Offset = std::move(ActorA_Location_Offset);
	Parms.Actor_B = Actor_B;
	Parms.Actor_B_Location_Offset = std::move(Actor_B_Location_Offset);
	Parms.UseActorHalfHeightForSight = UseActorHalfHeightForSight;
	Parms.TraceChannel = TraceChannel;
	Parms.DrawDebugType = DrawDebugType;
	Parms.DrawTime = DrawTime;
	Parms.bTraceComplex = bTraceComplex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (In_Line_Of_Sight != nullptr)
		*In_Line_Of_Sight = Parms.In_Line_Of_Sight;

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}

void UMissionBlueprintFunctionLibrary_C::CheckBasicVectorToActorLineOfSight(const struct FVector& Vector_A, class AActor* Actor_B, const struct FVector& Actor_B_Location_Offset, ETraceTypeQuery TraceChannel, EDrawDebugTrace DrawDebugType, double DrawTime, const TArray<class AActor*>& ActorsToIgnore, bool bTraceComplex, bool bRequireThatTraceHitActorB, class UObject* __WorldContext, bool* In_Line_Of_Sight, double* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "CheckBasicVectorToActorLineOfSight");

	Params::MissionBlueprintFunctionLibrary_C_CheckBasicVectorToActorLineOfSight Parms{};

	Parms.Vector_A = std::move(Vector_A);
	Parms.Actor_B = Actor_B;
	Parms.Actor_B_Location_Offset = std::move(Actor_B_Location_Offset);
	Parms.TraceChannel = TraceChannel;
	Parms.DrawDebugType = DrawDebugType;
	Parms.DrawTime = DrawTime;
	Parms.ActorsToIgnore = std::move(ActorsToIgnore);
	Parms.bTraceComplex = bTraceComplex;
	Parms.bRequireThatTraceHitActorB = bRequireThatTraceHitActorB;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (In_Line_Of_Sight != nullptr)
		*In_Line_Of_Sight = Parms.In_Line_Of_Sight;

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}

void UMissionBlueprintFunctionLibrary_C::DistanceBetweenTwoVectors(const struct FVector& vector1, const struct FVector& vector2, class UObject* __WorldContext, double* Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "DistanceBetweenTwoVectors");

	Params::MissionBlueprintFunctionLibrary_C_DistanceBetweenTwoVectors Parms{};

	Parms.vector1 = std::move(vector1);
	Parms.vector2 = std::move(vector2);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;
}

void UMissionBlueprintFunctionLibrary_C::DoesAnyoneRequireQuest(class UFortQuestItemDefinition* QuestReference, class FName Quest_Backend_Name, class UObject* __WorldContext, bool* SomePlayerNeedsTheQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "DoesAnyoneRequireQuest");

	Params::MissionBlueprintFunctionLibrary_C_DoesAnyoneRequireQuest Parms{};

	Parms.QuestReference = QuestReference;
	Parms.Quest_Backend_Name = Quest_Backend_Name;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SomePlayerNeedsTheQuest != nullptr)
		*SomePlayerNeedsTheQuest = Parms.SomePlayerNeedsTheQuest;
}

void UMissionBlueprintFunctionLibrary_C::DoesAnyPlayerRequireQuestObjective(class UFortQuestItemDefinition* QuestReference, const struct FDataTableRowHandle& QuestObjectiveHandle, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersWhoRequireObjective, bool* SomebodyRequiresObjective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "DoesAnyPlayerRequireQuestObjective");

	Params::MissionBlueprintFunctionLibrary_C_DoesAnyPlayerRequireQuestObjective Parms{};

	Parms.QuestReference = QuestReference;
	Parms.QuestObjectiveHandle = std::move(QuestObjectiveHandle);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayerControllersWhoRequireObjective != nullptr)
		*PlayerControllersWhoRequireObjective = std::move(Parms.PlayerControllersWhoRequireObjective);

	if (SomebodyRequiresObjective != nullptr)
		*SomebodyRequiresObjective = Parms.SomebodyRequiresObjective;
}

void UMissionBlueprintFunctionLibrary_C::DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* Quest_Item_Reference, class FName Quest_Item_Objective_Backend_Name, class UObject* __WorldContext, bool* QuestValid, class AFortPlayerController** PlayerControllerRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "DoesPlayerHaveQuest");

	Params::MissionBlueprintFunctionLibrary_C_DoesPlayerHaveQuest Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Quest_Item_Reference = Quest_Item_Reference;
	Parms.Quest_Item_Objective_Backend_Name = Quest_Item_Objective_Backend_Name;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (QuestValid != nullptr)
		*QuestValid = Parms.QuestValid;

	if (PlayerControllerRef != nullptr)
		*PlayerControllerRef = Parms.PlayerControllerRef;
}

void UMissionBlueprintFunctionLibrary_C::DropChance(double DropPercentChance, class UObject* __WorldContext, bool* DropResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "DropChance");

	Params::MissionBlueprintFunctionLibrary_C_DropChance Parms{};

	Parms.DropPercentChance = DropPercentChance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DropResult != nullptr)
		*DropResult = Parms.DropResult;
}

void UMissionBlueprintFunctionLibrary_C::FlashObjectiveUI(class AFortObjectiveBase* Objective_Reference, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "FlashObjectiveUI");

	Params::MissionBlueprintFunctionLibrary_C_FlashObjectiveUI Parms{};

	Parms.Objective_Reference = Objective_Reference;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMissionBlueprintFunctionLibrary_C::GetBuildingRecommendation(class FName RowName, class UObject* __WorldContext, int32* BuildingCount, bool* RowFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "GetBuildingRecommendation");

	Params::MissionBlueprintFunctionLibrary_C_GetBuildingRecommendation Parms{};

	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (BuildingCount != nullptr)
		*BuildingCount = Parms.BuildingCount;

	if (RowFound != nullptr)
		*RowFound = Parms.RowFound;
}

void UMissionBlueprintFunctionLibrary_C::GetContributingControllersNearActor(double Distance, class AActor* Actor, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersNearby, bool* SuccessfullyFoundPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "GetContributingControllersNearActor");

	Params::MissionBlueprintFunctionLibrary_C_GetContributingControllersNearActor Parms{};

	Parms.Distance = Distance;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayerControllersNearby != nullptr)
		*PlayerControllersNearby = std::move(Parms.PlayerControllersNearby);

	if (SuccessfullyFoundPlayer != nullptr)
		*SuccessfullyFoundPlayer = Parms.SuccessfullyFoundPlayer;
}

void UMissionBlueprintFunctionLibrary_C::GetControllersNearActorThatRequireQuestObjective(double Distance, class AActor* Actor, class UFortQuestItemDefinition* Quest_Item, class FName Quest_Item_Backend_Objective_Name, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersNearbyThatRequireQuest, bool* SuccessfullyFoundPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "GetControllersNearActorThatRequireQuestObjective");

	Params::MissionBlueprintFunctionLibrary_C_GetControllersNearActorThatRequireQuestObjective Parms{};

	Parms.Distance = Distance;
	Parms.Actor = Actor;
	Parms.Quest_Item = Quest_Item;
	Parms.Quest_Item_Backend_Objective_Name = Quest_Item_Backend_Objective_Name;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayerControllersNearbyThatRequireQuest != nullptr)
		*PlayerControllersNearbyThatRequireQuest = std::move(Parms.PlayerControllersNearbyThatRequireQuest);

	if (SuccessfullyFoundPlayer != nullptr)
		*SuccessfullyFoundPlayer = Parms.SuccessfullyFoundPlayer;
}

void UMissionBlueprintFunctionLibrary_C::GetCurrentDifficulty(class UObject* __WorldContext, double* Difficulty, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "GetCurrentDifficulty");

	Params::MissionBlueprintFunctionLibrary_C_GetCurrentDifficulty Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Difficulty != nullptr)
		*Difficulty = Parms.Difficulty;

	if (Success != nullptr)
		*Success = Parms.Success;
}

void UMissionBlueprintFunctionLibrary_C::GetObjectiveBadgeIconBrush(class AFortObjectiveBase* Objective, const struct FGameplayTag& RewardTag, class UObject* __WorldContext, struct FSlateBrush* IconBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "GetObjectiveBadgeIconBrush");

	Params::MissionBlueprintFunctionLibrary_C_GetObjectiveBadgeIconBrush Parms{};

	Parms.Objective = Objective;
	Parms.RewardTag = std::move(RewardTag);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IconBrush != nullptr)
		*IconBrush = std::move(Parms.IconBrush);
}

void UMissionBlueprintFunctionLibrary_C::GetSeasonalEventManager(const class UObject* WorldContextObject, class UObject* __WorldContext, class UFortSeasonalEventManager** SeasonalEventManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "GetSeasonalEventManager");

	Params::MissionBlueprintFunctionLibrary_C_GetSeasonalEventManager Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SeasonalEventManager != nullptr)
		*SeasonalEventManager = Parms.SeasonalEventManager;
}

void UMissionBlueprintFunctionLibrary_C::GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* Quest_Reference, class FName Quest_Objective_Backend_Name, const struct FDataTableRowHandle& ObjectiveStatEvent, TArray<class AFortPlayerController*>& PlayerControllersForUpdate, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "GiveQuestUpdateToPlayers");

	Params::MissionBlueprintFunctionLibrary_C_GiveQuestUpdateToPlayers Parms{};

	Parms.Quest_Reference = Quest_Reference;
	Parms.Quest_Objective_Backend_Name = Quest_Objective_Backend_Name;
	Parms.ObjectiveStatEvent = std::move(ObjectiveStatEvent);
	Parms.PlayerControllersForUpdate = std::move(PlayerControllersForUpdate);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	PlayerControllersForUpdate = std::move(Parms.PlayerControllersForUpdate);
}

void UMissionBlueprintFunctionLibrary_C::HasPlayerCompletedQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, class FName QuestBackendName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "HasPlayerCompletedQuest");

	Params::MissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuest Parms{};

	Parms.PlayerController = PlayerController;
	Parms.QuestReference = QuestReference;
	Parms.QuestBackendName = QuestBackendName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayerControllerOut != nullptr)
		*PlayerControllerOut = Parms.PlayerControllerOut;

	if (CompletedQuest != nullptr)
		*CompletedQuest = Parms.CompletedQuest;
}

void UMissionBlueprintFunctionLibrary_C::HasPlayerCompletedQuestObjective(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, class FName QuestBackendObjectiveName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "HasPlayerCompletedQuestObjective");

	Params::MissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuestObjective Parms{};

	Parms.PlayerController = PlayerController;
	Parms.QuestReference = QuestReference;
	Parms.QuestBackendObjectiveName = QuestBackendObjectiveName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayerControllerOut != nullptr)
		*PlayerControllerOut = Parms.PlayerControllerOut;

	if (CompletedQuestObjective != nullptr)
		*CompletedQuestObjective = Parms.CompletedQuestObjective;
}

void UMissionBlueprintFunctionLibrary_C::HasPlayerCompletedQuestObjectiveHandle(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, const struct FDataTableRowHandle& QuestBackendObjectiveHandle, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "HasPlayerCompletedQuestObjectiveHandle");

	Params::MissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuestObjectiveHandle Parms{};

	Parms.PlayerController = PlayerController;
	Parms.QuestReference = QuestReference;
	Parms.QuestBackendObjectiveHandle = std::move(QuestBackendObjectiveHandle);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayerControllerOut != nullptr)
		*PlayerControllerOut = Parms.PlayerControllerOut;

	if (CompletedQuestObjective != nullptr)
		*CompletedQuestObjective = Parms.CompletedQuestObjective;
}

void UMissionBlueprintFunctionLibrary_C::HaveAllPlayersCompletedQuest(class UFortQuestItemDefinition* QuestItem, class UObject* __WorldContext, bool* AllPlayersCompletedQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "HaveAllPlayersCompletedQuest");

	Params::MissionBlueprintFunctionLibrary_C_HaveAllPlayersCompletedQuest Parms{};

	Parms.QuestItem = QuestItem;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AllPlayersCompletedQuest != nullptr)
		*AllPlayersCompletedQuest = Parms.AllPlayersCompletedQuest;
}

void UMissionBlueprintFunctionLibrary_C::HideParticleComponentsAttachedToMesh(class UStaticMeshComponent* MeshComponent, class UObject* __WorldContext, bool* SuccessfullyDeactivatedParticle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "HideParticleComponentsAttachedToMesh");

	Params::MissionBlueprintFunctionLibrary_C_HideParticleComponentsAttachedToMesh Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SuccessfullyDeactivatedParticle != nullptr)
		*SuccessfullyDeactivatedParticle = Parms.SuccessfullyDeactivatedParticle;
}

void UMissionBlueprintFunctionLibrary_C::HighlightQuestActor(class AActor* ActorToHighlight, bool HighlightEnabled, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "HighlightQuestActor");

	Params::MissionBlueprintFunctionLibrary_C_HighlightQuestActor Parms{};

	Parms.ActorToHighlight = ActorToHighlight;
	Parms.HighlightEnabled = HighlightEnabled;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMissionBlueprintFunctionLibrary_C::LaunchHoverboard(class AActor* HoverboardActor, const struct FVector& LaunchVelocity, class FName ForceFeedbackTag, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "LaunchHoverboard");

	Params::MissionBlueprintFunctionLibrary_C_LaunchHoverboard Parms{};

	Parms.HoverboardActor = HoverboardActor;
	Parms.LaunchVelocity = std::move(LaunchVelocity);
	Parms.ForceFeedbackTag = ForceFeedbackTag;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

void UMissionBlueprintFunctionLibrary_C::ListPlayersWhoNeedQuest(class UFortQuestItemDefinition* Quest_Reference, class FName Quest_Backend_Name, class UObject* __WorldContext, TArray<class AFortPlayerController*>* Player_Controllers_Who_Require_The_Quest, bool* DoesAnyoneRequireTheQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "ListPlayersWhoNeedQuest");

	Params::MissionBlueprintFunctionLibrary_C_ListPlayersWhoNeedQuest Parms{};

	Parms.Quest_Reference = Quest_Reference;
	Parms.Quest_Backend_Name = Quest_Backend_Name;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Player_Controllers_Who_Require_The_Quest != nullptr)
		*Player_Controllers_Who_Require_The_Quest = std::move(Parms.Player_Controllers_Who_Require_The_Quest);

	if (DoesAnyoneRequireTheQuest != nullptr)
		*DoesAnyoneRequireTheQuest = Parms.DoesAnyoneRequireTheQuest;
}

void UMissionBlueprintFunctionLibrary_C::NPC_CanBeElemental(const struct FGameplayTag& PawnTag, class UObject* __WorldContext, bool* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "NPC_CanBeElemental");

	Params::MissionBlueprintFunctionLibrary_C_NPC_CanBeElemental Parms{};

	Parms.PawnTag = std::move(PawnTag);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}

void UMissionBlueprintFunctionLibrary_C::NPC_ConvertTagToNameText(const struct FGameplayTag& PawnTag, class UObject* __WorldContext, class FText* Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "NPC_ConvertTagToNameText");

	Params::MissionBlueprintFunctionLibrary_C_NPC_ConvertTagToNameText Parms{};

	Parms.PawnTag = std::move(PawnTag);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Name_0 != nullptr)
		*Name_0 = std::move(Parms.Name_0);
}

void UMissionBlueprintFunctionLibrary_C::NPC_DroneStartRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "NPC_DroneStartRescue");

	Params::MissionBlueprintFunctionLibrary_C_NPC_DroneStartRescue Parms{};

	Parms.Actor = Actor;
	Parms.Instigator = Instigator;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMissionBlueprintFunctionLibrary_C::NPC_DroneStopRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "NPC_DroneStopRescue");

	Params::MissionBlueprintFunctionLibrary_C_NPC_DroneStopRescue Parms{};

	Parms.Actor = Actor;
	Parms.Instigator = Instigator;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMissionBlueprintFunctionLibrary_C::NPC_LockThenRotateInPlace(bool LockedInPlace, class AFortPlayerPawn* PlayerPawn, class AFortAIPawn* SurvivorPawn, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "NPC_LockThenRotateInPlace");

	Params::MissionBlueprintFunctionLibrary_C_NPC_LockThenRotateInPlace Parms{};

	Parms.LockedInPlace = LockedInPlace;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SurvivorPawn = SurvivorPawn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMissionBlueprintFunctionLibrary_C::PointLocationsBetweenTwoVectors(const struct FVector& Vector_1, const struct FVector& Vector_2, int32 HowManyPoints, class UObject* __WorldContext, TArray<struct FVector>* VectorPoints, bool* SuccessfullyFoundPoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "PointLocationsBetweenTwoVectors");

	Params::MissionBlueprintFunctionLibrary_C_PointLocationsBetweenTwoVectors Parms{};

	Parms.Vector_1 = std::move(Vector_1);
	Parms.Vector_2 = std::move(Vector_2);
	Parms.HowManyPoints = HowManyPoints;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (VectorPoints != nullptr)
		*VectorPoints = std::move(Parms.VectorPoints);

	if (SuccessfullyFoundPoints != nullptr)
		*SuccessfullyFoundPoints = Parms.SuccessfullyFoundPoints;
}

void UMissionBlueprintFunctionLibrary_C::QuestObjectiveCountAchieved(class AFortPlayerController* PlayerControllerReference, class UFortQuestItemDefinition* Quest_Item_Reference, const struct FDataTableRowHandle& ObjectiveStatHandle, class UObject* __WorldContext, int32* Quest_Count_Achieved, int32* Quest_Count_Required, bool* SuccessfullyFoundCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "QuestObjectiveCountAchieved");

	Params::MissionBlueprintFunctionLibrary_C_QuestObjectiveCountAchieved Parms{};

	Parms.PlayerControllerReference = PlayerControllerReference;
	Parms.Quest_Item_Reference = Quest_Item_Reference;
	Parms.ObjectiveStatHandle = std::move(ObjectiveStatHandle);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Quest_Count_Achieved != nullptr)
		*Quest_Count_Achieved = Parms.Quest_Count_Achieved;

	if (Quest_Count_Required != nullptr)
		*Quest_Count_Required = Parms.Quest_Count_Required;

	if (SuccessfullyFoundCount != nullptr)
		*SuccessfullyFoundCount = Parms.SuccessfullyFoundCount;
}

void UMissionBlueprintFunctionLibrary_C::Random_360_VectorInRange(double MinDistance, double MaxDistance, class UObject* __WorldContext, struct FVector* Random_Vector_Result_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "Random_360_VectorInRange");

	Params::MissionBlueprintFunctionLibrary_C_Random_360_VectorInRange Parms{};

	Parms.MinDistance = MinDistance;
	Parms.MaxDistance = MaxDistance;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Random_Vector_Result_ != nullptr)
		*Random_Vector_Result_ = std::move(Parms.Random_Vector_Result_);
}

void UMissionBlueprintFunctionLibrary_C::RegisterUI_UpdatesWithDamageEvents(class AActor* ActorToRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "RegisterUI UpdatesWithDamageEvents");

	Params::MissionBlueprintFunctionLibrary_C_RegisterUI_UpdatesWithDamageEvents Parms{};

	Parms.ActorToRegisterWith = ActorToRegisterWith;
	Parms.MissionState = MissionState;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMissionBlueprintFunctionLibrary_C::SeperatePlayersWhoNeedQuest(class UFortQuestItemDefinition* QuestItemReference, class FName QuestObjectiveBackendName, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayersWhoNeedQuest, TArray<class AFortPlayerController*>* PlayersWhoDoNotNeedQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "SeperatePlayersWhoNeedQuest");

	Params::MissionBlueprintFunctionLibrary_C_SeperatePlayersWhoNeedQuest Parms{};

	Parms.QuestItemReference = QuestItemReference;
	Parms.QuestObjectiveBackendName = QuestObjectiveBackendName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayersWhoNeedQuest != nullptr)
		*PlayersWhoNeedQuest = std::move(Parms.PlayersWhoNeedQuest);

	if (PlayersWhoDoNotNeedQuest != nullptr)
		*PlayersWhoDoNotNeedQuest = std::move(Parms.PlayersWhoDoNotNeedQuest);
}

void UMissionBlueprintFunctionLibrary_C::UnRegisterUI_UpdatesWithDamageEvents(class AActor* ActorToUnRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MissionBlueprintFunctionLibrary_C", "UnRegisterUI UpdatesWithDamageEvents");

	Params::MissionBlueprintFunctionLibrary_C_UnRegisterUI_UpdatesWithDamageEvents Parms{};

	Parms.ActorToUnRegisterWith = ActorToUnRegisterWith;
	Parms.MissionState = MissionState;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
