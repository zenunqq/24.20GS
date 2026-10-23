#pragma once

#include "Basic.hpp"

#include "StructUtilsEngine_classes.hpp"
#include "StructUtilsEngine_parameters.hpp"

namespace SDK
{

bool UStructUtilsFunctionLibrary::EqualEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "EqualEqual_InstancedStruct");

	Params::StructUtilsFunctionLibrary_EqualEqual_InstancedStruct Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UStructUtilsFunctionLibrary::GetInstancedStructValue(EStructUtilsResult* ExecResult, const struct FInstancedStruct& InstancedStruct, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "GetInstancedStructValue");

	Params::StructUtilsFunctionLibrary_GetInstancedStructValue Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ExecResult != nullptr)
		*ExecResult = Parms.ExecResult;

	if (Value != nullptr)
		*Value = Parms.Value;
}

EStructUtilsResult UStructUtilsFunctionLibrary::IsInstancedStructValid(const struct FInstancedStruct& InstancedStruct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "IsInstancedStructValid");

	Params::StructUtilsFunctionLibrary_IsInstancedStructValid Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UStructUtilsFunctionLibrary::IsValid_InstancedStruct(const struct FInstancedStruct& InstancedStruct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "IsValid_InstancedStruct");

	Params::StructUtilsFunctionLibrary_IsValid_InstancedStruct Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FInstancedStruct UStructUtilsFunctionLibrary::MakeInstancedStruct(const int32& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "MakeInstancedStruct");

	Params::StructUtilsFunctionLibrary_MakeInstancedStruct Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UStructUtilsFunctionLibrary::NotEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "NotEqual_InstancedStruct");

	Params::StructUtilsFunctionLibrary_NotEqual_InstancedStruct Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UStructUtilsFunctionLibrary::Reset(struct FInstancedStruct& InstancedStruct, const class UScriptStruct* StructType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "Reset");

	Params::StructUtilsFunctionLibrary_Reset Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);
	Parms.StructType = StructType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InstancedStruct = std::move(Parms.InstancedStruct);
}

void UStructUtilsFunctionLibrary::SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, const int32& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "SetInstancedStructValue");

	Params::StructUtilsFunctionLibrary_SetInstancedStructValue Parms{};

	Parms.InstancedStruct = std::move(InstancedStruct);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InstancedStruct = std::move(Parms.InstancedStruct);
}

}
