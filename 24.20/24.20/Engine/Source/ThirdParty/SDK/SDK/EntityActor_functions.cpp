#pragma once

#include "Basic.hpp"

#include "EntityActor_classes.hpp"
#include "EntityActor_parameters.hpp"

namespace SDK
{

void UEntityActorComponent::OnRep_ActorComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorComponent", "OnRep_ActorComponent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityDynamicActivationComponent::OnEnabledChanged(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityDynamicActivationComponent", "OnEnabledChanged");

	Params::EntityDynamicActivationComponent_OnEnabledChanged Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityDynamicActivationComponent::OnRep_TransitionTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityDynamicActivationComponent", "OnRep_TransitionTarget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityActorCollisionComponent::OnEnabledChanged(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorCollisionComponent", "OnEnabledChanged");

	Params::EntityActorCollisionComponent_OnEnabledChanged Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorCollisionComponent::OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorCollisionComponent", "OnNativeComponentBeginOverlap");

	Params::EntityActorCollisionComponent_OnNativeComponentBeginOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorCollisionComponent::OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorCollisionComponent", "OnNativeComponentEndOverlap");

	Params::EntityActorCollisionComponent_OnNativeComponentEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorCollisionComponent::OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorCollisionComponent", "OnNativeComponentHit");

	Params::EntityActorCollisionComponent_OnNativeComponentHit Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorCollisionComponent::OnRep_CollisionProfileName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorCollisionComponent", "OnRep_CollisionProfileName");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityActorCollisionComponent::OnRep_PrimitiveComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorCollisionComponent", "OnRep_PrimitiveComponent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityActorPlayerComponent::OnRep_PlayerId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorPlayerComponent", "OnRep_PlayerId");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityActorStaticMeshRenderComponent::OnRep_EnableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorStaticMeshRenderComponent", "OnRep_EnableCollision");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityActorStaticMeshRenderComponent::OnRep_MaxDrawDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorStaticMeshRenderComponent", "OnRep_MaxDrawDistance");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityActorStaticMeshRenderComponent::OnRep_MeshMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorStaticMeshRenderComponent", "OnRep_MeshMaterials");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

EHorizTextAligment UEntityActorTextDisplayComponent::GetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetHorizontalAlignment");

	Params::EntityActorTextDisplayComponent_GetHorizontalAlignment Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UEntityActorTextDisplayComponent::GetRelativeLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetRelativeLocation");

	Params::EntityActorTextDisplayComponent_GetRelativeLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EVerticalTextAligment UEntityActorTextDisplayComponent::GetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetVerticalAlignment");

	Params::EntityActorTextDisplayComponent_GetVerticalAlignment Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEntityActorTextDisplayComponent::OnRep_DisplayText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "OnRep_DisplayText");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::OnRep_TextRenderColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "OnRep_TextRenderColor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::OnRep_WorldSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "OnRep_WorldSize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::SetHorizontalAlignment(EHorizTextAligment Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetHorizontalAlignment");

	Params::EntityActorTextDisplayComponent_SetHorizontalAlignment Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::SetRelativeLocation(const struct FVector& RelativeLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetRelativeLocation");

	Params::EntityActorTextDisplayComponent_SetRelativeLocation Parms{};

	Parms.RelativeLocation = std::move(RelativeLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::SetRelativeRotation(const struct FRotator& RelativeRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetRelativeRotation");

	Params::EntityActorTextDisplayComponent_SetRelativeRotation Parms{};

	Parms.RelativeRotation = std::move(RelativeRotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::SetRelativeScale(const struct FVector& RelativeScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetRelativeScale");

	Params::EntityActorTextDisplayComponent_SetRelativeScale Parms{};

	Parms.RelativeScale = std::move(RelativeScale);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetText");

	Params::EntityActorTextDisplayComponent_SetText Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::SetTextRenderColor(const struct FColor& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetTextRenderColor");

	Params::EntityActorTextDisplayComponent_SetTextRenderColor Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::SetVerticalAlignment(EVerticalTextAligment Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetVerticalAlignment");

	Params::EntityActorTextDisplayComponent_SetVerticalAlignment Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorTextDisplayComponent::SetWorldSize(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "SetWorldSize");

	Params::EntityActorTextDisplayComponent_SetWorldSize Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UEntityActorTextDisplayComponent::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetText");

	Params::EntityActorTextDisplayComponent_GetText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FColor UEntityActorTextDisplayComponent::GetTextRenderColor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetTextRenderColor");

	Params::EntityActorTextDisplayComponent_GetTextRenderColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UEntityActorTextDisplayComponent::GetWorldSize() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorTextDisplayComponent", "GetWorldSize");

	Params::EntityActorTextDisplayComponent_GetWorldSize Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEntityActorPositionComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorPositionComponent", "OnRootComponentChanged");

	Params::EntityActorPositionComponent_OnRootComponentChanged Parms{};

	Parms.InRootComponent = InRootComponent;
	Parms.bIsRootComponent = bIsRootComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorRotationComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorRotationComponent", "OnRootComponentChanged");

	Params::EntityActorRotationComponent_OnRootComponentChanged Parms{};

	Parms.InRootComponent = InRootComponent;
	Parms.bIsRootComponent = bIsRootComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEntityActorScaleComponent::OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityActorScaleComponent", "OnRootComponentChanged");

	Params::EntityActorScaleComponent_OnRootComponentChanged Parms{};

	Parms.InRootComponent = InRootComponent;
	Parms.bIsRootComponent = bIsRootComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
