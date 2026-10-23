#pragma once

#include "Basic.hpp"

#include "SidebarLfgState_Image_classes.hpp"
#include "SidebarLfgState_Image_parameters.hpp"

namespace SDK
{

void USidebarLfgState_Image_C::ExecuteUbergraph_SidebarLfgState_Image(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState_Image_C", "ExecuteUbergraph_SidebarLfgState_Image");

	Params::SidebarLfgState_Image_C_ExecuteUbergraph_SidebarLfgState_Image Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgState_Image_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState_Image_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void USidebarLfgState_Image_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState_Image_C", "PreConstruct");

	Params::SidebarLfgState_Image_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgState_Image_C::SetColor(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState_Image_C", "SetColor");

	Params::SidebarLfgState_Image_C_SetColor Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}

void USidebarLfgState_Image_C::SetMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidebarLfgState_Image_C", "SetMaterial");

	Params::SidebarLfgState_Image_C_SetMaterial Parms{};

	Parms.SoftMaterial = SoftMaterial;

	UObject::ProcessEvent(Func, &Parms);
}

}
