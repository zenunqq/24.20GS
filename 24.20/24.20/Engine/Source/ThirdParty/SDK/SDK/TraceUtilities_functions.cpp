#pragma once

#include "Basic.hpp"

#include "TraceUtilities_classes.hpp"
#include "TraceUtilities_parameters.hpp"

namespace SDK
{

TArray<class FString> UTraceUtilLibrary::GetAllChannels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "GetAllChannels");

	Params::TraceUtilLibrary_GetAllChannels Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FString> UTraceUtilLibrary::GetEnabledChannels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "GetEnabledChannels");

	Params::TraceUtilLibrary_GetEnabledChannels Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTraceUtilLibrary::IsChannelEnabled(const class FString& ChannelName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "IsChannelEnabled");

	Params::TraceUtilLibrary_IsChannelEnabled Parms{};

	Parms.ChannelName = std::move(ChannelName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTraceUtilLibrary::IsTracing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "IsTracing");

	Params::TraceUtilLibrary_IsTracing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTraceUtilLibrary::PauseTracing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "PauseTracing");

	Params::TraceUtilLibrary_PauseTracing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTraceUtilLibrary::ResumeTracing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "ResumeTracing");

	Params::TraceUtilLibrary_ResumeTracing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTraceUtilLibrary::StartTraceSendTo(const class FString& Target, const TArray<class FString>& Channels)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "StartTraceSendTo");

	Params::TraceUtilLibrary_StartTraceSendTo Parms{};

	Parms.Target = std::move(Target);
	Parms.Channels = std::move(Channels);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTraceUtilLibrary::StartTraceToFile(const class FString& Filename, const TArray<class FString>& Channels)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "StartTraceToFile");

	Params::TraceUtilLibrary_StartTraceToFile Parms{};

	Parms.Filename = std::move(Filename);
	Parms.Channels = std::move(Channels);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTraceUtilLibrary::StopTracing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "StopTracing");

	Params::TraceUtilLibrary_StopTracing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UTraceUtilLibrary::ToggleChannel(const class FString& ChannelName, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "ToggleChannel");

	Params::TraceUtilLibrary_ToggleChannel Parms{};

	Parms.ChannelName = std::move(ChannelName);
	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTraceUtilLibrary::TraceBookmark(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "TraceBookmark");

	Params::TraceUtilLibrary_TraceBookmark Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTraceUtilLibrary::TraceMarkRegionEnd(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "TraceMarkRegionEnd");

	Params::TraceUtilLibrary_TraceMarkRegionEnd Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTraceUtilLibrary::TraceMarkRegionStart(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TraceUtilLibrary", "TraceMarkRegionStart");

	Params::TraceUtilLibrary_TraceMarkRegionStart Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
