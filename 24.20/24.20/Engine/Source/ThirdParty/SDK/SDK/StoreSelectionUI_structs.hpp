#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EOptionalLabel : uint8
{
	Label_DS                                 = 0,
	Label_NM                                 = 1,
	Max                                      = 2,
};

struct FItemData final
{
public:
	TSoftObjectPtr<class UTexture2D>              Icon;
	class FText                                   Name;
	uint8                                         Pad_40[0x8];
};
static_assert(alignof(FItemData) == 0x000008, "Wrong alignment on FItemData");
static_assert(sizeof(FItemData) == 0x000048, "Wrong size on FItemData");
static_assert(offsetof(FItemData, Icon) == 0x000000, "Member 'FItemData::Icon' has a wrong offset!");
static_assert(offsetof(FItemData, Name) == 0x000028, "Member 'FItemData::Name' has a wrong offset!");

}
