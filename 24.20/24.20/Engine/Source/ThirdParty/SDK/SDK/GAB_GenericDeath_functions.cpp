#pragma once

#include "Basic.hpp"

#include "GAB_GenericDeath_classes.hpp"
#include "GAB_GenericDeath_parameters.hpp"

namespace SDK
{

void UGAB_GenericDeath_C::ExecuteUbergraph_GAB_GenericDeath(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "ExecuteUbergraph_GAB_GenericDeath");

	Params::GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_GenericDeath_C::GetRandomSectionName(int32 MaxNumberOfSections, class FName OriginalSectionName, class FName* SectionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "GetRandomSectionName");

	Params::GAB_GenericDeath_C_GetRandomSectionName Parms{};

	Parms.MaxNumberOfSections = MaxNumberOfSections;
	Parms.OriginalSectionName = OriginalSectionName;

	UObject::ProcessEvent(Func, &Parms);

	if (SectionName != nullptr)
		*SectionName = Parms.SectionName;
}

void UGAB_GenericDeath_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "InitializeDeathHitDirection");

	Params::GAB_GenericDeath_C_InitializeDeathHitDirection Parms{};

	Parms.EventHitData = std::move(EventHitData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_GenericDeath_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_GenericDeath_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_GenericDeath_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "K2_OnEndAbility");

	Params::GAB_GenericDeath_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_GenericDeath_C::OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_GenericDeath_C::OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_GenericDeath_C::OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_GenericDeath_C::OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_GenericDeath_C::PickDeathMontageSection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_GenericDeath_C", "PickDeathMontageSection");

	UObject::ProcessEvent(Func, nullptr);
}

}
