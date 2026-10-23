#pragma once

#include "Basic.hpp"

#include "AutoAimWeaponRuntime_classes.hpp"
#include "AutoAimWeaponRuntime_parameters.hpp"

namespace SDK
{

bool UAutoAimWeaponKismetLibrary::DoesAutoAimWeaponHaveLineOfSight(class AFortPawn* SourcePawn, class AFortPawn* TargetPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AutoAimWeaponKismetLibrary", "DoesAutoAimWeaponHaveLineOfSight");

	Params::AutoAimWeaponKismetLibrary_DoesAutoAimWeaponHaveLineOfSight Parms{};

	Parms.SourcePawn = SourcePawn;
	Parms.TargetPawn = TargetPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAutoAimWeaponKismetLibrary::DoesAutoAimWeaponReticleIntersectTarget(float* OutReticleDistance, class AFortPawn* SourcePawn, class AFortPawn* TargetPawn, const float ReticleSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AutoAimWeaponKismetLibrary", "DoesAutoAimWeaponReticleIntersectTarget");

	Params::AutoAimWeaponKismetLibrary_DoesAutoAimWeaponReticleIntersectTarget Parms{};

	Parms.SourcePawn = SourcePawn;
	Parms.TargetPawn = TargetPawn;
	Parms.ReticleSize = ReticleSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutReticleDistance != nullptr)
		*OutReticleDistance = Parms.OutReticleDistance;

	return Parms.ReturnValue;
}

void UAutoAimWeaponKismetLibrary::FindBestAutoAimTarget(class AFortPawn** OutTargetPawn, float* OutReticleDistance, class AFortPlayerPawn* SourcePawn, const float ReticleSize, const float Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AutoAimWeaponKismetLibrary", "FindBestAutoAimTarget");

	Params::AutoAimWeaponKismetLibrary_FindBestAutoAimTarget Parms{};

	Parms.SourcePawn = SourcePawn;
	Parms.ReticleSize = ReticleSize;
	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTargetPawn != nullptr)
		*OutTargetPawn = Parms.OutTargetPawn;

	if (OutReticleDistance != nullptr)
		*OutReticleDistance = Parms.OutReticleDistance;
}

class UAutoAimWeaponPawnComponent* UAutoAimWeaponKismetLibrary::GetAutoAimWeaponPawnComponent(class AFortPawn* SourcePawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AutoAimWeaponKismetLibrary", "GetAutoAimWeaponPawnComponent");

	Params::AutoAimWeaponKismetLibrary_GetAutoAimWeaponPawnComponent Parms{};

	Parms.SourcePawn = SourcePawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAutoAimWeaponPawnComponent::GetCurrentLockOnCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetCurrentLockOnCount");

	Params::AutoAimWeaponPawnComponent_GetCurrentLockOnCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAutoAimWeaponPawnComponent::GetLockOnProgress() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetLockOnProgress");

	Params::AutoAimWeaponPawnComponent_GetLockOnProgress Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAutoAimWeaponPawnComponent::GetLockOnTargetLocation(struct FVector* OutLockTargetLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetLockOnTargetLocation");

	Params::AutoAimWeaponPawnComponent_GetLockOnTargetLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLockTargetLocation != nullptr)
		*OutLockTargetLocation = std::move(Parms.OutLockTargetLocation);

	return Parms.ReturnValue;
}

float UAutoAimWeaponPawnComponent::GetTargetToReticleDistanceNormalized() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AutoAimWeaponPawnComponent", "GetTargetToReticleDistanceNormalized");

	Params::AutoAimWeaponPawnComponent_GetTargetToReticleDistanceNormalized Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
