#pragma once

#include "Basic.hpp"

#include "WBP_RebootRallyPopupModal_classes.hpp"
#include "WBP_RebootRallyPopupModal_parameters.hpp"

namespace SDK
{

void UWBP_RebootRallyPopupModal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallyPopupModal_C::ExecuteUbergraph_WBP_RebootRallyPopupModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_C", "ExecuteUbergraph_WBP_RebootRallyPopupModal");

	Params::WBP_RebootRallyPopupModal_C_ExecuteUbergraph_WBP_RebootRallyPopupModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_RebootRallyPopupModal_C::OnFailure_64C14A3847EFAA993FB47C990CFD9E3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_C", "OnFailure_64C14A3847EFAA993FB47C990CFD9E3D");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallyPopupModal_C::OnIgnored_64C14A3847EFAA993FB47C990CFD9E3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_C", "OnIgnored_64C14A3847EFAA993FB47C990CFD9E3D");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_RebootRallyPopupModal_C::OnSetIsInvite(bool bIsInvited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_C", "OnSetIsInvite");

	Params::WBP_RebootRallyPopupModal_C_OnSetIsInvite Parms{};

	Parms.bIsInvited = bIsInvited;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_RebootRallyPopupModal_C::OnSuccess_64C14A3847EFAA993FB47C990CFD9E3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RebootRallyPopupModal_C", "OnSuccess_64C14A3847EFAA993FB47C990CFD9E3D");

	UObject::ProcessEvent(Func, nullptr);
}

}
