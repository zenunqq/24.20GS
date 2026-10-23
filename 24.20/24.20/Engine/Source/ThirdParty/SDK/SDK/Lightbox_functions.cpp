#pragma once

#include "Basic.hpp"

#include "Lightbox_classes.hpp"
#include "Lightbox_parameters.hpp"

namespace SDK
{

void ULightbox_C::AddContent(class UCommonUserWidget* Content_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "AddContent");

	Params::Lightbox_C_AddContent Parms{};

	Parms.Content_0 = Content_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ULightbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void ULightbox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void ULightbox_C::ExecuteUbergraph_Lightbox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "ExecuteUbergraph_Lightbox");

	Params::Lightbox_C_ExecuteUbergraph_Lightbox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULightbox_C::Intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "Intro");

	UObject::ProcessEvent(Func, nullptr);
}

void ULightbox_C::Outro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "Outro");

	UObject::ProcessEvent(Func, nullptr);
}

void ULightbox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "PreConstruct");

	Params::Lightbox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void ULightbox_C::RemoveContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "RemoveContent");

	UObject::ProcessEvent(Func, nullptr);
}

void ULightbox_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

void ULightbox_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lightbox_C", "WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}

}
