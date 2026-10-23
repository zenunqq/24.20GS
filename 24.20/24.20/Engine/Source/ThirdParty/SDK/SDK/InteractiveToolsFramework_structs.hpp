#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EGizmoElementState : uint8
{
	None                                     = 0,
	Visible                                  = 2,
	Hittable                                 = 4,
	VisibleAndHittable                       = 6,
	EGizmoElementState_MAX                   = 7,
};

enum class EGizmoElementInteractionState : uint32
{
	None                                     = 0,
	Hovering                                 = 1,
	Interacting                              = 2,
	EGizmoElementInteractionState_MAX        = 3,
};

enum class EGizmoElementViewDependentType : uint32
{
	None                                     = 0,
	Axis                                     = 1,
	Plane                                    = 2,
	EGizmoElementViewDependentType_MAX       = 3,
};

enum class EGizmoElementViewAlignType : uint32
{
	None                                     = 0,
	PointOnly                                = 1,
	PointEye                                 = 2,
	PointScreen                              = 3,
	Axial                                    = 4,
	EGizmoElementViewAlignType_MAX           = 5,
};

enum class EGizmoElementPartialType : uint32
{
	None                                     = 0,
	Partial                                  = 1,
	PartialViewDependent                     = 2,
	EGizmoElementPartialType_MAX             = 3,
};

enum class EStandardToolContextMaterials : uint8
{
	VertexColorMaterial                      = 1,
	EStandardToolContextMaterials_MAX        = 2,
};

enum class EToolContextCoordinateSystem : uint32
{
	World                                    = 0,
	Local                                    = 1,
	EToolContextCoordinateSystem_MAX         = 2,
};

enum class EToolContextTransformGizmoMode : uint8
{
	NoGizmo                                  = 0,
	Translation                              = 1,
	Rotation                                 = 2,
	Scale                                    = 3,
	Combined                                 = 8,
	EToolContextTransformGizmoMode_MAX       = 9,
};

enum class EToolMessageLevel : uint8
{
	Internal                                 = 0,
	UserMessage                              = 1,
	UserNotification                         = 2,
	UserWarning                              = 3,
	UserError                                = 4,
	EToolMessageLevel_MAX                    = 5,
};

enum class ESelectedObjectsModificationType : uint8
{
	Replace                                  = 0,
	Add                                      = 1,
	Remove                                   = 2,
	Clear                                    = 3,
	ESelectedObjectsModificationType_MAX     = 4,
};

enum class EViewInteractionState : uint8
{
	None                                     = 0,
	Hovered                                  = 1,
	Focused                                  = 2,
	EViewInteractionState_MAX                = 3,
};

enum class EGizmoElementArrowHeadType : uint32
{
	Cone                                     = 0,
	Cube                                     = 1,
	EGizmoElementArrowHeadType_MAX           = 2,
};

enum class EInputCaptureSide : uint8
{
	None                                     = 0,
	Left                                     = 1,
	Right                                    = 2,
	Both                                     = 3,
	Any                                      = 99,
	EInputCaptureSide_MAX                    = 100,
};

enum class EInputCaptureRequestType : uint8
{
	Begin                                    = 1,
	Ignore                                   = 2,
	EInputCaptureRequestType_MAX             = 3,
};

enum class EInputCaptureState : uint8
{
	Begin                                    = 1,
	Continue                                 = 2,
	End                                      = 3,
	Ignore                                   = 4,
	EInputCaptureState_MAX                   = 5,
};

enum class EInputDevices : uint16
{
	None                                     = 0,
	Keyboard                                 = 1,
	Mouse                                    = 2,
	Gamepad                                  = 4,
	OculusTouch                              = 8,
	HTCViveWands                             = 16,
	AnySpatialDevice                         = 24,
	TabletFingers                            = 1024,
	EInputDevices_MAX                        = 1025,
};

enum class ETransformGizmoSubElements : uint32
{
	None                                     = 0,
	TranslateAxisX                           = 2,
	TranslateAxisY                           = 4,
	TranslateAxisZ                           = 8,
	TranslateAllAxes                         = 14,
	TranslatePlaneXY                         = 16,
	TranslatePlaneXZ                         = 32,
	TranslatePlaneYZ                         = 64,
	TranslateAllPlanes                       = 112,
	RotateAxisX                              = 128,
	RotateAxisY                              = 256,
	RotateAxisZ                              = 512,
	RotateAllAxes                            = 896,
	ScaleAxisX                               = 1024,
	ScaleAxisY                               = 2048,
	ScaleAxisZ                               = 4096,
	ScaleAllAxes                             = 7168,
	ScalePlaneYZ                             = 8192,
	ScalePlaneXZ                             = 16384,
	ScalePlaneXY                             = 32768,
	ScaleAllPlanes                           = 57344,
	ScaleUniform                             = 65536,
	StandardTranslateRotate                  = 1022,
	TranslateRotateUniformScale              = 66558,
	FullTranslateRotateScale                 = 131070,
	ETransformGizmoSubElements_MAX           = 131071,
};

enum class EToolShutdownType : uint8
{
	Completed                                = 0,
	Accept                                   = 1,
	Cancel                                   = 2,
	EToolShutdownType_MAX                    = 3,
};

enum class EToolSide : uint8
{
	Left                                     = 1,
	Mouse                                    = 1,
	Right                                    = 2,
	EToolSide_MAX                            = 3,
};

enum class EToolChangeTrackingMode : uint8
{
	NoChangeTracking                         = 1,
	UndoToExit                               = 2,
	FullUndoRedo                             = 3,
	EToolChangeTrackingMode_MAX              = 4,
};

enum class ESceneSnapQueryType : uint8
{
	Position                                 = 1,
	Rotation                                 = 2,
	ESceneSnapQueryType_MAX                  = 3,
};

enum class ESceneSnapQueryTargetType : uint8
{
	None                                     = 0,
	MeshVertex                               = 1,
	MeshEdge                                 = 2,
	Grid                                     = 4,
	All                                      = 7,
	ESceneSnapQueryTargetType_MAX            = 8,
};

struct FGizmoVec2ParameterChange final
{
public:
	struct FVector2D                              InitialValue;
	struct FVector2D                              CurrentValue;
};
static_assert(alignof(FGizmoVec2ParameterChange) == 0x000008, "Wrong alignment on FGizmoVec2ParameterChange");
static_assert(sizeof(FGizmoVec2ParameterChange) == 0x000020, "Wrong size on FGizmoVec2ParameterChange");
static_assert(offsetof(FGizmoVec2ParameterChange, InitialValue) == 0x000000, "Member 'FGizmoVec2ParameterChange::InitialValue' has a wrong offset!");
static_assert(offsetof(FGizmoVec2ParameterChange, CurrentValue) == 0x000010, "Member 'FGizmoVec2ParameterChange::CurrentValue' has a wrong offset!");

struct FGizmoElementColorAttribute final
{
public:
	struct FLinearColor                           Value;
	bool                                          bHasValue;
	bool                                          bOverridesChildState;
	uint8                                         Pad_12[0x2];
};
static_assert(alignof(FGizmoElementColorAttribute) == 0x000004, "Wrong alignment on FGizmoElementColorAttribute");
static_assert(sizeof(FGizmoElementColorAttribute) == 0x000014, "Wrong size on FGizmoElementColorAttribute");
static_assert(offsetof(FGizmoElementColorAttribute, Value) == 0x000000, "Member 'FGizmoElementColorAttribute::Value' has a wrong offset!");
static_assert(offsetof(FGizmoElementColorAttribute, bHasValue) == 0x000010, "Member 'FGizmoElementColorAttribute::bHasValue' has a wrong offset!");
static_assert(offsetof(FGizmoElementColorAttribute, bOverridesChildState) == 0x000011, "Member 'FGizmoElementColorAttribute::bOverridesChildState' has a wrong offset!");

struct FGizmoElementMaterialAttribute final
{
public:
	TWeakObjectPtr<class UMaterialInterface>      Value;
	bool                                          bOverridesChildState;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FGizmoElementMaterialAttribute) == 0x000004, "Wrong alignment on FGizmoElementMaterialAttribute");
static_assert(sizeof(FGizmoElementMaterialAttribute) == 0x00000C, "Wrong size on FGizmoElementMaterialAttribute");
static_assert(offsetof(FGizmoElementMaterialAttribute, Value) == 0x000000, "Member 'FGizmoElementMaterialAttribute::Value' has a wrong offset!");
static_assert(offsetof(FGizmoElementMaterialAttribute, bOverridesChildState) == 0x000008, "Member 'FGizmoElementMaterialAttribute::bOverridesChildState' has a wrong offset!");

struct FGizmoElementMeshRenderStateAttributes final
{
public:
	struct FGizmoElementMaterialAttribute         Material;
	struct FGizmoElementMaterialAttribute         HoverMaterial;
	struct FGizmoElementMaterialAttribute         InteractMaterial;
	struct FGizmoElementColorAttribute            VertexColor;
	struct FGizmoElementColorAttribute            HoverVertexColor;
	struct FGizmoElementColorAttribute            InteractVertexColor;
};
static_assert(alignof(FGizmoElementMeshRenderStateAttributes) == 0x000004, "Wrong alignment on FGizmoElementMeshRenderStateAttributes");
static_assert(sizeof(FGizmoElementMeshRenderStateAttributes) == 0x000060, "Wrong size on FGizmoElementMeshRenderStateAttributes");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, Material) == 0x000000, "Member 'FGizmoElementMeshRenderStateAttributes::Material' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, HoverMaterial) == 0x00000C, "Member 'FGizmoElementMeshRenderStateAttributes::HoverMaterial' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, InteractMaterial) == 0x000018, "Member 'FGizmoElementMeshRenderStateAttributes::InteractMaterial' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, VertexColor) == 0x000024, "Member 'FGizmoElementMeshRenderStateAttributes::VertexColor' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, HoverVertexColor) == 0x000038, "Member 'FGizmoElementMeshRenderStateAttributes::HoverVertexColor' has a wrong offset!");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, InteractVertexColor) == 0x00004C, "Member 'FGizmoElementMeshRenderStateAttributes::InteractVertexColor' has a wrong offset!");

struct FGizmoElementLineRenderStateAttributes final
{
public:
	struct FGizmoElementColorAttribute            LineColor;
	struct FGizmoElementColorAttribute            HoverLineColor;
	struct FGizmoElementColorAttribute            InteractLineColor;
};
static_assert(alignof(FGizmoElementLineRenderStateAttributes) == 0x000004, "Wrong alignment on FGizmoElementLineRenderStateAttributes");
static_assert(sizeof(FGizmoElementLineRenderStateAttributes) == 0x00003C, "Wrong size on FGizmoElementLineRenderStateAttributes");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, LineColor) == 0x000000, "Member 'FGizmoElementLineRenderStateAttributes::LineColor' has a wrong offset!");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, HoverLineColor) == 0x000014, "Member 'FGizmoElementLineRenderStateAttributes::HoverLineColor' has a wrong offset!");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, InteractLineColor) == 0x000028, "Member 'FGizmoElementLineRenderStateAttributes::InteractLineColor' has a wrong offset!");

struct FGizmoFloatParameterChange final
{
public:
	float                                         InitialValue;
	float                                         CurrentValue;
};
static_assert(alignof(FGizmoFloatParameterChange) == 0x000004, "Wrong alignment on FGizmoFloatParameterChange");
static_assert(sizeof(FGizmoFloatParameterChange) == 0x000008, "Wrong size on FGizmoFloatParameterChange");
static_assert(offsetof(FGizmoFloatParameterChange, InitialValue) == 0x000000, "Member 'FGizmoFloatParameterChange::InitialValue' has a wrong offset!");
static_assert(offsetof(FGizmoFloatParameterChange, CurrentValue) == 0x000004, "Member 'FGizmoFloatParameterChange::CurrentValue' has a wrong offset!");

struct alignas(0x08) FBrushStampData final
{
public:
	uint8                                         Pad_0[0x120];
};
static_assert(alignof(FBrushStampData) == 0x000008, "Wrong alignment on FBrushStampData");
static_assert(sizeof(FBrushStampData) == 0x000120, "Wrong size on FBrushStampData");

struct FBehaviorInfo final
{
public:
	class UInputBehavior*                         Behavior;
	uint8                                         Pad_8[0x18];
};
static_assert(alignof(FBehaviorInfo) == 0x000008, "Wrong alignment on FBehaviorInfo");
static_assert(sizeof(FBehaviorInfo) == 0x000020, "Wrong size on FBehaviorInfo");
static_assert(offsetof(FBehaviorInfo, Behavior) == 0x000000, "Member 'FBehaviorInfo::Behavior' has a wrong offset!");

struct FInputRayHit final
{
public:
	bool                                          bHit;
	uint8                                         Pad_1[0x7];
	double                                        HitDepth;
	struct FVector                                HitNormal;
	bool                                          bHasHitNormal;
	uint8                                         Pad_29[0x3];
	int32                                         HitIdentifier;
	uint8                                         Pad_30[0x8];
	TWeakObjectPtr<class UObject>                 HitObject;
};
static_assert(alignof(FInputRayHit) == 0x000008, "Wrong alignment on FInputRayHit");
static_assert(sizeof(FInputRayHit) == 0x000040, "Wrong size on FInputRayHit");
static_assert(offsetof(FInputRayHit, bHit) == 0x000000, "Member 'FInputRayHit::bHit' has a wrong offset!");
static_assert(offsetof(FInputRayHit, HitDepth) == 0x000008, "Member 'FInputRayHit::HitDepth' has a wrong offset!");
static_assert(offsetof(FInputRayHit, HitNormal) == 0x000010, "Member 'FInputRayHit::HitNormal' has a wrong offset!");
static_assert(offsetof(FInputRayHit, bHasHitNormal) == 0x000028, "Member 'FInputRayHit::bHasHitNormal' has a wrong offset!");
static_assert(offsetof(FInputRayHit, HitIdentifier) == 0x00002C, "Member 'FInputRayHit::HitIdentifier' has a wrong offset!");
static_assert(offsetof(FInputRayHit, HitObject) == 0x000038, "Member 'FInputRayHit::HitObject' has a wrong offset!");

struct FInputDeviceRay final
{
public:
	struct FRay                                   WorldRay;
	bool                                          bHas2D;
	uint8                                         Pad_31[0x7];
	struct FVector2D                              ScreenPosition;
};
static_assert(alignof(FInputDeviceRay) == 0x000008, "Wrong alignment on FInputDeviceRay");
static_assert(sizeof(FInputDeviceRay) == 0x000048, "Wrong size on FInputDeviceRay");
static_assert(offsetof(FInputDeviceRay, WorldRay) == 0x000000, "Member 'FInputDeviceRay::WorldRay' has a wrong offset!");
static_assert(offsetof(FInputDeviceRay, bHas2D) == 0x000030, "Member 'FInputDeviceRay::bHas2D' has a wrong offset!");
static_assert(offsetof(FInputDeviceRay, ScreenPosition) == 0x000038, "Member 'FInputDeviceRay::ScreenPosition' has a wrong offset!");

struct FActiveGizmo final
{
public:
	class UInteractiveGizmo*                      Gizmo;
	uint8                                         Pad_8[0x28];
};
static_assert(alignof(FActiveGizmo) == 0x000008, "Wrong alignment on FActiveGizmo");
static_assert(sizeof(FActiveGizmo) == 0x000030, "Wrong size on FActiveGizmo");
static_assert(offsetof(FActiveGizmo, Gizmo) == 0x000000, "Member 'FActiveGizmo::Gizmo' has a wrong offset!");

}
