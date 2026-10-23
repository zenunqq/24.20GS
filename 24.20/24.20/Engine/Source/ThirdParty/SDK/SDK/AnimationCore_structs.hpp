#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EConstraintType : uint8
{
	Transform                                = 0,
	Aim                                      = 1,
	MAX                                      = 2,
};

enum class ETransformConstraintType : uint8
{
	Translation                              = 0,
	Rotation                                 = 1,
	Scale                                    = 2,
	Parent                                   = 3,
	LookAt                                   = 4,
	ETransformConstraintType_MAX             = 5,
};

enum class EEulerRotationOrder : uint8
{
	XYZ                                      = 0,
	XZY                                      = 1,
	YXZ                                      = 2,
	YZX                                      = 3,
	ZXY                                      = 4,
	ZYX                                      = 5,
	EEulerRotationOrder_MAX                  = 6,
};

struct FAxis final
{
public:
	struct FVector                                Axis;
	bool                                          bInLocalSpace;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FAxis) == 0x000008, "Wrong alignment on FAxis");
static_assert(sizeof(FAxis) == 0x000020, "Wrong size on FAxis");
static_assert(offsetof(FAxis, Axis) == 0x000000, "Member 'FAxis::Axis' has a wrong offset!");
static_assert(offsetof(FAxis, bInLocalSpace) == 0x000018, "Member 'FAxis::bInLocalSpace' has a wrong offset!");

struct FNodeChain final
{
public:
	TArray<class FName>                           Nodes;
};
static_assert(alignof(FNodeChain) == 0x000008, "Wrong alignment on FNodeChain");
static_assert(sizeof(FNodeChain) == 0x000010, "Wrong size on FNodeChain");
static_assert(offsetof(FNodeChain, Nodes) == 0x000000, "Member 'FNodeChain::Nodes' has a wrong offset!");

struct FNodeObject final
{
public:
	class FName                                   Name;
	class FName                                   ParentName;
};
static_assert(alignof(FNodeObject) == 0x000004, "Wrong alignment on FNodeObject");
static_assert(sizeof(FNodeObject) == 0x000008, "Wrong size on FNodeObject");
static_assert(offsetof(FNodeObject, Name) == 0x000000, "Member 'FNodeObject::Name' has a wrong offset!");
static_assert(offsetof(FNodeObject, ParentName) == 0x000004, "Member 'FNodeObject::ParentName' has a wrong offset!");

struct FNodeHierarchyData final
{
public:
	TArray<struct FNodeObject>                    Nodes;
	TArray<struct FTransform>                     Transforms;
	TMap<class FName, int32>                      NodeNameToIndexMapping;
};
static_assert(alignof(FNodeHierarchyData) == 0x000008, "Wrong alignment on FNodeHierarchyData");
static_assert(sizeof(FNodeHierarchyData) == 0x000070, "Wrong size on FNodeHierarchyData");
static_assert(offsetof(FNodeHierarchyData, Nodes) == 0x000000, "Member 'FNodeHierarchyData::Nodes' has a wrong offset!");
static_assert(offsetof(FNodeHierarchyData, Transforms) == 0x000010, "Member 'FNodeHierarchyData::Transforms' has a wrong offset!");
static_assert(offsetof(FNodeHierarchyData, NodeNameToIndexMapping) == 0x000020, "Member 'FNodeHierarchyData::NodeNameToIndexMapping' has a wrong offset!");

struct FNodeHierarchyWithUserData
{
public:
	uint8                                         Pad_0[0x8];
	struct FNodeHierarchyData                     Hierarchy;
};
static_assert(alignof(FNodeHierarchyWithUserData) == 0x000008, "Wrong alignment on FNodeHierarchyWithUserData");
static_assert(sizeof(FNodeHierarchyWithUserData) == 0x000078, "Wrong size on FNodeHierarchyWithUserData");
static_assert(offsetof(FNodeHierarchyWithUserData, Hierarchy) == 0x000008, "Member 'FNodeHierarchyWithUserData::Hierarchy' has a wrong offset!");

struct alignas(0x10) FCCDIKChainLink final
{
public:
	uint8                                         Pad_0[0xE0];
};
static_assert(alignof(FCCDIKChainLink) == 0x000010, "Wrong alignment on FCCDIKChainLink");
static_assert(sizeof(FCCDIKChainLink) == 0x0000E0, "Wrong size on FCCDIKChainLink");

struct FFilterOptionPerAxis final
{
public:
	bool                                          bX;
	bool                                          bY;
	bool                                          bZ;
};
static_assert(alignof(FFilterOptionPerAxis) == 0x000001, "Wrong alignment on FFilterOptionPerAxis");
static_assert(sizeof(FFilterOptionPerAxis) == 0x000003, "Wrong size on FFilterOptionPerAxis");
static_assert(offsetof(FFilterOptionPerAxis, bX) == 0x000000, "Member 'FFilterOptionPerAxis::bX' has a wrong offset!");
static_assert(offsetof(FFilterOptionPerAxis, bY) == 0x000001, "Member 'FFilterOptionPerAxis::bY' has a wrong offset!");
static_assert(offsetof(FFilterOptionPerAxis, bZ) == 0x000002, "Member 'FFilterOptionPerAxis::bZ' has a wrong offset!");

struct FTransformFilter final
{
public:
	struct FFilterOptionPerAxis                   TranslationFilter;
	struct FFilterOptionPerAxis                   RotationFilter;
	struct FFilterOptionPerAxis                   ScaleFilter;
};
static_assert(alignof(FTransformFilter) == 0x000001, "Wrong alignment on FTransformFilter");
static_assert(sizeof(FTransformFilter) == 0x000009, "Wrong size on FTransformFilter");
static_assert(offsetof(FTransformFilter, TranslationFilter) == 0x000000, "Member 'FTransformFilter::TranslationFilter' has a wrong offset!");
static_assert(offsetof(FTransformFilter, RotationFilter) == 0x000003, "Member 'FTransformFilter::RotationFilter' has a wrong offset!");
static_assert(offsetof(FTransformFilter, ScaleFilter) == 0x000006, "Member 'FTransformFilter::ScaleFilter' has a wrong offset!");

struct FConstraintDescription final
{
public:
	bool                                          bTranslation;
	bool                                          bRotation;
	bool                                          bScale;
	bool                                          bParent;
	struct FFilterOptionPerAxis                   TranslationAxes;
	struct FFilterOptionPerAxis                   RotationAxes;
	struct FFilterOptionPerAxis                   ScaleAxes;
};
static_assert(alignof(FConstraintDescription) == 0x000001, "Wrong alignment on FConstraintDescription");
static_assert(sizeof(FConstraintDescription) == 0x00000D, "Wrong size on FConstraintDescription");
static_assert(offsetof(FConstraintDescription, bTranslation) == 0x000000, "Member 'FConstraintDescription::bTranslation' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, bRotation) == 0x000001, "Member 'FConstraintDescription::bRotation' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, bScale) == 0x000002, "Member 'FConstraintDescription::bScale' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, bParent) == 0x000003, "Member 'FConstraintDescription::bParent' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, TranslationAxes) == 0x000004, "Member 'FConstraintDescription::TranslationAxes' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, RotationAxes) == 0x000007, "Member 'FConstraintDescription::RotationAxes' has a wrong offset!");
static_assert(offsetof(FConstraintDescription, ScaleAxes) == 0x00000A, "Member 'FConstraintDescription::ScaleAxes' has a wrong offset!");

struct FConstraintOffset final
{
public:
	struct FVector                                Translation;
	uint8                                         Pad_18[0x8];
	struct FQuat                                  Rotation;
	struct FVector                                Scale;
	uint8                                         Pad_58[0x8];
	struct FTransform                             Parent;
};
static_assert(alignof(FConstraintOffset) == 0x000010, "Wrong alignment on FConstraintOffset");
static_assert(sizeof(FConstraintOffset) == 0x0000C0, "Wrong size on FConstraintOffset");
static_assert(offsetof(FConstraintOffset, Translation) == 0x000000, "Member 'FConstraintOffset::Translation' has a wrong offset!");
static_assert(offsetof(FConstraintOffset, Rotation) == 0x000020, "Member 'FConstraintOffset::Rotation' has a wrong offset!");
static_assert(offsetof(FConstraintOffset, Scale) == 0x000040, "Member 'FConstraintOffset::Scale' has a wrong offset!");
static_assert(offsetof(FConstraintOffset, Parent) == 0x000060, "Member 'FConstraintOffset::Parent' has a wrong offset!");

struct FTransformConstraint final
{
public:
	struct FConstraintDescription                 Operator;
	uint8                                         Pad_D[0x3];
	class FName                                   SourceNode;
	class FName                                   TargetNode;
	float                                         Weight;
	bool                                          bMaintainOffset;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(FTransformConstraint) == 0x000004, "Wrong alignment on FTransformConstraint");
static_assert(sizeof(FTransformConstraint) == 0x000020, "Wrong size on FTransformConstraint");
static_assert(offsetof(FTransformConstraint, Operator) == 0x000000, "Member 'FTransformConstraint::Operator' has a wrong offset!");
static_assert(offsetof(FTransformConstraint, SourceNode) == 0x000010, "Member 'FTransformConstraint::SourceNode' has a wrong offset!");
static_assert(offsetof(FTransformConstraint, TargetNode) == 0x000014, "Member 'FTransformConstraint::TargetNode' has a wrong offset!");
static_assert(offsetof(FTransformConstraint, Weight) == 0x000018, "Member 'FTransformConstraint::Weight' has a wrong offset!");
static_assert(offsetof(FTransformConstraint, bMaintainOffset) == 0x00001C, "Member 'FTransformConstraint::bMaintainOffset' has a wrong offset!");

struct alignas(0x08) FConstraintDescriptionEx
{
public:
	uint8                                         Pad_0[0x8];
	struct FFilterOptionPerAxis                   AxesFilterOption;
	uint8                                         Pad_B[0x5];
};
static_assert(alignof(FConstraintDescriptionEx) == 0x000008, "Wrong alignment on FConstraintDescriptionEx");
static_assert(sizeof(FConstraintDescriptionEx) == 0x000010, "Wrong size on FConstraintDescriptionEx");
static_assert(offsetof(FConstraintDescriptionEx, AxesFilterOption) == 0x000008, "Member 'FConstraintDescriptionEx::AxesFilterOption' has a wrong offset!");

struct FTransformConstraintDescription final : public FConstraintDescriptionEx
{
public:
	ETransformConstraintType                      TransformType;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FTransformConstraintDescription) == 0x000008, "Wrong alignment on FTransformConstraintDescription");
static_assert(sizeof(FTransformConstraintDescription) == 0x000018, "Wrong size on FTransformConstraintDescription");
static_assert(offsetof(FTransformConstraintDescription, TransformType) == 0x000010, "Member 'FTransformConstraintDescription::TransformType' has a wrong offset!");

struct FAimConstraintDescription final : public FConstraintDescriptionEx
{
public:
	struct FAxis                                  LookAt_Axis;
	struct FAxis                                  LookUp_Axis;
	bool                                          bUseLookUp;
	uint8                                         Pad_51[0x7];
	struct FVector                                LookUpTarget;
};
static_assert(alignof(FAimConstraintDescription) == 0x000008, "Wrong alignment on FAimConstraintDescription");
static_assert(sizeof(FAimConstraintDescription) == 0x000070, "Wrong size on FAimConstraintDescription");
static_assert(offsetof(FAimConstraintDescription, LookAt_Axis) == 0x000010, "Member 'FAimConstraintDescription::LookAt_Axis' has a wrong offset!");
static_assert(offsetof(FAimConstraintDescription, LookUp_Axis) == 0x000030, "Member 'FAimConstraintDescription::LookUp_Axis' has a wrong offset!");
static_assert(offsetof(FAimConstraintDescription, bUseLookUp) == 0x000050, "Member 'FAimConstraintDescription::bUseLookUp' has a wrong offset!");
static_assert(offsetof(FAimConstraintDescription, LookUpTarget) == 0x000058, "Member 'FAimConstraintDescription::LookUpTarget' has a wrong offset!");

struct alignas(0x08) FConstraintDescriptor final
{
public:
	EConstraintType                               Type;
	uint8                                         Pad_1[0xF];
};
static_assert(alignof(FConstraintDescriptor) == 0x000008, "Wrong alignment on FConstraintDescriptor");
static_assert(sizeof(FConstraintDescriptor) == 0x000010, "Wrong size on FConstraintDescriptor");
static_assert(offsetof(FConstraintDescriptor, Type) == 0x000000, "Member 'FConstraintDescriptor::Type' has a wrong offset!");

struct FConstraintData final
{
public:
	struct FConstraintDescriptor                  Constraint;
	float                                         Weight;
	bool                                          bMaintainOffset;
	uint8                                         Pad_15[0xB];
	struct FTransform                             Offset;
	struct FTransform                             CurrentTransform;
};
static_assert(alignof(FConstraintData) == 0x000010, "Wrong alignment on FConstraintData");
static_assert(sizeof(FConstraintData) == 0x0000E0, "Wrong size on FConstraintData");
static_assert(offsetof(FConstraintData, Constraint) == 0x000000, "Member 'FConstraintData::Constraint' has a wrong offset!");
static_assert(offsetof(FConstraintData, Weight) == 0x000010, "Member 'FConstraintData::Weight' has a wrong offset!");
static_assert(offsetof(FConstraintData, bMaintainOffset) == 0x000014, "Member 'FConstraintData::bMaintainOffset' has a wrong offset!");
static_assert(offsetof(FConstraintData, Offset) == 0x000020, "Member 'FConstraintData::Offset' has a wrong offset!");
static_assert(offsetof(FConstraintData, CurrentTransform) == 0x000080, "Member 'FConstraintData::CurrentTransform' has a wrong offset!");

struct FEulerTransform final
{
public:
	struct FVector                                Location;
	struct FRotator                               Rotation;
	struct FVector                                Scale;
};
static_assert(alignof(FEulerTransform) == 0x000008, "Wrong alignment on FEulerTransform");
static_assert(sizeof(FEulerTransform) == 0x000048, "Wrong size on FEulerTransform");
static_assert(offsetof(FEulerTransform, Location) == 0x000000, "Member 'FEulerTransform::Location' has a wrong offset!");
static_assert(offsetof(FEulerTransform, Rotation) == 0x000018, "Member 'FEulerTransform::Rotation' has a wrong offset!");
static_assert(offsetof(FEulerTransform, Scale) == 0x000030, "Member 'FEulerTransform::Scale' has a wrong offset!");

struct alignas(0x08) FFABRIKChainLink final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FFABRIKChainLink) == 0x000008, "Wrong alignment on FFABRIKChainLink");
static_assert(sizeof(FFABRIKChainLink) == 0x000050, "Wrong size on FFABRIKChainLink");

struct FTransformNoScale final
{
public:
	struct FVector                                Location;
	uint8                                         Pad_18[0x8];
	struct FQuat                                  Rotation;
};
static_assert(alignof(FTransformNoScale) == 0x000010, "Wrong alignment on FTransformNoScale");
static_assert(sizeof(FTransformNoScale) == 0x000040, "Wrong size on FTransformNoScale");
static_assert(offsetof(FTransformNoScale, Location) == 0x000000, "Member 'FTransformNoScale::Location' has a wrong offset!");
static_assert(offsetof(FTransformNoScale, Rotation) == 0x000020, "Member 'FTransformNoScale::Rotation' has a wrong offset!");

}
