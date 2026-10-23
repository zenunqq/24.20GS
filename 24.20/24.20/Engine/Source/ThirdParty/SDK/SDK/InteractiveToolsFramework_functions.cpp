#pragma once

#include "Basic.hpp"

#include "InteractiveToolsFramework_classes.hpp"
#include "InteractiveToolsFramework_parameters.hpp"

namespace SDK
{

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoBaseComponent", "UpdateHoverState");

	Params::GizmoBaseComponent_UpdateHoverState Parms{};

	Parms.bHoveringIn = bHoveringIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoBaseComponent", "UpdateWorldLocalState");

	Params::GizmoBaseComponent_UpdateWorldLocalState Parms{};

	Parms.bWorldIn = bWorldIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoTransformSource", "SetTransform");

	Params::GizmoTransformSource_SetTransform Parms{};

	Parms.NewTransform = std::move(NewTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FTransform IGizmoTransformSource::GetTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoTransformSource", "GetTransform");

	Params::GizmoTransformSource_GetTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector IGizmoAxisSource::GetDirection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoAxisSource", "GetDirection");

	Params::GizmoAxisSource_GetDirection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector IGizmoAxisSource::GetOrigin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoAxisSource", "GetOrigin");

	Params::GizmoAxisSource_GetOrigin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoAxisSource", "GetTangentVectors");

	Params::GizmoAxisSource_GetTangentVectors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TangentXOut != nullptr)
		*TangentXOut = std::move(Parms.TangentXOut);

	if (TangentYOut != nullptr)
		*TangentYOut = std::move(Parms.TangentYOut);
}

bool IGizmoAxisSource::HasTangentVectors() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoAxisSource", "HasTangentVectors");

	Params::GizmoAxisSource_HasTangentVectors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickTarget", "UpdateHoverState");

	Params::GizmoClickTarget_UpdateHoverState Parms{};

	Parms.bHovering = bHovering;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IGizmoClickTarget::UpdateInteractingState(bool bInteracting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickTarget", "UpdateInteractingState");

	Params::GizmoClickTarget_UpdateInteractingState Parms{};

	Parms.bInteracting = bInteracting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IGizmoClickMultiTarget::UpdateHittableState(bool bHittable, uint32 InPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateHittableState");

	Params::GizmoClickMultiTarget_UpdateHittableState Parms{};

	Parms.bHittable = bHittable;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IGizmoClickMultiTarget::UpdateHoverState(bool bHovering, uint32 InPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateHoverState");

	Params::GizmoClickMultiTarget_UpdateHoverState Parms{};

	Parms.bHovering = bHovering;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IGizmoClickMultiTarget::UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateInteractingState");

	Params::GizmoClickMultiTarget_UpdateInteractingState Parms{};

	Parms.bInteracting = bInteracting;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IGizmoRenderMultiTarget::UpdateVisibilityState(bool bVisible, uint32 InPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoRenderMultiTarget", "UpdateVisibilityState");

	Params::GizmoRenderMultiTarget_UpdateVisibilityState Parms{};

	Parms.bVisible = bVisible;
	Parms.InPartIdentifier = InPartIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IGizmoStateTarget::BeginUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoStateTarget", "BeginUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IGizmoStateTarget::EndUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoStateTarget", "EndUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IGizmoFloatParameterSource::BeginModify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoFloatParameterSource", "BeginModify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IGizmoFloatParameterSource::EndModify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoFloatParameterSource", "EndModify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoFloatParameterSource", "SetParameter");

	Params::GizmoFloatParameterSource_SetParameter Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float IGizmoFloatParameterSource::GetParameter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoFloatParameterSource", "GetParameter");

	Params::GizmoFloatParameterSource_GetParameter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IGizmoVec2ParameterSource::BeginModify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "BeginModify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IGizmoVec2ParameterSource::EndModify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "EndModify");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "SetParameter");

	Params::GizmoVec2ParameterSource_SetParameter Parms{};

	Parms.NewValue = std::move(NewValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D IGizmoVec2ParameterSource::GetParameter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "GetParameter");

	Params::GizmoVec2ParameterSource_GetParameter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
