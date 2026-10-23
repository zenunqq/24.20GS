#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFeaturedCreativeContent_C final : public UFeaturedCreativeContent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Base;
	class UCMSImageSlideShow_C*                   CMSImageSlideShow;
	class UCommonTextBlock*                       IslandCreator;
	class UCommonTextBlock*                       IslandDetails;
	class UCommonTextBlock*                       IslandName;
	TArray<struct FCreativeAdData>                CurrentAds;

public:
	void BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature(int32 CurrentPageIndex);
	void ExecuteUbergraph_FeaturedCreativeContent(int32 EntryPoint);
	void OnSetupAds(const TArray<class FString>& MediaURLs, const TArray<struct FCreativeAdData>& AdMetadata);
	void SetFeaturedContentDetails(int32 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FeaturedCreativeContent_C">();
	}
	static class UFeaturedCreativeContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFeaturedCreativeContent_C>();
	}
};
static_assert(alignof(UFeaturedCreativeContent_C) == 0x000008, "Wrong alignment on UFeaturedCreativeContent_C");
static_assert(sizeof(UFeaturedCreativeContent_C) == 0x0002A8, "Wrong size on UFeaturedCreativeContent_C");
static_assert(offsetof(UFeaturedCreativeContent_C, UberGraphFrame) == 0x000268, "Member 'UFeaturedCreativeContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, Base) == 0x000270, "Member 'UFeaturedCreativeContent_C::Base' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, CMSImageSlideShow) == 0x000278, "Member 'UFeaturedCreativeContent_C::CMSImageSlideShow' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, IslandCreator) == 0x000280, "Member 'UFeaturedCreativeContent_C::IslandCreator' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, IslandDetails) == 0x000288, "Member 'UFeaturedCreativeContent_C::IslandDetails' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, IslandName) == 0x000290, "Member 'UFeaturedCreativeContent_C::IslandName' has a wrong offset!");
static_assert(offsetof(UFeaturedCreativeContent_C, CurrentAds) == 0x000298, "Member 'UFeaturedCreativeContent_C::CurrentAds' has a wrong offset!");

}
