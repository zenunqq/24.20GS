#pragma once

#include "Basic.hpp"

#include "GA_DefaultPlayer_PetOtherPet_classes.hpp"
#include "GA_DefaultPlayer_PetOtherPet_parameters.hpp"

namespace SDK
{

void UGA_DefaultPlayer_PetOtherPet_C::ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet");

	Params::GA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_DefaultPlayer_PetOtherPet_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DefaultPlayer_PetOtherPet_C::OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DefaultPlayer_PetOtherPet_C::OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DefaultPlayer_PetOtherPet_C::OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DefaultPlayer_PetOtherPet_C::OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330");

	UObject::ProcessEvent(Func, nullptr);
}

}
