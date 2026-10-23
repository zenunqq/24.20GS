#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct FoliageStatistics_FoliageOverlappingBoxCount final
{
public:
	class UObject*                                WorldContextObject;
	const class UStaticMesh*                      StaticMesh;
	struct FBox                                   Box;
	int32                                         ReturnValue;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FoliageStatistics_FoliageOverlappingBoxCount) == 0x000008, "Wrong alignment on FoliageStatistics_FoliageOverlappingBoxCount");
static_assert(sizeof(FoliageStatistics_FoliageOverlappingBoxCount) == 0x000050, "Wrong size on FoliageStatistics_FoliageOverlappingBoxCount");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxCount, WorldContextObject) == 0x000000, "Member 'FoliageStatistics_FoliageOverlappingBoxCount::WorldContextObject' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxCount, StaticMesh) == 0x000008, "Member 'FoliageStatistics_FoliageOverlappingBoxCount::StaticMesh' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxCount, Box) == 0x000010, "Member 'FoliageStatistics_FoliageOverlappingBoxCount::Box' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxCount, ReturnValue) == 0x000048, "Member 'FoliageStatistics_FoliageOverlappingBoxCount::ReturnValue' has a wrong offset!");

struct FoliageStatistics_FoliageOverlappingBoxTransforms final
{
public:
	class UObject*                                WorldContextObject;
	const class UStaticMesh*                      StaticMesh;
	struct FBox                                   Box;
	TArray<struct FTransform>                     OutTransforms;
};
static_assert(alignof(FoliageStatistics_FoliageOverlappingBoxTransforms) == 0x000008, "Wrong alignment on FoliageStatistics_FoliageOverlappingBoxTransforms");
static_assert(sizeof(FoliageStatistics_FoliageOverlappingBoxTransforms) == 0x000058, "Wrong size on FoliageStatistics_FoliageOverlappingBoxTransforms");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxTransforms, WorldContextObject) == 0x000000, "Member 'FoliageStatistics_FoliageOverlappingBoxTransforms::WorldContextObject' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxTransforms, StaticMesh) == 0x000008, "Member 'FoliageStatistics_FoliageOverlappingBoxTransforms::StaticMesh' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxTransforms, Box) == 0x000010, "Member 'FoliageStatistics_FoliageOverlappingBoxTransforms::Box' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingBoxTransforms, OutTransforms) == 0x000048, "Member 'FoliageStatistics_FoliageOverlappingBoxTransforms::OutTransforms' has a wrong offset!");

struct FoliageStatistics_FoliageOverlappingSphereCount final
{
public:
	class UObject*                                WorldContextObject;
	const class UStaticMesh*                      StaticMesh;
	struct FVector                                CenterPosition;
	float                                         Radius;
	int32                                         ReturnValue;
};
static_assert(alignof(FoliageStatistics_FoliageOverlappingSphereCount) == 0x000008, "Wrong alignment on FoliageStatistics_FoliageOverlappingSphereCount");
static_assert(sizeof(FoliageStatistics_FoliageOverlappingSphereCount) == 0x000030, "Wrong size on FoliageStatistics_FoliageOverlappingSphereCount");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, WorldContextObject) == 0x000000, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::WorldContextObject' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, StaticMesh) == 0x000008, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::StaticMesh' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, CenterPosition) == 0x000010, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::CenterPosition' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, Radius) == 0x000028, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::Radius' has a wrong offset!");
static_assert(offsetof(FoliageStatistics_FoliageOverlappingSphereCount, ReturnValue) == 0x00002C, "Member 'FoliageStatistics_FoliageOverlappingSphereCount::ReturnValue' has a wrong offset!");

struct InteractiveFoliageActor_CapsuleTouched final
{
public:
	class UPrimitiveComponent*                    OverlappedComp;
	class AActor*                                 Other;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             OverlapInfo;
};
static_assert(alignof(InteractiveFoliageActor_CapsuleTouched) == 0x000008, "Wrong alignment on InteractiveFoliageActor_CapsuleTouched");
static_assert(sizeof(InteractiveFoliageActor_CapsuleTouched) == 0x000100, "Wrong size on InteractiveFoliageActor_CapsuleTouched");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, OverlappedComp) == 0x000000, "Member 'InteractiveFoliageActor_CapsuleTouched::OverlappedComp' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, Other) == 0x000008, "Member 'InteractiveFoliageActor_CapsuleTouched::Other' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, OtherComp) == 0x000010, "Member 'InteractiveFoliageActor_CapsuleTouched::OtherComp' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, OtherBodyIndex) == 0x000018, "Member 'InteractiveFoliageActor_CapsuleTouched::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, bFromSweep) == 0x00001C, "Member 'InteractiveFoliageActor_CapsuleTouched::bFromSweep' has a wrong offset!");
static_assert(offsetof(InteractiveFoliageActor_CapsuleTouched, OverlapInfo) == 0x000020, "Member 'InteractiveFoliageActor_CapsuleTouched::OverlapInfo' has a wrong offset!");

struct ProceduralFoliageSpawner_Simulate final
{
public:
	int32                                         numSteps;
};
static_assert(alignof(ProceduralFoliageSpawner_Simulate) == 0x000004, "Wrong alignment on ProceduralFoliageSpawner_Simulate");
static_assert(sizeof(ProceduralFoliageSpawner_Simulate) == 0x000004, "Wrong size on ProceduralFoliageSpawner_Simulate");
static_assert(offsetof(ProceduralFoliageSpawner_Simulate, numSteps) == 0x000000, "Member 'ProceduralFoliageSpawner_Simulate::numSteps' has a wrong offset!");

}
