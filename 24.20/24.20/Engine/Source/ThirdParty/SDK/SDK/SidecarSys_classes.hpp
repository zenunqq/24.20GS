#pragma once

#include "Basic.hpp"

#include "SidecarSys_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class USidecarDss final : public UObject
{
public:
	TMap<class FString, struct FSidecarFileInfo>  FileInfoMap;
	class FString                                 DssDownloadUrl;
	class FString                                 DssCheckoutUrl;
	class FString                                 DssUploadUrl;
	class FString                                 DssRestoreUrl;
	class FString                                 DssCheckinUrl;
	class FString                                 DssListFilesUrl;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidecarDss">();
	}
	static class USidecarDss* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidecarDss>();
	}
};
static_assert(alignof(USidecarDss) == 0x000008, "Wrong alignment on USidecarDss");
static_assert(sizeof(USidecarDss) == 0x0000D8, "Wrong size on USidecarDss");
static_assert(offsetof(USidecarDss, FileInfoMap) == 0x000028, "Member 'USidecarDss::FileInfoMap' has a wrong offset!");
static_assert(offsetof(USidecarDss, DssDownloadUrl) == 0x000078, "Member 'USidecarDss::DssDownloadUrl' has a wrong offset!");
static_assert(offsetof(USidecarDss, DssCheckoutUrl) == 0x000088, "Member 'USidecarDss::DssCheckoutUrl' has a wrong offset!");
static_assert(offsetof(USidecarDss, DssUploadUrl) == 0x000098, "Member 'USidecarDss::DssUploadUrl' has a wrong offset!");
static_assert(offsetof(USidecarDss, DssRestoreUrl) == 0x0000A8, "Member 'USidecarDss::DssRestoreUrl' has a wrong offset!");
static_assert(offsetof(USidecarDss, DssCheckinUrl) == 0x0000B8, "Member 'USidecarDss::DssCheckinUrl' has a wrong offset!");
static_assert(offsetof(USidecarDss, DssListFilesUrl) == 0x0000C8, "Member 'USidecarDss::DssListFilesUrl' has a wrong offset!");

class alignas(0x10) USidecarInventorySys final : public UObject
{
public:
	class FString                                 InventoryDownloadUrl;
	class FString                                 InventoryLockUrl;
	class FString                                 ItemUpdateUrl;
	uint8                                         Pad_58[0x78];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidecarInventorySys">();
	}
	static class USidecarInventorySys* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidecarInventorySys>();
	}
};
static_assert(alignof(USidecarInventorySys) == 0x000010, "Wrong alignment on USidecarInventorySys");
static_assert(sizeof(USidecarInventorySys) == 0x0000D0, "Wrong size on USidecarInventorySys");
static_assert(offsetof(USidecarInventorySys, InventoryDownloadUrl) == 0x000028, "Member 'USidecarInventorySys::InventoryDownloadUrl' has a wrong offset!");
static_assert(offsetof(USidecarInventorySys, InventoryLockUrl) == 0x000038, "Member 'USidecarInventorySys::InventoryLockUrl' has a wrong offset!");
static_assert(offsetof(USidecarInventorySys, ItemUpdateUrl) == 0x000048, "Member 'USidecarInventorySys::ItemUpdateUrl' has a wrong offset!");

class USidecarSys final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class USidecarDss*                            SidecarDss;
	class USidecarInventorySys*                   SidecarInventory;
	uint8                                         Pad_48[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SidecarSys">();
	}
	static class USidecarSys* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidecarSys>();
	}
};
static_assert(alignof(USidecarSys) == 0x000008, "Wrong alignment on USidecarSys");
static_assert(sizeof(USidecarSys) == 0x000058, "Wrong size on USidecarSys");
static_assert(offsetof(USidecarSys, SidecarDss) == 0x000038, "Member 'USidecarSys::SidecarDss' has a wrong offset!");
static_assert(offsetof(USidecarSys, SidecarInventory) == 0x000040, "Member 'USidecarSys::SidecarInventory' has a wrong offset!");

}
