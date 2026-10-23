#pragma once

#include "Basic.hpp"

#include "ProgressiveTagsBase_classes.hpp"
#include "ProgressiveTagsBase_parameters.hpp"

namespace SDK
{

void UProgressiveTagsBase_C::UpdateText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "UpdateText");

	Params::ProgressiveTagsBase_C_UpdateText Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTagsBase_C::UpdateColor(const struct FLinearColor& Background_Color_0, const struct FSlateColor& Text_Color_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "UpdateColor");

	Params::ProgressiveTagsBase_C_UpdateColor Parms{};

	Parms.Background_Color_0 = std::move(Background_Color_0);
	Parms.Text_Color_0 = std::move(Text_Color_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTagsBase_C::Update_Image(class UTexture2D* Texture, class UMaterialInterface* Material, const struct FLinearColor& Color, double Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "Update Image");

	Params::ProgressiveTagsBase_C_Update_Image Parms{};

	Parms.Texture = Texture;
	Parms.Material = Material;
	Parms.Color = std::move(Color);
	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTagsBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "PreConstruct");

	Params::ProgressiveTagsBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveTagsBase_C::ExecuteUbergraph_ProgressiveTagsBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "ExecuteUbergraph_ProgressiveTagsBase");

	Params::ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
