#pragma once

#include "Basic.hpp"

#include "McpProfileSys_classes.hpp"
#include "McpProfileSys_parameters.hpp"

namespace SDK
{

void UMcpProfile::DeleteAllProfiles(struct FClientUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("McpProfile", "DeleteAllProfiles");

	Params::McpProfile_DeleteAllProfiles Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);
}

void UMcpProfile::DeleteProfile(struct FClientUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("McpProfile", "DeleteProfile");

	Params::McpProfile_DeleteProfile Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);
}

void UMcpProfile::LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("McpProfile", "LockProfileForWrite");

	Params::McpProfile_LockProfileForWrite Parms{};

	Parms.Code = std::move(Code);
	Parms.Timeout = Timeout;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);
}

void UMcpProfile::QueryProfile(struct FBaseUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("McpProfile", "QueryProfile");

	Params::McpProfile_QueryProfile Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);
}

void UMcpProfile::QueryPublicProfile(struct FBaseUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("McpProfile", "QueryPublicProfile");

	Params::McpProfile_QueryPublicProfile Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);
}

void UMcpProfile::UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("McpProfile", "UnlockProfileForWrite");

	Params::McpProfile_UnlockProfileForWrite Parms{};

	Parms.Code = std::move(Code);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);
}

}
