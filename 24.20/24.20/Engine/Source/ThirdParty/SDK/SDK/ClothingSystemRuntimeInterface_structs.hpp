#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FClothCollisionPrim_Sphere final
{
public:
	int32                                         BoneIndex;
	float                                         Radius;
	struct FVector                                LocalPosition;
};
static_assert(alignof(FClothCollisionPrim_Sphere) == 0x000008, "Wrong alignment on FClothCollisionPrim_Sphere");
static_assert(sizeof(FClothCollisionPrim_Sphere) == 0x000020, "Wrong size on FClothCollisionPrim_Sphere");
static_assert(offsetof(FClothCollisionPrim_Sphere, BoneIndex) == 0x000000, "Member 'FClothCollisionPrim_Sphere::BoneIndex' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Sphere, Radius) == 0x000004, "Member 'FClothCollisionPrim_Sphere::Radius' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Sphere, LocalPosition) == 0x000008, "Member 'FClothCollisionPrim_Sphere::LocalPosition' has a wrong offset!");

struct FClothCollisionPrim_SphereConnection final
{
public:
	int32                                         SphereIndices[0x2];
};
static_assert(alignof(FClothCollisionPrim_SphereConnection) == 0x000004, "Wrong alignment on FClothCollisionPrim_SphereConnection");
static_assert(sizeof(FClothCollisionPrim_SphereConnection) == 0x000008, "Wrong size on FClothCollisionPrim_SphereConnection");
static_assert(offsetof(FClothCollisionPrim_SphereConnection, SphereIndices) == 0x000000, "Member 'FClothCollisionPrim_SphereConnection::SphereIndices' has a wrong offset!");

struct FClothCollisionPrim_ConvexFace final
{
public:
	struct FPlane                                 Plane;
	TArray<int32>                                 Indices;
};
static_assert(alignof(FClothCollisionPrim_ConvexFace) == 0x000010, "Wrong alignment on FClothCollisionPrim_ConvexFace");
static_assert(sizeof(FClothCollisionPrim_ConvexFace) == 0x000030, "Wrong size on FClothCollisionPrim_ConvexFace");
static_assert(offsetof(FClothCollisionPrim_ConvexFace, Plane) == 0x000000, "Member 'FClothCollisionPrim_ConvexFace::Plane' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_ConvexFace, Indices) == 0x000020, "Member 'FClothCollisionPrim_ConvexFace::Indices' has a wrong offset!");

struct FClothCollisionPrim_Convex final
{
public:
	TArray<struct FClothCollisionPrim_ConvexFace> Faces;
	TArray<struct FVector>                        SurfacePoints;
	int32                                         BoneIndex;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FClothCollisionPrim_Convex) == 0x000008, "Wrong alignment on FClothCollisionPrim_Convex");
static_assert(sizeof(FClothCollisionPrim_Convex) == 0x000028, "Wrong size on FClothCollisionPrim_Convex");
static_assert(offsetof(FClothCollisionPrim_Convex, Faces) == 0x000000, "Member 'FClothCollisionPrim_Convex::Faces' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Convex, SurfacePoints) == 0x000010, "Member 'FClothCollisionPrim_Convex::SurfacePoints' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Convex, BoneIndex) == 0x000020, "Member 'FClothCollisionPrim_Convex::BoneIndex' has a wrong offset!");

struct FClothCollisionPrim_Box final
{
public:
	struct FVector                                LocalPosition;
	uint8                                         Pad_18[0x8];
	struct FQuat                                  LocalRotation;
	struct FVector                                HalfExtents;
	int32                                         BoneIndex;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(FClothCollisionPrim_Box) == 0x000010, "Wrong alignment on FClothCollisionPrim_Box");
static_assert(sizeof(FClothCollisionPrim_Box) == 0x000060, "Wrong size on FClothCollisionPrim_Box");
static_assert(offsetof(FClothCollisionPrim_Box, LocalPosition) == 0x000000, "Member 'FClothCollisionPrim_Box::LocalPosition' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Box, LocalRotation) == 0x000020, "Member 'FClothCollisionPrim_Box::LocalRotation' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Box, HalfExtents) == 0x000040, "Member 'FClothCollisionPrim_Box::HalfExtents' has a wrong offset!");
static_assert(offsetof(FClothCollisionPrim_Box, BoneIndex) == 0x000058, "Member 'FClothCollisionPrim_Box::BoneIndex' has a wrong offset!");

struct FClothVertBoneData final
{
public:
	int32                                         NumInfluences;
	uint16                                        BoneIndices[0xC];
	float                                         BoneWeights[0xC];
};
static_assert(alignof(FClothVertBoneData) == 0x000004, "Wrong alignment on FClothVertBoneData");
static_assert(sizeof(FClothVertBoneData) == 0x00004C, "Wrong size on FClothVertBoneData");
static_assert(offsetof(FClothVertBoneData, NumInfluences) == 0x000000, "Member 'FClothVertBoneData::NumInfluences' has a wrong offset!");
static_assert(offsetof(FClothVertBoneData, BoneIndices) == 0x000004, "Member 'FClothVertBoneData::BoneIndices' has a wrong offset!");
static_assert(offsetof(FClothVertBoneData, BoneWeights) == 0x00001C, "Member 'FClothVertBoneData::BoneWeights' has a wrong offset!");

struct FClothCollisionData final
{
public:
	TArray<struct FClothCollisionPrim_Sphere>     Spheres;
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;
	TArray<struct FClothCollisionPrim_Convex>     Convexes;
	TArray<struct FClothCollisionPrim_Box>        Boxes;
};
static_assert(alignof(FClothCollisionData) == 0x000008, "Wrong alignment on FClothCollisionData");
static_assert(sizeof(FClothCollisionData) == 0x000040, "Wrong size on FClothCollisionData");
static_assert(offsetof(FClothCollisionData, Spheres) == 0x000000, "Member 'FClothCollisionData::Spheres' has a wrong offset!");
static_assert(offsetof(FClothCollisionData, SphereConnections) == 0x000010, "Member 'FClothCollisionData::SphereConnections' has a wrong offset!");
static_assert(offsetof(FClothCollisionData, Convexes) == 0x000020, "Member 'FClothCollisionData::Convexes' has a wrong offset!");
static_assert(offsetof(FClothCollisionData, Boxes) == 0x000030, "Member 'FClothCollisionData::Boxes' has a wrong offset!");

}
