#pragma once

#include "Basic.hpp"

#include "BPS24_SeasonalDataWidget_classes.hpp"
#include "BPS24_SeasonalDataWidget_parameters.hpp"

namespace SDK
{

void UBPS24_SeasonalDataWidget_C::ExecuteUbergraph_BPS24_SeasonalDataWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_SeasonalDataWidget_C", "ExecuteUbergraph_BPS24_SeasonalDataWidget");

	Params::BPS24_SeasonalDataWidget_C_ExecuteUbergraph_BPS24_SeasonalDataWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_SeasonalDataWidget_C::OnBattlePassOwned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_SeasonalDataWidget_C", "OnBattlePassOwned");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_SeasonalDataWidget_C::OnLevelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_SeasonalDataWidget_C", "OnLevelChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_SeasonalDataWidget_C::OnProgressUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_SeasonalDataWidget_C", "OnProgressUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_SeasonalDataWidget_C::OnSuperCharged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_SeasonalDataWidget_C", "OnSuperCharged");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_SeasonalDataWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_SeasonalDataWidget_C", "PreConstruct");

	Params::BPS24_SeasonalDataWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_SeasonalDataWidget_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_SeasonalDataWidget_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

}
