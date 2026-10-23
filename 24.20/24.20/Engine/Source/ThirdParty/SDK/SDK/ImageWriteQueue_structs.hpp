#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EDesiredImageFormat : uint8
{
	PNG                                      = 0,
	JPG                                      = 1,
	BMP                                      = 2,
	EXR                                      = 3,
	EDesiredImageFormat_MAX                  = 4,
};

struct alignas(0x10) FImageWriteOptions final
{
public:
	EDesiredImageFormat                           Format;
	uint8                                         Pad_1[0x3];
	TDelegate<void(bool bSuccess)>                OnComplete;
	int32                                         CompressionQuality;
	bool                                          bOverwriteFile;
	bool                                          bAsync;
	uint8                                         Pad_16[0x4A];
};
static_assert(alignof(FImageWriteOptions) == 0x000010, "Wrong alignment on FImageWriteOptions");
static_assert(sizeof(FImageWriteOptions) == 0x000060, "Wrong size on FImageWriteOptions");
static_assert(offsetof(FImageWriteOptions, Format) == 0x000000, "Member 'FImageWriteOptions::Format' has a wrong offset!");
static_assert(offsetof(FImageWriteOptions, OnComplete) == 0x000004, "Member 'FImageWriteOptions::OnComplete' has a wrong offset!");
static_assert(offsetof(FImageWriteOptions, CompressionQuality) == 0x000010, "Member 'FImageWriteOptions::CompressionQuality' has a wrong offset!");
static_assert(offsetof(FImageWriteOptions, bOverwriteFile) == 0x000014, "Member 'FImageWriteOptions::bOverwriteFile' has a wrong offset!");
static_assert(offsetof(FImageWriteOptions, bAsync) == 0x000015, "Member 'FImageWriteOptions::bAsync' has a wrong offset!");

}
