#pragma once

#include "Basic.hpp"

#include "WeakSpot_classes.hpp"
#include "WeakSpot_parameters.hpp"

namespace SDK
{

void AWeakSpot_C::ExecuteUbergraph_WeakSpot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeakSpot_C", "ExecuteUbergraph_WeakSpot");

	Params::WeakSpot_C_ExecuteUbergraph_WeakSpot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AWeakSpot_C::HideMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeakSpot_C", "HideMesh");

	UObject::ProcessEvent(Func, nullptr);
}

void AWeakSpot_C::OnFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeakSpot_C", "OnFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}

void AWeakSpot_C::OnHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeakSpot_C", "OnHit");

	UObject::ProcessEvent(Func, nullptr);
}

void AWeakSpot_C::OnStartDirectionEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeakSpot_C", "OnStartDirectionEffect");

	UObject::ProcessEvent(Func, nullptr);
}

void AWeakSpot_C::ScaleDownParticleTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeakSpot_C", "ScaleDownParticleTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AWeakSpot_C::ScaleDownParticleTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeakSpot_C", "ScaleDownParticleTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AWeakSpot_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeakSpot_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
