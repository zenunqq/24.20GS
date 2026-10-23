#pragma once

#include "Basic.hpp"

#include "IKRig_classes.hpp"
#include "IKRig_parameters.hpp"

namespace SDK
{

void IIKGoalCreatorInterface::AddIKGoals(TMap<class FName, struct FIKRigGoal>* OutGoals)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKGoalCreatorInterface", "AddIKGoals");

	Params::IKGoalCreatorInterface_AddIKGoals Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutGoals != nullptr)
		*OutGoals = std::move(Parms.OutGoals);
}

void UIKRigComponent::ClearAllGoals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKRigComponent", "ClearAllGoals");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UIKRigComponent::SetIKRigGoal(const struct FIKRigGoal& Goal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoal");

	Params::IKRigComponent_SetIKRigGoal Parms{};

	Parms.Goal = std::move(Goal);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UIKRigComponent::SetIKRigGoalPositionAndRotation(const class FName GoalName, const struct FVector& Position, const struct FQuat& Rotation, const float PositionAlpha, const float RotationAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalPositionAndRotation");

	Params::IKRigComponent_SetIKRigGoalPositionAndRotation Parms{};

	Parms.GoalName = GoalName;
	Parms.Position = std::move(Position);
	Parms.Rotation = std::move(Rotation);
	Parms.PositionAlpha = PositionAlpha;
	Parms.RotationAlpha = RotationAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UIKRigComponent::SetIKRigGoalTransform(const class FName GoalName, const struct FTransform& Transform, const float PositionAlpha, const float RotationAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalTransform");

	Params::IKRigComponent_SetIKRigGoalTransform Parms{};

	Parms.GoalName = GoalName;
	Parms.Transform = std::move(Transform);
	Parms.PositionAlpha = PositionAlpha;
	Parms.RotationAlpha = RotationAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const class FName TargetChainName, const class FName OptionalProfileName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "GetChainSettingsFromRetargetAsset");

	Params::IKRetargeter_GetChainSettingsFromRetargetAsset Parms{};

	Parms.RetargetAsset = RetargetAsset;
	Parms.TargetChainName = TargetChainName;
	Parms.OptionalProfileName = OptionalProfileName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile, const class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "GetChainSettingsFromRetargetProfile");

	Params::IKRetargeter_GetChainSettingsFromRetargetProfile Parms{};

	Parms.RetargetProfile = std::move(RetargetProfile);
	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	RetargetProfile = std::move(Parms.RetargetProfile);

	return Parms.ReturnValue;
}

struct FTargetChainSettings UIKRetargeter::GetChainUsingGoalFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const class FName IKGoalName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "GetChainUsingGoalFromRetargetAsset");

	Params::IKRetargeter_GetChainUsingGoalFromRetargetAsset Parms{};

	Parms.RetargetAsset = RetargetAsset;
	Parms.IKGoalName = IKGoalName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UIKRetargeter::GetGlobalSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const class FName OptionalProfileName, struct FRetargetGlobalSettings* OutSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "GetGlobalSettingsFromRetargetAsset");

	Params::IKRetargeter_GetGlobalSettingsFromRetargetAsset Parms{};

	Parms.RetargetAsset = RetargetAsset;
	Parms.OptionalProfileName = OptionalProfileName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSettings != nullptr)
		*OutSettings = std::move(Parms.OutSettings);
}

struct FRetargetGlobalSettings UIKRetargeter::GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "GetGlobalSettingsFromRetargetProfile");

	Params::IKRetargeter_GetGlobalSettingsFromRetargetProfile Parms{};

	Parms.RetargetProfile = std::move(RetargetProfile);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	RetargetProfile = std::move(Parms.RetargetProfile);

	return Parms.ReturnValue;
}

void UIKRetargeter::GetRootSettingsFromRetargetAsset(const class UIKRetargeter* RetargetAsset, const class FName OptionalProfileName, struct FTargetRootSettings* OutSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "GetRootSettingsFromRetargetAsset");

	Params::IKRetargeter_GetRootSettingsFromRetargetAsset Parms{};

	Parms.RetargetAsset = RetargetAsset;
	Parms.OptionalProfileName = OptionalProfileName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSettings != nullptr)
		*OutSettings = std::move(Parms.OutSettings);
}

struct FTargetRootSettings UIKRetargeter::GetRootSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "GetRootSettingsFromRetargetProfile");

	Params::IKRetargeter_GetRootSettingsFromRetargetProfile Parms{};

	Parms.RetargetProfile = std::move(RetargetProfile);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	RetargetProfile = std::move(Parms.RetargetProfile);

	return Parms.ReturnValue;
}

void UIKRetargeter::SetChainFKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetChainFKSettings& FKSettings, const class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "SetChainFKSettingsInRetargetProfile");

	Params::IKRetargeter_SetChainFKSettingsInRetargetProfile Parms{};

	Parms.RetargetProfile = std::move(RetargetProfile);
	Parms.FKSettings = std::move(FKSettings);
	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	RetargetProfile = std::move(Parms.RetargetProfile);
}

void UIKRetargeter::SetChainIKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetChainIKSettings& IKSettings, const class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "SetChainIKSettingsInRetargetProfile");

	Params::IKRetargeter_SetChainIKSettingsInRetargetProfile Parms{};

	Parms.RetargetProfile = std::move(RetargetProfile);
	Parms.IKSettings = std::move(IKSettings);
	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	RetargetProfile = std::move(Parms.RetargetProfile);
}

void UIKRetargeter::SetChainSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetChainSettings& ChainSettings_0, const class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "SetChainSettingsInRetargetProfile");

	Params::IKRetargeter_SetChainSettingsInRetargetProfile Parms{};

	Parms.RetargetProfile = std::move(RetargetProfile);
	Parms.ChainSettings_0 = std::move(ChainSettings_0);
	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	RetargetProfile = std::move(Parms.RetargetProfile);
}

void UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, const class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "SetChainSpeedPlantSettingsInRetargetProfile");

	Params::IKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile Parms{};

	Parms.RetargetProfile = std::move(RetargetProfile);
	Parms.SpeedPlantSettings = std::move(SpeedPlantSettings);
	Parms.TargetChainName = TargetChainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	RetargetProfile = std::move(Parms.RetargetProfile);
}

void UIKRetargeter::SetGlobalSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FRetargetGlobalSettings& GlobalSettings_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "SetGlobalSettingsInRetargetProfile");

	Params::IKRetargeter_SetGlobalSettingsInRetargetProfile Parms{};

	Parms.RetargetProfile = std::move(RetargetProfile);
	Parms.GlobalSettings_0 = std::move(GlobalSettings_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	RetargetProfile = std::move(Parms.RetargetProfile);
}

void UIKRetargeter::SetRootSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, const struct FTargetRootSettings& RootSettings_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("IKRetargeter", "SetRootSettingsInRetargetProfile");

	Params::IKRetargeter_SetRootSettingsInRetargetProfile Parms{};

	Parms.RetargetProfile = std::move(RetargetProfile);
	Parms.RootSettings_0 = std::move(RootSettings_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	RetargetProfile = std::move(Parms.RetargetProfile);
}

}
