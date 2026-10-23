#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "OptimusCore_classes.hpp"
#include "ComputeFramework_classes.hpp"
#include "MLDeformerFramework_structs.hpp"

namespace SDK
{

class UMLDeformerAsset final : public UObject
{
public:
	class UMLDeformerModel*                       Model;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerAsset">();
	}
	static class UMLDeformerAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerAsset>();
	}
};
static_assert(alignof(UMLDeformerAsset) == 0x000008, "Wrong alignment on UMLDeformerAsset");
static_assert(sizeof(UMLDeformerAsset) == 0x000030, "Wrong size on UMLDeformerAsset");
static_assert(offsetof(UMLDeformerAsset, Model) == 0x000028, "Member 'UMLDeformerAsset::Model' has a wrong offset!");

class UMLDeformerVizSettings : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerVizSettings">();
	}
	static class UMLDeformerVizSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerVizSettings>();
	}
};
static_assert(alignof(UMLDeformerVizSettings) == 0x000008, "Wrong alignment on UMLDeformerVizSettings");
static_assert(sizeof(UMLDeformerVizSettings) == 0x000028, "Wrong size on UMLDeformerVizSettings");

class UMLDeformerGeomCacheVizSettings : public UMLDeformerVizSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerGeomCacheVizSettings">();
	}
	static class UMLDeformerGeomCacheVizSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerGeomCacheVizSettings>();
	}
};
static_assert(alignof(UMLDeformerGeomCacheVizSettings) == 0x000008, "Wrong alignment on UMLDeformerGeomCacheVizSettings");
static_assert(sizeof(UMLDeformerGeomCacheVizSettings) == 0x000028, "Wrong size on UMLDeformerGeomCacheVizSettings");

class UMLDeformerMorphModelVizSettings : public UMLDeformerGeomCacheVizSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerMorphModelVizSettings">();
	}
	static class UMLDeformerMorphModelVizSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerMorphModelVizSettings>();
	}
};
static_assert(alignof(UMLDeformerMorphModelVizSettings) == 0x000008, "Wrong alignment on UMLDeformerMorphModelVizSettings");
static_assert(sizeof(UMLDeformerMorphModelVizSettings) == 0x000028, "Wrong size on UMLDeformerMorphModelVizSettings");

class UMLDeformerComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x28];
	class UMLDeformerAsset*                       DeformerAsset;
	float                                         Weight;
	uint8                                         Pad_D4[0x4];
	class UMLDeformerModelInstance*               ModelInstance;

public:
	void SetDeformerAsset(class UMLDeformerAsset* InDeformerAsset);
	void SetWeight(float NormalizedWeightValue);
	void UpdateSkeletalMeshComponent();

	class USkeletalMeshComponent* FindSkeletalMeshComponent(const class UMLDeformerAsset* Asset) const;
	class UMLDeformerAsset* GetDeformerAsset() const;
	class USkeletalMeshComponent* GetSkeletalMeshComponent() const;
	float GetWeight() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerComponent">();
	}
	static class UMLDeformerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerComponent>();
	}
};
static_assert(alignof(UMLDeformerComponent) == 0x000008, "Wrong alignment on UMLDeformerComponent");
static_assert(sizeof(UMLDeformerComponent) == 0x0000E0, "Wrong size on UMLDeformerComponent");
static_assert(offsetof(UMLDeformerComponent, DeformerAsset) == 0x0000C8, "Member 'UMLDeformerComponent::DeformerAsset' has a wrong offset!");
static_assert(offsetof(UMLDeformerComponent, Weight) == 0x0000D0, "Member 'UMLDeformerComponent::Weight' has a wrong offset!");
static_assert(offsetof(UMLDeformerComponent, ModelInstance) == 0x0000D8, "Member 'UMLDeformerComponent::ModelInstance' has a wrong offset!");

class UMLDeformerComponentSource final : public UOptimusComponentSource
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerComponentSource">();
	}
	static class UMLDeformerComponentSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerComponentSource>();
	}
};
static_assert(alignof(UMLDeformerComponentSource) == 0x000008, "Wrong alignment on UMLDeformerComponentSource");
static_assert(sizeof(UMLDeformerComponentSource) == 0x000028, "Wrong size on UMLDeformerComponentSource");

class UMLDeformerModel : public UObject
{
public:
	uint8                                         Pad_28[0x88];
	int32                                         NumBaseMeshVerts;
	int32                                         NumTargetMeshVerts;
	class UMLDeformerInputInfo*                   InputInfo;
	TArray<int32>                                 VertexMap;
	class UNeuralNetwork*                         NeuralNetwork;
	class USkeletalMesh*                          SkeletalMesh;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerModel">();
	}
	static class UMLDeformerModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerModel>();
	}
};
static_assert(alignof(UMLDeformerModel) == 0x000008, "Wrong alignment on UMLDeformerModel");
static_assert(sizeof(UMLDeformerModel) == 0x0000E0, "Wrong size on UMLDeformerModel");
static_assert(offsetof(UMLDeformerModel, NumBaseMeshVerts) == 0x0000B0, "Member 'UMLDeformerModel::NumBaseMeshVerts' has a wrong offset!");
static_assert(offsetof(UMLDeformerModel, NumTargetMeshVerts) == 0x0000B4, "Member 'UMLDeformerModel::NumTargetMeshVerts' has a wrong offset!");
static_assert(offsetof(UMLDeformerModel, InputInfo) == 0x0000B8, "Member 'UMLDeformerModel::InputInfo' has a wrong offset!");
static_assert(offsetof(UMLDeformerModel, VertexMap) == 0x0000C0, "Member 'UMLDeformerModel::VertexMap' has a wrong offset!");
static_assert(offsetof(UMLDeformerModel, NeuralNetwork) == 0x0000D0, "Member 'UMLDeformerModel::NeuralNetwork' has a wrong offset!");
static_assert(offsetof(UMLDeformerModel, SkeletalMesh) == 0x0000D8, "Member 'UMLDeformerModel::SkeletalMesh' has a wrong offset!");

class UMLDeformerGeomCacheModel : public UMLDeformerModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerGeomCacheModel">();
	}
	static class UMLDeformerGeomCacheModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerGeomCacheModel>();
	}
};
static_assert(alignof(UMLDeformerGeomCacheModel) == 0x000008, "Wrong alignment on UMLDeformerGeomCacheModel");
static_assert(sizeof(UMLDeformerGeomCacheModel) == 0x0000E0, "Wrong size on UMLDeformerGeomCacheModel");

class UMLDeformerGraphDataInterface final : public UOptimusComputeDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerGraphDataInterface">();
	}
	static class UMLDeformerGraphDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerGraphDataInterface>();
	}
};
static_assert(alignof(UMLDeformerGraphDataInterface) == 0x000008, "Wrong alignment on UMLDeformerGraphDataInterface");
static_assert(sizeof(UMLDeformerGraphDataInterface) == 0x000028, "Wrong size on UMLDeformerGraphDataInterface");

class UMLDeformerGraphDataProvider final : public UComputeDataProvider
{
public:
	class UMLDeformerComponent*                   DeformerComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerGraphDataProvider">();
	}
	static class UMLDeformerGraphDataProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerGraphDataProvider>();
	}
};
static_assert(alignof(UMLDeformerGraphDataProvider) == 0x000008, "Wrong alignment on UMLDeformerGraphDataProvider");
static_assert(sizeof(UMLDeformerGraphDataProvider) == 0x000030, "Wrong size on UMLDeformerGraphDataProvider");
static_assert(offsetof(UMLDeformerGraphDataProvider, DeformerComponent) == 0x000028, "Member 'UMLDeformerGraphDataProvider::DeformerComponent' has a wrong offset!");

class UMLDeformerGraphDebugDataInterface final : public UOptimusComputeDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerGraphDebugDataInterface">();
	}
	static class UMLDeformerGraphDebugDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerGraphDebugDataInterface>();
	}
};
static_assert(alignof(UMLDeformerGraphDebugDataInterface) == 0x000008, "Wrong alignment on UMLDeformerGraphDebugDataInterface");
static_assert(sizeof(UMLDeformerGraphDebugDataInterface) == 0x000028, "Wrong size on UMLDeformerGraphDebugDataInterface");

class UMLDeformerGraphDebugDataProvider final : public UComputeDataProvider
{
public:
	class UMLDeformerComponent*                   DeformerComponent;
	class UMLDeformerAsset*                       DeformerAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerGraphDebugDataProvider">();
	}
	static class UMLDeformerGraphDebugDataProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerGraphDebugDataProvider>();
	}
};
static_assert(alignof(UMLDeformerGraphDebugDataProvider) == 0x000008, "Wrong alignment on UMLDeformerGraphDebugDataProvider");
static_assert(sizeof(UMLDeformerGraphDebugDataProvider) == 0x000038, "Wrong size on UMLDeformerGraphDebugDataProvider");
static_assert(offsetof(UMLDeformerGraphDebugDataProvider, DeformerComponent) == 0x000028, "Member 'UMLDeformerGraphDebugDataProvider::DeformerComponent' has a wrong offset!");
static_assert(offsetof(UMLDeformerGraphDebugDataProvider, DeformerAsset) == 0x000030, "Member 'UMLDeformerGraphDebugDataProvider::DeformerAsset' has a wrong offset!");

class UMLDeformerInputInfo : public UObject
{
public:
	struct FSoftObjectPath                        SkeletalMesh;
	TArray<class FName>                           BoneNames;
	TArray<class FName>                           CurveNames;
	int32                                         NumBaseMeshVertices;
	int32                                         NumTargetMeshVertices;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerInputInfo">();
	}
	static class UMLDeformerInputInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerInputInfo>();
	}
};
static_assert(alignof(UMLDeformerInputInfo) == 0x000008, "Wrong alignment on UMLDeformerInputInfo");
static_assert(sizeof(UMLDeformerInputInfo) == 0x000068, "Wrong size on UMLDeformerInputInfo");
static_assert(offsetof(UMLDeformerInputInfo, SkeletalMesh) == 0x000028, "Member 'UMLDeformerInputInfo::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(UMLDeformerInputInfo, BoneNames) == 0x000040, "Member 'UMLDeformerInputInfo::BoneNames' has a wrong offset!");
static_assert(offsetof(UMLDeformerInputInfo, CurveNames) == 0x000050, "Member 'UMLDeformerInputInfo::CurveNames' has a wrong offset!");
static_assert(offsetof(UMLDeformerInputInfo, NumBaseMeshVertices) == 0x000060, "Member 'UMLDeformerInputInfo::NumBaseMeshVertices' has a wrong offset!");
static_assert(offsetof(UMLDeformerInputInfo, NumTargetMeshVertices) == 0x000064, "Member 'UMLDeformerInputInfo::NumTargetMeshVertices' has a wrong offset!");

class UMLDeformerModelInstance : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class UMLDeformerModel*                       Model;
	uint8                                         Pad_40[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerModelInstance">();
	}
	static class UMLDeformerModelInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerModelInstance>();
	}
};
static_assert(alignof(UMLDeformerModelInstance) == 0x000008, "Wrong alignment on UMLDeformerModelInstance");
static_assert(sizeof(UMLDeformerModelInstance) == 0x000090, "Wrong size on UMLDeformerModelInstance");
static_assert(offsetof(UMLDeformerModelInstance, Model) == 0x000038, "Member 'UMLDeformerModelInstance::Model' has a wrong offset!");

class UMLDeformerMorphModel : public UMLDeformerGeomCacheModel
{
public:
	uint8                                         Pad_E0[0x20];
	bool                                          bIncludeNormals;
	uint8                                         Pad_101[0x3];
	float                                         MorphTargetDeltaThreshold;
	float                                         MorphTargetErrorTolerance;
	EMLDeformerMaskChannel                        MaskChannel;
	bool                                          bInvertMaskChannel;
	uint8                                         Pad_10E[0x2];

public:
	void SetMorphTargetDeltaFloats(const TArray<float>& Deltas);
	void SetMorphTargetDeltas(const TArray<struct FVector3f>& Deltas);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerMorphModel">();
	}
	static class UMLDeformerMorphModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerMorphModel>();
	}
};
static_assert(alignof(UMLDeformerMorphModel) == 0x000008, "Wrong alignment on UMLDeformerMorphModel");
static_assert(sizeof(UMLDeformerMorphModel) == 0x000110, "Wrong size on UMLDeformerMorphModel");
static_assert(offsetof(UMLDeformerMorphModel, bIncludeNormals) == 0x000100, "Member 'UMLDeformerMorphModel::bIncludeNormals' has a wrong offset!");
static_assert(offsetof(UMLDeformerMorphModel, MorphTargetDeltaThreshold) == 0x000104, "Member 'UMLDeformerMorphModel::MorphTargetDeltaThreshold' has a wrong offset!");
static_assert(offsetof(UMLDeformerMorphModel, MorphTargetErrorTolerance) == 0x000108, "Member 'UMLDeformerMorphModel::MorphTargetErrorTolerance' has a wrong offset!");
static_assert(offsetof(UMLDeformerMorphModel, MaskChannel) == 0x00010C, "Member 'UMLDeformerMorphModel::MaskChannel' has a wrong offset!");
static_assert(offsetof(UMLDeformerMorphModel, bInvertMaskChannel) == 0x00010D, "Member 'UMLDeformerMorphModel::bInvertMaskChannel' has a wrong offset!");

class UMLDeformerMorphModelInstance : public UMLDeformerModelInstance
{
public:
	uint8                                         Pad_90[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerMorphModelInstance">();
	}
	static class UMLDeformerMorphModelInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerMorphModelInstance>();
	}
};
static_assert(alignof(UMLDeformerMorphModelInstance) == 0x000008, "Wrong alignment on UMLDeformerMorphModelInstance");
static_assert(sizeof(UMLDeformerMorphModelInstance) == 0x000098, "Wrong size on UMLDeformerMorphModelInstance");

class UMLDeformerTestModel final : public UMLDeformerModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MLDeformerTestModel">();
	}
	static class UMLDeformerTestModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMLDeformerTestModel>();
	}
};
static_assert(alignof(UMLDeformerTestModel) == 0x000008, "Wrong alignment on UMLDeformerTestModel");
static_assert(sizeof(UMLDeformerTestModel) == 0x0000E0, "Wrong size on UMLDeformerTestModel");

class UTestModelInstance final : public UMLDeformerModelInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestModelInstance">();
	}
	static class UTestModelInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestModelInstance>();
	}
};
static_assert(alignof(UTestModelInstance) == 0x000008, "Wrong alignment on UTestModelInstance");
static_assert(sizeof(UTestModelInstance) == 0x000090, "Wrong size on UTestModelInstance");

}
