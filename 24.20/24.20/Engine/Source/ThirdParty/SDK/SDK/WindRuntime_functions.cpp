#pragma once

#include "Basic.hpp"

#include "WindRuntime_classes.hpp"
#include "WindRuntime_parameters.hpp"

namespace SDK
{

void UWindCheatManager::InflateBalloonOnSelf(int32 NumBalloons) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindCheatManager", "InflateBalloonOnSelf");

	Params::WindCheatManager_InflateBalloonOnSelf Parms{};

	Parms.NumBalloons = NumBalloons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWindCheatManager::ReleaseBalloonOnSelf(int32 NumBalloons) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindCheatManager", "ReleaseBalloonOnSelf");

	Params::WindCheatManager_ReleaseBalloonOnSelf Parms{};

	Parms.NumBalloons = NumBalloons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AWindField::AddCollider(class UShapeComponent* ShapeComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindField", "AddCollider");

	Params::WindField_AddCollider Parms{};

	Parms.ShapeComponent = ShapeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AWindField::AddIgnoredActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindField", "AddIgnoredActor");

	Params::WindField_AddIgnoredActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AWindField::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindField", "OnBeginOverlap");

	Params::WindField_OnBeginOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AWindField::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindField", "OnEndOverlap");

	Params::WindField_OnEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AWindField::RemoveCollider(class UShapeComponent* ShapeComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindField", "RemoveCollider");

	Params::WindField_RemoveCollider Parms{};

	Parms.ShapeComponent = ShapeComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AWindField::RemoveIgnoredActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindField", "RemoveIgnoredActor");

	Params::WindField_RemoveIgnoredActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AWindField::SetActive(bool bInIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindField", "SetActive");

	Params::WindField_SetActive Parms{};

	Parms.bInIsActive = bInIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UWindSplineComponent::Disable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindSplineComponent", "Disable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWindSplineComponent::Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindSplineComponent", "Enable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWindSplineComponent::HandleSafeZoneUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindSplineComponent", "HandleSafeZoneUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWindSplineComponent::OnRep_Blockages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindSplineComponent", "OnRep_Blockages");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWindSplineComponent::OnRep_TargetData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindSplineComponent", "OnRep_TargetData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UWindSplineComponent::GetClosestActiveLocations(const struct FVector& InTargetLocation, bool* bIsClosestPointActive, struct FVector* ClosestPointOnSpline, TArray<struct FVector>* ClosestActiveLocations) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindSplineComponent", "GetClosestActiveLocations");

	Params::WindSplineComponent_GetClosestActiveLocations Parms{};

	Parms.InTargetLocation = std::move(InTargetLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bIsClosestPointActive != nullptr)
		*bIsClosestPointActive = Parms.bIsClosestPointActive;

	if (ClosestPointOnSpline != nullptr)
		*ClosestPointOnSpline = std::move(Parms.ClosestPointOnSpline);

	if (ClosestActiveLocations != nullptr)
		*ClosestActiveLocations = std::move(Parms.ClosestActiveLocations);
}

float UWindSplineComponent::GetTargetingRadius() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindSplineComponent", "GetTargetingRadius");

	Params::WindSplineComponent_GetTargetingRadius Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UWindSplineComponent::GetWindDataAtLocation(const struct FVector& InTargetLocation, struct FVector* OutDirection, float* OutAttenuation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WindSplineComponent", "GetWindDataAtLocation");

	Params::WindSplineComponent_GetWindDataAtLocation Parms{};

	Parms.InTargetLocation = std::move(InTargetLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDirection != nullptr)
		*OutDirection = std::move(Parms.OutDirection);

	if (OutAttenuation != nullptr)
		*OutAttenuation = Parms.OutAttenuation;
}

}
