#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class ETextureFilterMode : uint32
{
	Point                                    = 0,
	Linear                                   = 1,
	MAX                                      = 2,
};

enum class EFInterpolationType : uint32
{
	sRGB                                     = 0,
	HSV                                      = 1,
	NumOf                                    = 2,
	FInterpolationType_MAX                   = 3,
};

struct FColorKey final
{
public:
	float                                         Position;
	struct FLinearColor                           Value;
};
static_assert(alignof(FColorKey) == 0x000004, "Wrong alignment on FColorKey");
static_assert(sizeof(FColorKey) == 0x000014, "Wrong size on FColorKey");
static_assert(offsetof(FColorKey, Position) == 0x000000, "Member 'FColorKey::Position' has a wrong offset!");
static_assert(offsetof(FColorKey, Value) == 0x000004, "Member 'FColorKey::Value' has a wrong offset!");

struct FColorCurve final
{
public:
	uint8                                         Pad_0[0x8];
	TArray<struct FColorKey>                      Keys;
	uint8                                         Pad_18[0x50];
	EFInterpolationType                           InterpolationType;
	uint8                                         Pad_6C[0x4];
};
static_assert(alignof(FColorCurve) == 0x000008, "Wrong alignment on FColorCurve");
static_assert(sizeof(FColorCurve) == 0x000070, "Wrong size on FColorCurve");
static_assert(offsetof(FColorCurve, Keys) == 0x000008, "Member 'FColorCurve::Keys' has a wrong offset!");
static_assert(offsetof(FColorCurve, InterpolationType) == 0x000068, "Member 'FColorCurve::InterpolationType' has a wrong offset!");

struct FGrayscaleGradient final
{
public:
	struct FRichCurve                             Curve;
};
static_assert(alignof(FGrayscaleGradient) == 0x000008, "Wrong alignment on FGrayscaleGradient");
static_assert(sizeof(FGrayscaleGradient) == 0x000080, "Wrong size on FGrayscaleGradient");
static_assert(offsetof(FGrayscaleGradient, Curve) == 0x000000, "Member 'FGrayscaleGradient::Curve' has a wrong offset!");

struct FColorGradient final
{
public:
	struct FColorCurve                            ColorCurve;
	struct FRichCurve                             AlphaCurve;
};
static_assert(alignof(FColorGradient) == 0x000008, "Wrong alignment on FColorGradient");
static_assert(sizeof(FColorGradient) == 0x0000F0, "Wrong size on FColorGradient");
static_assert(offsetof(FColorGradient, ColorCurve) == 0x000000, "Member 'FColorGradient::ColorCurve' has a wrong offset!");
static_assert(offsetof(FColorGradient, AlphaCurve) == 0x000070, "Member 'FColorGradient::AlphaCurve' has a wrong offset!");

}
