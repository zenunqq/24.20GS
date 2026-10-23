#pragma once

#include "Basic.hpp"

#include "EpicMediaOptions_structs.hpp"

namespace SDK::Params
{

struct EpicMediaMetadataResolver_GetBlurl final
{
public:
	class FString                                 InVUID;
	bool                                          bInBlurlLive;
	uint8                                         Pad_11[0x7];
	struct FEpicMediaOptions                      InMediaOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_119[0x7];
};
static_assert(alignof(EpicMediaMetadataResolver_GetBlurl) == 0x000008, "Wrong alignment on EpicMediaMetadataResolver_GetBlurl");
static_assert(sizeof(EpicMediaMetadataResolver_GetBlurl) == 0x000120, "Wrong size on EpicMediaMetadataResolver_GetBlurl");
static_assert(offsetof(EpicMediaMetadataResolver_GetBlurl, InVUID) == 0x000000, "Member 'EpicMediaMetadataResolver_GetBlurl::InVUID' has a wrong offset!");
static_assert(offsetof(EpicMediaMetadataResolver_GetBlurl, bInBlurlLive) == 0x000010, "Member 'EpicMediaMetadataResolver_GetBlurl::bInBlurlLive' has a wrong offset!");
static_assert(offsetof(EpicMediaMetadataResolver_GetBlurl, InMediaOptions) == 0x000018, "Member 'EpicMediaMetadataResolver_GetBlurl::InMediaOptions' has a wrong offset!");
static_assert(offsetof(EpicMediaMetadataResolver_GetBlurl, ReturnValue) == 0x000118, "Member 'EpicMediaMetadataResolver_GetBlurl::ReturnValue' has a wrong offset!");

}
