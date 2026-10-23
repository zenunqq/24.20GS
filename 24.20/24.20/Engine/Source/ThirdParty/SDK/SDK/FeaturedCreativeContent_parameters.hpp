#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct FeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature final
{
public:
	int32                                         CurrentPageIndex;
};
static_assert(alignof(FeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature) == 0x000004, "Wrong alignment on FeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature");
static_assert(sizeof(FeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature) == 0x000004, "Wrong size on FeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature");
static_assert(offsetof(FeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature, CurrentPageIndex) == 0x000000, "Member 'FeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature::CurrentPageIndex' has a wrong offset!");

struct FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TArray<class FString>                         K2Node_Event_MediaURLs;
	TArray<struct FCreativeAdData>                K2Node_Event_AdMetadata;
	int32                                         K2Node_ComponentBoundEvent_CurrentPageIndex;
};
static_assert(alignof(FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent) == 0x000008, "Wrong alignment on FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent");
static_assert(sizeof(FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent) == 0x000030, "Wrong size on FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent");
static_assert(offsetof(FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent, EntryPoint) == 0x000000, "Member 'FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent::EntryPoint' has a wrong offset!");
static_assert(offsetof(FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent, K2Node_Event_MediaURLs) == 0x000008, "Member 'FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent::K2Node_Event_MediaURLs' has a wrong offset!");
static_assert(offsetof(FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent, K2Node_Event_AdMetadata) == 0x000018, "Member 'FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent::K2Node_Event_AdMetadata' has a wrong offset!");
static_assert(offsetof(FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent, K2Node_ComponentBoundEvent_CurrentPageIndex) == 0x000028, "Member 'FeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent::K2Node_ComponentBoundEvent_CurrentPageIndex' has a wrong offset!");

struct FeaturedCreativeContent_C_OnSetupAds final
{
public:
	TArray<class FString>                         MediaURLs;
	TArray<struct FCreativeAdData>                AdMetadata;
};
static_assert(alignof(FeaturedCreativeContent_C_OnSetupAds) == 0x000008, "Wrong alignment on FeaturedCreativeContent_C_OnSetupAds");
static_assert(sizeof(FeaturedCreativeContent_C_OnSetupAds) == 0x000020, "Wrong size on FeaturedCreativeContent_C_OnSetupAds");
static_assert(offsetof(FeaturedCreativeContent_C_OnSetupAds, MediaURLs) == 0x000000, "Member 'FeaturedCreativeContent_C_OnSetupAds::MediaURLs' has a wrong offset!");
static_assert(offsetof(FeaturedCreativeContent_C_OnSetupAds, AdMetadata) == 0x000010, "Member 'FeaturedCreativeContent_C_OnSetupAds::AdMetadata' has a wrong offset!");

struct FeaturedCreativeContent_C_SetFeaturedContentDetails final
{
public:
	int32                                         Index_0;
	uint8                                         Pad_4[0x4];
	struct FCreativeAdData                        CurrentAd;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
};
static_assert(alignof(FeaturedCreativeContent_C_SetFeaturedContentDetails) == 0x000008, "Wrong alignment on FeaturedCreativeContent_C_SetFeaturedContentDetails");
static_assert(sizeof(FeaturedCreativeContent_C_SetFeaturedContentDetails) == 0x0000C0, "Wrong size on FeaturedCreativeContent_C_SetFeaturedContentDetails");
static_assert(offsetof(FeaturedCreativeContent_C_SetFeaturedContentDetails, Index_0) == 0x000000, "Member 'FeaturedCreativeContent_C_SetFeaturedContentDetails::Index_0' has a wrong offset!");
static_assert(offsetof(FeaturedCreativeContent_C_SetFeaturedContentDetails, CurrentAd) == 0x000008, "Member 'FeaturedCreativeContent_C_SetFeaturedContentDetails::CurrentAd' has a wrong offset!");
static_assert(offsetof(FeaturedCreativeContent_C_SetFeaturedContentDetails, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'FeaturedCreativeContent_C_SetFeaturedContentDetails::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FeaturedCreativeContent_C_SetFeaturedContentDetails, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000088, "Member 'FeaturedCreativeContent_C_SetFeaturedContentDetails::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FeaturedCreativeContent_C_SetFeaturedContentDetails, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000A0, "Member 'FeaturedCreativeContent_C_SetFeaturedContentDetails::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FeaturedCreativeContent_C_SetFeaturedContentDetails, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000B8, "Member 'FeaturedCreativeContent_C_SetFeaturedContentDetails::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

}
