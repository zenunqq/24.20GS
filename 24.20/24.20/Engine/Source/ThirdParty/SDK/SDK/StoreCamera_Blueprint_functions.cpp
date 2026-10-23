#pragma once

#include "Basic.hpp"

#include "StoreCamera_Blueprint_classes.hpp"
#include "StoreCamera_Blueprint_parameters.hpp"

namespace SDK
{

void AStoreCamera_Blueprint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void AStoreCamera_Blueprint_C::ExecuteUbergraph_StoreCamera_Blueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ExecuteUbergraph_StoreCamera_Blueprint");

	Params::StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AStoreCamera_Blueprint_C::DarkenBGVisibility(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "DarkenBGVisibility");

	Params::StoreCamera_Blueprint_C_DarkenBGVisibility Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

void AStoreCamera_Blueprint_C::ChoicePackFOV_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePackFOV-Out");

	UObject::ProcessEvent(Func, nullptr);
}

void AStoreCamera_Blueprint_C::ChoicePackFOV_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePackFOV-In");

	UObject::ProcessEvent(Func, nullptr);
}

void AStoreCamera_Blueprint_C::ChoicePack__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePack__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AStoreCamera_Blueprint_C::ChoicePack__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ChoicePack__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AStoreCamera_Blueprint_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "BP_OnDeactivated");

	Params::StoreCamera_Blueprint_C_BP_OnDeactivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AStoreCamera_Blueprint_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "BP_OnActivated");

	Params::StoreCamera_Blueprint_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AStoreCamera_Blueprint_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AStoreCamera_Blueprint_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AStoreCamera_Blueprint_C::ResetCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "ResetCamera");

	UObject::ProcessEvent(Func, nullptr);
}

void AStoreCamera_Blueprint_C::OpeningCameraTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCamera_Blueprint_C", "OpeningCameraTransition");

	UObject::ProcessEvent(Func, nullptr);
}

}
