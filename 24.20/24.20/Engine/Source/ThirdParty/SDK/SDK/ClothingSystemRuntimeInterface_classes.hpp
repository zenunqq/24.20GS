#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ClothingSystemRuntimeInterface_structs.hpp"

namespace SDK
{

class UClothingAssetBase : public UObject
{
public:
	class FString                                 ImportedFilePath;
	struct FGuid                                  AssetGuid;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetBase">();
	}
	static class UClothingAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetBase>();
	}
};
static_assert(alignof(UClothingAssetBase) == 0x000008, "Wrong alignment on UClothingAssetBase");
static_assert(sizeof(UClothingAssetBase) == 0x000048, "Wrong size on UClothingAssetBase");
static_assert(offsetof(UClothingAssetBase, ImportedFilePath) == 0x000028, "Member 'UClothingAssetBase::ImportedFilePath' has a wrong offset!");
static_assert(offsetof(UClothingAssetBase, AssetGuid) == 0x000038, "Member 'UClothingAssetBase::AssetGuid' has a wrong offset!");

class UClothConfigBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothConfigBase">();
	}
	static class UClothConfigBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothConfigBase>();
	}
};
static_assert(alignof(UClothConfigBase) == 0x000008, "Wrong alignment on UClothConfigBase");
static_assert(sizeof(UClothConfigBase) == 0x000028, "Wrong size on UClothConfigBase");

class UClothSharedSimConfigBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothSharedSimConfigBase">();
	}
	static class UClothSharedSimConfigBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothSharedSimConfigBase>();
	}
};
static_assert(alignof(UClothSharedSimConfigBase) == 0x000008, "Wrong alignment on UClothSharedSimConfigBase");
static_assert(sizeof(UClothSharedSimConfigBase) == 0x000028, "Wrong size on UClothSharedSimConfigBase");

class UClothingSimulationFactory : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationFactory">();
	}
	static class UClothingSimulationFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationFactory>();
	}
};
static_assert(alignof(UClothingSimulationFactory) == 0x000008, "Wrong alignment on UClothingSimulationFactory");
static_assert(sizeof(UClothingSimulationFactory) == 0x000028, "Wrong size on UClothingSimulationFactory");

class UClothingInteractor : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingInteractor">();
	}
	static class UClothingInteractor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingInteractor>();
	}
};
static_assert(alignof(UClothingInteractor) == 0x000008, "Wrong alignment on UClothingInteractor");
static_assert(sizeof(UClothingInteractor) == 0x000030, "Wrong size on UClothingInteractor");

class UClothingSimulationInteractor : public UObject
{
public:
	TMap<class FName, class UClothingInteractor*> ClothingInteractors;
	uint8                                         Pad_78[0x18];

public:
	void ClothConfigUpdated();
	void DisableGravityOverride();
	void EnableGravityOverride(const struct FVector& InVector);
	void PhysicsAssetUpdated();
	void SetAnimDriveSpringStiffness(float InStiffness);
	void SetMaxNumIterations(int32 MaxNumIterations);
	void SetNumIterations(int32 NumIterations);
	void SetNumSubsteps(int32 NumSubsteps);

	class UClothingInteractor* GetClothingInteractor(const class FString& ClothingAssetName) const;
	int32 GetNumCloths() const;
	int32 GetNumDynamicParticles() const;
	int32 GetNumIterations() const;
	int32 GetNumKinematicParticles() const;
	int32 GetNumSubsteps() const;
	float GetSimulationTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationInteractor">();
	}
	static class UClothingSimulationInteractor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationInteractor>();
	}
};
static_assert(alignof(UClothingSimulationInteractor) == 0x000008, "Wrong alignment on UClothingSimulationInteractor");
static_assert(sizeof(UClothingSimulationInteractor) == 0x000090, "Wrong size on UClothingSimulationInteractor");
static_assert(offsetof(UClothingSimulationInteractor, ClothingInteractors) == 0x000028, "Member 'UClothingSimulationInteractor::ClothingInteractors' has a wrong offset!");

class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct FVector3f>                      Vertices;
	TArray<struct FVector3f>                      Normals;
	TArray<uint32>                                Indices;
	TArray<float>                                 InverseMasses;
	TArray<struct FClothVertBoneData>             BoneData;
	int32                                         NumFixedVerts;
	int32                                         MaxBoneWeights;
	TArray<uint32>                                SelfCollisionIndices;
	uint8                                         Pad_90[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothPhysicalMeshDataBase_Legacy">();
	}
	static class UClothPhysicalMeshDataBase_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothPhysicalMeshDataBase_Legacy>();
	}
};
static_assert(alignof(UClothPhysicalMeshDataBase_Legacy) == 0x000008, "Wrong alignment on UClothPhysicalMeshDataBase_Legacy");
static_assert(sizeof(UClothPhysicalMeshDataBase_Legacy) == 0x0000E0, "Wrong size on UClothPhysicalMeshDataBase_Legacy");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Vertices) == 0x000028, "Member 'UClothPhysicalMeshDataBase_Legacy::Vertices' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Normals) == 0x000038, "Member 'UClothPhysicalMeshDataBase_Legacy::Normals' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Indices) == 0x000048, "Member 'UClothPhysicalMeshDataBase_Legacy::Indices' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, InverseMasses) == 0x000058, "Member 'UClothPhysicalMeshDataBase_Legacy::InverseMasses' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, BoneData) == 0x000068, "Member 'UClothPhysicalMeshDataBase_Legacy::BoneData' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, NumFixedVerts) == 0x000078, "Member 'UClothPhysicalMeshDataBase_Legacy::NumFixedVerts' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, MaxBoneWeights) == 0x00007C, "Member 'UClothPhysicalMeshDataBase_Legacy::MaxBoneWeights' has a wrong offset!");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, SelfCollisionIndices) == 0x000080, "Member 'UClothPhysicalMeshDataBase_Legacy::SelfCollisionIndices' has a wrong offset!");

}
