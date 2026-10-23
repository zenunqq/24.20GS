#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FVkPersistenceVersion final
{
public:
	int32                                         Version;
	uint8                                         Pad_4[0x4];
	class FString                                 Name;
};
static_assert(alignof(FVkPersistenceVersion) == 0x000008, "Wrong alignment on FVkPersistenceVersion");
static_assert(sizeof(FVkPersistenceVersion) == 0x000018, "Wrong size on FVkPersistenceVersion");
static_assert(offsetof(FVkPersistenceVersion, Version) == 0x000000, "Member 'FVkPersistenceVersion::Version' has a wrong offset!");
static_assert(offsetof(FVkPersistenceVersion, Name) == 0x000008, "Member 'FVkPersistenceVersion::Name' has a wrong offset!");

}
