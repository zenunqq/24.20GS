#pragma once

#include "Basic.hpp"

#include "Niagara_structs.hpp"

namespace SDK
{

struct alignas(0x10) FTrackRenderData final
{
public:
	uint8                                         Pad_0[0xC0];
};
static_assert(alignof(FTrackRenderData) == 0x000010, "Wrong alignment on FTrackRenderData");
static_assert(sizeof(FTrackRenderData) == 0x0000C0, "Wrong size on FTrackRenderData");

struct alignas(0x04) FGeometryCacheMeshBatchInfo final
{
public:
	uint8                                         Pad_0[0xC];
};
static_assert(alignof(FGeometryCacheMeshBatchInfo) == 0x000004, "Wrong alignment on FGeometryCacheMeshBatchInfo");
static_assert(sizeof(FGeometryCacheMeshBatchInfo) == 0x00000C, "Wrong size on FGeometryCacheMeshBatchInfo");

struct FGeometryCacheVertexInfo final
{
public:
	uint8                                         Pad_0[0x9];
};
static_assert(alignof(FGeometryCacheVertexInfo) == 0x000001, "Wrong alignment on FGeometryCacheVertexInfo");
static_assert(sizeof(FGeometryCacheVertexInfo) == 0x000009, "Wrong size on FGeometryCacheVertexInfo");

struct alignas(0x08) FGeometryCacheMeshData final
{
public:
	uint8                                         Pad_0[0xC8];
};
static_assert(alignof(FGeometryCacheMeshData) == 0x000008, "Wrong alignment on FGeometryCacheMeshData");
static_assert(sizeof(FGeometryCacheMeshData) == 0x0000C8, "Wrong size on FGeometryCacheMeshData");

struct FNiagaraGeometryCacheReference final
{
public:
	class UGeometryCache*                         GeometryCache;
	struct FNiagaraUserParameterBinding           GeometryCacheUserParamBinding;
	TArray<class UMaterialInterface*>             OverrideMaterials;
};
static_assert(alignof(FNiagaraGeometryCacheReference) == 0x000008, "Wrong alignment on FNiagaraGeometryCacheReference");
static_assert(sizeof(FNiagaraGeometryCacheReference) == 0x000030, "Wrong size on FNiagaraGeometryCacheReference");
static_assert(offsetof(FNiagaraGeometryCacheReference, GeometryCache) == 0x000000, "Member 'FNiagaraGeometryCacheReference::GeometryCache' has a wrong offset!");
static_assert(offsetof(FNiagaraGeometryCacheReference, GeometryCacheUserParamBinding) == 0x000008, "Member 'FNiagaraGeometryCacheReference::GeometryCacheUserParamBinding' has a wrong offset!");
static_assert(offsetof(FNiagaraGeometryCacheReference, OverrideMaterials) == 0x000020, "Member 'FNiagaraGeometryCacheReference::OverrideMaterials' has a wrong offset!");

}
