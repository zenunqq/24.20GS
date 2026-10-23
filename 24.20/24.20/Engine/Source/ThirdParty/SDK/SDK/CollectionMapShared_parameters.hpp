#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaMapCollectionIcon_SetIsKnown final
{
public:
	bool                                          bIsKnown;
};
static_assert(alignof(AthenaMapCollectionIcon_SetIsKnown) == 0x000001, "Wrong alignment on AthenaMapCollectionIcon_SetIsKnown");
static_assert(sizeof(AthenaMapCollectionIcon_SetIsKnown) == 0x000001, "Wrong size on AthenaMapCollectionIcon_SetIsKnown");
static_assert(offsetof(AthenaMapCollectionIcon_SetIsKnown, bIsKnown) == 0x000000, "Member 'AthenaMapCollectionIcon_SetIsKnown::bIsKnown' has a wrong offset!");

struct AthenaMapCollectionIcon_SetSecondaryIcon final
{
public:
	TSoftObjectPtr<class UObject>                 SecondaryIcon;
};
static_assert(alignof(AthenaMapCollectionIcon_SetSecondaryIcon) == 0x000008, "Wrong alignment on AthenaMapCollectionIcon_SetSecondaryIcon");
static_assert(sizeof(AthenaMapCollectionIcon_SetSecondaryIcon) == 0x000028, "Wrong size on AthenaMapCollectionIcon_SetSecondaryIcon");
static_assert(offsetof(AthenaMapCollectionIcon_SetSecondaryIcon, SecondaryIcon) == 0x000000, "Member 'AthenaMapCollectionIcon_SetSecondaryIcon::SecondaryIcon' has a wrong offset!");

}
