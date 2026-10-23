#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MRMesh_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UMockDataMeshTrackerComponent final : public USceneComponent
{
public:
	TMulticastInlineDelegate<void(int32 Index, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<float>& Confidence)> OnMeshTrackerUpdated;
	bool                                          ScanWorld;
	bool                                          RequestNormals;
	bool                                          RequestVertexConfidence;
	EMeshTrackerVertexColorMode                   VertexColorMode;
	uint8                                         Pad_2B4[0x4];
	TArray<struct FColor>                         BlockVertexColors;
	struct FLinearColor                           VertexColorFromConfidenceZero;
	struct FLinearColor                           VertexColorFromConfidenceOne;
	float                                         UpdateInterval;
	uint8                                         Pad_2EC[0x4];
	class UMRMeshComponent*                       MRMesh;
	uint8                                         Pad_2F8[0x18];

public:
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MockDataMeshTrackerComponent">();
	}
	static class UMockDataMeshTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMockDataMeshTrackerComponent>();
	}
};
static_assert(alignof(UMockDataMeshTrackerComponent) == 0x000010, "Wrong alignment on UMockDataMeshTrackerComponent");
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x000310, "Wrong size on UMockDataMeshTrackerComponent");
static_assert(offsetof(UMockDataMeshTrackerComponent, OnMeshTrackerUpdated) == 0x0002A0, "Member 'UMockDataMeshTrackerComponent::OnMeshTrackerUpdated' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, ScanWorld) == 0x0002B0, "Member 'UMockDataMeshTrackerComponent::ScanWorld' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, RequestNormals) == 0x0002B1, "Member 'UMockDataMeshTrackerComponent::RequestNormals' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, RequestVertexConfidence) == 0x0002B2, "Member 'UMockDataMeshTrackerComponent::RequestVertexConfidence' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x0002B3, "Member 'UMockDataMeshTrackerComponent::VertexColorMode' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0002B8, "Member 'UMockDataMeshTrackerComponent::BlockVertexColors' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0002C8, "Member 'UMockDataMeshTrackerComponent::VertexColorFromConfidenceZero' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x0002D8, "Member 'UMockDataMeshTrackerComponent::VertexColorFromConfidenceOne' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, UpdateInterval) == 0x0002E8, "Member 'UMockDataMeshTrackerComponent::UpdateInterval' has a wrong offset!");
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x0002F0, "Member 'UMockDataMeshTrackerComponent::MRMesh' has a wrong offset!");

class UMRMeshBodyHolder final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UBodySetup*                             BodySetup;
	struct FBodyInstance                          BodyInstance;
	uint8                                         Pad_1C0[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MRMeshBodyHolder">();
	}
	static class UMRMeshBodyHolder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMRMeshBodyHolder>();
	}
};
static_assert(alignof(UMRMeshBodyHolder) == 0x000008, "Wrong alignment on UMRMeshBodyHolder");
static_assert(sizeof(UMRMeshBodyHolder) == 0x000228, "Wrong size on UMRMeshBodyHolder");
static_assert(offsetof(UMRMeshBodyHolder, BodySetup) == 0x000030, "Member 'UMRMeshBodyHolder::BodySetup' has a wrong offset!");
static_assert(offsetof(UMRMeshBodyHolder, BodyInstance) == 0x000038, "Member 'UMRMeshBodyHolder::BodyInstance' has a wrong offset!");

class UMRMeshComponent final : public UPrimitiveComponent
{
public:
	uint8                                         Pad_568[0x8];
	class UMaterialInterface*                     Material;
	class UMaterialInterface*                     WireframeMaterial;
	bool                                          bCreateMeshProxySections;
	bool                                          bUpdateNavMeshOnMeshUpdate;
	uint8                                         Pad_582[0x1];
	bool                                          bNeverCreateCollisionMesh;
	uint8                                         Pad_584[0x44];
	TArray<class UMRMeshBodyHolder*>              BodyHolders;
	uint8                                         Pad_5D8[0x18];

public:
	void Clear();
	void ForceNavMeshUpdate();
	void RequestNavMeshUpdate();
	void SetEnableMeshOcclusion(bool bEnable);
	void SetUseWireframe(bool bUseWireframe);
	void SetWireframeColor(const struct FLinearColor& InColor);
	void SetWireframeMaterial(class UMaterialInterface* InMaterial);

	bool GetEnableMeshOcclusion() const;
	bool GetUseWireframe() const;
	const struct FLinearColor GetWireframeColor() const;
	bool IsConnected() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MRMeshComponent">();
	}
	static class UMRMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMRMeshComponent>();
	}
};
static_assert(alignof(UMRMeshComponent) == 0x000010, "Wrong alignment on UMRMeshComponent");
static_assert(sizeof(UMRMeshComponent) == 0x0005F0, "Wrong size on UMRMeshComponent");
static_assert(offsetof(UMRMeshComponent, Material) == 0x000570, "Member 'UMRMeshComponent::Material' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x000578, "Member 'UMRMeshComponent::WireframeMaterial' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, bCreateMeshProxySections) == 0x000580, "Member 'UMRMeshComponent::bCreateMeshProxySections' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, bUpdateNavMeshOnMeshUpdate) == 0x000581, "Member 'UMRMeshComponent::bUpdateNavMeshOnMeshUpdate' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, bNeverCreateCollisionMesh) == 0x000583, "Member 'UMRMeshComponent::bNeverCreateCollisionMesh' has a wrong offset!");
static_assert(offsetof(UMRMeshComponent, BodyHolders) == 0x0005C8, "Member 'UMRMeshComponent::BodyHolders' has a wrong offset!");

class UMeshReconstructorBase final : public UObject
{
public:
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
	void DisconnectMRMesh();
	void PauseReconstruction();
	void StartReconstruction();
	void StopReconstruction();

	bool IsReconstructionPaused() const;
	bool IsReconstructionStarted() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshReconstructorBase">();
	}
	static class UMeshReconstructorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshReconstructorBase>();
	}
};
static_assert(alignof(UMeshReconstructorBase) == 0x000008, "Wrong alignment on UMeshReconstructorBase");
static_assert(sizeof(UMeshReconstructorBase) == 0x000028, "Wrong size on UMeshReconstructorBase");

}
