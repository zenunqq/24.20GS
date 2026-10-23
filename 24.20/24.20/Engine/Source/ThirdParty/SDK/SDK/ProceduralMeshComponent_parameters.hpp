#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ProceduralMeshComponent_structs.hpp"

namespace SDK::Params
{

struct KismetProceduralMeshLibrary_CalculateTangentsForMesh final
{
public:
	TArray<struct FVector>                        Vertices;
	TArray<int32>                                 Triangles;
	TArray<struct FVector2D>                      UVs;
	TArray<struct FVector>                        Normals;
	TArray<struct FProcMeshTangent>               Tangents;
};
static_assert(alignof(KismetProceduralMeshLibrary_CalculateTangentsForMesh) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_CalculateTangentsForMesh");
static_assert(sizeof(KismetProceduralMeshLibrary_CalculateTangentsForMesh) == 0x000050, "Wrong size on KismetProceduralMeshLibrary_CalculateTangentsForMesh");
static_assert(offsetof(KismetProceduralMeshLibrary_CalculateTangentsForMesh, Vertices) == 0x000000, "Member 'KismetProceduralMeshLibrary_CalculateTangentsForMesh::Vertices' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CalculateTangentsForMesh, Triangles) == 0x000010, "Member 'KismetProceduralMeshLibrary_CalculateTangentsForMesh::Triangles' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CalculateTangentsForMesh, UVs) == 0x000020, "Member 'KismetProceduralMeshLibrary_CalculateTangentsForMesh::UVs' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CalculateTangentsForMesh, Normals) == 0x000030, "Member 'KismetProceduralMeshLibrary_CalculateTangentsForMesh::Normals' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CalculateTangentsForMesh, Tangents) == 0x000040, "Member 'KismetProceduralMeshLibrary_CalculateTangentsForMesh::Tangents' has a wrong offset!");

struct KismetProceduralMeshLibrary_ConvertQuadToTriangles final
{
public:
	TArray<int32>                                 Triangles;
	int32                                         Vert0;
	int32                                         Vert1;
	int32                                         Vert2;
	int32                                         Vert3;
};
static_assert(alignof(KismetProceduralMeshLibrary_ConvertQuadToTriangles) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_ConvertQuadToTriangles");
static_assert(sizeof(KismetProceduralMeshLibrary_ConvertQuadToTriangles) == 0x000020, "Wrong size on KismetProceduralMeshLibrary_ConvertQuadToTriangles");
static_assert(offsetof(KismetProceduralMeshLibrary_ConvertQuadToTriangles, Triangles) == 0x000000, "Member 'KismetProceduralMeshLibrary_ConvertQuadToTriangles::Triangles' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_ConvertQuadToTriangles, Vert0) == 0x000010, "Member 'KismetProceduralMeshLibrary_ConvertQuadToTriangles::Vert0' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_ConvertQuadToTriangles, Vert1) == 0x000014, "Member 'KismetProceduralMeshLibrary_ConvertQuadToTriangles::Vert1' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_ConvertQuadToTriangles, Vert2) == 0x000018, "Member 'KismetProceduralMeshLibrary_ConvertQuadToTriangles::Vert2' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_ConvertQuadToTriangles, Vert3) == 0x00001C, "Member 'KismetProceduralMeshLibrary_ConvertQuadToTriangles::Vert3' has a wrong offset!");

struct KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent final
{
public:
	class UStaticMeshComponent*                   StaticMeshComponent;
	int32                                         LODIndex;
	uint8                                         Pad_C[0x4];
	class UProceduralMeshComponent*               ProcMeshComponent;
	bool                                          bCreateCollision;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent");
static_assert(sizeof(KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent) == 0x000020, "Wrong size on KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent");
static_assert(offsetof(KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent, StaticMeshComponent) == 0x000000, "Member 'KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent::StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent, LODIndex) == 0x000008, "Member 'KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent::LODIndex' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent, ProcMeshComponent) == 0x000010, "Member 'KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent::ProcMeshComponent' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent, bCreateCollision) == 0x000018, "Member 'KismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent::bCreateCollision' has a wrong offset!");

struct KismetProceduralMeshLibrary_CreateGridMeshSplit final
{
public:
	int32                                         NumX;
	int32                                         NumY;
	TArray<int32>                                 Triangles;
	TArray<struct FVector>                        Vertices;
	TArray<struct FVector2D>                      UVs;
	TArray<struct FVector2D>                      UV1s;
	float                                         GridSpacing;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(KismetProceduralMeshLibrary_CreateGridMeshSplit) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_CreateGridMeshSplit");
static_assert(sizeof(KismetProceduralMeshLibrary_CreateGridMeshSplit) == 0x000050, "Wrong size on KismetProceduralMeshLibrary_CreateGridMeshSplit");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshSplit, NumX) == 0x000000, "Member 'KismetProceduralMeshLibrary_CreateGridMeshSplit::NumX' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshSplit, NumY) == 0x000004, "Member 'KismetProceduralMeshLibrary_CreateGridMeshSplit::NumY' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshSplit, Triangles) == 0x000008, "Member 'KismetProceduralMeshLibrary_CreateGridMeshSplit::Triangles' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshSplit, Vertices) == 0x000018, "Member 'KismetProceduralMeshLibrary_CreateGridMeshSplit::Vertices' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshSplit, UVs) == 0x000028, "Member 'KismetProceduralMeshLibrary_CreateGridMeshSplit::UVs' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshSplit, UV1s) == 0x000038, "Member 'KismetProceduralMeshLibrary_CreateGridMeshSplit::UV1s' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshSplit, GridSpacing) == 0x000048, "Member 'KismetProceduralMeshLibrary_CreateGridMeshSplit::GridSpacing' has a wrong offset!");

struct KismetProceduralMeshLibrary_CreateGridMeshTriangles final
{
public:
	int32                                         NumX;
	int32                                         NumY;
	bool                                          bWinding;
	uint8                                         Pad_9[0x7];
	TArray<int32>                                 Triangles;
};
static_assert(alignof(KismetProceduralMeshLibrary_CreateGridMeshTriangles) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_CreateGridMeshTriangles");
static_assert(sizeof(KismetProceduralMeshLibrary_CreateGridMeshTriangles) == 0x000020, "Wrong size on KismetProceduralMeshLibrary_CreateGridMeshTriangles");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshTriangles, NumX) == 0x000000, "Member 'KismetProceduralMeshLibrary_CreateGridMeshTriangles::NumX' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshTriangles, NumY) == 0x000004, "Member 'KismetProceduralMeshLibrary_CreateGridMeshTriangles::NumY' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshTriangles, bWinding) == 0x000008, "Member 'KismetProceduralMeshLibrary_CreateGridMeshTriangles::bWinding' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshTriangles, Triangles) == 0x000010, "Member 'KismetProceduralMeshLibrary_CreateGridMeshTriangles::Triangles' has a wrong offset!");

struct KismetProceduralMeshLibrary_CreateGridMeshWelded final
{
public:
	int32                                         NumX;
	int32                                         NumY;
	TArray<int32>                                 Triangles;
	TArray<struct FVector>                        Vertices;
	TArray<struct FVector2D>                      UVs;
	float                                         GridSpacing;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(KismetProceduralMeshLibrary_CreateGridMeshWelded) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_CreateGridMeshWelded");
static_assert(sizeof(KismetProceduralMeshLibrary_CreateGridMeshWelded) == 0x000040, "Wrong size on KismetProceduralMeshLibrary_CreateGridMeshWelded");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshWelded, NumX) == 0x000000, "Member 'KismetProceduralMeshLibrary_CreateGridMeshWelded::NumX' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshWelded, NumY) == 0x000004, "Member 'KismetProceduralMeshLibrary_CreateGridMeshWelded::NumY' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshWelded, Triangles) == 0x000008, "Member 'KismetProceduralMeshLibrary_CreateGridMeshWelded::Triangles' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshWelded, Vertices) == 0x000018, "Member 'KismetProceduralMeshLibrary_CreateGridMeshWelded::Vertices' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshWelded, UVs) == 0x000028, "Member 'KismetProceduralMeshLibrary_CreateGridMeshWelded::UVs' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_CreateGridMeshWelded, GridSpacing) == 0x000038, "Member 'KismetProceduralMeshLibrary_CreateGridMeshWelded::GridSpacing' has a wrong offset!");

struct KismetProceduralMeshLibrary_GenerateBoxMesh final
{
public:
	struct FVector                                BoxRadius;
	TArray<struct FVector>                        Vertices;
	TArray<int32>                                 Triangles;
	TArray<struct FVector>                        Normals;
	TArray<struct FVector2D>                      UVs;
	TArray<struct FProcMeshTangent>               Tangents;
};
static_assert(alignof(KismetProceduralMeshLibrary_GenerateBoxMesh) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_GenerateBoxMesh");
static_assert(sizeof(KismetProceduralMeshLibrary_GenerateBoxMesh) == 0x000068, "Wrong size on KismetProceduralMeshLibrary_GenerateBoxMesh");
static_assert(offsetof(KismetProceduralMeshLibrary_GenerateBoxMesh, BoxRadius) == 0x000000, "Member 'KismetProceduralMeshLibrary_GenerateBoxMesh::BoxRadius' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GenerateBoxMesh, Vertices) == 0x000018, "Member 'KismetProceduralMeshLibrary_GenerateBoxMesh::Vertices' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GenerateBoxMesh, Triangles) == 0x000028, "Member 'KismetProceduralMeshLibrary_GenerateBoxMesh::Triangles' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GenerateBoxMesh, Normals) == 0x000038, "Member 'KismetProceduralMeshLibrary_GenerateBoxMesh::Normals' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GenerateBoxMesh, UVs) == 0x000048, "Member 'KismetProceduralMeshLibrary_GenerateBoxMesh::UVs' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GenerateBoxMesh, Tangents) == 0x000058, "Member 'KismetProceduralMeshLibrary_GenerateBoxMesh::Tangents' has a wrong offset!");

struct KismetProceduralMeshLibrary_GetSectionFromProceduralMesh final
{
public:
	class UProceduralMeshComponent*               InProcMesh;
	int32                                         SectionIndex;
	uint8                                         Pad_C[0x4];
	TArray<struct FVector>                        Vertices;
	TArray<int32>                                 Triangles;
	TArray<struct FVector>                        Normals;
	TArray<struct FVector2D>                      UVs;
	TArray<struct FProcMeshTangent>               Tangents;
};
static_assert(alignof(KismetProceduralMeshLibrary_GetSectionFromProceduralMesh) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_GetSectionFromProceduralMesh");
static_assert(sizeof(KismetProceduralMeshLibrary_GetSectionFromProceduralMesh) == 0x000060, "Wrong size on KismetProceduralMeshLibrary_GetSectionFromProceduralMesh");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromProceduralMesh, InProcMesh) == 0x000000, "Member 'KismetProceduralMeshLibrary_GetSectionFromProceduralMesh::InProcMesh' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromProceduralMesh, SectionIndex) == 0x000008, "Member 'KismetProceduralMeshLibrary_GetSectionFromProceduralMesh::SectionIndex' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromProceduralMesh, Vertices) == 0x000010, "Member 'KismetProceduralMeshLibrary_GetSectionFromProceduralMesh::Vertices' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromProceduralMesh, Triangles) == 0x000020, "Member 'KismetProceduralMeshLibrary_GetSectionFromProceduralMesh::Triangles' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromProceduralMesh, Normals) == 0x000030, "Member 'KismetProceduralMeshLibrary_GetSectionFromProceduralMesh::Normals' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromProceduralMesh, UVs) == 0x000040, "Member 'KismetProceduralMeshLibrary_GetSectionFromProceduralMesh::UVs' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromProceduralMesh, Tangents) == 0x000050, "Member 'KismetProceduralMeshLibrary_GetSectionFromProceduralMesh::Tangents' has a wrong offset!");

struct KismetProceduralMeshLibrary_GetSectionFromStaticMesh final
{
public:
	class UStaticMesh*                            InMesh;
	int32                                         LODIndex;
	int32                                         SectionIndex;
	TArray<struct FVector>                        Vertices;
	TArray<int32>                                 Triangles;
	TArray<struct FVector>                        Normals;
	TArray<struct FVector2D>                      UVs;
	TArray<struct FProcMeshTangent>               Tangents;
};
static_assert(alignof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_GetSectionFromStaticMesh");
static_assert(sizeof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh) == 0x000060, "Wrong size on KismetProceduralMeshLibrary_GetSectionFromStaticMesh");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh, InMesh) == 0x000000, "Member 'KismetProceduralMeshLibrary_GetSectionFromStaticMesh::InMesh' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh, LODIndex) == 0x000008, "Member 'KismetProceduralMeshLibrary_GetSectionFromStaticMesh::LODIndex' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh, SectionIndex) == 0x00000C, "Member 'KismetProceduralMeshLibrary_GetSectionFromStaticMesh::SectionIndex' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh, Vertices) == 0x000010, "Member 'KismetProceduralMeshLibrary_GetSectionFromStaticMesh::Vertices' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh, Triangles) == 0x000020, "Member 'KismetProceduralMeshLibrary_GetSectionFromStaticMesh::Triangles' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh, Normals) == 0x000030, "Member 'KismetProceduralMeshLibrary_GetSectionFromStaticMesh::Normals' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh, UVs) == 0x000040, "Member 'KismetProceduralMeshLibrary_GetSectionFromStaticMesh::UVs' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_GetSectionFromStaticMesh, Tangents) == 0x000050, "Member 'KismetProceduralMeshLibrary_GetSectionFromStaticMesh::Tangents' has a wrong offset!");

struct KismetProceduralMeshLibrary_SliceProceduralMesh final
{
public:
	class UProceduralMeshComponent*               InProcMesh;
	struct FVector                                PlanePosition;
	struct FVector                                PlaneNormal;
	bool                                          bCreateOtherHalf;
	uint8                                         Pad_39[0x7];
	class UProceduralMeshComponent*               OutOtherHalfProcMesh;
	EProcMeshSliceCapOption                       CapOption;
	uint8                                         Pad_49[0x7];
	class UMaterialInterface*                     CapMaterial;
};
static_assert(alignof(KismetProceduralMeshLibrary_SliceProceduralMesh) == 0x000008, "Wrong alignment on KismetProceduralMeshLibrary_SliceProceduralMesh");
static_assert(sizeof(KismetProceduralMeshLibrary_SliceProceduralMesh) == 0x000058, "Wrong size on KismetProceduralMeshLibrary_SliceProceduralMesh");
static_assert(offsetof(KismetProceduralMeshLibrary_SliceProceduralMesh, InProcMesh) == 0x000000, "Member 'KismetProceduralMeshLibrary_SliceProceduralMesh::InProcMesh' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_SliceProceduralMesh, PlanePosition) == 0x000008, "Member 'KismetProceduralMeshLibrary_SliceProceduralMesh::PlanePosition' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_SliceProceduralMesh, PlaneNormal) == 0x000020, "Member 'KismetProceduralMeshLibrary_SliceProceduralMesh::PlaneNormal' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_SliceProceduralMesh, bCreateOtherHalf) == 0x000038, "Member 'KismetProceduralMeshLibrary_SliceProceduralMesh::bCreateOtherHalf' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_SliceProceduralMesh, OutOtherHalfProcMesh) == 0x000040, "Member 'KismetProceduralMeshLibrary_SliceProceduralMesh::OutOtherHalfProcMesh' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_SliceProceduralMesh, CapOption) == 0x000048, "Member 'KismetProceduralMeshLibrary_SliceProceduralMesh::CapOption' has a wrong offset!");
static_assert(offsetof(KismetProceduralMeshLibrary_SliceProceduralMesh, CapMaterial) == 0x000050, "Member 'KismetProceduralMeshLibrary_SliceProceduralMesh::CapMaterial' has a wrong offset!");

struct ProceduralMeshComponent_AddCollisionConvexMesh final
{
public:
	TArray<struct FVector>                        ConvexVerts;
};
static_assert(alignof(ProceduralMeshComponent_AddCollisionConvexMesh) == 0x000008, "Wrong alignment on ProceduralMeshComponent_AddCollisionConvexMesh");
static_assert(sizeof(ProceduralMeshComponent_AddCollisionConvexMesh) == 0x000010, "Wrong size on ProceduralMeshComponent_AddCollisionConvexMesh");
static_assert(offsetof(ProceduralMeshComponent_AddCollisionConvexMesh, ConvexVerts) == 0x000000, "Member 'ProceduralMeshComponent_AddCollisionConvexMesh::ConvexVerts' has a wrong offset!");

struct ProceduralMeshComponent_ClearMeshSection final
{
public:
	int32                                         SectionIndex;
};
static_assert(alignof(ProceduralMeshComponent_ClearMeshSection) == 0x000004, "Wrong alignment on ProceduralMeshComponent_ClearMeshSection");
static_assert(sizeof(ProceduralMeshComponent_ClearMeshSection) == 0x000004, "Wrong size on ProceduralMeshComponent_ClearMeshSection");
static_assert(offsetof(ProceduralMeshComponent_ClearMeshSection, SectionIndex) == 0x000000, "Member 'ProceduralMeshComponent_ClearMeshSection::SectionIndex' has a wrong offset!");

struct ProceduralMeshComponent_CreateMeshSection final
{
public:
	int32                                         SectionIndex;
	uint8                                         Pad_4[0x4];
	TArray<struct FVector>                        Vertices;
	TArray<int32>                                 Triangles;
	TArray<struct FVector>                        Normals;
	TArray<struct FVector2D>                      UV0;
	TArray<struct FColor>                         VertexColors;
	TArray<struct FProcMeshTangent>               Tangents;
	bool                                          bCreateCollision;
	uint8                                         Pad_69[0x7];
};
static_assert(alignof(ProceduralMeshComponent_CreateMeshSection) == 0x000008, "Wrong alignment on ProceduralMeshComponent_CreateMeshSection");
static_assert(sizeof(ProceduralMeshComponent_CreateMeshSection) == 0x000070, "Wrong size on ProceduralMeshComponent_CreateMeshSection");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection, SectionIndex) == 0x000000, "Member 'ProceduralMeshComponent_CreateMeshSection::SectionIndex' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection, Vertices) == 0x000008, "Member 'ProceduralMeshComponent_CreateMeshSection::Vertices' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection, Triangles) == 0x000018, "Member 'ProceduralMeshComponent_CreateMeshSection::Triangles' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection, Normals) == 0x000028, "Member 'ProceduralMeshComponent_CreateMeshSection::Normals' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection, UV0) == 0x000038, "Member 'ProceduralMeshComponent_CreateMeshSection::UV0' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection, VertexColors) == 0x000048, "Member 'ProceduralMeshComponent_CreateMeshSection::VertexColors' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection, Tangents) == 0x000058, "Member 'ProceduralMeshComponent_CreateMeshSection::Tangents' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection, bCreateCollision) == 0x000068, "Member 'ProceduralMeshComponent_CreateMeshSection::bCreateCollision' has a wrong offset!");

struct ProceduralMeshComponent_CreateMeshSection_LinearColor final
{
public:
	int32                                         SectionIndex;
	uint8                                         Pad_4[0x4];
	TArray<struct FVector>                        Vertices;
	TArray<int32>                                 Triangles;
	TArray<struct FVector>                        Normals;
	TArray<struct FVector2D>                      UV0;
	TArray<struct FVector2D>                      UV1;
	TArray<struct FVector2D>                      UV2;
	TArray<struct FVector2D>                      UV3;
	TArray<struct FLinearColor>                   VertexColors;
	TArray<struct FProcMeshTangent>               Tangents;
	bool                                          bCreateCollision;
	bool                                          bSRGBConversion;
	uint8                                         Pad_9A[0x6];
};
static_assert(alignof(ProceduralMeshComponent_CreateMeshSection_LinearColor) == 0x000008, "Wrong alignment on ProceduralMeshComponent_CreateMeshSection_LinearColor");
static_assert(sizeof(ProceduralMeshComponent_CreateMeshSection_LinearColor) == 0x0000A0, "Wrong size on ProceduralMeshComponent_CreateMeshSection_LinearColor");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, SectionIndex) == 0x000000, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::SectionIndex' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, Vertices) == 0x000008, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::Vertices' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, Triangles) == 0x000018, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::Triangles' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, Normals) == 0x000028, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::Normals' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, UV0) == 0x000038, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::UV0' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, UV1) == 0x000048, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::UV1' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, UV2) == 0x000058, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::UV2' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, UV3) == 0x000068, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::UV3' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, VertexColors) == 0x000078, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::VertexColors' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, Tangents) == 0x000088, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::Tangents' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, bCreateCollision) == 0x000098, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::bCreateCollision' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_CreateMeshSection_LinearColor, bSRGBConversion) == 0x000099, "Member 'ProceduralMeshComponent_CreateMeshSection_LinearColor::bSRGBConversion' has a wrong offset!");

struct ProceduralMeshComponent_SetMeshSectionVisible final
{
public:
	int32                                         SectionIndex;
	bool                                          bNewVisibility;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(ProceduralMeshComponent_SetMeshSectionVisible) == 0x000004, "Wrong alignment on ProceduralMeshComponent_SetMeshSectionVisible");
static_assert(sizeof(ProceduralMeshComponent_SetMeshSectionVisible) == 0x000008, "Wrong size on ProceduralMeshComponent_SetMeshSectionVisible");
static_assert(offsetof(ProceduralMeshComponent_SetMeshSectionVisible, SectionIndex) == 0x000000, "Member 'ProceduralMeshComponent_SetMeshSectionVisible::SectionIndex' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_SetMeshSectionVisible, bNewVisibility) == 0x000004, "Member 'ProceduralMeshComponent_SetMeshSectionVisible::bNewVisibility' has a wrong offset!");

struct ProceduralMeshComponent_UpdateMeshSection final
{
public:
	int32                                         SectionIndex;
	uint8                                         Pad_4[0x4];
	TArray<struct FVector>                        Vertices;
	TArray<struct FVector>                        Normals;
	TArray<struct FVector2D>                      UV0;
	TArray<struct FColor>                         VertexColors;
	TArray<struct FProcMeshTangent>               Tangents;
};
static_assert(alignof(ProceduralMeshComponent_UpdateMeshSection) == 0x000008, "Wrong alignment on ProceduralMeshComponent_UpdateMeshSection");
static_assert(sizeof(ProceduralMeshComponent_UpdateMeshSection) == 0x000058, "Wrong size on ProceduralMeshComponent_UpdateMeshSection");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection, SectionIndex) == 0x000000, "Member 'ProceduralMeshComponent_UpdateMeshSection::SectionIndex' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection, Vertices) == 0x000008, "Member 'ProceduralMeshComponent_UpdateMeshSection::Vertices' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection, Normals) == 0x000018, "Member 'ProceduralMeshComponent_UpdateMeshSection::Normals' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection, UV0) == 0x000028, "Member 'ProceduralMeshComponent_UpdateMeshSection::UV0' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection, VertexColors) == 0x000038, "Member 'ProceduralMeshComponent_UpdateMeshSection::VertexColors' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection, Tangents) == 0x000048, "Member 'ProceduralMeshComponent_UpdateMeshSection::Tangents' has a wrong offset!");

struct ProceduralMeshComponent_UpdateMeshSection_LinearColor final
{
public:
	int32                                         SectionIndex;
	uint8                                         Pad_4[0x4];
	TArray<struct FVector>                        Vertices;
	TArray<struct FVector>                        Normals;
	TArray<struct FVector2D>                      UV0;
	TArray<struct FVector2D>                      UV1;
	TArray<struct FVector2D>                      UV2;
	TArray<struct FVector2D>                      UV3;
	TArray<struct FLinearColor>                   VertexColors;
	TArray<struct FProcMeshTangent>               Tangents;
	bool                                          bSRGBConversion;
	uint8                                         Pad_89[0x7];
};
static_assert(alignof(ProceduralMeshComponent_UpdateMeshSection_LinearColor) == 0x000008, "Wrong alignment on ProceduralMeshComponent_UpdateMeshSection_LinearColor");
static_assert(sizeof(ProceduralMeshComponent_UpdateMeshSection_LinearColor) == 0x000090, "Wrong size on ProceduralMeshComponent_UpdateMeshSection_LinearColor");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, SectionIndex) == 0x000000, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::SectionIndex' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, Vertices) == 0x000008, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::Vertices' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, Normals) == 0x000018, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::Normals' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, UV0) == 0x000028, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::UV0' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, UV1) == 0x000038, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::UV1' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, UV2) == 0x000048, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::UV2' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, UV3) == 0x000058, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::UV3' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, VertexColors) == 0x000068, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::VertexColors' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, Tangents) == 0x000078, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::Tangents' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_UpdateMeshSection_LinearColor, bSRGBConversion) == 0x000088, "Member 'ProceduralMeshComponent_UpdateMeshSection_LinearColor::bSRGBConversion' has a wrong offset!");

struct ProceduralMeshComponent_GetNumSections final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(ProceduralMeshComponent_GetNumSections) == 0x000004, "Wrong alignment on ProceduralMeshComponent_GetNumSections");
static_assert(sizeof(ProceduralMeshComponent_GetNumSections) == 0x000004, "Wrong size on ProceduralMeshComponent_GetNumSections");
static_assert(offsetof(ProceduralMeshComponent_GetNumSections, ReturnValue) == 0x000000, "Member 'ProceduralMeshComponent_GetNumSections::ReturnValue' has a wrong offset!");

struct ProceduralMeshComponent_IsMeshSectionVisible final
{
public:
	int32                                         SectionIndex;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(ProceduralMeshComponent_IsMeshSectionVisible) == 0x000004, "Wrong alignment on ProceduralMeshComponent_IsMeshSectionVisible");
static_assert(sizeof(ProceduralMeshComponent_IsMeshSectionVisible) == 0x000008, "Wrong size on ProceduralMeshComponent_IsMeshSectionVisible");
static_assert(offsetof(ProceduralMeshComponent_IsMeshSectionVisible, SectionIndex) == 0x000000, "Member 'ProceduralMeshComponent_IsMeshSectionVisible::SectionIndex' has a wrong offset!");
static_assert(offsetof(ProceduralMeshComponent_IsMeshSectionVisible, ReturnValue) == 0x000004, "Member 'ProceduralMeshComponent_IsMeshSectionVisible::ReturnValue' has a wrong offset!");

}
