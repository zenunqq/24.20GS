#pragma once

#include "Basic.hpp"

#include "SidebarSocialAddTagWidget_classes.hpp"
#include "SidebarSocialAddTagWidget_parameters.hpp"

namespace SDK
{

void USidebarSocialAddTagWidget_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddTagWidget_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddTagWidget_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddTagWidget_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddTagWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddTagWidget_C::EventSetTag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "EventSetTag");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddTagWidget_C::ExecuteUbergraph_SidebarSocialAddTagWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "ExecuteUbergraph_SidebarSocialAddTagWidget");

	Params::SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialAddTagWidget_C::FunctionOnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "FunctionOnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddTagWidget_C::FunctionOnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "FunctionOnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddTagWidget_C::FunctionSetCategoryCustomizationVisibility(ESlateVisibility CategoryCustomizationVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "FunctionSetCategoryCustomizationVisibility");

	Params::SidebarSocialAddTagWidget_C_FunctionSetCategoryCustomizationVisibility Parms{};

	Parms.CategoryCustomizationVisibility = CategoryCustomizationVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialAddTagWidget_C::GetCurrentTagBorderColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "GetCurrentTagBorderColors");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialAddTagWidget_C::InterpolateTagColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialAddTagWidget_C", "InterpolateTagColors");

	UObject::ProcessEvent(Func, nullptr);
}

}
