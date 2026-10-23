#pragma once

#include "Basic.hpp"

#include "PropertyPath_classes.hpp"
#include "PropertyPath_parameters.hpp"

namespace SDK
{

void UPropertyPathTestObject::SetFloat(float InFloat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyPathTestObject", "SetFloat");

	Params::PropertyPathTestObject_SetFloat Parms{};

	Parms.InFloat = InFloat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPropertyPathTestObject::SetStruct(const struct FPropertyPathTestStruct& InStruct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyPathTestObject", "SetStruct");

	Params::PropertyPathTestObject_SetStruct Parms{};

	Parms.InStruct = std::move(InStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPropertyPathTestObject::SetStructConstRef(const struct FPropertyPathTestStruct& InStruct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyPathTestObject", "SetStructConstRef");

	Params::PropertyPathTestObject_SetStructConstRef Parms{};

	Parms.InStruct = std::move(InStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPropertyPathTestObject::SetStructRef(const struct FPropertyPathTestStruct& InStruct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyPathTestObject", "SetStructRef");

	Params::PropertyPathTestObject_SetStructRef Parms{};

	Parms.InStruct = std::move(InStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UPropertyPathTestObject::GetFloat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyPathTestObject", "GetFloat");

	Params::PropertyPathTestObject_GetFloat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPropertyPathTestStruct UPropertyPathTestObject::GetStruct() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyPathTestObject", "GetStruct");

	Params::PropertyPathTestObject_GetStruct Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FPropertyPathTestStruct UPropertyPathTestObject::GetStructConstRef() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyPathTestObject", "GetStructConstRef");

	Params::PropertyPathTestObject_GetStructConstRef Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPropertyPathTestStruct UPropertyPathTestObject::GetStructRef() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropertyPathTestObject", "GetStructRef");

	Params::PropertyPathTestObject_GetStructRef Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
