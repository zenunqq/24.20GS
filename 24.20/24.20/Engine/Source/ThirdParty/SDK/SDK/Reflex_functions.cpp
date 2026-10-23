#pragma once

#include "Basic.hpp"

#include "Reflex_classes.hpp"
#include "Reflex_parameters.hpp"

namespace SDK
{

bool UReflexBlueprintLibrary::GetFlashIndicatorEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ReflexBlueprintLibrary", "GetFlashIndicatorEnabled");

	Params::ReflexBlueprintLibrary_GetFlashIndicatorEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UReflexBlueprintLibrary::GetGameLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ReflexBlueprintLibrary", "GetGameLatencyInMs");

	Params::ReflexBlueprintLibrary_GetGameLatencyInMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UReflexBlueprintLibrary::GetGameToRenderLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ReflexBlueprintLibrary", "GetGameToRenderLatencyInMs");

	Params::ReflexBlueprintLibrary_GetGameToRenderLatencyInMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UReflexBlueprintLibrary::GetReflexAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ReflexBlueprintLibrary", "GetReflexAvailable");

	Params::ReflexBlueprintLibrary_GetReflexAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EReflexMode UReflexBlueprintLibrary::GetReflexMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ReflexBlueprintLibrary", "GetReflexMode");

	Params::ReflexBlueprintLibrary_GetReflexMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UReflexBlueprintLibrary::GetRenderLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ReflexBlueprintLibrary", "GetRenderLatencyInMs");

	Params::ReflexBlueprintLibrary_GetRenderLatencyInMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UReflexBlueprintLibrary::SetFlashIndicatorEnabled(const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ReflexBlueprintLibrary", "SetFlashIndicatorEnabled");

	Params::ReflexBlueprintLibrary_SetFlashIndicatorEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UReflexBlueprintLibrary::SetReflexMode(const EReflexMode Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ReflexBlueprintLibrary", "SetReflexMode");

	Params::ReflexBlueprintLibrary_SetReflexMode Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
