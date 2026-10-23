#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GizmoBaseComponent_UpdateHoverState final
{
public:
	bool                                          bHoveringIn;
};
static_assert(alignof(GizmoBaseComponent_UpdateHoverState) == 0x000001, "Wrong alignment on GizmoBaseComponent_UpdateHoverState");
static_assert(sizeof(GizmoBaseComponent_UpdateHoverState) == 0x000001, "Wrong size on GizmoBaseComponent_UpdateHoverState");
static_assert(offsetof(GizmoBaseComponent_UpdateHoverState, bHoveringIn) == 0x000000, "Member 'GizmoBaseComponent_UpdateHoverState::bHoveringIn' has a wrong offset!");

struct GizmoBaseComponent_UpdateWorldLocalState final
{
public:
	bool                                          bWorldIn;
};
static_assert(alignof(GizmoBaseComponent_UpdateWorldLocalState) == 0x000001, "Wrong alignment on GizmoBaseComponent_UpdateWorldLocalState");
static_assert(sizeof(GizmoBaseComponent_UpdateWorldLocalState) == 0x000001, "Wrong size on GizmoBaseComponent_UpdateWorldLocalState");
static_assert(offsetof(GizmoBaseComponent_UpdateWorldLocalState, bWorldIn) == 0x000000, "Member 'GizmoBaseComponent_UpdateWorldLocalState::bWorldIn' has a wrong offset!");

struct GizmoTransformSource_SetTransform final
{
public:
	struct FTransform                             NewTransform;
};
static_assert(alignof(GizmoTransformSource_SetTransform) == 0x000010, "Wrong alignment on GizmoTransformSource_SetTransform");
static_assert(sizeof(GizmoTransformSource_SetTransform) == 0x000060, "Wrong size on GizmoTransformSource_SetTransform");
static_assert(offsetof(GizmoTransformSource_SetTransform, NewTransform) == 0x000000, "Member 'GizmoTransformSource_SetTransform::NewTransform' has a wrong offset!");

struct GizmoTransformSource_GetTransform final
{
public:
	struct FTransform                             ReturnValue;
};
static_assert(alignof(GizmoTransformSource_GetTransform) == 0x000010, "Wrong alignment on GizmoTransformSource_GetTransform");
static_assert(sizeof(GizmoTransformSource_GetTransform) == 0x000060, "Wrong size on GizmoTransformSource_GetTransform");
static_assert(offsetof(GizmoTransformSource_GetTransform, ReturnValue) == 0x000000, "Member 'GizmoTransformSource_GetTransform::ReturnValue' has a wrong offset!");

struct GizmoAxisSource_GetDirection final
{
public:
	struct FVector                                ReturnValue;
};
static_assert(alignof(GizmoAxisSource_GetDirection) == 0x000008, "Wrong alignment on GizmoAxisSource_GetDirection");
static_assert(sizeof(GizmoAxisSource_GetDirection) == 0x000018, "Wrong size on GizmoAxisSource_GetDirection");
static_assert(offsetof(GizmoAxisSource_GetDirection, ReturnValue) == 0x000000, "Member 'GizmoAxisSource_GetDirection::ReturnValue' has a wrong offset!");

struct GizmoAxisSource_GetOrigin final
{
public:
	struct FVector                                ReturnValue;
};
static_assert(alignof(GizmoAxisSource_GetOrigin) == 0x000008, "Wrong alignment on GizmoAxisSource_GetOrigin");
static_assert(sizeof(GizmoAxisSource_GetOrigin) == 0x000018, "Wrong size on GizmoAxisSource_GetOrigin");
static_assert(offsetof(GizmoAxisSource_GetOrigin, ReturnValue) == 0x000000, "Member 'GizmoAxisSource_GetOrigin::ReturnValue' has a wrong offset!");

struct GizmoAxisSource_GetTangentVectors final
{
public:
	struct FVector                                TangentXOut;
	struct FVector                                TangentYOut;
};
static_assert(alignof(GizmoAxisSource_GetTangentVectors) == 0x000008, "Wrong alignment on GizmoAxisSource_GetTangentVectors");
static_assert(sizeof(GizmoAxisSource_GetTangentVectors) == 0x000030, "Wrong size on GizmoAxisSource_GetTangentVectors");
static_assert(offsetof(GizmoAxisSource_GetTangentVectors, TangentXOut) == 0x000000, "Member 'GizmoAxisSource_GetTangentVectors::TangentXOut' has a wrong offset!");
static_assert(offsetof(GizmoAxisSource_GetTangentVectors, TangentYOut) == 0x000018, "Member 'GizmoAxisSource_GetTangentVectors::TangentYOut' has a wrong offset!");

struct GizmoAxisSource_HasTangentVectors final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(GizmoAxisSource_HasTangentVectors) == 0x000001, "Wrong alignment on GizmoAxisSource_HasTangentVectors");
static_assert(sizeof(GizmoAxisSource_HasTangentVectors) == 0x000001, "Wrong size on GizmoAxisSource_HasTangentVectors");
static_assert(offsetof(GizmoAxisSource_HasTangentVectors, ReturnValue) == 0x000000, "Member 'GizmoAxisSource_HasTangentVectors::ReturnValue' has a wrong offset!");

struct GizmoClickTarget_UpdateHoverState final
{
public:
	bool                                          bHovering;
};
static_assert(alignof(GizmoClickTarget_UpdateHoverState) == 0x000001, "Wrong alignment on GizmoClickTarget_UpdateHoverState");
static_assert(sizeof(GizmoClickTarget_UpdateHoverState) == 0x000001, "Wrong size on GizmoClickTarget_UpdateHoverState");
static_assert(offsetof(GizmoClickTarget_UpdateHoverState, bHovering) == 0x000000, "Member 'GizmoClickTarget_UpdateHoverState::bHovering' has a wrong offset!");

struct GizmoClickTarget_UpdateInteractingState final
{
public:
	bool                                          bInteracting;
};
static_assert(alignof(GizmoClickTarget_UpdateInteractingState) == 0x000001, "Wrong alignment on GizmoClickTarget_UpdateInteractingState");
static_assert(sizeof(GizmoClickTarget_UpdateInteractingState) == 0x000001, "Wrong size on GizmoClickTarget_UpdateInteractingState");
static_assert(offsetof(GizmoClickTarget_UpdateInteractingState, bInteracting) == 0x000000, "Member 'GizmoClickTarget_UpdateInteractingState::bInteracting' has a wrong offset!");

struct GizmoClickMultiTarget_UpdateHittableState final
{
public:
	bool                                          bHittable;
	uint8                                         Pad_1[0x3];
	uint32                                        InPartIdentifier;
};
static_assert(alignof(GizmoClickMultiTarget_UpdateHittableState) == 0x000004, "Wrong alignment on GizmoClickMultiTarget_UpdateHittableState");
static_assert(sizeof(GizmoClickMultiTarget_UpdateHittableState) == 0x000008, "Wrong size on GizmoClickMultiTarget_UpdateHittableState");
static_assert(offsetof(GizmoClickMultiTarget_UpdateHittableState, bHittable) == 0x000000, "Member 'GizmoClickMultiTarget_UpdateHittableState::bHittable' has a wrong offset!");
static_assert(offsetof(GizmoClickMultiTarget_UpdateHittableState, InPartIdentifier) == 0x000004, "Member 'GizmoClickMultiTarget_UpdateHittableState::InPartIdentifier' has a wrong offset!");

struct GizmoClickMultiTarget_UpdateHoverState final
{
public:
	bool                                          bHovering;
	uint8                                         Pad_1[0x3];
	uint32                                        InPartIdentifier;
};
static_assert(alignof(GizmoClickMultiTarget_UpdateHoverState) == 0x000004, "Wrong alignment on GizmoClickMultiTarget_UpdateHoverState");
static_assert(sizeof(GizmoClickMultiTarget_UpdateHoverState) == 0x000008, "Wrong size on GizmoClickMultiTarget_UpdateHoverState");
static_assert(offsetof(GizmoClickMultiTarget_UpdateHoverState, bHovering) == 0x000000, "Member 'GizmoClickMultiTarget_UpdateHoverState::bHovering' has a wrong offset!");
static_assert(offsetof(GizmoClickMultiTarget_UpdateHoverState, InPartIdentifier) == 0x000004, "Member 'GizmoClickMultiTarget_UpdateHoverState::InPartIdentifier' has a wrong offset!");

struct GizmoClickMultiTarget_UpdateInteractingState final
{
public:
	bool                                          bInteracting;
	uint8                                         Pad_1[0x3];
	uint32                                        InPartIdentifier;
};
static_assert(alignof(GizmoClickMultiTarget_UpdateInteractingState) == 0x000004, "Wrong alignment on GizmoClickMultiTarget_UpdateInteractingState");
static_assert(sizeof(GizmoClickMultiTarget_UpdateInteractingState) == 0x000008, "Wrong size on GizmoClickMultiTarget_UpdateInteractingState");
static_assert(offsetof(GizmoClickMultiTarget_UpdateInteractingState, bInteracting) == 0x000000, "Member 'GizmoClickMultiTarget_UpdateInteractingState::bInteracting' has a wrong offset!");
static_assert(offsetof(GizmoClickMultiTarget_UpdateInteractingState, InPartIdentifier) == 0x000004, "Member 'GizmoClickMultiTarget_UpdateInteractingState::InPartIdentifier' has a wrong offset!");

struct GizmoRenderMultiTarget_UpdateVisibilityState final
{
public:
	bool                                          bVisible;
	uint8                                         Pad_1[0x3];
	uint32                                        InPartIdentifier;
};
static_assert(alignof(GizmoRenderMultiTarget_UpdateVisibilityState) == 0x000004, "Wrong alignment on GizmoRenderMultiTarget_UpdateVisibilityState");
static_assert(sizeof(GizmoRenderMultiTarget_UpdateVisibilityState) == 0x000008, "Wrong size on GizmoRenderMultiTarget_UpdateVisibilityState");
static_assert(offsetof(GizmoRenderMultiTarget_UpdateVisibilityState, bVisible) == 0x000000, "Member 'GizmoRenderMultiTarget_UpdateVisibilityState::bVisible' has a wrong offset!");
static_assert(offsetof(GizmoRenderMultiTarget_UpdateVisibilityState, InPartIdentifier) == 0x000004, "Member 'GizmoRenderMultiTarget_UpdateVisibilityState::InPartIdentifier' has a wrong offset!");

struct GizmoFloatParameterSource_SetParameter final
{
public:
	float                                         NewValue;
};
static_assert(alignof(GizmoFloatParameterSource_SetParameter) == 0x000004, "Wrong alignment on GizmoFloatParameterSource_SetParameter");
static_assert(sizeof(GizmoFloatParameterSource_SetParameter) == 0x000004, "Wrong size on GizmoFloatParameterSource_SetParameter");
static_assert(offsetof(GizmoFloatParameterSource_SetParameter, NewValue) == 0x000000, "Member 'GizmoFloatParameterSource_SetParameter::NewValue' has a wrong offset!");

struct GizmoFloatParameterSource_GetParameter final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(GizmoFloatParameterSource_GetParameter) == 0x000004, "Wrong alignment on GizmoFloatParameterSource_GetParameter");
static_assert(sizeof(GizmoFloatParameterSource_GetParameter) == 0x000004, "Wrong size on GizmoFloatParameterSource_GetParameter");
static_assert(offsetof(GizmoFloatParameterSource_GetParameter, ReturnValue) == 0x000000, "Member 'GizmoFloatParameterSource_GetParameter::ReturnValue' has a wrong offset!");

struct GizmoVec2ParameterSource_SetParameter final
{
public:
	struct FVector2D                              NewValue;
};
static_assert(alignof(GizmoVec2ParameterSource_SetParameter) == 0x000008, "Wrong alignment on GizmoVec2ParameterSource_SetParameter");
static_assert(sizeof(GizmoVec2ParameterSource_SetParameter) == 0x000010, "Wrong size on GizmoVec2ParameterSource_SetParameter");
static_assert(offsetof(GizmoVec2ParameterSource_SetParameter, NewValue) == 0x000000, "Member 'GizmoVec2ParameterSource_SetParameter::NewValue' has a wrong offset!");

struct GizmoVec2ParameterSource_GetParameter final
{
public:
	struct FVector2D                              ReturnValue;
};
static_assert(alignof(GizmoVec2ParameterSource_GetParameter) == 0x000008, "Wrong alignment on GizmoVec2ParameterSource_GetParameter");
static_assert(sizeof(GizmoVec2ParameterSource_GetParameter) == 0x000010, "Wrong size on GizmoVec2ParameterSource_GetParameter");
static_assert(offsetof(GizmoVec2ParameterSource_GetParameter, ReturnValue) == 0x000000, "Member 'GizmoVec2ParameterSource_GetParameter::ReturnValue' has a wrong offset!");

}
