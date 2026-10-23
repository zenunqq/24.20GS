#pragma once

#include "Basic.hpp"

#include "MainMenuButton_classes.hpp"
#include "MainMenuButton_parameters.hpp"

namespace SDK
{

void UMainMenuButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMainMenuButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UMainMenuButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMainMenuButton_C::ExecuteUbergraph_MainMenuButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_C", "ExecuteUbergraph_MainMenuButton");

	Params::MainMenuButton_C_ExecuteUbergraph_MainMenuButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMainMenuButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_C", "PreConstruct");

	Params::MainMenuButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UMainMenuButton_C::UpdateRightSideIcon(TSoftObjectPtr<class UMaterialInterface> SoftMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_C", "UpdateRightSideIcon");

	Params::MainMenuButton_C_UpdateRightSideIcon Parms{};

	Parms.SoftMaterial = SoftMaterial;

	UObject::ProcessEvent(Func, &Parms);
}

void UMainMenuButton_C::UpdateRightSideIconColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenuButton_C", "UpdateRightSideIconColor");

	Params::MainMenuButton_C_UpdateRightSideIconColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

}
