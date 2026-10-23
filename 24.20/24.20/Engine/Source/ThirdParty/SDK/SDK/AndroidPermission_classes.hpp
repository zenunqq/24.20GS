#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UAndroidPermissionCallbackProxy final : public UObject
{
public:
	TMulticastInlineDelegate<void(TArray<class FString>& Permissions, TArray<bool>& GrantResults)> OnPermissionsGrantedDynamicDelegate;
	uint8                                         Pad_38[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AndroidPermissionCallbackProxy">();
	}
	static class UAndroidPermissionCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAndroidPermissionCallbackProxy>();
	}
};
static_assert(alignof(UAndroidPermissionCallbackProxy) == 0x000008, "Wrong alignment on UAndroidPermissionCallbackProxy");
static_assert(sizeof(UAndroidPermissionCallbackProxy) == 0x000050, "Wrong size on UAndroidPermissionCallbackProxy");
static_assert(offsetof(UAndroidPermissionCallbackProxy, OnPermissionsGrantedDynamicDelegate) == 0x000028, "Member 'UAndroidPermissionCallbackProxy::OnPermissionsGrantedDynamicDelegate' has a wrong offset!");

class UAndroidPermissionFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UAndroidPermissionCallbackProxy* AcquirePermissions(const TArray<class FString>& Permissions);
	static bool CheckPermission(const class FString& Permission);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AndroidPermissionFunctionLibrary">();
	}
	static class UAndroidPermissionFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAndroidPermissionFunctionLibrary>();
	}
};
static_assert(alignof(UAndroidPermissionFunctionLibrary) == 0x000008, "Wrong alignment on UAndroidPermissionFunctionLibrary");
static_assert(sizeof(UAndroidPermissionFunctionLibrary) == 0x000028, "Wrong size on UAndroidPermissionFunctionLibrary");

}
