#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct MLDeformerComponent_SetDeformerAsset final
{
public:
	class UMLDeformerAsset*                       InDeformerAsset;
};
static_assert(alignof(MLDeformerComponent_SetDeformerAsset) == 0x000008, "Wrong alignment on MLDeformerComponent_SetDeformerAsset");
static_assert(sizeof(MLDeformerComponent_SetDeformerAsset) == 0x000008, "Wrong size on MLDeformerComponent_SetDeformerAsset");
static_assert(offsetof(MLDeformerComponent_SetDeformerAsset, InDeformerAsset) == 0x000000, "Member 'MLDeformerComponent_SetDeformerAsset::InDeformerAsset' has a wrong offset!");

struct MLDeformerComponent_SetWeight final
{
public:
	float                                         NormalizedWeightValue;
};
static_assert(alignof(MLDeformerComponent_SetWeight) == 0x000004, "Wrong alignment on MLDeformerComponent_SetWeight");
static_assert(sizeof(MLDeformerComponent_SetWeight) == 0x000004, "Wrong size on MLDeformerComponent_SetWeight");
static_assert(offsetof(MLDeformerComponent_SetWeight, NormalizedWeightValue) == 0x000000, "Member 'MLDeformerComponent_SetWeight::NormalizedWeightValue' has a wrong offset!");

struct MLDeformerComponent_FindSkeletalMeshComponent final
{
public:
	const class UMLDeformerAsset*                 Asset;
	class USkeletalMeshComponent*                 ReturnValue;
};
static_assert(alignof(MLDeformerComponent_FindSkeletalMeshComponent) == 0x000008, "Wrong alignment on MLDeformerComponent_FindSkeletalMeshComponent");
static_assert(sizeof(MLDeformerComponent_FindSkeletalMeshComponent) == 0x000010, "Wrong size on MLDeformerComponent_FindSkeletalMeshComponent");
static_assert(offsetof(MLDeformerComponent_FindSkeletalMeshComponent, Asset) == 0x000000, "Member 'MLDeformerComponent_FindSkeletalMeshComponent::Asset' has a wrong offset!");
static_assert(offsetof(MLDeformerComponent_FindSkeletalMeshComponent, ReturnValue) == 0x000008, "Member 'MLDeformerComponent_FindSkeletalMeshComponent::ReturnValue' has a wrong offset!");

struct MLDeformerComponent_GetDeformerAsset final
{
public:
	class UMLDeformerAsset*                       ReturnValue;
};
static_assert(alignof(MLDeformerComponent_GetDeformerAsset) == 0x000008, "Wrong alignment on MLDeformerComponent_GetDeformerAsset");
static_assert(sizeof(MLDeformerComponent_GetDeformerAsset) == 0x000008, "Wrong size on MLDeformerComponent_GetDeformerAsset");
static_assert(offsetof(MLDeformerComponent_GetDeformerAsset, ReturnValue) == 0x000000, "Member 'MLDeformerComponent_GetDeformerAsset::ReturnValue' has a wrong offset!");

struct MLDeformerComponent_GetSkeletalMeshComponent final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;
};
static_assert(alignof(MLDeformerComponent_GetSkeletalMeshComponent) == 0x000008, "Wrong alignment on MLDeformerComponent_GetSkeletalMeshComponent");
static_assert(sizeof(MLDeformerComponent_GetSkeletalMeshComponent) == 0x000008, "Wrong size on MLDeformerComponent_GetSkeletalMeshComponent");
static_assert(offsetof(MLDeformerComponent_GetSkeletalMeshComponent, ReturnValue) == 0x000000, "Member 'MLDeformerComponent_GetSkeletalMeshComponent::ReturnValue' has a wrong offset!");

struct MLDeformerComponent_GetWeight final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(MLDeformerComponent_GetWeight) == 0x000004, "Wrong alignment on MLDeformerComponent_GetWeight");
static_assert(sizeof(MLDeformerComponent_GetWeight) == 0x000004, "Wrong size on MLDeformerComponent_GetWeight");
static_assert(offsetof(MLDeformerComponent_GetWeight, ReturnValue) == 0x000000, "Member 'MLDeformerComponent_GetWeight::ReturnValue' has a wrong offset!");

struct MLDeformerMorphModel_SetMorphTargetDeltaFloats final
{
public:
	TArray<float>                                 Deltas;
};
static_assert(alignof(MLDeformerMorphModel_SetMorphTargetDeltaFloats) == 0x000008, "Wrong alignment on MLDeformerMorphModel_SetMorphTargetDeltaFloats");
static_assert(sizeof(MLDeformerMorphModel_SetMorphTargetDeltaFloats) == 0x000010, "Wrong size on MLDeformerMorphModel_SetMorphTargetDeltaFloats");
static_assert(offsetof(MLDeformerMorphModel_SetMorphTargetDeltaFloats, Deltas) == 0x000000, "Member 'MLDeformerMorphModel_SetMorphTargetDeltaFloats::Deltas' has a wrong offset!");

struct MLDeformerMorphModel_SetMorphTargetDeltas final
{
public:
	TArray<struct FVector3f>                      Deltas;
};
static_assert(alignof(MLDeformerMorphModel_SetMorphTargetDeltas) == 0x000008, "Wrong alignment on MLDeformerMorphModel_SetMorphTargetDeltas");
static_assert(sizeof(MLDeformerMorphModel_SetMorphTargetDeltas) == 0x000010, "Wrong size on MLDeformerMorphModel_SetMorphTargetDeltas");
static_assert(offsetof(MLDeformerMorphModel_SetMorphTargetDeltas, Deltas) == 0x000000, "Member 'MLDeformerMorphModel_SetMorphTargetDeltas::Deltas' has a wrong offset!");

}
