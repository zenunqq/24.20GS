#pragma once

#include "Basic.hpp"

#include "AndroidPermission_classes.hpp"
#include "AndroidPermission_parameters.hpp"

namespace SDK
{

class UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::AcquirePermissions(const TArray<class FString>& Permissions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AndroidPermissionFunctionLibrary", "AcquirePermissions");

	Params::AndroidPermissionFunctionLibrary_AcquirePermissions Parms{};

	Parms.Permissions = std::move(Permissions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAndroidPermissionFunctionLibrary::CheckPermission(const class FString& Permission)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AndroidPermissionFunctionLibrary", "CheckPermission");

	Params::AndroidPermissionFunctionLibrary_CheckPermission Parms{};

	Parms.Permission = std::move(Permission);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
