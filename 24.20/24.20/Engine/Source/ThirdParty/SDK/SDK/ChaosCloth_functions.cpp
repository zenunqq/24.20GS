#pragma once

#include "Basic.hpp"

#include "ChaosCloth_classes.hpp"
#include "ChaosCloth_parameters.hpp"

namespace SDK
{

void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "ResetAndTeleport");

	Params::ChaosClothingInteractor_ResetAndTeleport Parms{};

	Parms.bReset = bReset;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAerodynamics");

	Params::ChaosClothingInteractor_SetAerodynamics Parms{};

	Parms.DragCoefficient = DragCoefficient;
	Parms.LiftCoefficient = LiftCoefficient;
	Parms.WindVelocity = std::move(WindVelocity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAnimDrive");

	Params::ChaosClothingInteractor_SetAnimDrive Parms{};

	Parms.AnimDriveStiffness = std::move(AnimDriveStiffness);
	Parms.AnimDriveDamping = std::move(AnimDriveDamping);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAnimDriveLinear");

	Params::ChaosClothingInteractor_SetAnimDriveLinear Parms{};

	Parms.AnimDriveStiffness = AnimDriveStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetBackstop(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetBackstop");

	Params::ChaosClothingInteractor_SetBackstop Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetCollision");

	Params::ChaosClothingInteractor_SetCollision Parms{};

	Parms.CollisionThickness = CollisionThickness;
	Parms.FrictionCoefficient = FrictionCoefficient;
	Parms.bUseCCD = bUseCCD;
	Parms.SelfCollisionThickness = SelfCollisionThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetDamping(float DampingCoefficient, float LocalDampingCoefficient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetDamping");

	Params::ChaosClothingInteractor_SetDamping Parms{};

	Parms.DampingCoefficient = DampingCoefficient;
	Parms.LocalDampingCoefficient = LocalDampingCoefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetGravity");

	Params::ChaosClothingInteractor_SetGravity Parms{};

	Parms.GravityScale = GravityScale;
	Parms.bIsGravityOverridden = bIsGravityOverridden;
	Parms.GravityOverride = std::move(GravityOverride);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetLongRangeAttachment(const struct FVector2D& TetherStiffness, const struct FVector2D& TetherScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetLongRangeAttachment");

	Params::ChaosClothingInteractor_SetLongRangeAttachment Parms{};

	Parms.TetherStiffness = std::move(TetherStiffness);
	Parms.TetherScale = std::move(TetherScale);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetLongRangeAttachmentLinear");

	Params::ChaosClothingInteractor_SetLongRangeAttachmentLinear Parms{};

	Parms.TetherStiffness = TetherStiffness;
	Parms.TetherScale = TetherScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetMaterial(const struct FVector2D& EdgeStiffness, const struct FVector2D& BendingStiffness, const struct FVector2D& AreaStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetMaterial");

	Params::ChaosClothingInteractor_SetMaterial Parms{};

	Parms.EdgeStiffness = std::move(EdgeStiffness);
	Parms.BendingStiffness = std::move(BendingStiffness);
	Parms.AreaStiffness = std::move(AreaStiffness);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetMaterialLinear");

	Params::ChaosClothingInteractor_SetMaterialLinear Parms{};

	Parms.EdgeStiffness = EdgeStiffness;
	Parms.BendingStiffness = BendingStiffness;
	Parms.AreaStiffness = AreaStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetPressure(const struct FVector2D& Pressure)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetPressure");

	Params::ChaosClothingInteractor_SetPressure Parms{};

	Parms.Pressure = std::move(Pressure);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetVelocityScale");

	Params::ChaosClothingInteractor_SetVelocityScale Parms{};

	Parms.LinearVelocityScale = std::move(LinearVelocityScale);
	Parms.AngularVelocityScale = AngularVelocityScale;
	Parms.FictitiousAngularScale = FictitiousAngularScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UChaosClothingInteractor::SetWind(const struct FVector2D& Drag, const struct FVector2D& Lift, float AirDensity, const struct FVector& WindVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetWind");

	Params::ChaosClothingInteractor_SetWind Parms{};

	Parms.Drag = std::move(Drag);
	Parms.Lift = std::move(Lift);
	Parms.AirDensity = AirDensity;
	Parms.WindVelocity = std::move(WindVelocity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
