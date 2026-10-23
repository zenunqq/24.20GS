#pragma once

#include "Basic.hpp"

#include "ClothingSystemRuntimeInterface_structs.hpp"
#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "ClothingSystemRuntimeCommon_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UClothConfigCommon : public UClothConfigBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigCommon">();
	}
	static class UClothConfigCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigCommon>();
	}
};
static_assert(alignof(UClothConfigCommon) == 0x000008, "Wrong alignment on UClothConfigCommon");
static_assert(sizeof(UClothConfigCommon) == 0x000028, "Wrong size on UClothConfigCommon");

class UClothSharedConfigCommon : public UClothConfigCommon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothSharedConfigCommon">();
	}
	static class UClothSharedConfigCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothSharedConfigCommon>();
	}
};
static_assert(alignof(UClothSharedConfigCommon) == 0x000008, "Wrong alignment on UClothSharedConfigCommon");
static_assert(sizeof(UClothSharedConfigCommon) == 0x000028, "Wrong size on UClothSharedConfigCommon");

class UClothingAssetCustomData final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetCustomData">();
	}
	static class UClothingAssetCustomData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetCustomData>();
	}
};
static_assert(alignof(UClothingAssetCustomData) == 0x000008, "Wrong alignment on UClothingAssetCustomData");
static_assert(sizeof(UClothingAssetCustomData) == 0x000028, "Wrong size on UClothingAssetCustomData");

class UClothingAssetCommon final : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                          PhysicsAsset;
	TMap<class FName, class UClothConfigBase*>    ClothConfigs;
	TArray<struct FClothLODDataCommon>            LodData;
	TArray<int32>                                 LodMap;
	TArray<class FName>                           UsedBoneNames;
	TArray<int32>                                 UsedBoneIndices;
	int32                                         ReferenceBoneIndex;
	uint8                                         Pad_E4[0x4];
	class UClothingAssetCustomData*               CustomData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetCommon">();
	}
	static class UClothingAssetCommon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetCommon>();
	}
};
static_assert(alignof(UClothingAssetCommon) == 0x000008, "Wrong alignment on UClothingAssetCommon");
static_assert(sizeof(UClothingAssetCommon) == 0x0000F0, "Wrong size on UClothingAssetCommon");
static_assert(offsetof(UClothingAssetCommon, PhysicsAsset) == 0x000048, "Member 'UClothingAssetCommon::PhysicsAsset' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, ClothConfigs) == 0x000050, "Member 'UClothingAssetCommon::ClothConfigs' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, LodData) == 0x0000A0, "Member 'UClothingAssetCommon::LodData' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, LodMap) == 0x0000B0, "Member 'UClothingAssetCommon::LodMap' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, UsedBoneNames) == 0x0000C0, "Member 'UClothingAssetCommon::UsedBoneNames' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, UsedBoneIndices) == 0x0000D0, "Member 'UClothingAssetCommon::UsedBoneIndices' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, ReferenceBoneIndex) == 0x0000E0, "Member 'UClothingAssetCommon::ReferenceBoneIndex' has a wrong offset!");
static_assert(offsetof(UClothingAssetCommon, CustomData) == 0x0000E8, "Member 'UClothingAssetCommon::CustomData' has a wrong offset!");

class UClothLODDataCommon_Legacy final : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*      PhysicalMeshData;
	struct FClothPhysicalMeshData                 ClothPhysicalMeshData;
	struct FClothCollisionData                    CollisionData;
	uint8                                         Pad_148[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothLODDataCommon_Legacy">();
	}
	static class UClothLODDataCommon_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothLODDataCommon_Legacy>();
	}
};
static_assert(alignof(UClothLODDataCommon_Legacy) == 0x000008, "Wrong alignment on UClothLODDataCommon_Legacy");
static_assert(sizeof(UClothLODDataCommon_Legacy) == 0x000168, "Wrong size on UClothLODDataCommon_Legacy");
static_assert(offsetof(UClothLODDataCommon_Legacy, PhysicalMeshData) == 0x000028, "Member 'UClothLODDataCommon_Legacy::PhysicalMeshData' has a wrong offset!");
static_assert(offsetof(UClothLODDataCommon_Legacy, ClothPhysicalMeshData) == 0x000030, "Member 'UClothLODDataCommon_Legacy::ClothPhysicalMeshData' has a wrong offset!");
static_assert(offsetof(UClothLODDataCommon_Legacy, CollisionData) == 0x000108, "Member 'UClothLODDataCommon_Legacy::CollisionData' has a wrong offset!");

}
