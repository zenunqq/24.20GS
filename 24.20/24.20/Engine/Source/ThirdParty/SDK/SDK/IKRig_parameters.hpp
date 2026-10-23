#pragma once

#include "Basic.hpp"

#include "IKRig_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct IKGoalCreatorInterface_AddIKGoals final
{
public:
	TMap<class FName, struct FIKRigGoal>          OutGoals;
};
static_assert(alignof(IKGoalCreatorInterface_AddIKGoals) == 0x000008, "Wrong alignment on IKGoalCreatorInterface_AddIKGoals");
static_assert(sizeof(IKGoalCreatorInterface_AddIKGoals) == 0x000050, "Wrong size on IKGoalCreatorInterface_AddIKGoals");
static_assert(offsetof(IKGoalCreatorInterface_AddIKGoals, OutGoals) == 0x000000, "Member 'IKGoalCreatorInterface_AddIKGoals::OutGoals' has a wrong offset!");

struct IKRigComponent_SetIKRigGoal final
{
public:
	struct FIKRigGoal                             Goal;
};
static_assert(alignof(IKRigComponent_SetIKRigGoal) == 0x000010, "Wrong alignment on IKRigComponent_SetIKRigGoal");
static_assert(sizeof(IKRigComponent_SetIKRigGoal) == 0x000090, "Wrong size on IKRigComponent_SetIKRigGoal");
static_assert(offsetof(IKRigComponent_SetIKRigGoal, Goal) == 0x000000, "Member 'IKRigComponent_SetIKRigGoal::Goal' has a wrong offset!");

struct IKRigComponent_SetIKRigGoalPositionAndRotation final
{
public:
	class FName                                   GoalName;
	uint8                                         Pad_4[0x4];
	struct FVector                                Position;
	struct FQuat                                  Rotation;
	float                                         PositionAlpha;
	float                                         RotationAlpha;
	uint8                                         Pad_48[0x8];
};
static_assert(alignof(IKRigComponent_SetIKRigGoalPositionAndRotation) == 0x000010, "Wrong alignment on IKRigComponent_SetIKRigGoalPositionAndRotation");
static_assert(sizeof(IKRigComponent_SetIKRigGoalPositionAndRotation) == 0x000050, "Wrong size on IKRigComponent_SetIKRigGoalPositionAndRotation");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, GoalName) == 0x000000, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::GoalName' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, Position) == 0x000008, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::Position' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, Rotation) == 0x000020, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::Rotation' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, PositionAlpha) == 0x000040, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::PositionAlpha' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalPositionAndRotation, RotationAlpha) == 0x000044, "Member 'IKRigComponent_SetIKRigGoalPositionAndRotation::RotationAlpha' has a wrong offset!");

struct IKRigComponent_SetIKRigGoalTransform final
{
public:
	class FName                                   GoalName;
	uint8                                         Pad_4[0xC];
	struct FTransform                             Transform;
	float                                         PositionAlpha;
	float                                         RotationAlpha;
	uint8                                         Pad_78[0x8];
};
static_assert(alignof(IKRigComponent_SetIKRigGoalTransform) == 0x000010, "Wrong alignment on IKRigComponent_SetIKRigGoalTransform");
static_assert(sizeof(IKRigComponent_SetIKRigGoalTransform) == 0x000080, "Wrong size on IKRigComponent_SetIKRigGoalTransform");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, GoalName) == 0x000000, "Member 'IKRigComponent_SetIKRigGoalTransform::GoalName' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, Transform) == 0x000010, "Member 'IKRigComponent_SetIKRigGoalTransform::Transform' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, PositionAlpha) == 0x000070, "Member 'IKRigComponent_SetIKRigGoalTransform::PositionAlpha' has a wrong offset!");
static_assert(offsetof(IKRigComponent_SetIKRigGoalTransform, RotationAlpha) == 0x000074, "Member 'IKRigComponent_SetIKRigGoalTransform::RotationAlpha' has a wrong offset!");

struct IKRetargeter_GetChainSettingsFromRetargetAsset final
{
public:
	const class UIKRetargeter*                    RetargetAsset;
	class FName                                   TargetChainName;
	class FName                                   OptionalProfileName;
	struct FTargetChainSettings                   ReturnValue;
};
static_assert(alignof(IKRetargeter_GetChainSettingsFromRetargetAsset) == 0x000008, "Wrong alignment on IKRetargeter_GetChainSettingsFromRetargetAsset");
static_assert(sizeof(IKRetargeter_GetChainSettingsFromRetargetAsset) == 0x0000B8, "Wrong size on IKRetargeter_GetChainSettingsFromRetargetAsset");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetAsset, RetargetAsset) == 0x000000, "Member 'IKRetargeter_GetChainSettingsFromRetargetAsset::RetargetAsset' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetAsset, TargetChainName) == 0x000008, "Member 'IKRetargeter_GetChainSettingsFromRetargetAsset::TargetChainName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetAsset, OptionalProfileName) == 0x00000C, "Member 'IKRetargeter_GetChainSettingsFromRetargetAsset::OptionalProfileName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetAsset, ReturnValue) == 0x000010, "Member 'IKRetargeter_GetChainSettingsFromRetargetAsset::ReturnValue' has a wrong offset!");

struct IKRetargeter_GetChainSettingsFromRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;
	class FName                                   TargetChainName;
	uint8                                         Pad_FC[0x4];
	struct FTargetChainSettings                   ReturnValue;
};
static_assert(alignof(IKRetargeter_GetChainSettingsFromRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_GetChainSettingsFromRetargetProfile");
static_assert(sizeof(IKRetargeter_GetChainSettingsFromRetargetProfile) == 0x0001A8, "Wrong size on IKRetargeter_GetChainSettingsFromRetargetProfile");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_GetChainSettingsFromRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetProfile, TargetChainName) == 0x0000F8, "Member 'IKRetargeter_GetChainSettingsFromRetargetProfile::TargetChainName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainSettingsFromRetargetProfile, ReturnValue) == 0x000100, "Member 'IKRetargeter_GetChainSettingsFromRetargetProfile::ReturnValue' has a wrong offset!");

struct IKRetargeter_GetChainUsingGoalFromRetargetAsset final
{
public:
	const class UIKRetargeter*                    RetargetAsset;
	class FName                                   IKGoalName;
	uint8                                         Pad_C[0x4];
	struct FTargetChainSettings                   ReturnValue;
};
static_assert(alignof(IKRetargeter_GetChainUsingGoalFromRetargetAsset) == 0x000008, "Wrong alignment on IKRetargeter_GetChainUsingGoalFromRetargetAsset");
static_assert(sizeof(IKRetargeter_GetChainUsingGoalFromRetargetAsset) == 0x0000B8, "Wrong size on IKRetargeter_GetChainUsingGoalFromRetargetAsset");
static_assert(offsetof(IKRetargeter_GetChainUsingGoalFromRetargetAsset, RetargetAsset) == 0x000000, "Member 'IKRetargeter_GetChainUsingGoalFromRetargetAsset::RetargetAsset' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainUsingGoalFromRetargetAsset, IKGoalName) == 0x000008, "Member 'IKRetargeter_GetChainUsingGoalFromRetargetAsset::IKGoalName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetChainUsingGoalFromRetargetAsset, ReturnValue) == 0x000010, "Member 'IKRetargeter_GetChainUsingGoalFromRetargetAsset::ReturnValue' has a wrong offset!");

struct IKRetargeter_GetGlobalSettingsFromRetargetAsset final
{
public:
	const class UIKRetargeter*                    RetargetAsset;
	class FName                                   OptionalProfileName;
	struct FRetargetGlobalSettings                OutSettings;
};
static_assert(alignof(IKRetargeter_GetGlobalSettingsFromRetargetAsset) == 0x000008, "Wrong alignment on IKRetargeter_GetGlobalSettingsFromRetargetAsset");
static_assert(sizeof(IKRetargeter_GetGlobalSettingsFromRetargetAsset) == 0x000028, "Wrong size on IKRetargeter_GetGlobalSettingsFromRetargetAsset");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetAsset, RetargetAsset) == 0x000000, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetAsset::RetargetAsset' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetAsset, OptionalProfileName) == 0x000008, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetAsset::OptionalProfileName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetAsset, OutSettings) == 0x00000C, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetAsset::OutSettings' has a wrong offset!");

struct IKRetargeter_GetGlobalSettingsFromRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;
	struct FRetargetGlobalSettings                ReturnValue;
	uint8                                         Pad_114[0x4];
};
static_assert(alignof(IKRetargeter_GetGlobalSettingsFromRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_GetGlobalSettingsFromRetargetProfile");
static_assert(sizeof(IKRetargeter_GetGlobalSettingsFromRetargetProfile) == 0x000118, "Wrong size on IKRetargeter_GetGlobalSettingsFromRetargetProfile");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetGlobalSettingsFromRetargetProfile, ReturnValue) == 0x0000F8, "Member 'IKRetargeter_GetGlobalSettingsFromRetargetProfile::ReturnValue' has a wrong offset!");

struct IKRetargeter_GetRootSettingsFromRetargetAsset final
{
public:
	const class UIKRetargeter*                    RetargetAsset;
	class FName                                   OptionalProfileName;
	uint8                                         Pad_C[0x4];
	struct FTargetRootSettings                    OutSettings;
};
static_assert(alignof(IKRetargeter_GetRootSettingsFromRetargetAsset) == 0x000008, "Wrong alignment on IKRetargeter_GetRootSettingsFromRetargetAsset");
static_assert(sizeof(IKRetargeter_GetRootSettingsFromRetargetAsset) == 0x000078, "Wrong size on IKRetargeter_GetRootSettingsFromRetargetAsset");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetAsset, RetargetAsset) == 0x000000, "Member 'IKRetargeter_GetRootSettingsFromRetargetAsset::RetargetAsset' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetAsset, OptionalProfileName) == 0x000008, "Member 'IKRetargeter_GetRootSettingsFromRetargetAsset::OptionalProfileName' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetAsset, OutSettings) == 0x000010, "Member 'IKRetargeter_GetRootSettingsFromRetargetAsset::OutSettings' has a wrong offset!");

struct IKRetargeter_GetRootSettingsFromRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;
	struct FTargetRootSettings                    ReturnValue;
};
static_assert(alignof(IKRetargeter_GetRootSettingsFromRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_GetRootSettingsFromRetargetProfile");
static_assert(sizeof(IKRetargeter_GetRootSettingsFromRetargetProfile) == 0x000160, "Wrong size on IKRetargeter_GetRootSettingsFromRetargetProfile");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_GetRootSettingsFromRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_GetRootSettingsFromRetargetProfile, ReturnValue) == 0x0000F8, "Member 'IKRetargeter_GetRootSettingsFromRetargetProfile::ReturnValue' has a wrong offset!");

struct IKRetargeter_SetChainFKSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;
	struct FTargetChainFKSettings                 FKSettings;
	class FName                                   TargetChainName;
	uint8                                         Pad_114[0x4];
};
static_assert(alignof(IKRetargeter_SetChainFKSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetChainFKSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetChainFKSettingsInRetargetProfile) == 0x000118, "Wrong size on IKRetargeter_SetChainFKSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetChainFKSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetChainFKSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainFKSettingsInRetargetProfile, FKSettings) == 0x0000F8, "Member 'IKRetargeter_SetChainFKSettingsInRetargetProfile::FKSettings' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainFKSettingsInRetargetProfile, TargetChainName) == 0x000110, "Member 'IKRetargeter_SetChainFKSettingsInRetargetProfile::TargetChainName' has a wrong offset!");

struct IKRetargeter_SetChainIKSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;
	struct FTargetChainIKSettings                 IKSettings;
	class FName                                   TargetChainName;
	uint8                                         Pad_174[0x4];
};
static_assert(alignof(IKRetargeter_SetChainIKSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetChainIKSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetChainIKSettingsInRetargetProfile) == 0x000178, "Wrong size on IKRetargeter_SetChainIKSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetChainIKSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetChainIKSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainIKSettingsInRetargetProfile, IKSettings) == 0x0000F8, "Member 'IKRetargeter_SetChainIKSettingsInRetargetProfile::IKSettings' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainIKSettingsInRetargetProfile, TargetChainName) == 0x000170, "Member 'IKRetargeter_SetChainIKSettingsInRetargetProfile::TargetChainName' has a wrong offset!");

struct IKRetargeter_SetChainSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;
	struct FTargetChainSettings                   ChainSettings_0;
	class FName                                   TargetChainName;
	uint8                                         Pad_1A4[0x4];
};
static_assert(alignof(IKRetargeter_SetChainSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetChainSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetChainSettingsInRetargetProfile) == 0x0001A8, "Wrong size on IKRetargeter_SetChainSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetChainSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetChainSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainSettingsInRetargetProfile, ChainSettings_0) == 0x0000F8, "Member 'IKRetargeter_SetChainSettingsInRetargetProfile::ChainSettings_0' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainSettingsInRetargetProfile, TargetChainName) == 0x0001A0, "Member 'IKRetargeter_SetChainSettingsInRetargetProfile::TargetChainName' has a wrong offset!");

struct IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;
	struct FTargetChainSpeedPlantSettings         SpeedPlantSettings;
	class FName                                   TargetChainName;
};
static_assert(alignof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile) == 0x000110, "Wrong size on IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile, SpeedPlantSettings) == 0x0000F8, "Member 'IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile::SpeedPlantSettings' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile, TargetChainName) == 0x00010C, "Member 'IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile::TargetChainName' has a wrong offset!");

struct IKRetargeter_SetGlobalSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;
	struct FRetargetGlobalSettings                GlobalSettings_0;
	uint8                                         Pad_114[0x4];
};
static_assert(alignof(IKRetargeter_SetGlobalSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetGlobalSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetGlobalSettingsInRetargetProfile) == 0x000118, "Wrong size on IKRetargeter_SetGlobalSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetGlobalSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetGlobalSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetGlobalSettingsInRetargetProfile, GlobalSettings_0) == 0x0000F8, "Member 'IKRetargeter_SetGlobalSettingsInRetargetProfile::GlobalSettings_0' has a wrong offset!");

struct IKRetargeter_SetRootSettingsInRetargetProfile final
{
public:
	struct FRetargetProfile                       RetargetProfile;
	struct FTargetRootSettings                    RootSettings_0;
};
static_assert(alignof(IKRetargeter_SetRootSettingsInRetargetProfile) == 0x000008, "Wrong alignment on IKRetargeter_SetRootSettingsInRetargetProfile");
static_assert(sizeof(IKRetargeter_SetRootSettingsInRetargetProfile) == 0x000160, "Wrong size on IKRetargeter_SetRootSettingsInRetargetProfile");
static_assert(offsetof(IKRetargeter_SetRootSettingsInRetargetProfile, RetargetProfile) == 0x000000, "Member 'IKRetargeter_SetRootSettingsInRetargetProfile::RetargetProfile' has a wrong offset!");
static_assert(offsetof(IKRetargeter_SetRootSettingsInRetargetProfile, RootSettings_0) == 0x0000F8, "Member 'IKRetargeter_SetRootSettingsInRetargetProfile::RootSettings_0' has a wrong offset!");

}
