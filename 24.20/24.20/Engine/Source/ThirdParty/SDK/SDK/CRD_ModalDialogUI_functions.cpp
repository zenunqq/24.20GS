#pragma once

#include "Basic.hpp"

#include "CRD_ModalDialogUI_classes.hpp"
#include "CRD_ModalDialogUI_parameters.hpp"

namespace SDK
{

ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton1(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton1");

	Params::CreativeModalDialogAllowedConversionFunction_GetResponseButton1 Parms{};

	Parms.Field = std::move(Field);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton2(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton2");

	Params::CreativeModalDialogAllowedConversionFunction_GetResponseButton2 Parms{};

	Parms.Field = std::move(Field);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton3(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton3");

	Params::CreativeModalDialogAllowedConversionFunction_GetResponseButton3 Parms{};

	Parms.Field = std::move(Field);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton4(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton4");

	Params::CreativeModalDialogAllowedConversionFunction_GetResponseButton4 Parms{};

	Parms.Field = std::move(Field);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton5(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton5");

	Params::CreativeModalDialogAllowedConversionFunction_GetResponseButton5 Parms{};

	Parms.Field = std::move(Field);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseButton6(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseButton6");

	Params::CreativeModalDialogAllowedConversionFunction_GetResponseButton6 Parms{};

	Parms.Field = std::move(Field);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECreativeModalDialogViewmodelResponse UCreativeModalDialogAllowedConversionFunction::GetResponseNone(const struct FWidgetEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogAllowedConversionFunction", "GetResponseNone");

	Params::CreativeModalDialogAllowedConversionFunction_GetResponseNone Parms{};

	Parms.Field = std::move(Field);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECreativeModalDialogViewmodelResponse UCreativeModalDialogConversionFunction::AssignCreativeModalDialogViewmodelResponse(const struct FMVVMEventField& Field, ECreativeModalDialogViewmodelResponse Response)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogConversionFunction", "AssignCreativeModalDialogViewmodelResponse");

	Params::CreativeModalDialogConversionFunction_AssignCreativeModalDialogViewmodelResponse Parms{};

	Parms.Field = std::move(Field);
	Parms.Response = Response;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCreativeModalDialogConversionFunction::GetColumnIndexForButtonFromContentAlignment(const ECreativeModalDialogAlignmentOption AlignmentOption, const int32 ButtonIndex, const int32 WideMaxColumns, const int32 TallMaxColumns, const int32 DefaultMaxColumns)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogConversionFunction", "GetColumnIndexForButtonFromContentAlignment");

	Params::CreativeModalDialogConversionFunction_GetColumnIndexForButtonFromContentAlignment Parms{};

	Parms.AlignmentOption = AlignmentOption;
	Parms.ButtonIndex = ButtonIndex;
	Parms.WideMaxColumns = WideMaxColumns;
	Parms.TallMaxColumns = TallMaxColumns;
	Parms.DefaultMaxColumns = DefaultMaxColumns;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCreativeModalDialogConversionFunction::GetFloatingValueFromContentAlignment(const ECreativeModalDialogAlignmentOption AlignmentOption, const float TallValue, const float WideValue, const float CenteredFullValue, const float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogConversionFunction", "GetFloatingValueFromContentAlignment");

	Params::CreativeModalDialogConversionFunction_GetFloatingValueFromContentAlignment Parms{};

	Parms.AlignmentOption = AlignmentOption;
	Parms.TallValue = TallValue;
	Parms.WideValue = WideValue;
	Parms.CenteredFullValue = CenteredFullValue;
	Parms.DefaultValue = DefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMargin UCreativeModalDialogConversionFunction::GetMarginFromContentAlignment(const ECreativeModalDialogAlignmentOption AlignmentOption, const float TallMarginAmount, const float WideMarginAmount, const float CenteredFullMarginAmount, const float DefaultMarginAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogConversionFunction", "GetMarginFromContentAlignment");

	Params::CreativeModalDialogConversionFunction_GetMarginFromContentAlignment Parms{};

	Parms.AlignmentOption = AlignmentOption;
	Parms.TallMarginAmount = TallMarginAmount;
	Parms.WideMarginAmount = WideMarginAmount;
	Parms.CenteredFullMarginAmount = CenteredFullMarginAmount;
	Parms.DefaultMarginAmount = DefaultMarginAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCreativeModalDialogConversionFunction::GetRowIndexForButtonFromContentAlignment(const ECreativeModalDialogAlignmentOption AlignmentOption, const int32 ButtonIndex, const int32 WideMaxColumns, const int32 TallMaxColumns, const int32 DefaultMaxColumns)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogConversionFunction", "GetRowIndexForButtonFromContentAlignment");

	Params::CreativeModalDialogConversionFunction_GetRowIndexForButtonFromContentAlignment Parms{};

	Parms.AlignmentOption = AlignmentOption;
	Parms.ButtonIndex = ButtonIndex;
	Parms.WideMaxColumns = WideMaxColumns;
	Parms.TallMaxColumns = TallMaxColumns;
	Parms.DefaultMaxColumns = DefaultMaxColumns;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ECreativeModalDialogViewmodelResponse UCreativeModalDialogConversionFunction::TranslateResponse(const struct FWidgetEventField& Field, ECreativeModalDialogViewmodelResponse Response)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CreativeModalDialogConversionFunction", "TranslateResponse");

	Params::CreativeModalDialogConversionFunction_TranslateResponse Parms{};

	Parms.Field = std::move(Field);
	Parms.Response = Response;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UCreativeModalDialogViewmodel::GetBackgroundVisibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetBackgroundVisibility");

	Params::CreativeModalDialogViewmodel_GetBackgroundVisibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton1TriggeringInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton1TriggeringInputAction");

	Params::CreativeModalDialogViewmodel_GetButton1TriggeringInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UCreativeModalDialogViewmodel::GetButton1Visibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton1Visibility");

	Params::CreativeModalDialogViewmodel_GetButton1Visibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton2TriggeringInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton2TriggeringInputAction");

	Params::CreativeModalDialogViewmodel_GetButton2TriggeringInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UCreativeModalDialogViewmodel::GetButton2Visibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton2Visibility");

	Params::CreativeModalDialogViewmodel_GetButton2Visibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton3TriggeringInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton3TriggeringInputAction");

	Params::CreativeModalDialogViewmodel_GetButton3TriggeringInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UCreativeModalDialogViewmodel::GetButton3Visibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton3Visibility");

	Params::CreativeModalDialogViewmodel_GetButton3Visibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton4TriggeringInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton4TriggeringInputAction");

	Params::CreativeModalDialogViewmodel_GetButton4TriggeringInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UCreativeModalDialogViewmodel::GetButton4Visibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton4Visibility");

	Params::CreativeModalDialogViewmodel_GetButton4Visibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton5TriggeringInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton5TriggeringInputAction");

	Params::CreativeModalDialogViewmodel_GetButton5TriggeringInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UCreativeModalDialogViewmodel::GetButton5Visibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton5Visibility");

	Params::CreativeModalDialogViewmodel_GetButton5Visibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDataTableRowHandle UCreativeModalDialogViewmodel::GetButton6TriggeringInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton6TriggeringInputAction");

	Params::CreativeModalDialogViewmodel_GetButton6TriggeringInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UCreativeModalDialogViewmodel::GetButton6Visibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetButton6Visibility");

	Params::CreativeModalDialogViewmodel_GetButton6Visibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EHorizontalAlignment UCreativeModalDialogViewmodel::GetHorizontalAlignment() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetHorizontalAlignment");

	Params::CreativeModalDialogViewmodel_GetHorizontalAlignment Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCreativeModalDialogViewmodel::GetTimeoutProgress() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetTimeoutProgress");

	Params::CreativeModalDialogViewmodel_GetTimeoutProgress Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESlateVisibility UCreativeModalDialogViewmodel::GetTimerVisibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetTimerVisibility");

	Params::CreativeModalDialogViewmodel_GetTimerVisibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EVerticalAlignment UCreativeModalDialogViewmodel::GetVerticalAlignment() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "GetVerticalAlignment");

	Params::CreativeModalDialogViewmodel_GetVerticalAlignment Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::IsButton1Visible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton1Visible");

	Params::CreativeModalDialogViewmodel_IsButton1Visible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::IsButton2Visible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton2Visible");

	Params::CreativeModalDialogViewmodel_IsButton2Visible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::IsButton3Visible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton3Visible");

	Params::CreativeModalDialogViewmodel_IsButton3Visible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::IsButton4Visible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton4Visible");

	Params::CreativeModalDialogViewmodel_IsButton4Visible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::IsButton5Visible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton5Visible");

	Params::CreativeModalDialogViewmodel_IsButton5Visible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::IsButton6Visible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsButton6Visible");

	Params::CreativeModalDialogViewmodel_IsButton6Visible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::IsTimerVisible() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "IsTimerVisible");

	Params::CreativeModalDialogViewmodel_IsTimerVisible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::ShouldButton1UseFallbackDefaultInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton1UseFallbackDefaultInputAction");

	Params::CreativeModalDialogViewmodel_ShouldButton1UseFallbackDefaultInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::ShouldButton2UseFallbackDefaultInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton2UseFallbackDefaultInputAction");

	Params::CreativeModalDialogViewmodel_ShouldButton2UseFallbackDefaultInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::ShouldButton3UseFallbackDefaultInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton3UseFallbackDefaultInputAction");

	Params::CreativeModalDialogViewmodel_ShouldButton3UseFallbackDefaultInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::ShouldButton4UseFallbackDefaultInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton4UseFallbackDefaultInputAction");

	Params::CreativeModalDialogViewmodel_ShouldButton4UseFallbackDefaultInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::ShouldButton5UseFallbackDefaultInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton5UseFallbackDefaultInputAction");

	Params::CreativeModalDialogViewmodel_ShouldButton5UseFallbackDefaultInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCreativeModalDialogViewmodel::ShouldButton6UseFallbackDefaultInputAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeModalDialogViewmodel", "ShouldButton6UseFallbackDefaultInputAction");

	Params::CreativeModalDialogViewmodel_ShouldButton6UseFallbackDefaultInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
