#pragma once

#include "Basic.hpp"

#include "BP_Athena_Environmental_ZipLine_Spline_classes.hpp"
#include "BP_Athena_Environmental_ZipLine_Spline_parameters.hpp"

namespace SDK
{

void ABP_Athena_Environmental_ZipLine_Spline_C::AddSplineMeshSegment(class USplineMeshComponent** SplineMeshSegment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "AddSplineMeshSegment");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SplineMeshSegment != nullptr)
		*SplineMeshSegment = Parms.SplineMeshSegment;
}

void ABP_Athena_Environmental_ZipLine_Spline_C::AutoSmoothTanget(const struct FVector& Tangent, const struct FVector& PointA, const struct FVector& PointB, struct FVector* SmoothedTangent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "AutoSmoothTanget");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget Parms{};

	Parms.Tangent = std::move(Tangent);
	Parms.PointA = std::move(PointA);
	Parms.PointB = std::move(PointB);

	UObject::ProcessEvent(Func, &Parms);

	if (SmoothedTangent != nullptr)
		*SmoothedTangent = std::move(Parms.SmoothedTangent);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::Calc_Auto_Location_At_Alpha(double InAlpha, bool DrawDebug, struct FVector* PointLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "Calc Auto Location At Alpha");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha Parms{};

	Parms.InAlpha = InAlpha;
	Parms.DrawDebug = DrawDebug;

	UObject::ProcessEvent(Func, &Parms);

	if (PointLocation != nullptr)
		*PointLocation = std::move(Parms.PointLocation);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::CalculatePositionOfPoles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "CalculatePositionOfPoles");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::GetAutoHorizAndVertVectors(const struct FVector& highVector, const struct FVector& LowVector, struct FVector* VertVec, struct FVector* HorizVec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "GetAutoHorizAndVertVectors");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors Parms{};

	Parms.highVector = std::move(highVector);
	Parms.LowVector = std::move(LowVector);

	UObject::ProcessEvent(Func, &Parms);

	if (VertVec != nullptr)
		*VertVec = std::move(Parms.VertVec);

	if (HorizVec != nullptr)
		*HorizVec = std::move(Parms.HorizVec);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::HandlePoleDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "HandlePoleDied");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied Parms{};

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

void ABP_Athena_Environmental_ZipLine_Spline_C::PlayerAttachedToZipline(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "PlayerAttachedToZipline");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_PlayerAttachedToZipline Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::PlayerDetachedFromZipline(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "PlayerDetachedFromZipline");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_PlayerDetachedFromZipline Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::SetCableTilingBySplineLength(class UMeshComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "SetCableTilingBySplineLength");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::SetInteractionCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "SetInteractionCollision");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::SetSplinePositionAndTangent(bool SetPosition, bool SetTangent, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "SetSplinePositionAndTangent");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent Parms{};

	Parms.SetPosition = SetPosition;
	Parms.SetTangent = SetTangent;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_Athena_Environmental_ZipLine_Spline_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

bool ABP_Athena_Environmental_ZipLine_Spline_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Athena_Environmental_ZipLine_Spline_C", "BlueprintCanInteract");

	Params::BP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
