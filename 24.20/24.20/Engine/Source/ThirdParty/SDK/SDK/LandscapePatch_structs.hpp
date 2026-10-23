#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

enum class ELandscapeTexturePatchSourceMode : uint8
{
	None                                     = 0,
	InternalTexture                          = 1,
	TextureBackedRenderTarget                = 2,
	TextureAsset                             = 3,
	ELandscapeTexturePatchSourceMode_MAX     = 4,
};

enum class ELandscapeTexturePatchBlendMode : uint8
{
	AlphaBlend                               = 0,
	Additive                                 = 1,
	Min                                      = 2,
	Max                                      = 3,
};

enum class ELandscapeTexturePatchFalloffMode : uint8
{
	Circle                                   = 0,
	RoundedRectangle                         = 1,
	ELandscapeTexturePatchFalloffMode_MAX    = 2,
};

enum class ELandscapeTextureHeightPatchEncoding : uint8
{
	ZeroToOne                                = 0,
	WorldUnits                               = 1,
	NativePackedHeight                       = 2,
	ELandscapeTextureHeightPatchEncoding_MAX = 3,
};

enum class ELandscapeTextureHeightPatchZeroHeightMeaning : uint8
{
	PatchZ                                   = 0,
	LandscapeZ                               = 1,
	WorldZero                                = 2,
	ELandscapeTextureHeightPatchZeroHeightMeaning_MAX = 3,
};

struct FLandscapePatchComponentInstanceData final : public FSceneComponentInstanceData
{
public:
	int32                                         IndexInManager;
	uint8                                         Pad_BC[0x4];
};
static_assert(alignof(FLandscapePatchComponentInstanceData) == 0x000008, "Wrong alignment on FLandscapePatchComponentInstanceData");
static_assert(sizeof(FLandscapePatchComponentInstanceData) == 0x0000C0, "Wrong size on FLandscapePatchComponentInstanceData");
static_assert(offsetof(FLandscapePatchComponentInstanceData, IndexInManager) == 0x0000B8, "Member 'FLandscapePatchComponentInstanceData::IndexInManager' has a wrong offset!");

struct FLandscapeTexturePatchEncodingSettings final
{
public:
	double                                        ZeroInEncoding;
	double                                        WorldSpaceEncodingScale;
};
static_assert(alignof(FLandscapeTexturePatchEncodingSettings) == 0x000008, "Wrong alignment on FLandscapeTexturePatchEncodingSettings");
static_assert(sizeof(FLandscapeTexturePatchEncodingSettings) == 0x000010, "Wrong size on FLandscapeTexturePatchEncodingSettings");
static_assert(offsetof(FLandscapeTexturePatchEncodingSettings, ZeroInEncoding) == 0x000000, "Member 'FLandscapeTexturePatchEncodingSettings::ZeroInEncoding' has a wrong offset!");
static_assert(offsetof(FLandscapeTexturePatchEncodingSettings, WorldSpaceEncodingScale) == 0x000008, "Member 'FLandscapeTexturePatchEncodingSettings::WorldSpaceEncodingScale' has a wrong offset!");

struct FLandscapeHeightPatchConvertToNativeParams final
{
public:
	float                                         ZeroInEncoding;
	float                                         HeightScale;
	float                                         HeightOffset;
};
static_assert(alignof(FLandscapeHeightPatchConvertToNativeParams) == 0x000004, "Wrong alignment on FLandscapeHeightPatchConvertToNativeParams");
static_assert(sizeof(FLandscapeHeightPatchConvertToNativeParams) == 0x00000C, "Wrong size on FLandscapeHeightPatchConvertToNativeParams");
static_assert(offsetof(FLandscapeHeightPatchConvertToNativeParams, ZeroInEncoding) == 0x000000, "Member 'FLandscapeHeightPatchConvertToNativeParams::ZeroInEncoding' has a wrong offset!");
static_assert(offsetof(FLandscapeHeightPatchConvertToNativeParams, HeightScale) == 0x000004, "Member 'FLandscapeHeightPatchConvertToNativeParams::HeightScale' has a wrong offset!");
static_assert(offsetof(FLandscapeHeightPatchConvertToNativeParams, HeightOffset) == 0x000008, "Member 'FLandscapeHeightPatchConvertToNativeParams::HeightOffset' has a wrong offset!");

}
