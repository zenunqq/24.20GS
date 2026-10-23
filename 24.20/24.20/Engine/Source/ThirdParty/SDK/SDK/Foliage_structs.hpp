#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EFoliageVertexColorMask : uint8
{
	FOLIAGEVERTEXCOLORMASK_Disabled          = 0,
	FOLIAGEVERTEXCOLORMASK_Red               = 1,
	FOLIAGEVERTEXCOLORMASK_Green             = 2,
	FOLIAGEVERTEXCOLORMASK_Blue              = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha             = 4,
	FOLIAGEVERTEXCOLORMASK_MAX               = 5,
};

enum class EVertexColorMaskChannel : uint8
{
	Red                                      = 0,
	Green                                    = 1,
	Blue                                     = 2,
	Alpha                                    = 3,
	MAX_None                                 = 4,
	EVertexColorMaskChannel_MAX              = 5,
};

enum class EFoliageScaling : uint8
{
	Uniform                                  = 0,
	Free                                     = 1,
	LockXY                                   = 2,
	LockXZ                                   = 3,
	LockYZ                                   = 4,
	EFoliageScaling_MAX                      = 5,
};

enum class ESimulationOverlap : uint8
{
	CollisionOverlap                         = 0,
	ShadeOverlap                             = 1,
	None                                     = 2,
	ESimulationOverlap_MAX                   = 3,
};

enum class ESimulationQuery : uint8
{
	None                                     = 0,
	CollisionOverlap                         = 1,
	ShadeOverlap                             = 2,
	AnyOverlap                               = 3,
	ESimulationQuery_MAX                     = 4,
};

struct FFoliageVertexColorChannelMask final
{
public:
	uint8                                         UseMask : 1;
	uint8                                         Pad_1[0x3];
	float                                         MaskThreshold;
	uint8                                         InvertMask : 1;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FFoliageVertexColorChannelMask) == 0x000004, "Wrong alignment on FFoliageVertexColorChannelMask");
static_assert(sizeof(FFoliageVertexColorChannelMask) == 0x00000C, "Wrong size on FFoliageVertexColorChannelMask");
static_assert(offsetof(FFoliageVertexColorChannelMask, MaskThreshold) == 0x000004, "Member 'FFoliageVertexColorChannelMask::MaskThreshold' has a wrong offset!");

struct FFoliageDensityFalloff final
{
public:
	bool                                          bUseFalloffCurve;
	uint8                                         Pad_1[0x7];
	struct FRuntimeFloatCurve                     FalloffCurve;
};
static_assert(alignof(FFoliageDensityFalloff) == 0x000008, "Wrong alignment on FFoliageDensityFalloff");
static_assert(sizeof(FFoliageDensityFalloff) == 0x000090, "Wrong size on FFoliageDensityFalloff");
static_assert(offsetof(FFoliageDensityFalloff, bUseFalloffCurve) == 0x000000, "Member 'FFoliageDensityFalloff::bUseFalloffCurve' has a wrong offset!");
static_assert(offsetof(FFoliageDensityFalloff, FalloffCurve) == 0x000008, "Member 'FFoliageDensityFalloff::FalloffCurve' has a wrong offset!");

struct FFoliageTypeObject final
{
public:
	class UObject*                                FoliageTypeObject;
	class UFoliageType*                           TypeInstance;
	bool                                          bIsAsset;
	uint8                                         Pad_11[0x7];
	TSubclassOf<class UFoliageType_InstancedStaticMesh> Type;
};
static_assert(alignof(FFoliageTypeObject) == 0x000008, "Wrong alignment on FFoliageTypeObject");
static_assert(sizeof(FFoliageTypeObject) == 0x000020, "Wrong size on FFoliageTypeObject");
static_assert(offsetof(FFoliageTypeObject, FoliageTypeObject) == 0x000000, "Member 'FFoliageTypeObject::FoliageTypeObject' has a wrong offset!");
static_assert(offsetof(FFoliageTypeObject, TypeInstance) == 0x000008, "Member 'FFoliageTypeObject::TypeInstance' has a wrong offset!");
static_assert(offsetof(FFoliageTypeObject, bIsAsset) == 0x000010, "Member 'FFoliageTypeObject::bIsAsset' has a wrong offset!");
static_assert(offsetof(FFoliageTypeObject, Type) == 0x000018, "Member 'FFoliageTypeObject::Type' has a wrong offset!");

struct FProceduralFoliageInstance final
{
public:
	struct FQuat                                  Rotation;
	struct FVector                                Location;
	float                                         Age;
	uint8                                         Pad_3C[0x4];
	struct FVector                                Normal;
	float                                         Scale;
	uint8                                         Pad_5C[0x4];
	class UFoliageType*                           Type;
	uint8                                         Pad_68[0x18];
};
static_assert(alignof(FProceduralFoliageInstance) == 0x000010, "Wrong alignment on FProceduralFoliageInstance");
static_assert(sizeof(FProceduralFoliageInstance) == 0x000080, "Wrong size on FProceduralFoliageInstance");
static_assert(offsetof(FProceduralFoliageInstance, Rotation) == 0x000000, "Member 'FProceduralFoliageInstance::Rotation' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Location) == 0x000020, "Member 'FProceduralFoliageInstance::Location' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Age) == 0x000038, "Member 'FProceduralFoliageInstance::Age' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Normal) == 0x000040, "Member 'FProceduralFoliageInstance::Normal' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Scale) == 0x000058, "Member 'FProceduralFoliageInstance::Scale' has a wrong offset!");
static_assert(offsetof(FProceduralFoliageInstance, Type) == 0x000060, "Member 'FProceduralFoliageInstance::Type' has a wrong offset!");

}
