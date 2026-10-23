#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "AndroidFileServer_structs.hpp"

namespace SDK
{

class UAndroidFileServerBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static EAFSActiveType IsFileServerRunning();
	static bool StartFileServer(bool bUSB, bool bNetwork, int32 Port);
	static bool StopFileServer(bool bUSB, bool bNetwork);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AndroidFileServerBPLibrary">();
	}
	static class UAndroidFileServerBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAndroidFileServerBPLibrary>();
	}
};
static_assert(alignof(UAndroidFileServerBPLibrary) == 0x000008, "Wrong alignment on UAndroidFileServerBPLibrary");
static_assert(sizeof(UAndroidFileServerBPLibrary) == 0x000028, "Wrong size on UAndroidFileServerBPLibrary");

}
