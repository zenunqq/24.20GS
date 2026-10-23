#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FLiveLinkTransformControllerData final
{
public:
	bool                                          bWorldTransform;
	bool                                          bUseLocation;
	bool                                          bUseRotation;
	bool                                          bUseScale;
	bool                                          bSweep;
	bool                                          bTeleport;
};
static_assert(alignof(FLiveLinkTransformControllerData) == 0x000001, "Wrong alignment on FLiveLinkTransformControllerData");
static_assert(sizeof(FLiveLinkTransformControllerData) == 0x000006, "Wrong size on FLiveLinkTransformControllerData");
static_assert(offsetof(FLiveLinkTransformControllerData, bWorldTransform) == 0x000000, "Member 'FLiveLinkTransformControllerData::bWorldTransform' has a wrong offset!");
static_assert(offsetof(FLiveLinkTransformControllerData, bUseLocation) == 0x000001, "Member 'FLiveLinkTransformControllerData::bUseLocation' has a wrong offset!");
static_assert(offsetof(FLiveLinkTransformControllerData, bUseRotation) == 0x000002, "Member 'FLiveLinkTransformControllerData::bUseRotation' has a wrong offset!");
static_assert(offsetof(FLiveLinkTransformControllerData, bUseScale) == 0x000003, "Member 'FLiveLinkTransformControllerData::bUseScale' has a wrong offset!");
static_assert(offsetof(FLiveLinkTransformControllerData, bSweep) == 0x000004, "Member 'FLiveLinkTransformControllerData::bSweep' has a wrong offset!");
static_assert(offsetof(FLiveLinkTransformControllerData, bTeleport) == 0x000005, "Member 'FLiveLinkTransformControllerData::bTeleport' has a wrong offset!");

}
