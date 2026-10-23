#pragma once

#include "Basic.hpp"

#include "PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_classes.hpp"
#include "PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_parameters.hpp"

namespace SDK
{

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::AddPlayerToZipliningArray(const class AFortPlayerPawn*& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "AddPlayerToZipliningArray");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray Parms{};

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::AddSplineMeshSegment(class USplineMeshComponent** SplineMeshSegment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "AddSplineMeshSegment");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SplineMeshSegment != nullptr)
		*SplineMeshSegment = Parms.SplineMeshSegment;
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::AutoSmoothTanget(const struct FVector& Tangent, const struct FVector& PointA, const struct FVector& PointB, struct FVector* SmoothedTangent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "AutoSmoothTanget");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget Parms{};

	Parms.Tangent = std::move(Tangent);
	Parms.PointA = std::move(PointA);
	Parms.PointB = std::move(PointB);

	UObject::ProcessEvent(Func, &Parms);

	if (SmoothedTangent != nullptr)
		*SmoothedTangent = std::move(Parms.SmoothedTangent);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::Calc_Auto_Location_At_Alpha(double InAlpha, bool DrawDebug, struct FVector* PointLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "Calc Auto Location At Alpha");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha Parms{};

	Parms.InAlpha = InAlpha;
	Parms.DrawDebug = DrawDebug;

	UObject::ProcessEvent(Func, &Parms);

	if (PointLocation != nullptr)
		*PointLocation = std::move(Parms.PointLocation);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::CalculatePositionOfPoles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "CalculatePositionOfPoles");

	UObject::ProcessEvent(Func, nullptr);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::GetAutoHorizAndVertVectors(const struct FVector& highVector, const struct FVector& LowVector, struct FVector* VertVec, struct FVector* HorizVec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "GetAutoHorizAndVertVectors");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors Parms{};

	Parms.highVector = std::move(highVector);
	Parms.LowVector = std::move(LowVector);

	UObject::ProcessEvent(Func, &Parms);

	if (VertVec != nullptr)
		*VertVec = std::move(Parms.VertVec);

	if (HorizVec != nullptr)
		*HorizVec = std::move(Parms.HorizVec);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "OnDeathServer");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::OnZipliningStarted(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "OnZipliningStarted");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;

	UObject::ProcessEvent(Func, &Parms);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::OnZipliningStopped(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "OnZipliningStopped");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;
	Parms.ZiplineUsageDuration = ZiplineUsageDuration;

	UObject::ProcessEvent(Func, &Parms);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::RemovePlayerFromZipliningArray(const class AFortPlayerPawn*& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "RemovePlayerFromZipliningArray");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::SetCableTilingBySplineLength(class UMeshComponent* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "SetCableTilingBySplineLength");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::SetSplinePositionAndTangent(bool SetPosition, bool SetTangent, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "SetSplinePositionAndTangent");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent Parms{};

	Parms.SetPosition = SetPosition;
	Parms.SetTangent = SetTangent;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::WaitThenSetDynamicSpline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "WaitThenSetDynamicSpline");

	UObject::ProcessEvent(Func, nullptr);
}

bool APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C", "BlueprintCanInteract");

	Params::PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
