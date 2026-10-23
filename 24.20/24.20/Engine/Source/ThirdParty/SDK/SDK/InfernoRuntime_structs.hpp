#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct FFortCurieVoxelPropagationProperties final : public FTableRowBase
{
public:
	float                                         PropagationZDirectionDownMultiplier;
	float                                         PropagationZDirectionUpMultiplier;
	float                                         PropagationBaseDelay;
	float                                         PropagationBaseSpeed;
};
static_assert(alignof(FFortCurieVoxelPropagationProperties) == 0x000008, "Wrong alignment on FFortCurieVoxelPropagationProperties");
static_assert(sizeof(FFortCurieVoxelPropagationProperties) == 0x000018, "Wrong size on FFortCurieVoxelPropagationProperties");
static_assert(offsetof(FFortCurieVoxelPropagationProperties, PropagationZDirectionDownMultiplier) == 0x000008, "Member 'FFortCurieVoxelPropagationProperties::PropagationZDirectionDownMultiplier' has a wrong offset!");
static_assert(offsetof(FFortCurieVoxelPropagationProperties, PropagationZDirectionUpMultiplier) == 0x00000C, "Member 'FFortCurieVoxelPropagationProperties::PropagationZDirectionUpMultiplier' has a wrong offset!");
static_assert(offsetof(FFortCurieVoxelPropagationProperties, PropagationBaseDelay) == 0x000010, "Member 'FFortCurieVoxelPropagationProperties::PropagationBaseDelay' has a wrong offset!");
static_assert(offsetof(FFortCurieVoxelPropagationProperties, PropagationBaseSpeed) == 0x000014, "Member 'FFortCurieVoxelPropagationProperties::PropagationBaseSpeed' has a wrong offset!");

struct FFortCurieVoxelFirePropagationManagerTickFunction final : public FTickFunction
{
public:
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FFortCurieVoxelFirePropagationManagerTickFunction) == 0x000008, "Wrong alignment on FFortCurieVoxelFirePropagationManagerTickFunction");
static_assert(sizeof(FFortCurieVoxelFirePropagationManagerTickFunction) == 0x000030, "Wrong size on FFortCurieVoxelFirePropagationManagerTickFunction");

struct alignas(0x08) FFortCurieVoxelFireParticleGrassData final
{
public:
	uint8                                         Pad_0[0x58];
};
static_assert(alignof(FFortCurieVoxelFireParticleGrassData) == 0x000008, "Wrong alignment on FFortCurieVoxelFireParticleGrassData");
static_assert(sizeof(FFortCurieVoxelFireParticleGrassData) == 0x000058, "Wrong size on FFortCurieVoxelFireParticleGrassData");

}
