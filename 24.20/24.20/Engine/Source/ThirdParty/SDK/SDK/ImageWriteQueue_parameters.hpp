#pragma once

#include "Basic.hpp"

#include "ImageWriteQueue_structs.hpp"

namespace SDK::Params
{

struct ImageWriteBlueprintLibrary_ExportToDisk final
{
public:
	class UTexture*                               Texture;
	class FString                                 Filename;
	uint8                                         Pad_18[0x8];
	struct FImageWriteOptions                     Options;
};
static_assert(alignof(ImageWriteBlueprintLibrary_ExportToDisk) == 0x000010, "Wrong alignment on ImageWriteBlueprintLibrary_ExportToDisk");
static_assert(sizeof(ImageWriteBlueprintLibrary_ExportToDisk) == 0x000080, "Wrong size on ImageWriteBlueprintLibrary_ExportToDisk");
static_assert(offsetof(ImageWriteBlueprintLibrary_ExportToDisk, Texture) == 0x000000, "Member 'ImageWriteBlueprintLibrary_ExportToDisk::Texture' has a wrong offset!");
static_assert(offsetof(ImageWriteBlueprintLibrary_ExportToDisk, Filename) == 0x000008, "Member 'ImageWriteBlueprintLibrary_ExportToDisk::Filename' has a wrong offset!");
static_assert(offsetof(ImageWriteBlueprintLibrary_ExportToDisk, Options) == 0x000020, "Member 'ImageWriteBlueprintLibrary_ExportToDisk::Options' has a wrong offset!");

}
