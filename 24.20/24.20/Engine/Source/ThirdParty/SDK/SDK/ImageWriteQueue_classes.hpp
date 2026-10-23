#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UImageWriteBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ExportToDisk(class UTexture* Texture, const class FString& Filename, const struct FImageWriteOptions& Options);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageWriteBlueprintLibrary">();
	}
	static class UImageWriteBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageWriteBlueprintLibrary>();
	}
};
static_assert(alignof(UImageWriteBlueprintLibrary) == 0x000008, "Wrong alignment on UImageWriteBlueprintLibrary");
static_assert(sizeof(UImageWriteBlueprintLibrary) == 0x000028, "Wrong size on UImageWriteBlueprintLibrary");

}
