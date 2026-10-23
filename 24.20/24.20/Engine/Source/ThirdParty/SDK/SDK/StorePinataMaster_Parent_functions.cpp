#pragma once

#include "Basic.hpp"

#include "StorePinataMaster_Parent_classes.hpp"
#include "StorePinataMaster_Parent_parameters.hpp"

namespace SDK
{

void AStorePinataMaster_Parent_C::InitiatePinata()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "InitiatePinata");

	UObject::ProcessEvent(Func, nullptr);
}

void AStorePinataMaster_Parent_C::ExecuteUbergraph_StorePinataMaster_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "ExecuteUbergraph_StorePinataMaster_Parent");

	Params::StorePinataMaster_Parent_C_ExecuteUbergraph_StorePinataMaster_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AStorePinataMaster_Parent_C::CameraTransitionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "CameraTransitionComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void AStorePinataMaster_Parent_C::CameraResetComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StorePinataMaster_Parent_C", "CameraResetComplete");

	UObject::ProcessEvent(Func, nullptr);
}

}
