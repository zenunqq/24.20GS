#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AndroidPermissionFunctionLibrary_AcquirePermissions final
{
public:
	TArray<class FString>                         Permissions;
	class UAndroidPermissionCallbackProxy*        ReturnValue;
};
static_assert(alignof(AndroidPermissionFunctionLibrary_AcquirePermissions) == 0x000008, "Wrong alignment on AndroidPermissionFunctionLibrary_AcquirePermissions");
static_assert(sizeof(AndroidPermissionFunctionLibrary_AcquirePermissions) == 0x000018, "Wrong size on AndroidPermissionFunctionLibrary_AcquirePermissions");
static_assert(offsetof(AndroidPermissionFunctionLibrary_AcquirePermissions, Permissions) == 0x000000, "Member 'AndroidPermissionFunctionLibrary_AcquirePermissions::Permissions' has a wrong offset!");
static_assert(offsetof(AndroidPermissionFunctionLibrary_AcquirePermissions, ReturnValue) == 0x000010, "Member 'AndroidPermissionFunctionLibrary_AcquirePermissions::ReturnValue' has a wrong offset!");

struct AndroidPermissionFunctionLibrary_CheckPermission final
{
public:
	class FString                                 Permission;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(AndroidPermissionFunctionLibrary_CheckPermission) == 0x000008, "Wrong alignment on AndroidPermissionFunctionLibrary_CheckPermission");
static_assert(sizeof(AndroidPermissionFunctionLibrary_CheckPermission) == 0x000018, "Wrong size on AndroidPermissionFunctionLibrary_CheckPermission");
static_assert(offsetof(AndroidPermissionFunctionLibrary_CheckPermission, Permission) == 0x000000, "Member 'AndroidPermissionFunctionLibrary_CheckPermission::Permission' has a wrong offset!");
static_assert(offsetof(AndroidPermissionFunctionLibrary_CheckPermission, ReturnValue) == 0x000010, "Member 'AndroidPermissionFunctionLibrary_CheckPermission::ReturnValue' has a wrong offset!");

}
