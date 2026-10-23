#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FUVMapSettings final
{
public:
	struct FVector                                Size;
	struct FVector2D                              UVTile;
	struct FVector                                Position;
	struct FRotator                               Rotation;
	struct FVector                                Scale;
};
static_assert(alignof(FUVMapSettings) == 0x000008, "Wrong alignment on FUVMapSettings");
static_assert(sizeof(FUVMapSettings) == 0x000070, "Wrong size on FUVMapSettings");
static_assert(offsetof(FUVMapSettings, Size) == 0x000000, "Member 'FUVMapSettings::Size' has a wrong offset!");
static_assert(offsetof(FUVMapSettings, UVTile) == 0x000018, "Member 'FUVMapSettings::UVTile' has a wrong offset!");
static_assert(offsetof(FUVMapSettings, Position) == 0x000028, "Member 'FUVMapSettings::Position' has a wrong offset!");
static_assert(offsetof(FUVMapSettings, Rotation) == 0x000040, "Member 'FUVMapSettings::Rotation' has a wrong offset!");
static_assert(offsetof(FUVMapSettings, Scale) == 0x000058, "Member 'FUVMapSettings::Scale' has a wrong offset!");

}
