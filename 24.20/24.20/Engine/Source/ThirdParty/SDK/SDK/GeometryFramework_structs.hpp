#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EDynamicMeshComponentTangentsMode : uint8
{
	NoTangents                               = 0,
	AutoCalculated                           = 1,
	ExternallyProvided                       = 2,
	EDynamicMeshComponentTangentsMode_MAX    = 3,
};

enum class EDynamicMeshComponentColorOverrideMode : uint8
{
	None                                     = 0,
	VertexColors                             = 1,
	Polygroups                               = 2,
	Constant                                 = 3,
	EDynamicMeshComponentColorOverrideMode_MAX = 4,
};

enum class EDynamicMeshComponentRenderUpdateMode : uint8
{
	NoUpdate                                 = 0,
	FullUpdate                               = 1,
	FastUpdate                               = 2,
	EDynamicMeshComponentRenderUpdateMode_MAX = 3,
};

enum class EDynamicMeshChangeType : uint8
{
	GeneralEdit                              = 0,
	MeshChange                               = 1,
	MeshReplacementChange                    = 2,
	MeshVertexChange                         = 3,
	DeformationEdit                          = 4,
	AttributeEdit                            = 5,
	EDynamicMeshChangeType_MAX               = 6,
};

enum class EDynamicMeshAttributeChangeFlags : uint8
{
	Unknown                                  = 0,
	MeshTopology                             = 1,
	VertexPositions                          = 2,
	NormalsTangents                          = 4,
	VertexColors                             = 8,
	UVs                                      = 16,
	TriangleGroups                           = 32,
	EDynamicMeshAttributeChangeFlags_MAX     = 33,
};

struct alignas(0x08) FDynamicMeshChangeInfo final
{
public:
	EDynamicMeshChangeType                        Type;
	EDynamicMeshAttributeChangeFlags              Flags;
	bool                                          bIsRevertChange;
	uint8                                         Pad_3[0x1D];
};
static_assert(alignof(FDynamicMeshChangeInfo) == 0x000008, "Wrong alignment on FDynamicMeshChangeInfo");
static_assert(sizeof(FDynamicMeshChangeInfo) == 0x000020, "Wrong size on FDynamicMeshChangeInfo");
static_assert(offsetof(FDynamicMeshChangeInfo, Type) == 0x000000, "Member 'FDynamicMeshChangeInfo::Type' has a wrong offset!");
static_assert(offsetof(FDynamicMeshChangeInfo, Flags) == 0x000001, "Member 'FDynamicMeshChangeInfo::Flags' has a wrong offset!");
static_assert(offsetof(FDynamicMeshChangeInfo, bIsRevertChange) == 0x000002, "Member 'FDynamicMeshChangeInfo::bIsRevertChange' has a wrong offset!");

}
