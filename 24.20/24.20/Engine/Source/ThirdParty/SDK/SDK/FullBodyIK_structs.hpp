#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ControlRig_structs.hpp"

namespace SDK
{

enum class EFBIKBoneLimitType : uint8
{
	Free                                     = 0,
	Limit                                    = 1,
	Locked                                   = 2,
	EFBIKBoneLimitType_MAX                   = 3,
};

enum class EPoleVectorOption : uint8
{
	Direction                                = 0,
	Location                                 = 1,
	EPoleVectorOption_MAX                    = 2,
};

struct FFBIKBoneLimit final
{
public:
	EFBIKBoneLimitType                            LimitType_X;
	EFBIKBoneLimitType                            LimitType_Y;
	EFBIKBoneLimitType                            LimitType_Z;
	uint8                                         Pad_3[0x5];
	struct FVector                                Limit;
};
static_assert(alignof(FFBIKBoneLimit) == 0x000008, "Wrong alignment on FFBIKBoneLimit");
static_assert(sizeof(FFBIKBoneLimit) == 0x000020, "Wrong size on FFBIKBoneLimit");
static_assert(offsetof(FFBIKBoneLimit, LimitType_X) == 0x000000, "Member 'FFBIKBoneLimit::LimitType_X' has a wrong offset!");
static_assert(offsetof(FFBIKBoneLimit, LimitType_Y) == 0x000001, "Member 'FFBIKBoneLimit::LimitType_Y' has a wrong offset!");
static_assert(offsetof(FFBIKBoneLimit, LimitType_Z) == 0x000002, "Member 'FFBIKBoneLimit::LimitType_Z' has a wrong offset!");
static_assert(offsetof(FFBIKBoneLimit, Limit) == 0x000008, "Member 'FFBIKBoneLimit::Limit' has a wrong offset!");

struct FFBIKConstraintOption final
{
public:
	struct FRigElementKey                         Item;
	bool                                          bEnabled;
	bool                                          bUseStiffness;
	uint8                                         Pad_A[0x6];
	struct FVector                                LinearStiffness;
	struct FVector                                AngularStiffness;
	bool                                          bUseAngularLimit;
	uint8                                         Pad_41[0x7];
	struct FFBIKBoneLimit                         AngularLimit;
	bool                                          bUsePoleVector;
	EPoleVectorOption                             PoleVectorOption;
	uint8                                         Pad_6A[0x6];
	struct FVector                                PoleVector;
	struct FRotator                               OffsetRotation;
};
static_assert(alignof(FFBIKConstraintOption) == 0x000008, "Wrong alignment on FFBIKConstraintOption");
static_assert(sizeof(FFBIKConstraintOption) == 0x0000A0, "Wrong size on FFBIKConstraintOption");
static_assert(offsetof(FFBIKConstraintOption, Item) == 0x000000, "Member 'FFBIKConstraintOption::Item' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, bEnabled) == 0x000008, "Member 'FFBIKConstraintOption::bEnabled' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, bUseStiffness) == 0x000009, "Member 'FFBIKConstraintOption::bUseStiffness' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, LinearStiffness) == 0x000010, "Member 'FFBIKConstraintOption::LinearStiffness' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, AngularStiffness) == 0x000028, "Member 'FFBIKConstraintOption::AngularStiffness' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, bUseAngularLimit) == 0x000040, "Member 'FFBIKConstraintOption::bUseAngularLimit' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, AngularLimit) == 0x000048, "Member 'FFBIKConstraintOption::AngularLimit' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, bUsePoleVector) == 0x000068, "Member 'FFBIKConstraintOption::bUsePoleVector' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, PoleVectorOption) == 0x000069, "Member 'FFBIKConstraintOption::PoleVectorOption' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, PoleVector) == 0x000070, "Member 'FFBIKConstraintOption::PoleVector' has a wrong offset!");
static_assert(offsetof(FFBIKConstraintOption, OffsetRotation) == 0x000088, "Member 'FFBIKConstraintOption::OffsetRotation' has a wrong offset!");

struct FMotionProcessInput final
{
public:
	bool                                          bForceEffectorRotationTarget;
	bool                                          bOnlyApplyWhenReachedToTarget;
};
static_assert(alignof(FMotionProcessInput) == 0x000001, "Wrong alignment on FMotionProcessInput");
static_assert(sizeof(FMotionProcessInput) == 0x000002, "Wrong size on FMotionProcessInput");
static_assert(offsetof(FMotionProcessInput, bForceEffectorRotationTarget) == 0x000000, "Member 'FMotionProcessInput::bForceEffectorRotationTarget' has a wrong offset!");
static_assert(offsetof(FMotionProcessInput, bOnlyApplyWhenReachedToTarget) == 0x000001, "Member 'FMotionProcessInput::bOnlyApplyWhenReachedToTarget' has a wrong offset!");

struct FFBIKDebugOption final
{
public:
	bool                                          bDrawDebugHierarchy;
	bool                                          bColorAngularMotionStrength;
	bool                                          bColorLinearMotionStrength;
	bool                                          bDrawDebugAxes;
	bool                                          bDrawDebugEffector;
	bool                                          bDrawDebugConstraints;
	uint8                                         Pad_6[0xA];
	struct FTransform                             DrawWorldOffset;
	float                                         DrawSize;
	uint8                                         Pad_74[0xC];
};
static_assert(alignof(FFBIKDebugOption) == 0x000010, "Wrong alignment on FFBIKDebugOption");
static_assert(sizeof(FFBIKDebugOption) == 0x000080, "Wrong size on FFBIKDebugOption");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugHierarchy) == 0x000000, "Member 'FFBIKDebugOption::bDrawDebugHierarchy' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bColorAngularMotionStrength) == 0x000001, "Member 'FFBIKDebugOption::bColorAngularMotionStrength' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bColorLinearMotionStrength) == 0x000002, "Member 'FFBIKDebugOption::bColorLinearMotionStrength' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugAxes) == 0x000003, "Member 'FFBIKDebugOption::bDrawDebugAxes' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugEffector) == 0x000004, "Member 'FFBIKDebugOption::bDrawDebugEffector' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, bDrawDebugConstraints) == 0x000005, "Member 'FFBIKDebugOption::bDrawDebugConstraints' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, DrawWorldOffset) == 0x000010, "Member 'FFBIKDebugOption::DrawWorldOffset' has a wrong offset!");
static_assert(offsetof(FFBIKDebugOption, DrawSize) == 0x000070, "Member 'FFBIKDebugOption::DrawSize' has a wrong offset!");

struct FSolverInput final
{
public:
	float                                         LinearMotionStrength;
	float                                         MinLinearMotionStrength;
	float                                         AngularMotionStrength;
	float                                         MinAngularMotionStrength;
	float                                         DefaultTargetClamp;
	float                                         Precision;
	float                                         Damping;
	int32                                         MaxIterations;
	bool                                          bUseJacobianTranspose;
	uint8                                         Pad_21[0x3];
};
static_assert(alignof(FSolverInput) == 0x000004, "Wrong alignment on FSolverInput");
static_assert(sizeof(FSolverInput) == 0x000024, "Wrong size on FSolverInput");
static_assert(offsetof(FSolverInput, LinearMotionStrength) == 0x000000, "Member 'FSolverInput::LinearMotionStrength' has a wrong offset!");
static_assert(offsetof(FSolverInput, MinLinearMotionStrength) == 0x000004, "Member 'FSolverInput::MinLinearMotionStrength' has a wrong offset!");
static_assert(offsetof(FSolverInput, AngularMotionStrength) == 0x000008, "Member 'FSolverInput::AngularMotionStrength' has a wrong offset!");
static_assert(offsetof(FSolverInput, MinAngularMotionStrength) == 0x00000C, "Member 'FSolverInput::MinAngularMotionStrength' has a wrong offset!");
static_assert(offsetof(FSolverInput, DefaultTargetClamp) == 0x000010, "Member 'FSolverInput::DefaultTargetClamp' has a wrong offset!");
static_assert(offsetof(FSolverInput, Precision) == 0x000014, "Member 'FSolverInput::Precision' has a wrong offset!");
static_assert(offsetof(FSolverInput, Damping) == 0x000018, "Member 'FSolverInput::Damping' has a wrong offset!");
static_assert(offsetof(FSolverInput, MaxIterations) == 0x00001C, "Member 'FSolverInput::MaxIterations' has a wrong offset!");
static_assert(offsetof(FSolverInput, bUseJacobianTranspose) == 0x000020, "Member 'FSolverInput::bUseJacobianTranspose' has a wrong offset!");

struct FFBIKEndEffector final
{
public:
	struct FRigElementKey                         Item;
	struct FVector                                Position;
	float                                         PositionAlpha;
	int32                                         PositionDepth;
	uint8                                         Pad_28[0x8];
	struct FQuat                                  Rotation;
	float                                         RotationAlpha;
	int32                                         RotationDepth;
	float                                         Pull;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(FFBIKEndEffector) == 0x000010, "Wrong alignment on FFBIKEndEffector");
static_assert(sizeof(FFBIKEndEffector) == 0x000060, "Wrong size on FFBIKEndEffector");
static_assert(offsetof(FFBIKEndEffector, Item) == 0x000000, "Member 'FFBIKEndEffector::Item' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, Position) == 0x000008, "Member 'FFBIKEndEffector::Position' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, PositionAlpha) == 0x000020, "Member 'FFBIKEndEffector::PositionAlpha' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, PositionDepth) == 0x000024, "Member 'FFBIKEndEffector::PositionDepth' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, Rotation) == 0x000030, "Member 'FFBIKEndEffector::Rotation' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, RotationAlpha) == 0x000050, "Member 'FFBIKEndEffector::RotationAlpha' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, RotationDepth) == 0x000054, "Member 'FFBIKEndEffector::RotationDepth' has a wrong offset!");
static_assert(offsetof(FFBIKEndEffector, Pull) == 0x000058, "Member 'FFBIKEndEffector::Pull' has a wrong offset!");

struct alignas(0x08) FRigUnit_FullbodyIK_WorkData final
{
public:
	uint8                                         Pad_0[0x198];
};
static_assert(alignof(FRigUnit_FullbodyIK_WorkData) == 0x000008, "Wrong alignment on FRigUnit_FullbodyIK_WorkData");
static_assert(sizeof(FRigUnit_FullbodyIK_WorkData) == 0x000198, "Wrong size on FRigUnit_FullbodyIK_WorkData");

struct FRigUnit_FullbodyIK final : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                         Root;
	TArray<struct FFBIKEndEffector>               Effectors;
	TArray<struct FFBIKConstraintOption>          Constraints;
	struct FSolverInput                           SolverProperty;
	struct FMotionProcessInput                    MotionProperty;
	bool                                          bPropagateToChildren;
	uint8                                         Pad_87[0x9];
	struct FFBIKDebugOption                       DebugOption;
	struct FRigUnit_FullbodyIK_WorkData           WorkData;
	uint8                                         Pad_2A8[0x8];
};
static_assert(alignof(FRigUnit_FullbodyIK) == 0x000010, "Wrong alignment on FRigUnit_FullbodyIK");
static_assert(sizeof(FRigUnit_FullbodyIK) == 0x0002B0, "Wrong size on FRigUnit_FullbodyIK");
static_assert(offsetof(FRigUnit_FullbodyIK, Root) == 0x000038, "Member 'FRigUnit_FullbodyIK::Root' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, Effectors) == 0x000040, "Member 'FRigUnit_FullbodyIK::Effectors' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, Constraints) == 0x000050, "Member 'FRigUnit_FullbodyIK::Constraints' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, SolverProperty) == 0x000060, "Member 'FRigUnit_FullbodyIK::SolverProperty' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, MotionProperty) == 0x000084, "Member 'FRigUnit_FullbodyIK::MotionProperty' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, bPropagateToChildren) == 0x000086, "Member 'FRigUnit_FullbodyIK::bPropagateToChildren' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, DebugOption) == 0x000090, "Member 'FRigUnit_FullbodyIK::DebugOption' has a wrong offset!");
static_assert(offsetof(FRigUnit_FullbodyIK, WorkData) == 0x000110, "Member 'FRigUnit_FullbodyIK::WorkData' has a wrong offset!");

}
