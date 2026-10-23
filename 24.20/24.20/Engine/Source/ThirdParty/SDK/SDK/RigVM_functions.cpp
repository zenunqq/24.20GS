#pragma once

#include "Basic.hpp"

#include "RigVM_classes.hpp"
#include "RigVM_parameters.hpp"

namespace SDK
{

int32 URigVM::AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "AddRigVMFunction");

	Params::RigVM_AddRigVMFunction Parms{};

	Parms.InRigVMStruct = InRigVMStruct;
	Parms.InMethodName = InMethodName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigVM::Execute(const class FName& InEntryName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "Execute");

	Params::RigVM_Execute Parms{};

	Parms.InEntryName = InEntryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigVM::GetParameterValueBool(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueBool");

	Params::RigVM_GetParameterValueBool Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double URigVM::GetParameterValueDouble(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueDouble");

	Params::RigVM_GetParameterValueDouble Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float URigVM::GetParameterValueFloat(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueFloat");

	Params::RigVM_GetParameterValueFloat Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 URigVM::GetParameterValueInt(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueInt");

	Params::RigVM_GetParameterValueInt Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName URigVM::GetParameterValueName(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueName");

	Params::RigVM_GetParameterValueName Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQuat URigVM::GetParameterValueQuat(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueQuat");

	Params::RigVM_GetParameterValueQuat Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString URigVM::GetParameterValueString(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueString");

	Params::RigVM_GetParameterValueString Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTransform URigVM::GetParameterValueTransform(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueTransform");

	Params::RigVM_GetParameterValueTransform Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector URigVM::GetParameterValueVector(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector");

	Params::RigVM_GetParameterValueVector Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector2D URigVM::GetParameterValueVector2D(const class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector2D");

	Params::RigVM_GetParameterValueVector2D Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigVM::SetParameterValueBool(const class FName& InParameterName, bool InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueBool");

	Params::RigVM_SetParameterValueBool Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVM::SetParameterValueDouble(const class FName& InParameterName, double InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueDouble");

	Params::RigVM_SetParameterValueDouble Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVM::SetParameterValueFloat(const class FName& InParameterName, float InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueFloat");

	Params::RigVM_SetParameterValueFloat Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVM::SetParameterValueInt(const class FName& InParameterName, int32 InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueInt");

	Params::RigVM_SetParameterValueInt Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVM::SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueName");

	Params::RigVM_SetParameterValueName Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVM::SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueQuat");

	Params::RigVM_SetParameterValueQuat Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = std::move(InValue);
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVM::SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueString");

	Params::RigVM_SetParameterValueString Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = std::move(InValue);
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVM::SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueTransform");

	Params::RigVM_SetParameterValueTransform Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = std::move(InValue);
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVM::SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueVector");

	Params::RigVM_SetParameterValueVector Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = std::move(InValue);
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVM::SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "SetParameterValueVector2D");

	Params::RigVM_SetParameterValueVector2D Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = std::move(InValue);
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString URigVM::GetRigVMFunctionName(int32 InFunctionIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetRigVMFunctionName");

	Params::RigVM_GetRigVMFunctionName Parms{};

	Parms.InFunctionIndex = InFunctionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRigVMStatistics URigVM::GetStatistics() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVM", "GetStatistics");

	Params::RigVM_GetStatistics Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URigVMUserWorkflowOptions::ReportError(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "ReportError");

	Params::RigVMUserWorkflowOptions_ReportError Parms{};

	Parms.InMessage = std::move(InMessage);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVMUserWorkflowOptions::ReportInfo(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "ReportInfo");

	Params::RigVMUserWorkflowOptions_ReportInfo Parms{};

	Parms.InMessage = std::move(InMessage);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URigVMUserWorkflowOptions::ReportWarning(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "ReportWarning");

	Params::RigVMUserWorkflowOptions_ReportWarning Parms{};

	Parms.InMessage = std::move(InMessage);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool URigVMUserWorkflowOptions::IsValid() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "IsValid");

	Params::RigVMUserWorkflowOptions_IsValid Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URigVMUserWorkflowOptions::RequiresDialog() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "RequiresDialog");

	Params::RigVMUserWorkflowOptions_RequiresDialog Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
