#pragma once

#include "Basic.hpp"

#include "DynamicCapsuleCodeRuntime_classes.hpp"
#include "DynamicCapsuleCodeRuntime_parameters.hpp"

namespace SDK
{

bool UDynamicCapsuleComponent::ApplyDynamicCapsule(const struct FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicCapsuleComponent", "ApplyDynamicCapsule");

	Params::DynamicCapsuleComponent_ApplyDynamicCapsule Parms{};

	Parms.tag = std::move(tag);
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UDynamicCapsuleComponent::ApplyDynamicCapsuleWithLocationAdjust(const struct FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicCapsuleComponent", "ApplyDynamicCapsuleWithLocationAdjust");

	Params::DynamicCapsuleComponent_ApplyDynamicCapsuleWithLocationAdjust Parms{};

	Parms.tag = std::move(tag);
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;
	Parms.NewRelativeMeshHeight = NewRelativeMeshHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDynamicCapsuleComponent::OnRep_DynamicCapsuleReplicatedState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicCapsuleComponent", "OnRep_DynamicCapsuleReplicatedState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UDynamicCapsuleComponent::RemoveDynamicCapsule(const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicCapsuleComponent", "RemoveDynamicCapsule");

	Params::DynamicCapsuleComponent_RemoveDynamicCapsule Parms{};

	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDynamicCapsuleComponent::ServerApplyDynamicCapsule(const struct FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicCapsuleComponent", "ServerApplyDynamicCapsule");

	Params::DynamicCapsuleComponent_ServerApplyDynamicCapsule Parms{};

	Parms.tag = std::move(tag);
	Parms.CapsuleRadius = CapsuleRadius;
	Parms.CapsuleHalfHeight = CapsuleHalfHeight;
	Parms.NewRelativeMeshHeight = NewRelativeMeshHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicCapsuleComponent::ServerRemoveDynamicCapsule(const struct FGameplayTag& tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicCapsuleComponent", "ServerRemoveDynamicCapsule");

	Params::DynamicCapsuleComponent_ServerRemoveDynamicCapsule Parms{};

	Parms.tag = std::move(tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UJumpSlideComponent::OnJumpSlideEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpSlideComponent", "OnJumpSlideEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void UJumpSlideComponent::OnJumpSlideStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpSlideComponent", "OnJumpSlideStart");

	UObject::ProcessEvent(Func, nullptr);
}

void UJumpSlideComponent::OnMovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JumpSlideComponent", "OnMovementModeChange");

	Params::JumpSlideComponent_OnMovementModeChange Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
