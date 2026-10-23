#pragma once

#include "Basic.hpp"

#include "CommonInput_classes.hpp"
#include "CommonInput_parameters.hpp"

namespace SDK
{

const TArray<class FName> UCommonInputBaseControllerData::GetRegisteredGamepads()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonInputBaseControllerData", "GetRegisteredGamepads");

	Params::CommonInputBaseControllerData_GetRegisteredGamepads Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonInputSubsystem::SetCurrentInputType(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "SetCurrentInputType");

	Params::CommonInputSubsystem_SetCurrentInputType Parms{};

	Parms.NewInputType = NewInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonInputSubsystem::SetGamepadInputType(const class FName InGamepadInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "SetGamepadInputType");

	Params::CommonInputSubsystem_SetGamepadInputType Parms{};

	Parms.InGamepadInputType = InGamepadInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const class FName UCommonInputSubsystem::GetCurrentGamepadName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentGamepadName");

	Params::CommonInputSubsystem_GetCurrentGamepadName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECommonInputType UCommonInputSubsystem::GetCurrentInputType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentInputType");

	Params::CommonInputSubsystem_GetCurrentInputType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECommonInputType UCommonInputSubsystem::GetDefaultInputType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "GetDefaultInputType");

	Params::CommonInputSubsystem_GetDefaultInputType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonInputSubsystem::IsInputMethodActive(ECommonInputType InputMethod) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "IsInputMethodActive");

	Params::CommonInputSubsystem_IsInputMethodActive Parms{};

	Parms.InputMethod = InputMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonInputSubsystem::IsUsingPointerInput() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "IsUsingPointerInput");

	Params::CommonInputSubsystem_IsUsingPointerInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonInputSubsystem::ShouldShowInputKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "ShouldShowInputKeys");

	Params::CommonInputSubsystem_ShouldShowInputKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
