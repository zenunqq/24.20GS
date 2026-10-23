#pragma once

#include "Basic.hpp"

#include "HeroesCamera_Blueprint_classes.hpp"
#include "HeroesCamera_Blueprint_parameters.hpp"

namespace SDK
{

void AHeroesCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "ReceiveTick");

	Params::HeroesCamera_Blueprint_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void AHeroesCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");

	Params::HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

void AHeroesCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");

	Params::HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

void AHeroesCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");

	Params::HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

void AHeroesCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	Params::HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

void AHeroesCamera_Blueprint_C::HandleMouseRelease()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "HandleMouseRelease");

	UObject::ProcessEvent(Func, nullptr);
}

void AHeroesCamera_Blueprint_C::HandleMousePress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "HandleMousePress");

	UObject::ProcessEvent(Func, nullptr);
}

void AHeroesCamera_Blueprint_C::ExecuteUbergraph_HeroesCamera_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "ExecuteUbergraph_HeroesCamera_Blueprint");

	Params::HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AHeroesCamera_Blueprint_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "BP_OnDeactivated");

	Params::HeroesCamera_Blueprint_C_BP_OnDeactivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AHeroesCamera_Blueprint_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroesCamera_Blueprint_C", "BP_OnActivated");

	Params::HeroesCamera_Blueprint_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

}
