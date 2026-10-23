#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "IKRig_structs.hpp"
#include "PBIK_structs.hpp"

namespace SDK
{

class IIKGoalCreatorInterface final : public IInterface
{
public:
	void AddIKGoals(TMap<class FName, struct FIKRigGoal>* OutGoals);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKGoalCreatorInterface">();
	}
	static class IIKGoalCreatorInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IIKGoalCreatorInterface>();
	}
};
static_assert(alignof(IIKGoalCreatorInterface) == 0x000008, "Wrong alignment on IIKGoalCreatorInterface");
static_assert(sizeof(IIKGoalCreatorInterface) == 0x000028, "Wrong size on IIKGoalCreatorInterface");

class UIKRigComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x18];

public:
	void ClearAllGoals();
	void SetIKRigGoal(const struct FIKRigGoal& Goal);
	void SetIKRigGoalPositionAndRotation(const class FName GoalName, const struct FVector& Position, const struct FQuat& Rotation, const float PositionAlpha, const float RotationAlpha);
	void SetIKRigGoalTransform(const class FName GoalName, const struct FTransform& Transform, const float PositionAlpha, const float RotationAlpha);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRigComponent">();
	}
	static class UIKRigComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRigComponent>();
	}
};
static_assert(alignof(UIKRigComponent) == 0x000008, "Wrong alignment on UIKRigComponent");
static_assert(sizeof(UIKRigComponent) == 0x0000B8, "Wrong size on UIKRigComponent");

class UIKRigEffectorGoal final : public UObject
{
public:
	class FName                                   GoalName;
	class FName                                   BoneName;
	float                                         PositionAlpha;
	float                                         RotationAlpha;
	uint8                                         Pad_38[0x8];
	struct FTransform                             CurrentTransform;
	struct FTransform                             InitialTransform;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRigEffectorGoal">();
	}
	static class UIKRigEffectorGoal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRigEffectorGoal>();
	}
};
static_assert(alignof(UIKRigEffectorGoal) == 0x000010, "Wrong alignment on UIKRigEffectorGoal");
static_assert(sizeof(UIKRigEffectorGoal) == 0x000100, "Wrong size on UIKRigEffectorGoal");
static_assert(offsetof(UIKRigEffectorGoal, GoalName) == 0x000028, "Member 'UIKRigEffectorGoal::GoalName' has a wrong offset!");
static_assert(offsetof(UIKRigEffectorGoal, BoneName) == 0x00002C, "Member 'UIKRigEffectorGoal::BoneName' has a wrong offset!");
static_assert(offsetof(UIKRigEffectorGoal, PositionAlpha) == 0x000030, "Member 'UIKRigEffectorGoal::PositionAlpha' has a wrong offset!");
static_assert(offsetof(UIKRigEffectorGoal, RotationAlpha) == 0x000034, "Member 'UIKRigEffectorGoal::RotationAlpha' has a wrong offset!");
static_assert(offsetof(UIKRigEffectorGoal, CurrentTransform) == 0x000040, "Member 'UIKRigEffectorGoal::CurrentTransform' has a wrong offset!");
static_assert(offsetof(UIKRigEffectorGoal, InitialTransform) == 0x0000A0, "Member 'UIKRigEffectorGoal::InitialTransform' has a wrong offset!");

class UIKRigDefinition final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TSoftObjectPtr<class USkeletalMesh>           PreviewSkeletalMesh;
	struct FIKRigSkeleton                         Skeleton;
	TArray<class UIKRigEffectorGoal*>             Goals;
	TArray<class UIKRigSolver*>                   Solvers;
	struct FRetargetDefinition                    RetargetDefinition;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRigDefinition">();
	}
	static class UIKRigDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRigDefinition>();
	}
};
static_assert(alignof(UIKRigDefinition) == 0x000008, "Wrong alignment on UIKRigDefinition");
static_assert(sizeof(UIKRigDefinition) == 0x000100, "Wrong size on UIKRigDefinition");
static_assert(offsetof(UIKRigDefinition, PreviewSkeletalMesh) == 0x000030, "Member 'UIKRigDefinition::PreviewSkeletalMesh' has a wrong offset!");
static_assert(offsetof(UIKRigDefinition, Skeleton) == 0x000058, "Member 'UIKRigDefinition::Skeleton' has a wrong offset!");
static_assert(offsetof(UIKRigDefinition, Goals) == 0x0000C8, "Member 'UIKRigDefinition::Goals' has a wrong offset!");
static_assert(offsetof(UIKRigDefinition, Solvers) == 0x0000D8, "Member 'UIKRigDefinition::Solvers' has a wrong offset!");
static_assert(offsetof(UIKRigDefinition, RetargetDefinition) == 0x0000E8, "Member 'UIKRigDefinition::RetargetDefinition' has a wrong offset!");

class UIKRigProcessor final : public UObject
{
public:
	uint8                                         Pad_28[0x38];
	TArray<class UIKRigSolver*>                   Solvers;
	uint8                                         Pad_70[0xD8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRigProcessor">();
	}
	static class UIKRigProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRigProcessor>();
	}
};
static_assert(alignof(UIKRigProcessor) == 0x000008, "Wrong alignment on UIKRigProcessor");
static_assert(sizeof(UIKRigProcessor) == 0x000148, "Wrong size on UIKRigProcessor");
static_assert(offsetof(UIKRigProcessor, Solvers) == 0x000060, "Member 'UIKRigProcessor::Solvers' has a wrong offset!");

class UIKRigSolver : public UObject
{
public:
	bool                                          bIsEnabled;
	uint8                                         Pad_29[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRigSolver">();
	}
	static class UIKRigSolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRigSolver>();
	}
};
static_assert(alignof(UIKRigSolver) == 0x000008, "Wrong alignment on UIKRigSolver");
static_assert(sizeof(UIKRigSolver) == 0x000030, "Wrong size on UIKRigSolver");
static_assert(offsetof(UIKRigSolver, bIsEnabled) == 0x000028, "Member 'UIKRigSolver::bIsEnabled' has a wrong offset!");

class URetargetChainSettings final : public UObject
{
public:
	class FName                                   SourceChain;
	class FName                                   TargetChain;
	struct FTargetChainSettings                   Settings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RetargetChainSettings">();
	}
	static class URetargetChainSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<URetargetChainSettings>();
	}
};
static_assert(alignof(URetargetChainSettings) == 0x000008, "Wrong alignment on URetargetChainSettings");
static_assert(sizeof(URetargetChainSettings) == 0x0000D8, "Wrong size on URetargetChainSettings");
static_assert(offsetof(URetargetChainSettings, SourceChain) == 0x000028, "Member 'URetargetChainSettings::SourceChain' has a wrong offset!");
static_assert(offsetof(URetargetChainSettings, TargetChain) == 0x00002C, "Member 'URetargetChainSettings::TargetChain' has a wrong offset!");
static_assert(offsetof(URetargetChainSettings, Settings) == 0x000030, "Member 'URetargetChainSettings::Settings' has a wrong offset!");

class URetargetRootSettings final : public UObject
{
public:
	struct FTargetRootSettings                    Settings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RetargetRootSettings">();
	}
	static class URetargetRootSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<URetargetRootSettings>();
	}
};
static_assert(alignof(URetargetRootSettings) == 0x000008, "Wrong alignment on URetargetRootSettings");
static_assert(sizeof(URetargetRootSettings) == 0x000090, "Wrong size on URetargetRootSettings");
static_assert(offsetof(URetargetRootSettings, Settings) == 0x000028, "Member 'URetargetRootSettings::Settings' has a wrong offset!");

class UIKRetargetGlobalSettings final : public UObject
{
public:
	struct FRetargetGlobalSettings                Settings;
	uint8                                         Pad_44[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRetargetGlobalSettings">();
	}
	static class UIKRetargetGlobalSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRetargetGlobalSettings>();
	}
};
static_assert(alignof(UIKRetargetGlobalSettings) == 0x000008, "Wrong alignment on UIKRetargetGlobalSettings");
static_assert(sizeof(UIKRetargetGlobalSettings) == 0x000048, "Wrong size on UIKRetargetGlobalSettings");
static_assert(offsetof(UIKRetargetGlobalSettings, Settings) == 0x000028, "Member 'UIKRetargetGlobalSettings::Settings' has a wrong offset!");

class UIKRetargeter final : public UObject
{
public:
	TSoftObjectPtr<class UIKRigDefinition>        SourceIKRigAsset;
	TSoftObjectPtr<class UIKRigDefinition>        TargetIKRigAsset;
	TArray<struct FRetargetChainMap>              ChainMapping;
	TArray<class URetargetChainSettings*>         ChainSettings;
	class URetargetRootSettings*                  RootSettings;
	class UIKRetargetGlobalSettings*              GlobalSettings;
	TMap<class FName, struct FRetargetProfile>    Profiles;
	class FName                                   CurrentProfile;
	uint8                                         Pad_FC[0x4];
	TMap<class FName, struct FIKRetargetPose>     SourceRetargetPoses;
	TMap<class FName, struct FIKRetargetPose>     TargetRetargetPoses;
	class FName                                   CurrentSourceRetargetPose;
	class FName                                   CurrentTargetRetargetPose;
	TMap<class FName, struct FIKRetargetPose>     RetargetPoses;
	class FName                                   CurrentRetargetPose;
	uint8                                         Pad_1FC[0x4];

public:
	static struct FTargetChainSettings GetChainSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const class FName TargetChainName, const class FName OptionalProfileName);
	static struct FTargetChainSettings GetChainSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile, const class FName TargetChainName);
	static struct FTargetChainSettings GetChainUsingGoalFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const class FName IKGoalName);
	static void GetGlobalSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const class FName OptionalProfileName, struct FRetargetGlobalSettings* OutSettings);
	static struct FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile);
	static void GetRootSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const class FName OptionalProfileName, struct FTargetRootSettings* OutSettings);
	static struct FTargetRootSettings GetRootSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile);
	static void SetChainFKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetChainFKSettings& FKSettings, const class FName TargetChainName);
	static void SetChainIKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetChainIKSettings& IKSettings, const class FName TargetChainName);
	static void SetChainSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetChainSettings& ChainSettings_0, const class FName TargetChainName);
	static void SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, const class FName TargetChainName);
	static void SetGlobalSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FRetargetGlobalSettings& GlobalSettings_0);
	static void SetRootSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetRootSettings& RootSettings_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRetargeter">();
	}
	static class UIKRetargeter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRetargeter>();
	}
};
static_assert(alignof(UIKRetargeter) == 0x000008, "Wrong alignment on UIKRetargeter");
static_assert(sizeof(UIKRetargeter) == 0x000200, "Wrong size on UIKRetargeter");
static_assert(offsetof(UIKRetargeter, SourceIKRigAsset) == 0x000028, "Member 'UIKRetargeter::SourceIKRigAsset' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, TargetIKRigAsset) == 0x000050, "Member 'UIKRetargeter::TargetIKRigAsset' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, ChainMapping) == 0x000078, "Member 'UIKRetargeter::ChainMapping' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, ChainSettings) == 0x000088, "Member 'UIKRetargeter::ChainSettings' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, RootSettings) == 0x000098, "Member 'UIKRetargeter::RootSettings' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, GlobalSettings) == 0x0000A0, "Member 'UIKRetargeter::GlobalSettings' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, Profiles) == 0x0000A8, "Member 'UIKRetargeter::Profiles' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, CurrentProfile) == 0x0000F8, "Member 'UIKRetargeter::CurrentProfile' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, SourceRetargetPoses) == 0x000100, "Member 'UIKRetargeter::SourceRetargetPoses' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, TargetRetargetPoses) == 0x000150, "Member 'UIKRetargeter::TargetRetargetPoses' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, CurrentSourceRetargetPose) == 0x0001A0, "Member 'UIKRetargeter::CurrentSourceRetargetPose' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, CurrentTargetRetargetPose) == 0x0001A4, "Member 'UIKRetargeter::CurrentTargetRetargetPose' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, RetargetPoses) == 0x0001A8, "Member 'UIKRetargeter::RetargetPoses' has a wrong offset!");
static_assert(offsetof(UIKRetargeter, CurrentRetargetPose) == 0x0001F8, "Member 'UIKRetargeter::CurrentRetargetPose' has a wrong offset!");

class alignas(0x10) UIKRetargetProcessor final : public UObject
{
public:
	uint8                                         Pad_28[0x148];
	class UIKRigProcessor*                        IKRigProcessor;
	uint8                                         Pad_178[0x1E8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRetargetProcessor">();
	}
	static class UIKRetargetProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRetargetProcessor>();
	}
};
static_assert(alignof(UIKRetargetProcessor) == 0x000010, "Wrong alignment on UIKRetargetProcessor");
static_assert(sizeof(UIKRetargetProcessor) == 0x000360, "Wrong size on UIKRetargetProcessor");
static_assert(offsetof(UIKRetargetProcessor, IKRigProcessor) == 0x000170, "Member 'UIKRetargetProcessor::IKRigProcessor' has a wrong offset!");

class UIKRig_BodyMoverEffector final : public UObject
{
public:
	class FName                                   GoalName;
	class FName                                   BoneName;
	float                                         InfluenceMultiplier;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_BodyMoverEffector">();
	}
	static class UIKRig_BodyMoverEffector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_BodyMoverEffector>();
	}
};
static_assert(alignof(UIKRig_BodyMoverEffector) == 0x000008, "Wrong alignment on UIKRig_BodyMoverEffector");
static_assert(sizeof(UIKRig_BodyMoverEffector) == 0x000038, "Wrong size on UIKRig_BodyMoverEffector");
static_assert(offsetof(UIKRig_BodyMoverEffector, GoalName) == 0x000028, "Member 'UIKRig_BodyMoverEffector::GoalName' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMoverEffector, BoneName) == 0x00002C, "Member 'UIKRig_BodyMoverEffector::BoneName' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMoverEffector, InfluenceMultiplier) == 0x000030, "Member 'UIKRig_BodyMoverEffector::InfluenceMultiplier' has a wrong offset!");

class UIKRig_BodyMover final : public UIKRigSolver
{
public:
	class FName                                   RootBone;
	float                                         PositionAlpha;
	float                                         PositionPositiveX;
	float                                         PositionNegativeX;
	float                                         PositionPositiveY;
	float                                         PositionNegativeY;
	float                                         PositionPositiveZ;
	float                                         PositionNegativeZ;
	float                                         RotationAlpha;
	float                                         RotateXAlpha;
	float                                         RotateYAlpha;
	float                                         RotateZAlpha;
	TArray<class UIKRig_BodyMoverEffector*>       Effectors;
	uint8                                         Pad_70[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_BodyMover">();
	}
	static class UIKRig_BodyMover* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_BodyMover>();
	}
};
static_assert(alignof(UIKRig_BodyMover) == 0x000008, "Wrong alignment on UIKRig_BodyMover");
static_assert(sizeof(UIKRig_BodyMover) == 0x000078, "Wrong size on UIKRig_BodyMover");
static_assert(offsetof(UIKRig_BodyMover, RootBone) == 0x000030, "Member 'UIKRig_BodyMover::RootBone' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, PositionAlpha) == 0x000034, "Member 'UIKRig_BodyMover::PositionAlpha' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, PositionPositiveX) == 0x000038, "Member 'UIKRig_BodyMover::PositionPositiveX' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, PositionNegativeX) == 0x00003C, "Member 'UIKRig_BodyMover::PositionNegativeX' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, PositionPositiveY) == 0x000040, "Member 'UIKRig_BodyMover::PositionPositiveY' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, PositionNegativeY) == 0x000044, "Member 'UIKRig_BodyMover::PositionNegativeY' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, PositionPositiveZ) == 0x000048, "Member 'UIKRig_BodyMover::PositionPositiveZ' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, PositionNegativeZ) == 0x00004C, "Member 'UIKRig_BodyMover::PositionNegativeZ' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, RotationAlpha) == 0x000050, "Member 'UIKRig_BodyMover::RotationAlpha' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, RotateXAlpha) == 0x000054, "Member 'UIKRig_BodyMover::RotateXAlpha' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, RotateYAlpha) == 0x000058, "Member 'UIKRig_BodyMover::RotateYAlpha' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, RotateZAlpha) == 0x00005C, "Member 'UIKRig_BodyMover::RotateZAlpha' has a wrong offset!");
static_assert(offsetof(UIKRig_BodyMover, Effectors) == 0x000060, "Member 'UIKRig_BodyMover::Effectors' has a wrong offset!");

class UIKRig_LimbEffector final : public UObject
{
public:
	class FName                                   GoalName;
	class FName                                   BoneName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_LimbEffector">();
	}
	static class UIKRig_LimbEffector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_LimbEffector>();
	}
};
static_assert(alignof(UIKRig_LimbEffector) == 0x000008, "Wrong alignment on UIKRig_LimbEffector");
static_assert(sizeof(UIKRig_LimbEffector) == 0x000030, "Wrong size on UIKRig_LimbEffector");
static_assert(offsetof(UIKRig_LimbEffector, GoalName) == 0x000028, "Member 'UIKRig_LimbEffector::GoalName' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbEffector, BoneName) == 0x00002C, "Member 'UIKRig_LimbEffector::BoneName' has a wrong offset!");

class UIKRig_LimbSolver final : public UIKRigSolver
{
public:
	class FName                                   RootName;
	float                                         ReachPrecision;
	EAxis                                         HingeRotationAxis;
	uint8                                         Pad_39[0x3];
	int32                                         MaxIterations;
	bool                                          bEnableLimit;
	uint8                                         Pad_41[0x3];
	float                                         MinRotationAngle;
	bool                                          bAveragePull;
	uint8                                         Pad_49[0x3];
	float                                         PullDistribution;
	float                                         ReachStepAlpha;
	bool                                          bEnableTwistCorrection;
	EAxis                                         EndBoneForwardAxis;
	uint8                                         Pad_56[0x2];
	class UIKRig_LimbEffector*                    Effector;
	uint8                                         Pad_60[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_LimbSolver">();
	}
	static class UIKRig_LimbSolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_LimbSolver>();
	}
};
static_assert(alignof(UIKRig_LimbSolver) == 0x000008, "Wrong alignment on UIKRig_LimbSolver");
static_assert(sizeof(UIKRig_LimbSolver) == 0x000088, "Wrong size on UIKRig_LimbSolver");
static_assert(offsetof(UIKRig_LimbSolver, RootName) == 0x000030, "Member 'UIKRig_LimbSolver::RootName' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, ReachPrecision) == 0x000034, "Member 'UIKRig_LimbSolver::ReachPrecision' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, HingeRotationAxis) == 0x000038, "Member 'UIKRig_LimbSolver::HingeRotationAxis' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, MaxIterations) == 0x00003C, "Member 'UIKRig_LimbSolver::MaxIterations' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, bEnableLimit) == 0x000040, "Member 'UIKRig_LimbSolver::bEnableLimit' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, MinRotationAngle) == 0x000044, "Member 'UIKRig_LimbSolver::MinRotationAngle' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, bAveragePull) == 0x000048, "Member 'UIKRig_LimbSolver::bAveragePull' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, PullDistribution) == 0x00004C, "Member 'UIKRig_LimbSolver::PullDistribution' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, ReachStepAlpha) == 0x000050, "Member 'UIKRig_LimbSolver::ReachStepAlpha' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, bEnableTwistCorrection) == 0x000054, "Member 'UIKRig_LimbSolver::bEnableTwistCorrection' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, EndBoneForwardAxis) == 0x000055, "Member 'UIKRig_LimbSolver::EndBoneForwardAxis' has a wrong offset!");
static_assert(offsetof(UIKRig_LimbSolver, Effector) == 0x000058, "Member 'UIKRig_LimbSolver::Effector' has a wrong offset!");

class UIKRig_FBIKEffector final : public UObject
{
public:
	class FName                                   GoalName;
	class FName                                   BoneName;
	float                                         StrengthAlpha;
	float                                         PullChainAlpha;
	float                                         PinRotation;
	int32                                         IndexInSolver;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_FBIKEffector">();
	}
	static class UIKRig_FBIKEffector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_FBIKEffector>();
	}
};
static_assert(alignof(UIKRig_FBIKEffector) == 0x000008, "Wrong alignment on UIKRig_FBIKEffector");
static_assert(sizeof(UIKRig_FBIKEffector) == 0x000040, "Wrong size on UIKRig_FBIKEffector");
static_assert(offsetof(UIKRig_FBIKEffector, GoalName) == 0x000028, "Member 'UIKRig_FBIKEffector::GoalName' has a wrong offset!");
static_assert(offsetof(UIKRig_FBIKEffector, BoneName) == 0x00002C, "Member 'UIKRig_FBIKEffector::BoneName' has a wrong offset!");
static_assert(offsetof(UIKRig_FBIKEffector, StrengthAlpha) == 0x000030, "Member 'UIKRig_FBIKEffector::StrengthAlpha' has a wrong offset!");
static_assert(offsetof(UIKRig_FBIKEffector, PullChainAlpha) == 0x000034, "Member 'UIKRig_FBIKEffector::PullChainAlpha' has a wrong offset!");
static_assert(offsetof(UIKRig_FBIKEffector, PinRotation) == 0x000038, "Member 'UIKRig_FBIKEffector::PinRotation' has a wrong offset!");
static_assert(offsetof(UIKRig_FBIKEffector, IndexInSolver) == 0x00003C, "Member 'UIKRig_FBIKEffector::IndexInSolver' has a wrong offset!");

class UIKRig_PBIKBoneSettings final : public UObject
{
public:
	class FName                                   bone;
	float                                         RotationStiffness;
	float                                         PositionStiffness;
	EPBIKLimitType                                X;
	uint8                                         Pad_35[0x3];
	float                                         MinX;
	float                                         MaxX;
	EPBIKLimitType                                Y;
	uint8                                         Pad_41[0x3];
	float                                         MinY;
	float                                         MaxY;
	EPBIKLimitType                                Z;
	uint8                                         Pad_4D[0x3];
	float                                         MinZ;
	float                                         MaxZ;
	bool                                          bUsePreferredAngles;
	uint8                                         Pad_59[0x7];
	struct FVector                                PreferredAngles;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_PBIKBoneSettings">();
	}
	static class UIKRig_PBIKBoneSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_PBIKBoneSettings>();
	}
};
static_assert(alignof(UIKRig_PBIKBoneSettings) == 0x000008, "Wrong alignment on UIKRig_PBIKBoneSettings");
static_assert(sizeof(UIKRig_PBIKBoneSettings) == 0x000078, "Wrong size on UIKRig_PBIKBoneSettings");
static_assert(offsetof(UIKRig_PBIKBoneSettings, bone) == 0x000028, "Member 'UIKRig_PBIKBoneSettings::bone' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, RotationStiffness) == 0x00002C, "Member 'UIKRig_PBIKBoneSettings::RotationStiffness' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, PositionStiffness) == 0x000030, "Member 'UIKRig_PBIKBoneSettings::PositionStiffness' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, X) == 0x000034, "Member 'UIKRig_PBIKBoneSettings::X' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, MinX) == 0x000038, "Member 'UIKRig_PBIKBoneSettings::MinX' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, MaxX) == 0x00003C, "Member 'UIKRig_PBIKBoneSettings::MaxX' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, Y) == 0x000040, "Member 'UIKRig_PBIKBoneSettings::Y' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, MinY) == 0x000044, "Member 'UIKRig_PBIKBoneSettings::MinY' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, MaxY) == 0x000048, "Member 'UIKRig_PBIKBoneSettings::MaxY' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, Z) == 0x00004C, "Member 'UIKRig_PBIKBoneSettings::Z' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, MinZ) == 0x000050, "Member 'UIKRig_PBIKBoneSettings::MinZ' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, MaxZ) == 0x000054, "Member 'UIKRig_PBIKBoneSettings::MaxZ' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, bUsePreferredAngles) == 0x000058, "Member 'UIKRig_PBIKBoneSettings::bUsePreferredAngles' has a wrong offset!");
static_assert(offsetof(UIKRig_PBIKBoneSettings, PreferredAngles) == 0x000060, "Member 'UIKRig_PBIKBoneSettings::PreferredAngles' has a wrong offset!");

class UIKRigPBIKSolver final : public UIKRigSolver
{
public:
	class FName                                   RootBone;
	int32                                         Iterations;
	float                                         MassMultiplier;
	bool                                          bAllowStretch;
	EPBIKRootBehavior                             RootBehavior;
	uint8                                         Pad_3E[0x2];
	struct FRootPrePullSettings                   PrePullRootSettings;
	float                                         PullChainAlpha;
	float                                         MaxAngle;
	float                                         OverRelaxation;
	bool                                          bStartSolveFromInputPose;
	uint8                                         Pad_6D[0x3];
	TArray<class UIKRig_FBIKEffector*>            Effectors;
	TArray<class UIKRig_PBIKBoneSettings*>        BoneSettings;
	uint8                                         Pad_90[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRigPBIKSolver">();
	}
	static class UIKRigPBIKSolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRigPBIKSolver>();
	}
};
static_assert(alignof(UIKRigPBIKSolver) == 0x000008, "Wrong alignment on UIKRigPBIKSolver");
static_assert(sizeof(UIKRigPBIKSolver) == 0x0000F8, "Wrong size on UIKRigPBIKSolver");
static_assert(offsetof(UIKRigPBIKSolver, RootBone) == 0x000030, "Member 'UIKRigPBIKSolver::RootBone' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, Iterations) == 0x000034, "Member 'UIKRigPBIKSolver::Iterations' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, MassMultiplier) == 0x000038, "Member 'UIKRigPBIKSolver::MassMultiplier' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, bAllowStretch) == 0x00003C, "Member 'UIKRigPBIKSolver::bAllowStretch' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, RootBehavior) == 0x00003D, "Member 'UIKRigPBIKSolver::RootBehavior' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, PrePullRootSettings) == 0x000040, "Member 'UIKRigPBIKSolver::PrePullRootSettings' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, PullChainAlpha) == 0x000060, "Member 'UIKRigPBIKSolver::PullChainAlpha' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, MaxAngle) == 0x000064, "Member 'UIKRigPBIKSolver::MaxAngle' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, OverRelaxation) == 0x000068, "Member 'UIKRigPBIKSolver::OverRelaxation' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, bStartSolveFromInputPose) == 0x00006C, "Member 'UIKRigPBIKSolver::bStartSolveFromInputPose' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, Effectors) == 0x000070, "Member 'UIKRigPBIKSolver::Effectors' has a wrong offset!");
static_assert(offsetof(UIKRigPBIKSolver, BoneSettings) == 0x000080, "Member 'UIKRigPBIKSolver::BoneSettings' has a wrong offset!");

class UIKRig_PoleSolverEffector final : public UObject
{
public:
	class FName                                   GoalName;
	class FName                                   BoneName;
	float                                         Alpha;
	uint8                                         Pad_34[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_PoleSolverEffector">();
	}
	static class UIKRig_PoleSolverEffector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_PoleSolverEffector>();
	}
};
static_assert(alignof(UIKRig_PoleSolverEffector) == 0x000008, "Wrong alignment on UIKRig_PoleSolverEffector");
static_assert(sizeof(UIKRig_PoleSolverEffector) == 0x000038, "Wrong size on UIKRig_PoleSolverEffector");
static_assert(offsetof(UIKRig_PoleSolverEffector, GoalName) == 0x000028, "Member 'UIKRig_PoleSolverEffector::GoalName' has a wrong offset!");
static_assert(offsetof(UIKRig_PoleSolverEffector, BoneName) == 0x00002C, "Member 'UIKRig_PoleSolverEffector::BoneName' has a wrong offset!");
static_assert(offsetof(UIKRig_PoleSolverEffector, Alpha) == 0x000030, "Member 'UIKRig_PoleSolverEffector::Alpha' has a wrong offset!");

class UIKRig_PoleSolver final : public UIKRigSolver
{
public:
	class FName                                   RootName;
	class FName                                   EndName;
	class UIKRig_PoleSolverEffector*              Effector;
	uint8                                         Pad_40[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_PoleSolver">();
	}
	static class UIKRig_PoleSolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_PoleSolver>();
	}
};
static_assert(alignof(UIKRig_PoleSolver) == 0x000008, "Wrong alignment on UIKRig_PoleSolver");
static_assert(sizeof(UIKRig_PoleSolver) == 0x000060, "Wrong size on UIKRig_PoleSolver");
static_assert(offsetof(UIKRig_PoleSolver, RootName) == 0x000030, "Member 'UIKRig_PoleSolver::RootName' has a wrong offset!");
static_assert(offsetof(UIKRig_PoleSolver, EndName) == 0x000034, "Member 'UIKRig_PoleSolver::EndName' has a wrong offset!");
static_assert(offsetof(UIKRig_PoleSolver, Effector) == 0x000038, "Member 'UIKRig_PoleSolver::Effector' has a wrong offset!");

class UIKRig_SetTransformEffector final : public UObject
{
public:
	bool                                          bEnablePosition;
	bool                                          bEnableRotation;
	uint8                                         Pad_2A[0x2];
	float                                         Alpha;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_SetTransformEffector">();
	}
	static class UIKRig_SetTransformEffector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_SetTransformEffector>();
	}
};
static_assert(alignof(UIKRig_SetTransformEffector) == 0x000008, "Wrong alignment on UIKRig_SetTransformEffector");
static_assert(sizeof(UIKRig_SetTransformEffector) == 0x000030, "Wrong size on UIKRig_SetTransformEffector");
static_assert(offsetof(UIKRig_SetTransformEffector, bEnablePosition) == 0x000028, "Member 'UIKRig_SetTransformEffector::bEnablePosition' has a wrong offset!");
static_assert(offsetof(UIKRig_SetTransformEffector, bEnableRotation) == 0x000029, "Member 'UIKRig_SetTransformEffector::bEnableRotation' has a wrong offset!");
static_assert(offsetof(UIKRig_SetTransformEffector, Alpha) == 0x00002C, "Member 'UIKRig_SetTransformEffector::Alpha' has a wrong offset!");

class UIKRig_SetTransform final : public UIKRigSolver
{
public:
	class FName                                   Goal;
	class FName                                   RootBone;
	class UIKRig_SetTransformEffector*            Effector;
	uint8                                         Pad_40[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IKRig_SetTransform">();
	}
	static class UIKRig_SetTransform* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIKRig_SetTransform>();
	}
};
static_assert(alignof(UIKRig_SetTransform) == 0x000008, "Wrong alignment on UIKRig_SetTransform");
static_assert(sizeof(UIKRig_SetTransform) == 0x000048, "Wrong size on UIKRig_SetTransform");
static_assert(offsetof(UIKRig_SetTransform, Goal) == 0x000030, "Member 'UIKRig_SetTransform::Goal' has a wrong offset!");
static_assert(offsetof(UIKRig_SetTransform, RootBone) == 0x000034, "Member 'UIKRig_SetTransform::RootBone' has a wrong offset!");
static_assert(offsetof(UIKRig_SetTransform, Effector) == 0x000038, "Member 'UIKRig_SetTransform::Effector' has a wrong offset!");

}
