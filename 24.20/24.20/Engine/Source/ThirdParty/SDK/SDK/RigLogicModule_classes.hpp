#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UDNAAsset final : public UAssetUserData
{
public:
	class FString                                 DnaFileName;
	uint8                                         Pad_38[0xB8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DNAAsset">();
	}
	static class UDNAAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDNAAsset>();
	}
};
static_assert(alignof(UDNAAsset) == 0x000008, "Wrong alignment on UDNAAsset");
static_assert(sizeof(UDNAAsset) == 0x0000F0, "Wrong size on UDNAAsset");
static_assert(offsetof(UDNAAsset, DnaFileName) == 0x000028, "Member 'UDNAAsset::DnaFileName' has a wrong offset!");

class USkelMeshDNAUtils final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SkelMeshDNAUtils">();
	}
	static class USkelMeshDNAUtils* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkelMeshDNAUtils>();
	}
};
static_assert(alignof(USkelMeshDNAUtils) == 0x000008, "Wrong alignment on USkelMeshDNAUtils");
static_assert(sizeof(USkelMeshDNAUtils) == 0x000028, "Wrong size on USkelMeshDNAUtils");

}
