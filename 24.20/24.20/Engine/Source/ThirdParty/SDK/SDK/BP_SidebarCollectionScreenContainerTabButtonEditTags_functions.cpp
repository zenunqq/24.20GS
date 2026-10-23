#pragma once

#include "Basic.hpp"

#include "BP_SidebarCollectionScreenContainerTabButtonEditTags_classes.hpp"
#include "BP_SidebarCollectionScreenContainerTabButtonEditTags_parameters.hpp"

namespace SDK
{

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::BP_OnTagCategoryChange(const ESocialTagCategory InTagCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "BP_OnTagCategoryChange");

	Params::BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_OnTagCategoryChange Parms{};

	Parms.InTagCategory = InTagCategory;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::BP_ShowBang(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "BP_ShowBang");

	Params::BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_ShowBang Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags");

	Params::BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::Finished_D3AB39584598BB6DA7EE7C98805576AC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "Finished_D3AB39584598BB6DA7EE7C98805576AC");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::HandleInputMethodChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "HandleInputMethodChanged");

	Params::BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerTabButtonEditTags_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerTabButtonEditTags_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}
