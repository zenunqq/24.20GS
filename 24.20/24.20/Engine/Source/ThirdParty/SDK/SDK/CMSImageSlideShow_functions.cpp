#pragma once

#include "Basic.hpp"

#include "CMSImageSlideShow_classes.hpp"
#include "CMSImageSlideShow_parameters.hpp"

namespace SDK
{

void UCMSImageSlideShow_C::BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMSImageSlideShow_C", "BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature");

	Params::CMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature Parms{};

	Parms.CarouselWidget = CarouselWidget;
	Parms.CurrentPageIndex = CurrentPageIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UCMSImageSlideShow_C::ExecuteUbergraph_CMSImageSlideShow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMSImageSlideShow_C", "ExecuteUbergraph_CMSImageSlideShow");

	Params::CMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCMSImageSlideShow_C::SetMediaURLs(const TArray<class FString>& MediaURLs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMSImageSlideShow_C", "SetMediaURLs");

	Params::CMSImageSlideShow_C_SetMediaURLs Parms{};

	Parms.MediaURLs = std::move(MediaURLs);

	UObject::ProcessEvent(Func, &Parms);
}

}
