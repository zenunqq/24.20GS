#pragma once

#include "Basic.hpp"

#include "ControlRig_classes.hpp"
#include "ControlRig_parameters.hpp"

namespace SDK
{

struct FEulerTransform URigHierarchy::GetEulerTransformFromControlValue(const struct FRigControlValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "GetEulerTransformFromControlValue");

	Params::RigHierarchy_GetEulerTransformFromControlValue Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float URigHierarchy::GetFloatFromControlValue(const struct FRigControlValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "GetFloatFromControlValue");

	Params::RigHierarchy_GetFloatFromControlValue Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 URigHierarchy::GetIntFromControlValue(const struct FRigControlValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "GetIntFromControlValue");

	Params::RigHierarchy_GetIntFromControlValue Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator URigHierarchy::GetRotatorFromControlValue(const struct FRigControlValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "GetRotatorFromControlValue");

	Params::RigHierarchy_GetRotatorFromControlValue Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetTransformFromControlValue(const struct FRigControlValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "GetTransformFromControlValue");

	Params::RigHierarchy_GetTransformFromControlValue Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransformNoScale URigHierarchy::GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "GetTransformNoScaleFromControlValue");

	Params::RigHierarchy_GetTransformNoScaleFromControlValue Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D URigHierarchy::GetVector2DFromControlValue(const struct FRigControlValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "GetVector2DFromControlValue");

	Params::RigHierarchy_GetVector2DFromControlValue Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector URigHierarchy::GetVectorFromControlValue(const struct FRigControlValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "GetVectorFromControlValue");

	Params::RigHierarchy_GetVectorFromControlValue Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromBool(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "MakeControlValueFromBool");

	Params::RigHierarchy_MakeControlValueFromBool Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "MakeControlValueFromEulerTransform");

	Params::RigHierarchy_MakeControlValueFromEulerTransform Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromFloat(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "MakeControlValueFromFloat");

	Params::RigHierarchy_MakeControlValueFromFloat Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromInt(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "MakeControlValueFromInt");

	Params::RigHierarchy_MakeControlValueFromInt Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromRotator(const struct FRotator& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "MakeControlValueFromRotator");

	Params::RigHierarchy_MakeControlValueFromRotator Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromTransform(const struct FTransform& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "MakeControlValueFromTransform");

	Params::RigHierarchy_MakeControlValueFromTransform Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "MakeControlValueFromTransformNoScale");

	Params::RigHierarchy_MakeControlValueFromTransformNoScale Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromVector(const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "MakeControlValueFromVector");

	Params::RigHierarchy_MakeControlValueFromVector Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::MakeControlValueFromVector2D(const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RigHierarchy", "MakeControlValueFromVector2D");

	Params::RigHierarchy_MakeControlValueFromVector2D Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigHierarchy::CopyHierarchy(class URigHierarchy* InHierarchy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "CopyHierarchy");

	Params::RigHierarchy_CopyHierarchy Parms{};

	Parms.InHierarchy = InHierarchy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "CopyPose");

	Params::RigHierarchy_CopyPose Parms{};

	Parms.InHierarchy = InHierarchy;
	Parms.bCurrent = bCurrent;
	Parms.bInitial = bInitial;
	Parms.bWeights = bWeights;
	Parms.bMatchPoseInGlobalIfNeeded = bMatchPoseInGlobalIfNeeded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class URigHierarchyController* URigHierarchy::GetController(bool bCreateIfNeeded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetController");

	Params::RigHierarchy_GetController Parms{};

	Parms.bCreateIfNeeded = bCreateIfNeeded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> URigHierarchy::GetMetadataNames(const struct FRigElementKey& InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetMetadataNames");

	Params::RigHierarchy_GetMetadataNames Parms{};

	Parms.InItem = std::move(InItem);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERigMetadataType URigHierarchy::GetMetadataType(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetMetadataType");

	Params::RigHierarchy_GetMetadataType Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::RemoveAllMetadata(const struct FRigElementKey& InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "RemoveAllMetadata");

	Params::RigHierarchy_RemoveAllMetadata Parms{};

	Parms.InItem = std::move(InItem);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::RemoveMetadata(const struct FRigElementKey& InItem, class FName InMetadataName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "RemoveMetadata");

	Params::RigHierarchy_RemoveMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigHierarchy::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::ResetCurveValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "ResetCurveValues");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::ResetPoseToInitial(ERigElementType InTypeFilter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "ResetPoseToInitial");

	Params::RigHierarchy_ResetPoseToInitial Parms{};

	Parms.InTypeFilter = InTypeFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "ResetToDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SendAutoKeyEvent");

	Params::RigHierarchy_SendAutoKeyEvent Parms{};

	Parms.InElement = std::move(InElement);
	Parms.InOffsetInSeconds = InOffsetInSeconds;
	Parms.bAsynchronous = bAsynchronous;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool URigHierarchy::SetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<bool>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetBoolArrayMetadata");

	Params::RigHierarchy_SetBoolArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetBoolMetadata");

	Params::RigHierarchy_SetBoolMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigHierarchy::SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransform");

	Params::RigHierarchy_SetControlOffsetTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InTransform = std::move(InTransform);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlOffsetTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransformByIndex");

	Params::RigHierarchy_SetControlOffsetTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = std::move(InTransform);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlPreferredRotator(const struct FRigElementKey& InKey, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotator");

	Params::RigHierarchy_SetControlPreferredRotator Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InValue = std::move(InValue);
	Parms.bInitial = bInitial;
	Parms.bFixEulerFlips = bFixEulerFlips;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlPreferredRotatorByIndex(int32 InElementIndex, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotatorByIndex");

	Params::RigHierarchy_SetControlPreferredRotatorByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValue = std::move(InValue);
	Parms.bInitial = bInitial;
	Parms.bFixEulerFlips = bFixEulerFlips;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlSettings");

	Params::RigHierarchy_SetControlSettings Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InSettings = std::move(InSettings);
	Parms.bSetupUndo = bSetupUndo;
	Parms.bForce = bForce;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlSettingsByIndex(int32 InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlSettingsByIndex");

	Params::RigHierarchy_SetControlSettingsByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InSettings = std::move(InSettings);
	Parms.bSetupUndo = bSetupUndo;
	Parms.bForce = bForce;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransform");

	Params::RigHierarchy_SetControlShapeTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InTransform = std::move(InTransform);
	Parms.bInitial = bInitial;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlShapeTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransformByIndex");

	Params::RigHierarchy_SetControlShapeTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = std::move(InTransform);
	Parms.bInitial = bInitial;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlValue");

	Params::RigHierarchy_SetControlValue Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InValue = std::move(InValue);
	Parms.InValueType = InValueType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlValueByIndex(int32 InElementIndex, const struct FRigControlValue& InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlValueByIndex");

	Params::RigHierarchy_SetControlValueByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValue = std::move(InValue);
	Parms.InValueType = InValueType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlVisibility");

	Params::RigHierarchy_SetControlVisibility Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bVisibility = bVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetControlVisibilityByIndex");

	Params::RigHierarchy_SetControlVisibilityByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bVisibility = bVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetCurveValue");

	Params::RigHierarchy_SetCurveValue Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetCurveValueByIndex");

	Params::RigHierarchy_SetCurveValueByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool URigHierarchy::SetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<float>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetFloatArrayMetadata");

	Params::RigHierarchy_SetFloatArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetFloatMetadata");

	Params::RigHierarchy_SetFloatMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigHierarchy::SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetGlobalTransform");

	Params::RigHierarchy_SetGlobalTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InTransform = std::move(InTransform);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetGlobalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetGlobalTransformByIndex");

	Params::RigHierarchy_SetGlobalTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = std::move(InTransform);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool URigHierarchy::SetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<int32>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetInt32ArrayMetadata");

	Params::RigHierarchy_SetInt32ArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetInt32Metadata");

	Params::RigHierarchy_SetInt32Metadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FLinearColor>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetLinearColorArrayMetadata");

	Params::RigHierarchy_SetLinearColorArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetLinearColorMetadata");

	Params::RigHierarchy_SetLinearColorMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigHierarchy::SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetLocalTransform");

	Params::RigHierarchy_SetLocalTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InTransform = std::move(InTransform);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::SetLocalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetLocalTransformByIndex");

	Params::RigHierarchy_SetLocalTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = std::move(InTransform);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool URigHierarchy::SetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<class FName>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetNameArrayMetadata");

	Params::RigHierarchy_SetNameArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetNameMetadata");

	Params::RigHierarchy_SetNameMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetParentWeight");

	Params::RigHierarchy_SetParentWeight Parms{};

	Parms.InChild = std::move(InChild);
	Parms.InParent = std::move(InParent);
	Parms.InWeight = std::move(InWeight);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetParentWeightArray(const struct FRigElementKey& InChild, const TArray<struct FRigElementWeight>& InWeights, bool bInitial, bool bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetParentWeightArray");

	Params::RigHierarchy_SetParentWeightArray Parms{};

	Parms.InChild = std::move(InChild);
	Parms.InWeights = std::move(InWeights);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigHierarchy::SetPose_ForBlueprint(const struct FRigPose& InPose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetPose_ForBlueprint");

	Params::RigHierarchy_SetPose_ForBlueprint Parms{};

	Parms.InPose = std::move(InPose);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool URigHierarchy::SetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FQuat>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetQuatArrayMetadata");

	Params::RigHierarchy_SetQuatArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetQuatMetadata");

	Params::RigHierarchy_SetQuatMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRigElementKey>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyArrayMetadata");

	Params::RigHierarchy_SetRigElementKeyArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyMetadata");

	Params::RigHierarchy_SetRigElementKeyMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRotator>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetRotatorArrayMetadata");

	Params::RigHierarchy_SetRotatorArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetRotatorMetadata");

	Params::RigHierarchy_SetRotatorMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetTag(const struct FRigElementKey& InItem, class FName InTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetTag");

	Params::RigHierarchy_SetTag Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FTransform>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetTransformArrayMetadata");

	Params::RigHierarchy_SetTransformArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetTransformMetadata");

	Params::RigHierarchy_SetTransformMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FVector>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetVectorArrayMetadata");

	Params::RigHierarchy_SetVectorArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SetVectorMetadata");

	Params::RigHierarchy_SetVectorMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SwitchToDefaultParent");

	Params::RigHierarchy_SwitchToDefaultParent Parms{};

	Parms.InChild = std::move(InChild);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SwitchToParent");

	Params::RigHierarchy_SwitchToParent Parms{};

	Parms.InChild = std::move(InChild);
	Parms.InParent = std::move(InParent);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SwitchToWorldSpace");

	Params::RigHierarchy_SwitchToWorldSpace Parms{};

	Parms.InChild = std::move(InChild);
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigHierarchy::UnsetCurveValue(const struct FRigElementKey& InKey, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "UnsetCurveValue");

	Params::RigHierarchy_UnsetCurveValue Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigHierarchy::UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "UnsetCurveValueByIndex");

	Params::RigHierarchy_UnsetCurveValueByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool URigHierarchy::Contains_ForBlueprint(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "Contains_ForBlueprint");

	Params::RigHierarchy_Contains_ForBlueprint Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigBoneElement URigHierarchy::FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "FindBone_ForBlueprintOnly");

	Params::RigHierarchy_FindBone_ForBlueprintOnly Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlElement URigHierarchy::FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "FindControl_ForBlueprintOnly");

	Params::RigHierarchy_FindControl_ForBlueprintOnly Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigNullElement URigHierarchy::FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "FindNull_ForBlueprintOnly");

	Params::RigHierarchy_FindNull_ForBlueprintOnly Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetAllKeys_ForBlueprint(bool bTraverse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetAllKeys_ForBlueprint");

	Params::RigHierarchy_GetAllKeys_ForBlueprint Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetBoneKeys(bool bTraverse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetBoneKeys");

	Params::RigHierarchy_GetBoneKeys Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<bool> URigHierarchy::GetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetBoolArrayMetadata");

	Params::RigHierarchy_GetBoolArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::GetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetBoolMetadata");

	Params::RigHierarchy_GetBoolMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetChildren(const struct FRigElementKey& InKey, bool bRecursive) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetChildren");

	Params::RigHierarchy_GetChildren Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetControlKeys(bool bTraverse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetControlKeys");

	Params::RigHierarchy_GetControlKeys Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator URigHierarchy::GetControlPreferredRotator(const struct FRigElementKey& InKey, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotator");

	Params::RigHierarchy_GetControlPreferredRotator Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator URigHierarchy::GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotatorByIndex");

	Params::RigHierarchy_GetControlPreferredRotatorByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::GetControlValue(const struct FRigElementKey& InKey, ERigControlValueType InValueType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetControlValue");

	Params::RigHierarchy_GetControlValue Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InValueType = InValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlValue URigHierarchy::GetControlValueByIndex(int32 InElementIndex, ERigControlValueType InValueType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetControlValueByIndex");

	Params::RigHierarchy_GetControlValueByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValueType = InValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetCurveKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetCurveKeys");

	Params::RigHierarchy_GetCurveKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float URigHierarchy::GetCurveValue(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetCurveValue");

	Params::RigHierarchy_GetCurveValue Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float URigHierarchy::GetCurveValueByIndex(int32 InElementIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetCurveValueByIndex");

	Params::RigHierarchy_GetCurveValueByIndex Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchy::GetDefaultParent(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetDefaultParent");

	Params::RigHierarchy_GetDefaultParent Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchy::GetFirstParent(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetFirstParent");

	Params::RigHierarchy_GetFirstParent Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<float> URigHierarchy::GetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetFloatArrayMetadata");

	Params::RigHierarchy_GetFloatArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float URigHierarchy::GetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetFloatMetadata");

	Params::RigHierarchy_GetFloatMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransform");

	Params::RigHierarchy_GetGlobalControlOffsetTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransformByIndex");

	Params::RigHierarchy_GetGlobalControlOffsetTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransform");

	Params::RigHierarchy_GetGlobalControlShapeTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransformByIndex");

	Params::RigHierarchy_GetGlobalControlShapeTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalTransform");

	Params::RigHierarchy_GetGlobalTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalTransformByIndex");

	Params::RigHierarchy_GetGlobalTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 URigHierarchy::GetIndex_ForBlueprint(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetIndex_ForBlueprint");

	Params::RigHierarchy_GetIndex_ForBlueprint Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<int32> URigHierarchy::GetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetInt32ArrayMetadata");

	Params::RigHierarchy_GetInt32ArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 URigHierarchy::GetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetInt32Metadata");

	Params::RigHierarchy_GetInt32Metadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchy::GetKey(int32 InElementIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetKey");

	Params::RigHierarchy_GetKey Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetKeys(const TArray<int32>& InElementIndices) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetKeys");

	Params::RigHierarchy_GetKeys Parms{};

	Parms.InElementIndices = std::move(InElementIndices);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FLinearColor> URigHierarchy::GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetLinearColorArrayMetadata");

	Params::RigHierarchy_GetLinearColorArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FLinearColor URigHierarchy::GetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetLinearColorMetadata");

	Params::RigHierarchy_GetLinearColorMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = std::move(DefaultValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetLocalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransform");

	Params::RigHierarchy_GetLocalControlShapeTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransformByIndex");

	Params::RigHierarchy_GetLocalControlShapeTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetLocalTransform");

	Params::RigHierarchy_GetLocalTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetLocalTransformByIndex(int32 InElementIndex, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetLocalTransformByIndex");

	Params::RigHierarchy_GetLocalTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> URigHierarchy::GetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetNameArrayMetadata");

	Params::RigHierarchy_GetNameArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName URigHierarchy::GetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetNameMetadata");

	Params::RigHierarchy_GetNameMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetNullKeys(bool bTraverse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetNullKeys");

	Params::RigHierarchy_GetNullKeys Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 URigHierarchy::GetNumberOfParents(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetNumberOfParents");

	Params::RigHierarchy_GetNumberOfParents Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetParents(const struct FRigElementKey& InKey, bool bRecursive) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetParents");

	Params::RigHierarchy_GetParents Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bRecursive = bRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetParentTransform(const struct FRigElementKey& InKey, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetParentTransform");

	Params::RigHierarchy_GetParentTransform Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetParentTransformByIndex(int32 InElementIndex, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetParentTransformByIndex");

	Params::RigHierarchy_GetParentTransformByIndex Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementWeight URigHierarchy::GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetParentWeight");

	Params::RigHierarchy_GetParentWeight Parms{};

	Parms.InChild = std::move(InChild);
	Parms.InParent = std::move(InParent);
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementWeight> URigHierarchy::GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetParentWeightArray");

	Params::RigHierarchy_GetParentWeightArray Parms{};

	Parms.InChild = std::move(InChild);
	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigPose URigHierarchy::GetPose(bool bInitial) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetPose");

	Params::RigHierarchy_GetPose Parms{};

	Parms.bInitial = bInitial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName URigHierarchy::GetPreviousName(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetPreviousName");

	Params::RigHierarchy_GetPreviousName Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchy::GetPreviousParent(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetPreviousParent");

	Params::RigHierarchy_GetPreviousParent Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FQuat> URigHierarchy::GetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetQuatArrayMetadata");

	Params::RigHierarchy_GetQuatArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQuat URigHierarchy::GetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetQuatMetadata");

	Params::RigHierarchy_GetQuatMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = std::move(DefaultValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetReferenceKeys(bool bTraverse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetReferenceKeys");

	Params::RigHierarchy_GetReferenceKeys Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyArrayMetadata");

	Params::RigHierarchy_GetRigElementKeyArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchy::GetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyMetadata");

	Params::RigHierarchy_GetRigElementKeyMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = std::move(DefaultValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetRigidBodyKeys(bool bTraverse) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetRigidBodyKeys");

	Params::RigHierarchy_GetRigidBodyKeys Parms{};

	Parms.bTraverse = bTraverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRotator> URigHierarchy::GetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorArrayMetadata");

	Params::RigHierarchy_GetRotatorArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator URigHierarchy::GetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorMetadata");

	Params::RigHierarchy_GetRotatorMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = std::move(DefaultValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::GetSelectedKeys(ERigElementType InTypeFilter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetSelectedKeys");

	Params::RigHierarchy_GetSelectedKeys Parms{};

	Parms.InTypeFilter = InTypeFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> URigHierarchy::GetTags(const struct FRigElementKey& InItem) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetTags");

	Params::RigHierarchy_GetTags Parms{};

	Parms.InItem = std::move(InItem);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FTransform> URigHierarchy::GetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetTransformArrayMetadata");

	Params::RigHierarchy_GetTransformArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigHierarchy::GetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetTransformMetadata");

	Params::RigHierarchy_GetTransformMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = std::move(DefaultValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FVector> URigHierarchy::GetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetVectorArrayMetadata");

	Params::RigHierarchy_GetVectorArrayMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector URigHierarchy::GetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& DefaultValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "GetVectorMetadata");

	Params::RigHierarchy_GetVectorMetadata Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = std::move(DefaultValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::HasTag(const struct FRigElementKey& InItem, class FName InTag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "HasTag");

	Params::RigHierarchy_HasTag Parms{};

	Parms.InItem = std::move(InItem);
	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::IsControllerAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "IsControllerAvailable");

	Params::RigHierarchy_IsControllerAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::IsCurveValueSet(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "IsCurveValueSet");

	Params::RigHierarchy_IsCurveValueSet Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::IsCurveValueSetByIndex(int32 InElementIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "IsCurveValueSetByIndex");

	Params::RigHierarchy_IsCurveValueSetByIndex Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "IsParentedTo");

	Params::RigHierarchy_IsParentedTo Parms{};

	Parms.InChild = std::move(InChild);
	Parms.InParent = std::move(InParent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::IsProcedural(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "IsProcedural");

	Params::RigHierarchy_IsProcedural Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::IsSelected(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "IsSelected");

	Params::RigHierarchy_IsSelected Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::IsSelectedByIndex(int32 InIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "IsSelectedByIndex");

	Params::RigHierarchy_IsSelectedByIndex Parms{};

	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchy::IsValidIndex(int32 InElementIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "IsValidIndex");

	Params::RigHierarchy_IsValidIndex Parms{};

	Parms.InElementIndex = InElementIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 URigHierarchy::Num() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "Num");

	Params::RigHierarchy_Num Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchy::SortKeys(const TArray<struct FRigElementKey>& InKeys) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchy", "SortKeys");

	Params::RigHierarchy_SortKeys Parms{};

	Parms.InKeys = std::move(InKeys);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UControlRig*> UControlRig::FindControlRigs(class UObject* Outer_0, TSubclassOf<class UControlRig> OptionalClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ControlRig", "FindControlRigs");

	Params::ControlRig_FindControlRigs Parms{};

	Parms.Outer_0 = Outer_0;
	Parms.OptionalClass = OptionalClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControlRig::ClearControlSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "ClearControlSelection");

	Params::ControlRig_ClearControlSelection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControlRig::Execute(const EControlRigState State, const class FName& InEventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "Execute");

	Params::ControlRig_Execute Parms{};

	Parms.State = State;
	Parms.InEventName = InEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControlRig::ExecuteEvent(const class FName& InEventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "ExecuteEvent");

	Params::ControlRig_ExecuteEvent Parms{};

	Parms.InEventName = InEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class URigHierarchy* UControlRig::GetHierarchy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetHierarchy");

	Params::ControlRig_GetHierarchy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class URigVM* UControlRig::GetVM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetVM");

	Params::ControlRig_GetVM Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UControlRig::RequestConstruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "RequestConstruction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControlRig::RequestInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "RequestInit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControlRig::SelectControl(const class FName& InControlName, bool bSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SelectControl");

	Params::ControlRig_SelectControl Parms{};

	Parms.InControlName = InControlName;
	Parms.bSelect = bSelect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRig::SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SetAbsoluteAndDeltaTime");

	Params::ControlRig_SetAbsoluteAndDeltaTime Parms{};

	Parms.InAbsoluteTime = InAbsoluteTime;
	Parms.InDeltaTime = InDeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRig::SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SetAbsoluteTime");

	Params::ControlRig_SetAbsoluteTime Parms{};

	Parms.InAbsoluteTime = InAbsoluteTime;
	Parms.InSetDeltaTimeZero = InSetDeltaTimeZero;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRig::SetDeltaTime(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SetDeltaTime");

	Params::ControlRig_SetDeltaTime Parms{};

	Parms.InDeltaTime = InDeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRig::SetFramesPerSecond(float InFramesPerSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SetFramesPerSecond");

	Params::ControlRig_SetFramesPerSecond Parms{};

	Parms.InFramesPerSecond = InFramesPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRig::SetInteractionRig(class UControlRig* InInteractionRig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SetInteractionRig");

	Params::ControlRig_SetInteractionRig Parms{};

	Parms.InInteractionRig = InInteractionRig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRig::SetInteractionRigClass(TSubclassOf<class UControlRig> InInteractionRigClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SetInteractionRigClass");

	Params::ControlRig_SetInteractionRigClass Parms{};

	Parms.InInteractionRigClass = InInteractionRigClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UControlRig::SetVariableFromString(const class FName& InVariableName, const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SetVariableFromString");

	Params::ControlRig_SetVariableFromString Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControlRig::CanExecute() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "CanExecute");

	Params::ControlRig_CanExecute Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControlRig::ContainsEvent(const class FName& InEventName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "ContainsEvent");

	Params::ControlRig_ContainsEvent Parms{};

	Parms.InEventName = InEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTransformableControlHandle* UControlRig::CreateTransformableControlHandle(class UObject* Outer_0, const class FName& ControlName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "CreateTransformableControlHandle");

	Params::ControlRig_CreateTransformableControlHandle Parms{};

	Parms.Outer_0 = Outer_0;
	Parms.ControlName = ControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UControlRig::CurrentControlSelection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "CurrentControlSelection");

	Params::ControlRig_CurrentControlSelection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UControlRig::GetAbsoluteTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetAbsoluteTime");

	Params::ControlRig_GetAbsoluteTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UControlRig::GetCurrentFramesPerSecond() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetCurrentFramesPerSecond");

	Params::ControlRig_GetCurrentFramesPerSecond Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UControlRig::GetEvents() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetEvents");

	Params::ControlRig_GetEvents Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UControlRig::GetHostingActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetHostingActor");

	Params::ControlRig_GetHostingActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UControlRig* UControlRig::GetInteractionRig() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetInteractionRig");

	Params::ControlRig_GetInteractionRig Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSubclassOf<class UControlRig> UControlRig::GetInteractionRigClass() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetInteractionRigClass");

	Params::ControlRig_GetInteractionRigClass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UControlRig::GetScriptAccessibleVariables() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetScriptAccessibleVariables");

	Params::ControlRig_GetScriptAccessibleVariables Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UControlRig::GetSupportedEvents() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetSupportedEvents");

	Params::ControlRig_GetSupportedEvents Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UControlRig::GetVariableAsString(const class FName& InVariableName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetVariableAsString");

	Params::ControlRig_GetVariableAsString Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UControlRig::GetVariableType(const class FName& InVariableName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetVariableType");

	Params::ControlRig_GetVariableType Parms{};

	Parms.InVariableName = InVariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControlRig::IsControlSelected(const class FName& InControlName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "IsControlSelected");

	Params::ControlRig_IsControlSelected Parms{};

	Parms.InControlName = InControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControlRig::SupportsEvent(const class FName& InEventName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SupportsEvent");

	Params::ControlRig_SupportsEvent Parms{};

	Parms.InEventName = InEventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UControlRigComponent::AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedCompleteSkeletalMesh");

	Params::ControlRigComponent_AddMappedCompleteSkeletalMesh Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedComponents");

	Params::ControlRigComponent_AddMappedComponents Parms{};

	Parms.Components = std::move(Components);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::AddMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedElements");

	Params::ControlRigComponent_AddMappedElements Parms{};

	Parms.NewMappedElements = std::move(NewMappedElements);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedSkeletalMesh");

	Params::ControlRigComponent_AddMappedSkeletalMesh Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.Bones = std::move(Bones);
	Parms.Curves = std::move(Curves);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UControlRigComponent::CanExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "CanExecute");

	Params::ControlRigComponent_CanExecute Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UControlRigComponent::ClearMappedElements()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "ClearMappedElements");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UControlRigComponent::DoesElementExist(class FName Name_0, ERigElementType ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "DoesElementExist");

	Params::ControlRigComponent_DoesElementExist Parms{};

	Parms.Name_0 = Name_0;
	Parms.ElementType = ElementType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetBoneTransform(class FName BoneName, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetBoneTransform");

	Params::ControlRigComponent_GetBoneTransform Parms{};

	Parms.BoneName = BoneName;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControlRigComponent::GetControlBool(class FName ControlName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlBool");

	Params::ControlRigComponent_GetControlBool Parms{};

	Parms.ControlName = ControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UControlRigComponent::GetControlFloat(class FName ControlName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlFloat");

	Params::ControlRigComponent_GetControlFloat Parms{};

	Parms.ControlName = ControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UControlRigComponent::GetControlInt(class FName ControlName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlInt");

	Params::ControlRigComponent_GetControlInt Parms{};

	Parms.ControlName = ControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetControlOffset(class FName ControlName, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlOffset");

	Params::ControlRigComponent_GetControlOffset Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UControlRigComponent::GetControlPosition(class FName ControlName, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlPosition");

	Params::ControlRigComponent_GetControlPosition Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UControlRig* UControlRigComponent::GetControlRig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlRig");

	Params::ControlRigComponent_GetControlRig Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator UControlRigComponent::GetControlRotator(class FName ControlName, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlRotator");

	Params::ControlRigComponent_GetControlRotator Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UControlRigComponent::GetControlScale(class FName ControlName, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlScale");

	Params::ControlRigComponent_GetControlScale Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetControlTransform(class FName ControlName, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlTransform");

	Params::ControlRigComponent_GetControlTransform Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D UControlRigComponent::GetControlVector2D(class FName ControlName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetControlVector2D");

	Params::ControlRigComponent_GetControlVector2D Parms{};

	Parms.ControlName = ControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UControlRigComponent::GetElementNames(ERigElementType ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetElementNames");

	Params::ControlRigComponent_GetElementNames Parms{};

	Parms.ElementType = ElementType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetInitialBoneTransform(class FName BoneName, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetInitialBoneTransform");

	Params::ControlRigComponent_GetInitialBoneTransform Parms{};

	Parms.BoneName = BoneName;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetInitialSpaceTransform(class FName SpaceName, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetInitialSpaceTransform");

	Params::ControlRigComponent_GetInitialSpaceTransform Parms{};

	Parms.SpaceName = SpaceName;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetSpaceTransform(class FName SpaceName, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetSpaceTransform");

	Params::ControlRigComponent_GetSpaceTransform Parms{};

	Parms.SpaceName = SpaceName;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UControlRigComponent::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "Initialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::OnPostConstruction(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPostConstruction");

	Params::ControlRigComponent_OnPostConstruction Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::OnPostForwardsSolve(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPostForwardsSolve");

	Params::ControlRigComponent_OnPostForwardsSolve Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::OnPostInitialize(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPostInitialize");

	Params::ControlRigComponent_OnPostInitialize Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::OnPreConstruction(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPreConstruction");

	Params::ControlRigComponent_OnPreConstruction Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::OnPreForwardsSolve(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPreForwardsSolve");

	Params::ControlRigComponent_OnPreForwardsSolve Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::OnPreInitialize(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPreInitialize");

	Params::ControlRigComponent_OnPreInitialize Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetBoneInitialTransformsFromSkeletalMesh");

	Params::ControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh Parms{};

	Parms.InSkeletalMesh = InSkeletalMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetBoneTransform(class FName BoneName, const struct FTransform& Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetBoneTransform");

	Params::ControlRigComponent_SetBoneTransform Parms{};

	Parms.BoneName = BoneName;
	Parms.Transform = std::move(Transform);
	Parms.Space = Space;
	Parms.Weight = Weight;
	Parms.bPropagateToChildren = bPropagateToChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlBool(class FName ControlName, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlBool");

	Params::ControlRigComponent_SetControlBool Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlFloat(class FName ControlName, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlFloat");

	Params::ControlRigComponent_SetControlFloat Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlInt(class FName ControlName, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlInt");

	Params::ControlRigComponent_SetControlInt Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlOffset(class FName ControlName, const struct FTransform& OffsetTransform, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlOffset");

	Params::ControlRigComponent_SetControlOffset Parms{};

	Parms.ControlName = ControlName;
	Parms.OffsetTransform = std::move(OffsetTransform);
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlPosition(class FName ControlName, const struct FVector& Value, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlPosition");

	Params::ControlRigComponent_SetControlPosition Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = std::move(Value);
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlRigClass(TSubclassOf<class UControlRig> InControlRigClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlRigClass");

	Params::ControlRigComponent_SetControlRigClass Parms{};

	Parms.InControlRigClass = InControlRigClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlRotator(class FName ControlName, const struct FRotator& Value, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlRotator");

	Params::ControlRigComponent_SetControlRotator Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = std::move(Value);
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlScale(class FName ControlName, const struct FVector& Value, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlScale");

	Params::ControlRigComponent_SetControlScale Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = std::move(Value);
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlTransform(class FName ControlName, const struct FTransform& Value, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlTransform");

	Params::ControlRigComponent_SetControlTransform Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = std::move(Value);
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetControlVector2D(class FName ControlName, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetControlVector2D");

	Params::ControlRigComponent_SetControlVector2D Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetInitialBoneTransform(class FName BoneName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetInitialBoneTransform");

	Params::ControlRigComponent_SetInitialBoneTransform Parms{};

	Parms.BoneName = BoneName;
	Parms.InitialTransform = std::move(InitialTransform);
	Parms.Space = Space;
	Parms.bPropagateToChildren = bPropagateToChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetInitialSpaceTransform(class FName SpaceName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetInitialSpaceTransform");

	Params::ControlRigComponent_SetInitialSpaceTransform Parms{};

	Parms.SpaceName = SpaceName;
	Parms.InitialTransform = std::move(InitialTransform);
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetMappedElements");

	Params::ControlRigComponent_SetMappedElements Parms{};

	Parms.NewMappedElements = std::move(NewMappedElements);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::SetObjectBinding(class UObject* InObjectToBind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "SetObjectBinding");

	Params::ControlRigComponent_SetObjectBinding Parms{};

	Parms.InObjectToBind = InObjectToBind;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigComponent::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "Update");

	Params::ControlRigComponent_Update Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UControlRigComponent::GetAbsoluteTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "GetAbsoluteTime");

	Params::ControlRigComponent_GetAbsoluteTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AControlRigControlActor::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigControlActor", "Clear");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AControlRigControlActor::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigControlActor", "Refresh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AControlRigControlActor::ResetControlActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigControlActor", "ResetControlActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AControlRigShapeActor::OnEnabledChanged(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "OnEnabledChanged");

	Params::ControlRigShapeActor_OnEnabledChanged Parms{};

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void AControlRigShapeActor::OnHoveredChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "OnHoveredChanged");

	Params::ControlRigShapeActor_OnHoveredChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void AControlRigShapeActor::OnManipulatingChanged(bool bIsManipulating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "OnManipulatingChanged");

	Params::ControlRigShapeActor_OnManipulatingChanged Parms{};

	Parms.bIsManipulating = bIsManipulating;

	UObject::ProcessEvent(Func, &Parms);
}

void AControlRigShapeActor::OnSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "OnSelectionChanged");

	Params::ControlRigShapeActor_OnSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void AControlRigShapeActor::OnTransformChanged(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "OnTransformChanged");

	Params::ControlRigShapeActor_OnTransformChanged Parms{};

	Parms.NewTransform = std::move(NewTransform);

	UObject::ProcessEvent(Func, &Parms);
}

void AControlRigShapeActor::SetEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "SetEnabled");

	Params::ControlRigShapeActor_SetEnabled Parms{};

	Parms.bInEnabled = bInEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AControlRigShapeActor::SetGlobalTransform(const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "SetGlobalTransform");

	Params::ControlRigShapeActor_SetGlobalTransform Parms{};

	Parms.InTransform = std::move(InTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AControlRigShapeActor::SetHovered(bool bInHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "SetHovered");

	Params::ControlRigShapeActor_SetHovered Parms{};

	Parms.bInHovered = bInHovered;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AControlRigShapeActor::SetSelectable(bool bInSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "SetSelectable");

	Params::ControlRigShapeActor_SetSelectable Parms{};

	Parms.bInSelectable = bInSelectable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AControlRigShapeActor::SetSelected(bool bInSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "SetSelected");

	Params::ControlRigShapeActor_SetSelected Parms{};

	Parms.bInSelected = bInSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FTransform AControlRigShapeActor::GetGlobalTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "GetGlobalTransform");

	Params::ControlRigShapeActor_GetGlobalTransform Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AControlRigShapeActor::IsEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "IsEnabled");

	Params::ControlRigShapeActor_IsEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AControlRigShapeActor::IsHovered() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "IsHovered");

	Params::ControlRigShapeActor_IsHovered Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AControlRigShapeActor::IsSelectedInEditor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigShapeActor", "IsSelectedInEditor");

	Params::ControlRigShapeActor_IsSelectedInEditor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchyController::AddAnimationChannel_ForBlueprint(class FName InName, const struct FRigElementKey& InParentControl, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "AddAnimationChannel_ForBlueprint");

	Params::RigHierarchyController_AddAnimationChannel_ForBlueprint Parms{};

	Parms.InName = InName;
	Parms.InParentControl = std::move(InParentControl);
	Parms.InSettings = std::move(InSettings);
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchyController::AddBone(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "AddBone");

	Params::RigHierarchyController_AddBone Parms{};

	Parms.InName = InName;
	Parms.InParent = std::move(InParent);
	Parms.InTransform = std::move(InTransform);
	Parms.bTransformInGlobal = bTransformInGlobal;
	Parms.InBoneType = InBoneType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchyController::AddControl_ForBlueprint(class FName InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "AddControl_ForBlueprint");

	Params::RigHierarchyController_AddControl_ForBlueprint Parms{};

	Parms.InName = InName;
	Parms.InParent = std::move(InParent);
	Parms.InSettings = std::move(InSettings);
	Parms.InValue = std::move(InValue);
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchyController::AddCurve(class FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "AddCurve");

	Params::RigHierarchyController_AddCurve Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchyController::AddNull(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "AddNull");

	Params::RigHierarchyController_AddNull Parms{};

	Parms.InName = InName;
	Parms.InParent = std::move(InParent);
	Parms.InTransform = std::move(InTransform);
	Parms.bTransformInGlobal = bTransformInGlobal;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchyController::AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "AddParent");

	Params::RigHierarchyController_AddParent Parms{};

	Parms.InChild = std::move(InChild);
	Parms.InParent = std::move(InParent);
	Parms.InWeight = InWeight;
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchyController::AddRigidBody(class FName InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "AddRigidBody");

	Params::RigHierarchyController_AddRigidBody Parms{};

	Parms.InName = InName;
	Parms.InParent = std::move(InParent);
	Parms.InSettings = std::move(InSettings);
	Parms.InLocalTransform = std::move(InLocalTransform);
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchyController::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "ClearSelection");

	Params::RigHierarchyController_ClearSelection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchyController::DeselectElement(const struct FRigElementKey& InKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "DeselectElement");

	Params::RigHierarchyController_DeselectElement Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchyController::DuplicateElements(const TArray<struct FRigElementKey>& InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "DuplicateElements");

	Params::RigHierarchyController_DuplicateElements Parms{};

	Parms.InKeys = std::move(InKeys);
	Parms.bSelectNewElements = bSelectNewElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchyController::ImportBones(class USkeleton* InSkeleton, class FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "ImportBones");

	Params::RigHierarchyController_ImportBones Parms{};

	Parms.InSkeleton = InSkeleton;
	Parms.InNameSpace = InNameSpace;
	Parms.bReplaceExistingBones = bReplaceExistingBones;
	Parms.bRemoveObsoleteBones = bRemoveObsoleteBones;
	Parms.bSelectBones = bSelectBones;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchyController::ImportCurves(class USkeleton* InSkeleton, class FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "ImportCurves");

	Params::RigHierarchyController_ImportCurves Parms{};

	Parms.InSkeleton = InSkeleton;
	Parms.InNameSpace = InNameSpace;
	Parms.bSelectCurves = bSelectCurves;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchyController::ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "ImportFromText");

	Params::RigHierarchyController_ImportFromText Parms{};

	Parms.InContent = std::move(InContent);
	Parms.bReplaceExistingElements = bReplaceExistingElements;
	Parms.bSelectNewElements = bSelectNewElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigElementKey> URigHierarchyController::MirrorElements(const TArray<struct FRigElementKey>& InKeys, const struct FRigMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "MirrorElements");

	Params::RigHierarchyController_MirrorElements Parms{};

	Parms.InKeys = std::move(InKeys);
	Parms.InSettings = std::move(InSettings);
	Parms.bSelectNewElements = bSelectNewElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchyController::RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "RemoveAllParents");

	Params::RigHierarchyController_RemoveAllParents Parms{};

	Parms.InChild = std::move(InChild);
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchyController::RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "RemoveElement");

	Params::RigHierarchyController_RemoveElement Parms{};

	Parms.InElement = std::move(InElement);
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchyController::RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "RemoveParent");

	Params::RigHierarchyController_RemoveParent Parms{};

	Parms.InChild = std::move(InChild);
	Parms.InParent = std::move(InParent);
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigElementKey URigHierarchyController::RenameElement(const struct FRigElementKey& InElement, class FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "RenameElement");

	Params::RigHierarchyController_RenameElement Parms{};

	Parms.InElement = std::move(InElement);
	Parms.InName = InName;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.bClearSelection = bClearSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchyController::SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "SelectElement");

	Params::RigHierarchyController_SelectElement Parms{};

	Parms.InKey = std::move(InKey);
	Parms.bSelect = bSelect;
	Parms.bClearSelection = bClearSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName URigHierarchyController::SetDisplayName(const struct FRigElementKey& InControl, class FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "SetDisplayName");

	Params::RigHierarchyController_SetDisplayName Parms{};

	Parms.InControl = std::move(InControl);
	Parms.InDisplayName = InDisplayName;
	Parms.bRenameElement = bRenameElement;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigHierarchyController::SetHierarchy(class URigHierarchy* InHierarchy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "SetHierarchy");

	Params::RigHierarchyController_SetHierarchy Parms{};

	Parms.InHierarchy = InHierarchy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool URigHierarchyController::SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "SetParent");

	Params::RigHierarchyController_SetParent Parms{};

	Parms.InChild = std::move(InChild);
	Parms.InParent = std::move(InParent);
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchyController::SetSelection(const TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "SetSelection");

	Params::RigHierarchyController_SetSelection Parms{};

	Parms.InKeys = std::move(InKeys);
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString URigHierarchyController::ExportSelectionToText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "ExportSelectionToText");

	Params::RigHierarchyController_ExportSelectionToText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString URigHierarchyController::ExportToText(const TArray<struct FRigElementKey>& InKeys) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "ExportToText");

	Params::RigHierarchyController_ExportToText Parms{};

	Parms.InKeys = std::move(InKeys);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigControlSettings URigHierarchyController::GetControlSettings(const struct FRigElementKey& InKey) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "GetControlSettings");

	Params::RigHierarchyController_GetControlSettings Parms{};

	Parms.InKey = std::move(InKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class URigHierarchy* URigHierarchyController::GetHierarchy() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "GetHierarchy");

	Params::RigHierarchyController_GetHierarchy Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigHierarchyController::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigHierarchyController", "SetControlSettings");

	Params::RigHierarchyController_SetControlSettings Parms{};

	Parms.InKey = std::move(InKey);
	Parms.InSettings = std::move(InSettings);
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UControlRigPoseAsset::GetCurrentPose(class UControlRig* InControlRig, struct FControlRigControlPose* OutPose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigPoseAsset", "GetCurrentPose");

	Params::ControlRigPoseAsset_GetCurrentPose Parms{};

	Parms.InControlRig = InControlRig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPose != nullptr)
		*OutPose = std::move(Parms.OutPose);
}

void UControlRigPoseAsset::PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigPoseAsset", "PastePose");

	Params::ControlRigPoseAsset_PastePose Parms{};

	Parms.InControlRig = InControlRig;
	Parms.bDoKey = bDoKey;
	Parms.bDoMirror = bDoMirror;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigPoseAsset::ReplaceControlName(const class FName& CurrentName, const class FName& NewName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigPoseAsset", "ReplaceControlName");

	Params::ControlRigPoseAsset_ReplaceControlName Parms{};

	Parms.CurrentName = CurrentName;
	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigPoseAsset::SavePose(class UControlRig* InControlRig, bool bUseAll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigPoseAsset", "SavePose");

	Params::ControlRigPoseAsset_SavePose Parms{};

	Parms.InControlRig = InControlRig;
	Parms.bUseAll = bUseAll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControlRigPoseAsset::SelectControls(class UControlRig* InControlRig, bool bDoMirror)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigPoseAsset", "SelectControls");

	Params::ControlRigPoseAsset_SelectControls Parms{};

	Parms.InControlRig = InControlRig;
	Parms.bDoMirror = bDoMirror;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UControlRigPoseAsset::DoesMirrorMatch(class UControlRig* ControlRig, const class FName& ControlName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigPoseAsset", "DoesMirrorMatch");

	Params::ControlRigPoseAsset_DoesMirrorMatch Parms{};

	Parms.ControlRig = ControlRig;
	Parms.ControlName = ControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FName> UControlRigPoseAsset::GetControlNames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigPoseAsset", "GetControlNames");

	Params::ControlRigPoseAsset_GetControlNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControlRigWorkflowOptions::EnsureAtLeastOneRigElementSelected() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigWorkflowOptions", "EnsureAtLeastOneRigElementSelected");

	Params::ControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FRigVMUserWorkflow> UControlRigTransformWorkflowOptions::ProvideWorkflows(const class UObject* InSubject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigTransformWorkflowOptions", "ProvideWorkflows");

	Params::ControlRigTransformWorkflowOptions_ProvideWorkflows Parms{};

	Parms.InSubject = InSubject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
