#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FNaniteDisplacedMeshDisplacementMap final
{
public:
	class UTexture2D*                             Texture;
	float                                         Magnitude;
	float                                         Center;
};
static_assert(alignof(FNaniteDisplacedMeshDisplacementMap) == 0x000008, "Wrong alignment on FNaniteDisplacedMeshDisplacementMap");
static_assert(sizeof(FNaniteDisplacedMeshDisplacementMap) == 0x000010, "Wrong size on FNaniteDisplacedMeshDisplacementMap");
static_assert(offsetof(FNaniteDisplacedMeshDisplacementMap, Texture) == 0x000000, "Member 'FNaniteDisplacedMeshDisplacementMap::Texture' has a wrong offset!");
static_assert(offsetof(FNaniteDisplacedMeshDisplacementMap, Magnitude) == 0x000008, "Member 'FNaniteDisplacedMeshDisplacementMap::Magnitude' has a wrong offset!");
static_assert(offsetof(FNaniteDisplacedMeshDisplacementMap, Center) == 0x00000C, "Member 'FNaniteDisplacedMeshDisplacementMap::Center' has a wrong offset!");

struct FNaniteDisplacedMeshParams final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FNaniteDisplacedMeshParams) == 0x000001, "Wrong alignment on FNaniteDisplacedMeshParams");
static_assert(sizeof(FNaniteDisplacedMeshParams) == 0x000001, "Wrong size on FNaniteDisplacedMeshParams");

}
