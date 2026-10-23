#pragma once

#include "Basic.hpp"

#include "WBP_StatusBar_classes.hpp"
#include "WBP_StatusBar_parameters.hpp"

namespace SDK
{

void UWBP_StatusBar_C::ExecuteUbergraph_WBP_StatusBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusBar_C", "ExecuteUbergraph_WBP_StatusBar");

	Params::WBP_StatusBar_C_ExecuteUbergraph_WBP_StatusBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_StatusBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusBar_C", "PreConstruct");

	Params::WBP_StatusBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_StatusBar_C::Update_Image(class UTexture2D* Texture, class UMaterialInterface* Material, const struct FLinearColor& Color, double Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusBar_C", "Update Image");

	Params::WBP_StatusBar_C_Update_Image Parms{};

	Parms.Texture = Texture;
	Parms.Material = Material;
	Parms.Color = std::move(Color);
	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_StatusBar_C::UpdateColor(const struct FLinearColor& Background_Color_0, const struct FSlateColor& Text_Color_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusBar_C", "UpdateColor");

	Params::WBP_StatusBar_C_UpdateColor Parms{};

	Parms.Background_Color_0 = std::move(Background_Color_0);
	Parms.Text_Color_0 = std::move(Text_Color_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_StatusBar_C::UpdateText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusBar_C", "UpdateText");

	Params::WBP_StatusBar_C_UpdateText Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

}
