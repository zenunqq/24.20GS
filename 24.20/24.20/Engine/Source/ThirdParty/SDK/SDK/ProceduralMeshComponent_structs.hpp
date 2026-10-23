#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EProcMeshSliceCapOption : uint8
{
	NoCap                                    = 0,
	CreateNewSectionForCap                   = 1,
	UseLastSectionForCap                     = 2,
	EProcMeshSliceCapOption_MAX              = 3,
};

struct FProcMeshTangent final
{
public:
	struct FVector                                TangentX;
	bool                                          bFlipTangentY;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FProcMeshTangent) == 0x000008, "Wrong alignment on FProcMeshTangent");
static_assert(sizeof(FProcMeshTangent) == 0x000020, "Wrong size on FProcMeshTangent");
static_assert(offsetof(FProcMeshTangent, TangentX) == 0x000000, "Member 'FProcMeshTangent::TangentX' has a wrong offset!");
static_assert(offsetof(FProcMeshTangent, bFlipTangentY) == 0x000018, "Member 'FProcMeshTangent::bFlipTangentY' has a wrong offset!");

struct FProcMeshVertex final
{
public:
	struct FVector                                Position;
	struct FVector                                Normal;
	struct FProcMeshTangent                       Tangent;
	struct FColor                                 Color;
	uint8                                         Pad_54[0x4];
	struct FVector2D                              UV0;
	struct FVector2D                              UV1;
	struct FVector2D                              UV2;
	struct FVector2D                              UV3;
};
static_assert(alignof(FProcMeshVertex) == 0x000008, "Wrong alignment on FProcMeshVertex");
static_assert(sizeof(FProcMeshVertex) == 0x000098, "Wrong size on FProcMeshVertex");
static_assert(offsetof(FProcMeshVertex, Position) == 0x000000, "Member 'FProcMeshVertex::Position' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, Normal) == 0x000018, "Member 'FProcMeshVertex::Normal' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, Tangent) == 0x000030, "Member 'FProcMeshVertex::Tangent' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, Color) == 0x000050, "Member 'FProcMeshVertex::Color' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, UV0) == 0x000058, "Member 'FProcMeshVertex::UV0' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, UV1) == 0x000068, "Member 'FProcMeshVertex::UV1' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, UV2) == 0x000078, "Member 'FProcMeshVertex::UV2' has a wrong offset!");
static_assert(offsetof(FProcMeshVertex, UV3) == 0x000088, "Member 'FProcMeshVertex::UV3' has a wrong offset!");

struct FProcMeshSection final
{
public:
	TArray<struct FProcMeshVertex>                ProcVertexBuffer;
	TArray<uint32>                                ProcIndexBuffer;
	struct FBox                                   SectionLocalBox;
	bool                                          bEnableCollision;
	bool                                          bSectionVisible;
	uint8                                         Pad_5A[0x6];
};
static_assert(alignof(FProcMeshSection) == 0x000008, "Wrong alignment on FProcMeshSection");
static_assert(sizeof(FProcMeshSection) == 0x000060, "Wrong size on FProcMeshSection");
static_assert(offsetof(FProcMeshSection, ProcVertexBuffer) == 0x000000, "Member 'FProcMeshSection::ProcVertexBuffer' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, ProcIndexBuffer) == 0x000010, "Member 'FProcMeshSection::ProcIndexBuffer' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, SectionLocalBox) == 0x000020, "Member 'FProcMeshSection::SectionLocalBox' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, bEnableCollision) == 0x000058, "Member 'FProcMeshSection::bEnableCollision' has a wrong offset!");
static_assert(offsetof(FProcMeshSection, bSectionVisible) == 0x000059, "Member 'FProcMeshSection::bSectionVisible' has a wrong offset!");

}
