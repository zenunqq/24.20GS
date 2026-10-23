#pragma once

#include "Basic.hpp"

#include "MLDeformerFramework_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "NearestNeighborModel_structs.hpp"

namespace SDK
{

class UNearestNeighborModelVizSettings final : public UMLDeformerMorphModelVizSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NearestNeighborModelVizSettings">();
	}
	static class UNearestNeighborModelVizSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNearestNeighborModelVizSettings>();
	}
};
static_assert(alignof(UNearestNeighborModelVizSettings) == 0x000008, "Wrong alignment on UNearestNeighborModelVizSettings");
static_assert(sizeof(UNearestNeighborModelVizSettings) == 0x000028, "Wrong size on UNearestNeighborModelVizSettings");

class UNearestNeighborModel final : public UMLDeformerMorphModel
{
public:
	bool                                          bUseInputMultipliers;
	uint8                                         Pad_111[0x7];
	TArray<struct FVector3f>                      InputMultipliers;
	TArray<struct FClothPartData>                 ClothPartData;
	TArray<float>                                 InputsMin;
	TArray<float>                                 InputsMax;
	TArray<class UAnimSequence*>                  SourceSkeletons;
	int32                                         NumClusters;
	float                                         DecayFactor;
	float                                         NearestNeighborOffsetWeight;
	uint8                                         Pad_174[0x4];

public:
	void SetNeighborCoeffs(int32 PartId, const TArray<float>& NeighborCoeffs);
	void SetNeighborOffsets(int32 PartId, const TArray<float>& NeighborOffsets);
	void SetNumNeighbors(int32 PartId, int32 InNumNeighbors);
	void SetPCABasis(int32 PartId, const TArray<float>& PCABasis);
	void SetVertexMean(int32 PartId, const TArray<float>& VertexMean_0);

	TArray<float> ClipInputs(const TArray<float>& Input) const;
	int32 GetNumNeighbors(int32 PartId) const;
	int32 GetNumParts() const;
	int32 GetPartNumVerts(int32 PartId) const;
	int32 GetPCACoeffNum(int32 PartId) const;
	int32 GetPCACoeffStart(int32 PartId) const;
	const TArray<float> NeighborCoeffs(int32 PartId) const;
	const TArray<float> NeighborOffsets(int32 PartId) const;
	const TArray<float> PCABasis(int32 PartId) const;
	const TArray<float> VertexMean(int32 PartId) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NearestNeighborModel">();
	}
	static class UNearestNeighborModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNearestNeighborModel>();
	}
};
static_assert(alignof(UNearestNeighborModel) == 0x000008, "Wrong alignment on UNearestNeighborModel");
static_assert(sizeof(UNearestNeighborModel) == 0x000178, "Wrong size on UNearestNeighborModel");
static_assert(offsetof(UNearestNeighborModel, bUseInputMultipliers) == 0x000110, "Member 'UNearestNeighborModel::bUseInputMultipliers' has a wrong offset!");
static_assert(offsetof(UNearestNeighborModel, InputMultipliers) == 0x000118, "Member 'UNearestNeighborModel::InputMultipliers' has a wrong offset!");
static_assert(offsetof(UNearestNeighborModel, ClothPartData) == 0x000128, "Member 'UNearestNeighborModel::ClothPartData' has a wrong offset!");
static_assert(offsetof(UNearestNeighborModel, InputsMin) == 0x000138, "Member 'UNearestNeighborModel::InputsMin' has a wrong offset!");
static_assert(offsetof(UNearestNeighborModel, InputsMax) == 0x000148, "Member 'UNearestNeighborModel::InputsMax' has a wrong offset!");
static_assert(offsetof(UNearestNeighborModel, SourceSkeletons) == 0x000158, "Member 'UNearestNeighborModel::SourceSkeletons' has a wrong offset!");
static_assert(offsetof(UNearestNeighborModel, NumClusters) == 0x000168, "Member 'UNearestNeighborModel::NumClusters' has a wrong offset!");
static_assert(offsetof(UNearestNeighborModel, DecayFactor) == 0x00016C, "Member 'UNearestNeighborModel::DecayFactor' has a wrong offset!");
static_assert(offsetof(UNearestNeighborModel, NearestNeighborOffsetWeight) == 0x000170, "Member 'UNearestNeighborModel::NearestNeighborOffsetWeight' has a wrong offset!");

class UNearestNeighborModelInputInfo final : public UMLDeformerInputInfo
{
public:
	TArray<struct FQuat>                          RefBoneRotations;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NearestNeighborModelInputInfo">();
	}
	static class UNearestNeighborModelInputInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNearestNeighborModelInputInfo>();
	}
};
static_assert(alignof(UNearestNeighborModelInputInfo) == 0x000008, "Wrong alignment on UNearestNeighborModelInputInfo");
static_assert(sizeof(UNearestNeighborModelInputInfo) == 0x000078, "Wrong size on UNearestNeighborModelInputInfo");
static_assert(offsetof(UNearestNeighborModelInputInfo, RefBoneRotations) == 0x000068, "Member 'UNearestNeighborModelInputInfo::RefBoneRotations' has a wrong offset!");

class UNearestNeighborModelInstance final : public UMLDeformerMorphModelInstance
{
public:
	uint8                                         Pad_98[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NearestNeighborModelInstance">();
	}
	static class UNearestNeighborModelInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNearestNeighborModelInstance>();
	}
};
static_assert(alignof(UNearestNeighborModelInstance) == 0x000008, "Wrong alignment on UNearestNeighborModelInstance");
static_assert(sizeof(UNearestNeighborModelInstance) == 0x0000A8, "Wrong size on UNearestNeighborModelInstance");

}
