#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AudioShapeComponent_UpdateAudioShape final
{
public:
	TArray<class APlayerController*>              InLocalControllers;
};
static_assert(alignof(AudioShapeComponent_UpdateAudioShape) == 0x000008, "Wrong alignment on AudioShapeComponent_UpdateAudioShape");
static_assert(sizeof(AudioShapeComponent_UpdateAudioShape) == 0x000010, "Wrong size on AudioShapeComponent_UpdateAudioShape");
static_assert(offsetof(AudioShapeComponent_UpdateAudioShape, InLocalControllers) == 0x000000, "Member 'AudioShapeComponent_UpdateAudioShape::InLocalControllers' has a wrong offset!");

struct AudioShapePrimitiveComponent_GetEdgeAudioComponent final
{
public:
	class UAudioComponent*                        ReturnValue;
};
static_assert(alignof(AudioShapePrimitiveComponent_GetEdgeAudioComponent) == 0x000008, "Wrong alignment on AudioShapePrimitiveComponent_GetEdgeAudioComponent");
static_assert(sizeof(AudioShapePrimitiveComponent_GetEdgeAudioComponent) == 0x000008, "Wrong size on AudioShapePrimitiveComponent_GetEdgeAudioComponent");
static_assert(offsetof(AudioShapePrimitiveComponent_GetEdgeAudioComponent, ReturnValue) == 0x000000, "Member 'AudioShapePrimitiveComponent_GetEdgeAudioComponent::ReturnValue' has a wrong offset!");

struct AudioShapePrimitiveComponent_GetInsideAudioComponent final
{
public:
	class UAudioComponent*                        ReturnValue;
};
static_assert(alignof(AudioShapePrimitiveComponent_GetInsideAudioComponent) == 0x000008, "Wrong alignment on AudioShapePrimitiveComponent_GetInsideAudioComponent");
static_assert(sizeof(AudioShapePrimitiveComponent_GetInsideAudioComponent) == 0x000008, "Wrong size on AudioShapePrimitiveComponent_GetInsideAudioComponent");
static_assert(offsetof(AudioShapePrimitiveComponent_GetInsideAudioComponent, ReturnValue) == 0x000000, "Member 'AudioShapePrimitiveComponent_GetInsideAudioComponent::ReturnValue' has a wrong offset!");

struct AudioShapePrimitiveComponent_GetIsPlayerInside final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(AudioShapePrimitiveComponent_GetIsPlayerInside) == 0x000001, "Wrong alignment on AudioShapePrimitiveComponent_GetIsPlayerInside");
static_assert(sizeof(AudioShapePrimitiveComponent_GetIsPlayerInside) == 0x000001, "Wrong size on AudioShapePrimitiveComponent_GetIsPlayerInside");
static_assert(offsetof(AudioShapePrimitiveComponent_GetIsPlayerInside, ReturnValue) == 0x000000, "Member 'AudioShapePrimitiveComponent_GetIsPlayerInside::ReturnValue' has a wrong offset!");

struct AudioShapeBoxComponent_SetBoxTransform final
{
public:
	struct FTransform                             InTransform;
};
static_assert(alignof(AudioShapeBoxComponent_SetBoxTransform) == 0x000010, "Wrong alignment on AudioShapeBoxComponent_SetBoxTransform");
static_assert(sizeof(AudioShapeBoxComponent_SetBoxTransform) == 0x000060, "Wrong size on AudioShapeBoxComponent_SetBoxTransform");
static_assert(offsetof(AudioShapeBoxComponent_SetBoxTransform, InTransform) == 0x000000, "Member 'AudioShapeBoxComponent_SetBoxTransform::InTransform' has a wrong offset!");

struct AudioShapeCylinderComponent_SetHalfHeight final
{
public:
	float                                         InHalfHeight;
};
static_assert(alignof(AudioShapeCylinderComponent_SetHalfHeight) == 0x000004, "Wrong alignment on AudioShapeCylinderComponent_SetHalfHeight");
static_assert(sizeof(AudioShapeCylinderComponent_SetHalfHeight) == 0x000004, "Wrong size on AudioShapeCylinderComponent_SetHalfHeight");
static_assert(offsetof(AudioShapeCylinderComponent_SetHalfHeight, InHalfHeight) == 0x000000, "Member 'AudioShapeCylinderComponent_SetHalfHeight::InHalfHeight' has a wrong offset!");

struct AudioShapeCylinderComponent_SetRadius final
{
public:
	float                                         InRadius;
};
static_assert(alignof(AudioShapeCylinderComponent_SetRadius) == 0x000004, "Wrong alignment on AudioShapeCylinderComponent_SetRadius");
static_assert(sizeof(AudioShapeCylinderComponent_SetRadius) == 0x000004, "Wrong size on AudioShapeCylinderComponent_SetRadius");
static_assert(offsetof(AudioShapeCylinderComponent_SetRadius, InRadius) == 0x000000, "Member 'AudioShapeCylinderComponent_SetRadius::InRadius' has a wrong offset!");

struct AudioShapeLineComponent_SetEndPoint final
{
public:
	struct FVector                                InEndPoint;
};
static_assert(alignof(AudioShapeLineComponent_SetEndPoint) == 0x000008, "Wrong alignment on AudioShapeLineComponent_SetEndPoint");
static_assert(sizeof(AudioShapeLineComponent_SetEndPoint) == 0x000018, "Wrong size on AudioShapeLineComponent_SetEndPoint");
static_assert(offsetof(AudioShapeLineComponent_SetEndPoint, InEndPoint) == 0x000000, "Member 'AudioShapeLineComponent_SetEndPoint::InEndPoint' has a wrong offset!");

struct AudioShapeLineComponent_SetStartPoint final
{
public:
	struct FVector                                InStartPoint;
};
static_assert(alignof(AudioShapeLineComponent_SetStartPoint) == 0x000008, "Wrong alignment on AudioShapeLineComponent_SetStartPoint");
static_assert(sizeof(AudioShapeLineComponent_SetStartPoint) == 0x000018, "Wrong size on AudioShapeLineComponent_SetStartPoint");
static_assert(offsetof(AudioShapeLineComponent_SetStartPoint, InStartPoint) == 0x000000, "Member 'AudioShapeLineComponent_SetStartPoint::InStartPoint' has a wrong offset!");

struct AudioShapeLineListComponent_AddPoint final
{
public:
	struct FVector                                InPoint;
	int32                                         ReturnValue;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(AudioShapeLineListComponent_AddPoint) == 0x000008, "Wrong alignment on AudioShapeLineListComponent_AddPoint");
static_assert(sizeof(AudioShapeLineListComponent_AddPoint) == 0x000020, "Wrong size on AudioShapeLineListComponent_AddPoint");
static_assert(offsetof(AudioShapeLineListComponent_AddPoint, InPoint) == 0x000000, "Member 'AudioShapeLineListComponent_AddPoint::InPoint' has a wrong offset!");
static_assert(offsetof(AudioShapeLineListComponent_AddPoint, ReturnValue) == 0x000018, "Member 'AudioShapeLineListComponent_AddPoint::ReturnValue' has a wrong offset!");

struct AudioShapeLineListComponent_RemovePoint final
{
public:
	int32                                         InIndex;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(AudioShapeLineListComponent_RemovePoint) == 0x000004, "Wrong alignment on AudioShapeLineListComponent_RemovePoint");
static_assert(sizeof(AudioShapeLineListComponent_RemovePoint) == 0x000008, "Wrong size on AudioShapeLineListComponent_RemovePoint");
static_assert(offsetof(AudioShapeLineListComponent_RemovePoint, InIndex) == 0x000000, "Member 'AudioShapeLineListComponent_RemovePoint::InIndex' has a wrong offset!");
static_assert(offsetof(AudioShapeLineListComponent_RemovePoint, ReturnValue) == 0x000004, "Member 'AudioShapeLineListComponent_RemovePoint::ReturnValue' has a wrong offset!");

struct AudioShapeLineListComponent_UpdatePoint final
{
public:
	int32                                         InIndex;
	uint8                                         Pad_4[0x4];
	struct FVector                                InPoint;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(AudioShapeLineListComponent_UpdatePoint) == 0x000008, "Wrong alignment on AudioShapeLineListComponent_UpdatePoint");
static_assert(sizeof(AudioShapeLineListComponent_UpdatePoint) == 0x000028, "Wrong size on AudioShapeLineListComponent_UpdatePoint");
static_assert(offsetof(AudioShapeLineListComponent_UpdatePoint, InIndex) == 0x000000, "Member 'AudioShapeLineListComponent_UpdatePoint::InIndex' has a wrong offset!");
static_assert(offsetof(AudioShapeLineListComponent_UpdatePoint, InPoint) == 0x000008, "Member 'AudioShapeLineListComponent_UpdatePoint::InPoint' has a wrong offset!");
static_assert(offsetof(AudioShapeLineListComponent_UpdatePoint, ReturnValue) == 0x000020, "Member 'AudioShapeLineListComponent_UpdatePoint::ReturnValue' has a wrong offset!");

struct AudioShapeLineListComponent_GetPoints final
{
public:
	TArray<struct FVector>                        OutPoints;
};
static_assert(alignof(AudioShapeLineListComponent_GetPoints) == 0x000008, "Wrong alignment on AudioShapeLineListComponent_GetPoints");
static_assert(sizeof(AudioShapeLineListComponent_GetPoints) == 0x000010, "Wrong size on AudioShapeLineListComponent_GetPoints");
static_assert(offsetof(AudioShapeLineListComponent_GetPoints, OutPoints) == 0x000000, "Member 'AudioShapeLineListComponent_GetPoints::OutPoints' has a wrong offset!");

struct AudioShapeSphereComponent_SetRadius final
{
public:
	float                                         InRadius;
};
static_assert(alignof(AudioShapeSphereComponent_SetRadius) == 0x000004, "Wrong alignment on AudioShapeSphereComponent_SetRadius");
static_assert(sizeof(AudioShapeSphereComponent_SetRadius) == 0x000004, "Wrong size on AudioShapeSphereComponent_SetRadius");
static_assert(offsetof(AudioShapeSphereComponent_SetRadius, InRadius) == 0x000000, "Member 'AudioShapeSphereComponent_SetRadius::InRadius' has a wrong offset!");

}
