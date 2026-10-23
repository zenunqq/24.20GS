#pragma once

#include "Basic.hpp"

#include "BP_SurfaceTypeSoundComponent_classes.hpp"
#include "BP_SurfaceTypeSoundComponent_parameters.hpp"

namespace SDK
{

void UBP_SurfaceTypeSoundComponent_C::ActuallyPlaySound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "ActuallyPlaySound");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SurfaceTypeSoundComponent_C::ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "ExecuteUbergraph_BP_SurfaceTypeSoundComponent");

	Params::BP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SurfaceTypeSoundComponent_C::PlaySound(const struct FVector& Location_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "PlaySound");

	Params::BP_SurfaceTypeSoundComponent_C_PlaySound Parms{};

	Parms.Location_0 = std::move(Location_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SurfaceTypeSoundComponent_C::SetSurfaceType(EPhysicalSurface SurfaceType_0, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "SetSurfaceType");

	Params::BP_SurfaceTypeSoundComponent_C_SetSurfaceType Parms{};

	Parms.SurfaceType_0 = SurfaceType_0;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SurfaceTypeSoundComponent_C::Test_Delay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "Test Delay");

	UObject::ProcessEvent(Func, nullptr);
}

}
