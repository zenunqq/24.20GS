#pragma once

#include "Basic.hpp"

#include "RootLayout_Athena_classes.hpp"
#include "RootLayout_Athena_parameters.hpp"

namespace SDK
{

void URootLayout_Athena_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RootLayout_Athena_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void URootLayout_Athena_C::DialogResult_0099D78247C40A9775C753A2024EA419(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RootLayout_Athena_C", "DialogResult_0099D78247C40A9775C753A2024EA419");

	Params::RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419 Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}

void URootLayout_Athena_C::ExecuteUbergraph_RootLayout_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RootLayout_Athena_C", "ExecuteUbergraph_RootLayout_Athena");

	Params::RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

bool URootLayout_Athena_C::IsConsole()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RootLayout_Athena_C", "IsConsole");

	Params::RootLayout_Athena_C_IsConsole Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void URootLayout_Athena_C::OnGameWindowCloseButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RootLayout_Athena_C", "OnGameWindowCloseButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void URootLayout_Athena_C::OnModalQueueEmptied_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RootLayout_Athena_C", "OnModalQueueEmptied_1");

	UObject::ProcessEvent(Func, nullptr);
}

}
