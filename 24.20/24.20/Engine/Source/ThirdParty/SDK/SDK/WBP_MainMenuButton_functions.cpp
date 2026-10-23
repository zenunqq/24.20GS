#pragma once

#include "Basic.hpp"

#include "WBP_MainMenuButton_classes.hpp"
#include "WBP_MainMenuButton_parameters.hpp"

namespace SDK
{

void UWBP_MainMenuButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenuButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_MainMenuButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenuButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_MainMenuButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenuButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_MainMenuButton_C::ExecuteUbergraph_WBP_MainMenuButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenuButton_C", "ExecuteUbergraph_WBP_MainMenuButton");

	Params::WBP_MainMenuButton_C_ExecuteUbergraph_WBP_MainMenuButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_MainMenuButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenuButton_C", "PreConstruct");

	Params::WBP_MainMenuButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_MainMenuButton_C::Set_Text(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenuButton_C", "Set Text");

	Params::WBP_MainMenuButton_C_Set_Text Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_MainMenuButton_C::UpdateRightSideIcon(TSoftObjectPtr<class UMaterialInterface> SoftMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenuButton_C", "UpdateRightSideIcon");

	Params::WBP_MainMenuButton_C_UpdateRightSideIcon Parms{};

	Parms.SoftMaterial = SoftMaterial;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_MainMenuButton_C::UpdateRightSideIconColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenuButton_C", "UpdateRightSideIconColor");

	Params::WBP_MainMenuButton_C_UpdateRightSideIconColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}

}
