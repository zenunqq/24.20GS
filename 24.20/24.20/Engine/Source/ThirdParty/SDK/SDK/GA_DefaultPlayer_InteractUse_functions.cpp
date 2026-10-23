#pragma once

#include "Basic.hpp"

#include "GA_DefaultPlayer_InteractUse_classes.hpp"
#include "GA_DefaultPlayer_InteractUse_parameters.hpp"

namespace SDK
{

void UGA_DefaultPlayer_InteractUse_C::ExecuteUbergraph_GA_DefaultPlayer_InteractUse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "ExecuteUbergraph_GA_DefaultPlayer_InteractUse");

	Params::GA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_DefaultPlayer_InteractUse_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DefaultPlayer_InteractUse_C::OnBlendOut_A513E1E044E129CC612DF5A23589BC9C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnBlendOut_A513E1E044E129CC612DF5A23589BC9C");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DefaultPlayer_InteractUse_C::OnCancelled_A513E1E044E129CC612DF5A23589BC9C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnCancelled_A513E1E044E129CC612DF5A23589BC9C");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DefaultPlayer_InteractUse_C::OnCompleted_A513E1E044E129CC612DF5A23589BC9C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnCompleted_A513E1E044E129CC612DF5A23589BC9C");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DefaultPlayer_InteractUse_C::OnInterrupted_A513E1E044E129CC612DF5A23589BC9C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnInterrupted_A513E1E044E129CC612DF5A23589BC9C");

	UObject::ProcessEvent(Func, nullptr);
}

}
