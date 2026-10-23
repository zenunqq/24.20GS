#pragma once

#include "Basic.hpp"

#include "UnrealEngineExperimental_0_classes.hpp"
#include "UnrealEngineExperimental_0_parameters.hpp"

namespace SDK
{

void UCurves_editable_curve::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Curves_editable_curve", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UCurves_editable_curve::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Curves_editable_curve", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UCurves_editable_curve::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Curves_editable_curve", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

double UCurves_editable_curve::_L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Curves_editable_curve", "_L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R");

	Params::Curves_editable_curve__L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDiagnostics_log::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Diagnostics_log", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiagnostics_log::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Diagnostics_log", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiagnostics_log::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Diagnostics_log", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiagnostics_log::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_Nlog__level_R(const struct UnrealEngineExperimental_0::Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Diagnostics_log", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_Nlog__level_R");

	Params::Diagnostics_log__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_Nlog__level_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDiagnostics_log::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_Nlog__level_R(FOptionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Diagnostics_log", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_Nlog__level_R");

	Params::Diagnostics_log__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_Nlog__level_R Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDiagnostics_log_channel::_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Diagnostics_log_channel", "$Block");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiagnostics_log_channel::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Diagnostics_log_channel", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiagnostics_log_channel::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Diagnostics_log_channel", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

}
