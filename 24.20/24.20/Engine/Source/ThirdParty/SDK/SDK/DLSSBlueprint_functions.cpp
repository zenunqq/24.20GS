#pragma once

#include "Basic.hpp"

#include "DLSSBlueprint_classes.hpp"
#include "DLSSBlueprint_parameters.hpp"

namespace SDK
{

void UDLSSLibrary::EnableDLAA(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "EnableDLAA");

	Params::DLSSLibrary_EnableDLAA Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDLSSLibrary::EnableDLSS(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "EnableDLSS");

	Params::DLSSLibrary_EnableDLSS Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

EUDLSSMode UDLSSLibrary::GetDefaultDLSSMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "GetDefaultDLSSMode");

	Params::DLSSLibrary_GetDefaultDLSSMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "GetDLSSMinimumDriverVersion");

	Params::DLSSLibrary_GetDLSSMinimumDriverVersion Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (MinDriverVersionMajor != nullptr)
		*MinDriverVersionMajor = Parms.MinDriverVersionMajor;

	if (MinDriverVersionMinor != nullptr)
		*MinDriverVersionMinor = Parms.MinDriverVersionMinor;
}

EUDLSSMode UDLSSLibrary::GetDLSSMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "GetDLSSMode");

	Params::DLSSLibrary_GetDLSSMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDLSSLibrary::GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "GetDLSSModeInformation");

	Params::DLSSLibrary_GetDLSSModeInformation Parms{};

	Parms.DLSSMode = DLSSMode;
	Parms.ScreenResolution = std::move(ScreenResolution);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bIsSupported != nullptr)
		*bIsSupported = Parms.bIsSupported;

	if (OptimalScreenPercentage != nullptr)
		*OptimalScreenPercentage = Parms.OptimalScreenPercentage;

	if (bIsFixedScreenPercentage != nullptr)
		*bIsFixedScreenPercentage = Parms.bIsFixedScreenPercentage;

	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = Parms.MinScreenPercentage;

	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = Parms.MaxScreenPercentage;

	if (OptimalSharpness != nullptr)
		*OptimalSharpness = Parms.OptimalSharpness;
}

void UDLSSLibrary::GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "GetDLSSScreenPercentageRange");

	Params::DLSSLibrary_GetDLSSScreenPercentageRange Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = Parms.MinScreenPercentage;

	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = Parms.MaxScreenPercentage;
}

float UDLSSLibrary::GetDLSSSharpness()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "GetDLSSSharpness");

	Params::DLSSLibrary_GetDLSSSharpness Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<EUDLSSMode> UDLSSLibrary::GetSupportedDLSSModes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "GetSupportedDLSSModes");

	Params::DLSSLibrary_GetSupportedDLSSModes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UDLSSLibrary::IsDLAAEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "IsDLAAEnabled");

	Params::DLSSLibrary_IsDLAAEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UDLSSLibrary::IsDLSSEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "IsDLSSEnabled");

	Params::DLSSLibrary_IsDLSSEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UDLSSLibrary::IsDLSSModeSupported(EUDLSSMode DLSSMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "IsDLSSModeSupported");

	Params::DLSSLibrary_IsDLSSModeSupported Parms{};

	Parms.DLSSMode = DLSSMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UDLSSLibrary::IsDLSSSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "IsDLSSSupported");

	Params::DLSSLibrary_IsDLSSSupported Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EUDLSSSupport UDLSSLibrary::QueryDLSSSupport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "QueryDLSSSupport");

	Params::DLSSLibrary_QueryDLSSSupport Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDLSSLibrary::SetDLSSMode(class UObject* WorldContextObject, EUDLSSMode DLSSMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "SetDLSSMode");

	Params::DLSSLibrary_SetDLSSMode Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DLSSMode = DLSSMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDLSSLibrary::SetDLSSSharpness(float Sharpness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DLSSLibrary", "SetDLSSSharpness");

	Params::DLSSLibrary_SetDLSSSharpness Parms{};

	Parms.Sharpness = Sharpness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
