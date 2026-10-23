#pragma once

#include "Basic.hpp"

#include "WBP_VariantCustomizationHeader_classes.hpp"
#include "WBP_VariantCustomizationHeader_parameters.hpp"

namespace SDK
{

void UWBP_VariantCustomizationHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_VariantCustomizationHeader_C::ExecuteUbergraph_WBP_VariantCustomizationHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "ExecuteUbergraph_WBP_VariantCustomizationHeader");

	Params::WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_VariantCustomizationHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "PreConstruct");

	Params::WBP_VariantCustomizationHeader_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_VariantCustomizationHeader_C::Set_Header(const class FText& InText, class UMaterialInterface* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "Set Header");

	Params::WBP_VariantCustomizationHeader_C_Set_Header Parms{};

	Parms.InText = std::move(InText);
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_VariantCustomizationHeader_C::Set_Subheader(const class FText& InText, class UTexture2D* Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VariantCustomizationHeader_C", "Set Subheader");

	Params::WBP_VariantCustomizationHeader_C_Set_Subheader Parms{};

	Parms.InText = std::move(InText);
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);
}

}
