#pragma once

#include "Basic.hpp"

#include "AthenaLockedStyleNotification_classes.hpp"
#include "AthenaLockedStyleNotification_parameters.hpp"

namespace SDK
{

void UAthenaLockedStyleNotification_C::ExecuteUbergraph_AthenaLockedStyleNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "ExecuteUbergraph_AthenaLockedStyleNotification");

	Params::AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockedStyleNotification_C::OnUnlockingInfoSet(bool bShowProgression)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "OnUnlockingInfoSet");

	Params::AthenaLockedStyleNotification_C_OnUnlockingInfoSet Parms{};

	Parms.bShowProgression = bShowProgression;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLockedStyleNotification_C::OutroFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "OutroFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockedStyleNotification_C::RequestIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "RequestIntroAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockedStyleNotification_C::RequestOutroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "RequestOutroAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLockedStyleNotification_C::RequestUpdateAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockedStyleNotification_C", "RequestUpdateAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}
