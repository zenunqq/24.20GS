#pragma once

#include "Basic.hpp"

#include "BladesMenu_XpBar_classes.hpp"
#include "BladesMenu_XpBar_parameters.hpp"

namespace SDK
{

void UBladesMenu_XpBar_C::ExecuteUbergraph_BladesMenu_XpBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BladesMenu_XpBar_C", "ExecuteUbergraph_BladesMenu_XpBar");

	Params::BladesMenu_XpBar_C_ExecuteUbergraph_BladesMenu_XpBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBladesMenu_XpBar_C::OnLevelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BladesMenu_XpBar_C", "OnLevelChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UBladesMenu_XpBar_C::OnProgressUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BladesMenu_XpBar_C", "OnProgressUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBladesMenu_XpBar_C::OnSuperCharged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BladesMenu_XpBar_C", "OnSuperCharged");

	UObject::ProcessEvent(Func, nullptr);
}

void UBladesMenu_XpBar_C::OnUpdatedRestedState(const bool bIsRested)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BladesMenu_XpBar_C", "OnUpdatedRestedState");

	Params::BladesMenu_XpBar_C_OnUpdatedRestedState Parms{};

	Parms.bIsRested = bIsRested;

	UObject::ProcessEvent(Func, &Parms);
}

void UBladesMenu_XpBar_C::Update_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BladesMenu_XpBar_C", "Update Text");

	UObject::ProcessEvent(Func, nullptr);
}

}
