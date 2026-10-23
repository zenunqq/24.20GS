#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "HmxGraphics_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UHmxTextureBase : public UTexture
{
public:
	int32                                         Width;
	uint8                                         Pad_144[0x4];
	ETextureFilterMode                            TextureFilterMode;
	ETextureAddress                               TextureTilingMode;
	uint8                                         Pad_14D[0x3];

public:
	int32 GetCurrentTextureHeight() const;
	int32 GetCurrentTextureWidth() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HmxTextureBase">();
	}
	static class UHmxTextureBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHmxTextureBase>();
	}
};
static_assert(alignof(UHmxTextureBase) == 0x000008, "Wrong alignment on UHmxTextureBase");
static_assert(sizeof(UHmxTextureBase) == 0x000150, "Wrong size on UHmxTextureBase");
static_assert(offsetof(UHmxTextureBase, Width) == 0x000140, "Member 'UHmxTextureBase::Width' has a wrong offset!");
static_assert(offsetof(UHmxTextureBase, TextureFilterMode) == 0x000148, "Member 'UHmxTextureBase::TextureFilterMode' has a wrong offset!");
static_assert(offsetof(UHmxTextureBase, TextureTilingMode) == 0x00014C, "Member 'UHmxTextureBase::TextureTilingMode' has a wrong offset!");

class UCurveTexture final : public UHmxTextureBase
{
public:
	struct FRuntimeFloatCurve                     Curve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurveTexture">();
	}
	static class UCurveTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurveTexture>();
	}
};
static_assert(alignof(UCurveTexture) == 0x000008, "Wrong alignment on UCurveTexture");
static_assert(sizeof(UCurveTexture) == 0x0001D8, "Wrong size on UCurveTexture");
static_assert(offsetof(UCurveTexture, Curve) == 0x000150, "Member 'UCurveTexture::Curve' has a wrong offset!");

class UGradientTexture final : public UHmxTextureBase
{
public:
	bool                                          SpecifyPerChannelGradients;
	uint8                                         Pad_151[0x7];
	struct FColorGradient                         ColorGradient;
	struct FGrayscaleGradient                     Red;
	struct FGrayscaleGradient                     Green;
	struct FGrayscaleGradient                     Blue;
	struct FGrayscaleGradient                     Alpha;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GradientTexture">();
	}
	static class UGradientTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGradientTexture>();
	}
};
static_assert(alignof(UGradientTexture) == 0x000008, "Wrong alignment on UGradientTexture");
static_assert(sizeof(UGradientTexture) == 0x000448, "Wrong size on UGradientTexture");
static_assert(offsetof(UGradientTexture, SpecifyPerChannelGradients) == 0x000150, "Member 'UGradientTexture::SpecifyPerChannelGradients' has a wrong offset!");
static_assert(offsetof(UGradientTexture, ColorGradient) == 0x000158, "Member 'UGradientTexture::ColorGradient' has a wrong offset!");
static_assert(offsetof(UGradientTexture, Red) == 0x000248, "Member 'UGradientTexture::Red' has a wrong offset!");
static_assert(offsetof(UGradientTexture, Green) == 0x0002C8, "Member 'UGradientTexture::Green' has a wrong offset!");
static_assert(offsetof(UGradientTexture, Blue) == 0x000348, "Member 'UGradientTexture::Blue' has a wrong offset!");
static_assert(offsetof(UGradientTexture, Alpha) == 0x0003C8, "Member 'UGradientTexture::Alpha' has a wrong offset!");

class UHysteresisTextureBase : public UHmxTextureBase
{
public:
	uint8                                         Pad_150[0x8];
	float                                         TicksPerShift;
	uint8                                         Pad_15C[0x4];
	int32                                         NumHysteresisSamples;
	uint8                                         Pad_164[0x1C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HysteresisTextureBase">();
	}
	static class UHysteresisTextureBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHysteresisTextureBase>();
	}
};
static_assert(alignof(UHysteresisTextureBase) == 0x000008, "Wrong alignment on UHysteresisTextureBase");
static_assert(sizeof(UHysteresisTextureBase) == 0x000180, "Wrong size on UHysteresisTextureBase");
static_assert(offsetof(UHysteresisTextureBase, TicksPerShift) == 0x000158, "Member 'UHysteresisTextureBase::TicksPerShift' has a wrong offset!");
static_assert(offsetof(UHysteresisTextureBase, NumHysteresisSamples) == 0x000160, "Member 'UHysteresisTextureBase::NumHysteresisSamples' has a wrong offset!");

class UPropHysteresisTexture final : public UHysteresisTextureBase
{
public:
	TArray<float>                                 Data;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropHysteresisTexture">();
	}
	static class UPropHysteresisTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropHysteresisTexture>();
	}
};
static_assert(alignof(UPropHysteresisTexture) == 0x000008, "Wrong alignment on UPropHysteresisTexture");
static_assert(sizeof(UPropHysteresisTexture) == 0x000190, "Wrong size on UPropHysteresisTexture");
static_assert(offsetof(UPropHysteresisTexture, Data) == 0x000180, "Member 'UPropHysteresisTexture::Data' has a wrong offset!");

class UTextureSampler final : public UObject
{
public:
	class UTexture2D*                             SourceTexture;
	int32                                         Width;
	int32                                         Height;
	TArray<struct FLinearColor>                   _sampledImageCache;
	struct FGuid                                  _sourceGuid;

public:
	struct FLinearColor TextureReadPixel(int32 U, int32 V);
	struct FLinearColor TextureSample(const struct FVector2D& UV);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TextureSampler">();
	}
	static class UTextureSampler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextureSampler>();
	}
};
static_assert(alignof(UTextureSampler) == 0x000008, "Wrong alignment on UTextureSampler");
static_assert(sizeof(UTextureSampler) == 0x000058, "Wrong size on UTextureSampler");
static_assert(offsetof(UTextureSampler, SourceTexture) == 0x000028, "Member 'UTextureSampler::SourceTexture' has a wrong offset!");
static_assert(offsetof(UTextureSampler, Width) == 0x000030, "Member 'UTextureSampler::Width' has a wrong offset!");
static_assert(offsetof(UTextureSampler, Height) == 0x000034, "Member 'UTextureSampler::Height' has a wrong offset!");
static_assert(offsetof(UTextureSampler, _sampledImageCache) == 0x000038, "Member 'UTextureSampler::_sampledImageCache' has a wrong offset!");
static_assert(offsetof(UTextureSampler, _sourceGuid) == 0x000048, "Member 'UTextureSampler::_sourceGuid' has a wrong offset!");

}
