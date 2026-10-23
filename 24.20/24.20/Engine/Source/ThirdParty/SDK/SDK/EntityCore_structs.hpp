#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EMovementType : uint8
{
	SweepPhysics                             = 0,
	TeleportPhysics                          = 1,
	ResetPhysics                             = 2,
	EMovementType_MAX                        = 3,
};

#pragma pack(push, 0x1)
struct alignas(0x01) FComponentData
{
};
#pragma pack(pop)
static_assert(alignof(FComponentData) == 0x000001, "Wrong alignment on FComponentData");
static_assert(sizeof(FComponentData) == 0x000001, "Wrong size on FComponentData");

struct FEntityPositionComponentData final : public FComponentData
{
public:
	struct FVector                                WorldPosition;
};
static_assert(alignof(FEntityPositionComponentData) == 0x000008, "Wrong alignment on FEntityPositionComponentData");
static_assert(sizeof(FEntityPositionComponentData) == 0x000018, "Wrong size on FEntityPositionComponentData");
static_assert(offsetof(FEntityPositionComponentData, WorldPosition) == 0x000000, "Member 'FEntityPositionComponentData::WorldPosition' has a wrong offset!");

struct FEntityRotationComponentData final : public FComponentData
{
public:
	struct FRotator                               WorldRotation;
};
static_assert(alignof(FEntityRotationComponentData) == 0x000008, "Wrong alignment on FEntityRotationComponentData");
static_assert(sizeof(FEntityRotationComponentData) == 0x000018, "Wrong size on FEntityRotationComponentData");
static_assert(offsetof(FEntityRotationComponentData, WorldRotation) == 0x000000, "Member 'FEntityRotationComponentData::WorldRotation' has a wrong offset!");

struct FEntityScaleComponentData final : public FComponentData
{
public:
	struct FVector                                WorldScale3D;
};
static_assert(alignof(FEntityScaleComponentData) == 0x000008, "Wrong alignment on FEntityScaleComponentData");
static_assert(sizeof(FEntityScaleComponentData) == 0x000018, "Wrong size on FEntityScaleComponentData");
static_assert(offsetof(FEntityScaleComponentData, WorldScale3D) == 0x000000, "Member 'FEntityScaleComponentData::WorldScale3D' has a wrong offset!");

struct alignas(0x08) FEntityCoreSystemRelativePositionComponentData final : public FComponentData
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FEntityCoreSystemRelativePositionComponentData) == 0x000008, "Wrong alignment on FEntityCoreSystemRelativePositionComponentData");
static_assert(sizeof(FEntityCoreSystemRelativePositionComponentData) == 0x000020, "Wrong size on FEntityCoreSystemRelativePositionComponentData");

struct FEntityComponentContainer final
{
public:
	TArray<class UEntityComponent*>               Array;
};
static_assert(alignof(FEntityComponentContainer) == 0x000008, "Wrong alignment on FEntityComponentContainer");
static_assert(sizeof(FEntityComponentContainer) == 0x000010, "Wrong size on FEntityComponentContainer");
static_assert(offsetof(FEntityComponentContainer, Array) == 0x000000, "Member 'FEntityComponentContainer::Array' has a wrong offset!");

struct FEntityTickFunction final : public FTickFunction
{
public:
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FEntityTickFunction) == 0x000008, "Wrong alignment on FEntityTickFunction");
static_assert(sizeof(FEntityTickFunction) == 0x000030, "Wrong size on FEntityTickFunction");

}
