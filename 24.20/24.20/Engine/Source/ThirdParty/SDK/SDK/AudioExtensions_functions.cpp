#pragma once

#include "Basic.hpp"

#include "AudioExtensions_classes.hpp"
#include "AudioExtensions_parameters.hpp"

namespace SDK
{

void IAudioParameterControllerInterface::ResetParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "ResetParameters");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetBoolArrayParameter(class FName InName, const TArray<bool>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolArrayParameter");

	Params::AudioParameterControllerInterface_SetBoolArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetBoolParameter(class FName InName, bool InBool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolParameter");

	Params::AudioParameterControllerInterface_SetBoolParameter Parms{};

	Parms.InName = InName;
	Parms.InBool = InBool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetFloatArrayParameter(class FName InName, const TArray<float>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatArrayParameter");

	Params::AudioParameterControllerInterface_SetFloatArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetFloatParameter(class FName InName, float InFloat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatParameter");

	Params::AudioParameterControllerInterface_SetFloatParameter Parms{};

	Parms.InName = InName;
	Parms.InFloat = InFloat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetIntArrayParameter(class FName InName, const TArray<int32>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntArrayParameter");

	Params::AudioParameterControllerInterface_SetIntArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetIntParameter(class FName InName, int32 inInt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntParameter");

	Params::AudioParameterControllerInterface_SetIntParameter Parms{};

	Parms.InName = InName;
	Parms.inInt = inInt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetObjectArrayParameter(class FName InName, const TArray<class UObject*>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectArrayParameter");

	Params::AudioParameterControllerInterface_SetObjectArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetObjectParameter(class FName InName, class UObject* InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectParameter");

	Params::AudioParameterControllerInterface_SetObjectParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetParameters_Blueprint(const TArray<struct FAudioParameter>& InParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetParameters_Blueprint");

	Params::AudioParameterControllerInterface_SetParameters_Blueprint Parms{};

	Parms.InParameters = std::move(InParameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetStringArrayParameter(class FName InName, const TArray<class FString>& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringArrayParameter");

	Params::AudioParameterControllerInterface_SetStringArrayParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetStringParameter(class FName InName, const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringParameter");

	Params::AudioParameterControllerInterface_SetStringParameter Parms{};

	Parms.InName = InName;
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IAudioParameterControllerInterface::SetTriggerParameter(class FName InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetTriggerParameter");

	Params::AudioParameterControllerInterface_SetTriggerParameter Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
