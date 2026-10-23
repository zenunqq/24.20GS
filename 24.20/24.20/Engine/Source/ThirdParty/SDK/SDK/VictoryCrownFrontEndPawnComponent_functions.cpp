#pragma once

#include "Basic.hpp"

#include "VictoryCrownFrontEndPawnComponent_classes.hpp"
#include "VictoryCrownFrontEndPawnComponent_parameters.hpp"

namespace SDK
{

void UVictoryCrownFrontEndPawnComponent_C::ExecuteUbergraph_VictoryCrownFrontEndPawnComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "ExecuteUbergraph_VictoryCrownFrontEndPawnComponent");

	Params::VictoryCrownFrontEndPawnComponent_C_ExecuteUbergraph_VictoryCrownFrontEndPawnComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UVictoryCrownFrontEndPawnComponent_C::OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6");

	Params::VictoryCrownFrontEndPawnComponent_C_OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6 Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);
}

void UVictoryCrownFrontEndPawnComponent_C::PlaylistChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "PlaylistChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UVictoryCrownFrontEndPawnComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void UVictoryCrownFrontEndPawnComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "ReceiveEndPlay");

	Params::VictoryCrownFrontEndPawnComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void UVictoryCrownFrontEndPawnComponent_C::UpdateForGCNL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "UpdateForGCNL");

	UObject::ProcessEvent(Func, nullptr);
}

}
