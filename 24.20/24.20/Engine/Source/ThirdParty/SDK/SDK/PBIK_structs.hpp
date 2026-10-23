#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ControlRig_structs.hpp"

namespace SDK
{

enum class EPBIKLimitType : uint8
{
	Free                                     = 0,
	Limited                                  = 1,
	Locked                                   = 2,
	EPBIKLimitType_MAX                       = 3,
};

enum class EPBIKRootBehavior : uint8
{
	PrePull                                  = 0,
	PinToInput                               = 1,
	Free                                     = 2,
	EPBIKRootBehavior_MAX                    = 3,
};

struct FPBIKBoneSetting final
{
public:
	class FName                                   bone;
	float                                         RotationStiffness;
	float                                         PositionStiffness;
	EPBIKLimitType                                X;
	uint8                                         Pad_D[0x3];
	float                                         MinX;
	float                                         MaxX;
	EPBIKLimitType                                Y;
	uint8                                         Pad_19[0x3];
	float                                         MinY;
	float                                         MaxY;
	EPBIKLimitType                                Z;
	uint8                                         Pad_25[0x3];
	float                                         MinZ;
	float                                         MaxZ;
	bool                                          bUsePreferredAngles;
	uint8                                         Pad_31[0x7];
	struct FVector                                PreferredAngles;
};
static_assert(alignof(FPBIKBoneSetting) == 0x000008, "Wrong alignment on FPBIKBoneSetting");
static_assert(sizeof(FPBIKBoneSetting) == 0x000050, "Wrong size on FPBIKBoneSetting");
static_assert(offsetof(FPBIKBoneSetting, bone) == 0x000000, "Member 'FPBIKBoneSetting::bone' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, RotationStiffness) == 0x000004, "Member 'FPBIKBoneSetting::RotationStiffness' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, PositionStiffness) == 0x000008, "Member 'FPBIKBoneSetting::PositionStiffness' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, X) == 0x00000C, "Member 'FPBIKBoneSetting::X' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MinX) == 0x000010, "Member 'FPBIKBoneSetting::MinX' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MaxX) == 0x000014, "Member 'FPBIKBoneSetting::MaxX' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, Y) == 0x000018, "Member 'FPBIKBoneSetting::Y' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MinY) == 0x00001C, "Member 'FPBIKBoneSetting::MinY' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MaxY) == 0x000020, "Member 'FPBIKBoneSetting::MaxY' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, Z) == 0x000024, "Member 'FPBIKBoneSetting::Z' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MinZ) == 0x000028, "Member 'FPBIKBoneSetting::MinZ' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MaxZ) == 0x00002C, "Member 'FPBIKBoneSetting::MaxZ' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, bUsePreferredAngles) == 0x000030, "Member 'FPBIKBoneSetting::bUsePreferredAngles' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, PreferredAngles) == 0x000038, "Member 'FPBIKBoneSetting::PreferredAngles' has a wrong offset!");

struct FRootPrePullSettings final
{
public:
	float                                         RotationAlpha;
	float                                         RotationAlphaX;
	float                                         RotationAlphaY;
	float                                         RotationAlphaZ;
	float                                         PositionAlpha;
	float                                         PositionAlphaX;
	float                                         PositionAlphaY;
	float                                         PositionAlphaZ;
};
static_assert(alignof(FRootPrePullSettings) == 0x000004, "Wrong alignment on FRootPrePullSettings");
static_assert(sizeof(FRootPrePullSettings) == 0x000020, "Wrong size on FRootPrePullSettings");
static_assert(offsetof(FRootPrePullSettings, RotationAlpha) == 0x000000, "Member 'FRootPrePullSettings::RotationAlpha' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, RotationAlphaX) == 0x000004, "Member 'FRootPrePullSettings::RotationAlphaX' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, RotationAlphaY) == 0x000008, "Member 'FRootPrePullSettings::RotationAlphaY' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, RotationAlphaZ) == 0x00000C, "Member 'FRootPrePullSettings::RotationAlphaZ' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, PositionAlpha) == 0x000010, "Member 'FRootPrePullSettings::PositionAlpha' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, PositionAlphaX) == 0x000014, "Member 'FRootPrePullSettings::PositionAlphaX' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, PositionAlphaY) == 0x000018, "Member 'FRootPrePullSettings::PositionAlphaY' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, PositionAlphaZ) == 0x00001C, "Member 'FRootPrePullSettings::PositionAlphaZ' has a wrong offset!");

struct FPBIKSolverSettings final
{
public:
	int32                                         Iterations;
	float                                         MassMultiplier;
	bool                                          bAllowStretch;
	EPBIKRootBehavior                             RootBehavior;
	uint8                                         Pad_A[0x2];
	struct FRootPrePullSettings                   PrePullRootSettings;
	float                                         GlobalPullChainAlpha;
	float                                         MaxAngle;
	float                                         OverRelaxation;
	bool                                          bStartSolveFromInputPose;
	uint8                                         Pad_39[0x3];
};
static_assert(alignof(FPBIKSolverSettings) == 0x000004, "Wrong alignment on FPBIKSolverSettings");
static_assert(sizeof(FPBIKSolverSettings) == 0x00003C, "Wrong size on FPBIKSolverSettings");
static_assert(offsetof(FPBIKSolverSettings, Iterations) == 0x000000, "Member 'FPBIKSolverSettings::Iterations' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, MassMultiplier) == 0x000004, "Member 'FPBIKSolverSettings::MassMultiplier' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, bAllowStretch) == 0x000008, "Member 'FPBIKSolverSettings::bAllowStretch' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, RootBehavior) == 0x000009, "Member 'FPBIKSolverSettings::RootBehavior' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, PrePullRootSettings) == 0x00000C, "Member 'FPBIKSolverSettings::PrePullRootSettings' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, GlobalPullChainAlpha) == 0x00002C, "Member 'FPBIKSolverSettings::GlobalPullChainAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, MaxAngle) == 0x000030, "Member 'FPBIKSolverSettings::MaxAngle' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, OverRelaxation) == 0x000034, "Member 'FPBIKSolverSettings::OverRelaxation' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, bStartSolveFromInputPose) == 0x000038, "Member 'FPBIKSolverSettings::bStartSolveFromInputPose' has a wrong offset!");

struct alignas(0x08) FPBIKSolver final
{
public:
	uint8                                         Pad_0[0x68];
};
static_assert(alignof(FPBIKSolver) == 0x000008, "Wrong alignment on FPBIKSolver");
static_assert(sizeof(FPBIKSolver) == 0x000068, "Wrong size on FPBIKSolver");

struct FPBIKDebug final
{
public:
	float                                         DrawScale;
	bool                                          bDrawDebug;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FPBIKDebug) == 0x000004, "Wrong alignment on FPBIKDebug");
static_assert(sizeof(FPBIKDebug) == 0x000008, "Wrong size on FPBIKDebug");
static_assert(offsetof(FPBIKDebug, DrawScale) == 0x000000, "Member 'FPBIKDebug::DrawScale' has a wrong offset!");
static_assert(offsetof(FPBIKDebug, bDrawDebug) == 0x000004, "Member 'FPBIKDebug::bDrawDebug' has a wrong offset!");

struct FPBIKEffector final
{
public:
	class FName                                   bone;
	uint8                                         Pad_4[0xC];
	struct FTransform                             Transform;
	float                                         PositionAlpha;
	float                                         RotationAlpha;
	float                                         StrengthAlpha;
	float                                         PullChainAlpha;
	float                                         PinRotation;
	uint8                                         Pad_84[0xC];
};
static_assert(alignof(FPBIKEffector) == 0x000010, "Wrong alignment on FPBIKEffector");
static_assert(sizeof(FPBIKEffector) == 0x000090, "Wrong size on FPBIKEffector");
static_assert(offsetof(FPBIKEffector, bone) == 0x000000, "Member 'FPBIKEffector::bone' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, Transform) == 0x000010, "Member 'FPBIKEffector::Transform' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, PositionAlpha) == 0x000070, "Member 'FPBIKEffector::PositionAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, RotationAlpha) == 0x000074, "Member 'FPBIKEffector::RotationAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, StrengthAlpha) == 0x000078, "Member 'FPBIKEffector::StrengthAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, PullChainAlpha) == 0x00007C, "Member 'FPBIKEffector::PullChainAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, PinRotation) == 0x000080, "Member 'FPBIKEffector::PinRotation' has a wrong offset!");

struct FRigUnit_PBIK final : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                   Root;
	uint8                                         Pad_3C[0x4];
	TArray<struct FPBIKEffector>                  Effectors;
	TArray<int32>                                 EffectorSolverIndices;
	TArray<struct FPBIKBoneSetting>               BoneSettings;
	TArray<class FName>                           ExcludedBones;
	struct FPBIKSolverSettings                    Settings;
	struct FPBIKDebug                             Debug;
	uint8                                         Pad_C4[0x4];
	TArray<int32>                                 BoneSettingToSolverBoneIndex;
	TArray<int32>                                 SolverBoneToElementIndex;
	struct FPBIKSolver                            Solver;
	bool                                          bNeedsInit;
	uint8                                         Pad_151[0x7];
};
static_assert(alignof(FRigUnit_PBIK) == 0x000008, "Wrong alignment on FRigUnit_PBIK");
static_assert(sizeof(FRigUnit_PBIK) == 0x000158, "Wrong size on FRigUnit_PBIK");
static_assert(offsetof(FRigUnit_PBIK, Root) == 0x000038, "Member 'FRigUnit_PBIK::Root' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, Effectors) == 0x000040, "Member 'FRigUnit_PBIK::Effectors' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, EffectorSolverIndices) == 0x000050, "Member 'FRigUnit_PBIK::EffectorSolverIndices' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, BoneSettings) == 0x000060, "Member 'FRigUnit_PBIK::BoneSettings' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, ExcludedBones) == 0x000070, "Member 'FRigUnit_PBIK::ExcludedBones' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, Settings) == 0x000080, "Member 'FRigUnit_PBIK::Settings' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, Debug) == 0x0000BC, "Member 'FRigUnit_PBIK::Debug' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, BoneSettingToSolverBoneIndex) == 0x0000C8, "Member 'FRigUnit_PBIK::BoneSettingToSolverBoneIndex' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, SolverBoneToElementIndex) == 0x0000D8, "Member 'FRigUnit_PBIK::SolverBoneToElementIndex' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, Solver) == 0x0000E8, "Member 'FRigUnit_PBIK::Solver' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, bNeedsInit) == 0x000150, "Member 'FRigUnit_PBIK::bNeedsInit' has a wrong offset!");

}
