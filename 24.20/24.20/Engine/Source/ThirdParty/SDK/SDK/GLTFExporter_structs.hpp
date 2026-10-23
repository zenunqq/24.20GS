#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

enum class EGLTFTextureImageFormat : uint8
{
	None                                     = 0,
	PNG                                      = 1,
	JPEG                                     = 2,
	EGLTFTextureImageFormat_MAX              = 3,
};

enum class EGLTFTextureType : uint8
{
	None                                     = 0,
	HDR                                      = 1,
	Normalmaps                               = 2,
	Lightmaps                                = 4,
	All                                      = 7,
	EGLTFTextureType_MAX                     = 8,
};

enum class EGLTFTextureHDREncoding : uint8
{
	None                                     = 0,
	RGBM                                     = 1,
	EGLTFTextureHDREncoding_MAX              = 2,
};

enum class EGLTFSceneMobility : uint8
{
	None                                     = 0,
	Static                                   = 1,
	Stationary                               = 2,
	Movable                                  = 4,
	All                                      = 7,
	EGLTFSceneMobility_MAX                   = 8,
};

enum class EGLTFVariantSetsMode : uint8
{
	None                                     = 0,
	Khronos                                  = 1,
	Epic                                     = 2,
	EGLTFVariantSetsMode_MAX                 = 3,
};

enum class EGLTFMaterialVariantMode : uint8
{
	None                                     = 0,
	Simple                                   = 1,
	UseMeshData                              = 2,
	EGLTFMaterialVariantMode_MAX             = 3,
};

enum class EGLTFMaterialBakeMode : uint8
{
	Disabled                                 = 0,
	Simple                                   = 1,
	UseMeshData                              = 2,
	EGLTFMaterialBakeMode_MAX                = 3,
};

enum class EGLTFMaterialBakeSizePOT : uint8
{
	POT_1                                    = 0,
	POT_2                                    = 1,
	POT_4                                    = 2,
	POT_8                                    = 3,
	POT_16                                   = 4,
	POT_32                                   = 5,
	POT_64                                   = 6,
	POT_128                                  = 7,
	POT_256                                  = 8,
	POT_512                                  = 9,
	POT_1024                                 = 10,
	POT_2048                                 = 11,
	POT_4096                                 = 12,
	POT_8192                                 = 13,
	POT_MAX                                  = 14,
};

enum class EGLTFMaterialPropertyGroup : uint8
{
	None                                     = 0,
	BaseColorOpacity                         = 1,
	MetallicRoughness                        = 2,
	EmissiveColor                            = 3,
	Normal                                   = 4,
	AmbientOcclusion                         = 5,
	ClearCoatRoughness                       = 6,
	ClearCoatBottomNormal                    = 7,
	EGLTFMaterialPropertyGroup_MAX           = 8,
};

struct FGLTFExportMessages final
{
public:
	TArray<class FString>                         Suggestions;
	TArray<class FString>                         Warnings;
	TArray<class FString>                         Errors;
};
static_assert(alignof(FGLTFExportMessages) == 0x000008, "Wrong alignment on FGLTFExportMessages");
static_assert(sizeof(FGLTFExportMessages) == 0x000030, "Wrong size on FGLTFExportMessages");
static_assert(offsetof(FGLTFExportMessages, Suggestions) == 0x000000, "Member 'FGLTFExportMessages::Suggestions' has a wrong offset!");
static_assert(offsetof(FGLTFExportMessages, Warnings) == 0x000010, "Member 'FGLTFExportMessages::Warnings' has a wrong offset!");
static_assert(offsetof(FGLTFExportMessages, Errors) == 0x000020, "Member 'FGLTFExportMessages::Errors' has a wrong offset!");

struct FGLTFOverrideMaterialBakeSettings final
{
public:
	bool                                          bOverrideSize;
	EGLTFMaterialBakeSizePOT                      Size;
	bool                                          bOverrideFilter;
	ETextureFilter                                Filter;
	bool                                          bOverrideTiling;
	ETextureAddress                               Tiling;
};
static_assert(alignof(FGLTFOverrideMaterialBakeSettings) == 0x000001, "Wrong alignment on FGLTFOverrideMaterialBakeSettings");
static_assert(sizeof(FGLTFOverrideMaterialBakeSettings) == 0x000006, "Wrong size on FGLTFOverrideMaterialBakeSettings");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, bOverrideSize) == 0x000000, "Member 'FGLTFOverrideMaterialBakeSettings::bOverrideSize' has a wrong offset!");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, Size) == 0x000001, "Member 'FGLTFOverrideMaterialBakeSettings::Size' has a wrong offset!");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, bOverrideFilter) == 0x000002, "Member 'FGLTFOverrideMaterialBakeSettings::bOverrideFilter' has a wrong offset!");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, Filter) == 0x000003, "Member 'FGLTFOverrideMaterialBakeSettings::Filter' has a wrong offset!");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, bOverrideTiling) == 0x000004, "Member 'FGLTFOverrideMaterialBakeSettings::bOverrideTiling' has a wrong offset!");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, Tiling) == 0x000005, "Member 'FGLTFOverrideMaterialBakeSettings::Tiling' has a wrong offset!");

}
