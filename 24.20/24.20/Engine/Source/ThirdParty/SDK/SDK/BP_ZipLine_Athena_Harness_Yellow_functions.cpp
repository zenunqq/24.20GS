#pragma once

#include "Basic.hpp"

#include "BP_ZipLine_Athena_Harness_Yellow_classes.hpp"
#include "BP_ZipLine_Athena_Harness_Yellow_parameters.hpp"

namespace SDK
{

void ABP_ZipLine_Athena_Harness_Yellow_C::Alpha__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Alpha__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_Yellow_C::Alpha__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Alpha__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_Yellow_C::ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow");

	Params::BP_ZipLine_Athena_Harness_Yellow_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_ZipLine_Athena_Harness_Yellow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_Yellow_C::ResetBlue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "ResetBlue");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_Yellow_C::Spark__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Spark__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_Yellow_C::Spark__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Spark__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_Yellow_C::Update_Begin_Z()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "Update Begin Z");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ZipLine_Athena_Harness_Yellow_C::UpdateZiplineFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ZipLine_Athena_Harness_Yellow_C", "UpdateZiplineFX");

	UObject::ProcessEvent(Func, nullptr);
}

}
