#pragma once

#include "Basic.hpp"

#include "ContextTutorialIndicator_classes.hpp"
#include "ContextTutorialIndicator_parameters.hpp"

namespace SDK
{

void UContextTutorialIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UContextTutorialIndicator_C::ExecuteUbergraph_ContextTutorialIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "ExecuteUbergraph_ContextTutorialIndicator");

	Params::ContextTutorialIndicator_C_ExecuteUbergraph_ContextTutorialIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UContextTutorialIndicator_C::Finished_191D6D204EA6EF5125923CB749C84A4A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "Finished_191D6D204EA6EF5125923CB749C84A4A");

	UObject::ProcessEvent(Func, nullptr);
}

void UContextTutorialIndicator_C::Finished_5FDAD1724A4ABC34EC3B7F9D90839344()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "Finished_5FDAD1724A4ABC34EC3B7F9D90839344");

	UObject::ProcessEvent(Func, nullptr);
}

void UContextTutorialIndicator_C::Finished_6F1BBAF94537A4D7945ED5A452FC1188()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "Finished_6F1BBAF94537A4D7945ED5A452FC1188");

	UObject::ProcessEvent(Func, nullptr);
}

void UContextTutorialIndicator_C::Finished_FBBD6B5248E73C61005758B21F90D160()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "Finished_FBBD6B5248E73C61005758B21F90D160");

	UObject::ProcessEvent(Func, nullptr);
}

void UContextTutorialIndicator_C::PlayBounceAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "PlayBounceAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UContextTutorialIndicator_C::PlayInAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "PlayInAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UContextTutorialIndicator_C::PlayOutAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "PlayOutAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UContextTutorialIndicator_C::SetIndicatorText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContextTutorialIndicator_C", "SetIndicatorText");

	Params::ContextTutorialIndicator_C_SetIndicatorText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}
