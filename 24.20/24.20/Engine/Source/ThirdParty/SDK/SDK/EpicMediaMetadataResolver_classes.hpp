#pragma once

#include "Basic.hpp"

#include "EpicMediaUtilities_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UEpicMediaMetadataResolver : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(const class FString& RetrievedUrl)> OnSuccess;
	TMulticastInlineDelegate<void(const class FString& RetrievedUrl)> OnFailure;
	TMulticastInlineDelegate<void(struct FEpicMediaMetadataExt& FullMetaData, bool Succeeded)> MetadataResultExt;
	class UEpicMediaCDNHostnames*                 CDNHostNames;
	uint8                                         Pad_D8[0x150];

public:
	bool GetBlurl(const class FString& InVUID, const bool bInBlurlLive, const struct FEpicMediaOptions& InMediaOptions);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicMediaMetadataResolver">();
	}
	static class UEpicMediaMetadataResolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicMediaMetadataResolver>();
	}
};
static_assert(alignof(UEpicMediaMetadataResolver) == 0x000008, "Wrong alignment on UEpicMediaMetadataResolver");
static_assert(sizeof(UEpicMediaMetadataResolver) == 0x000228, "Wrong size on UEpicMediaMetadataResolver");
static_assert(offsetof(UEpicMediaMetadataResolver, OnSuccess) == 0x0000A0, "Member 'UEpicMediaMetadataResolver::OnSuccess' has a wrong offset!");
static_assert(offsetof(UEpicMediaMetadataResolver, OnFailure) == 0x0000B0, "Member 'UEpicMediaMetadataResolver::OnFailure' has a wrong offset!");
static_assert(offsetof(UEpicMediaMetadataResolver, MetadataResultExt) == 0x0000C0, "Member 'UEpicMediaMetadataResolver::MetadataResultExt' has a wrong offset!");
static_assert(offsetof(UEpicMediaMetadataResolver, CDNHostNames) == 0x0000D0, "Member 'UEpicMediaMetadataResolver::CDNHostNames' has a wrong offset!");

}
