#pragma once

#include "Basic.hpp"

#include "LiveLinkAnimationCore_classes.hpp"

namespace SDK
{

class UFacialLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	bool                                          bExtractBoneTransform;
	bool                                          bExtractCurve;
	uint8                                         Pad_2A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FacialLiveLinkRemapAsset">();
	}
	static class UFacialLiveLinkRemapAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFacialLiveLinkRemapAsset>();
	}
};
static_assert(alignof(UFacialLiveLinkRemapAsset) == 0x000008, "Wrong alignment on UFacialLiveLinkRemapAsset");
static_assert(sizeof(UFacialLiveLinkRemapAsset) == 0x000030, "Wrong size on UFacialLiveLinkRemapAsset");
static_assert(offsetof(UFacialLiveLinkRemapAsset, bExtractBoneTransform) == 0x000028, "Member 'UFacialLiveLinkRemapAsset::bExtractBoneTransform' has a wrong offset!");
static_assert(offsetof(UFacialLiveLinkRemapAsset, bExtractCurve) == 0x000029, "Member 'UFacialLiveLinkRemapAsset::bExtractCurve' has a wrong offset!");

}
