#pragma once

#include "Basic.hpp"

#include "ImagePlate_structs.hpp"

namespace SDK::Params
{

struct ImagePlateComponent_SetImagePlate final
{
public:
	struct FImagePlateParameters                  Plate_0;
};
static_assert(alignof(ImagePlateComponent_SetImagePlate) == 0x000008, "Wrong alignment on ImagePlateComponent_SetImagePlate");
static_assert(sizeof(ImagePlateComponent_SetImagePlate) == 0x000040, "Wrong size on ImagePlateComponent_SetImagePlate");
static_assert(offsetof(ImagePlateComponent_SetImagePlate, Plate_0) == 0x000000, "Member 'ImagePlateComponent_SetImagePlate::Plate_0' has a wrong offset!");

struct ImagePlateComponent_GetPlate final
{
public:
	struct FImagePlateParameters                  ReturnValue;
};
static_assert(alignof(ImagePlateComponent_GetPlate) == 0x000008, "Wrong alignment on ImagePlateComponent_GetPlate");
static_assert(sizeof(ImagePlateComponent_GetPlate) == 0x000040, "Wrong size on ImagePlateComponent_GetPlate");
static_assert(offsetof(ImagePlateComponent_GetPlate, ReturnValue) == 0x000000, "Member 'ImagePlateComponent_GetPlate::ReturnValue' has a wrong offset!");

}
