#pragma once

#include "Basic.hpp"

#include "FortnitePartyHeroSelect_Camera_classes.hpp"
#include "FortnitePartyHeroSelect_Camera_parameters.hpp"

namespace SDK
{

void AFortnitePartyHeroSelect_Camera_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "ReceiveTick");

	Params::FortnitePartyHeroSelect_Camera_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortnitePartyHeroSelect_Camera_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "BP_OnActivated");

	Params::FortnitePartyHeroSelect_Camera_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortnitePartyHeroSelect_Camera_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");

	Params::FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortnitePartyHeroSelect_Camera_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");

	Params::FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortnitePartyHeroSelect_Camera_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");

	Params::FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortnitePartyHeroSelect_Camera_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	Params::FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortnitePartyHeroSelect_Camera_C::HandleMouseRelease()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "HandleMouseRelease");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortnitePartyHeroSelect_Camera_C::HandleMousePress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "HandleMousePress");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortnitePartyHeroSelect_Camera_C::ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "ExecuteUbergraph_FortnitePartyHeroSelect_Camera");

	Params::FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortnitePartyHeroSelect_Camera_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "BP_OnDeactivated");

	Params::FortnitePartyHeroSelect_Camera_C_BP_OnDeactivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

}
