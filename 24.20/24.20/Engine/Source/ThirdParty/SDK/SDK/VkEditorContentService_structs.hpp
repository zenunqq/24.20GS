#pragma once

#include "Basic.hpp"

#include "VkEngineTypes_structs.hpp"

namespace SDK
{

struct FVkContentPackageRequest final : public FVkResolvedContent
{
public:
	class FString                                 ProjectID;
};
static_assert(alignof(FVkContentPackageRequest) == 0x000008, "Wrong alignment on FVkContentPackageRequest");
static_assert(sizeof(FVkContentPackageRequest) == 0x000078, "Wrong size on FVkContentPackageRequest");
static_assert(offsetof(FVkContentPackageRequest, ProjectID) == 0x000068, "Member 'FVkContentPackageRequest::ProjectID' has a wrong offset!");

}
