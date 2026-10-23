#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct NearestNeighborModel_SetNeighborCoeffs final
{
public:
	int32                                         PartId;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 NeighborCoeffs;
};
static_assert(alignof(NearestNeighborModel_SetNeighborCoeffs) == 0x000008, "Wrong alignment on NearestNeighborModel_SetNeighborCoeffs");
static_assert(sizeof(NearestNeighborModel_SetNeighborCoeffs) == 0x000018, "Wrong size on NearestNeighborModel_SetNeighborCoeffs");
static_assert(offsetof(NearestNeighborModel_SetNeighborCoeffs, PartId) == 0x000000, "Member 'NearestNeighborModel_SetNeighborCoeffs::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_SetNeighborCoeffs, NeighborCoeffs) == 0x000008, "Member 'NearestNeighborModel_SetNeighborCoeffs::NeighborCoeffs' has a wrong offset!");

struct NearestNeighborModel_SetNeighborOffsets final
{
public:
	int32                                         PartId;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 NeighborOffsets;
};
static_assert(alignof(NearestNeighborModel_SetNeighborOffsets) == 0x000008, "Wrong alignment on NearestNeighborModel_SetNeighborOffsets");
static_assert(sizeof(NearestNeighborModel_SetNeighborOffsets) == 0x000018, "Wrong size on NearestNeighborModel_SetNeighborOffsets");
static_assert(offsetof(NearestNeighborModel_SetNeighborOffsets, PartId) == 0x000000, "Member 'NearestNeighborModel_SetNeighborOffsets::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_SetNeighborOffsets, NeighborOffsets) == 0x000008, "Member 'NearestNeighborModel_SetNeighborOffsets::NeighborOffsets' has a wrong offset!");

struct NearestNeighborModel_SetNumNeighbors final
{
public:
	int32                                         PartId;
	int32                                         InNumNeighbors;
};
static_assert(alignof(NearestNeighborModel_SetNumNeighbors) == 0x000004, "Wrong alignment on NearestNeighborModel_SetNumNeighbors");
static_assert(sizeof(NearestNeighborModel_SetNumNeighbors) == 0x000008, "Wrong size on NearestNeighborModel_SetNumNeighbors");
static_assert(offsetof(NearestNeighborModel_SetNumNeighbors, PartId) == 0x000000, "Member 'NearestNeighborModel_SetNumNeighbors::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_SetNumNeighbors, InNumNeighbors) == 0x000004, "Member 'NearestNeighborModel_SetNumNeighbors::InNumNeighbors' has a wrong offset!");

struct NearestNeighborModel_SetPCABasis final
{
public:
	int32                                         PartId;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 PCABasis;
};
static_assert(alignof(NearestNeighborModel_SetPCABasis) == 0x000008, "Wrong alignment on NearestNeighborModel_SetPCABasis");
static_assert(sizeof(NearestNeighborModel_SetPCABasis) == 0x000018, "Wrong size on NearestNeighborModel_SetPCABasis");
static_assert(offsetof(NearestNeighborModel_SetPCABasis, PartId) == 0x000000, "Member 'NearestNeighborModel_SetPCABasis::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_SetPCABasis, PCABasis) == 0x000008, "Member 'NearestNeighborModel_SetPCABasis::PCABasis' has a wrong offset!");

struct NearestNeighborModel_SetVertexMean final
{
public:
	int32                                         PartId;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 VertexMean_0;
};
static_assert(alignof(NearestNeighborModel_SetVertexMean) == 0x000008, "Wrong alignment on NearestNeighborModel_SetVertexMean");
static_assert(sizeof(NearestNeighborModel_SetVertexMean) == 0x000018, "Wrong size on NearestNeighborModel_SetVertexMean");
static_assert(offsetof(NearestNeighborModel_SetVertexMean, PartId) == 0x000000, "Member 'NearestNeighborModel_SetVertexMean::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_SetVertexMean, VertexMean_0) == 0x000008, "Member 'NearestNeighborModel_SetVertexMean::VertexMean_0' has a wrong offset!");

struct NearestNeighborModel_ClipInputs final
{
public:
	TArray<float>                                 Input;
	TArray<float>                                 ReturnValue;
};
static_assert(alignof(NearestNeighborModel_ClipInputs) == 0x000008, "Wrong alignment on NearestNeighborModel_ClipInputs");
static_assert(sizeof(NearestNeighborModel_ClipInputs) == 0x000020, "Wrong size on NearestNeighborModel_ClipInputs");
static_assert(offsetof(NearestNeighborModel_ClipInputs, Input) == 0x000000, "Member 'NearestNeighborModel_ClipInputs::Input' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_ClipInputs, ReturnValue) == 0x000010, "Member 'NearestNeighborModel_ClipInputs::ReturnValue' has a wrong offset!");

struct NearestNeighborModel_GetNumNeighbors final
{
public:
	int32                                         PartId;
	int32                                         ReturnValue;
};
static_assert(alignof(NearestNeighborModel_GetNumNeighbors) == 0x000004, "Wrong alignment on NearestNeighborModel_GetNumNeighbors");
static_assert(sizeof(NearestNeighborModel_GetNumNeighbors) == 0x000008, "Wrong size on NearestNeighborModel_GetNumNeighbors");
static_assert(offsetof(NearestNeighborModel_GetNumNeighbors, PartId) == 0x000000, "Member 'NearestNeighborModel_GetNumNeighbors::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_GetNumNeighbors, ReturnValue) == 0x000004, "Member 'NearestNeighborModel_GetNumNeighbors::ReturnValue' has a wrong offset!");

struct NearestNeighborModel_GetNumParts final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(NearestNeighborModel_GetNumParts) == 0x000004, "Wrong alignment on NearestNeighborModel_GetNumParts");
static_assert(sizeof(NearestNeighborModel_GetNumParts) == 0x000004, "Wrong size on NearestNeighborModel_GetNumParts");
static_assert(offsetof(NearestNeighborModel_GetNumParts, ReturnValue) == 0x000000, "Member 'NearestNeighborModel_GetNumParts::ReturnValue' has a wrong offset!");

struct NearestNeighborModel_GetPartNumVerts final
{
public:
	int32                                         PartId;
	int32                                         ReturnValue;
};
static_assert(alignof(NearestNeighborModel_GetPartNumVerts) == 0x000004, "Wrong alignment on NearestNeighborModel_GetPartNumVerts");
static_assert(sizeof(NearestNeighborModel_GetPartNumVerts) == 0x000008, "Wrong size on NearestNeighborModel_GetPartNumVerts");
static_assert(offsetof(NearestNeighborModel_GetPartNumVerts, PartId) == 0x000000, "Member 'NearestNeighborModel_GetPartNumVerts::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_GetPartNumVerts, ReturnValue) == 0x000004, "Member 'NearestNeighborModel_GetPartNumVerts::ReturnValue' has a wrong offset!");

struct NearestNeighborModel_GetPCACoeffNum final
{
public:
	int32                                         PartId;
	int32                                         ReturnValue;
};
static_assert(alignof(NearestNeighborModel_GetPCACoeffNum) == 0x000004, "Wrong alignment on NearestNeighborModel_GetPCACoeffNum");
static_assert(sizeof(NearestNeighborModel_GetPCACoeffNum) == 0x000008, "Wrong size on NearestNeighborModel_GetPCACoeffNum");
static_assert(offsetof(NearestNeighborModel_GetPCACoeffNum, PartId) == 0x000000, "Member 'NearestNeighborModel_GetPCACoeffNum::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_GetPCACoeffNum, ReturnValue) == 0x000004, "Member 'NearestNeighborModel_GetPCACoeffNum::ReturnValue' has a wrong offset!");

struct NearestNeighborModel_GetPCACoeffStart final
{
public:
	int32                                         PartId;
	int32                                         ReturnValue;
};
static_assert(alignof(NearestNeighborModel_GetPCACoeffStart) == 0x000004, "Wrong alignment on NearestNeighborModel_GetPCACoeffStart");
static_assert(sizeof(NearestNeighborModel_GetPCACoeffStart) == 0x000008, "Wrong size on NearestNeighborModel_GetPCACoeffStart");
static_assert(offsetof(NearestNeighborModel_GetPCACoeffStart, PartId) == 0x000000, "Member 'NearestNeighborModel_GetPCACoeffStart::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_GetPCACoeffStart, ReturnValue) == 0x000004, "Member 'NearestNeighborModel_GetPCACoeffStart::ReturnValue' has a wrong offset!");

struct NearestNeighborModel_NeighborCoeffs final
{
public:
	int32                                         PartId;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 ReturnValue;
};
static_assert(alignof(NearestNeighborModel_NeighborCoeffs) == 0x000008, "Wrong alignment on NearestNeighborModel_NeighborCoeffs");
static_assert(sizeof(NearestNeighborModel_NeighborCoeffs) == 0x000018, "Wrong size on NearestNeighborModel_NeighborCoeffs");
static_assert(offsetof(NearestNeighborModel_NeighborCoeffs, PartId) == 0x000000, "Member 'NearestNeighborModel_NeighborCoeffs::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_NeighborCoeffs, ReturnValue) == 0x000008, "Member 'NearestNeighborModel_NeighborCoeffs::ReturnValue' has a wrong offset!");

struct NearestNeighborModel_NeighborOffsets final
{
public:
	int32                                         PartId;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 ReturnValue;
};
static_assert(alignof(NearestNeighborModel_NeighborOffsets) == 0x000008, "Wrong alignment on NearestNeighborModel_NeighborOffsets");
static_assert(sizeof(NearestNeighborModel_NeighborOffsets) == 0x000018, "Wrong size on NearestNeighborModel_NeighborOffsets");
static_assert(offsetof(NearestNeighborModel_NeighborOffsets, PartId) == 0x000000, "Member 'NearestNeighborModel_NeighborOffsets::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_NeighborOffsets, ReturnValue) == 0x000008, "Member 'NearestNeighborModel_NeighborOffsets::ReturnValue' has a wrong offset!");

struct NearestNeighborModel_PCABasis final
{
public:
	int32                                         PartId;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 ReturnValue;
};
static_assert(alignof(NearestNeighborModel_PCABasis) == 0x000008, "Wrong alignment on NearestNeighborModel_PCABasis");
static_assert(sizeof(NearestNeighborModel_PCABasis) == 0x000018, "Wrong size on NearestNeighborModel_PCABasis");
static_assert(offsetof(NearestNeighborModel_PCABasis, PartId) == 0x000000, "Member 'NearestNeighborModel_PCABasis::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_PCABasis, ReturnValue) == 0x000008, "Member 'NearestNeighborModel_PCABasis::ReturnValue' has a wrong offset!");

struct NearestNeighborModel_VertexMean final
{
public:
	int32                                         PartId;
	uint8                                         Pad_4[0x4];
	TArray<float>                                 ReturnValue;
};
static_assert(alignof(NearestNeighborModel_VertexMean) == 0x000008, "Wrong alignment on NearestNeighborModel_VertexMean");
static_assert(sizeof(NearestNeighborModel_VertexMean) == 0x000018, "Wrong size on NearestNeighborModel_VertexMean");
static_assert(offsetof(NearestNeighborModel_VertexMean, PartId) == 0x000000, "Member 'NearestNeighborModel_VertexMean::PartId' has a wrong offset!");
static_assert(offsetof(NearestNeighborModel_VertexMean, ReturnValue) == 0x000008, "Member 'NearestNeighborModel_VertexMean::ReturnValue' has a wrong offset!");

}
