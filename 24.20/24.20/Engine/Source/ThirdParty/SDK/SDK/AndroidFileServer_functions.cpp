#pragma once

#include "Basic.hpp"

#include "AndroidFileServer_classes.hpp"
#include "AndroidFileServer_parameters.hpp"

namespace SDK
{

EAFSActiveType UAndroidFileServerBPLibrary::IsFileServerRunning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AndroidFileServerBPLibrary", "IsFileServerRunning");

	Params::AndroidFileServerBPLibrary_IsFileServerRunning Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAndroidFileServerBPLibrary::StartFileServer(bool bUSB, bool bNetwork, int32 Port)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AndroidFileServerBPLibrary", "StartFileServer");

	Params::AndroidFileServerBPLibrary_StartFileServer Parms{};

	Parms.bUSB = bUSB;
	Parms.bNetwork = bNetwork;
	Parms.Port = Port;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAndroidFileServerBPLibrary::StopFileServer(bool bUSB, bool bNetwork)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AndroidFileServerBPLibrary", "StopFileServer");

	Params::AndroidFileServerBPLibrary_StopFileServer Parms{};

	Parms.bUSB = bUSB;
	Parms.bNetwork = bNetwork;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
