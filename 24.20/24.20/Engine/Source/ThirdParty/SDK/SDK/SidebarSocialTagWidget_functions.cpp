#pragma once

#include "Basic.hpp"

#include "SidebarSocialTagWidget_classes.hpp"
#include "SidebarSocialTagWidget_parameters.hpp"

namespace SDK
{

void USidebarSocialTagWidget_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::ExecuteUbergraph_SidebarSocialTagWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "ExecuteUbergraph_SidebarSocialTagWidget");

	Params::SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialTagWidget_C::FunctionOnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionOnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::FunctionOnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionOnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::FunctionSetCategoryCustomizationVisibility(ESlateVisibility CategoryCustomizationVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionSetCategoryCustomizationVisibility");

	Params::SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility Parms{};

	Parms.CategoryCustomizationVisibility = CategoryCustomizationVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialTagWidget_C::FunctionSetTag(const class FText& InTagName, ESocialTagCategory InTagCategory, bool InIsSystemTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionSetTag");

	Params::SidebarSocialTagWidget_C_FunctionSetTag Parms{};

	Parms.InTagName = std::move(InTagName);
	Parms.InTagCategory = InTagCategory;
	Parms.InIsSystemTag = InIsSystemTag;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialTagWidget_C::FunctionSetTagBorderColors(const struct FLinearColor& InnerColor, const struct FLinearColor& OuterColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "FunctionSetTagBorderColors");

	Params::SidebarSocialTagWidget_C_FunctionSetTagBorderColors Parms{};

	Parms.InnerColor = std::move(InnerColor);
	Parms.OuterColor = std::move(OuterColor);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialTagWidget_C::GetCurrentTagBorderColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "GetCurrentTagBorderColors");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::InterpolateTagColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "InterpolateTagColors");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::OnTagListEntryHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "OnTagListEntryHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::OnTagListEntryUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "OnTagListEntryUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::SetCategoryCustomizationVisibility(ESlateVisibility CategoryCustomizationVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetCategoryCustomizationVisibility");

	Params::SidebarSocialTagWidget_C_SetCategoryCustomizationVisibility Parms{};

	Parms.CategoryCustomizationVisibility = CategoryCustomizationVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialTagWidget_C::SetFullColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetFullColor");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarSocialTagWidget_C::SetHighlightState(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetHighlightState");

	Params::SidebarSocialTagWidget_C_SetHighlightState Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialTagWidget_C::SetTag(const class FText& InTagName, const ESocialTagCategory InTagCategory, const bool bInIsSystemTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetTag");

	Params::SidebarSocialTagWidget_C_SetTag Parms{};

	Parms.InTagName = std::move(InTagName);
	Parms.InTagCategory = InTagCategory;
	Parms.bInIsSystemTag = bInIsSystemTag;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialTagWidget_C::SetTagHoverState(bool IsUserSocialTag, bool IsHovering)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetTagHoverState");

	Params::SidebarSocialTagWidget_C_SetTagHoverState Parms{};

	Parms.IsUserSocialTag = IsUserSocialTag;
	Parms.IsHovering = IsHovering;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarSocialTagWidget_C::SetUnhoverState(bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarSocialTagWidget_C", "SetUnhoverState");

	Params::SidebarSocialTagWidget_C_SetUnhoverState Parms{};

	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

}
