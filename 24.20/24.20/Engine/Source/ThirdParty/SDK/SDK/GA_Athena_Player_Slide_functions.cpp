#pragma once

#include "Basic.hpp"

#include "GA_Athena_Player_Slide_classes.hpp"
#include "GA_Athena_Player_Slide_parameters.hpp"

namespace SDK
{

void UGA_Athena_Player_Slide_C::AddMomentum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "AddMomentum");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Player_Slide_C::CameraFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "CameraFX");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Player_Slide_C::EndAbilityClientSide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "EndAbilityClientSide");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Player_Slide_C::EndAbilityServerSide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "EndAbilityServerSide");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Player_Slide_C::EndLevelGroundSlide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "EndLevelGroundSlide");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Player_Slide_C::ExecuteUbergraph_GA_Athena_Player_Slide(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "ExecuteUbergraph_GA_Athena_Player_Slide");

	Params::GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Player_Slide_C::ForceRemoveSlideGC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "ForceRemoveSlideGC");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Player_Slide_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Player_Slide_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "K2_OnEndAbility");

	Params::GA_Athena_Player_Slide_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Player_Slide_C::OnFinishedCharacterCustomization_Event_0(class AFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "OnFinishedCharacterCustomization_Event_0");

	Params::GA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0 Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

bool UGA_Athena_Player_Slide_C::BuildDataRegistryResolverScope(TArray<class FName>* InOutResolverScopes, int32* InOutPriority) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Player_Slide_C", "BuildDataRegistryResolverScope");

	Params::GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InOutResolverScopes != nullptr)
		*InOutResolverScopes = std::move(Parms.InOutResolverScopes);

	if (InOutPriority != nullptr)
		*InOutPriority = Parms.InOutPriority;

	return Parms.ReturnValue;
}

}
