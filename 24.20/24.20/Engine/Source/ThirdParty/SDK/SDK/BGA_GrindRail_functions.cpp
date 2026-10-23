#pragma once

#include "Basic.hpp"

#include "BGA_GrindRail_classes.hpp"
#include "BGA_GrindRail_parameters.hpp"

namespace SDK
{

void ABGA_GrindRail_C::AddBoosterModel(const struct FGrindRail_Booster_Directional& Booster, int32 Array_Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "AddBoosterModel");

	Params::BGA_GrindRail_C_AddBoosterModel Parms{};

	Parms.Booster = std::move(Booster);
	Parms.Array_Index_0 = Array_Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::AddInteractionRailMeshComponent(class USplineMeshComponent** SplineMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "AddInteractionRailMeshComponent");

	Params::BGA_GrindRail_C_AddInteractionRailMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SplineMeshComponent != nullptr)
		*SplineMeshComponent = Parms.SplineMeshComponent;
}

void ABGA_GrindRail_C::AddRailConnection(const struct FGrindRail_Connection& NewConnection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "AddRailConnection");

	Params::BGA_GrindRail_C_AddRailConnection Parms{};

	Parms.NewConnection = std::move(NewConnection);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::AddSolidRailMeshComponent(class USplineMeshComponent** SplineMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "AddSolidRailMeshComponent");

	Params::BGA_GrindRail_C_AddSolidRailMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SplineMeshComponent != nullptr)
		*SplineMeshComponent = Parms.SplineMeshComponent;
}

void ABGA_GrindRail_C::AddTip(bool EndTip_0, bool OnlyUpdateSpline, class UStaticMesh* TipMesh_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "AddTip");

	Params::BGA_GrindRail_C_AddTip Parms{};

	Parms.EndTip_0 = EndTip_0;
	Parms.OnlyUpdateSpline = OnlyUpdateSpline;
	Parms.TipMesh_0 = TipMesh_0;

	UObject::ProcessEvent(Func, &Parms);
}

bool ABGA_GrindRail_C::AllowJumpOffEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "AllowJumpOffEnd");

	Params::BGA_GrindRail_C_AllowJumpOffEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool ABGA_GrindRail_C::AllowJumpOffStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "AllowJumpOffStart");

	Params::BGA_GrindRail_C_AllowJumpOffStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool ABGA_GrindRail_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "BlueprintOnLocalInteract");

	Params::BGA_GrindRail_C_BlueprintOnLocalInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ABGA_GrindRail_C::BoosterLengthToSplineLength(const struct FGrindRail_Booster_Directional& Booster, double Length_Along_Booster__cm_, double* Length_Along_Spline__cm_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "BoosterLengthToSplineLength");

	Params::BGA_GrindRail_C_BoosterLengthToSplineLength Parms{};

	Parms.Booster = std::move(Booster);
	Parms.Length_Along_Booster__cm_ = Length_Along_Booster__cm_;

	UObject::ProcessEvent(Func, &Parms);

	if (Length_Along_Spline__cm_ != nullptr)
		*Length_Along_Spline__cm_ = Parms.Length_Along_Spline__cm_;
}

void ABGA_GrindRail_C::CollisionCheck(class APlayerPawn_Athena_C* Player, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "CollisionCheck");

	Params::BGA_GrindRail_C_CollisionCheck Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

void ABGA_GrindRail_C::CreateSplineMesh(int32 FirstPoint, int32 SecondPoint, class UTexture2D* MeshEditorSprite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "CreateSplineMesh");

	Params::BGA_GrindRail_C_CreateSplineMesh Parms{};

	Parms.FirstPoint = FirstPoint;
	Parms.SecondPoint = SecondPoint;
	Parms.MeshEditorSprite = MeshEditorSprite;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::DestroyEndTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "DestroyEndTip");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::DestroyStartTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "DestroyStartTip");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::DestroyTip(class UActorComponent* Target_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "DestroyTip");

	Params::BGA_GrindRail_C_DestroyTip Parms{};

	Parms.Target_0 = Target_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::ExecuteUbergraph_BGA_GrindRail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "ExecuteUbergraph_BGA_GrindRail");

	Params::BGA_GrindRail_C_ExecuteUbergraph_BGA_GrindRail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::FillInBoosterInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "FillInBoosterInfo");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::ForceClearBoosters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "ForceClearBoosters");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::GenerateRailComponents(bool FromRailConnectorMovement, class ABGA_RailConnector_GrindRail_C* TheConnector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "GenerateRailComponents");

	Params::BGA_GrindRail_C_GenerateRailComponents Parms{};

	Parms.FromRailConnectorMovement = FromRailConnectorMovement;
	Parms.TheConnector = TheConnector;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::GetConnectionForGrinding(const float DistanceToTravel, const float CurrentDistanceAlongSpline, const float NextDistanceOnRail, const float RightLeanValue, bool* bNewRail, float* DistanceAlongNewRail, class AFortGrindRail** TheNewRail, bool* bNewRailReverseDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "GetConnectionForGrinding");

	Params::BGA_GrindRail_C_GetConnectionForGrinding Parms{};

	Parms.DistanceToTravel = DistanceToTravel;
	Parms.CurrentDistanceAlongSpline = CurrentDistanceAlongSpline;
	Parms.NextDistanceOnRail = NextDistanceOnRail;
	Parms.RightLeanValue = RightLeanValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bNewRail != nullptr)
		*bNewRail = Parms.bNewRail;

	if (DistanceAlongNewRail != nullptr)
		*DistanceAlongNewRail = Parms.DistanceAlongNewRail;

	if (TheNewRail != nullptr)
		*TheNewRail = Parms.TheNewRail;

	if (bNewRailReverseDirection != nullptr)
		*bNewRailReverseDirection = Parms.bNewRailReverseDirection;
}

void ABGA_GrindRail_C::GetCurvatureAtDistance(double Distance, double* Curvature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "GetCurvatureAtDistance");

	Params::BGA_GrindRail_C_GetCurvatureAtDistance Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (Curvature != nullptr)
		*Curvature = Parms.Curvature;
}

struct FVector ABGA_GrindRail_C::GetDirectionAtDistance(float Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "GetDirectionAtDistance");

	Params::BGA_GrindRail_C_GetDirectionAtDistance Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

float ABGA_GrindRail_C::GetLength()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "GetLength");

	Params::BGA_GrindRail_C_GetLength Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ABGA_GrindRail_C::GetRotationForTip(bool bEndTip, struct FRotator* Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "GetRotationForTip");

	Params::BGA_GrindRail_C_GetRotationForTip Parms{};

	Parms.bEndTip = bEndTip;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);
}

void ABGA_GrindRail_C::GetSnapPosition(const struct FVector& CurrentPosition, struct FVector* OutPos, float* OutDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "GetSnapPosition");

	Params::BGA_GrindRail_C_GetSnapPosition Parms{};

	Parms.CurrentPosition = std::move(CurrentPosition);

	UObject::ProcessEvent(Func, &Parms);

	if (OutPos != nullptr)
		*OutPos = std::move(Parms.OutPos);

	if (OutDistance != nullptr)
		*OutDistance = Parms.OutDistance;
}

void ABGA_GrindRail_C::GrindRailChanged(class AFortGrindRail* OldRail, class AFortGrindRail* NewRail)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "GrindRailChanged");

	Params::BGA_GrindRail_C_GrindRailChanged Parms{};

	Parms.OldRail = OldRail;
	Parms.NewRail = NewRail;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::HandlePlayerGrindStart(class APlayerPawn_Athena_C* AttachedPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "HandlePlayerGrindStart");

	Params::BGA_GrindRail_C_HandlePlayerGrindStart Parms{};

	Parms.AttachedPlayer = AttachedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}

bool ABGA_GrindRail_C::IsATip(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "IsATip");

	Params::BGA_GrindRail_C_IsATip Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool ABGA_GrindRail_C::IsTipCapped(const bool bStartTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "IsTipCapped");

	Params::BGA_GrindRail_C_IsTipCapped Parms{};

	Parms.bStartTip = bStartTip;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool ABGA_GrindRail_C::IsTipConnected(const bool bStartTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "IsTipConnected");

	Params::BGA_GrindRail_C_IsTipConnected Parms{};

	Parms.bStartTip = bStartTip;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ABGA_GrindRail_C::JumpOffMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "JumpOffMaterial");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::OnRep_Connections()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "OnRep_Connections");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::PopGrindingSoundMix()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "PopGrindingSoundMix");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::PushGrindingSoundMix(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, const struct FVector& PreviousPlayerLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "PushGrindingSoundMix");

	Params::BGA_GrindRail_C_PushGrindingSoundMix Parms{};

	Parms.bWasAlreadyGrinding = bWasAlreadyGrinding;
	Parms.bWasJumpingFromRail = bWasJumpingFromRail;
	Parms.bEnteredFromInteraction = bEnteredFromInteraction;
	Parms.PreviousPlayerLocation = std::move(PreviousPlayerLocation);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::PutPlayerOnRail(class APlayerPawn_Athena_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "PutPlayerOnRail");

	Params::BGA_GrindRail_C_PutPlayerOnRail Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::PutPlayerOnRail_ClientAndServer(class APlayerPawn_Athena_C* InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "PutPlayerOnRail_ClientAndServer");

	Params::BGA_GrindRail_C_PutPlayerOnRail_ClientAndServer Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::PutPlayerOnRail_Server(class APlayerPawn_Athena_C* InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "PutPlayerOnRail_Server");

	Params::BGA_GrindRail_C_PutPlayerOnRail_Server Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "ReceiveActorBeginOverlap");

	Params::BGA_GrindRail_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "ReceiveActorEndOverlap");

	Params::BGA_GrindRail_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "ReceiveHit");

	Params::BGA_GrindRail_C_ReceiveHit Parms{};

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

void ABGA_GrindRail_C::RedoSplineMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "RedoSplineMesh");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::SnapNearbyPointsToConnector(class AActor* Connector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "SnapNearbyPointsToConnector");

	Params::BGA_GrindRail_C_SnapNearbyPointsToConnector Parms{};

	Parms.Connector = Connector;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::SnapPointToConnector(class AActor* Connector, int32 PointIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "SnapPointToConnector");

	Params::BGA_GrindRail_C_SnapPointToConnector Parms{};

	Parms.Connector = Connector;
	Parms.PointIndex = PointIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::sprinting_state(bool bNewIsSprinting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "sprinting state");

	Params::BGA_GrindRail_C_sprinting_state Parms{};

	Parms.bNewIsSprinting = bNewIsSprinting;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::Sprinting_StateMaterial(bool Sprinting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "Sprinting StateMaterial");

	Params::BGA_GrindRail_C_Sprinting_StateMaterial Parms{};

	Parms.Sprinting = Sprinting;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::StartedGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, const struct FVector& PreviousPlayerLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "StartedGrinding");

	Params::BGA_GrindRail_C_StartedGrinding Parms{};

	Parms.bWasAlreadyGrinding = bWasAlreadyGrinding;
	Parms.bWasJumpingFromRail = bWasJumpingFromRail;
	Parms.bEnteredFromInteraction = bEnteredFromInteraction;
	Parms.PreviousPlayerLocation = std::move(PreviousPlayerLocation);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::StartedGrindingMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "StartedGrindingMaterial");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::Tips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "Tips");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::Unified_Material_and_UV(int32 FirstPoint, int32 SecondPoint, class USplineMeshComponent* Add_Spline_mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "Unified Material and UV");

	Params::BGA_GrindRail_C_Unified_Material_and_UV Parms{};

	Parms.FirstPoint = FirstPoint;
	Parms.SecondPoint = SecondPoint;
	Parms.Add_Spline_mesh = Add_Spline_mesh;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_GrindRail_C::UpdateAllBoosterMeshesInLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "UpdateAllBoosterMeshesInLevel");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::UpdateBoosterMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "UpdateBoosterMeshes");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_GrindRail_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

bool ABGA_GrindRail_C::BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_GrindRail_C", "BlueprintGetInteractionTime");

	Params::BGA_GrindRail_C_BlueprintGetInteractionTime Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	if (OutInteractionTime != nullptr)
		*OutInteractionTime = Parms.OutInteractionTime;

	return Parms.ReturnValue;
}

}
