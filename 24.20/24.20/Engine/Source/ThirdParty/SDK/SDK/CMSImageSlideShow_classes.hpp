#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UCMSImageSlideShow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonWidgetCarousel*                  Images;
	double                                        ScrollInterview;
	TMulticastInlineDelegate<void(int32 CurrentPageIndex)> CarouselIndexChanged;

public:
	void BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex);
	void ExecuteUbergraph_CMSImageSlideShow(int32 EntryPoint);
	void SetMediaURLs(const TArray<class FString>& MediaURLs);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CMSImageSlideShow_C">();
	}
	static class UCMSImageSlideShow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCMSImageSlideShow_C>();
	}
};
static_assert(alignof(UCMSImageSlideShow_C) == 0x000008, "Wrong alignment on UCMSImageSlideShow_C");
static_assert(sizeof(UCMSImageSlideShow_C) == 0x000290, "Wrong size on UCMSImageSlideShow_C");
static_assert(offsetof(UCMSImageSlideShow_C, UberGraphFrame) == 0x000268, "Member 'UCMSImageSlideShow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCMSImageSlideShow_C, Images) == 0x000270, "Member 'UCMSImageSlideShow_C::Images' has a wrong offset!");
static_assert(offsetof(UCMSImageSlideShow_C, ScrollInterview) == 0x000278, "Member 'UCMSImageSlideShow_C::ScrollInterview' has a wrong offset!");
static_assert(offsetof(UCMSImageSlideShow_C, CarouselIndexChanged) == 0x000280, "Member 'UCMSImageSlideShow_C::CarouselIndexChanged' has a wrong offset!");

}
