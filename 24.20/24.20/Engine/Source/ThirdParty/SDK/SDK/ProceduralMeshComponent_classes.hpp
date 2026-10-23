#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ProceduralMeshComponent_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UKismetProceduralMeshLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void CalculateTangentsForMesh(const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector2D>& UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);
	static void ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	static void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	static void CreateGridMeshSplit(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing);
	static void CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>* Triangles);
	static void CreateGridMeshWelded(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing);
	static void GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KismetProceduralMeshLibrary">();
	}
	static class UKismetProceduralMeshLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetProceduralMeshLibrary>();
	}
};
static_assert(alignof(UKismetProceduralMeshLibrary) == 0x000008, "Wrong alignment on UKismetProceduralMeshLibrary");
static_assert(sizeof(UKismetProceduralMeshLibrary) == 0x000028, "Wrong size on UKismetProceduralMeshLibrary");

class UProceduralMeshComponent final : public UMeshComponent
{
public:
	uint8                                         Pad_5A0[0x8];
	bool                                          bUseComplexAsSimpleCollision;
	bool                                          bUseAsyncCooking;
	uint8                                         Pad_5AA[0x6];
	class UBodySetup*                             ProcMeshBodySetup;
	TArray<struct FProcMeshSection>               ProcMeshSections;
	TArray<struct FKConvexElem>                   CollisionConvexElems;
	struct FBoxSphereBounds                       LocalBounds;
	TArray<class UBodySetup*>                     AsyncBodySetupQueue;

public:
	void AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts);
	void ClearAllMeshSections();
	void ClearCollisionConvexMeshes();
	void ClearMeshSection(int32 SectionIndex);
	void CreateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);
	void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion);
	void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
	void UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents);
	void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bSRGBConversion);

	int32 GetNumSections() const;
	bool IsMeshSectionVisible(int32 SectionIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralMeshComponent">();
	}
	static class UProceduralMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralMeshComponent>();
	}
};
static_assert(alignof(UProceduralMeshComponent) == 0x000010, "Wrong alignment on UProceduralMeshComponent");
static_assert(sizeof(UProceduralMeshComponent) == 0x000620, "Wrong size on UProceduralMeshComponent");
static_assert(offsetof(UProceduralMeshComponent, bUseComplexAsSimpleCollision) == 0x0005A8, "Member 'UProceduralMeshComponent::bUseComplexAsSimpleCollision' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, bUseAsyncCooking) == 0x0005A9, "Member 'UProceduralMeshComponent::bUseAsyncCooking' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, ProcMeshBodySetup) == 0x0005B0, "Member 'UProceduralMeshComponent::ProcMeshBodySetup' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, ProcMeshSections) == 0x0005B8, "Member 'UProceduralMeshComponent::ProcMeshSections' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, CollisionConvexElems) == 0x0005C8, "Member 'UProceduralMeshComponent::CollisionConvexElems' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, LocalBounds) == 0x0005D8, "Member 'UProceduralMeshComponent::LocalBounds' has a wrong offset!");
static_assert(offsetof(UProceduralMeshComponent, AsyncBodySetupQueue) == 0x000610, "Member 'UProceduralMeshComponent::AsyncBodySetupQueue' has a wrong offset!");

}
