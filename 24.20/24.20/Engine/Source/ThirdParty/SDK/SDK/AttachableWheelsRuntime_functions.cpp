#pragma once

#include "Basic.hpp"

#include "AttachableWheelsRuntime_classes.hpp"
#include "AttachableWheelsRuntime_parameters.hpp"

namespace SDK
{

bool AAttachableWheel::AttachInPlace(class UPrimitiveComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "AttachInPlace");

	Params::AttachableWheel_AttachInPlace Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAttachableWheel::AttachTo(class UPrimitiveComponent* InComponent, const struct FVector& WorldLocation, const struct FVector& AxleDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "AttachTo");

	Params::AttachableWheel_AttachTo Parms{};

	Parms.InComponent = InComponent;
	Parms.WorldLocation = std::move(WorldLocation);
	Parms.AxleDirection = std::move(AxleDirection);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AAttachableWheel::Detach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "Detach");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool AAttachableWheel::DetachFrom(class UPrimitiveComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "DetachFrom");

	Params::AttachableWheel_DetachFrom Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AAttachableWheel::OnAttached(class UPrimitiveComponent* AttachedComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "OnAttached");

	Params::AttachableWheel_OnAttached Parms{};

	Parms.AttachedComponent = AttachedComponent;

	UObject::ProcessEvent(Func, &Parms);
}

void AAttachableWheel::OnDetached(class UPrimitiveComponent* DetachedComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "OnDetached");

	Params::AttachableWheel_OnDetached Parms{};

	Parms.DetachedComponent = DetachedComponent;

	UObject::ProcessEvent(Func, &Parms);
}

void AAttachableWheel::OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "OnPhysicsStateChanged");

	Params::AttachableWheel_OnPhysicsStateChanged Parms{};

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.StateChange = StateChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAttachableWheel::OnRep_AttachData(const struct FAttachableWheelAttachData& AttachDataPrev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "OnRep_AttachData");

	Params::AttachableWheel_OnRep_AttachData Parms{};

	Parms.AttachDataPrev = std::move(AttachDataPrev);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAttachableWheel::DrawDebug() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "DrawDebug");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UPrimitiveComponent* AAttachableWheel::GetAttachedComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "GetAttachedComponent");

	Params::AttachableWheel_GetAttachedComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AAttachableWheel::GetWorldSpaceAttachData(struct FAttachableWheelAttachData* OutAttachData, class UPrimitiveComponent* PrimitiveComponent, const class FName BodyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheel", "GetWorldSpaceAttachData");

	Params::AttachableWheel_GetWorldSpaceAttachData Parms{};

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.BodyName = BodyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAttachData != nullptr)
		*OutAttachData = std::move(Parms.OutAttachData);

	return Parms.ReturnValue;
}

int32 UAttachableWheelsComponent::DetachAllWheels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheelsComponent", "DetachAllWheels");

	Params::AttachableWheelsComponent_DetachAllWheels Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAttachableWheelsComponent::HandleWheelAttached_Internal(class AAttachableWheel* AttachedWheel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheelsComponent", "HandleWheelAttached_Internal");

	Params::AttachableWheelsComponent_HandleWheelAttached_Internal Parms{};

	Parms.AttachedWheel = AttachedWheel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAttachableWheelsComponent::HandleWheelDetached_Internal(class AAttachableWheel* AttachedWheel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheelsComponent", "HandleWheelDetached_Internal");

	Params::AttachableWheelsComponent_HandleWheelDetached_Internal Parms{};

	Parms.AttachedWheel = AttachedWheel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAttachableWheelsComponent::OnWheelAttached(class AAttachableWheel* AttachedWheel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheelsComponent", "OnWheelAttached");

	Params::AttachableWheelsComponent_OnWheelAttached Parms{};

	Parms.AttachedWheel = AttachedWheel;

	UObject::ProcessEvent(Func, &Parms);
}

void UAttachableWheelsComponent::OnWheelDetached(class AAttachableWheel* AttachedWheel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheelsComponent", "OnWheelDetached");

	Params::AttachableWheelsComponent_OnWheelDetached Parms{};

	Parms.AttachedWheel = AttachedWheel;

	UObject::ProcessEvent(Func, &Parms);
}

void UAttachableWheelsComponent::DrawDebug() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheelsComponent", "DrawDebug");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class AAttachableWheel* UAttachableWheelsComponent::GetAttachedWheelClosestOnAxis(const struct FVector& Point, float* OutClosetDistanceToAxis, struct FVector* OutClosestPointOnAxis, struct FVector* OutClosestAxis) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheelsComponent", "GetAttachedWheelClosestOnAxis");

	Params::AttachableWheelsComponent_GetAttachedWheelClosestOnAxis Parms{};

	Parms.Point = std::move(Point);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutClosetDistanceToAxis != nullptr)
		*OutClosetDistanceToAxis = Parms.OutClosetDistanceToAxis;

	if (OutClosestPointOnAxis != nullptr)
		*OutClosestPointOnAxis = std::move(Parms.OutClosestPointOnAxis);

	if (OutClosestAxis != nullptr)
		*OutClosestAxis = std::move(Parms.OutClosestAxis);

	return Parms.ReturnValue;
}

TArray<class AAttachableWheel*> UAttachableWheelsComponent::GetAttachedWheels() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttachableWheelsComponent", "GetAttachedWheels");

	Params::AttachableWheelsComponent_GetAttachedWheels Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
