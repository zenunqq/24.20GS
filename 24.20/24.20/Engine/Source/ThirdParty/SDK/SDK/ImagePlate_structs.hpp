#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FImagePlateParameters final
{
public:
	class UMaterialInterface*                     Material;
	class FName                                   TextureParameterName;
	bool                                          bFillScreen;
	uint8                                         Pad_D[0x3];
	struct FVector2D                              FillScreenAmount;
	struct FVector2D                              FixedSize;
	class UTexture*                               RenderTexture;
	class UMaterialInstanceDynamic*               DynamicMaterial;
};
static_assert(alignof(FImagePlateParameters) == 0x000008, "Wrong alignment on FImagePlateParameters");
static_assert(sizeof(FImagePlateParameters) == 0x000040, "Wrong size on FImagePlateParameters");
static_assert(offsetof(FImagePlateParameters, Material) == 0x000000, "Member 'FImagePlateParameters::Material' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, TextureParameterName) == 0x000008, "Member 'FImagePlateParameters::TextureParameterName' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, bFillScreen) == 0x00000C, "Member 'FImagePlateParameters::bFillScreen' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, FillScreenAmount) == 0x000010, "Member 'FImagePlateParameters::FillScreenAmount' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, FixedSize) == 0x000020, "Member 'FImagePlateParameters::FixedSize' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, RenderTexture) == 0x000030, "Member 'FImagePlateParameters::RenderTexture' has a wrong offset!");
static_assert(offsetof(FImagePlateParameters, DynamicMaterial) == 0x000038, "Member 'FImagePlateParameters::DynamicMaterial' has a wrong offset!");

}
