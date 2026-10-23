#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FFortReleaseVersion final
{
public:
	class FName                                   VersionName;
};
static_assert(alignof(FFortReleaseVersion) == 0x000004, "Wrong alignment on FFortReleaseVersion");
static_assert(sizeof(FFortReleaseVersion) == 0x000004, "Wrong size on FFortReleaseVersion");
static_assert(offsetof(FFortReleaseVersion, VersionName) == 0x000000, "Member 'FFortReleaseVersion::VersionName' has a wrong offset!");

}
