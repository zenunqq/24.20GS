#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ControlRig_structs.hpp"

namespace SDK
{

enum class EArchetype : uint8
{
	Asian                                    = 0,
	Black                                    = 1,
	Caucasian                                = 2,
	Hispanic                                 = 3,
	Alien                                    = 4,
	Other                                    = 5,
	EArchetype_MAX                           = 6,
};

enum class EGender : uint8
{
	Male                                     = 0,
	Female                                   = 1,
	Other                                    = 2,
	EGender_MAX                              = 3,
};

enum class ETranslationUnit : uint8
{
	CM                                       = 0,
	M                                        = 1,
	ETranslationUnit_MAX                     = 2,
};

enum class ERotationUnit : uint8
{
	Degrees                                  = 0,
	Radians                                  = 1,
	ERotationUnit_MAX                        = 2,
};

enum class EDirection : uint8
{
	Left                                     = 0,
	Right                                    = 1,
	Up                                       = 2,
	Down                                     = 3,
	Front                                    = 4,
	Back                                     = 5,
	EDirection_MAX                           = 6,
};

enum class EDNADataLayer : uint8
{
	Descriptor                               = 0,
	Definition                               = 1,
	Behavior                                 = 2,
	Geometry                                 = 3,
	GeometryWithoutBlendShapes               = 4,
	AllWithoutBlendShapes                    = 5,
	All                                      = 6,
	EDNADataLayer_MAX                        = 7,
};

enum class ERigLogicCalculationType : uint8
{
	Scalar                                   = 0,
	SSE                                      = 1,
	AVX                                      = 2,
	ERigLogicCalculationType_MAX             = 3,
};

enum class ELodUpdateOption : uint8
{
	LOD0Only                                 = 0,
	LOD1AndHigher                            = 1,
	All                                      = 2,
	ELodUpdateOption_MAX                     = 3,
};

struct FCoordinateSystem final
{
public:
	EDirection                                    XAxis;
	EDirection                                    YAxis;
	EDirection                                    ZAxis;
};
static_assert(alignof(FCoordinateSystem) == 0x000001, "Wrong alignment on FCoordinateSystem");
static_assert(sizeof(FCoordinateSystem) == 0x000003, "Wrong size on FCoordinateSystem");
static_assert(offsetof(FCoordinateSystem, XAxis) == 0x000000, "Member 'FCoordinateSystem::XAxis' has a wrong offset!");
static_assert(offsetof(FCoordinateSystem, YAxis) == 0x000001, "Member 'FCoordinateSystem::YAxis' has a wrong offset!");
static_assert(offsetof(FCoordinateSystem, ZAxis) == 0x000002, "Member 'FCoordinateSystem::ZAxis' has a wrong offset!");

struct FMeshBlendShapeChannelMapping final
{
public:
	int32                                         MeshIndex;
	int32                                         BlendShapeChannelIndex;
};
static_assert(alignof(FMeshBlendShapeChannelMapping) == 0x000004, "Wrong alignment on FMeshBlendShapeChannelMapping");
static_assert(sizeof(FMeshBlendShapeChannelMapping) == 0x000008, "Wrong size on FMeshBlendShapeChannelMapping");
static_assert(offsetof(FMeshBlendShapeChannelMapping, MeshIndex) == 0x000000, "Member 'FMeshBlendShapeChannelMapping::MeshIndex' has a wrong offset!");
static_assert(offsetof(FMeshBlendShapeChannelMapping, BlendShapeChannelIndex) == 0x000004, "Member 'FMeshBlendShapeChannelMapping::BlendShapeChannelIndex' has a wrong offset!");

struct FTextureCoordinate final
{
public:
	float                                         U;
	float                                         V;
};
static_assert(alignof(FTextureCoordinate) == 0x000004, "Wrong alignment on FTextureCoordinate");
static_assert(sizeof(FTextureCoordinate) == 0x000008, "Wrong size on FTextureCoordinate");
static_assert(offsetof(FTextureCoordinate, U) == 0x000000, "Member 'FTextureCoordinate::U' has a wrong offset!");
static_assert(offsetof(FTextureCoordinate, V) == 0x000004, "Member 'FTextureCoordinate::V' has a wrong offset!");

struct FVertexLayout final
{
public:
	int32                                         Position;
	int32                                         TextureCoordinate;
	int32                                         Normal;
};
static_assert(alignof(FVertexLayout) == 0x000004, "Wrong alignment on FVertexLayout");
static_assert(sizeof(FVertexLayout) == 0x00000C, "Wrong size on FVertexLayout");
static_assert(offsetof(FVertexLayout, Position) == 0x000000, "Member 'FVertexLayout::Position' has a wrong offset!");
static_assert(offsetof(FVertexLayout, TextureCoordinate) == 0x000004, "Member 'FVertexLayout::TextureCoordinate' has a wrong offset!");
static_assert(offsetof(FVertexLayout, Normal) == 0x000008, "Member 'FVertexLayout::Normal' has a wrong offset!");

struct FAnimNode_RigLogic final : public FAnimNode_Base
{
public:
	struct FPoseLink                              AnimSequence;
	uint8                                         Pad_20[0x38];
};
static_assert(alignof(FAnimNode_RigLogic) == 0x000008, "Wrong alignment on FAnimNode_RigLogic");
static_assert(sizeof(FAnimNode_RigLogic) == 0x000058, "Wrong size on FAnimNode_RigLogic");
static_assert(offsetof(FAnimNode_RigLogic, AnimSequence) == 0x000010, "Member 'FAnimNode_RigLogic::AnimSequence' has a wrong offset!");

struct FRigUnit_RigLogic_IntArray final
{
public:
	TArray<int32>                                 Values;
};
static_assert(alignof(FRigUnit_RigLogic_IntArray) == 0x000008, "Wrong alignment on FRigUnit_RigLogic_IntArray");
static_assert(sizeof(FRigUnit_RigLogic_IntArray) == 0x000010, "Wrong size on FRigUnit_RigLogic_IntArray");
static_assert(offsetof(FRigUnit_RigLogic_IntArray, Values) == 0x000000, "Member 'FRigUnit_RigLogic_IntArray::Values' has a wrong offset!");

struct FRigUnit_RigLogic_Data final
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  SkelMeshComponent;
	uint8                                         Pad_8[0x18];
	TArray<int32>                                 InputCurveIndices;
	TArray<int32>                                 HierarchyBoneIndices;
	TArray<struct FRigUnit_RigLogic_IntArray>     MorphTargetCurveIndices;
	TArray<struct FRigUnit_RigLogic_IntArray>     BlendShapeIndices;
	TArray<struct FRigUnit_RigLogic_IntArray>     CurveElementIndicesForAnimMaps;
	TArray<struct FRigUnit_RigLogic_IntArray>     RigLogicIndicesForAnimMaps;
	uint32                                        CurrentLOD;
	uint8                                         Pad_84[0x4];
};
static_assert(alignof(FRigUnit_RigLogic_Data) == 0x000008, "Wrong alignment on FRigUnit_RigLogic_Data");
static_assert(sizeof(FRigUnit_RigLogic_Data) == 0x000088, "Wrong size on FRigUnit_RigLogic_Data");
static_assert(offsetof(FRigUnit_RigLogic_Data, SkelMeshComponent) == 0x000000, "Member 'FRigUnit_RigLogic_Data::SkelMeshComponent' has a wrong offset!");
static_assert(offsetof(FRigUnit_RigLogic_Data, InputCurveIndices) == 0x000020, "Member 'FRigUnit_RigLogic_Data::InputCurveIndices' has a wrong offset!");
static_assert(offsetof(FRigUnit_RigLogic_Data, HierarchyBoneIndices) == 0x000030, "Member 'FRigUnit_RigLogic_Data::HierarchyBoneIndices' has a wrong offset!");
static_assert(offsetof(FRigUnit_RigLogic_Data, MorphTargetCurveIndices) == 0x000040, "Member 'FRigUnit_RigLogic_Data::MorphTargetCurveIndices' has a wrong offset!");
static_assert(offsetof(FRigUnit_RigLogic_Data, BlendShapeIndices) == 0x000050, "Member 'FRigUnit_RigLogic_Data::BlendShapeIndices' has a wrong offset!");
static_assert(offsetof(FRigUnit_RigLogic_Data, CurveElementIndicesForAnimMaps) == 0x000060, "Member 'FRigUnit_RigLogic_Data::CurveElementIndicesForAnimMaps' has a wrong offset!");
static_assert(offsetof(FRigUnit_RigLogic_Data, RigLogicIndicesForAnimMaps) == 0x000070, "Member 'FRigUnit_RigLogic_Data::RigLogicIndicesForAnimMaps' has a wrong offset!");
static_assert(offsetof(FRigUnit_RigLogic_Data, CurrentLOD) == 0x000080, "Member 'FRigUnit_RigLogic_Data::CurrentLOD' has a wrong offset!");

struct FRigUnit_RigLogic final : public FRigUnitMutable
{
public:
	struct FRigUnit_RigLogic_Data                 Data;
};
static_assert(alignof(FRigUnit_RigLogic) == 0x000008, "Wrong alignment on FRigUnit_RigLogic");
static_assert(sizeof(FRigUnit_RigLogic) == 0x0000C0, "Wrong size on FRigUnit_RigLogic");
static_assert(offsetof(FRigUnit_RigLogic, Data) == 0x000038, "Member 'FRigUnit_RigLogic::Data' has a wrong offset!");

}
