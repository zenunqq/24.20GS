#pragma once

#include "Basic.hpp"

#include "EmergencyNoticeWidgetBR_classes.hpp"
#include "EmergencyNoticeWidgetBR_parameters.hpp"

namespace SDK
{

void UEmergencyNoticeWidgetBR_C::ShowNotice(const class FText& Title, const class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "ShowNotice");

	Params::EmergencyNoticeWidgetBR_C_ShowNotice Parms{};

	Parms.Title = std::move(Title);
	Parms.Body = std::move(Body);

	UObject::ProcessEvent(Func, &Parms);
}

void UEmergencyNoticeWidgetBR_C::Show_Notice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "Show Notice");

	UObject::ProcessEvent(Func, nullptr);
}

void UEmergencyNoticeWidgetBR_C::HideNotice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "HideNotice");

	UObject::ProcessEvent(Func, nullptr);
}

void UEmergencyNoticeWidgetBR_C::ExecuteUbergraph_EmergencyNoticeWidgetBR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmergencyNoticeWidgetBR_C", "ExecuteUbergraph_EmergencyNoticeWidgetBR");

	Params::EmergencyNoticeWidgetBR_C_ExecuteUbergraph_EmergencyNoticeWidgetBR Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
